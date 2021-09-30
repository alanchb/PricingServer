# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: PackageHeadEnum.proto
"""Generated protocol buffer code."""
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='PackageHeadEnum.proto',
  package='Proto.Package',
  syntax='proto2',
  serialized_options=b'\n\017com.cc.protobufB\020PackageHeadEnums',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\x15PackageHeadEnum.proto\x12\rProto.Package*X\n\x0bPackageType\x12\x0b\n\x07Request\x10\x01\x12\t\n\x05Reply\x10\x02\x12\x10\n\x0c\x41snycRequest\x10\x03\x12\x0e\n\nAsnycReply\x10\x04\x12\x0f\n\x0bPushMessage\x10\x05*\xdd\x0b\n\x0c\x46unctionCode\x12\x0e\n\nPlaceOrder\x10\x01\x12\x0f\n\x0b\x44\x65leteOrder\x10\x02\x12\x0e\n\nDevPricing\x10\n\x12\x14\n\x10QueryProjectInfo\x10\x65\x12\x12\n\x0eQueryStockInfo\x10\x66\x12\x13\n\x0fQueryFutureInfo\x10g\x12\x17\n\x13QueryStockOrderInfo\x10h\x12\x17\n\x13QueryStockKnockInfo\x10i\x12\x18\n\x14QueryStockCancelInfo\x10j\x12\x1a\n\x16QueryStockPositionInfo\x10k\x12\x19\n\x15QueryStockAccountInfo\x10l\x12\x15\n\x11QueryFutOrderInfo\x10m\x12\x15\n\x11QueryFutKnockInfo\x10n\x12\x16\n\x12QueryFutCancelInfo\x10o\x12\x18\n\x14QueryFutPositionInfo\x10p\x12\x17\n\x13QueryFutAccountInfo\x10q\x12\x17\n\x13QueryMiniteLineInfo\x10r\x12\x14\n\x10QueryDayLineInfo\x10s\x12&\n\"QueryFutureMarginRateAndCommission\x10t\x12\x16\n\x12QueryQtsProductNav\x10u\x12\x1b\n\x17QueryIndexComponentInfo\x10v\x12\x12\n\x0eStockPreSettle\x10w\x12\x1d\n\x19QueryStockPreSettleResult\x10x\x12\x1c\n\x18StockReckonTradingLogImp\x10y\x12\x19\n\x15StockReckonAccountImp\x10z\x12\x19\n\x15StockReckonStklistImp\x10{\x12\x1e\n\x1aStockReckonAndResultReturn\x10|\x12\x15\n\x11\x43omputeProductNav\x10}\x12\x17\n\x13QueryQuotationTicks\x10~\x12\x0f\n\x0bTestFunc127\x10\x7f\x12\x0f\n\nGetSysInfo\x10\x80\x01\x12\x15\n\x10QueryNeedStkInfo\x10\x81\x01\x12\x13\n\x0eQueryWhiteList\x10\x82\x01\x12\x13\n\x0eQueryBlackList\x10\x83\x01\x12\x17\n\x12RefreshPrjPosition\x10\x84\x01\x12\x10\n\x0bOMSOptLogin\x10\x85\x01\x12\x11\n\x0cQueryLOFInfo\x10\x86\x01\x12\x13\n\x0eQueryUnProcess\x10\x87\x01\x12\x1a\n\x15RestrictListMaintance\x10\x88\x01\x12\x15\n\x10RequestTradeInfo\x10\x89\x01\x12\x1f\n\x1aQueryDayLineInfoFromCiccDC\x10\x8a\x01\x12\x14\n\x0fQueryOptionInfo\x10\x8b\x01\x12\x1a\n\x15QueryFutureETFArbPara\x10\xc8\x01\x12\x0f\n\nPauseTrade\x10\xf4\x03\x12\x12\n\rContinueTrade\x10\xf5\x03\x12\r\n\x08SimuPara\x10\xa8\x46\x12\x12\n\rTestFunc16351\x10\xdf\x7f\x12\x12\n\rTestFunc16352\x10\xe0\x7f\x12\x12\n\rTestFunc16353\x10\xe1\x7f\x12\x12\n\rTestFunc16354\x10\xe2\x7f\x12\x12\n\rTestFunc16355\x10\xe3\x7f\x12\x12\n\rTestFunc16356\x10\xe4\x7f\x12\x12\n\rTestFunc16357\x10\xe5\x7f\x12\x12\n\rTestFunc16358\x10\xe6\x7f\x12\x12\n\rTestFunc16359\x10\xe7\x7f\x12\x12\n\rTestFunc16360\x10\xe8\x7f\x12\x12\n\rTestFunc16361\x10\xe9\x7f\x12\x12\n\rTestFunc16362\x10\xea\x7f\x12\x12\n\rTestFunc16363\x10\xeb\x7f\x12\x12\n\rTestFunc16364\x10\xec\x7f\x12\x12\n\rTestFunc16365\x10\xed\x7f\x12\x12\n\rTestFunc16366\x10\xee\x7f\x12\x12\n\rTestFunc16367\x10\xef\x7f\x12\x12\n\rTestFunc16368\x10\xf0\x7f\x12\x12\n\rTestFunc16369\x10\xf1\x7f\x12\x12\n\rTestFunc16370\x10\xf2\x7f\x42#\n\x0f\x63om.cc.protobufB\x10PackageHeadEnums'
)

_PACKAGETYPE = _descriptor.EnumDescriptor(
  name='PackageType',
  full_name='Proto.Package.PackageType',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='Request', index=0, number=1,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='Reply', index=1, number=2,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='AsnycRequest', index=2, number=3,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='AsnycReply', index=3, number=4,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='PushMessage', index=4, number=5,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=40,
  serialized_end=128,
)
_sym_db.RegisterEnumDescriptor(_PACKAGETYPE)

PackageType = enum_type_wrapper.EnumTypeWrapper(_PACKAGETYPE)
_FUNCTIONCODE = _descriptor.EnumDescriptor(
  name='FunctionCode',
  full_name='Proto.Package.FunctionCode',
  filename=None,
  file=DESCRIPTOR,
  create_key=_descriptor._internal_create_key,
  values=[
    _descriptor.EnumValueDescriptor(
      name='PlaceOrder', index=0, number=1,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='DeleteOrder', index=1, number=2,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='DevPricing', index=2, number=10,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryProjectInfo', index=3, number=101,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryStockInfo', index=4, number=102,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryFutureInfo', index=5, number=103,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryStockOrderInfo', index=6, number=104,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryStockKnockInfo', index=7, number=105,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryStockCancelInfo', index=8, number=106,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryStockPositionInfo', index=9, number=107,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryStockAccountInfo', index=10, number=108,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryFutOrderInfo', index=11, number=109,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryFutKnockInfo', index=12, number=110,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryFutCancelInfo', index=13, number=111,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryFutPositionInfo', index=14, number=112,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryFutAccountInfo', index=15, number=113,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryMiniteLineInfo', index=16, number=114,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryDayLineInfo', index=17, number=115,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryFutureMarginRateAndCommission', index=18, number=116,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryQtsProductNav', index=19, number=117,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryIndexComponentInfo', index=20, number=118,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='StockPreSettle', index=21, number=119,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryStockPreSettleResult', index=22, number=120,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='StockReckonTradingLogImp', index=23, number=121,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='StockReckonAccountImp', index=24, number=122,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='StockReckonStklistImp', index=25, number=123,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='StockReckonAndResultReturn', index=26, number=124,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='ComputeProductNav', index=27, number=125,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryQuotationTicks', index=28, number=126,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc127', index=29, number=127,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='GetSysInfo', index=30, number=128,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryNeedStkInfo', index=31, number=129,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryWhiteList', index=32, number=130,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryBlackList', index=33, number=131,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='RefreshPrjPosition', index=34, number=132,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='OMSOptLogin', index=35, number=133,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryLOFInfo', index=36, number=134,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryUnProcess', index=37, number=135,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='RestrictListMaintance', index=38, number=136,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='RequestTradeInfo', index=39, number=137,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryDayLineInfoFromCiccDC', index=40, number=138,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryOptionInfo', index=41, number=139,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='QueryFutureETFArbPara', index=42, number=200,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='PauseTrade', index=43, number=500,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='ContinueTrade', index=44, number=501,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='SimuPara', index=45, number=9000,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16351', index=46, number=16351,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16352', index=47, number=16352,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16353', index=48, number=16353,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16354', index=49, number=16354,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16355', index=50, number=16355,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16356', index=51, number=16356,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16357', index=52, number=16357,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16358', index=53, number=16358,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16359', index=54, number=16359,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16360', index=55, number=16360,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16361', index=56, number=16361,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16362', index=57, number=16362,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16363', index=58, number=16363,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16364', index=59, number=16364,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16365', index=60, number=16365,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16366', index=61, number=16366,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16367', index=62, number=16367,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16368', index=63, number=16368,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16369', index=64, number=16369,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
    _descriptor.EnumValueDescriptor(
      name='TestFunc16370', index=65, number=16370,
      serialized_options=None,
      type=None,
      create_key=_descriptor._internal_create_key),
  ],
  containing_type=None,
  serialized_options=None,
  serialized_start=131,
  serialized_end=1632,
)
_sym_db.RegisterEnumDescriptor(_FUNCTIONCODE)

FunctionCode = enum_type_wrapper.EnumTypeWrapper(_FUNCTIONCODE)
Request = 1
Reply = 2
AsnycRequest = 3
AsnycReply = 4
PushMessage = 5
PlaceOrder = 1
DeleteOrder = 2
DevPricing = 10
QueryProjectInfo = 101
QueryStockInfo = 102
QueryFutureInfo = 103
QueryStockOrderInfo = 104
QueryStockKnockInfo = 105
QueryStockCancelInfo = 106
QueryStockPositionInfo = 107
QueryStockAccountInfo = 108
QueryFutOrderInfo = 109
QueryFutKnockInfo = 110
QueryFutCancelInfo = 111
QueryFutPositionInfo = 112
QueryFutAccountInfo = 113
QueryMiniteLineInfo = 114
QueryDayLineInfo = 115
QueryFutureMarginRateAndCommission = 116
QueryQtsProductNav = 117
QueryIndexComponentInfo = 118
StockPreSettle = 119
QueryStockPreSettleResult = 120
StockReckonTradingLogImp = 121
StockReckonAccountImp = 122
StockReckonStklistImp = 123
StockReckonAndResultReturn = 124
ComputeProductNav = 125
QueryQuotationTicks = 126
TestFunc127 = 127
GetSysInfo = 128
QueryNeedStkInfo = 129
QueryWhiteList = 130
QueryBlackList = 131
RefreshPrjPosition = 132
OMSOptLogin = 133
QueryLOFInfo = 134
QueryUnProcess = 135
RestrictListMaintance = 136
RequestTradeInfo = 137
QueryDayLineInfoFromCiccDC = 138
QueryOptionInfo = 139
QueryFutureETFArbPara = 200
PauseTrade = 500
ContinueTrade = 501
SimuPara = 9000
TestFunc16351 = 16351
TestFunc16352 = 16352
TestFunc16353 = 16353
TestFunc16354 = 16354
TestFunc16355 = 16355
TestFunc16356 = 16356
TestFunc16357 = 16357
TestFunc16358 = 16358
TestFunc16359 = 16359
TestFunc16360 = 16360
TestFunc16361 = 16361
TestFunc16362 = 16362
TestFunc16363 = 16363
TestFunc16364 = 16364
TestFunc16365 = 16365
TestFunc16366 = 16366
TestFunc16367 = 16367
TestFunc16368 = 16368
TestFunc16369 = 16369
TestFunc16370 = 16370


DESCRIPTOR.enum_types_by_name['PackageType'] = _PACKAGETYPE
DESCRIPTOR.enum_types_by_name['FunctionCode'] = _FUNCTIONCODE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)