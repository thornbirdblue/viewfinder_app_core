// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserMetadata.proto

#ifndef PROTOBUF_UserMetadata_2eproto__INCLUDED
#define PROTOBUF_UserMetadata_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_UserMetadata_2eproto();
void protobuf_InitDefaults_UserMetadata_2eproto();
void protobuf_AssignDesc_UserMetadata_2eproto();
void protobuf_ShutdownFile_UserMetadata_2eproto();

class UsageCategoryMetadata;
class UsageMetadata;

// ===================================================================

class UsageCategoryMetadata : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:UsageCategoryMetadata) */ {
 public:
  UsageCategoryMetadata();
  virtual ~UsageCategoryMetadata();

  UsageCategoryMetadata(const UsageCategoryMetadata& from);

  inline UsageCategoryMetadata& operator=(const UsageCategoryMetadata& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UsageCategoryMetadata& default_instance();

  static const UsageCategoryMetadata* internal_default_instance();

  void Swap(UsageCategoryMetadata* other);

  // implements Message ----------------------------------------------

  inline UsageCategoryMetadata* New() const { return New(NULL); }

  UsageCategoryMetadata* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UsageCategoryMetadata& from);
  void MergeFrom(const UsageCategoryMetadata& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(UsageCategoryMetadata* other);
  void UnsafeMergeFrom(const UsageCategoryMetadata& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 num_photos = 1;
  bool has_num_photos() const;
  void clear_num_photos();
  static const int kNumPhotosFieldNumber = 1;
  ::google::protobuf::int32 num_photos() const;
  void set_num_photos(::google::protobuf::int32 value);

  // optional int64 tn_size = 2;
  bool has_tn_size() const;
  void clear_tn_size();
  static const int kTnSizeFieldNumber = 2;
  ::google::protobuf::int64 tn_size() const;
  void set_tn_size(::google::protobuf::int64 value);

  // optional int64 med_size = 3;
  bool has_med_size() const;
  void clear_med_size();
  static const int kMedSizeFieldNumber = 3;
  ::google::protobuf::int64 med_size() const;
  void set_med_size(::google::protobuf::int64 value);

  // optional int64 full_size = 4;
  bool has_full_size() const;
  void clear_full_size();
  static const int kFullSizeFieldNumber = 4;
  ::google::protobuf::int64 full_size() const;
  void set_full_size(::google::protobuf::int64 value);

  // optional int64 orig_size = 5;
  bool has_orig_size() const;
  void clear_orig_size();
  static const int kOrigSizeFieldNumber = 5;
  ::google::protobuf::int64 orig_size() const;
  void set_orig_size(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:UsageCategoryMetadata)
 private:
  inline void set_has_num_photos();
  inline void clear_has_num_photos();
  inline void set_has_tn_size();
  inline void clear_has_tn_size();
  inline void set_has_med_size();
  inline void clear_has_med_size();
  inline void set_has_full_size();
  inline void clear_has_full_size();
  inline void set_has_orig_size();
  inline void clear_has_orig_size();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int64 tn_size_;
  ::google::protobuf::int64 med_size_;
  ::google::protobuf::int64 full_size_;
  ::google::protobuf::int64 orig_size_;
  ::google::protobuf::int32 num_photos_;
  friend void  protobuf_InitDefaults_UserMetadata_2eproto_impl();
  friend void  protobuf_AddDesc_UserMetadata_2eproto_impl();
  friend void protobuf_AssignDesc_UserMetadata_2eproto();
  friend void protobuf_ShutdownFile_UserMetadata_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<UsageCategoryMetadata> UsageCategoryMetadata_default_instance_;

// -------------------------------------------------------------------

class UsageMetadata : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:UsageMetadata) */ {
 public:
  UsageMetadata();
  virtual ~UsageMetadata();

  UsageMetadata(const UsageMetadata& from);

  inline UsageMetadata& operator=(const UsageMetadata& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UsageMetadata& default_instance();

  static const UsageMetadata* internal_default_instance();

  void Swap(UsageMetadata* other);

  // implements Message ----------------------------------------------

  inline UsageMetadata* New() const { return New(NULL); }

  UsageMetadata* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UsageMetadata& from);
  void MergeFrom(const UsageMetadata& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(UsageMetadata* other);
  void UnsafeMergeFrom(const UsageMetadata& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .UsageCategoryMetadata owned_by = 1;
  bool has_owned_by() const;
  void clear_owned_by();
  static const int kOwnedByFieldNumber = 1;
  const ::UsageCategoryMetadata& owned_by() const;
  ::UsageCategoryMetadata* mutable_owned_by();
  ::UsageCategoryMetadata* release_owned_by();
  void set_allocated_owned_by(::UsageCategoryMetadata* owned_by);

  // optional .UsageCategoryMetadata shared_by = 2;
  bool has_shared_by() const;
  void clear_shared_by();
  static const int kSharedByFieldNumber = 2;
  const ::UsageCategoryMetadata& shared_by() const;
  ::UsageCategoryMetadata* mutable_shared_by();
  ::UsageCategoryMetadata* release_shared_by();
  void set_allocated_shared_by(::UsageCategoryMetadata* shared_by);

  // optional .UsageCategoryMetadata visible_to = 3;
  bool has_visible_to() const;
  void clear_visible_to();
  static const int kVisibleToFieldNumber = 3;
  const ::UsageCategoryMetadata& visible_to() const;
  ::UsageCategoryMetadata* mutable_visible_to();
  ::UsageCategoryMetadata* release_visible_to();
  void set_allocated_visible_to(::UsageCategoryMetadata* visible_to);

  // @@protoc_insertion_point(class_scope:UsageMetadata)
 private:
  inline void set_has_owned_by();
  inline void clear_has_owned_by();
  inline void set_has_shared_by();
  inline void clear_has_shared_by();
  inline void set_has_visible_to();
  inline void clear_has_visible_to();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::UsageCategoryMetadata* owned_by_;
  ::UsageCategoryMetadata* shared_by_;
  ::UsageCategoryMetadata* visible_to_;
  friend void  protobuf_InitDefaults_UserMetadata_2eproto_impl();
  friend void  protobuf_AddDesc_UserMetadata_2eproto_impl();
  friend void protobuf_AssignDesc_UserMetadata_2eproto();
  friend void protobuf_ShutdownFile_UserMetadata_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<UsageMetadata> UsageMetadata_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// UsageCategoryMetadata

// optional int32 num_photos = 1;
inline bool UsageCategoryMetadata::has_num_photos() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UsageCategoryMetadata::set_has_num_photos() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UsageCategoryMetadata::clear_has_num_photos() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UsageCategoryMetadata::clear_num_photos() {
  num_photos_ = 0;
  clear_has_num_photos();
}
inline ::google::protobuf::int32 UsageCategoryMetadata::num_photos() const {
  // @@protoc_insertion_point(field_get:UsageCategoryMetadata.num_photos)
  return num_photos_;
}
inline void UsageCategoryMetadata::set_num_photos(::google::protobuf::int32 value) {
  set_has_num_photos();
  num_photos_ = value;
  // @@protoc_insertion_point(field_set:UsageCategoryMetadata.num_photos)
}

// optional int64 tn_size = 2;
inline bool UsageCategoryMetadata::has_tn_size() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UsageCategoryMetadata::set_has_tn_size() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UsageCategoryMetadata::clear_has_tn_size() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UsageCategoryMetadata::clear_tn_size() {
  tn_size_ = GOOGLE_LONGLONG(0);
  clear_has_tn_size();
}
inline ::google::protobuf::int64 UsageCategoryMetadata::tn_size() const {
  // @@protoc_insertion_point(field_get:UsageCategoryMetadata.tn_size)
  return tn_size_;
}
inline void UsageCategoryMetadata::set_tn_size(::google::protobuf::int64 value) {
  set_has_tn_size();
  tn_size_ = value;
  // @@protoc_insertion_point(field_set:UsageCategoryMetadata.tn_size)
}

// optional int64 med_size = 3;
inline bool UsageCategoryMetadata::has_med_size() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void UsageCategoryMetadata::set_has_med_size() {
  _has_bits_[0] |= 0x00000004u;
}
inline void UsageCategoryMetadata::clear_has_med_size() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void UsageCategoryMetadata::clear_med_size() {
  med_size_ = GOOGLE_LONGLONG(0);
  clear_has_med_size();
}
inline ::google::protobuf::int64 UsageCategoryMetadata::med_size() const {
  // @@protoc_insertion_point(field_get:UsageCategoryMetadata.med_size)
  return med_size_;
}
inline void UsageCategoryMetadata::set_med_size(::google::protobuf::int64 value) {
  set_has_med_size();
  med_size_ = value;
  // @@protoc_insertion_point(field_set:UsageCategoryMetadata.med_size)
}

// optional int64 full_size = 4;
inline bool UsageCategoryMetadata::has_full_size() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void UsageCategoryMetadata::set_has_full_size() {
  _has_bits_[0] |= 0x00000008u;
}
inline void UsageCategoryMetadata::clear_has_full_size() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void UsageCategoryMetadata::clear_full_size() {
  full_size_ = GOOGLE_LONGLONG(0);
  clear_has_full_size();
}
inline ::google::protobuf::int64 UsageCategoryMetadata::full_size() const {
  // @@protoc_insertion_point(field_get:UsageCategoryMetadata.full_size)
  return full_size_;
}
inline void UsageCategoryMetadata::set_full_size(::google::protobuf::int64 value) {
  set_has_full_size();
  full_size_ = value;
  // @@protoc_insertion_point(field_set:UsageCategoryMetadata.full_size)
}

// optional int64 orig_size = 5;
inline bool UsageCategoryMetadata::has_orig_size() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void UsageCategoryMetadata::set_has_orig_size() {
  _has_bits_[0] |= 0x00000010u;
}
inline void UsageCategoryMetadata::clear_has_orig_size() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void UsageCategoryMetadata::clear_orig_size() {
  orig_size_ = GOOGLE_LONGLONG(0);
  clear_has_orig_size();
}
inline ::google::protobuf::int64 UsageCategoryMetadata::orig_size() const {
  // @@protoc_insertion_point(field_get:UsageCategoryMetadata.orig_size)
  return orig_size_;
}
inline void UsageCategoryMetadata::set_orig_size(::google::protobuf::int64 value) {
  set_has_orig_size();
  orig_size_ = value;
  // @@protoc_insertion_point(field_set:UsageCategoryMetadata.orig_size)
}

inline const UsageCategoryMetadata* UsageCategoryMetadata::internal_default_instance() {
  return &UsageCategoryMetadata_default_instance_.get();
}
// -------------------------------------------------------------------

// UsageMetadata

// optional .UsageCategoryMetadata owned_by = 1;
inline bool UsageMetadata::has_owned_by() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UsageMetadata::set_has_owned_by() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UsageMetadata::clear_has_owned_by() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UsageMetadata::clear_owned_by() {
  if (owned_by_ != NULL) owned_by_->::UsageCategoryMetadata::Clear();
  clear_has_owned_by();
}
inline const ::UsageCategoryMetadata& UsageMetadata::owned_by() const {
  // @@protoc_insertion_point(field_get:UsageMetadata.owned_by)
  return owned_by_ != NULL ? *owned_by_
                         : *::UsageCategoryMetadata::internal_default_instance();
}
inline ::UsageCategoryMetadata* UsageMetadata::mutable_owned_by() {
  set_has_owned_by();
  if (owned_by_ == NULL) {
    owned_by_ = new ::UsageCategoryMetadata;
  }
  // @@protoc_insertion_point(field_mutable:UsageMetadata.owned_by)
  return owned_by_;
}
inline ::UsageCategoryMetadata* UsageMetadata::release_owned_by() {
  // @@protoc_insertion_point(field_release:UsageMetadata.owned_by)
  clear_has_owned_by();
  ::UsageCategoryMetadata* temp = owned_by_;
  owned_by_ = NULL;
  return temp;
}
inline void UsageMetadata::set_allocated_owned_by(::UsageCategoryMetadata* owned_by) {
  delete owned_by_;
  owned_by_ = owned_by;
  if (owned_by) {
    set_has_owned_by();
  } else {
    clear_has_owned_by();
  }
  // @@protoc_insertion_point(field_set_allocated:UsageMetadata.owned_by)
}

// optional .UsageCategoryMetadata shared_by = 2;
inline bool UsageMetadata::has_shared_by() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UsageMetadata::set_has_shared_by() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UsageMetadata::clear_has_shared_by() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UsageMetadata::clear_shared_by() {
  if (shared_by_ != NULL) shared_by_->::UsageCategoryMetadata::Clear();
  clear_has_shared_by();
}
inline const ::UsageCategoryMetadata& UsageMetadata::shared_by() const {
  // @@protoc_insertion_point(field_get:UsageMetadata.shared_by)
  return shared_by_ != NULL ? *shared_by_
                         : *::UsageCategoryMetadata::internal_default_instance();
}
inline ::UsageCategoryMetadata* UsageMetadata::mutable_shared_by() {
  set_has_shared_by();
  if (shared_by_ == NULL) {
    shared_by_ = new ::UsageCategoryMetadata;
  }
  // @@protoc_insertion_point(field_mutable:UsageMetadata.shared_by)
  return shared_by_;
}
inline ::UsageCategoryMetadata* UsageMetadata::release_shared_by() {
  // @@protoc_insertion_point(field_release:UsageMetadata.shared_by)
  clear_has_shared_by();
  ::UsageCategoryMetadata* temp = shared_by_;
  shared_by_ = NULL;
  return temp;
}
inline void UsageMetadata::set_allocated_shared_by(::UsageCategoryMetadata* shared_by) {
  delete shared_by_;
  shared_by_ = shared_by;
  if (shared_by) {
    set_has_shared_by();
  } else {
    clear_has_shared_by();
  }
  // @@protoc_insertion_point(field_set_allocated:UsageMetadata.shared_by)
}

// optional .UsageCategoryMetadata visible_to = 3;
inline bool UsageMetadata::has_visible_to() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void UsageMetadata::set_has_visible_to() {
  _has_bits_[0] |= 0x00000004u;
}
inline void UsageMetadata::clear_has_visible_to() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void UsageMetadata::clear_visible_to() {
  if (visible_to_ != NULL) visible_to_->::UsageCategoryMetadata::Clear();
  clear_has_visible_to();
}
inline const ::UsageCategoryMetadata& UsageMetadata::visible_to() const {
  // @@protoc_insertion_point(field_get:UsageMetadata.visible_to)
  return visible_to_ != NULL ? *visible_to_
                         : *::UsageCategoryMetadata::internal_default_instance();
}
inline ::UsageCategoryMetadata* UsageMetadata::mutable_visible_to() {
  set_has_visible_to();
  if (visible_to_ == NULL) {
    visible_to_ = new ::UsageCategoryMetadata;
  }
  // @@protoc_insertion_point(field_mutable:UsageMetadata.visible_to)
  return visible_to_;
}
inline ::UsageCategoryMetadata* UsageMetadata::release_visible_to() {
  // @@protoc_insertion_point(field_release:UsageMetadata.visible_to)
  clear_has_visible_to();
  ::UsageCategoryMetadata* temp = visible_to_;
  visible_to_ = NULL;
  return temp;
}
inline void UsageMetadata::set_allocated_visible_to(::UsageCategoryMetadata* visible_to) {
  delete visible_to_;
  visible_to_ = visible_to;
  if (visible_to) {
    set_has_visible_to();
  } else {
    clear_has_visible_to();
  }
  // @@protoc_insertion_point(field_set_allocated:UsageMetadata.visible_to)
}

inline const UsageMetadata* UsageMetadata::internal_default_instance() {
  return &UsageMetadata_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_UserMetadata_2eproto__INCLUDED