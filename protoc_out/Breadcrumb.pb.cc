// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Breadcrumb.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Breadcrumb.pb.h"

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

const ::google::protobuf::Descriptor* Breadcrumb_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Breadcrumb_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Breadcrumb_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_Breadcrumb_2eproto() {
  protobuf_AddDesc_Breadcrumb_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Breadcrumb.proto");
  GOOGLE_CHECK(file != NULL);
  Breadcrumb_descriptor_ = file->message_type(0);
  static const int Breadcrumb_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Breadcrumb, location_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Breadcrumb, placemark_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Breadcrumb, timestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Breadcrumb, debug_),
  };
  Breadcrumb_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Breadcrumb_descriptor_,
      Breadcrumb::internal_default_instance(),
      Breadcrumb_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Breadcrumb, _has_bits_),
      -1,
      -1,
      sizeof(Breadcrumb),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Breadcrumb, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Breadcrumb_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Breadcrumb_descriptor_, Breadcrumb::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Breadcrumb_2eproto() {
  Breadcrumb_default_instance_.Shutdown();
  delete Breadcrumb_reflection_;
}

void protobuf_InitDefaults_Breadcrumb_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_InitDefaults_Location_2eproto();
  ::protobuf_InitDefaults_Placemark_2eproto();
  ::google::protobuf::internal::GetEmptyString();
  Breadcrumb_default_instance_.DefaultConstruct();
  Breadcrumb_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_Breadcrumb_2eproto_once_);
void protobuf_InitDefaults_Breadcrumb_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_Breadcrumb_2eproto_once_,
                 &protobuf_InitDefaults_Breadcrumb_2eproto_impl);
}
void protobuf_AddDesc_Breadcrumb_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_Breadcrumb_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020Breadcrumb.proto\032\016Location.proto\032\017Plac"
    "emark.proto\"j\n\nBreadcrumb\022\033\n\010location\030\001 "
    "\001(\0132\t.Location\022\035\n\tplacemark\030\002 \001(\0132\n.Plac"
    "emark\022\021\n\ttimestamp\030\003 \001(\001\022\r\n\005debug\030\004 \001(\tB"
    "#\n\023co.viewfinder.protoB\014BreadcrumbPB", 196);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Breadcrumb.proto", &protobuf_RegisterTypes);
  ::protobuf_AddDesc_Location_2eproto();
  ::protobuf_AddDesc_Placemark_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Breadcrumb_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_Breadcrumb_2eproto_once_);
void protobuf_AddDesc_Breadcrumb_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_Breadcrumb_2eproto_once_,
                 &protobuf_AddDesc_Breadcrumb_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Breadcrumb_2eproto {
  StaticDescriptorInitializer_Breadcrumb_2eproto() {
    protobuf_AddDesc_Breadcrumb_2eproto();
  }
} static_descriptor_initializer_Breadcrumb_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Breadcrumb::kLocationFieldNumber;
const int Breadcrumb::kPlacemarkFieldNumber;
const int Breadcrumb::kTimestampFieldNumber;
const int Breadcrumb::kDebugFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Breadcrumb::Breadcrumb()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_Breadcrumb_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:Breadcrumb)
}

void Breadcrumb::InitAsDefaultInstance() {
  location_ = const_cast< ::Location*>(
      ::Location::internal_default_instance());
  placemark_ = const_cast< ::Placemark*>(
      ::Placemark::internal_default_instance());
}

Breadcrumb::Breadcrumb(const Breadcrumb& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Breadcrumb)
}

void Breadcrumb::SharedCtor() {
  _cached_size_ = 0;
  debug_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  location_ = NULL;
  placemark_ = NULL;
  timestamp_ = 0;
}

Breadcrumb::~Breadcrumb() {
  // @@protoc_insertion_point(destructor:Breadcrumb)
  SharedDtor();
}

void Breadcrumb::SharedDtor() {
  debug_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != &Breadcrumb_default_instance_.get()) {
    delete location_;
    delete placemark_;
  }
}

void Breadcrumb::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Breadcrumb::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Breadcrumb_descriptor_;
}

const Breadcrumb& Breadcrumb::default_instance() {
  protobuf_InitDefaults_Breadcrumb_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<Breadcrumb> Breadcrumb_default_instance_;

Breadcrumb* Breadcrumb::New(::google::protobuf::Arena* arena) const {
  Breadcrumb* n = new Breadcrumb;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Breadcrumb::Clear() {
// @@protoc_insertion_point(message_clear_start:Breadcrumb)
  if (_has_bits_[0 / 32] & 15u) {
    if (has_location()) {
      if (location_ != NULL) location_->::Location::Clear();
    }
    if (has_placemark()) {
      if (placemark_ != NULL) placemark_->::Placemark::Clear();
    }
    timestamp_ = 0;
    if (has_debug()) {
      debug_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  _has_bits_.Clear();
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool Breadcrumb::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Breadcrumb)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .Location location = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_location()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_placemark;
        break;
      }

      // optional .Placemark placemark = 2;
      case 2: {
        if (tag == 18) {
         parse_placemark:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_placemark()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_timestamp;
        break;
      }

      // optional double timestamp = 3;
      case 3: {
        if (tag == 25) {
         parse_timestamp:
          set_has_timestamp();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &timestamp_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_debug;
        break;
      }

      // optional string debug = 4;
      case 4: {
        if (tag == 34) {
         parse_debug:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_debug()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->debug().data(), this->debug().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "Breadcrumb.debug");
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
  // @@protoc_insertion_point(parse_success:Breadcrumb)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Breadcrumb)
  return false;
#undef DO_
}

void Breadcrumb::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Breadcrumb)
  // optional .Location location = 1;
  if (has_location()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->location_, output);
  }

  // optional .Placemark placemark = 2;
  if (has_placemark()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->placemark_, output);
  }

  // optional double timestamp = 3;
  if (has_timestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->timestamp(), output);
  }

  // optional string debug = 4;
  if (has_debug()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->debug().data(), this->debug().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Breadcrumb.debug");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->debug(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Breadcrumb)
}

::google::protobuf::uint8* Breadcrumb::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Breadcrumb)
  // optional .Location location = 1;
  if (has_location()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->location_, false, target);
  }

  // optional .Placemark placemark = 2;
  if (has_placemark()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->placemark_, false, target);
  }

  // optional double timestamp = 3;
  if (has_timestamp()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->timestamp(), target);
  }

  // optional string debug = 4;
  if (has_debug()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->debug().data(), this->debug().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "Breadcrumb.debug");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->debug(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Breadcrumb)
  return target;
}

size_t Breadcrumb::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Breadcrumb)
  size_t total_size = 0;

  if (_has_bits_[0 / 32] & 15u) {
    // optional .Location location = 1;
    if (has_location()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->location_);
    }

    // optional .Placemark placemark = 2;
    if (has_placemark()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->placemark_);
    }

    // optional double timestamp = 3;
    if (has_timestamp()) {
      total_size += 1 + 8;
    }

    // optional string debug = 4;
    if (has_debug()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->debug());
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

void Breadcrumb::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Breadcrumb)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Breadcrumb* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Breadcrumb>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Breadcrumb)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Breadcrumb)
    UnsafeMergeFrom(*source);
  }
}

void Breadcrumb::MergeFrom(const Breadcrumb& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Breadcrumb)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void Breadcrumb::UnsafeMergeFrom(const Breadcrumb& from) {
  GOOGLE_DCHECK(&from != this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_location()) {
      mutable_location()->::Location::MergeFrom(from.location());
    }
    if (from.has_placemark()) {
      mutable_placemark()->::Placemark::MergeFrom(from.placemark());
    }
    if (from.has_timestamp()) {
      set_timestamp(from.timestamp());
    }
    if (from.has_debug()) {
      set_has_debug();
      debug_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.debug_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::UnknownFieldSet::MergeToInternalMetdata(
      from.unknown_fields(), &_internal_metadata_);
  }
}

void Breadcrumb::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Breadcrumb)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Breadcrumb::CopyFrom(const Breadcrumb& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Breadcrumb)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool Breadcrumb::IsInitialized() const {

  return true;
}

void Breadcrumb::Swap(Breadcrumb* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Breadcrumb::InternalSwap(Breadcrumb* other) {
  std::swap(location_, other->location_);
  std::swap(placemark_, other->placemark_);
  std::swap(timestamp_, other->timestamp_);
  debug_.Swap(&other->debug_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Breadcrumb::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Breadcrumb_descriptor_;
  metadata.reflection = Breadcrumb_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Breadcrumb

// optional .Location location = 1;
bool Breadcrumb::has_location() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Breadcrumb::set_has_location() {
  _has_bits_[0] |= 0x00000001u;
}
void Breadcrumb::clear_has_location() {
  _has_bits_[0] &= ~0x00000001u;
}
void Breadcrumb::clear_location() {
  if (location_ != NULL) location_->::Location::Clear();
  clear_has_location();
}
const ::Location& Breadcrumb::location() const {
  // @@protoc_insertion_point(field_get:Breadcrumb.location)
  return location_ != NULL ? *location_
                         : *::Location::internal_default_instance();
}
::Location* Breadcrumb::mutable_location() {
  set_has_location();
  if (location_ == NULL) {
    location_ = new ::Location;
  }
  // @@protoc_insertion_point(field_mutable:Breadcrumb.location)
  return location_;
}
::Location* Breadcrumb::release_location() {
  // @@protoc_insertion_point(field_release:Breadcrumb.location)
  clear_has_location();
  ::Location* temp = location_;
  location_ = NULL;
  return temp;
}
void Breadcrumb::set_allocated_location(::Location* location) {
  delete location_;
  location_ = location;
  if (location) {
    set_has_location();
  } else {
    clear_has_location();
  }
  // @@protoc_insertion_point(field_set_allocated:Breadcrumb.location)
}

// optional .Placemark placemark = 2;
bool Breadcrumb::has_placemark() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Breadcrumb::set_has_placemark() {
  _has_bits_[0] |= 0x00000002u;
}
void Breadcrumb::clear_has_placemark() {
  _has_bits_[0] &= ~0x00000002u;
}
void Breadcrumb::clear_placemark() {
  if (placemark_ != NULL) placemark_->::Placemark::Clear();
  clear_has_placemark();
}
const ::Placemark& Breadcrumb::placemark() const {
  // @@protoc_insertion_point(field_get:Breadcrumb.placemark)
  return placemark_ != NULL ? *placemark_
                         : *::Placemark::internal_default_instance();
}
::Placemark* Breadcrumb::mutable_placemark() {
  set_has_placemark();
  if (placemark_ == NULL) {
    placemark_ = new ::Placemark;
  }
  // @@protoc_insertion_point(field_mutable:Breadcrumb.placemark)
  return placemark_;
}
::Placemark* Breadcrumb::release_placemark() {
  // @@protoc_insertion_point(field_release:Breadcrumb.placemark)
  clear_has_placemark();
  ::Placemark* temp = placemark_;
  placemark_ = NULL;
  return temp;
}
void Breadcrumb::set_allocated_placemark(::Placemark* placemark) {
  delete placemark_;
  placemark_ = placemark;
  if (placemark) {
    set_has_placemark();
  } else {
    clear_has_placemark();
  }
  // @@protoc_insertion_point(field_set_allocated:Breadcrumb.placemark)
}

// optional double timestamp = 3;
bool Breadcrumb::has_timestamp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void Breadcrumb::set_has_timestamp() {
  _has_bits_[0] |= 0x00000004u;
}
void Breadcrumb::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000004u;
}
void Breadcrumb::clear_timestamp() {
  timestamp_ = 0;
  clear_has_timestamp();
}
double Breadcrumb::timestamp() const {
  // @@protoc_insertion_point(field_get:Breadcrumb.timestamp)
  return timestamp_;
}
void Breadcrumb::set_timestamp(double value) {
  set_has_timestamp();
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:Breadcrumb.timestamp)
}

// optional string debug = 4;
bool Breadcrumb::has_debug() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void Breadcrumb::set_has_debug() {
  _has_bits_[0] |= 0x00000008u;
}
void Breadcrumb::clear_has_debug() {
  _has_bits_[0] &= ~0x00000008u;
}
void Breadcrumb::clear_debug() {
  debug_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_debug();
}
const ::std::string& Breadcrumb::debug() const {
  // @@protoc_insertion_point(field_get:Breadcrumb.debug)
  return debug_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Breadcrumb::set_debug(const ::std::string& value) {
  set_has_debug();
  debug_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Breadcrumb.debug)
}
void Breadcrumb::set_debug(const char* value) {
  set_has_debug();
  debug_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Breadcrumb.debug)
}
void Breadcrumb::set_debug(const char* value, size_t size) {
  set_has_debug();
  debug_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Breadcrumb.debug)
}
::std::string* Breadcrumb::mutable_debug() {
  set_has_debug();
  // @@protoc_insertion_point(field_mutable:Breadcrumb.debug)
  return debug_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* Breadcrumb::release_debug() {
  // @@protoc_insertion_point(field_release:Breadcrumb.debug)
  clear_has_debug();
  return debug_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void Breadcrumb::set_allocated_debug(::std::string* debug) {
  if (debug != NULL) {
    set_has_debug();
  } else {
    clear_has_debug();
  }
  debug_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), debug);
  // @@protoc_insertion_point(field_set_allocated:Breadcrumb.debug)
}

inline const Breadcrumb* Breadcrumb::internal_default_instance() {
  return &Breadcrumb_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
