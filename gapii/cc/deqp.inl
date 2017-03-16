/*
 * Copyright (C) 2017 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

// This file is imported in the context of a function with FUN nd NO_FUN
// defined. The order and content of this list must match the order and
// content used by dEQP in glw::Functions.
//
// #define FUN(f) printf("function %s", #f);
// #define NO_FUN(f) printf("no function %s", #f);
//
// void example() {
    FUN(glActiveShaderProgram);
    FUN(glActiveTexture);
    FUN(glAttachShader);
    NO_FUN(glBeginConditionalRender);
    FUN(glBeginQuery);
    NO_FUN(glBeginQueryIndexed);
    FUN(glBeginTransformFeedback);
    FUN(glBindAttribLocation);
    FUN(glBindBuffer);
    FUN(glBindBufferBase);
    FUN(glBindBufferRange);
    NO_FUN(glBindBuffersBase);
    NO_FUN(glBindBuffersRange);
    NO_FUN(glBindFragDataLocation);
    NO_FUN(glBindFragDataLocationIndexed);
    FUN(glBindFramebuffer);
    FUN(glBindImageTexture);
    NO_FUN(glBindImageTextures);
    FUN(glBindProgramPipeline);
    FUN(glBindRenderbuffer);
    FUN(glBindSampler);
    NO_FUN(glBindSamplers);
    FUN(glBindTexture);
    NO_FUN(glBindTextureUnit);
    NO_FUN(glBindTextures);
    FUN(glBindTransformFeedback);
    FUN(glBindVertexArray);
    FUN(glBindVertexBuffer);
    NO_FUN(glBindVertexBuffers);
    FUN(glBlendBarrierKHR);
    FUN(glBlendColor);
    FUN(glBlendEquation);
    FUN(glBlendEquationSeparate);
    FUN(glBlendEquationSeparatei);
    FUN(glBlendEquationi);
    FUN(glBlendFunc);
    FUN(glBlendFuncSeparate);
    FUN(glBlendFuncSeparatei);
    FUN(glBlendFunci);
    FUN(glBlitFramebuffer);
    NO_FUN(glBlitNamedFramebuffer);
    FUN(glBufferData);
    NO_FUN(glBufferStorage);
    FUN(glBufferSubData);
    FUN(glCheckFramebufferStatus);
    NO_FUN(glCheckNamedFramebufferStatus);
    NO_FUN(glClampColor);
    FUN(glClear);
    NO_FUN(glClearBufferData);
    NO_FUN(glClearBufferSubData);
    FUN(glClearBufferfi);
    FUN(glClearBufferfv);
    FUN(glClearBufferiv);
    FUN(glClearBufferuiv);
    FUN(glClearColor);
    NO_FUN(glClearDepth);
    FUN(glClearDepthf);
    NO_FUN(glClearNamedBufferData);
    NO_FUN(glClearNamedBufferSubData);
    NO_FUN(glClearNamedFramebufferfi);
    NO_FUN(glClearNamedFramebufferfv);
    NO_FUN(glClearNamedFramebufferiv);
    NO_FUN(glClearNamedFramebufferuiv);
    FUN(glClearStencil);
    NO_FUN(glClearTexImage);
    NO_FUN(glClearTexSubImage);
    FUN(glClientWaitSync);
    NO_FUN(glClipControl);
    FUN(glColorMask);
    FUN(glColorMaski);
    FUN(glCompileShader);
    NO_FUN(glCompressedTexImage1D);
    FUN(glCompressedTexImage2D);
    FUN(glCompressedTexImage3D);
    NO_FUN(glCompressedTexSubImage1D);
    FUN(glCompressedTexSubImage2D);
    NO_FUN(glCompressedTexSubImage3D);
    NO_FUN(glCompressedTextureSubImage1D);
    NO_FUN(glCompressedTextureSubImage2D);
    NO_FUN(glCompressedTextureSubImage3D);
    FUN(glCopyBufferSubData);
    FUN(glCopyImageSubData);
    NO_FUN(glCopyNamedBufferSubData);
    NO_FUN(glCopyTexImage1D);
    FUN(glCopyTexImage2D);
    NO_FUN(glCopyTexSubImage1D);
    FUN(glCopyTexSubImage2D);
    FUN(glCopyTexSubImage3D);
    NO_FUN(glCopyTextureSubImage1D);
    NO_FUN(glCopyTextureSubImage2D);
    NO_FUN(glCopyTextureSubImage3D);
    NO_FUN(glCreateBuffers);
    NO_FUN(glCreateFramebuffers);
    FUN(glCreateProgram);
    NO_FUN(glCreateProgramPipelines);
    NO_FUN(glCreateQueries);
    NO_FUN(glCreateRenderbuffers);
    NO_FUN(glCreateSamplers);
    FUN(glCreateShader);
    FUN(glCreateShaderProgramv);
    NO_FUN(glCreateTextures);
    NO_FUN(glCreateTransformFeedbacks);
    NO_FUN(glCreateVertexArrays);
    FUN(glCullFace);
    FUN(glDebugMessageCallback);
    FUN(glDebugMessageControl);
    FUN(glDebugMessageInsert);
    FUN(glDeleteBuffers);
    FUN(glDeleteFramebuffers);
    FUN(glDeleteProgram);
    FUN(glDeleteProgramPipelines);
    FUN(glDeleteQueries);
    FUN(glDeleteRenderbuffers);
    FUN(glDeleteSamplers);
    FUN(glDeleteShader);
    FUN(glDeleteSync);
    FUN(glDeleteTextures);
    FUN(glDeleteTransformFeedbacks);
    FUN(glDeleteVertexArrays);
    FUN(glDepthFunc);
    FUN(glDepthMask);
    NO_FUN(glDepthRange);
    NO_FUN(glDepthRangeArrayv);
    NO_FUN(glDepthRangeIndexed);
    FUN(glDepthRangef);
    FUN(glDetachShader);
    FUN(glDisable);
    NO_FUN(glDisableVertexArrayAttrib);
    FUN(glDisableVertexAttribArray);
    FUN(glDisablei);
    FUN(glDispatchCompute);
    FUN(glDispatchComputeIndirect);
    FUN(glDrawArrays);
    FUN(glDrawArraysIndirect);
    FUN(glDrawArraysInstanced);
    NO_FUN(glDrawArraysInstancedBaseInstance);
    NO_FUN(glDrawBuffer);
    FUN(glDrawBuffers);
    FUN(glDrawElements);
    FUN(glDrawElementsBaseVertex);
    FUN(glDrawElementsIndirect);
    FUN(glDrawElementsInstanced);
    NO_FUN(glDrawElementsInstancedBaseInstance);
    FUN(glDrawElementsInstancedBaseVertex);
    NO_FUN(glDrawElementsInstancedBaseVertexBaseInstance);
    FUN(glDrawRangeElements);
    FUN(glDrawRangeElementsBaseVertex);
    NO_FUN(glDrawTransformFeedback);
    NO_FUN(glDrawTransformFeedbackInstanced);
    NO_FUN(glDrawTransformFeedbackStream);
    NO_FUN(glDrawTransformFeedbackStreamInstanced);
    FUN(glEGLImageTargetRenderbufferStorageOES);
    FUN(glEGLImageTargetTexture2DOES);
    FUN(glEnable);
    NO_FUN(glEnableVertexArrayAttrib);
    FUN(glEnableVertexAttribArray);
    FUN(glEnablei);
    NO_FUN(glEndConditionalRender);
    FUN(glEndQuery);
    NO_FUN(glEndQueryIndexed);
    FUN(glEndTransformFeedback);
    FUN(glFenceSync);
    FUN(glFinish);
    FUN(glFlush);
    FUN(glFlushMappedBufferRange);
    NO_FUN(glFlushMappedNamedBufferRange);
    FUN(glFramebufferParameteri);
    FUN(glFramebufferRenderbuffer);
    FUN(glFramebufferTexture);
    NO_FUN(glFramebufferTexture1D);
    FUN(glFramebufferTexture2D);
    NO_FUN(glFramebufferTexture3D);
    FUN(glFramebufferTextureLayer);
    FUN(glFrontFace);
    FUN(glGenBuffers);
    FUN(glGenFramebuffers);
    FUN(glGenProgramPipelines);
    FUN(glGenQueries);
    FUN(glGenRenderbuffers);
    FUN(glGenSamplers);
    FUN(glGenTextures);
    FUN(glGenTransformFeedbacks);
    FUN(glGenVertexArrays);
    FUN(glGenerateMipmap);
    NO_FUN(glGenerateTextureMipmap);
    NO_FUN(glGetActiveAtomicCounterBufferiv);
    FUN(glGetActiveAttrib);
    NO_FUN(glGetActiveSubroutineName);
    NO_FUN(glGetActiveSubroutineUniformName);
    NO_FUN(glGetActiveSubroutineUniformiv);
    FUN(glGetActiveUniform);
    FUN(glGetActiveUniformBlockName);
    FUN(glGetActiveUniformBlockiv);
    NO_FUN(glGetActiveUniformName);
    FUN(glGetActiveUniformsiv);
    FUN(glGetAttachedShaders);
    FUN(glGetAttribLocation);
    FUN(glGetBooleani_v);
    FUN(glGetBooleanv);
    FUN(glGetBufferParameteri64v);
    FUN(glGetBufferParameteriv);
    FUN(glGetBufferPointerv);
    NO_FUN(glGetBufferSubData);
    NO_FUN(glGetCompressedTexImage);
    NO_FUN(glGetCompressedTextureImage);
    NO_FUN(glGetCompressedTextureSubImage);
    FUN(glGetDebugMessageLog);
    NO_FUN(glGetDoublei_v);
    NO_FUN(glGetDoublev);
    FUN(glGetError);
    NO_FUN(glGetFloati_v);
    FUN(glGetFloatv);
    NO_FUN(glGetFragDataIndex);
    FUN(glGetFragDataLocation);
    FUN(glGetFramebufferAttachmentParameteriv);
    FUN(glGetFramebufferParameteriv);
    FUN(glGetGraphicsResetStatus);
    FUN(glGetInteger64i_v);
    FUN(glGetInteger64v);
    FUN(glGetIntegeri_v);
    FUN(glGetIntegerv);
    NO_FUN(glGetInternalformati64v);
    FUN(glGetInternalformativ);
    FUN(glGetMultisamplefv);
    NO_FUN(glGetNamedBufferParameteri64v);
    NO_FUN(glGetNamedBufferParameteriv);
    NO_FUN(glGetNamedBufferPointerv);
    NO_FUN(glGetNamedBufferSubData);
    NO_FUN(glGetNamedFramebufferAttachmentParameteriv);
    NO_FUN(glGetNamedFramebufferParameteriv);
    NO_FUN(glGetNamedRenderbufferParameteriv);
    FUN(glGetObjectLabel);
    FUN(glGetObjectPtrLabel);
    FUN(glGetPointerv);
    FUN(glGetProgramBinary);
    FUN(glGetProgramInfoLog);
    FUN(glGetProgramInterfaceiv);
    FUN(glGetProgramPipelineInfoLog);
    FUN(glGetProgramPipelineiv);
    FUN(glGetProgramResourceIndex);
    FUN(glGetProgramResourceLocation);
    NO_FUN(glGetProgramResourceLocationIndex);
    FUN(glGetProgramResourceName);
    FUN(glGetProgramResourceiv);
    NO_FUN(glGetProgramStageiv);
    FUN(glGetProgramiv);
    NO_FUN(glGetQueryBufferObjecti64v);
    NO_FUN(glGetQueryBufferObjectiv);
    NO_FUN(glGetQueryBufferObjectui64v);
    NO_FUN(glGetQueryBufferObjectuiv);
    NO_FUN(glGetQueryIndexediv);
    FUN(glGetQueryObjecti64v);
    NO_FUN(glGetQueryObjectiv);
    FUN(glGetQueryObjectui64v);
    FUN(glGetQueryObjectuiv);
    FUN(glGetQueryiv);
    FUN(glGetRenderbufferParameteriv);
    FUN(glGetSamplerParameterIiv);
    FUN(glGetSamplerParameterIuiv);
    FUN(glGetSamplerParameterfv);
    FUN(glGetSamplerParameteriv);
    FUN(glGetShaderInfoLog);
    FUN(glGetShaderPrecisionFormat);
    FUN(glGetShaderSource);
    FUN(glGetShaderiv);
    FUN(glGetString);
    FUN(glGetStringi);
    NO_FUN(glGetSubroutineIndex);
    NO_FUN(glGetSubroutineUniformLocation);
    FUN(glGetSynciv);
    NO_FUN(glGetTexImage);
    FUN(glGetTexLevelParameterfv);
    FUN(glGetTexLevelParameteriv);
    FUN(glGetTexParameterIiv);
    FUN(glGetTexParameterIuiv);
    FUN(glGetTexParameterfv);
    FUN(glGetTexParameteriv);
    NO_FUN(glGetTextureImage);
    NO_FUN(glGetTextureLevelParameterfv);
    NO_FUN(glGetTextureLevelParameteriv);
    NO_FUN(glGetTextureParameterIiv);
    NO_FUN(glGetTextureParameterIuiv);
    NO_FUN(glGetTextureParameterfv);
    NO_FUN(glGetTextureParameteriv);
    NO_FUN(glGetTextureSubImage);
    FUN(glGetTransformFeedbackVarying);
    NO_FUN(glGetTransformFeedbacki64_v);
    NO_FUN(glGetTransformFeedbacki_v);
    NO_FUN(glGetTransformFeedbackiv);
    FUN(glGetUniformBlockIndex);
    FUN(glGetUniformIndices);
    FUN(glGetUniformLocation);
    NO_FUN(glGetUniformSubroutineuiv);
    NO_FUN(glGetUniformdv);
    FUN(glGetUniformfv);
    FUN(glGetUniformiv);
    FUN(glGetUniformuiv);
    NO_FUN(glGetVertexArrayIndexed64iv);
    NO_FUN(glGetVertexArrayIndexediv);
    NO_FUN(glGetVertexArrayiv);
    FUN(glGetVertexAttribIiv);
    FUN(glGetVertexAttribIuiv);
    NO_FUN(glGetVertexAttribLdv);
    FUN(glGetVertexAttribPointerv);
    NO_FUN(glGetVertexAttribdv);
    FUN(glGetVertexAttribfv);
    FUN(glGetVertexAttribiv);
    NO_FUN(glGetnCompressedTexImage);
    NO_FUN(glGetnTexImage);
    NO_FUN(glGetnUniformdv);
    FUN(glGetnUniformfv);
    FUN(glGetnUniformiv);
    FUN(glGetnUniformuiv);
    FUN(glHint);
    FUN(glInsertEventMarkerEXT);
    NO_FUN(glInvalidateBufferData);
    NO_FUN(glInvalidateBufferSubData);
    FUN(glInvalidateFramebuffer);
    NO_FUN(glInvalidateNamedFramebufferData);
    NO_FUN(glInvalidateNamedFramebufferSubData);
    FUN(glInvalidateSubFramebuffer);
    NO_FUN(glInvalidateTexImage);
    NO_FUN(glInvalidateTexSubImage);
    FUN(glIsBuffer);
    FUN(glIsEnabled);
    FUN(glIsEnabledi);
    FUN(glIsFramebuffer);
    FUN(glIsProgram);
    FUN(glIsProgramPipeline);
    FUN(glIsQuery);
    FUN(glIsRenderbuffer);
    FUN(glIsSampler);
    FUN(glIsShader);
    FUN(glIsSync);
    FUN(glIsTexture);
    FUN(glIsTransformFeedback);
    FUN(glIsVertexArray);
    FUN(glLineWidth);
    FUN(glLinkProgram);
    FUN(glLogicOp);
    NO_FUN(glMapBuffer);
    FUN(glMapBufferRange);
    NO_FUN(glMapNamedBuffer);
    NO_FUN(glMapNamedBufferRange);
    FUN(glMemoryBarrier);
    FUN(glMemoryBarrierByRegion);
    FUN(glMinSampleShading);
    NO_FUN(glMultiDrawArrays);
    NO_FUN(glMultiDrawArraysIndirect);
    NO_FUN(glMultiDrawElements);
    NO_FUN(glMultiDrawElementsBaseVertex);
    NO_FUN(glMultiDrawElementsIndirect);
    NO_FUN(glNamedBufferData);
    NO_FUN(glNamedBufferStorage);
    NO_FUN(glNamedBufferSubData);
    NO_FUN(glNamedFramebufferDrawBuffer);
    NO_FUN(glNamedFramebufferDrawBuffers);
    NO_FUN(glNamedFramebufferParameteri);
    NO_FUN(glNamedFramebufferReadBuffer);
    NO_FUN(glNamedFramebufferRenderbuffer);
    NO_FUN(glNamedFramebufferTexture);
    NO_FUN(glNamedFramebufferTextureLayer);
    NO_FUN(glNamedRenderbufferStorage);
    NO_FUN(glNamedRenderbufferStorageMultisample);
    FUN(glObjectLabel);
    FUN(glObjectPtrLabel);
    NO_FUN(glPatchParameterfv);
    FUN(glPatchParameteri);
    FUN(glPauseTransformFeedback);
    NO_FUN(glPixelStoref);
    FUN(glPixelStorei);
    FUN(glPointParameterf);
    FUN(glPointParameterfv);
    NO_FUN(glPointParameteri);
    NO_FUN(glPointParameteriv);
    FUN(glPointSize);
    NO_FUN(glPolygonMode);
    FUN(glPolygonOffset);
    FUN(glPopDebugGroup);
    FUN(glPopGroupMarkerEXT);
    FUN(glPrimitiveBoundingBoxEXT);
    NO_FUN(glPrimitiveRestartIndex);
    FUN(glProgramBinary);
    FUN(glProgramParameteri);
    NO_FUN(glProgramUniform1d);
    NO_FUN(glProgramUniform1dv);
    FUN(glProgramUniform1f);
    FUN(glProgramUniform1fv);
    FUN(glProgramUniform1i);
    FUN(glProgramUniform1iv);
    FUN(glProgramUniform1ui);
    FUN(glProgramUniform1uiv);
    NO_FUN(glProgramUniform2d);
    NO_FUN(glProgramUniform2dv);
    FUN(glProgramUniform2f);
    FUN(glProgramUniform2fv);
    FUN(glProgramUniform2i);
    FUN(glProgramUniform2iv);
    FUN(glProgramUniform2ui);
    FUN(glProgramUniform2uiv);
    NO_FUN(glProgramUniform3d);
    NO_FUN(glProgramUniform3dv);
    FUN(glProgramUniform3f);
    FUN(glProgramUniform3fv);
    FUN(glProgramUniform3i);
    FUN(glProgramUniform3iv);
    FUN(glProgramUniform3ui);
    FUN(glProgramUniform3uiv);
    NO_FUN(glProgramUniform4d);
    NO_FUN(glProgramUniform4dv);
    FUN(glProgramUniform4f);
    FUN(glProgramUniform4fv);
    FUN(glProgramUniform4i);
    FUN(glProgramUniform4iv);
    FUN(glProgramUniform4ui);
    FUN(glProgramUniform4uiv);
    NO_FUN(glProgramUniformMatrix2dv);
    FUN(glProgramUniformMatrix2fv);
    NO_FUN(glProgramUniformMatrix2x3dv);
    NO_FUN(glProgramUniformMatrix2x3fv);
    NO_FUN(glProgramUniformMatrix2x4dv);
    NO_FUN(glProgramUniformMatrix2x4fv);
    NO_FUN(glProgramUniformMatrix3dv);
    FUN(glProgramUniformMatrix3fv);
    NO_FUN(glProgramUniformMatrix3x2dv);
    FUN(glProgramUniformMatrix3x2fv);
    NO_FUN(glProgramUniformMatrix3x4dv);
    FUN(glProgramUniformMatrix3x4fv);
    NO_FUN(glProgramUniformMatrix4dv);
    FUN(glProgramUniformMatrix4fv);
    NO_FUN(glProgramUniformMatrix4x2dv);
    NO_FUN(glProgramUniformMatrix4x2fv);
    NO_FUN(glProgramUniformMatrix4x3dv);
    FUN(glProgramUniformMatrix4x3fv);
    NO_FUN(glProvokingVertex);
    FUN(glPushDebugGroup);
    FUN(glPushGroupMarkerEXT);
    NO_FUN(glQueryCounter);
    FUN(glReadBuffer);
    FUN(glReadPixels);
    FUN(glReadnPixels);
    FUN(glReleaseShaderCompiler);
    FUN(glRenderbufferStorage);
    FUN(glRenderbufferStorageMultisample);
    FUN(glResumeTransformFeedback);
    FUN(glSampleCoverage);
    FUN(glSampleMaski);
    FUN(glSamplerParameterIiv);
    FUN(glSamplerParameterIuiv);
    FUN(glSamplerParameterf);
    FUN(glSamplerParameterfv);
    FUN(glSamplerParameteri);
    FUN(glSamplerParameteriv);
    FUN(glScissor);
    NO_FUN(glScissorArrayv);
    NO_FUN(glScissorIndexed);
    NO_FUN(glScissorIndexedv);
    FUN(glShaderBinary);
    FUN(glShaderSource);
    NO_FUN(glShaderStorageBlockBinding);
    FUN(glStencilFunc);
    FUN(glStencilFuncSeparate);
    FUN(glStencilMask);
    FUN(glStencilMaskSeparate);
    FUN(glStencilOp);
    FUN(glStencilOpSeparate);
    FUN(glTexBuffer);
    FUN(glTexBufferRange);
    NO_FUN(glTexImage1D);
    FUN(glTexImage2D);
    NO_FUN(glTexImage2DMultisample);
    FUN(glTexImage3D);
    NO_FUN(glTexImage3DMultisample);
    FUN(glTexParameterIiv);
    FUN(glTexParameterIuiv);
    FUN(glTexParameterf);
    FUN(glTexParameterfv);
    FUN(glTexParameteri);
    FUN(glTexParameteriv);
    NO_FUN(glTexStorage1D);
    FUN(glTexStorage2D);
    FUN(glTexStorage2DMultisample);
    FUN(glTexStorage3D);
    FUN(glTexStorage3DMultisample);
    NO_FUN(glTexSubImage1D);
    FUN(glTexSubImage2D);
    FUN(glTexSubImage3D);
    NO_FUN(glTextureBarrier);
    NO_FUN(glTextureBuffer);
    NO_FUN(glTextureBufferRange);
    NO_FUN(glTextureParameterIiv);
    NO_FUN(glTextureParameterIuiv);
    NO_FUN(glTextureParameterf);
    NO_FUN(glTextureParameterfv);
    NO_FUN(glTextureParameteri);
    NO_FUN(glTextureParameteriv);
    NO_FUN(glTextureStorage1D);
    NO_FUN(glTextureStorage2D);
    NO_FUN(glTextureStorage2DMultisample);
    NO_FUN(glTextureStorage3D);
    NO_FUN(glTextureStorage3DMultisample);
    NO_FUN(glTextureSubImage1D);
    NO_FUN(glTextureSubImage2D);
    NO_FUN(glTextureSubImage3D);
    NO_FUN(glTextureView);
    NO_FUN(glTransformFeedbackBufferBase);
    NO_FUN(glTransformFeedbackBufferRange);
    FUN(glTransformFeedbackVaryings);
    NO_FUN(glUniform1d);
    NO_FUN(glUniform1dv);
    FUN(glUniform1f);
    FUN(glUniform1fv);
    FUN(glUniform1i);
    FUN(glUniform1iv);
    FUN(glUniform1ui);
    FUN(glUniform1uiv);
    NO_FUN(glUniform2d);
    NO_FUN(glUniform2dv);
    FUN(glUniform2f);
    FUN(glUniform2fv);
    FUN(glUniform2i);
    FUN(glUniform2iv);
    FUN(glUniform2ui);
    FUN(glUniform2uiv);
    NO_FUN(glUniform3d);
    NO_FUN(glUniform3dv);
    FUN(glUniform3f);
    FUN(glUniform3fv);
    FUN(glUniform3i);
    FUN(glUniform3iv);
    FUN(glUniform3ui);
    FUN(glUniform3uiv);
    NO_FUN(glUniform4d);
    NO_FUN(glUniform4dv);
    FUN(glUniform4f);
    FUN(glUniform4fv);
    FUN(glUniform4i);
    FUN(glUniform4iv);
    FUN(glUniform4ui);
    FUN(glUniform4uiv);
    FUN(glUniformBlockBinding);
    NO_FUN(glUniformMatrix2dv);
    FUN(glUniformMatrix2fv);
    NO_FUN(glUniformMatrix2x3dv);
    FUN(glUniformMatrix2x3fv);
    NO_FUN(glUniformMatrix2x4dv);
    NO_FUN(glUniformMatrix2x4fv);
    NO_FUN(glUniformMatrix3dv);
    FUN(glUniformMatrix3fv);
    NO_FUN(glUniformMatrix3x2dv);
    FUN(glUniformMatrix3x2fv);
    NO_FUN(glUniformMatrix3x4dv);
    FUN(glUniformMatrix3x4fv);
    NO_FUN(glUniformMatrix4dv);
    FUN(glUniformMatrix4fv);
    NO_FUN(glUniformMatrix4x2dv);
    FUN(glUniformMatrix4x2fv);
    NO_FUN(glUniformMatrix4x3dv);
    FUN(glUniformMatrix4x3fv);
    NO_FUN(glUniformSubroutinesuiv);
    FUN(glUnmapBuffer);
    NO_FUN(glUnmapNamedBuffer);
    FUN(glUseProgram);
    FUN(glUseProgramStages);
    FUN(glValidateProgram);
    FUN(glValidateProgramPipeline);
    NO_FUN(glVertexArrayAttribBinding);
    NO_FUN(glVertexArrayAttribFormat);
    NO_FUN(glVertexArrayAttribIFormat);
    NO_FUN(glVertexArrayAttribLFormat);
    NO_FUN(glVertexArrayBindingDivisor);
    NO_FUN(glVertexArrayElementBuffer);
    NO_FUN(glVertexArrayVertexBuffer);
    NO_FUN(glVertexArrayVertexBuffers);
    NO_FUN(glVertexAttrib1d);
    NO_FUN(glVertexAttrib1dv);
    FUN(glVertexAttrib1f);
    FUN(glVertexAttrib1fv);
    NO_FUN(glVertexAttrib1s);
    NO_FUN(glVertexAttrib1sv);
    NO_FUN(glVertexAttrib2d);
    NO_FUN(glVertexAttrib2dv);
    FUN(glVertexAttrib2f);
    FUN(glVertexAttrib2fv);
    NO_FUN(glVertexAttrib2s);
    NO_FUN(glVertexAttrib2sv);
    NO_FUN(glVertexAttrib3d);
    NO_FUN(glVertexAttrib3dv);
    FUN(glVertexAttrib3f);
    FUN(glVertexAttrib3fv);
    NO_FUN(glVertexAttrib3s);
    NO_FUN(glVertexAttrib3sv);
    NO_FUN(glVertexAttrib4Nbv);
    NO_FUN(glVertexAttrib4Niv);
    NO_FUN(glVertexAttrib4Nsv);
    NO_FUN(glVertexAttrib4Nub);
    NO_FUN(glVertexAttrib4Nubv);
    NO_FUN(glVertexAttrib4Nuiv);
    NO_FUN(glVertexAttrib4Nusv);
    NO_FUN(glVertexAttrib4bv);
    NO_FUN(glVertexAttrib4d);
    NO_FUN(glVertexAttrib4dv);
    FUN(glVertexAttrib4f);
    FUN(glVertexAttrib4fv);
    NO_FUN(glVertexAttrib4iv);
    NO_FUN(glVertexAttrib4s);
    NO_FUN(glVertexAttrib4sv);
    NO_FUN(glVertexAttrib4ubv);
    NO_FUN(glVertexAttrib4uiv);
    NO_FUN(glVertexAttrib4usv);
    FUN(glVertexAttribBinding);
    FUN(glVertexAttribDivisor);
    FUN(glVertexAttribFormat);
    NO_FUN(glVertexAttribI1i);
    NO_FUN(glVertexAttribI1iv);
    NO_FUN(glVertexAttribI1ui);
    NO_FUN(glVertexAttribI1uiv);
    NO_FUN(glVertexAttribI2i);
    NO_FUN(glVertexAttribI2iv);
    NO_FUN(glVertexAttribI2ui);
    NO_FUN(glVertexAttribI2uiv);
    NO_FUN(glVertexAttribI3i);
    NO_FUN(glVertexAttribI3iv);
    NO_FUN(glVertexAttribI3ui);
    NO_FUN(glVertexAttribI3uiv);
    NO_FUN(glVertexAttribI4bv);
    FUN(glVertexAttribI4i);
    FUN(glVertexAttribI4iv);
    NO_FUN(glVertexAttribI4sv);
    NO_FUN(glVertexAttribI4ubv);
    FUN(glVertexAttribI4ui);
    FUN(glVertexAttribI4uiv);
    NO_FUN(glVertexAttribI4usv);
    FUN(glVertexAttribIFormat);
    FUN(glVertexAttribIPointer);
    NO_FUN(glVertexAttribL1d);
    NO_FUN(glVertexAttribL1dv);
    NO_FUN(glVertexAttribL2d);
    NO_FUN(glVertexAttribL2dv);
    NO_FUN(glVertexAttribL3d);
    NO_FUN(glVertexAttribL3dv);
    NO_FUN(glVertexAttribL4d);
    NO_FUN(glVertexAttribL4dv);
    NO_FUN(glVertexAttribLFormat);
    NO_FUN(glVertexAttribLPointer);
    NO_FUN(glVertexAttribP1ui);
    NO_FUN(glVertexAttribP1uiv);
    NO_FUN(glVertexAttribP2ui);
    NO_FUN(glVertexAttribP2uiv);
    NO_FUN(glVertexAttribP3ui);
    NO_FUN(glVertexAttribP3uiv);
    NO_FUN(glVertexAttribP4ui);
    NO_FUN(glVertexAttribP4uiv);
    FUN(glVertexAttribPointer);
    FUN(glVertexBindingDivisor);
    FUN(glViewport);
    NO_FUN(glViewportArrayv);
    NO_FUN(glViewportIndexedf);
    NO_FUN(glViewportIndexedfv);
    FUN(glWaitSync);
// }