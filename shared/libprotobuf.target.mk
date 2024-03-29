# This file is generated by gyp; do not edit.
LOCAL_PATH := ../..
GYP_CONFIGURATION := Default
include $(CLEAR_VARS)

LOCAL_MODULE_CLASS := STATIC_LIBRARIES
LOCAL_MODULE := third_party_shared_libprotobuf_gyp
LOCAL_MODULE_SUFFIX := .a
LOCAL_MODULE_TAGS := optional
gyp_intermediate_dir := $(abspath $(LOCAL_PATH)/third_party/shared)

# Make sure our deps are built first.
GYP_TARGET_DEPENDENCIES :=

GYP_GENERATED_OUTPUTS :=

# Make sure our deps and generated files are built first.
GYP_TARGET_DEPENDENCIES += $(GYP_GENERATED_OUTPUTS)

LOCAL_CPP_EXTENSION := .cc
LOCAL_GENERATED_SOURCES :=

GYP_COPIED_SOURCE_ORIGIN_DIRS :=

LOCAL_SRC_FILES := \
	third_party/shared/protobuf/src/google/protobuf/compiler/java/java_doc_comment.cc \
	third_party/shared/protobuf/src/google/protobuf/stubs/bytestream.cc \
	third_party/shared/protobuf/src/google/protobuf/stubs/int128.cc \
	third_party/shared/protobuf/src/google/protobuf/stubs/mathlimits.cc \
	third_party/shared/protobuf/src/google/protobuf/stubs/once.cc \
	third_party/shared/protobuf/src/google/protobuf/stubs/common.cc \
	third_party/shared/protobuf/src/google/protobuf/stubs/status.cc \
	third_party/shared/protobuf/src/google/protobuf/stubs/statusor.cc \
	third_party/shared/protobuf/src/google/protobuf/stubs/strutil.cc \
	third_party/shared/protobuf/src/google/protobuf/stubs/substitute.cc \
	third_party/shared/protobuf/src/google/protobuf/stubs/stringpiece.cc \
	third_party/shared/protobuf/src/google/protobuf/stubs/stringprintf.cc \
	third_party/shared/protobuf/src/google/protobuf/stubs/structurally_valid.cc \
	third_party/shared/protobuf/src/google/protobuf/any.cc \
	third_party/shared/protobuf/src/google/protobuf/any.pb.cc \
	third_party/shared/protobuf/src/google/protobuf/api.pb.cc \
	third_party/shared/protobuf/src/google/protobuf/arena.cc \
	third_party/shared/protobuf/src/google/protobuf/arenastring.cc \
	third_party/shared/protobuf/src/google/protobuf/descriptor.cc \
	third_party/shared/protobuf/src/google/protobuf/descriptor.pb.cc \
	third_party/shared/protobuf/src/google/protobuf/descriptor_database.cc \
	third_party/shared/protobuf/src/google/protobuf/duration.pb.cc \
	third_party/shared/protobuf/src/google/protobuf/dynamic_message.cc \
	third_party/shared/protobuf/src/google/protobuf/empty.pb.cc \
	third_party/shared/protobuf/src/google/protobuf/extension_set.cc \
	third_party/shared/protobuf/src/google/protobuf/extension_set_heavy.cc \
	third_party/shared/protobuf/src/google/protobuf/field_mask.pb.cc \
	third_party/shared/protobuf/src/google/protobuf/generated_message_reflection.cc \
	third_party/shared/protobuf/src/google/protobuf/map_field.cc \
	third_party/shared/protobuf/src/google/protobuf/message.cc \
	third_party/shared/protobuf/src/google/protobuf/reflection_ops.cc \
	third_party/shared/protobuf/src/google/protobuf/service.cc \
	third_party/shared/protobuf/src/google/protobuf/text_format.cc \
	third_party/shared/protobuf/src/google/protobuf/wire_format.cc \
	third_party/shared/protobuf/src/google/protobuf/io/coded_stream.cc \
	third_party/shared/protobuf/src/google/protobuf/io/gzip_stream.cc \
	third_party/shared/protobuf/src/google/protobuf/io/printer.cc \
	third_party/shared/protobuf/src/google/protobuf/io/strtod.cc \
	third_party/shared/protobuf/src/google/protobuf/io/tokenizer.cc \
	third_party/shared/protobuf/src/google/protobuf/io/zero_copy_stream.cc \
	third_party/shared/protobuf/src/google/protobuf/io/zero_copy_stream_impl.cc \
	third_party/shared/protobuf/src/google/protobuf/compiler/importer.cc \
	third_party/shared/protobuf/src/google/protobuf/compiler/parser.cc


# Flags passed to both C and C++ files.
MY_CFLAGS_Default :=

MY_DEFS_Default := \
	'-D__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1' \
	'-D__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2' \
	'-D__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4' \
	'-D__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8' \
	'-DGOOGLE_PROTOBUF_NO_RTTI' \
	'-DGOOGLE_PROTOBUF_NO_STATIC_INITIALIZER'


# Include paths placed before CFLAGS/CPPFLAGS
LOCAL_C_INCLUDES_Default := \
	$(LOCAL_PATH)/third_party/shared/protobuf/src \
	$(LOCAL_PATH)/third_party/shared/protobuf


# Flags passed to only C++ (and not C) files.
LOCAL_CPPFLAGS_Default := \
	-std=c++11 \
	-stdlib=libc++ \
	-frtti \
	-DHAVE_PTHREAD \
	-g


LOCAL_CFLAGS := $(MY_CFLAGS_$(GYP_CONFIGURATION)) $(MY_DEFS_$(GYP_CONFIGURATION))
LOCAL_C_INCLUDES := $(GYP_COPIED_SOURCE_ORIGIN_DIRS) $(LOCAL_C_INCLUDES_$(GYP_CONFIGURATION))
LOCAL_CPPFLAGS := $(LOCAL_CPPFLAGS_$(GYP_CONFIGURATION))
### Rules for final target.

LOCAL_LDFLAGS_Default :=


LOCAL_LDFLAGS := $(LOCAL_LDFLAGS_$(GYP_CONFIGURATION))

LOCAL_STATIC_LIBRARIES :=

# Enable grouping to fix circular references
LOCAL_GROUP_STATIC_LIBRARIES := true

LOCAL_SHARED_LIBRARIES :=

# Add target alias to "gyp_all_modules" target.
.PHONY: gyp_all_modules
gyp_all_modules: third_party_shared_libprotobuf_gyp

# Alias gyp target name.
.PHONY: libprotobuf
libprotobuf: third_party_shared_libprotobuf_gyp

include $(BUILD_STATIC_LIBRARY)
