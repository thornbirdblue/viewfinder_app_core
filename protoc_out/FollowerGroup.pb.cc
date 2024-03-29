// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FollowerGroup.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "FollowerGroup.pb.h"

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

const ::google::protobuf::Descriptor* FollowerGroup_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FollowerGroup_reflection_ = NULL;
const ::google::protobuf::Descriptor* FollowerGroup_ViewpointInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FollowerGroup_ViewpointInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_FollowerGroup_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_FollowerGroup_2eproto() {
  protobuf_AddDesc_FollowerGroup_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "FollowerGroup.proto");
  GOOGLE_CHECK(file != NULL);
  FollowerGroup_descriptor_ = file->message_type(0);
  static const int FollowerGroup_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FollowerGroup, user_ids_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FollowerGroup, viewpoints_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FollowerGroup, weight_),
  };
  FollowerGroup_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      FollowerGroup_descriptor_,
      FollowerGroup::internal_default_instance(),
      FollowerGroup_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FollowerGroup, _has_bits_),
      -1,
      -1,
      sizeof(FollowerGroup),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FollowerGroup, _internal_metadata_));
  FollowerGroup_ViewpointInfo_descriptor_ = FollowerGroup_descriptor_->nested_type(0);
  static const int FollowerGroup_ViewpointInfo_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FollowerGroup_ViewpointInfo, viewpoint_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FollowerGroup_ViewpointInfo, earliest_timestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FollowerGroup_ViewpointInfo, latest_timestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FollowerGroup_ViewpointInfo, weight_),
  };
  FollowerGroup_ViewpointInfo_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      FollowerGroup_ViewpointInfo_descriptor_,
      FollowerGroup_ViewpointInfo::internal_default_instance(),
      FollowerGroup_ViewpointInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FollowerGroup_ViewpointInfo, _has_bits_),
      -1,
      -1,
      sizeof(FollowerGroup_ViewpointInfo),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FollowerGroup_ViewpointInfo, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_FollowerGroup_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      FollowerGroup_descriptor_, FollowerGroup::internal_default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      FollowerGroup_ViewpointInfo_descriptor_, FollowerGroup_ViewpointInfo::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_FollowerGroup_2eproto() {
  FollowerGroup_default_instance_.Shutdown();
  delete FollowerGroup_reflection_;
  FollowerGroup_ViewpointInfo_default_instance_.Shutdown();
  delete FollowerGroup_ViewpointInfo_reflection_;
}

void protobuf_InitDefaults_FollowerGroup_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  FollowerGroup_default_instance_.DefaultConstruct();
  FollowerGroup_ViewpointInfo_default_instance_.DefaultConstruct();
  FollowerGroup_default_instance_.get_mutable()->InitAsDefaultInstance();
  FollowerGroup_ViewpointInfo_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_FollowerGroup_2eproto_once_);
void protobuf_InitDefaults_FollowerGroup_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_FollowerGroup_2eproto_once_,
                 &protobuf_InitDefaults_FollowerGroup_2eproto_impl);
}
void protobuf_AddDesc_FollowerGroup_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_FollowerGroup_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023FollowerGroup.proto\"\320\001\n\rFollowerGroup\022"
    "\020\n\010user_ids\030\001 \003(\003\0220\n\nviewpoints\030\002 \003(\0132\034."
    "FollowerGroup.ViewpointInfo\022\016\n\006weight\030\003 "
    "\001(\001\032k\n\rViewpointInfo\022\024\n\014viewpoint_id\030\001 \001"
    "(\003\022\032\n\022earliest_timestamp\030\002 \001(\001\022\030\n\020latest"
    "_timestamp\030\003 \001(\001\022\016\n\006weight\030\004 \001(\001B&\n\023co.v"
    "iewfinder.protoB\017FollowerGroupPB", 272);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "FollowerGroup.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_FollowerGroup_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_FollowerGroup_2eproto_once_);
void protobuf_AddDesc_FollowerGroup_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_FollowerGroup_2eproto_once_,
                 &protobuf_AddDesc_FollowerGroup_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_FollowerGroup_2eproto {
  StaticDescriptorInitializer_FollowerGroup_2eproto() {
    protobuf_AddDesc_FollowerGroup_2eproto();
  }
} static_descriptor_initializer_FollowerGroup_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FollowerGroup_ViewpointInfo::kViewpointIdFieldNumber;
const int FollowerGroup_ViewpointInfo::kEarliestTimestampFieldNumber;
const int FollowerGroup_ViewpointInfo::kLatestTimestampFieldNumber;
const int FollowerGroup_ViewpointInfo::kWeightFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FollowerGroup_ViewpointInfo::FollowerGroup_ViewpointInfo()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_FollowerGroup_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:FollowerGroup.ViewpointInfo)
}

void FollowerGroup_ViewpointInfo::InitAsDefaultInstance() {
}

FollowerGroup_ViewpointInfo::FollowerGroup_ViewpointInfo(const FollowerGroup_ViewpointInfo& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:FollowerGroup.ViewpointInfo)
}

void FollowerGroup_ViewpointInfo::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&viewpoint_id_, 0, reinterpret_cast<char*>(&weight_) -
    reinterpret_cast<char*>(&viewpoint_id_) + sizeof(weight_));
}

FollowerGroup_ViewpointInfo::~FollowerGroup_ViewpointInfo() {
  // @@protoc_insertion_point(destructor:FollowerGroup.ViewpointInfo)
  SharedDtor();
}

void FollowerGroup_ViewpointInfo::SharedDtor() {
}

void FollowerGroup_ViewpointInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FollowerGroup_ViewpointInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FollowerGroup_ViewpointInfo_descriptor_;
}

const FollowerGroup_ViewpointInfo& FollowerGroup_ViewpointInfo::default_instance() {
  protobuf_InitDefaults_FollowerGroup_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<FollowerGroup_ViewpointInfo> FollowerGroup_ViewpointInfo_default_instance_;

FollowerGroup_ViewpointInfo* FollowerGroup_ViewpointInfo::New(::google::protobuf::Arena* arena) const {
  FollowerGroup_ViewpointInfo* n = new FollowerGroup_ViewpointInfo;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FollowerGroup_ViewpointInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:FollowerGroup.ViewpointInfo)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(FollowerGroup_ViewpointInfo, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<FollowerGroup_ViewpointInfo*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(viewpoint_id_, weight_);

#undef ZR_HELPER_
#undef ZR_

  _has_bits_.Clear();
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool FollowerGroup_ViewpointInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:FollowerGroup.ViewpointInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 viewpoint_id = 1;
      case 1: {
        if (tag == 8) {
          set_has_viewpoint_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &viewpoint_id_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_earliest_timestamp;
        break;
      }

      // optional double earliest_timestamp = 2;
      case 2: {
        if (tag == 17) {
         parse_earliest_timestamp:
          set_has_earliest_timestamp();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &earliest_timestamp_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_latest_timestamp;
        break;
      }

      // optional double latest_timestamp = 3;
      case 3: {
        if (tag == 25) {
         parse_latest_timestamp:
          set_has_latest_timestamp();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &latest_timestamp_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_weight;
        break;
      }

      // optional double weight = 4;
      case 4: {
        if (tag == 33) {
         parse_weight:
          set_has_weight();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &weight_)));
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
  // @@protoc_insertion_point(parse_success:FollowerGroup.ViewpointInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:FollowerGroup.ViewpointInfo)
  return false;
#undef DO_
}

void FollowerGroup_ViewpointInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:FollowerGroup.ViewpointInfo)
  // optional int64 viewpoint_id = 1;
  if (has_viewpoint_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->viewpoint_id(), output);
  }

  // optional double earliest_timestamp = 2;
  if (has_earliest_timestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->earliest_timestamp(), output);
  }

  // optional double latest_timestamp = 3;
  if (has_latest_timestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->latest_timestamp(), output);
  }

  // optional double weight = 4;
  if (has_weight()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->weight(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:FollowerGroup.ViewpointInfo)
}

::google::protobuf::uint8* FollowerGroup_ViewpointInfo::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:FollowerGroup.ViewpointInfo)
  // optional int64 viewpoint_id = 1;
  if (has_viewpoint_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->viewpoint_id(), target);
  }

  // optional double earliest_timestamp = 2;
  if (has_earliest_timestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->earliest_timestamp(), target);
  }

  // optional double latest_timestamp = 3;
  if (has_latest_timestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->latest_timestamp(), target);
  }

  // optional double weight = 4;
  if (has_weight()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->weight(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:FollowerGroup.ViewpointInfo)
  return target;
}

size_t FollowerGroup_ViewpointInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:FollowerGroup.ViewpointInfo)
  size_t total_size = 0;

  if (_has_bits_[0 / 32] & 15u) {
    // optional int64 viewpoint_id = 1;
    if (has_viewpoint_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->viewpoint_id());
    }

    // optional double earliest_timestamp = 2;
    if (has_earliest_timestamp()) {
      total_size += 1 + 8;
    }

    // optional double latest_timestamp = 3;
    if (has_latest_timestamp()) {
      total_size += 1 + 8;
    }

    // optional double weight = 4;
    if (has_weight()) {
      total_size += 1 + 8;
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

void FollowerGroup_ViewpointInfo::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:FollowerGroup.ViewpointInfo)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const FollowerGroup_ViewpointInfo* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const FollowerGroup_ViewpointInfo>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:FollowerGroup.ViewpointInfo)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:FollowerGroup.ViewpointInfo)
    UnsafeMergeFrom(*source);
  }
}

void FollowerGroup_ViewpointInfo::MergeFrom(const FollowerGroup_ViewpointInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:FollowerGroup.ViewpointInfo)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void FollowerGroup_ViewpointInfo::UnsafeMergeFrom(const FollowerGroup_ViewpointInfo& from) {
  GOOGLE_DCHECK(&from != this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_viewpoint_id()) {
      set_viewpoint_id(from.viewpoint_id());
    }
    if (from.has_earliest_timestamp()) {
      set_earliest_timestamp(from.earliest_timestamp());
    }
    if (from.has_latest_timestamp()) {
      set_latest_timestamp(from.latest_timestamp());
    }
    if (from.has_weight()) {
      set_weight(from.weight());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::UnknownFieldSet::MergeToInternalMetdata(
      from.unknown_fields(), &_internal_metadata_);
  }
}

void FollowerGroup_ViewpointInfo::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:FollowerGroup.ViewpointInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FollowerGroup_ViewpointInfo::CopyFrom(const FollowerGroup_ViewpointInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:FollowerGroup.ViewpointInfo)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool FollowerGroup_ViewpointInfo::IsInitialized() const {

  return true;
}

void FollowerGroup_ViewpointInfo::Swap(FollowerGroup_ViewpointInfo* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FollowerGroup_ViewpointInfo::InternalSwap(FollowerGroup_ViewpointInfo* other) {
  std::swap(viewpoint_id_, other->viewpoint_id_);
  std::swap(earliest_timestamp_, other->earliest_timestamp_);
  std::swap(latest_timestamp_, other->latest_timestamp_);
  std::swap(weight_, other->weight_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata FollowerGroup_ViewpointInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FollowerGroup_ViewpointInfo_descriptor_;
  metadata.reflection = FollowerGroup_ViewpointInfo_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FollowerGroup::kUserIdsFieldNumber;
const int FollowerGroup::kViewpointsFieldNumber;
const int FollowerGroup::kWeightFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FollowerGroup::FollowerGroup()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_FollowerGroup_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:FollowerGroup)
}

void FollowerGroup::InitAsDefaultInstance() {
}

FollowerGroup::FollowerGroup(const FollowerGroup& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:FollowerGroup)
}

void FollowerGroup::SharedCtor() {
  _cached_size_ = 0;
  weight_ = 0;
}

FollowerGroup::~FollowerGroup() {
  // @@protoc_insertion_point(destructor:FollowerGroup)
  SharedDtor();
}

void FollowerGroup::SharedDtor() {
}

void FollowerGroup::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FollowerGroup::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FollowerGroup_descriptor_;
}

const FollowerGroup& FollowerGroup::default_instance() {
  protobuf_InitDefaults_FollowerGroup_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<FollowerGroup> FollowerGroup_default_instance_;

FollowerGroup* FollowerGroup::New(::google::protobuf::Arena* arena) const {
  FollowerGroup* n = new FollowerGroup;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void FollowerGroup::Clear() {
// @@protoc_insertion_point(message_clear_start:FollowerGroup)
  weight_ = 0;
  user_ids_.Clear();
  viewpoints_.Clear();
  _has_bits_.Clear();
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool FollowerGroup::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:FollowerGroup)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int64 user_ids = 1;
      case 1: {
        if (tag == 8) {
         parse_user_ids:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 1, 8, input, this->mutable_user_ids())));
        } else if (tag == 10) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, this->mutable_user_ids())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(8)) goto parse_user_ids;
        if (input->ExpectTag(18)) goto parse_viewpoints;
        break;
      }

      // repeated .FollowerGroup.ViewpointInfo viewpoints = 2;
      case 2: {
        if (tag == 18) {
         parse_viewpoints:
          DO_(input->IncrementRecursionDepth());
         parse_loop_viewpoints:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_viewpoints()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_loop_viewpoints;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(25)) goto parse_weight;
        break;
      }

      // optional double weight = 3;
      case 3: {
        if (tag == 25) {
         parse_weight:
          set_has_weight();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &weight_)));
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
  // @@protoc_insertion_point(parse_success:FollowerGroup)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:FollowerGroup)
  return false;
#undef DO_
}

void FollowerGroup::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:FollowerGroup)
  // repeated int64 user_ids = 1;
  for (int i = 0; i < this->user_ids_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(
      1, this->user_ids(i), output);
  }

  // repeated .FollowerGroup.ViewpointInfo viewpoints = 2;
  for (unsigned int i = 0, n = this->viewpoints_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->viewpoints(i), output);
  }

  // optional double weight = 3;
  if (has_weight()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->weight(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:FollowerGroup)
}

::google::protobuf::uint8* FollowerGroup::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:FollowerGroup)
  // repeated int64 user_ids = 1;
  for (int i = 0; i < this->user_ids_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt64ToArray(1, this->user_ids(i), target);
  }

  // repeated .FollowerGroup.ViewpointInfo viewpoints = 2;
  for (unsigned int i = 0, n = this->viewpoints_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, this->viewpoints(i), false, target);
  }

  // optional double weight = 3;
  if (has_weight()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->weight(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:FollowerGroup)
  return target;
}

size_t FollowerGroup::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:FollowerGroup)
  size_t total_size = 0;

  // optional double weight = 3;
  if (has_weight()) {
    total_size += 1 + 8;
  }

  // repeated int64 user_ids = 1;
  {
    size_t data_size = 0;
    unsigned int count = this->user_ids_size();
    for (unsigned int i = 0; i < count; i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int64Size(this->user_ids(i));
    }
    total_size += 1 *
                  ::google::protobuf::internal::FromIntSize(this->user_ids_size());
    total_size += data_size;
  }

  // repeated .FollowerGroup.ViewpointInfo viewpoints = 2;
  {
    unsigned int count = this->viewpoints_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->viewpoints(i));
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

void FollowerGroup::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:FollowerGroup)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const FollowerGroup* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const FollowerGroup>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:FollowerGroup)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:FollowerGroup)
    UnsafeMergeFrom(*source);
  }
}

void FollowerGroup::MergeFrom(const FollowerGroup& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:FollowerGroup)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void FollowerGroup::UnsafeMergeFrom(const FollowerGroup& from) {
  GOOGLE_DCHECK(&from != this);
  user_ids_.UnsafeMergeFrom(from.user_ids_);
  viewpoints_.MergeFrom(from.viewpoints_);
  if (from._has_bits_[2 / 32] & (0xffu << (2 % 32))) {
    if (from.has_weight()) {
      set_weight(from.weight());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::UnknownFieldSet::MergeToInternalMetdata(
      from.unknown_fields(), &_internal_metadata_);
  }
}

void FollowerGroup::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:FollowerGroup)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FollowerGroup::CopyFrom(const FollowerGroup& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:FollowerGroup)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool FollowerGroup::IsInitialized() const {

  return true;
}

void FollowerGroup::Swap(FollowerGroup* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FollowerGroup::InternalSwap(FollowerGroup* other) {
  user_ids_.UnsafeArenaSwap(&other->user_ids_);
  viewpoints_.UnsafeArenaSwap(&other->viewpoints_);
  std::swap(weight_, other->weight_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata FollowerGroup::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FollowerGroup_descriptor_;
  metadata.reflection = FollowerGroup_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// FollowerGroup_ViewpointInfo

// optional int64 viewpoint_id = 1;
bool FollowerGroup_ViewpointInfo::has_viewpoint_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void FollowerGroup_ViewpointInfo::set_has_viewpoint_id() {
  _has_bits_[0] |= 0x00000001u;
}
void FollowerGroup_ViewpointInfo::clear_has_viewpoint_id() {
  _has_bits_[0] &= ~0x00000001u;
}
void FollowerGroup_ViewpointInfo::clear_viewpoint_id() {
  viewpoint_id_ = GOOGLE_LONGLONG(0);
  clear_has_viewpoint_id();
}
::google::protobuf::int64 FollowerGroup_ViewpointInfo::viewpoint_id() const {
  // @@protoc_insertion_point(field_get:FollowerGroup.ViewpointInfo.viewpoint_id)
  return viewpoint_id_;
}
void FollowerGroup_ViewpointInfo::set_viewpoint_id(::google::protobuf::int64 value) {
  set_has_viewpoint_id();
  viewpoint_id_ = value;
  // @@protoc_insertion_point(field_set:FollowerGroup.ViewpointInfo.viewpoint_id)
}

// optional double earliest_timestamp = 2;
bool FollowerGroup_ViewpointInfo::has_earliest_timestamp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void FollowerGroup_ViewpointInfo::set_has_earliest_timestamp() {
  _has_bits_[0] |= 0x00000002u;
}
void FollowerGroup_ViewpointInfo::clear_has_earliest_timestamp() {
  _has_bits_[0] &= ~0x00000002u;
}
void FollowerGroup_ViewpointInfo::clear_earliest_timestamp() {
  earliest_timestamp_ = 0;
  clear_has_earliest_timestamp();
}
double FollowerGroup_ViewpointInfo::earliest_timestamp() const {
  // @@protoc_insertion_point(field_get:FollowerGroup.ViewpointInfo.earliest_timestamp)
  return earliest_timestamp_;
}
void FollowerGroup_ViewpointInfo::set_earliest_timestamp(double value) {
  set_has_earliest_timestamp();
  earliest_timestamp_ = value;
  // @@protoc_insertion_point(field_set:FollowerGroup.ViewpointInfo.earliest_timestamp)
}

// optional double latest_timestamp = 3;
bool FollowerGroup_ViewpointInfo::has_latest_timestamp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void FollowerGroup_ViewpointInfo::set_has_latest_timestamp() {
  _has_bits_[0] |= 0x00000004u;
}
void FollowerGroup_ViewpointInfo::clear_has_latest_timestamp() {
  _has_bits_[0] &= ~0x00000004u;
}
void FollowerGroup_ViewpointInfo::clear_latest_timestamp() {
  latest_timestamp_ = 0;
  clear_has_latest_timestamp();
}
double FollowerGroup_ViewpointInfo::latest_timestamp() const {
  // @@protoc_insertion_point(field_get:FollowerGroup.ViewpointInfo.latest_timestamp)
  return latest_timestamp_;
}
void FollowerGroup_ViewpointInfo::set_latest_timestamp(double value) {
  set_has_latest_timestamp();
  latest_timestamp_ = value;
  // @@protoc_insertion_point(field_set:FollowerGroup.ViewpointInfo.latest_timestamp)
}

// optional double weight = 4;
bool FollowerGroup_ViewpointInfo::has_weight() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void FollowerGroup_ViewpointInfo::set_has_weight() {
  _has_bits_[0] |= 0x00000008u;
}
void FollowerGroup_ViewpointInfo::clear_has_weight() {
  _has_bits_[0] &= ~0x00000008u;
}
void FollowerGroup_ViewpointInfo::clear_weight() {
  weight_ = 0;
  clear_has_weight();
}
double FollowerGroup_ViewpointInfo::weight() const {
  // @@protoc_insertion_point(field_get:FollowerGroup.ViewpointInfo.weight)
  return weight_;
}
void FollowerGroup_ViewpointInfo::set_weight(double value) {
  set_has_weight();
  weight_ = value;
  // @@protoc_insertion_point(field_set:FollowerGroup.ViewpointInfo.weight)
}

inline const FollowerGroup_ViewpointInfo* FollowerGroup_ViewpointInfo::internal_default_instance() {
  return &FollowerGroup_ViewpointInfo_default_instance_.get();
}
// -------------------------------------------------------------------

// FollowerGroup

// repeated int64 user_ids = 1;
int FollowerGroup::user_ids_size() const {
  return user_ids_.size();
}
void FollowerGroup::clear_user_ids() {
  user_ids_.Clear();
}
::google::protobuf::int64 FollowerGroup::user_ids(int index) const {
  // @@protoc_insertion_point(field_get:FollowerGroup.user_ids)
  return user_ids_.Get(index);
}
void FollowerGroup::set_user_ids(int index, ::google::protobuf::int64 value) {
  user_ids_.Set(index, value);
  // @@protoc_insertion_point(field_set:FollowerGroup.user_ids)
}
void FollowerGroup::add_user_ids(::google::protobuf::int64 value) {
  user_ids_.Add(value);
  // @@protoc_insertion_point(field_add:FollowerGroup.user_ids)
}
const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
FollowerGroup::user_ids() const {
  // @@protoc_insertion_point(field_list:FollowerGroup.user_ids)
  return user_ids_;
}
::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
FollowerGroup::mutable_user_ids() {
  // @@protoc_insertion_point(field_mutable_list:FollowerGroup.user_ids)
  return &user_ids_;
}

// repeated .FollowerGroup.ViewpointInfo viewpoints = 2;
int FollowerGroup::viewpoints_size() const {
  return viewpoints_.size();
}
void FollowerGroup::clear_viewpoints() {
  viewpoints_.Clear();
}
const ::FollowerGroup_ViewpointInfo& FollowerGroup::viewpoints(int index) const {
  // @@protoc_insertion_point(field_get:FollowerGroup.viewpoints)
  return viewpoints_.Get(index);
}
::FollowerGroup_ViewpointInfo* FollowerGroup::mutable_viewpoints(int index) {
  // @@protoc_insertion_point(field_mutable:FollowerGroup.viewpoints)
  return viewpoints_.Mutable(index);
}
::FollowerGroup_ViewpointInfo* FollowerGroup::add_viewpoints() {
  // @@protoc_insertion_point(field_add:FollowerGroup.viewpoints)
  return viewpoints_.Add();
}
::google::protobuf::RepeatedPtrField< ::FollowerGroup_ViewpointInfo >*
FollowerGroup::mutable_viewpoints() {
  // @@protoc_insertion_point(field_mutable_list:FollowerGroup.viewpoints)
  return &viewpoints_;
}
const ::google::protobuf::RepeatedPtrField< ::FollowerGroup_ViewpointInfo >&
FollowerGroup::viewpoints() const {
  // @@protoc_insertion_point(field_list:FollowerGroup.viewpoints)
  return viewpoints_;
}

// optional double weight = 3;
bool FollowerGroup::has_weight() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void FollowerGroup::set_has_weight() {
  _has_bits_[0] |= 0x00000004u;
}
void FollowerGroup::clear_has_weight() {
  _has_bits_[0] &= ~0x00000004u;
}
void FollowerGroup::clear_weight() {
  weight_ = 0;
  clear_has_weight();
}
double FollowerGroup::weight() const {
  // @@protoc_insertion_point(field_get:FollowerGroup.weight)
  return weight_;
}
void FollowerGroup::set_weight(double value) {
  set_has_weight();
  weight_ = value;
  // @@protoc_insertion_point(field_set:FollowerGroup.weight)
}

inline const FollowerGroup* FollowerGroup::internal_default_instance() {
  return &FollowerGroup_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
