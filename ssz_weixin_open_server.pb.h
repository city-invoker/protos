// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ssz_weixin_open_server.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ssz_5fweixin_5fopen_5fserver_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ssz_5fweixin_5fopen_5fserver_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015008 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ssz_5fweixin_5fopen_5fserver_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ssz_5fweixin_5fopen_5fserver_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ssz_5fweixin_5fopen_5fserver_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_ssz_5fweixin_5fopen_5fserver_2eproto_metadata_getter(int index);
namespace ssz {
class GetAccessTokenRequest;
struct GetAccessTokenRequestDefaultTypeInternal;
extern GetAccessTokenRequestDefaultTypeInternal _GetAccessTokenRequest_default_instance_;
class GetAccessTokenResponse;
struct GetAccessTokenResponseDefaultTypeInternal;
extern GetAccessTokenResponseDefaultTypeInternal _GetAccessTokenResponse_default_instance_;
}  // namespace ssz
PROTOBUF_NAMESPACE_OPEN
template<> ::ssz::GetAccessTokenRequest* Arena::CreateMaybeMessage<::ssz::GetAccessTokenRequest>(Arena*);
template<> ::ssz::GetAccessTokenResponse* Arena::CreateMaybeMessage<::ssz::GetAccessTokenResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ssz {

// ===================================================================

class GetAccessTokenRequest PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ssz.GetAccessTokenRequest) */ {
 public:
  inline GetAccessTokenRequest() : GetAccessTokenRequest(nullptr) {}
  virtual ~GetAccessTokenRequest();
  explicit constexpr GetAccessTokenRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GetAccessTokenRequest(const GetAccessTokenRequest& from);
  GetAccessTokenRequest(GetAccessTokenRequest&& from) noexcept
    : GetAccessTokenRequest() {
    *this = ::std::move(from);
  }

  inline GetAccessTokenRequest& operator=(const GetAccessTokenRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetAccessTokenRequest& operator=(GetAccessTokenRequest&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const GetAccessTokenRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const GetAccessTokenRequest* internal_default_instance() {
    return reinterpret_cast<const GetAccessTokenRequest*>(
               &_GetAccessTokenRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GetAccessTokenRequest& a, GetAccessTokenRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(GetAccessTokenRequest* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GetAccessTokenRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GetAccessTokenRequest* New() const final {
    return CreateMaybeMessage<GetAccessTokenRequest>(nullptr);
  }

  GetAccessTokenRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GetAccessTokenRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GetAccessTokenRequest& from);
  void MergeFrom(const GetAccessTokenRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetAccessTokenRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ssz.GetAccessTokenRequest";
  }
  protected:
  explicit GetAccessTokenRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_ssz_5fweixin_5fopen_5fserver_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCodeFieldNumber = 2,
    kAppidFieldNumber = 3,
    kUuidFieldNumber = 4,
    kQueryTypeFieldNumber = 1,
  };
  // string code = 2;
  void clear_code();
  const std::string& code() const;
  void set_code(const std::string& value);
  void set_code(std::string&& value);
  void set_code(const char* value);
  void set_code(const char* value, size_t size);
  std::string* mutable_code();
  std::string* release_code();
  void set_allocated_code(std::string* code);
  private:
  const std::string& _internal_code() const;
  void _internal_set_code(const std::string& value);
  std::string* _internal_mutable_code();
  public:

  // string appid = 3;
  void clear_appid();
  const std::string& appid() const;
  void set_appid(const std::string& value);
  void set_appid(std::string&& value);
  void set_appid(const char* value);
  void set_appid(const char* value, size_t size);
  std::string* mutable_appid();
  std::string* release_appid();
  void set_allocated_appid(std::string* appid);
  private:
  const std::string& _internal_appid() const;
  void _internal_set_appid(const std::string& value);
  std::string* _internal_mutable_appid();
  public:

  // string uuid = 4;
  void clear_uuid();
  const std::string& uuid() const;
  void set_uuid(const std::string& value);
  void set_uuid(std::string&& value);
  void set_uuid(const char* value);
  void set_uuid(const char* value, size_t size);
  std::string* mutable_uuid();
  std::string* release_uuid();
  void set_allocated_uuid(std::string* uuid);
  private:
  const std::string& _internal_uuid() const;
  void _internal_set_uuid(const std::string& value);
  std::string* _internal_mutable_uuid();
  public:

  // int32 query_type = 1;
  void clear_query_type();
  ::PROTOBUF_NAMESPACE_ID::int32 query_type() const;
  void set_query_type(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_query_type() const;
  void _internal_set_query_type(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:ssz.GetAccessTokenRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr code_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr appid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr uuid_;
  ::PROTOBUF_NAMESPACE_ID::int32 query_type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ssz_5fweixin_5fopen_5fserver_2eproto;
};
// -------------------------------------------------------------------

class GetAccessTokenResponse PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ssz.GetAccessTokenResponse) */ {
 public:
  inline GetAccessTokenResponse() : GetAccessTokenResponse(nullptr) {}
  virtual ~GetAccessTokenResponse();
  explicit constexpr GetAccessTokenResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GetAccessTokenResponse(const GetAccessTokenResponse& from);
  GetAccessTokenResponse(GetAccessTokenResponse&& from) noexcept
    : GetAccessTokenResponse() {
    *this = ::std::move(from);
  }

  inline GetAccessTokenResponse& operator=(const GetAccessTokenResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetAccessTokenResponse& operator=(GetAccessTokenResponse&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const GetAccessTokenResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const GetAccessTokenResponse* internal_default_instance() {
    return reinterpret_cast<const GetAccessTokenResponse*>(
               &_GetAccessTokenResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(GetAccessTokenResponse& a, GetAccessTokenResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(GetAccessTokenResponse* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GetAccessTokenResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GetAccessTokenResponse* New() const final {
    return CreateMaybeMessage<GetAccessTokenResponse>(nullptr);
  }

  GetAccessTokenResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GetAccessTokenResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const GetAccessTokenResponse& from);
  void MergeFrom(const GetAccessTokenResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GetAccessTokenResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ssz.GetAccessTokenResponse";
  }
  protected:
  explicit GetAccessTokenResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_ssz_5fweixin_5fopen_5fserver_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUuidFieldNumber = 1,
    kAccessTokenFieldNumber = 2,
    kExpireTimeFieldNumber = 3,
  };
  // string uuid = 1;
  void clear_uuid();
  const std::string& uuid() const;
  void set_uuid(const std::string& value);
  void set_uuid(std::string&& value);
  void set_uuid(const char* value);
  void set_uuid(const char* value, size_t size);
  std::string* mutable_uuid();
  std::string* release_uuid();
  void set_allocated_uuid(std::string* uuid);
  private:
  const std::string& _internal_uuid() const;
  void _internal_set_uuid(const std::string& value);
  std::string* _internal_mutable_uuid();
  public:

  // string access_token = 2;
  void clear_access_token();
  const std::string& access_token() const;
  void set_access_token(const std::string& value);
  void set_access_token(std::string&& value);
  void set_access_token(const char* value);
  void set_access_token(const char* value, size_t size);
  std::string* mutable_access_token();
  std::string* release_access_token();
  void set_allocated_access_token(std::string* access_token);
  private:
  const std::string& _internal_access_token() const;
  void _internal_set_access_token(const std::string& value);
  std::string* _internal_mutable_access_token();
  public:

  // string expire_time = 3;
  void clear_expire_time();
  const std::string& expire_time() const;
  void set_expire_time(const std::string& value);
  void set_expire_time(std::string&& value);
  void set_expire_time(const char* value);
  void set_expire_time(const char* value, size_t size);
  std::string* mutable_expire_time();
  std::string* release_expire_time();
  void set_allocated_expire_time(std::string* expire_time);
  private:
  const std::string& _internal_expire_time() const;
  void _internal_set_expire_time(const std::string& value);
  std::string* _internal_mutable_expire_time();
  public:

  // @@protoc_insertion_point(class_scope:ssz.GetAccessTokenResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr uuid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr access_token_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr expire_time_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_ssz_5fweixin_5fopen_5fserver_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GetAccessTokenRequest

// int32 query_type = 1;
inline void GetAccessTokenRequest::clear_query_type() {
  query_type_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 GetAccessTokenRequest::_internal_query_type() const {
  return query_type_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 GetAccessTokenRequest::query_type() const {
  // @@protoc_insertion_point(field_get:ssz.GetAccessTokenRequest.query_type)
  return _internal_query_type();
}
inline void GetAccessTokenRequest::_internal_set_query_type(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  query_type_ = value;
}
inline void GetAccessTokenRequest::set_query_type(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_query_type(value);
  // @@protoc_insertion_point(field_set:ssz.GetAccessTokenRequest.query_type)
}

// string code = 2;
inline void GetAccessTokenRequest::clear_code() {
  code_.ClearToEmpty();
}
inline const std::string& GetAccessTokenRequest::code() const {
  // @@protoc_insertion_point(field_get:ssz.GetAccessTokenRequest.code)
  return _internal_code();
}
inline void GetAccessTokenRequest::set_code(const std::string& value) {
  _internal_set_code(value);
  // @@protoc_insertion_point(field_set:ssz.GetAccessTokenRequest.code)
}
inline std::string* GetAccessTokenRequest::mutable_code() {
  // @@protoc_insertion_point(field_mutable:ssz.GetAccessTokenRequest.code)
  return _internal_mutable_code();
}
inline const std::string& GetAccessTokenRequest::_internal_code() const {
  return code_.Get();
}
inline void GetAccessTokenRequest::_internal_set_code(const std::string& value) {
  
  code_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void GetAccessTokenRequest::set_code(std::string&& value) {
  
  code_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ssz.GetAccessTokenRequest.code)
}
inline void GetAccessTokenRequest::set_code(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  code_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ssz.GetAccessTokenRequest.code)
}
inline void GetAccessTokenRequest::set_code(const char* value,
    size_t size) {
  
  code_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ssz.GetAccessTokenRequest.code)
}
inline std::string* GetAccessTokenRequest::_internal_mutable_code() {
  
  return code_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* GetAccessTokenRequest::release_code() {
  // @@protoc_insertion_point(field_release:ssz.GetAccessTokenRequest.code)
  return code_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void GetAccessTokenRequest::set_allocated_code(std::string* code) {
  if (code != nullptr) {
    
  } else {
    
  }
  code_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), code,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ssz.GetAccessTokenRequest.code)
}

// string appid = 3;
inline void GetAccessTokenRequest::clear_appid() {
  appid_.ClearToEmpty();
}
inline const std::string& GetAccessTokenRequest::appid() const {
  // @@protoc_insertion_point(field_get:ssz.GetAccessTokenRequest.appid)
  return _internal_appid();
}
inline void GetAccessTokenRequest::set_appid(const std::string& value) {
  _internal_set_appid(value);
  // @@protoc_insertion_point(field_set:ssz.GetAccessTokenRequest.appid)
}
inline std::string* GetAccessTokenRequest::mutable_appid() {
  // @@protoc_insertion_point(field_mutable:ssz.GetAccessTokenRequest.appid)
  return _internal_mutable_appid();
}
inline const std::string& GetAccessTokenRequest::_internal_appid() const {
  return appid_.Get();
}
inline void GetAccessTokenRequest::_internal_set_appid(const std::string& value) {
  
  appid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void GetAccessTokenRequest::set_appid(std::string&& value) {
  
  appid_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ssz.GetAccessTokenRequest.appid)
}
inline void GetAccessTokenRequest::set_appid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  appid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ssz.GetAccessTokenRequest.appid)
}
inline void GetAccessTokenRequest::set_appid(const char* value,
    size_t size) {
  
  appid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ssz.GetAccessTokenRequest.appid)
}
inline std::string* GetAccessTokenRequest::_internal_mutable_appid() {
  
  return appid_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* GetAccessTokenRequest::release_appid() {
  // @@protoc_insertion_point(field_release:ssz.GetAccessTokenRequest.appid)
  return appid_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void GetAccessTokenRequest::set_allocated_appid(std::string* appid) {
  if (appid != nullptr) {
    
  } else {
    
  }
  appid_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), appid,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ssz.GetAccessTokenRequest.appid)
}

// string uuid = 4;
inline void GetAccessTokenRequest::clear_uuid() {
  uuid_.ClearToEmpty();
}
inline const std::string& GetAccessTokenRequest::uuid() const {
  // @@protoc_insertion_point(field_get:ssz.GetAccessTokenRequest.uuid)
  return _internal_uuid();
}
inline void GetAccessTokenRequest::set_uuid(const std::string& value) {
  _internal_set_uuid(value);
  // @@protoc_insertion_point(field_set:ssz.GetAccessTokenRequest.uuid)
}
inline std::string* GetAccessTokenRequest::mutable_uuid() {
  // @@protoc_insertion_point(field_mutable:ssz.GetAccessTokenRequest.uuid)
  return _internal_mutable_uuid();
}
inline const std::string& GetAccessTokenRequest::_internal_uuid() const {
  return uuid_.Get();
}
inline void GetAccessTokenRequest::_internal_set_uuid(const std::string& value) {
  
  uuid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void GetAccessTokenRequest::set_uuid(std::string&& value) {
  
  uuid_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ssz.GetAccessTokenRequest.uuid)
}
inline void GetAccessTokenRequest::set_uuid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  uuid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ssz.GetAccessTokenRequest.uuid)
}
inline void GetAccessTokenRequest::set_uuid(const char* value,
    size_t size) {
  
  uuid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ssz.GetAccessTokenRequest.uuid)
}
inline std::string* GetAccessTokenRequest::_internal_mutable_uuid() {
  
  return uuid_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* GetAccessTokenRequest::release_uuid() {
  // @@protoc_insertion_point(field_release:ssz.GetAccessTokenRequest.uuid)
  return uuid_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void GetAccessTokenRequest::set_allocated_uuid(std::string* uuid) {
  if (uuid != nullptr) {
    
  } else {
    
  }
  uuid_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), uuid,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ssz.GetAccessTokenRequest.uuid)
}

// -------------------------------------------------------------------

// GetAccessTokenResponse

// string uuid = 1;
inline void GetAccessTokenResponse::clear_uuid() {
  uuid_.ClearToEmpty();
}
inline const std::string& GetAccessTokenResponse::uuid() const {
  // @@protoc_insertion_point(field_get:ssz.GetAccessTokenResponse.uuid)
  return _internal_uuid();
}
inline void GetAccessTokenResponse::set_uuid(const std::string& value) {
  _internal_set_uuid(value);
  // @@protoc_insertion_point(field_set:ssz.GetAccessTokenResponse.uuid)
}
inline std::string* GetAccessTokenResponse::mutable_uuid() {
  // @@protoc_insertion_point(field_mutable:ssz.GetAccessTokenResponse.uuid)
  return _internal_mutable_uuid();
}
inline const std::string& GetAccessTokenResponse::_internal_uuid() const {
  return uuid_.Get();
}
inline void GetAccessTokenResponse::_internal_set_uuid(const std::string& value) {
  
  uuid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void GetAccessTokenResponse::set_uuid(std::string&& value) {
  
  uuid_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ssz.GetAccessTokenResponse.uuid)
}
inline void GetAccessTokenResponse::set_uuid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  uuid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ssz.GetAccessTokenResponse.uuid)
}
inline void GetAccessTokenResponse::set_uuid(const char* value,
    size_t size) {
  
  uuid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ssz.GetAccessTokenResponse.uuid)
}
inline std::string* GetAccessTokenResponse::_internal_mutable_uuid() {
  
  return uuid_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* GetAccessTokenResponse::release_uuid() {
  // @@protoc_insertion_point(field_release:ssz.GetAccessTokenResponse.uuid)
  return uuid_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void GetAccessTokenResponse::set_allocated_uuid(std::string* uuid) {
  if (uuid != nullptr) {
    
  } else {
    
  }
  uuid_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), uuid,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ssz.GetAccessTokenResponse.uuid)
}

// string access_token = 2;
inline void GetAccessTokenResponse::clear_access_token() {
  access_token_.ClearToEmpty();
}
inline const std::string& GetAccessTokenResponse::access_token() const {
  // @@protoc_insertion_point(field_get:ssz.GetAccessTokenResponse.access_token)
  return _internal_access_token();
}
inline void GetAccessTokenResponse::set_access_token(const std::string& value) {
  _internal_set_access_token(value);
  // @@protoc_insertion_point(field_set:ssz.GetAccessTokenResponse.access_token)
}
inline std::string* GetAccessTokenResponse::mutable_access_token() {
  // @@protoc_insertion_point(field_mutable:ssz.GetAccessTokenResponse.access_token)
  return _internal_mutable_access_token();
}
inline const std::string& GetAccessTokenResponse::_internal_access_token() const {
  return access_token_.Get();
}
inline void GetAccessTokenResponse::_internal_set_access_token(const std::string& value) {
  
  access_token_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void GetAccessTokenResponse::set_access_token(std::string&& value) {
  
  access_token_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ssz.GetAccessTokenResponse.access_token)
}
inline void GetAccessTokenResponse::set_access_token(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  access_token_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ssz.GetAccessTokenResponse.access_token)
}
inline void GetAccessTokenResponse::set_access_token(const char* value,
    size_t size) {
  
  access_token_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ssz.GetAccessTokenResponse.access_token)
}
inline std::string* GetAccessTokenResponse::_internal_mutable_access_token() {
  
  return access_token_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* GetAccessTokenResponse::release_access_token() {
  // @@protoc_insertion_point(field_release:ssz.GetAccessTokenResponse.access_token)
  return access_token_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void GetAccessTokenResponse::set_allocated_access_token(std::string* access_token) {
  if (access_token != nullptr) {
    
  } else {
    
  }
  access_token_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), access_token,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ssz.GetAccessTokenResponse.access_token)
}

// string expire_time = 3;
inline void GetAccessTokenResponse::clear_expire_time() {
  expire_time_.ClearToEmpty();
}
inline const std::string& GetAccessTokenResponse::expire_time() const {
  // @@protoc_insertion_point(field_get:ssz.GetAccessTokenResponse.expire_time)
  return _internal_expire_time();
}
inline void GetAccessTokenResponse::set_expire_time(const std::string& value) {
  _internal_set_expire_time(value);
  // @@protoc_insertion_point(field_set:ssz.GetAccessTokenResponse.expire_time)
}
inline std::string* GetAccessTokenResponse::mutable_expire_time() {
  // @@protoc_insertion_point(field_mutable:ssz.GetAccessTokenResponse.expire_time)
  return _internal_mutable_expire_time();
}
inline const std::string& GetAccessTokenResponse::_internal_expire_time() const {
  return expire_time_.Get();
}
inline void GetAccessTokenResponse::_internal_set_expire_time(const std::string& value) {
  
  expire_time_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void GetAccessTokenResponse::set_expire_time(std::string&& value) {
  
  expire_time_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:ssz.GetAccessTokenResponse.expire_time)
}
inline void GetAccessTokenResponse::set_expire_time(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  expire_time_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:ssz.GetAccessTokenResponse.expire_time)
}
inline void GetAccessTokenResponse::set_expire_time(const char* value,
    size_t size) {
  
  expire_time_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:ssz.GetAccessTokenResponse.expire_time)
}
inline std::string* GetAccessTokenResponse::_internal_mutable_expire_time() {
  
  return expire_time_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* GetAccessTokenResponse::release_expire_time() {
  // @@protoc_insertion_point(field_release:ssz.GetAccessTokenResponse.expire_time)
  return expire_time_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void GetAccessTokenResponse::set_allocated_expire_time(std::string* expire_time) {
  if (expire_time != nullptr) {
    
  } else {
    
  }
  expire_time_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), expire_time,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:ssz.GetAccessTokenResponse.expire_time)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ssz

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ssz_5fweixin_5fopen_5fserver_2eproto
