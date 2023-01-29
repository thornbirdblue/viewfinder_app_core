// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: FullTextIndexMetadata.proto

#ifndef PROTOBUF_FullTextIndexMetadata_2eproto__INCLUDED
#define PROTOBUF_FullTextIndexMetadata_2eproto__INCLUDED

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
void protobuf_AddDesc_FullTextIndexMetadata_2eproto();
void protobuf_InitDefaults_FullTextIndexMetadata_2eproto();
void protobuf_AssignDesc_FullTextIndexMetadata_2eproto();
void protobuf_ShutdownFile_FullTextIndexMetadata_2eproto();

class FullTextLexiconMetadata;

// ===================================================================

class FullTextLexiconMetadata : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:FullTextLexiconMetadata) */ {
 public:
  FullTextLexiconMetadata();
  virtual ~FullTextLexiconMetadata();

  FullTextLexiconMetadata(const FullTextLexiconMetadata& from);

  inline FullTextLexiconMetadata& operator=(const FullTextLexiconMetadata& from) {
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
  static const FullTextLexiconMetadata& default_instance();

  static const FullTextLexiconMetadata* internal_default_instance();

  void Swap(FullTextLexiconMetadata* other);

  // implements Message ----------------------------------------------

  inline FullTextLexiconMetadata* New() const { return New(NULL); }

  FullTextLexiconMetadata* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FullTextLexiconMetadata& from);
  void MergeFrom(const FullTextLexiconMetadata& from);
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
  void InternalSwap(FullTextLexiconMetadata* other);
  void UnsafeMergeFrom(const FullTextLexiconMetadata& from);
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

  // optional int64 token_id = 1;
  bool has_token_id() const;
  void clear_token_id();
  static const int kTokenIdFieldNumber = 1;
  ::google::protobuf::int64 token_id() const;
  void set_token_id(::google::protobuf::int64 value);

  // optional int64 count = 2;
  bool has_count() const;
  void clear_count();
  static const int kCountFieldNumber = 2;
  ::google::protobuf::int64 count() const;
  void set_count(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:FullTextLexiconMetadata)
 private:
  inline void set_has_token_id();
  inline void clear_has_token_id();
  inline void set_has_count();
  inline void clear_has_count();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::int64 token_id_;
  ::google::protobuf::int64 count_;
  friend void  protobuf_InitDefaults_FullTextIndexMetadata_2eproto_impl();
  friend void  protobuf_AddDesc_FullTextIndexMetadata_2eproto_impl();
  friend void protobuf_AssignDesc_FullTextIndexMetadata_2eproto();
  friend void protobuf_ShutdownFile_FullTextIndexMetadata_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<FullTextLexiconMetadata> FullTextLexiconMetadata_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// FullTextLexiconMetadata

// optional int64 token_id = 1;
inline bool FullTextLexiconMetadata::has_token_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FullTextLexiconMetadata::set_has_token_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FullTextLexiconMetadata::clear_has_token_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FullTextLexiconMetadata::clear_token_id() {
  token_id_ = GOOGLE_LONGLONG(0);
  clear_has_token_id();
}
inline ::google::protobuf::int64 FullTextLexiconMetadata::token_id() const {
  // @@protoc_insertion_point(field_get:FullTextLexiconMetadata.token_id)
  return token_id_;
}
inline void FullTextLexiconMetadata::set_token_id(::google::protobuf::int64 value) {
  set_has_token_id();
  token_id_ = value;
  // @@protoc_insertion_point(field_set:FullTextLexiconMetadata.token_id)
}

// optional int64 count = 2;
inline bool FullTextLexiconMetadata::has_count() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FullTextLexiconMetadata::set_has_count() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FullTextLexiconMetadata::clear_has_count() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FullTextLexiconMetadata::clear_count() {
  count_ = GOOGLE_LONGLONG(0);
  clear_has_count();
}
inline ::google::protobuf::int64 FullTextLexiconMetadata::count() const {
  // @@protoc_insertion_point(field_get:FullTextLexiconMetadata.count)
  return count_;
}
inline void FullTextLexiconMetadata::set_count(::google::protobuf::int64 value) {
  set_has_count();
  count_ = value;
  // @@protoc_insertion_point(field_set:FullTextLexiconMetadata.count)
}

inline const FullTextLexiconMetadata* FullTextLexiconMetadata::internal_default_instance() {
  return &FullTextLexiconMetadata_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_FullTextIndexMetadata_2eproto__INCLUDED