// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AuthMetadata.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "AuthMetadata.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* AuthMetadata_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  AuthMetadata_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_AuthMetadata_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_AuthMetadata_2eproto() {
  protobuf_AddDesc_AuthMetadata_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "AuthMetadata.proto");
  GOOGLE_CHECK(file != NULL);
  AuthMetadata_descriptor_ = file->message_type(0);
  static const int AuthMetadata_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthMetadata, user_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthMetadata, device_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthMetadata, user_cookie_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthMetadata, xsrf_cookie_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthMetadata, device_uuid_),
  };
  AuthMetadata_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      AuthMetadata_descriptor_,
      AuthMetadata::internal_default_instance(),
      AuthMetadata_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthMetadata, _has_bits_),
      -1,
      -1,
      sizeof(AuthMetadata),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AuthMetadata, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_AuthMetadata_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      AuthMetadata_descriptor_, AuthMetadata::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_AuthMetadata_2eproto() {
  AuthMetadata_default_instance_.Shutdown();
  delete AuthMetadata_reflection_;
}

void protobuf_InitDefaults_AuthMetadata_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  AuthMetadata_default_instance_.DefaultConstruct();
  AuthMetadata_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_AuthMetadata_2eproto_once_);
void protobuf_InitDefaults_AuthMetadata_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_AuthMetadata_2eproto_once_,
                 &protobuf_InitDefaults_AuthMetadata_2eproto_impl);
}
void protobuf_AddDesc_AuthMetadata_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_AuthMetadata_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022AuthMetadata.proto\"q\n\014AuthMetadata\022\017\n\007"
    "user_id\030\001 \001(\003\022\021\n\tdevice_id\030\002 \001(\003\022\023\n\013user"
    "_cookie\030\003 \001(\014\022\023\n\013xsrf_cookie\030\004 \001(\014\022\023\n\013de"
    "vice_uuid\030\005 \001(\tB%\n\023co.viewfinder.protoB\016"
    "AuthMetadataPB", 174);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "AuthMetadata.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_AuthMetadata_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_AuthMetadata_2eproto_once_);
void protobuf_AddDesc_AuthMetadata_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_AuthMetadata_2eproto_once_,
                 &protobuf_AddDesc_AuthMetadata_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_AuthMetadata_2eproto {
  StaticDescriptorInitializer_AuthMetadata_2eproto() {
    protobuf_AddDesc_AuthMetadata_2eproto();
  }
} static_descriptor_initializer_AuthMetadata_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AuthMetadata::kUserIdFieldNumber;
const int AuthMetadata::kDeviceIdFieldNumber;
const int AuthMetadata::kUserCookieFieldNumber;
const int AuthMetadata::kXsrfCookieFieldNumber;
const int AuthMetadata::kDeviceUuidFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AuthMetadata::AuthMetadata()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_AuthMetadata_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:AuthMetadata)
}

void AuthMetadata::InitAsDefaultInstance() {
}

AuthMetadata::AuthMetadata(const AuthMetadata& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:AuthMetadata)
}

void AuthMetadata::SharedCtor() {
  _cached_size_ = 0;
  user_cookie_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  xsrf_cookie_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  device_uuid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&user_id_, 0, reinterpret_cast<char*>(&device_id_) -
    reinterpret_cast<char*>(&user_id_) + sizeof(device_id_));
}

AuthMetadata::~AuthMetadata() {
  // @@protoc_insertion_point(destructor:AuthMetadata)
  SharedDtor();
}

void AuthMetadata::SharedDtor() {
  user_cookie_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  xsrf_cookie_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  device_uuid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void AuthMetadata::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AuthMetadata::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return AuthMetadata_descriptor_;
}

const AuthMetadata& AuthMetadata::default_instance() {
  protobuf_InitDefaults_AuthMetadata_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<AuthMetadata> AuthMetadata_default_instance_;

AuthMetadata* AuthMetadata::New(::google::protobuf::Arena* arena) const {
  AuthMetadata* n = new AuthMetadata;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void AuthMetadata::Clear() {
// @@protoc_insertion_point(message_clear_start:AuthMetadata)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(AuthMetadata, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<AuthMetadata*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 31u) {
    ZR_(user_id_, device_id_);
    if (has_user_cookie()) {
      user_cookie_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_xsrf_cookie()) {
      xsrf_cookie_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_device_uuid()) {
      device_uuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }

#undef ZR_HELPER_
#undef ZR_

  _has_bits_.Clear();
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool AuthMetadata::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:AuthMetadata)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 user_id = 1;
      case 1: {
        if (tag == 8) {
          set_has_user_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &user_id_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_device_id;
        break;
      }

      // optional int64 device_id = 2;
      case 2: {
        if (tag == 16) {
         parse_device_id:
          set_has_device_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &device_id_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_user_cookie;
        break;
      }

      // optional bytes user_cookie = 3;
      case 3: {
        if (tag == 26) {
         parse_user_cookie:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_user_cookie()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_xsrf_cookie;
        break;
      }

      // optional bytes xsrf_cookie = 4;
      case 4: {
        if (tag == 34) {
         parse_xsrf_cookie:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_xsrf_cookie()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_device_uuid;
        break;
      }

      // optional string device_uuid = 5;
      case 5: {
        if (tag == 42) {
         parse_device_uuid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_device_uuid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->device_uuid().data(), this->device_uuid().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "AuthMetadata.device_uuid");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:AuthMetadata)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:AuthMetadata)
  return false;
#undef DO_
}

void AuthMetadata::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:AuthMetadata)
  // optional int64 user_id = 1;
  if (has_user_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->user_id(), output);
  }

  // optional int64 device_id = 2;
  if (has_device_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->device_id(), output);
  }

  // optional bytes user_cookie = 3;
  if (has_user_cookie()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->user_cookie(), output);
  }

  // optional bytes xsrf_cookie = 4;
  if (has_xsrf_cookie()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      4, this->xsrf_cookie(), output);
  }

  // optional string device_uuid = 5;
  if (has_device_uuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->device_uuid().data(), this->device_uuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "AuthMetadata.device_uuid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->device_uuid(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:AuthMetadata)
}

::google::protobuf::uint8* AuthMetadata::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:AuthMetadata)
  // optional int64 user_id = 1;
  if (has_user_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->user_id(), target);
  }

  // optional int64 device_id = 2;
  if (has_device_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->device_id(), target);
  }

  // optional bytes user_cookie = 3;
  if (has_user_cookie()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->user_cookie(), target);
  }

  // optional bytes xsrf_cookie = 4;
  if (has_xsrf_cookie()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        4, this->xsrf_cookie(), target);
  }

  // optional string device_uuid = 5;
  if (has_device_uuid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->device_uuid().data(), this->device_uuid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "AuthMetadata.device_uuid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->device_uuid(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AuthMetadata)
  return target;
}

size_t AuthMetadata::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AuthMetadata)
  size_t total_size = 0;

  if (_has_bits_[0 / 32] & 31u) {
    // optional int64 user_id = 1;
    if (has_user_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->user_id());
    }

    // optional int64 device_id = 2;
    if (has_device_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->device_id());
    }

    // optional bytes user_cookie = 3;
    if (has_user_cookie()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->user_cookie());
    }

    // optional bytes xsrf_cookie = 4;
    if (has_xsrf_cookie()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->xsrf_cookie());
    }

    // optional string device_uuid = 5;
    if (has_device_uuid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->device_uuid());
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AuthMetadata::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AuthMetadata)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const AuthMetadata* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AuthMetadata>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AuthMetadata)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AuthMetadata)
    UnsafeMergeFrom(*source);
  }
}

void AuthMetadata::MergeFrom(const AuthMetadata& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AuthMetadata)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void AuthMetadata::UnsafeMergeFrom(const AuthMetadata& from) {
  GOOGLE_DCHECK(&from != this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_user_id()) {
      set_user_id(from.user_id());
    }
    if (from.has_device_id()) {
      set_device_id(from.device_id());
    }
    if (from.has_user_cookie()) {
      set_has_user_cookie();
      user_cookie_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.user_cookie_);
    }
    if (from.has_xsrf_cookie()) {
      set_has_xsrf_cookie();
      xsrf_cookie_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.xsrf_cookie_);
    }
    if (from.has_device_uuid()) {
      set_has_device_uuid();
      device_uuid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.device_uuid_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::UnknownFieldSet::MergeToInternalMetdata(
      from.unknown_fields(), &_internal_metadata_);
  }
}

void AuthMetadata::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AuthMetadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AuthMetadata::CopyFrom(const AuthMetadata& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AuthMetadata)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool AuthMetadata::IsInitialized() const {

  return true;
}

void AuthMetadata::Swap(AuthMetadata* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AuthMetadata::InternalSwap(AuthMetadata* other) {
  std::swap(user_id_, other->user_id_);
  std::swap(device_id_, other->device_id_);
  user_cookie_.Swap(&other->user_cookie_);
  xsrf_cookie_.Swap(&other->xsrf_cookie_);
  device_uuid_.Swap(&other->device_uuid_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AuthMetadata::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = AuthMetadata_descriptor_;
  metadata.reflection = AuthMetadata_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AuthMetadata

// optional int64 user_id = 1;
bool AuthMetadata::has_user_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void AuthMetadata::set_has_user_id() {
  _has_bits_[0] |= 0x00000001u;
}
void AuthMetadata::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void AuthMetadata::clear_user_id() {
  user_id_ = GOOGLE_LONGLONG(0);
  clear_has_user_id();
}
::google::protobuf::int64 AuthMetadata::user_id() const {
  // @@protoc_insertion_point(field_get:AuthMetadata.user_id)
  return user_id_;
}
void AuthMetadata::set_user_id(::google::protobuf::int64 value) {
  set_has_user_id();
  user_id_ = value;
  // @@protoc_insertion_point(field_set:AuthMetadata.user_id)
}

// optional int64 device_id = 2;
bool AuthMetadata::has_device_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void AuthMetadata::set_has_device_id() {
  _has_bits_[0] |= 0x00000002u;
}
void AuthMetadata::clear_has_device_id() {
  _has_bits_[0] &= ~0x00000002u;
}
void AuthMetadata::clear_device_id() {
  device_id_ = GOOGLE_LONGLONG(0);
  clear_has_device_id();
}
::google::protobuf::int64 AuthMetadata::device_id() const {
  // @@protoc_insertion_point(field_get:AuthMetadata.device_id)
  return device_id_;
}
void AuthMetadata::set_device_id(::google::protobuf::int64 value) {
  set_has_device_id();
  device_id_ = value;
  // @@protoc_insertion_point(field_set:AuthMetadata.device_id)
}

// optional bytes user_cookie = 3;
bool AuthMetadata::has_user_cookie() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void AuthMetadata::set_has_user_cookie() {
  _has_bits_[0] |= 0x00000004u;
}
void AuthMetadata::clear_has_user_cookie() {
  _has_bits_[0] &= ~0x00000004u;
}
void AuthMetadata::clear_user_cookie() {
  user_cookie_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_user_cookie();
}
const ::std::string& AuthMetadata::user_cookie() const {
  // @@protoc_insertion_point(field_get:AuthMetadata.user_cookie)
  return user_cookie_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void AuthMetadata::set_user_cookie(const ::std::string& value) {
  set_has_user_cookie();
  user_cookie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AuthMetadata.user_cookie)
}
void AuthMetadata::set_user_cookie(const char* value) {
  set_has_user_cookie();
  user_cookie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AuthMetadata.user_cookie)
}
void AuthMetadata::set_user_cookie(const void* value, size_t size) {
  set_has_user_cookie();
  user_cookie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AuthMetadata.user_cookie)
}
::std::string* AuthMetadata::mutable_user_cookie() {
  set_has_user_cookie();
  // @@protoc_insertion_point(field_mutable:AuthMetadata.user_cookie)
  return user_cookie_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* AuthMetadata::release_user_cookie() {
  // @@protoc_insertion_point(field_release:AuthMetadata.user_cookie)
  clear_has_user_cookie();
  return user_cookie_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void AuthMetadata::set_allocated_user_cookie(::std::string* user_cookie) {
  if (user_cookie != NULL) {
    set_has_user_cookie();
  } else {
    clear_has_user_cookie();
  }
  user_cookie_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), user_cookie);
  // @@protoc_insertion_point(field_set_allocated:AuthMetadata.user_cookie)
}

// optional bytes xsrf_cookie = 4;
bool AuthMetadata::has_xsrf_cookie() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void AuthMetadata::set_has_xsrf_cookie() {
  _has_bits_[0] |= 0x00000008u;
}
void AuthMetadata::clear_has_xsrf_cookie() {
  _has_bits_[0] &= ~0x00000008u;
}
void AuthMetadata::clear_xsrf_cookie() {
  xsrf_cookie_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_xsrf_cookie();
}
const ::std::string& AuthMetadata::xsrf_cookie() const {
  // @@protoc_insertion_point(field_get:AuthMetadata.xsrf_cookie)
  return xsrf_cookie_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void AuthMetadata::set_xsrf_cookie(const ::std::string& value) {
  set_has_xsrf_cookie();
  xsrf_cookie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AuthMetadata.xsrf_cookie)
}
void AuthMetadata::set_xsrf_cookie(const char* value) {
  set_has_xsrf_cookie();
  xsrf_cookie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AuthMetadata.xsrf_cookie)
}
void AuthMetadata::set_xsrf_cookie(const void* value, size_t size) {
  set_has_xsrf_cookie();
  xsrf_cookie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AuthMetadata.xsrf_cookie)
}
::std::string* AuthMetadata::mutable_xsrf_cookie() {
  set_has_xsrf_cookie();
  // @@protoc_insertion_point(field_mutable:AuthMetadata.xsrf_cookie)
  return xsrf_cookie_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* AuthMetadata::release_xsrf_cookie() {
  // @@protoc_insertion_point(field_release:AuthMetadata.xsrf_cookie)
  clear_has_xsrf_cookie();
  return xsrf_cookie_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void AuthMetadata::set_allocated_xsrf_cookie(::std::string* xsrf_cookie) {
  if (xsrf_cookie != NULL) {
    set_has_xsrf_cookie();
  } else {
    clear_has_xsrf_cookie();
  }
  xsrf_cookie_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), xsrf_cookie);
  // @@protoc_insertion_point(field_set_allocated:AuthMetadata.xsrf_cookie)
}

// optional string device_uuid = 5;
bool AuthMetadata::has_device_uuid() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void AuthMetadata::set_has_device_uuid() {
  _has_bits_[0] |= 0x00000010u;
}
void AuthMetadata::clear_has_device_uuid() {
  _has_bits_[0] &= ~0x00000010u;
}
void AuthMetadata::clear_device_uuid() {
  device_uuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_device_uuid();
}
const ::std::string& AuthMetadata::device_uuid() const {
  // @@protoc_insertion_point(field_get:AuthMetadata.device_uuid)
  return device_uuid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void AuthMetadata::set_device_uuid(const ::std::string& value) {
  set_has_device_uuid();
  device_uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AuthMetadata.device_uuid)
}
void AuthMetadata::set_device_uuid(const char* value) {
  set_has_device_uuid();
  device_uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AuthMetadata.device_uuid)
}
void AuthMetadata::set_device_uuid(const char* value, size_t size) {
  set_has_device_uuid();
  device_uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AuthMetadata.device_uuid)
}
::std::string* AuthMetadata::mutable_device_uuid() {
  set_has_device_uuid();
  // @@protoc_insertion_point(field_mutable:AuthMetadata.device_uuid)
  return device_uuid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* AuthMetadata::release_device_uuid() {
  // @@protoc_insertion_point(field_release:AuthMetadata.device_uuid)
  clear_has_device_uuid();
  return device_uuid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void AuthMetadata::set_allocated_device_uuid(::std::string* device_uuid) {
  if (device_uuid != NULL) {
    set_has_device_uuid();
  } else {
    clear_has_device_uuid();
  }
  device_uuid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), device_uuid);
  // @@protoc_insertion_point(field_set_allocated:AuthMetadata.device_uuid)
}

inline const AuthMetadata* AuthMetadata::internal_default_instance() {
  return &AuthMetadata_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
