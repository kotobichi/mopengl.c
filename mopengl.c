#ifndef MOPENGL_C
#define MOPENGL_C

#include "GL/gl.h"

typedef GLenum 		gl_enum_t;
typedef GLboolean 	gl_boolean_t;
typedef GLbyte 		gl_byte_t;
typedef GLchar 		gl_char_t;
typedef GLshort 	gl_short_t;
typedef GLfloat 	gl_float_t;
typedef GLintptr 	gl_intptr_t;
typedef GLint 		gl_int_t;
typedef GLint64 	gl_int64_t;
typedef GLsizei 	gl_sizei_t;
typedef GLsync 		gl_sync_t;
typedef GLbitfield  gl_bitfield_t;
typedef GLubyte  	gl_ubyte_t;
typedef GLushort  	gl_ushort_t;
typedef GLdouble  	gl_double_t;
typedef GLsizeiptr  gl_sizeiptr_t;
typedef GLuint 		gl_uint_t;
typedef GLuint64  	gl_uint64_t;
typedef GLDEBUGPROC gl_debug_proc_t;

#define MGL_FUNCTIONS_XLIST \
/* SHADER */ \
X(gl_shader_create, 		glCreateShader, 	gl_uint_t, 	gl_enum_t shader_type) \
X(gl_shader_delete, 		glDeleteShader, 	void, 		gl_uint_t shader) \
X(gl_shader_source, 		glShaderSource, 	void, 		gl_uint_t shader, gl_sizei_t count, const gl_char_t **string, const gl_int_t *length) \
X(gl_shader_compile, 		glCompileShader, 	void, 		gl_uint_t shader) \
X(gl_shader_get_infolog, 	glGetShaderInfoLog, void, 		gl_uint_t shader, gl_sizei_t max_length, gl_sizei_t *length, gl_char_t *info_log) \
X(gl_shader_get_iv, 		glGetShaderiv, 		void, 		gl_uint_t shader, gl_enum_t pname, gl_int_t *params) \
X(gl_shader_get_source, 	glGetShaderSource, 	void, 		gl_uint_t shader, gl_sizei_t buf_size, gl_sizei_t *length, gl_char_t *source) \
X(gl_shader_is, 			glIsShader, 		gl_boolean_t, gl_uint_t shader) \
X(gl_shader_binary, 		glShaderBinary, 	void, 		gl_sizei_t count, const gl_uint_t *shaders, gl_enum_t binary_format, const void *binary, gl_sizei_t length) \
X(gl_shader_specialize, 	glSpecializeShader, void, 		gl_uint_t shader, const gl_char_t *entry_point, gl_uint_t num_specialization_constants, const gl_uint_t *constant_index, const gl_uint_t *constant_value) \
/* PROGRAM */ \
X(gl_program_create, 				glCreateProgram, 		gl_uint_t, 	void) \
X(gl_program_delete, 				glDeleteProgram, 		void, 		gl_uint_t program) \
X(gl_program_attach_shader, 		glAttachShader, 		void, 		gl_uint_t program, gl_uint_t shader) \
X(gl_program_detach_shader, 		glDetachShader, 		void, 		gl_uint_t program, gl_uint_t shader) \
X(gl_program_link, 					glLinkProgram, 			void, 		gl_uint_t program) \
X(gl_program_get_infolog, 			glGetProgramInfoLog, 	void, 		gl_uint_t program, gl_sizei_t max_length, gl_sizei_t *length, gl_char_t *info_log) \
X(gl_program_attrib_location_bind, 	glBindAttribLocation, 	void, 		gl_uint_t program, gl_uint_t index, const gl_char_t *name) \
X(gl_program_uniform_locate, 		glGetUniformLocation, 	gl_int_t, 	gl_uint_t program, const gl_char_t *name) \
X(gl_program_use, 					glUseProgram, 			void, 		gl_uint_t program) \
X(gl_program_get_iv, 				glGetProgramiv, 		void, 		gl_uint_t program, gl_enum_t pname, gl_int_t *params) \
X(gl_program_validate, 				glValidateProgram, 		void, 		gl_uint_t program) \
X(gl_program_is, 					glIsProgram, 			gl_boolean_t, gl_uint_t program) \
X(gl_program_attrib_locate, 		glGetAttribLocation, 	gl_int_t, 	gl_uint_t program, const gl_char_t *name) \
X(gl_program_get_active_attrib, 	glGetActiveAttrib, 		void, 		gl_uint_t program, gl_uint_t index, gl_sizei_t buf_size, gl_sizei_t *length, gl_int_t *size, gl_enum_t *type, gl_char_t *name) \
X(gl_program_get_active_uniform, 	glGetActiveUniform, 	void, 		gl_uint_t program, gl_uint_t index, gl_sizei_t buf_size, gl_sizei_t *length, gl_int_t *size, gl_enum_t *type, gl_char_t *name) \
X(gl_program_parameter_i, 			glProgramParameteri, 	void, 		gl_uint_t program, gl_enum_t pname, gl_int_t value) \
X(gl_program_get_binary, 			glGetProgramBinary, 	void, 		gl_uint_t program, gl_sizei_t buf_size, gl_sizei_t *length, gl_enum_t *binary_format, void *binary) \
X(gl_program_binary_load, 			glProgramBinary, 		void, 		gl_uint_t program, gl_enum_t binary_format, const void *binary, gl_sizei_t length) \
X(gl_shader_program_create, 		glCreateShaderProgramv, gl_uint_t, 	gl_enum_t type, gl_sizei_t count, const gl_char_t *const *strings) \
/* PROGRAM UNIFORM (DSA - no gl_program_use required) */ \
X(gl_program_uniform_1f, 		glProgramUniform1f, 	void, 	gl_uint_t program, gl_int_t location, gl_float_t v0) \
X(gl_program_uniform_2f, 		glProgramUniform2f, 	void, 	gl_uint_t program, gl_int_t location, gl_float_t v0, gl_float_t v1) \
X(gl_program_uniform_3f, 		glProgramUniform3f, 	void, 	gl_uint_t program, gl_int_t location, gl_float_t v0, gl_float_t v1, gl_float_t v2) \
X(gl_program_uniform_4f, 		glProgramUniform4f, 	void, 	gl_uint_t program, gl_int_t location, gl_float_t v0, gl_float_t v1, gl_float_t v2, gl_float_t v3) \
X(gl_program_uniform_1i, 		glProgramUniform1i, 	void, 	gl_uint_t program, gl_int_t location, gl_int_t v0) \
X(gl_program_uniform_2i, 		glProgramUniform2i, 	void, 	gl_uint_t program, gl_int_t location, gl_int_t v0, gl_int_t v1) \
X(gl_program_uniform_3i, 		glProgramUniform3i, 	void, 	gl_uint_t program, gl_int_t location, gl_int_t v0, gl_int_t v1, gl_int_t v2) \
X(gl_program_uniform_4i, 		glProgramUniform4i, 	void, 	gl_uint_t program, gl_int_t location, gl_int_t v0, gl_int_t v1, gl_int_t v2, gl_int_t v3) \
X(gl_program_uniform_1ui, 		glProgramUniform1ui, 	void, 	gl_uint_t program, gl_int_t location, gl_uint_t v0) \
X(gl_program_uniform_2ui, 		glProgramUniform2ui, 	void, 	gl_uint_t program, gl_int_t location, gl_uint_t v0, gl_uint_t v1) \
X(gl_program_uniform_3ui, 		glProgramUniform3ui, 	void, 	gl_uint_t program, gl_int_t location, gl_uint_t v0, gl_uint_t v1, gl_uint_t v2) \
X(gl_program_uniform_4ui, 		glProgramUniform4ui, 	void, 	gl_uint_t program, gl_int_t location, gl_uint_t v0, gl_uint_t v1, gl_uint_t v2, gl_uint_t v3) \
X(gl_program_uniform_1fv, 		glProgramUniform1fv, 	void, 	gl_uint_t program, gl_int_t location, gl_sizei_t count, const gl_float_t *value) \
X(gl_program_uniform_2fv, 		glProgramUniform2fv, 	void, 	gl_uint_t program, gl_int_t location, gl_sizei_t count, const gl_float_t *value) \
X(gl_program_uniform_3fv, 		glProgramUniform3fv, 	void, 	gl_uint_t program, gl_int_t location, gl_sizei_t count, const gl_float_t *value) \
X(gl_program_uniform_4fv, 		glProgramUniform4fv, 	void, 	gl_uint_t program, gl_int_t location, gl_sizei_t count, const gl_float_t *value) \
X(gl_program_uniform_1iv, 		glProgramUniform1iv, 	void, 	gl_uint_t program, gl_int_t location, gl_sizei_t count, const gl_int_t *value) \
X(gl_program_uniform_2iv, 		glProgramUniform2iv, 	void, 	gl_uint_t program, gl_int_t location, gl_sizei_t count, const gl_int_t *value) \
X(gl_program_uniform_3iv, 		glProgramUniform3iv, 	void, 	gl_uint_t program, gl_int_t location, gl_sizei_t count, const gl_int_t *value) \
X(gl_program_uniform_4iv, 		glProgramUniform4iv, 	void, 	gl_uint_t program, gl_int_t location, gl_sizei_t count, const gl_int_t *value) \
X(gl_program_uniform_1uiv, 		glProgramUniform1uiv, 	void, 	gl_uint_t program, gl_int_t location, gl_sizei_t count, const gl_uint_t *value) \
X(gl_program_uniform_2uiv, 		glProgramUniform2uiv, 	void, 	gl_uint_t program, gl_int_t location, gl_sizei_t count, const gl_uint_t *value) \
X(gl_program_uniform_3uiv, 		glProgramUniform3uiv, 	void, 	gl_uint_t program, gl_int_t location, gl_sizei_t count, const gl_uint_t *value) \
X(gl_program_uniform_4uiv, 		glProgramUniform4uiv, 	void, 	gl_uint_t program, gl_int_t location, gl_sizei_t count, const gl_uint_t *value) \
X(gl_program_uniform_matrix_2fv, 	glProgramUniformMatrix2fv, 	void, gl_uint_t program, gl_int_t location, gl_sizei_t count, gl_boolean_t transpose, const gl_float_t *value) \
X(gl_program_uniform_matrix_3fv, 	glProgramUniformMatrix3fv, 	void, gl_uint_t program, gl_int_t location, gl_sizei_t count, gl_boolean_t transpose, const gl_float_t *value) \
X(gl_program_uniform_matrix_4fv, 	glProgramUniformMatrix4fv, 	void, gl_uint_t program, gl_int_t location, gl_sizei_t count, gl_boolean_t transpose, const gl_float_t *value) \
X(gl_program_uniform_matrix_2x3fv, 	glProgramUniformMatrix2x3fv, 	void, gl_uint_t program, gl_int_t location, gl_sizei_t count, gl_boolean_t transpose, const gl_float_t *value) \
X(gl_program_uniform_matrix_3x2fv, 	glProgramUniformMatrix3x2fv, 	void, gl_uint_t program, gl_int_t location, gl_sizei_t count, gl_boolean_t transpose, const gl_float_t *value) \
X(gl_program_uniform_matrix_2x4fv, 	glProgramUniformMatrix2x4fv, 	void, gl_uint_t program, gl_int_t location, gl_sizei_t count, gl_boolean_t transpose, const gl_float_t *value) \
X(gl_program_uniform_matrix_4x2fv, 	glProgramUniformMatrix4x2fv, 	void, gl_uint_t program, gl_int_t location, gl_sizei_t count, gl_boolean_t transpose, const gl_float_t *value) \
X(gl_program_uniform_matrix_3x4fv, 	glProgramUniformMatrix3x4fv, 	void, gl_uint_t program, gl_int_t location, gl_sizei_t count, gl_boolean_t transpose, const gl_float_t *value) \
X(gl_program_uniform_matrix_4x3fv, 	glProgramUniformMatrix4x3fv, 	void, gl_uint_t program, gl_int_t location, gl_sizei_t count, gl_boolean_t transpose, const gl_float_t *value) \
/* PROGRAM UNIFORM GET */ \
X(gl_program_get_uniform_fv, 	glGetUniformfv, 	void, 	gl_uint_t program, gl_int_t location, gl_float_t *params) \
X(gl_program_get_uniform_iv, 	glGetUniformiv, 	void, 	gl_uint_t program, gl_int_t location, gl_int_t *params) \
X(gl_program_get_uniform_uiv, 	glGetUniformuiv, 	void, 	gl_uint_t program, gl_int_t location, gl_uint_t *params) \
X(gl_program_get_uniform_dv, 	glGetUniformdv, 	void, 	gl_uint_t program, gl_int_t location, gl_double_t *params) \
X(gl_program_get_uniform_nfv, 	glGetnUniformfv, 	void, 	gl_uint_t program, gl_int_t location, gl_sizei_t buf_size, gl_float_t *params) \
X(gl_program_get_uniform_niv, 	glGetnUniformiv, 	void, 	gl_uint_t program, gl_int_t location, gl_sizei_t buf_size, gl_int_t *params) \
X(gl_program_get_uniform_nuiv, 	glGetnUniformuiv, 	void, 	gl_uint_t program, gl_int_t location, gl_sizei_t buf_size, gl_uint_t *params) \
X(gl_program_get_uniform_ndv, 	glGetnUniformdv, 	void, 	gl_uint_t program, gl_int_t location, gl_sizei_t buf_size, gl_double_t *params) \
/* PROGRAM SUBROUTINES */ \
X(gl_program_subroutine_uniform_locate, 	glGetSubroutineUniformLocation, 	gl_int_t, 	gl_uint_t program, gl_enum_t shader_type, const gl_char_t *name) \
X(gl_program_subroutine_index, 			glGetSubroutineIndex, 			gl_uint_t, 	gl_uint_t program, gl_enum_t shader_type, const gl_char_t *name) \
X(gl_program_get_active_subroutine_uniform_iv, 	glGetActiveSubroutineUniformiv, 	void, 	gl_uint_t program, gl_enum_t shader_type, gl_uint_t index, gl_enum_t pname, gl_int_t *values) \
X(gl_program_get_active_subroutine_uniform_name, 	glGetActiveSubroutineUniformName, 	void, 	gl_uint_t program, gl_enum_t shader_type, gl_uint_t index, gl_sizei_t buf_size, gl_sizei_t *length, gl_char_t *name) \
X(gl_program_get_active_subroutine_name, 			glGetActiveSubroutineName, 			void, 	gl_uint_t program, gl_enum_t shader_type, gl_uint_t index, gl_sizei_t buf_size, gl_sizei_t *length, gl_char_t *name) \
X(gl_subroutine_uniforms_set, 	glUniformSubroutinesuiv, 	void, 	gl_enum_t shader_type, gl_sizei_t count, const gl_uint_t *indices) \
X(gl_subroutine_uniform_get, 	glGetUniformSubroutineuiv, 	void, 	gl_enum_t shader_type, gl_int_t location, gl_uint_t *params) \
X(gl_program_get_stage_iv, 	glGetProgramStageiv, 		void, 	gl_uint_t program, gl_enum_t shader_type, gl_enum_t pname, gl_int_t *values) \
/* PROGRAM INTROSPECTION / UNIFORM BLOCKS */ \
X(gl_program_uniform_block_index, 			glGetUniformBlockIndex, 		gl_uint_t, 	gl_uint_t program, const gl_char_t *uniform_block_name) \
X(gl_program_uniform_block_binding_set, 	glUniformBlockBinding, 		void, 		gl_uint_t program, gl_uint_t uniform_block_index, gl_uint_t uniform_block_binding) \
X(gl_program_get_active_uniform_block_iv, 	glGetActiveUniformBlockiv, 	void, 		gl_uint_t program, gl_uint_t uniform_block_index, gl_enum_t pname, gl_int_t *params) \
X(gl_program_get_active_uniform_block_name, glGetActiveUniformBlockName, 	void, 		gl_uint_t program, gl_uint_t uniform_block_index, gl_sizei_t buf_size, gl_sizei_t *length, gl_char_t *uniform_block_name) \
X(gl_program_get_active_uniforms_iv, 		glGetActiveUniformsiv, 		void, 		gl_uint_t program, gl_sizei_t uniform_count, const gl_uint_t *uniform_indices, gl_enum_t pname, gl_int_t *params) \
X(gl_program_get_active_uniform_name, 		glGetActiveUniformName, 		void, 		gl_uint_t program, gl_uint_t uniform_index, gl_sizei_t buf_size, gl_sizei_t *length, gl_char_t *uniform_name) \
X(gl_program_get_uniform_indices, 			glGetUniformIndices, 			void, 		gl_uint_t program, gl_sizei_t uniform_count, const gl_char_t *const *uniform_names, gl_uint_t *uniform_indices) \
X(gl_program_storage_block_binding_set, 	glShaderStorageBlockBinding, 	void, 		gl_uint_t program, gl_uint_t storage_block_index, gl_uint_t storage_block_binding) \
X(gl_program_get_interface_iv, 			glGetProgramInterfaceiv, 		void, 		gl_uint_t program, gl_enum_t program_interface, gl_enum_t pname, gl_int_t *params) \
X(gl_program_resource_index, 				glGetProgramResourceIndex, 		gl_uint_t, 	gl_uint_t program, gl_enum_t program_interface, const gl_char_t *name) \
X(gl_program_get_resource_name, 			glGetProgramResourceName, 		void, 		gl_uint_t program, gl_enum_t program_interface, gl_uint_t index, gl_sizei_t buf_size, gl_sizei_t *length, gl_char_t *name) \
X(gl_program_get_resource_iv, 				glGetProgramResourceiv, 		void, 		gl_uint_t program, gl_enum_t program_interface, gl_uint_t index, gl_sizei_t prop_count, const gl_enum_t *props, gl_sizei_t buf_size, gl_sizei_t *length, gl_int_t *params) \
X(gl_program_resource_locate, 				glGetProgramResourceLocation, 	gl_int_t, 	gl_uint_t program, gl_enum_t program_interface, const gl_char_t *name) \
X(gl_program_resource_locate_index, 		glGetProgramResourceLocationIndex, gl_int_t, gl_uint_t program, gl_enum_t program_interface, const gl_char_t *name) \
/* PROGRAM PIPELINE */ \
X(gl_pipeline_create, 			glCreateProgramPipelines, 	void, 		gl_sizei_t n, gl_uint_t *pipelines) \
X(gl_pipeline_delete, 			glDeleteProgramPipelines, 	void, 		gl_sizei_t n, const gl_uint_t *pipelines) \
X(gl_pipeline_bind, 			glBindProgramPipeline, 		void, 		gl_uint_t pipeline) \
X(gl_pipeline_is, 				glIsProgramPipeline, 		gl_boolean_t, gl_uint_t pipeline) \
X(gl_pipeline_use_stages, 		glUseProgramStages, 		void, 		gl_uint_t pipeline, gl_bitfield_t stages, gl_uint_t program) \
X(gl_pipeline_active_program_set, glActiveShaderProgram, 	void, 		gl_uint_t pipeline, gl_uint_t program) \
X(gl_pipeline_validate, 		glValidateProgramPipeline, 	void, 		gl_uint_t pipeline) \
X(gl_pipeline_get_iv, 			glGetProgramPipelineiv, 	void, 		gl_uint_t pipeline, gl_enum_t pname, gl_int_t *params) \
X(gl_pipeline_get_infolog, 		glGetProgramPipelineInfoLog, void, 		gl_uint_t pipeline, gl_sizei_t buf_size, gl_sizei_t *length, gl_char_t *info_log) \
/* VERTEX ARRAY OBJECT */ \
X(gl_vao_create, 			glCreateVertexArrays, 		void, 	gl_sizei_t n, gl_uint_t *arrays) \
X(gl_vao_delete, 			glDeleteVertexArrays, 		void, 	gl_sizei_t n, gl_uint_t *arrays) \
X(gl_vao_attrib_enable, 	glEnableVertexArrayAttrib, 	void, 	gl_uint_t vaobj, gl_uint_t index) \
X(gl_vao_attrib_disable, 	glDisableVertexArrayAttrib, void, 	gl_uint_t vaobj, gl_uint_t index) \
X(gl_vao_divisor, 			glVertexArrayBindingDivisor, void, 	gl_uint_t vaobj, gl_uint_t binding_index, gl_uint_t divisor) \
X(gl_vao_bind, 				glBindVertexArray, 			void, 	gl_uint_t array) \
X(gl_vao_is, 				glIsVertexArray, 			gl_boolean_t, gl_uint_t array) \
X(gl_vao_element_buffer, 	glVertexArrayElementBuffer, void, 	gl_uint_t vaobj, gl_uint_t buffer) \
X(gl_vao_vertex_buffer, 	glVertexArrayVertexBuffer, 	void, 	gl_uint_t vaobj, gl_uint_t binding_index, gl_uint_t buffer, gl_intptr_t offset, gl_sizei_t stride) \
X(gl_vao_vertex_buffers, 	glVertexArrayVertexBuffers, void, 	gl_uint_t vaobj, gl_uint_t first, gl_sizei_t count, const gl_uint_t *buffers, const gl_intptr_t *offsets, const gl_sizei_t *strides) \
X(gl_vao_attrib_format, 	glVertexArrayAttribFormat, 	void, 	gl_uint_t vaobj, gl_uint_t attrib_index, gl_int_t size, gl_enum_t type, gl_boolean_t normalized, gl_uint_t relative_offset) \
X(gl_vao_attrib_iformat, 	glVertexArrayAttribIFormat, void, 	gl_uint_t vaobj, gl_uint_t attrib_index, gl_int_t size, gl_enum_t type, gl_uint_t relative_offset) \
X(gl_vao_attrib_lformat, 	glVertexArrayAttribLFormat, void, 	gl_uint_t vaobj, gl_uint_t attrib_index, gl_int_t size, gl_enum_t type, gl_uint_t relative_offset) \
X(gl_vao_attrib_binding, 	glVertexArrayAttribBinding, void, 	gl_uint_t vaobj, gl_uint_t attrib_index, gl_uint_t binding_index) \
X(gl_vao_get_iv, 			glGetVertexArrayiv, 		void, 	gl_uint_t vaobj, gl_enum_t pname, gl_int_t *param) \
X(gl_vao_get_indexed_iv, 	glGetVertexArrayIndexediv, 	void, 	gl_uint_t vaobj, gl_uint_t index, gl_enum_t pname, gl_int_t *param) \
X(gl_vao_get_indexed_i64v, 	glGetVertexArrayIndexed64iv, void, 	gl_uint_t vaobj, gl_uint_t index, gl_enum_t pname, gl_int64_t *param) \
/* BUFFER OBJECT */ \
X(gl_buffer_create, 			glCreateBuffers, 			void, 	gl_sizei_t n, gl_uint_t *buffers) \
X(gl_buffer_delete, 			glDeleteBuffers, 			void, 	gl_sizei_t n, const gl_uint_t *buffers) \
X(gl_buffer_is, 				glIsBuffer, 				gl_boolean_t, gl_uint_t buffer) \
X(gl_buffer_storage, 			glNamedBufferStorage, 		void, 	gl_uint_t buffer, gl_sizeiptr_t size, const void *data, gl_bitfield_t flags) \
X(gl_buffer_data, 				glNamedBufferData, 			void, 	gl_uint_t buffer, gl_sizeiptr_t size, const void *data, gl_enum_t usage) \
X(gl_buffer_subdata, 			glNamedBufferSubData, 		void, 	gl_uint_t buffer, gl_intptr_t offset, gl_sizeiptr_t size, const void *data) \
X(gl_buffer_copy_subdata, 		glCopyNamedBufferSubData, 	void, 	gl_uint_t read_buffer, gl_uint_t write_buffer, gl_intptr_t read_offset, gl_intptr_t write_offset, gl_sizeiptr_t size) \
X(gl_buffer_clear_data, 		glClearNamedBufferData, 	void, 	gl_uint_t buffer, gl_enum_t internal_format, gl_enum_t format, gl_enum_t type, const void *data) \
X(gl_buffer_clear_subdata, 		glClearNamedBufferSubData, 	void, 	gl_uint_t buffer, gl_enum_t internal_format, gl_intptr_t offset, gl_sizeiptr_t size, gl_enum_t format, gl_enum_t type, const void *data) \
X(gl_buffer_map, 				glMapNamedBuffer, 			void *, gl_uint_t buffer, gl_enum_t access) \
X(gl_buffer_map_range, 			glMapNamedBufferRange, 		void *, gl_uint_t buffer, gl_intptr_t offset, gl_sizeiptr_t length, gl_bitfield_t access) \
X(gl_buffer_unmap, 				glUnmapNamedBuffer, 		gl_boolean_t, gl_uint_t buffer) \
X(gl_buffer_flush_mapped_range, glFlushMappedNamedBufferRange, void, gl_uint_t buffer, gl_intptr_t offset, gl_sizeiptr_t length) \
X(gl_buffer_get_parameter_iv, 	glGetNamedBufferParameteriv, void, 	gl_uint_t buffer, gl_enum_t pname, gl_int_t *params) \
X(gl_buffer_get_parameter_i64v, glGetNamedBufferParameteri64v, void, gl_uint_t buffer, gl_enum_t pname, gl_int64_t *params) \
X(gl_buffer_get_pointer_v, 		glGetNamedBufferPointerv, 	void, 	gl_uint_t buffer, gl_enum_t pname, void **params) \
X(gl_buffer_get_subdata, 		glGetNamedBufferSubData, 	void, 	gl_uint_t buffer, gl_intptr_t offset, gl_sizeiptr_t size, void *data) \
X(gl_buffer_bind, 				glBindBuffer, 				void, 	gl_enum_t target, gl_uint_t buffer) \
X(gl_buffer_bind_base, 			glBindBufferBase, 			void, 	gl_enum_t target, gl_uint_t index, gl_uint_t buffer) \
X(gl_buffer_bind_range, 		glBindBufferRange, 			void, 	gl_enum_t target, gl_uint_t index, gl_uint_t buffer, gl_intptr_t offset, gl_sizeiptr_t size) \
X(gl_buffer_bind_bases, 		glBindBuffersBase, 			void, 	gl_enum_t target, gl_uint_t first, gl_sizei_t count, const gl_uint_t *buffers) \
X(gl_buffer_bind_ranges, 		glBindBuffersRange, 		void, 	gl_enum_t target, gl_uint_t first, gl_sizei_t count, const gl_uint_t *buffers, const gl_intptr_t *offsets, const gl_sizeiptr_t *sizes) \
X(gl_buffer_invalidate_data, 	glInvalidateBufferData, 	void, 	gl_uint_t buffer) \
X(gl_buffer_invalidate_subdata, glInvalidateBufferSubData, void, 	gl_uint_t buffer, gl_intptr_t offset, gl_sizeiptr_t length) \
/* TEXTURE */ \
X(gl_texture_create, 			glCreateTextures, 			void, 	gl_enum_t target, gl_sizei_t n, gl_uint_t *textures) \
X(gl_texture_delete, 			glDeleteTextures, 			void, 	gl_sizei_t n, const gl_uint_t *textures) \
X(gl_texture_is, 				glIsTexture, 				gl_boolean_t, gl_uint_t texture) \
X(gl_texture_bind, 				glBindTextureUnit, 			void, 	gl_uint_t unit, gl_uint_t texture) \
X(gl_texture_storage_1D, 		glTextureStorage1D, 		void, 	gl_uint_t texture, gl_sizei_t levels, gl_enum_t internal_format, gl_sizei_t width) \
X(gl_texture_storage_2D, 		glTextureStorage2D, 		void, 	gl_uint_t texture, gl_sizei_t levels, gl_enum_t internal_format, gl_sizei_t width, gl_sizei_t height) \
X(gl_texture_storage_3D, 		glTextureStorage3D, 		void, 	gl_uint_t texture, gl_sizei_t levels, gl_enum_t internal_format, gl_sizei_t width, gl_sizei_t height, gl_sizei_t depth) \
X(gl_texture_storage_2D_multisample, glTextureStorage2DMultisample, void, gl_uint_t texture, gl_sizei_t samples, gl_enum_t internal_format, gl_sizei_t width, gl_sizei_t height, gl_boolean_t fixed_sample_locations) \
X(gl_texture_storage_3D_multisample, glTextureStorage3DMultisample, void, gl_uint_t texture, gl_sizei_t samples, gl_enum_t internal_format, gl_sizei_t width, gl_sizei_t height, gl_sizei_t depth, gl_boolean_t fixed_sample_locations) \
X(gl_texture_subimage_1d, 		glTextureSubImage1D, 		void, 	gl_uint_t texture, gl_int_t level, gl_int_t xoffset, gl_sizei_t width, gl_enum_t format, gl_enum_t type, const void *pixels) \
X(gl_texture_subimage_2D, 		glTextureSubImage2D, 		void, 	gl_uint_t texture, gl_int_t level, gl_int_t xoffset, gl_int_t yoffset, gl_sizei_t width, gl_sizei_t height, gl_enum_t format, gl_enum_t type, const void *pixels) \
X(gl_texture_subimage_3D, 		glTextureSubImage3D, 		void, 	gl_uint_t texture, gl_int_t level, gl_int_t xoffset, gl_int_t yoffset, gl_int_t zoffset, gl_sizei_t width, gl_sizei_t height, gl_sizei_t depth, gl_enum_t format, gl_enum_t type, const void *pixels) \
X(gl_texture_compressed_subimage_1d, glCompressedTextureSubImage1D, void, gl_uint_t texture, gl_int_t level, gl_int_t xoffset, gl_sizei_t width, gl_enum_t format, gl_sizei_t image_size, const void *data) \
X(gl_texture_compressed_subimage_2D, glCompressedTextureSubImage2D, void, gl_uint_t texture, gl_int_t level, gl_int_t xoffset, gl_int_t yoffset, gl_sizei_t width, gl_sizei_t height, gl_enum_t format, gl_sizei_t image_size, const void *data) \
X(gl_texture_compressed_subimage_3D, glCompressedTextureSubImage3D, void, gl_uint_t texture, gl_int_t level, gl_int_t xoffset, gl_int_t yoffset, gl_int_t zoffset, gl_sizei_t width, gl_sizei_t height, gl_sizei_t depth, gl_enum_t format, gl_sizei_t image_size, const void *data) \
X(gl_texture_copy_subimage_1d, glCopyTextureSubImage1D, 	void, 	gl_uint_t texture, gl_int_t level, gl_int_t xoffset, gl_int_t x, gl_int_t y, gl_sizei_t width) \
X(gl_texture_copy_subimage_2D, glCopyTextureSubImage2D, 	void, 	gl_uint_t texture, gl_int_t level, gl_int_t xoffset, gl_int_t yoffset, gl_int_t x, gl_int_t y, gl_sizei_t width, gl_sizei_t height) \
X(gl_texture_copy_subimage_3D, glCopyTextureSubImage3D, 	void, 	gl_uint_t texture, gl_int_t level, gl_int_t xoffset, gl_int_t yoffset, gl_int_t zoffset, gl_int_t x, gl_int_t y, gl_sizei_t width, gl_sizei_t height) \
X(gl_texture_parameter_f, 		glTextureParameterf, 		void, 	gl_uint_t texture, gl_enum_t pname, gl_float_t param) \
X(gl_texture_parameter_fv, 	glTextureParameterfv, 		void, 	gl_uint_t texture, gl_enum_t pname, const gl_float_t *param) \
X(gl_texture_parameter_i, 		glTextureParameteri, 		void, 	gl_uint_t texture, gl_enum_t pname, gl_int_t param) \
X(gl_texture_parameter_iiv, 	glTextureParameterIiv, 		void, 	gl_uint_t texture, gl_enum_t pname, const gl_int_t *params) \
X(gl_texture_parameter_iuiv, 	glTextureParameterIuiv, 	void, 	gl_uint_t texture, gl_enum_t pname, const gl_uint_t *params) \
X(gl_texture_parameter_iv, 	glTextureParameteriv, 		void, 	gl_uint_t texture, gl_enum_t pname, const gl_int_t *param) \
X(gl_texture_generate_mipmaps, 	glGenerateTextureMipmap, 	void, 	gl_uint_t texture) \
X(gl_texture_view, 			glTextureView, 				void, 	gl_uint_t texture, gl_enum_t target, gl_uint_t orig_texture, gl_enum_t internal_format, gl_uint_t min_level, gl_uint_t num_levels, gl_uint_t min_layer, gl_uint_t num_layers) \
X(gl_texture_get_image, 		glGetTextureImage, 			void, 	gl_uint_t texture, gl_int_t level, gl_enum_t format, gl_enum_t type, gl_sizei_t buf_size, void *pixels) \
X(gl_texture_get_compressed_image, glGetCompressedTextureImage, void, gl_uint_t texture, gl_int_t level, gl_sizei_t buf_size, void *pixels) \
X(gl_texture_get_subimage, 	glGetTextureSubImage, 		void, 	gl_uint_t texture, gl_int_t level, gl_int_t xoffset, gl_int_t yoffset, gl_int_t zoffset, gl_sizei_t width, gl_sizei_t height, gl_sizei_t depth, gl_enum_t format, gl_enum_t type, gl_sizei_t buf_size, void *pixels) \
X(gl_texture_get_compressed_subimage, glGetCompressedTextureSubImage, void, gl_uint_t texture, gl_int_t level, gl_int_t xoffset, gl_int_t yoffset, gl_int_t zoffset, gl_sizei_t width, gl_sizei_t height, gl_sizei_t depth, gl_sizei_t buf_size, void *pixels) \
X(gl_texture_get_level_parameter_fv, glGetTextureLevelParameterfv, void, gl_uint_t texture, gl_int_t level, gl_enum_t pname, gl_float_t *params) \
X(gl_texture_get_level_parameter_iv, glGetTextureLevelParameteriv, void, gl_uint_t texture, gl_int_t level, gl_enum_t pname, gl_int_t *params) \
X(gl_texture_get_parameter_fv, glGetTextureParameterfv, 	void, 	gl_uint_t texture, gl_enum_t pname, gl_float_t *params) \
X(gl_texture_get_parameter_iiv, glGetTextureParameterIiv, 	void, 	gl_uint_t texture, gl_enum_t pname, gl_int_t *params) \
X(gl_texture_get_parameter_iuiv, glGetTextureParameterIuiv, void, 	gl_uint_t texture, gl_enum_t pname, gl_uint_t *params) \
X(gl_texture_get_parameter_iv, glGetTextureParameteriv, 	void, 	gl_uint_t texture, gl_enum_t pname, gl_int_t *params) \
X(gl_texture_bind_image, 		glBindImageTexture, 		void, 	gl_uint_t unit, gl_uint_t texture, gl_int_t level, gl_boolean_t layered, gl_int_t layer, gl_enum_t access, gl_enum_t format) \
X(gl_texture_bind_images, 		glBindImageTextures, 		void, 	gl_uint_t first, gl_sizei_t count, const gl_uint_t *textures) \
X(gl_textures_bind, 			glBindTextures, 			void, 	gl_uint_t first, gl_sizei_t count, const gl_uint_t *textures) \
X(gl_texture_invalidate_image, glInvalidateTexImage, 		void, 	gl_uint_t texture, gl_int_t level) \
X(gl_texture_invalidate_subimage, glInvalidateTexSubImage, 	void, 	gl_uint_t texture, gl_int_t level, gl_int_t xoffset, gl_int_t yoffset, gl_int_t zoffset, gl_sizei_t width, gl_sizei_t height, gl_sizei_t depth) \
X(gl_texture_clear_image, 		glClearTexImage, 			void, 	gl_uint_t texture, gl_int_t level, gl_enum_t format, gl_enum_t type, const void *data) \
X(gl_texture_clear_subimage, 	glClearTexSubImage, 		void, 	gl_uint_t texture, gl_int_t level, gl_int_t xoffset, gl_int_t yoffset, gl_int_t zoffset, gl_sizei_t width, gl_sizei_t height, gl_sizei_t depth, gl_enum_t format, gl_enum_t type, const void *data) \
X(gl_texture_buffer, 			glTextureBuffer, 			void, 	gl_uint_t texture, gl_enum_t internal_format, gl_uint_t buffer) \
X(gl_texture_buffer_range, 	glTextureBufferRange, 		void, 	gl_uint_t texture, gl_enum_t internal_format, gl_uint_t buffer, gl_intptr_t offset, gl_sizeiptr_t size) \
/* SAMPLER */ \
X(gl_sampler_create, 			glCreateSamplers, 			void, 	gl_sizei_t n, gl_uint_t *samplers) \
X(gl_sampler_delete, 			glDeleteSamplers, 			void, 	gl_sizei_t count, const gl_uint_t *samplers) \
X(gl_sampler_is, 				glIsSampler, 				gl_boolean_t, gl_uint_t sampler) \
X(gl_sampler_bind, 			glBindSampler, 				void, 	gl_uint_t unit, gl_uint_t sampler) \
X(gl_samplers_bind, 			glBindSamplers, 			void, 	gl_uint_t first, gl_sizei_t count, const gl_uint_t *samplers) \
X(gl_sampler_parameter_i, 		glSamplerParameteri, 		void, 	gl_uint_t sampler, gl_enum_t pname, gl_int_t param) \
X(gl_sampler_parameter_f, 		glSamplerParameterf, 		void, 	gl_uint_t sampler, gl_enum_t pname, gl_float_t param) \
X(gl_sampler_parameter_iv, 	glSamplerParameteriv, 		void, 	gl_uint_t sampler, gl_enum_t pname, const gl_int_t *param) \
X(gl_sampler_parameter_fv, 	glSamplerParameterfv, 		void, 	gl_uint_t sampler, gl_enum_t pname, const gl_float_t *param) \
X(gl_sampler_parameter_iiv, 	glSamplerParameterIiv, 		void, 	gl_uint_t sampler, gl_enum_t pname, const gl_int_t *param) \
X(gl_sampler_parameter_iuiv, 	glSamplerParameterIuiv, 	void, 	gl_uint_t sampler, gl_enum_t pname, const gl_uint_t *param) \
X(gl_sampler_get_parameter_iv, glGetSamplerParameteriv, 	void, 	gl_uint_t sampler, gl_enum_t pname, gl_int_t *params) \
X(gl_sampler_get_parameter_fv, glGetSamplerParameterfv, 	void, 	gl_uint_t sampler, gl_enum_t pname, gl_float_t *params) \
X(gl_sampler_get_parameter_iiv, glGetSamplerParameterIiv, 	void, 	gl_uint_t sampler, gl_enum_t pname, gl_int_t *params) \
X(gl_sampler_get_parameter_iuiv, glGetSamplerParameterIuiv, void, 	gl_uint_t sampler, gl_enum_t pname, gl_uint_t *params) \
/* FRAMEBUFFER */ \
X(gl_framebuffer_create, 		glCreateFramebuffers, 		void, 	gl_sizei_t n, gl_uint_t *framebuffers) \
X(gl_framebuffer_delete, 		glDeleteFramebuffers, 		void, 	gl_sizei_t n, const gl_uint_t *framebuffers) \
X(gl_framebuffer_is, 			glIsFramebuffer, 			gl_boolean_t, gl_uint_t framebuffer) \
X(gl_framebuffer_bind, 		glBindFramebuffer, 			void, 	gl_enum_t target, gl_uint_t framebuffer) \
X(gl_framebuffer_texture, 		glNamedFramebufferTexture, 	void, 	gl_uint_t framebuffer, gl_enum_t attachment, gl_uint_t texture, gl_int_t level) \
X(gl_framebuffer_texture_layer, glNamedFramebufferTextureLayer, void, gl_uint_t framebuffer, gl_enum_t attachment, gl_uint_t texture, gl_int_t level, gl_int_t layer) \
X(gl_framebuffer_renderbuffer, glNamedFramebufferRenderbuffer, void, gl_uint_t framebuffer, gl_enum_t attachment, gl_enum_t renderbuffer_target, gl_uint_t renderbuffer) \
X(gl_framebuffer_parameter_i, 	glNamedFramebufferParameteri, void, 	gl_uint_t framebuffer, gl_enum_t pname, gl_int_t param) \
X(gl_framebuffer_draw_buffer, 	glNamedFramebufferDrawBuffer, void, 	gl_uint_t framebuffer, gl_enum_t buf) \
X(gl_framebuffer_draw_buffers, glNamedFramebufferDrawBuffers, void, 	gl_uint_t framebuffer, gl_sizei_t n, const gl_enum_t *bufs) \
X(gl_framebuffer_read_buffer, 	glNamedFramebufferReadBuffer, void, 	gl_uint_t framebuffer, gl_enum_t src) \
X(gl_framebuffer_invalidate_data, glInvalidateNamedFramebufferData, void, gl_uint_t framebuffer, gl_sizei_t num_attachments, const gl_enum_t *attachments) \
X(gl_framebuffer_invalidate_subdata, glInvalidateNamedFramebufferSubData, void, gl_uint_t framebuffer, gl_sizei_t num_attachments, const gl_enum_t *attachments, gl_int_t x, gl_int_t y, gl_sizei_t width, gl_sizei_t height) \
X(gl_framebuffer_clear_iv, 	glClearNamedFramebufferiv, 	void, 	gl_uint_t framebuffer, gl_enum_t buffer, gl_int_t drawbuffer, const gl_int_t *value) \
X(gl_framebuffer_clear_uiv, 	glClearNamedFramebufferuiv, void, 	gl_uint_t framebuffer, gl_enum_t buffer, gl_int_t drawbuffer, const gl_uint_t *value) \
X(gl_framebuffer_clear_fv, 	glClearNamedFramebufferfv, 	void, 	gl_uint_t framebuffer, gl_enum_t buffer, gl_int_t drawbuffer, const gl_float_t *value) \
X(gl_framebuffer_clear_fi, 	glClearNamedFramebufferfi, 	void, 	gl_uint_t framebuffer, gl_enum_t buffer, gl_int_t drawbuffer, gl_float_t depth, gl_int_t stencil) \
X(gl_framebuffer_blit, 		glBlitNamedFramebuffer, 	void, 	gl_uint_t read_framebuffer, gl_uint_t draw_framebuffer, gl_int_t src_x0, gl_int_t src_y0, gl_int_t src_x1, gl_int_t src_y1, gl_int_t dst_x0, gl_int_t dst_y0, gl_int_t dst_x1, gl_int_t dst_y1, gl_bitfield_t mask, gl_enum_t filter) \
X(gl_framebuffer_check_status, glCheckNamedFramebufferStatus, gl_enum_t, gl_uint_t framebuffer, gl_enum_t target) \
X(gl_framebuffer_get_parameter_iv, glGetNamedFramebufferParameteriv, void, gl_uint_t framebuffer, gl_enum_t pname, gl_int_t *param) \
X(gl_framebuffer_get_attachment_parameter_iv, glGetNamedFramebufferAttachmentParameteriv, void, gl_uint_t framebuffer, gl_enum_t attachment, gl_enum_t pname, gl_int_t *params) \
/* RENDERBUFFER */ \
X(gl_renderbuffer_create, 		glCreateRenderbuffers, 		void, 	gl_sizei_t n, gl_uint_t *renderbuffers) \
X(gl_renderbuffer_delete, 		glDeleteRenderbuffers, 		void, 	gl_sizei_t n, const gl_uint_t *renderbuffers) \
X(gl_renderbuffer_is, 			glIsRenderbuffer, 			gl_boolean_t, gl_uint_t renderbuffer) \
X(gl_renderbuffer_storage, 	glNamedRenderbufferStorage, void, 	gl_uint_t renderbuffer, gl_enum_t internal_format, gl_sizei_t width, gl_sizei_t height) \
X(gl_renderbuffer_storage_multisample, glNamedRenderbufferStorageMultisample, void, gl_uint_t renderbuffer, gl_sizei_t samples, gl_enum_t internal_format, gl_sizei_t width, gl_sizei_t height) \
X(gl_renderbuffer_get_parameter_iv, glGetNamedRenderbufferParameteriv, void, gl_uint_t renderbuffer, gl_enum_t pname, gl_int_t *params) \
/* TRANSFORM FEEDBACK */ \
X(gl_xfb_create, 				glCreateTransformFeedbacks, void, 	gl_sizei_t n, gl_uint_t *ids) \
X(gl_xfb_delete, 				glDeleteTransformFeedbacks, void, 	gl_sizei_t n, const gl_uint_t *ids) \
X(gl_xfb_is, 					glIsTransformFeedback, 		gl_boolean_t, gl_uint_t id) \
X(gl_xfb_bind, 				glBindTransformFeedback, 	void, 	gl_enum_t target, gl_uint_t id) \
X(gl_xfb_buffer_base, 			glTransformFeedbackBufferBase, void, gl_uint_t xfb, gl_uint_t index, gl_uint_t buffer) \
X(gl_xfb_buffer_range, 		glTransformFeedbackBufferRange, void, gl_uint_t xfb, gl_uint_t index, gl_uint_t buffer, gl_intptr_t offset, gl_sizeiptr_t size) \
X(gl_xfb_begin, 				glBeginTransformFeedback, 	void, 	gl_enum_t primitive_mode) \
X(gl_xfb_end, 					glEndTransformFeedback, 	void, 	void) \
X(gl_xfb_pause, 				glPauseTransformFeedback, 	void, 	void) \
X(gl_xfb_resume, 				glResumeTransformFeedback, 	void, 	void) \
X(gl_xfb_varyings_set, 		glTransformFeedbackVaryings, void, 	gl_uint_t program, gl_sizei_t count, const gl_char_t *const *varyings, gl_enum_t buffer_mode) \
X(gl_xfb_get_varying, 			glGetTransformFeedbackVarying, void, gl_uint_t program, gl_uint_t index, gl_sizei_t buf_size, gl_sizei_t *length, gl_sizei_t *size, gl_enum_t *type, gl_char_t *name) \
X(gl_xfb_get_iv, 				glGetTransformFeedbackiv, 	void, 	gl_uint_t xfb, gl_enum_t pname, gl_int_t *param) \
X(gl_xfb_get_indexed_iv, 		glGetTransformFeedbacki_v, 	void, 	gl_uint_t xfb, gl_enum_t pname, gl_uint_t index, gl_int_t *param) \
X(gl_xfb_get_indexed_i64v, 	glGetTransformFeedbacki64_v, void, 	gl_uint_t xfb, gl_enum_t pname, gl_uint_t index, gl_int64_t *param) \
X(gl_xfb_draw, 				glDrawTransformFeedback, 	void, 	gl_enum_t mode, gl_uint_t id) \
X(gl_xfb_draw_instanced, 		glDrawTransformFeedbackInstanced, void, gl_enum_t mode, gl_uint_t id, gl_sizei_t instance_count) \
X(gl_xfb_draw_stream, 			glDrawTransformFeedbackStream, void, 	gl_enum_t mode, gl_uint_t id, gl_uint_t stream) \
X(gl_xfb_draw_stream_instanced, glDrawTransformFeedbackStreamInstanced, void, gl_enum_t mode, gl_uint_t id, gl_uint_t stream, gl_sizei_t instance_count) \
/* QUERY */ \
X(gl_query_create, 			glCreateQueries, 			void, 	gl_enum_t target, gl_sizei_t n, gl_uint_t *ids) \
X(gl_query_delete, 			glDeleteQueries, 			void, 	gl_sizei_t n, const gl_uint_t *ids) \
X(gl_query_is, 				glIsQuery, 					gl_boolean_t, gl_uint_t id) \
X(gl_query_begin, 				glBeginQuery, 				void, 	gl_enum_t target, gl_uint_t id) \
X(gl_query_end, 				glEndQuery, 				void, 	gl_enum_t target) \
X(gl_query_begin_indexed, 		glBeginQueryIndexed, 		void, 	gl_enum_t target, gl_uint_t index, gl_uint_t id) \
X(gl_query_end_indexed, 		glEndQueryIndexed, 			void, 	gl_enum_t target, gl_uint_t index) \
X(gl_query_counter_set, 		glQueryCounter, 			void, 	gl_uint_t id, gl_enum_t target) \
X(gl_query_get_object_iv, 		glGetQueryObjectiv, 		void, 	gl_uint_t id, gl_enum_t pname, gl_int_t *params) \
X(gl_query_get_object_uiv, 	glGetQueryObjectuiv, 		void, 	gl_uint_t id, gl_enum_t pname, gl_uint_t *params) \
X(gl_query_get_object_i64v, 	glGetQueryObjecti64v, 		void, 	gl_uint_t id, gl_enum_t pname, gl_int64_t *params) \
X(gl_query_get_object_ui64v, 	glGetQueryObjectui64v, 		void, 	gl_uint_t id, gl_enum_t pname, gl_uint64_t *params) \
X(gl_query_get_iv, 			glGetQueryiv, 				void, 	gl_enum_t target, gl_enum_t pname, gl_int_t *params) \
X(gl_query_get_indexed_iv, 	glGetQueryIndexediv, 		void, 	gl_enum_t target, gl_uint_t index, gl_enum_t pname, gl_int_t *params) \
X(gl_query_get_buffer_object_i64v, glGetQueryBufferObjecti64v, void, gl_uint_t id, gl_uint_t buffer, gl_enum_t pname, gl_intptr_t offset) \
X(gl_query_get_buffer_object_iv, glGetQueryBufferObjectiv, 	void, 	gl_uint_t id, gl_uint_t buffer, gl_enum_t pname, gl_intptr_t offset) \
X(gl_query_get_buffer_object_ui64v, glGetQueryBufferObjectui64v, void, gl_uint_t id, gl_uint_t buffer, gl_enum_t pname, gl_intptr_t offset) \
X(gl_query_get_buffer_object_uiv, glGetQueryBufferObjectuiv, void, 	gl_uint_t id, gl_uint_t buffer, gl_enum_t pname, gl_intptr_t offset) \
/* SYNC */ \
X(gl_sync_fence_create, 		glFenceSync, 				gl_sync_t, gl_enum_t condition, gl_bitfield_t flags) \
X(gl_sync_delete, 				glDeleteSync, 				void, 	gl_sync_t sync) \
X(gl_sync_is, 					glIsSync, 					gl_boolean_t, gl_sync_t sync) \
X(gl_sync_client_wait, 		glClientWaitSync, 			gl_enum_t, gl_sync_t sync, gl_bitfield_t flags, gl_uint64_t timeout) \
X(gl_sync_wait, 				glWaitSync, 				void, 	gl_sync_t sync, gl_bitfield_t flags, gl_uint64_t timeout) \
X(gl_sync_get_iv, 				glGetSynciv, 				void, 	gl_sync_t sync, gl_enum_t pname, gl_sizei_t count, gl_sizei_t *length, gl_int_t *values) \
/* DRAWING (no DSA equivalent - reads currently bound VAO/program) */ \
X(gl_draw_arrays, 				glDrawArrays, 				void, 	gl_enum_t mode, gl_int_t first, gl_sizei_t count) \
X(gl_draw_arrays_instanced, 	glDrawArraysInstanced, 		void, 	gl_enum_t mode, gl_int_t first, gl_sizei_t count, gl_sizei_t instance_count) \
X(gl_draw_arrays_instanced_base_instance, glDrawArraysInstancedBaseInstance, void, gl_enum_t mode, gl_int_t first, gl_sizei_t count, gl_sizei_t instance_count, gl_uint_t base_instance) \
X(gl_draw_arrays_indirect, 	glDrawArraysIndirect, 		void, 	gl_enum_t mode, const void *indirect) \
X(gl_draw_arrays_multi, 		glMultiDrawArrays, 			void, 	gl_enum_t mode, const gl_int_t *first, const gl_sizei_t *count, gl_sizei_t draw_count) \
X(gl_multidraw_arrays_indirect, glMultiDrawArraysIndirect, void, 	gl_enum_t mode, const void *indirect, gl_sizei_t draw_count, gl_sizei_t stride) \
X(gl_draw_arrays_multi_indirect_count, glMultiDrawArraysIndirectCount, void, gl_enum_t mode, const void *indirect, gl_intptr_t draw_count, gl_sizei_t max_draw_count, gl_sizei_t stride) \
X(gl_draw_elements, 			glDrawElements, 			void, 	gl_enum_t mode, gl_sizei_t count, gl_enum_t type, const void *indices) \
X(gl_draw_elements_base_vertex, glDrawElementsBaseVertex, 	void, 	gl_enum_t mode, gl_sizei_t count, gl_enum_t type, const void *indices, gl_int_t base_vertex) \
X(gl_draw_elements_instanced, 	glDrawElementsInstanced, 	void, 	gl_enum_t mode, gl_sizei_t count, gl_enum_t type, const void *indices, gl_sizei_t instance_count) \
X(gl_draw_elements_instanced_base_vertex, glDrawElementsInstancedBaseVertex, void, gl_enum_t mode, gl_sizei_t count, gl_enum_t type, const void *indices, gl_sizei_t instance_count, gl_int_t base_vertex) \
X(gl_draw_elements_instanced_base_instance, glDrawElementsInstancedBaseInstance, void, gl_enum_t mode, gl_sizei_t count, gl_enum_t type, const void *indices, gl_sizei_t instance_count, gl_uint_t base_instance) \
X(gl_draw_elements_instanced_base_vertex_base_instance, glDrawElementsInstancedBaseVertexBaseInstance, void, gl_enum_t mode, gl_sizei_t count, gl_enum_t type, const void *indices, gl_sizei_t instance_count, gl_int_t base_vertex, gl_uint_t base_instance) \
X(gl_draw_elements_indirect, 	glDrawElementsIndirect, 	void, 	gl_enum_t mode, gl_enum_t type, const void *indirect) \
X(gl_draw_elements_multi, 		glMultiDrawElements, 		void, 	gl_enum_t mode, const gl_sizei_t *count, gl_enum_t type, const void *const *indices, gl_sizei_t draw_count) \
X(gl_draw_elements_multi_base_vertex, glMultiDrawElementsBaseVertex, void, gl_enum_t mode, const gl_sizei_t *count, gl_enum_t type, const void *const *indices, gl_sizei_t draw_count, const gl_int_t *base_vertex) \
X(gl_draw_elements_multi_indirect, glMultiDrawElementsIndirect, void, gl_enum_t mode, gl_enum_t type, const void *indirect, gl_sizei_t draw_count, gl_sizei_t stride) \
X(gl_draw_elements_multi_indirect_count, glMultiDrawElementsIndirectCount, void, gl_enum_t mode, gl_enum_t type, const void *indirect, gl_intptr_t draw_count, gl_sizei_t max_draw_count, gl_sizei_t stride) \
X(gl_draw_range_elements, 		glDrawRangeElements, 		void, 	gl_enum_t mode, gl_uint_t start, gl_uint_t end, gl_sizei_t count, gl_enum_t type, const void *indices) \
X(gl_draw_range_elements_base_vertex, glDrawRangeElementsBaseVertex, void, gl_enum_t mode, gl_uint_t start, gl_uint_t end, gl_sizei_t count, gl_enum_t type, const void *indices, gl_int_t base_vertex) \
/* COMPUTE */ \
X(gl_compute_dispatch, 		glDispatchCompute, 			void, 	gl_uint_t num_groups_x, gl_uint_t num_groups_y, gl_uint_t num_groups_z) \
X(gl_compute_dispatch_indirect, glDispatchComputeIndirect, void, 	gl_intptr_t indirect) \
/* BARRIER */ \
X(gl_barrier_memory, 			glMemoryBarrier, 			void, 	gl_bitfield_t barriers) \
X(gl_barrier_memory_by_region, glMemoryBarrierByRegion, 	void, 	gl_bitfield_t barriers) \
X(gl_barrier_texture, 			glTextureBarrier, 			void, 	void) \
/* VIEWPORT / SCISSOR / DEPTH RANGE / CLIP CONTROL */ \
X(gl_clip_control, 			glClipControl, 				void, 	gl_enum_t origin, gl_enum_t depth) \
X(gl_viewport, 				glViewport, 				void, 	gl_int_t x, gl_int_t y, gl_sizei_t width, gl_sizei_t height) \
X(gl_viewport_array, 			glViewportArrayv, 			void, 	gl_uint_t first, gl_sizei_t count, const gl_float_t *v) \
X(gl_viewport_indexed, 		glViewportIndexedf, 		void, 	gl_uint_t index, gl_float_t x, gl_float_t y, gl_float_t w, gl_float_t h) \
X(gl_viewport_indexed_v, 		glViewportIndexedfv, 		void, 	gl_uint_t index, const gl_float_t *v) \
X(gl_scissor, 					glScissor, 					void, 	gl_int_t x, gl_int_t y, gl_sizei_t width, gl_sizei_t height) \
X(gl_scissor_array, 			glScissorArrayv, 			void, 	gl_uint_t first, gl_sizei_t count, const gl_int_t *v) \
X(gl_scissor_indexed, 			glScissorIndexed, 			void, 	gl_uint_t index, gl_int_t left, gl_int_t bottom, gl_sizei_t width, gl_sizei_t height) \
X(gl_scissor_indexed_v, 		glScissorIndexedv, 			void, 	gl_uint_t index, const gl_int_t *v) \
X(gl_depth_range, 				glDepthRange, 				void, 	gl_double_t n, gl_double_t f) \
X(gl_depth_range_f, 			glDepthRangef, 				void, 	gl_float_t n, gl_float_t f) \
X(gl_depth_range_array, 		glDepthRangeArrayv, 		void, 	gl_uint_t first, gl_sizei_t count, const gl_double_t *v) \
X(gl_depth_range_indexed, 		glDepthRangeIndexed, 		void, 	gl_uint_t index, gl_double_t n, gl_double_t f) \
/* PIPELINE / RASTER STATE (global GL state, no object handle to attach DSA to) */ \
X(gl_enable, 					glEnable, 					void, 	gl_enum_t cap) \
X(gl_disable, 					glDisable, 					void, 	gl_enum_t cap) \
X(gl_enable_indexed, 			glEnablei, 					void, 	gl_enum_t target, gl_uint_t index) \
X(gl_disable_indexed, 			glDisablei, 				void, 	gl_enum_t target, gl_uint_t index) \
X(gl_is_enabled, 				glIsEnabled, 				gl_boolean_t, gl_enum_t cap) \
X(gl_is_enabled_indexed, 		glIsEnabledi, 				gl_boolean_t, gl_enum_t target, gl_uint_t index) \
X(gl_blend_func, 				glBlendFunc, 				void, 	gl_enum_t sfactor, gl_enum_t dfactor) \
X(gl_blend_func_indexed, 		glBlendFunci, 				void, 	gl_uint_t buf, gl_enum_t sfactor, gl_enum_t dfactor) \
X(gl_blend_func_separate, 		glBlendFuncSeparate, 		void, 	gl_enum_t sfactor_rgb, gl_enum_t dfactor_rgb, gl_enum_t sfactor_alpha, gl_enum_t dfactor_alpha) \
X(gl_blend_func_separate_indexed, glBlendFuncSeparatei, 	void, 	gl_uint_t buf, gl_enum_t sfactor_rgb, gl_enum_t dfactor_rgb, gl_enum_t sfactor_alpha, gl_enum_t dfactor_alpha) \
X(gl_blend_equation, 			glBlendEquation, 			void, 	gl_enum_t mode) \
X(gl_blend_equation_indexed, 	glBlendEquationi, 			void, 	gl_uint_t buf, gl_enum_t mode) \
X(gl_blend_equation_separate, 	glBlendEquationSeparate, 	void, 	gl_enum_t mode_rgb, gl_enum_t mode_alpha) \
X(gl_blend_equation_separate_indexed, glBlendEquationSeparatei, void, gl_uint_t buf, gl_enum_t mode_rgb, gl_enum_t mode_alpha) \
X(gl_blend_color, 				glBlendColor, 				void, 	gl_float_t red, gl_float_t green, gl_float_t blue, gl_float_t alpha) \
X(gl_logic_op, 				glLogicOp, 					void, 	gl_enum_t opcode) \
X(gl_depth_func, 				glDepthFunc, 				void, 	gl_enum_t func) \
X(gl_depth_mask, 				glDepthMask, 				void, 	gl_boolean_t flag) \
X(gl_cull_face, 				glCullFace, 				void, 	gl_enum_t mode) \
X(gl_front_face, 				glFrontFace, 				void, 	gl_enum_t mode) \
X(gl_polygon_mode, 			glPolygonMode, 				void, 	gl_enum_t face, gl_enum_t mode) \
X(gl_polygon_offset, 			glPolygonOffset, 			void, 	gl_float_t factor, gl_float_t units) \
X(gl_polygon_offset_clamp, 	glPolygonOffsetClamp, 		void, 	gl_float_t factor, gl_float_t units, gl_float_t clamp) \
X(gl_line_width, 				glLineWidth, 				void, 	gl_float_t width) \
X(gl_point_size, 				glPointSize, 				void, 	gl_float_t size) \
X(gl_point_parameter_i, 		glPointParameteri, 			void, 	gl_enum_t pname, gl_int_t param) \
X(gl_point_parameter_f, 		glPointParameterf, 			void, 	gl_enum_t pname, gl_float_t param) \
X(gl_point_parameter_iv, 		glPointParameteriv, 		void, 	gl_enum_t pname, const gl_int_t *params) \
X(gl_point_parameter_fv, 		glPointParameterfv, 		void, 	gl_enum_t pname, const gl_float_t *params) \
X(gl_stencil_func, 				glStencilFunc, 				void, 	gl_enum_t func, gl_int_t ref, gl_uint_t mask) \
X(gl_stencil_func_separate, 	glStencilFuncSeparate, 		void, 	gl_enum_t face, gl_enum_t func, gl_int_t ref, gl_uint_t mask) \
X(gl_stencil_op, 				glStencilOp, 				void, 	gl_enum_t sfail, gl_enum_t dpfail, gl_enum_t dppass) \
X(gl_stencil_op_separate, 		glStencilOpSeparate, 		void, 	gl_enum_t face, gl_enum_t sfail, gl_enum_t dpfail, gl_enum_t dppass) \
X(gl_stencil_mask, 				glStencilMask, 				void, 	gl_uint_t mask) \
X(gl_stencil_mask_separate, 	glStencilMaskSeparate, 		void, 	gl_enum_t face, gl_uint_t mask) \
X(gl_color_mask, 				glColorMask, 				void, 	gl_boolean_t red, gl_boolean_t green, gl_boolean_t blue, gl_boolean_t alpha) \
X(gl_color_mask_indexed, 		glColorMaski, 				void, 	gl_uint_t index, gl_boolean_t red, gl_boolean_t green, gl_boolean_t blue, gl_boolean_t alpha) \
X(gl_sample_coverage, 			glSampleCoverage, 			void, 	gl_float_t value, gl_boolean_t invert) \
X(gl_sample_mask_indexed, 		glSampleMaski, 				void, 	gl_uint_t mask_number, gl_bitfield_t mask) \
X(gl_sample_shading_min, 		glMinSampleShading, 		void, 	gl_float_t value) \
X(gl_primitive_restart_index, 	glPrimitiveRestartIndex, 	void, 	gl_uint_t index) \
X(gl_provoking_vertex, 			glProvokingVertex, 			void, 	gl_enum_t mode) \
X(gl_patch_parameter_i, 		glPatchParameteri, 			void, 	gl_enum_t pname, gl_int_t value) \
X(gl_patch_parameter_fv, 		glPatchParameterfv, 		void, 	gl_enum_t pname, const gl_float_t *values) \
/* CLEAR */ \
X(gl_clear_color, 				glClearColor, 				void, 	gl_float_t red, gl_float_t green, gl_float_t blue, gl_float_t alpha) \
X(gl_clear_depth, 				glClearDepth, 				void, 	gl_double_t depth) \
X(gl_clear_depth_f, 			glClearDepthf, 				void, 	gl_float_t depth) \
X(gl_clear_stencil, 			glClearStencil, 			void, 	gl_int_t s) \
X(gl_clear, 					glClear, 					void, 	gl_bitfield_t mask) \
/* PIXEL TRANSFER */ \
X(gl_pixel_store_f, 			glPixelStoref, 				void, 	gl_enum_t pname, gl_float_t param) \
X(gl_pixel_store_i, 			glPixelStorei, 				void, 	gl_enum_t pname, gl_int_t param) \
X(gl_read_buffer, 				glReadBuffer, 				void, 	gl_enum_t src) \
X(gl_pixels_read, 				glReadPixels, 				void, 	gl_int_t x, gl_int_t y, gl_sizei_t width, gl_sizei_t height, gl_enum_t format, gl_enum_t type, void *pixels) \
X(gl_pixels_read_n, 			glReadnPixels, 				void, 	gl_int_t x, gl_int_t y, gl_sizei_t width, gl_sizei_t height, gl_enum_t format, gl_enum_t type, gl_sizei_t buf_size, void *data) \
X(gl_clamp_color, 				glClampColor, 				void, 	gl_enum_t target, gl_enum_t clamp) \
/* STATE / CAPABILITY QUERY */ \
X(gl_get_boolean_v, 			glGetBooleanv, 				void, 	gl_enum_t pname, gl_boolean_t *data) \
X(gl_get_int_v, 				glGetIntegerv, 				void, 	gl_enum_t pname, gl_int_t *data) \
X(gl_get_int64_v, 				glGetInteger64v, 			void, 	gl_enum_t pname, gl_int64_t *data) \
X(gl_get_float_v, 				glGetFloatv, 				void, 	gl_enum_t pname, gl_float_t *data) \
X(gl_get_double_v, 				glGetDoublev, 				void, 	gl_enum_t pname, gl_double_t *data) \
X(gl_get_boolean_indexed_v, 	glGetBooleani_v, 			void, 	gl_enum_t target, gl_uint_t index, gl_boolean_t *data) \
X(gl_get_int_indexed_v, 		glGetIntegeri_v, 			void, 	gl_enum_t target, gl_uint_t index, gl_int_t *data) \
X(gl_get_int64_indexed_v, 		glGetInteger64i_v, 			void, 	gl_enum_t target, gl_uint_t index, gl_int64_t *data) \
X(gl_get_float_indexed_v, 		glGetFloati_v, 				void, 	gl_enum_t target, gl_uint_t index, gl_float_t *data) \
X(gl_get_double_indexed_v, 		glGetDoublei_v, 			void, 	gl_enum_t target, gl_uint_t index, gl_double_t *data) \
X(gl_get_string, 				glGetString, 				const gl_ubyte_t *, gl_enum_t name) \
X(gl_get_string_indexed, 		glGetStringi, 				const gl_ubyte_t *, gl_enum_t name, gl_uint_t index) \
X(gl_get_error, 				glGetError, 				gl_enum_t, void) \
X(gl_get_internalformat_iv, 	glGetInternalformativ, 		void, 	gl_enum_t target, gl_enum_t internal_format, gl_enum_t pname, gl_sizei_t count, gl_int_t *params) \
X(gl_get_internalformat_i64v, 	glGetInternalformati64v, 	void, 	gl_enum_t target, gl_enum_t internal_format, gl_enum_t pname, gl_sizei_t count, gl_int64_t *params) \
X(gl_get_reset_status, 			glGetGraphicsResetStatus, 	gl_enum_t, void) \
X(gl_get_pointer_v, 			glGetPointerv, 				void, 	gl_enum_t pname, void **params) \
/* DEBUG OUTPUT */ \
X(gl_debug_message_callback, 	glDebugMessageCallback, 	void, 	gl_debug_proc_t callback, const void *user_param) \
X(gl_debug_message_control, 	glDebugMessageControl, 		void, 	gl_enum_t source, gl_enum_t type, gl_enum_t severity, gl_sizei_t count, const gl_uint_t *ids, gl_boolean_t enabled) \
X(gl_debug_message_insert, 		glDebugMessageInsert, 		void, 	gl_enum_t source, gl_enum_t type, gl_uint_t id, gl_enum_t severity, gl_sizei_t length, const gl_char_t *buf) \
X(gl_debug_message_log_get, 	glGetDebugMessageLog, 		gl_uint_t, gl_uint_t count, gl_sizei_t buf_size, gl_enum_t *sources, gl_enum_t *types, gl_uint_t *ids, gl_enum_t *severities, gl_sizei_t *lengths, gl_char_t *message_log) \
X(gl_object_label_get, 			glGetObjectLabel, 			void, 	gl_enum_t identifier, gl_uint_t name, gl_sizei_t buf_size, gl_sizei_t *length, gl_char_t *label) \
X(gl_object_ptr_label_get, 		glGetObjectPtrLabel, 		void, 	const void *ptr, gl_sizei_t buf_size, gl_sizei_t *length, gl_char_t *label) \
X(gl_object_label_set, 			glObjectLabel, 				void, 	gl_enum_t identifier, gl_uint_t name, gl_sizei_t length, const gl_char_t *label) \
X(gl_object_ptr_label_set, 		glObjectPtrLabel, 			void, 	const void *ptr, gl_sizei_t length, const gl_char_t *label) \
X(gl_debug_group_push, 			glPushDebugGroup, 			void, 	gl_enum_t source, gl_uint_t id, gl_sizei_t length, const gl_char_t *message) \
X(gl_debug_group_pop, 			glPopDebugGroup, 			void, 	void) \
/* MISC */ \
X(gl_hint, 						glHint, 					void, 	gl_enum_t target, gl_enum_t mode) \
X(gl_flush, 					glFlush, 					void, 	void) \
X(gl_finish, 					glFinish, 					void, 	void)

#define X(mgl_name, gl_name, return_type, ...) typedef return_type (APIENTRYP mgl_##mgl_name##_t) (__VA_ARGS__);
MGL_FUNCTIONS_XLIST
#undef X

#define X(mgl_name, gl_name, return_type, ...) static mgl_##mgl_name##_t mgl_name = 0;
MGL_FUNCTIONS_XLIST
#undef X

typedef void (*mgl_fnptr_t)(void);
typedef mgl_fnptr_t (* mgl_get_proc_address_t) (const char *proc);

int mgl_init(mgl_get_proc_address_t mgl_get_proc_address) {
	#define X(mgl_name, gl_name, return_type, ...) (void) (mgl_name);
	MGL_FUNCTIONS_XLIST
	#undef X

	#define X(mgl_name, gl_name, return_type, ...) \
	mgl_##mgl_name##_t mgl_name = (mgl_##mgl_name##_t) mgl_get_proc_address(#gl_name);
	MGL_FUNCTIONS_XLIST
	#undef X

	#define X(mgl_name, gl_name, return_type, ...) \
	if (!mgl_name) return(0);
	MGL_FUNCTIONS_XLIST
	#undef X

	return(1);
}

#endif//MOPENGL_C
