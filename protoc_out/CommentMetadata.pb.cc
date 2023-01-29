// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommentMetadata.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CommentMetadata.pb.h"

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

const ::google::protobuf::Descriptor* CommentMetadata_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CommentMetadata_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_CommentMetadata_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_CommentMetadata_2eproto() {
  protobuf_AddDesc_CommentMetadata_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "CommentMetadata.proto");
  GOOGLE_CHECK(file != NULL);
  CommentMetadata_descriptor_ = file->message_type(0);
  static const int CommentMetadata_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommentMetadata, comment_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommentMetadata, viewpoint_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommentMetadata, user_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommentMetadata, asset_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommentMetadata, timestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommentMetadata, message_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommentMetadata, indexed_terms_),
  };
  CommentMetadata_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      CommentMetadata_descriptor_,
      CommentMetadata::internal_default_instance(),
      CommentMetadata_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommentMetadata, _has_bits_),
      -1,
      -1,
      sizeof(CommentMetadata),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CommentMetadata, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_CommentMetadata_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      CommentMetadata_descriptor_, CommentMetadata::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_CommentMetadata_2eproto() {
  CommentMetadata_default_instance_.Shutdown();
  delete CommentMetadata_reflection_;
}

void protobuf_InitDefaults_CommentMetadata_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_InitDefaults_ContentIds_2eproto();
  ::google::protobuf::internal::GetEmptyString();
  CommentMetadata_default_instance_.DefaultConstruct();
  CommentMetadata_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_CommentMetadata_2eproto_once_);
void protobuf_InitDefaults_CommentMetadata_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_CommentMetadata_2eproto_once_,
                 &protobuf_InitDefaults_CommentMetadata_2eproto_impl);
}
void protobuf_AddDesc_CommentMetadata_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_CommentMetadata_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025CommentMetadata.proto\032\020ContentIds.prot"
    "o\"\263\001\n\017CommentMetadata\022\036\n\ncomment_id\030\001 \001("
    "\0132\n.CommentId\022\"\n\014viewpoint_id\030\002 \001(\0132\014.Vi"
    "ewpointId\022\017\n\007user_id\030\003 \001(\003\022\020\n\010asset_id\030\004"
    " \001(\t\022\021\n\ttimestamp\030\005 \001(\001\022\017\n\007message\030\006 \001(\t"
    "\022\025\n\rindexed_terms\030\007 \003(\tB(\n\023co.viewfinder"
    ".protoB\021CommentMetadataPB", 265);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "CommentMetadata.proto", &protobuf_RegisterTypes);
  ::protobuf_AddDesc_ContentIds_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_CommentMetadata_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_CommentMetadata_2eproto_once_);
void protobuf_AddDesc_CommentMetadata_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_CommentMetadata_2eproto_once_,
                 &protobuf_AddDesc_CommentMetadata_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_CommentMetadata_2eproto {
  StaticDescriptorInitializer_CommentMetadata_2eproto() {
    protobuf_AddDesc_CommentMetadata_2eproto();
  }
} static_descriptor_initializer_CommentMetadata_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CommentMetadata::kCommentIdFieldNumber;
const int CommentMetadata::kViewpointIdFieldNumber;
const int CommentMetadata::kUserIdFieldNumber;
const int CommentMetadata::kAssetIdFieldNumber;
const int CommentMetadata::kTimestampFieldNumber;
const int CommentMetadata::kMessageFieldNumber;
const int CommentMetadata::kIndexedTermsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CommentMetadata::CommentMetadata()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_CommentMetadata_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:CommentMetadata)
}

void CommentMetadata::InitAsDefaultInstance() {
  comment_id_ = const_cast< ::CommentId*>(
      ::CommentId::internal_default_instance());
  viewpoint_id_ = const_cast< ::ViewpointId*>(
      ::ViewpointId::internal_default_instance());
}

CommentMetadata::CommentMetadata(const CommentMetadata& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:CommentMetadata)
}

void CommentMetadata::SharedCtor() {
  _cached_size_ = 0;
  asset_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  comment_id_ = NULL;
  viewpoint_id_ = NULL;
  ::memset(&user_id_, 0, reinterpret_cast<char*>(&timestamp_) -
    reinterpret_cast<char*>(&user_id_) + sizeof(timestamp_));
}

CommentMetadata::~CommentMetadata() {
  // @@protoc_insertion_point(destructor:CommentMetadata)
  SharedDtor();
}

void CommentMetadata::SharedDtor() {
  asset_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  message_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != &CommentMetadata_default_instance_.get()) {
    delete comment_id_;
    delete viewpoint_id_;
  }
}

void CommentMetadata::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CommentMetadata::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CommentMetadata_descriptor_;
}

const CommentMetadata& CommentMetadata::default_instance() {
  protobuf_InitDefaults_CommentMetadata_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<CommentMetadata> CommentMetadata_default_instance_;

CommentMetadata* CommentMetadata::New(::google::protobuf::Arena* arena) const {
  CommentMetadata* n = new CommentMetadata;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CommentMetadata::Clear() {
// @@protoc_insertion_point(message_clear_start:CommentMetadata)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(CommentMetadata, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<CommentMetadata*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 63u) {
    ZR_(user_id_, timestamp_);
    if (has_comment_id()) {
      if (comment_id_ != NULL) comment_id_->::CommentId::Clear();
    }
    if (has_viewpoint_id()) {
      if (viewpoint_id_ != NULL) viewpoint_id_->::ViewpointId::Clear();
    }
    if (has_asset_id()) {
      asset_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_message()) {
      message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }

#undef ZR_HELPER_
#undef ZR_

  indexed_terms_.Clear();
  _has_bits_.Clear();
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool CommentMetadata::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:CommentMetadata)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .CommentId comment_id = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_comment_id()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_viewpoint_id;
        break;
      }

      // optional .ViewpointId viewpoint_id = 2;
      case 2: {
        if (tag == 18) {
         parse_viewpoint_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_viewpoint_id()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_user_id;
        break;
      }

      // optional int64 user_id = 3;
      case 3: {
        if (tag == 24) {
         parse_user_id:
          set_has_user_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &user_id_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_asset_id;
        break;
      }

      // optional string asset_id = 4;
      case 4: {
        if (tag == 34) {
         parse_asset_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_asset_id()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->asset_id().data(), this->asset_id().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "CommentMetadata.asset_id");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(41)) goto parse_timestamp;
        break;
      }

      // optional double timestamp = 5;
      case 5: {
        if (tag == 41) {
         parse_timestamp:
          set_has_timestamp();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &timestamp_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_message;
        break;
      }

      // optional string message = 6;
      case 6: {
        if (tag == 50) {
         parse_message:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->message().data(), this->message().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "CommentMetadata.message");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_indexed_terms;
        break;
      }

      // repeated string indexed_terms = 7;
      case 7: {
        if (tag == 58) {
         parse_indexed_terms:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_indexed_terms()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->indexed_terms(this->indexed_terms_size() - 1).data(),
            this->indexed_terms(this->indexed_terms_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "CommentMetadata.indexed_terms");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_indexed_terms;
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
  // @@protoc_insertion_point(parse_success:CommentMetadata)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CommentMetadata)
  return false;
#undef DO_
}

void CommentMetadata::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CommentMetadata)
  // optional .CommentId comment_id = 1;
  if (has_comment_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->comment_id_, output);
  }

  // optional .ViewpointId viewpoint_id = 2;
  if (has_viewpoint_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->viewpoint_id_, output);
  }

  // optional int64 user_id = 3;
  if (has_user_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->user_id(), output);
  }

  // optional string asset_id = 4;
  if (has_asset_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->asset_id().data(), this->asset_id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "CommentMetadata.asset_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->asset_id(), output);
  }

  // optional double timestamp = 5;
  if (has_timestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->timestamp(), output);
  }

  // optional string message = 6;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "CommentMetadata.message");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->message(), output);
  }

  // repeated string indexed_terms = 7;
  for (int i = 0; i < this->indexed_terms_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->indexed_terms(i).data(), this->indexed_terms(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "CommentMetadata.indexed_terms");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      7, this->indexed_terms(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:CommentMetadata)
}

::google::protobuf::uint8* CommentMetadata::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:CommentMetadata)
  // optional .CommentId comment_id = 1;
  if (has_comment_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->comment_id_, false, target);
  }

  // optional .ViewpointId viewpoint_id = 2;
  if (has_viewpoint_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->viewpoint_id_, false, target);
  }

  // optional int64 user_id = 3;
  if (has_user_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->user_id(), target);
  }

  // optional string asset_id = 4;
  if (has_asset_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->asset_id().data(), this->asset_id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "CommentMetadata.asset_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->asset_id(), target);
  }

  // optional double timestamp = 5;
  if (has_timestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->timestamp(), target);
  }

  // optional string message = 6;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "CommentMetadata.message");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->message(), target);
  }

  // repeated string indexed_terms = 7;
  for (int i = 0; i < this->indexed_terms_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->indexed_terms(i).data(), this->indexed_terms(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "CommentMetadata.indexed_terms");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(7, this->indexed_terms(i), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:CommentMetadata)
  return target;
}

size_t CommentMetadata::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CommentMetadata)
  size_t total_size = 0;

  if (_has_bits_[0 / 32] & 63u) {
    // optional .CommentId comment_id = 1;
    if (has_comment_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->comment_id_);
    }

    // optional .ViewpointId viewpoint_id = 2;
    if (has_viewpoint_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->viewpoint_id_);
    }

    // optional int64 user_id = 3;
    if (has_user_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->user_id());
    }

    // optional string asset_id = 4;
    if (has_asset_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->asset_id());
    }

    // optional double timestamp = 5;
    if (has_timestamp()) {
      total_size += 1 + 8;
    }

    // optional string message = 6;
    if (has_message()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->message());
    }

  }
  // repeated string indexed_terms = 7;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->indexed_terms_size());
  for (int i = 0; i < this->indexed_terms_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->indexed_terms(i));
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

void CommentMetadata::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:CommentMetadata)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const CommentMetadata* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CommentMetadata>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:CommentMetadata)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:CommentMetadata)
    UnsafeMergeFrom(*source);
  }
}

void CommentMetadata::MergeFrom(const CommentMetadata& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CommentMetadata)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void CommentMetadata::UnsafeMergeFrom(const CommentMetadata& from) {
  GOOGLE_DCHECK(&from != this);
  indexed_terms_.UnsafeMergeFrom(from.indexed_terms_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_comment_id()) {
      mutable_comment_id()->::CommentId::MergeFrom(from.comment_id());
    }
    if (from.has_viewpoint_id()) {
      mutable_viewpoint_id()->::ViewpointId::MergeFrom(from.viewpoint_id());
    }
    if (from.has_user_id()) {
      set_user_id(from.user_id());
    }
    if (from.has_asset_id()) {
      set_has_asset_id();
      asset_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.asset_id_);
    }
    if (from.has_timestamp()) {
      set_timestamp(from.timestamp());
    }
    if (from.has_message()) {
      set_has_message();
      message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.message_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::UnknownFieldSet::MergeToInternalMetdata(
      from.unknown_fields(), &_internal_metadata_);
  }
}

void CommentMetadata::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:CommentMetadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CommentMetadata::CopyFrom(const CommentMetadata& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CommentMetadata)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool CommentMetadata::IsInitialized() const {

  return true;
}

void CommentMetadata::Swap(CommentMetadata* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CommentMetadata::InternalSwap(CommentMetadata* other) {
  std::swap(comment_id_, other->comment_id_);
  std::swap(viewpoint_id_, other->viewpoint_id_);
  std::swap(user_id_, other->user_id_);
  asset_id_.Swap(&other->asset_id_);
  std::swap(timestamp_, other->timestamp_);
  message_.Swap(&other->message_);
  indexed_terms_.UnsafeArenaSwap(&other->indexed_terms_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CommentMetadata::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CommentMetadata_descriptor_;
  metadata.reflection = CommentMetadata_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CommentMetadata

// optional .CommentId comment_id = 1;
bool CommentMetadata::has_comment_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void CommentMetadata::set_has_comment_id() {
  _has_bits_[0] |= 0x00000001u;
}
void CommentMetadata::clear_has_comment_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void CommentMetadata::clear_comment_id() {
  if (comment_id_ != NULL) comment_id_->::CommentId::Clear();
  clear_has_comment_id();
}
const ::CommentId& CommentMetadata::comment_id() const {
  // @@protoc_insertion_point(field_get:CommentMetadata.comment_id)
  return comment_id_ != NULL ? *comment_id_
                         : *::CommentId::internal_default_instance();
}
::CommentId* CommentMetadata::mutable_comment_id() {
  set_has_comment_id();
  if (comment_id_ == NULL) {
    comment_id_ = new ::CommentId;
  }
  // @@protoc_insertion_point(field_mutable:CommentMetadata.comment_id)
  return comment_id_;
}
::CommentId* CommentMetadata::release_comment_id() {
  // @@protoc_insertion_point(field_release:CommentMetadata.comment_id)
  clear_has_comment_id();
  ::CommentId* temp = comment_id_;
  comment_id_ = NULL;
  return temp;
}
void CommentMetadata::set_allocated_comment_id(::CommentId* comment_id) {
  delete comment_id_;
  comment_id_ = comment_id;
  if (comment_id) {
    set_has_comment_id();
  } else {
    clear_has_comment_id();
  }
  // @@protoc_insertion_point(field_set_allocated:CommentMetadata.comment_id)
}

// optional .ViewpointId viewpoint_id = 2;
bool CommentMetadata::has_viewpoint_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void CommentMetadata::set_has_viewpoint_id() {
  _has_bits_[0] |= 0x00000002u;
}
void CommentMetadata::clear_has_viewpoint_id() {
  _has_bits_[0] &= ~0x00000002u;
}
void CommentMetadata::clear_viewpoint_id() {
  if (viewpoint_id_ != NULL) viewpoint_id_->::ViewpointId::Clear();
  clear_has_viewpoint_id();
}
const ::ViewpointId& CommentMetadata::viewpoint_id() const {
  // @@protoc_insertion_point(field_get:CommentMetadata.viewpoint_id)
  return viewpoint_id_ != NULL ? *viewpoint_id_
                         : *::ViewpointId::internal_default_instance();
}
::ViewpointId* CommentMetadata::mutable_viewpoint_id() {
  set_has_viewpoint_id();
  if (viewpoint_id_ == NULL) {
    viewpoint_id_ = new ::ViewpointId;
  }
  // @@protoc_insertion_point(field_mutable:CommentMetadata.viewpoint_id)
  return viewpoint_id_;
}
::ViewpointId* CommentMetadata::release_viewpoint_id() {
  // @@protoc_insertion_point(field_release:CommentMetadata.viewpoint_id)
  clear_has_viewpoint_id();
  ::ViewpointId* temp = viewpoint_id_;
  viewpoint_id_ = NULL;
  return temp;
}
void CommentMetadata::set_allocated_viewpoint_id(::ViewpointId* viewpoint_id) {
  delete viewpoint_id_;
  viewpoint_id_ = viewpoint_id;
  if (viewpoint_id) {
    set_has_viewpoint_id();
  } else {
    clear_has_viewpoint_id();
  }
  // @@protoc_insertion_point(field_set_allocated:CommentMetadata.viewpoint_id)
}

// optional int64 user_id = 3;
bool CommentMetadata::has_user_id() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void CommentMetadata::set_has_user_id() {
  _has_bits_[0] |= 0x00000004u;
}
void CommentMetadata::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000004u;
}
void CommentMetadata::clear_user_id() {
  user_id_ = GOOGLE_LONGLONG(0);
  clear_has_user_id();
}
::google::protobuf::int64 CommentMetadata::user_id() const {
  // @@protoc_insertion_point(field_get:CommentMetadata.user_id)
  return user_id_;
}
void CommentMetadata::set_user_id(::google::protobuf::int64 value) {
  set_has_user_id();
  user_id_ = value;
  // @@protoc_insertion_point(field_set:CommentMetadata.user_id)
}

// optional string asset_id = 4;
bool CommentMetadata::has_asset_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void CommentMetadata::set_has_asset_id() {
  _has_bits_[0] |= 0x00000008u;
}
void CommentMetadata::clear_has_asset_id() {
  _has_bits_[0] &= ~0x00000008u;
}
void CommentMetadata::clear_asset_id() {
  asset_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_asset_id();
}
const ::std::string& CommentMetadata::asset_id() const {
  // @@protoc_insertion_point(field_get:CommentMetadata.asset_id)
  return asset_id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void CommentMetadata::set_asset_id(const ::std::string& value) {
  set_has_asset_id();
  asset_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:CommentMetadata.asset_id)
}
void CommentMetadata::set_asset_id(const char* value) {
  set_has_asset_id();
  asset_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:CommentMetadata.asset_id)
}
void CommentMetadata::set_asset_id(const char* value, size_t size) {
  set_has_asset_id();
  asset_id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:CommentMetadata.asset_id)
}
::std::string* CommentMetadata::mutable_asset_id() {
  set_has_asset_id();
  // @@protoc_insertion_point(field_mutable:CommentMetadata.asset_id)
  return asset_id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* CommentMetadata::release_asset_id() {
  // @@protoc_insertion_point(field_release:CommentMetadata.asset_id)
  clear_has_asset_id();
  return asset_id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void CommentMetadata::set_allocated_asset_id(::std::string* asset_id) {
  if (asset_id != NULL) {
    set_has_asset_id();
  } else {
    clear_has_asset_id();
  }
  asset_id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), asset_id);
  // @@protoc_insertion_point(field_set_allocated:CommentMetadata.asset_id)
}

// optional double timestamp = 5;
bool CommentMetadata::has_timestamp() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void CommentMetadata::set_has_timestamp() {
  _has_bits_[0] |= 0x00000010u;
}
void CommentMetadata::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000010u;
}
void CommentMetadata::clear_timestamp() {
  timestamp_ = 0;
  clear_has_timestamp();
}
double CommentMetadata::timestamp() const {
  // @@protoc_insertion_point(field_get:CommentMetadata.timestamp)
  return timestamp_;
}
void CommentMetadata::set_timestamp(double value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:CommentMetadata.timestamp)
}

// optional string message = 6;
bool CommentMetadata::has_message() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void CommentMetadata::set_has_message() {
  _has_bits_[0] |= 0x00000020u;
}
void CommentMetadata::clear_has_message() {
  _has_bits_[0] &= ~0x00000020u;
}
void CommentMetadata::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_message();
}
const ::std::string& CommentMetadata::message() const {
  // @@protoc_insertion_point(field_get:CommentMetadata.message)
  return message_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void CommentMetadata::set_message(const ::std::string& value) {
  set_has_message();
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:CommentMetadata.message)
}
void CommentMetadata::set_message(const char* value) {
  set_has_message();
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:CommentMetadata.message)
}
void CommentMetadata::set_message(const char* value, size_t size) {
  set_has_message();
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:CommentMetadata.message)
}
::std::string* CommentMetadata::mutable_message() {
  set_has_message();
  // @@protoc_insertion_point(field_mutable:CommentMetadata.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* CommentMetadata::release_message() {
  // @@protoc_insertion_point(field_release:CommentMetadata.message)
  clear_has_message();
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void CommentMetadata::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    set_has_message();
  } else {
    clear_has_message();
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:CommentMetadata.message)
}

// repeated string indexed_terms = 7;
int CommentMetadata::indexed_terms_size() const {
  return indexed_terms_.size();
}
void CommentMetadata::clear_indexed_terms() {
  indexed_terms_.Clear();
}
const ::std::string& CommentMetadata::indexed_terms(int index) const {
  // @@protoc_insertion_point(field_get:CommentMetadata.indexed_terms)
  return indexed_terms_.Get(index);
}
::std::string* CommentMetadata::mutable_indexed_terms(int index) {
  // @@protoc_insertion_point(field_mutable:CommentMetadata.indexed_terms)
  return indexed_terms_.Mutable(index);
}
void CommentMetadata::set_indexed_terms(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:CommentMetadata.indexed_terms)
  indexed_terms_.Mutable(index)->assign(value);
}
void CommentMetadata::set_indexed_terms(int index, const char* value) {
  indexed_terms_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:CommentMetadata.indexed_terms)
}
void CommentMetadata::set_indexed_terms(int index, const char* value, size_t size) {
  indexed_terms_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:CommentMetadata.indexed_terms)
}
::std::string* CommentMetadata::add_indexed_terms() {
  // @@protoc_insertion_point(field_add_mutable:CommentMetadata.indexed_terms)
  return indexed_terms_.Add();
}
void CommentMetadata::add_indexed_terms(const ::std::string& value) {
  indexed_terms_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:CommentMetadata.indexed_terms)
}
void CommentMetadata::add_indexed_terms(const char* value) {
  indexed_terms_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:CommentMetadata.indexed_terms)
}
void CommentMetadata::add_indexed_terms(const char* value, size_t size) {
  indexed_terms_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:CommentMetadata.indexed_terms)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
CommentMetadata::indexed_terms() const {
  // @@protoc_insertion_point(field_list:CommentMetadata.indexed_terms)
  return indexed_terms_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
CommentMetadata::mutable_indexed_terms() {
  // @@protoc_insertion_point(field_mutable_list:CommentMetadata.indexed_terms)
  return &indexed_terms_;
}

inline const CommentMetadata* CommentMetadata::internal_default_instance() {
  return &CommentMetadata_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)