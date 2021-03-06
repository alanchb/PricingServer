// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PackageHeadEnum.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_PackageHeadEnum_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_PackageHeadEnum_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3018000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3018000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_PackageHeadEnum_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_PackageHeadEnum_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PackageHeadEnum_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace Proto {
namespace Package {

enum PackageType : int {
  Request = 1,
  Reply = 2,
  AsnycRequest = 3,
  AsnycReply = 4,
  PushMessage = 5
};
bool PackageType_IsValid(int value);
constexpr PackageType PackageType_MIN = Request;
constexpr PackageType PackageType_MAX = PushMessage;
constexpr int PackageType_ARRAYSIZE = PackageType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PackageType_descriptor();
template<typename T>
inline const std::string& PackageType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, PackageType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function PackageType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    PackageType_descriptor(), enum_t_value);
}
inline bool PackageType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, PackageType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<PackageType>(
    PackageType_descriptor(), name, value);
}
enum FunctionCode : int {
  PlaceOrder = 1,
  DeleteOrder = 2,
  DevPricing = 10,
  QueryProjectInfo = 101,
  QueryStockInfo = 102,
  QueryFutureInfo = 103,
  QueryStockOrderInfo = 104,
  QueryStockKnockInfo = 105,
  QueryStockCancelInfo = 106,
  QueryStockPositionInfo = 107,
  QueryStockAccountInfo = 108,
  QueryFutOrderInfo = 109,
  QueryFutKnockInfo = 110,
  QueryFutCancelInfo = 111,
  QueryFutPositionInfo = 112,
  QueryFutAccountInfo = 113,
  QueryMiniteLineInfo = 114,
  QueryDayLineInfo = 115,
  QueryFutureMarginRateAndCommission = 116,
  QueryQtsProductNav = 117,
  QueryIndexComponentInfo = 118,
  StockPreSettle = 119,
  QueryStockPreSettleResult = 120,
  StockReckonTradingLogImp = 121,
  StockReckonAccountImp = 122,
  StockReckonStklistImp = 123,
  StockReckonAndResultReturn = 124,
  ComputeProductNav = 125,
  QueryQuotationTicks = 126,
  TestFunc127 = 127,
  GetSysInfo = 128,
  QueryNeedStkInfo = 129,
  QueryWhiteList = 130,
  QueryBlackList = 131,
  RefreshPrjPosition = 132,
  OMSOptLogin = 133,
  QueryLOFInfo = 134,
  QueryUnProcess = 135,
  RestrictListMaintance = 136,
  RequestTradeInfo = 137,
  QueryDayLineInfoFromCiccDC = 138,
  QueryOptionInfo = 139,
  QueryFutureETFArbPara = 200,
  PauseTrade = 500,
  ContinueTrade = 501,
  SimuPara = 9000,
  TestFunc16351 = 16351,
  TestFunc16352 = 16352,
  TestFunc16353 = 16353,
  TestFunc16354 = 16354,
  TestFunc16355 = 16355,
  TestFunc16356 = 16356,
  TestFunc16357 = 16357,
  TestFunc16358 = 16358,
  TestFunc16359 = 16359,
  TestFunc16360 = 16360,
  TestFunc16361 = 16361,
  TestFunc16362 = 16362,
  TestFunc16363 = 16363,
  TestFunc16364 = 16364,
  TestFunc16365 = 16365,
  TestFunc16366 = 16366,
  TestFunc16367 = 16367,
  TestFunc16368 = 16368,
  TestFunc16369 = 16369,
  TestFunc16370 = 16370
};
bool FunctionCode_IsValid(int value);
constexpr FunctionCode FunctionCode_MIN = PlaceOrder;
constexpr FunctionCode FunctionCode_MAX = TestFunc16370;
constexpr int FunctionCode_ARRAYSIZE = FunctionCode_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* FunctionCode_descriptor();
template<typename T>
inline const std::string& FunctionCode_Name(T enum_t_value) {
  static_assert(::std::is_same<T, FunctionCode>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function FunctionCode_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    FunctionCode_descriptor(), enum_t_value);
}
inline bool FunctionCode_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, FunctionCode* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<FunctionCode>(
    FunctionCode_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Package
}  // namespace Proto

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Proto::Package::PackageType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Proto::Package::PackageType>() {
  return ::Proto::Package::PackageType_descriptor();
}
template <> struct is_proto_enum< ::Proto::Package::FunctionCode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Proto::Package::FunctionCode>() {
  return ::Proto::Package::FunctionCode_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_PackageHeadEnum_2eproto
