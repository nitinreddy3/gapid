// Copyright (C) 2017 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

package compiler

import (
	"bytes"
	"fmt"
	"regexp"
	"strings"

	"github.com/google/gapid/core/codegen"
)

// Program is the output of a compilation.
type Program struct {
	// Settings used to compile the program.
	Settings Settings

	// Commands is a map of command name to CommandInfo.
	Commands map[string]*CommandInfo

	// Structs is a map of struct name to StructInfo.
	Structs map[string]*StructInfo

	// Maps is a map of map name to MapInfo.
	Maps map[string]*MapInfo

	// Globals is the StructInfo of all the globals.
	Globals *StructInfo

	// Locations is the array of source locations.
	// Only generated if Settings.CodeLocations is true.
	Locations []Location

	// Module is the generated code module.
	Module *codegen.Module

	// Initializer is a function that initializes the globals with defaults.
	// The function has the signature: void (ctx* ctx)
	Initializer codegen.Function
}

// CommandInfo holds the generated execute function for a given command.
type CommandInfo struct {
	// The execute function for the given command.
	// The function has the signature: void (ctx*, Params*)
	Execute codegen.Function

	// The Params structure that is passed to Execute.
	Parameters *codegen.Struct
}

// StructInfo holds the generated structure for a given structure type.
type StructInfo struct {
	Type *codegen.Struct
}

// MapInfo holds the generated map info for a given semantic map type.
type MapInfo struct {
	Type     *codegen.Struct // Maps are held as pointers to these structs
	Elements *codegen.Struct
	Key      codegen.Type
	Val      codegen.Type
	Element  codegen.Type
	Contains codegen.Function // bool(ctx*, M*, K)
	Index    codegen.Function //   V*(ctx*, M*, K, addIfNotFound)
	Lookup   codegen.Function //   V(ctx*, M*, K)
	Remove   codegen.Function // void(ctx*, M*, K)
	Clear    codegen.Function // void(ctx*, M*)
}

// Location defines a single .api source location.
type Location struct {
	File   string
	Line   int
	Column int
}

func (l Location) String() string {
	return fmt.Sprintf("%v:%v:%v", l.File, l.Line, l.Column)
}

// Dump returns the full LLVM IR for the program.
func (p *Program) Dump() string {
	return p.Module.String()
}

var reIRDefineFunc = regexp.MustCompile(`define \w* @(\w*)\([^\)]*\)`)

// IR returns a map of function to IR.
func (p *Program) IR() map[string]string {
	ir := p.Module.String()
	out := map[string]string{}
	currentFunc, currentIR := "", &bytes.Buffer{}
	flush := func() {
		if currentFunc != "" {
			out[currentFunc] = currentIR.String()
			currentIR.Reset()
			currentFunc = ""
		}
	}
	for _, line := range strings.Split(ir, "\n") {
		matches := reIRDefineFunc.FindStringSubmatch(line)
		if len(matches) == 2 {
			flush()
			currentFunc = matches[1]
			currentIR.WriteString(line)
		} else if currentFunc != "" {
			currentIR.WriteRune('\n')
			currentIR.WriteString(line)
		}
		if line == "}" {
			flush()
			currentFunc = ""
		}
	}
	flush()
	return out
}
