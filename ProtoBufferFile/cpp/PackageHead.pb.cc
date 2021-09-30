// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PackageHead.proto

#include "stdafx.h"
#include "PackageHead.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace Proto {
namespace Package {
constexpr PackageHead::PackageHead(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : destination_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , userid_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , moduleid_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , messagetext_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , customtext_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , messagecode_(0)
  , packagetype_(1)

  , functioncode_(1)
{}
struct PackageHeadDefaultTypeInternal {
  constexpr PackageHeadDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~PackageHeadDefaultTypeInternal() {}
  union {
    PackageHead _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PackageHeadDefaultTypeInternal _PackageHead_default_instance_;
}  // namespace Package
}  // namespace Proto
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_PackageHead_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_PackageHead_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_PackageHead_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_PackageHead_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::Proto::Package::PackageHead, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::Proto::Package::PackageHead, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Proto::Package::PackageHead, packagetype_),
  PROTOBUF_FIELD_OFFSET(::Proto::Package::PackageHead, functioncode_),
  PROTOBUF_FIELD_OFFSET(::Proto::Package::PackageHead, destination_),
  PROTOBUF_FIELD_OFFSET(::Proto::Package::PackageHead, userid_),
  PROTOBUF_FIELD_OFFSET(::Proto::Package::PackageHead, moduleid_),
  PROTOBUF_FIELD_OFFSET(::Proto::Package::PackageHead, messagecode_),
  PROTOBUF_FIELD_OFFSET(::Proto::Package::PackageHead, messagetext_),
  PROTOBUF_FIELD_OFFSET(::Proto::Package::PackageHead, customtext_),
  6,
  7,
  0,
  1,
  2,
  5,
  3,
  4,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 14, -1, sizeof(::Proto::Package::PackageHead)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Proto::Package::_PackageHead_default_instance_),
};

const char descriptor_table_protodef_PackageHead_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021PackageHead.proto\022\rProto.Package\032\025Pack"
  "ageHeadEnum.proto\"\346\001\n\013PackageHead\022/\n\013pac"
  "kageType\030\001 \002(\0162\032.Proto.Package.PackageTy"
  "pe\0221\n\014functionCode\030\002 \002(\0162\033.Proto.Package"
  ".FunctionCode\022\023\n\013destination\030\003 \001(\t\022\016\n\006us"
  "erId\030\004 \001(\t\022\020\n\010moduleId\030\005 \001(\t\022\023\n\013messageC"
  "ode\030\006 \001(\005\022\023\n\013messageText\030\007 \001(\t\022\022\n\ncustom"
  "Text\030\010 \001(\tB\037\n\017com.cc.protobufB\014PackageHe"
  "ads"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_PackageHead_2eproto_deps[1] = {
  &::descriptor_table_PackageHeadEnum_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_PackageHead_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PackageHead_2eproto = {
  false, false, 323, descriptor_table_protodef_PackageHead_2eproto, "PackageHead.proto", 
  &descriptor_table_PackageHead_2eproto_once, descriptor_table_PackageHead_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_PackageHead_2eproto::offsets,
  file_level_metadata_PackageHead_2eproto, file_level_enum_descriptors_PackageHead_2eproto, file_level_service_descriptors_PackageHead_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_PackageHead_2eproto_getter() {
  return &descriptor_table_PackageHead_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_PackageHead_2eproto(&descriptor_table_PackageHead_2eproto);
namespace Proto {
namespace Package {

// ===================================================================

class PackageHead::_Internal {
 public:
  using HasBits = decltype(std::declval<PackageHead>()._has_bits_);
  static void set_has_packagetype(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_functioncode(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_destination(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_userid(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_moduleid(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_messagecode(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_messagetext(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_customtext(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x000000c0) ^ 0x000000c0) != 0;
  }
};

PackageHead::PackageHead(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:Proto.Package.PackageHead)
}
PackageHead::PackageHead(const PackageHead& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  destination_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_destination()) {
    destination_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_destination(), 
      GetArenaForAllocation());
  }
  userid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_userid()) {
    userid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_userid(), 
      GetArenaForAllocation());
  }
  moduleid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_moduleid()) {
    moduleid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_moduleid(), 
      GetArenaForAllocation());
  }
  messagetext_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_messagetext()) {
    messagetext_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_messagetext(), 
      GetArenaForAllocation());
  }
  customtext_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_customtext()) {
    customtext_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_customtext(), 
      GetArenaForAllocation());
  }
  ::memcpy(&messagecode_, &from.messagecode_,
    static_cast<size_t>(reinterpret_cast<char*>(&functioncode_) -
    reinterpret_cast<char*>(&messagecode_)) + sizeof(functioncode_));
  // @@protoc_insertion_point(copy_constructor:Proto.Package.PackageHead)
}

void PackageHead::SharedCtor() {
destination_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
userid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
moduleid_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
messagetext_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
customtext_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
messagecode_ = 0;
packagetype_ = 1;
functioncode_ = 1;
}

PackageHead::~PackageHead() {
  // @@protoc_insertion_point(destructor:Proto.Package.PackageHead)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void PackageHead::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  destination_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  userid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  moduleid_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  messagetext_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  customtext_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void PackageHead::ArenaDtor(void* object) {
  PackageHead* _this = reinterpret_cast< PackageHead* >(object);
  (void)_this;
}
void PackageHead::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PackageHead::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void PackageHead::Clear() {
// @@protoc_insertion_point(message_clear_start:Proto.Package.PackageHead)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      destination_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      userid_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      moduleid_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000008u) {
      messagetext_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000010u) {
      customtext_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x000000e0u) {
    messagecode_ = 0;
    packagetype_ = 1;
    functioncode_ = 1;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PackageHead::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required .Proto.Package.PackageType packageType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::Proto::Package::PackageType_IsValid(val))) {
            _internal_set_packagetype(static_cast<::Proto::Package::PackageType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // required .Proto.Package.FunctionCode functionCode = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::Proto::Package::FunctionCode_IsValid(val))) {
            _internal_set_functioncode(static_cast<::Proto::Package::FunctionCode>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(2, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional string destination = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_destination();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Proto.Package.PackageHead.destination");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string userId = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_userid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Proto.Package.PackageHead.userId");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string moduleId = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_moduleid();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Proto.Package.PackageHead.moduleId");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 messageCode = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          _Internal::set_has_messagecode(&has_bits);
          messagecode_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string messageText = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          auto str = _internal_mutable_messagetext();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Proto.Package.PackageHead.messageText");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string customText = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 66)) {
          auto str = _internal_mutable_customtext();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Proto.Package.PackageHead.customText");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* PackageHead::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Proto.Package.PackageHead)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .Proto.Package.PackageType packageType = 1;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_packagetype(), target);
  }

  // required .Proto.Package.FunctionCode functionCode = 2;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_functioncode(), target);
  }

  // optional string destination = 3;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_destination().data(), static_cast<int>(this->_internal_destination().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Proto.Package.PackageHead.destination");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_destination(), target);
  }

  // optional string userId = 4;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_userid().data(), static_cast<int>(this->_internal_userid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Proto.Package.PackageHead.userId");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_userid(), target);
  }

  // optional string moduleId = 5;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_moduleid().data(), static_cast<int>(this->_internal_moduleid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Proto.Package.PackageHead.moduleId");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_moduleid(), target);
  }

  // optional int32 messageCode = 6;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(6, this->_internal_messagecode(), target);
  }

  // optional string messageText = 7;
  if (cached_has_bits & 0x00000008u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_messagetext().data(), static_cast<int>(this->_internal_messagetext().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Proto.Package.PackageHead.messageText");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_messagetext(), target);
  }

  // optional string customText = 8;
  if (cached_has_bits & 0x00000010u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_customtext().data(), static_cast<int>(this->_internal_customtext().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Proto.Package.PackageHead.customText");
    target = stream->WriteStringMaybeAliased(
        8, this->_internal_customtext(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Proto.Package.PackageHead)
  return target;
}

size_t PackageHead::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:Proto.Package.PackageHead)
  size_t total_size = 0;

  if (_internal_has_packagetype()) {
    // required .Proto.Package.PackageType packageType = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_packagetype());
  }

  if (_internal_has_functioncode()) {
    // required .Proto.Package.FunctionCode functionCode = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_functioncode());
  }

  return total_size;
}
size_t PackageHead::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Proto.Package.PackageHead)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x000000c0) ^ 0x000000c0) == 0) {  // All required fields are present.
    // required .Proto.Package.PackageType packageType = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_packagetype());

    // required .Proto.Package.FunctionCode functionCode = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_functioncode());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    // optional string destination = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_destination());
    }

    // optional string userId = 4;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_userid());
    }

    // optional string moduleId = 5;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_moduleid());
    }

    // optional string messageText = 7;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_messagetext());
    }

    // optional string customText = 8;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_customtext());
    }

    // optional int32 messageCode = 6;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_messagecode());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PackageHead::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    PackageHead::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PackageHead::GetClassData() const { return &_class_data_; }

void PackageHead::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<PackageHead *>(to)->MergeFrom(
      static_cast<const PackageHead &>(from));
}


void PackageHead::MergeFrom(const PackageHead& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Proto.Package.PackageHead)
  GOOGLE_DCHECK_NE(&from, this);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_destination(from._internal_destination());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_userid(from._internal_userid());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_set_moduleid(from._internal_moduleid());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_set_messagetext(from._internal_messagetext());
    }
    if (cached_has_bits & 0x00000010u) {
      _internal_set_customtext(from._internal_customtext());
    }
    if (cached_has_bits & 0x00000020u) {
      messagecode_ = from.messagecode_;
    }
    if (cached_has_bits & 0x00000040u) {
      packagetype_ = from.packagetype_;
    }
    if (cached_has_bits & 0x00000080u) {
      functioncode_ = from.functioncode_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PackageHead::CopyFrom(const PackageHead& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Proto.Package.PackageHead)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PackageHead::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void PackageHead::InternalSwap(PackageHead* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &destination_, lhs_arena,
      &other->destination_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &userid_, lhs_arena,
      &other->userid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &moduleid_, lhs_arena,
      &other->moduleid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &messagetext_, lhs_arena,
      &other->messagetext_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &customtext_, lhs_arena,
      &other->customtext_, rhs_arena
  );
  swap(messagecode_, other->messagecode_);
  swap(packagetype_, other->packagetype_);
  swap(functioncode_, other->functioncode_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PackageHead::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_PackageHead_2eproto_getter, &descriptor_table_PackageHead_2eproto_once,
      file_level_metadata_PackageHead_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Package
}  // namespace Proto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Proto::Package::PackageHead* Arena::CreateMaybeMessage< ::Proto::Package::PackageHead >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Proto::Package::PackageHead >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>