# This file is generated by gyp; do not edit.

LOCAL_PATH := ../..
GYP_CONFIGURATION := Default
include $(CLEAR_VARS)

LOCAL_MODULE_CLASS := STATIC_LIBRARIES
LOCAL_MODULE := clients_shared_libshared_gyp
LOCAL_MODULE_SUFFIX := .a
LOCAL_MODULE_TAGS := optional
gyp_intermediate_dir := $(abspath $(LOCAL_PATH)/clients/shared)

# Make sure our deps are built first.
GYP_TARGET_DEPENDENCIES := \
	$(call intermediates-dir-for,STATIC_LIBRARIES,clients_shared_sharedprotos_gyp)/clients_shared_sharedprotos_gyp.a \
	$(call intermediates-dir-for,STATIC_LIBRARIES,third_party_shared_libphonenumbers_gyp)/third_party_shared_libphonenumbers_gyp.a

GYP_GENERATED_OUTPUTS :=

# Make sure our deps and generated files are built first.
GYP_TARGET_DEPENDENCIES += $(GYP_GENERATED_OUTPUTS)

LOCAL_CPP_EXTENSION := .cc
LOCAL_GENERATED_SOURCES :=

GYP_COPIED_SOURCE_ORIGIN_DIRS :=

LOCAL_SRC_FILES := \
	clients/shared/ActivityTable.cc \
	clients/shared/Analytics.cc \
	clients/shared/AppState.cc \
	clients/shared/AsyncState.cc \
	clients/shared/CommentTable.cc \
	clients/shared/ContactManager.cc \
	clients/shared/ContentTable.cc \
	clients/shared/DayTable.cc \
	clients/shared/DB.cc \
	clients/shared/DBFormat.cc \
	clients/shared/DBMigration.cc \
	clients/shared/DBStats.cc \
	clients/shared/DigestUtils.android.cc \
	clients/shared/DigestUtils.cc \
	clients/shared/EpisodeTable.cc \
	clients/shared/FileUtils.android.cc \
	clients/shared/FileUtils.cc \
	clients/shared/FontSymbols.cc \
	clients/shared/Format.cc \
	clients/shared/FullTextIndex.cc \
	clients/shared/IdentityManager.cc \
	clients/shared/ImageIndex.cc \
	clients/shared/JsonUtils.cc \
	clients/shared/LocaleUtils.android.cc \
	clients/shared/LocationUtils.cc \
	clients/shared/Logging.cc \
	clients/shared/Mutex.cc \
	clients/shared/NetworkQueue.cc \
	clients/shared/NetworkManager.cc \
	clients/shared/NotificationManager.cc \
	clients/shared/PathUtils.android.cc \
	clients/shared/PeopleRank.cc \
	clients/shared/PhoneUtils.cc \
	clients/shared/PhotoSelection.cc \
	clients/shared/PhotoStorage.cc \
	clients/shared/PhotoTable.cc \
	clients/shared/PlacemarkHistogram.cc \
	clients/shared/PlacemarkTable.cc \
	clients/shared/ServerId.cc \
	clients/shared/ServerUtils.cc \
	clients/shared/STLUtils.cc \
	clients/shared/StringUtils.android.cc \
	clients/shared/StringUtils.cc \
	clients/shared/Utils.cc \
	clients/shared/Utils.android.cc \
	clients/shared/ViewpointTable.cc \
	clients/shared/WallTime.cc \
	clients/shared/WallTime.android.cc


# Flags passed to both C and C++ files.
MY_CFLAGS_Default := \
	-DU_HAVE_STD_STRING=1

MY_DEFS_Default := \
	'-D__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1' \
	'-D__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2' \
	'-D__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4' \
	'-D__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8' \
	'-DOS_ANDROID'


# Include paths placed before CFLAGS/CPPFLAGS
LOCAL_C_INCLUDES_Default := \
	$(LOCAL_PATH)/clients/shared \
	$(LOCAL_PATH)/third_party/shared/leveldb/include \
	$(LOCAL_PATH)/third_party/shared/protobuf/src \
	$(LOCAL_PATH)/third_party/shared/re2 \
	$(LOCAL_PATH)/third_party/shared/icu \
	$(LOCAL_PATH)/third_party/shared/icu/source/common \
	$(LOCAL_PATH)/third_party/shared/icu/source/i18n \
	$(LOCAL_PATH)/third_party/shared/icu/source/tools/tzcode \
	$(LOCAL_PATH)/third_party/shared/phonenumbers/cpp/src \
	$(LOCAL_PATH)/clients/shared/protoc_out \
	$(LOCAL_PATH)/third_party/shared/leveldb/include \
	$(LOCAL_PATH)/third_party/shared/snappy \
	$(LOCAL_PATH)/third_party/shared/jsoncpp/include \
	$(LOCAL_PATH)/third_party/shared/protoc_out/phonenumbers/cpp/src/


# Flags passed to only C++ (and not C) files.
LOCAL_CPPFLAGS_Default := \
	-std=c++11 \
	-stdlib=libc++ \
	-frtti \
	-g


LOCAL_CFLAGS := $(MY_CFLAGS_$(GYP_CONFIGURATION)) $(MY_DEFS_$(GYP_CONFIGURATION))
LOCAL_C_INCLUDES := $(GYP_COPIED_SOURCE_ORIGIN_DIRS) $(LOCAL_C_INCLUDES_$(GYP_CONFIGURATION))
LOCAL_CPPFLAGS := $(LOCAL_CPPFLAGS_$(GYP_CONFIGURATION))
### Rules for final target.

LOCAL_LDFLAGS_Default :=


LOCAL_LDFLAGS := $(LOCAL_LDFLAGS_$(GYP_CONFIGURATION))

LOCAL_STATIC_LIBRARIES := \
	clients_shared_sharedprotos_gyp \
	third_party_shared_libleveldb_gyp \
	third_party_shared_libsnappy_gyp \
	third_party_shared_libprotobuf_gyp \
	third_party_shared_libprotobuf_lite_gyp \
	third_party_shared_libre2_gyp \
	third_party_shared_icui18n_gyp \
	third_party_shared_icuuc_gyp \
	third_party_shared_icudata_gyp \
	third_party_shared_libjsoncpp \
	clients_shared_sharedprotos_gyp \
	third_party_shared_libphonenumbers_gyp

# Enable grouping to fix circular references
LOCAL_GROUP_STATIC_LIBRARIES := true

LOCAL_SHARED_LIBRARIES :=

# Add target alias to "gyp_all_modules" target.
.PHONY: gyp_all_modules
gyp_all_modules: clients_shared_libshared_gyp

# Alias gyp target name.
.PHONY: libshared
libshared: clients_shared_libshared_gyp

include $(BUILD_STATIC_LIBRARY)
