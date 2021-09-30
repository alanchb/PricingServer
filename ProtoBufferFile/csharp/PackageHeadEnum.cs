//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Option: missing-value detection (*Specified/ShouldSerialize*/Reset*) enabled
    
// Generated from: PackageHeadEnum.proto
namespace Proto.Package
{
    [global::ProtoBuf.ProtoContract(Name=@"PackageType")]
    public enum PackageType
    {
            
      [global::ProtoBuf.ProtoEnum(Name=@"Request", Value=1)]
      Request = 1,
            
      [global::ProtoBuf.ProtoEnum(Name=@"Reply", Value=2)]
      Reply = 2,
            
      [global::ProtoBuf.ProtoEnum(Name=@"AsnycRequest", Value=3)]
      AsnycRequest = 3,
            
      [global::ProtoBuf.ProtoEnum(Name=@"AsnycReply", Value=4)]
      AsnycReply = 4,
            
      [global::ProtoBuf.ProtoEnum(Name=@"PushMessage", Value=5)]
      PushMessage = 5
    }
  
    [global::ProtoBuf.ProtoContract(Name=@"FunctionCode")]
    public enum FunctionCode
    {
            
      [global::ProtoBuf.ProtoEnum(Name=@"PlaceOrder", Value=1)]
      PlaceOrder = 1,
            
      [global::ProtoBuf.ProtoEnum(Name=@"DeleteOrder", Value=2)]
      DeleteOrder = 2,
            
      [global::ProtoBuf.ProtoEnum(Name=@"DevPricing", Value=10)]
      DevPricing = 10,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryProjectInfo", Value=101)]
      QueryProjectInfo = 101,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryStockInfo", Value=102)]
      QueryStockInfo = 102,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryFutureInfo", Value=103)]
      QueryFutureInfo = 103,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryStockOrderInfo", Value=104)]
      QueryStockOrderInfo = 104,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryStockKnockInfo", Value=105)]
      QueryStockKnockInfo = 105,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryStockCancelInfo", Value=106)]
      QueryStockCancelInfo = 106,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryStockPositionInfo", Value=107)]
      QueryStockPositionInfo = 107,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryStockAccountInfo", Value=108)]
      QueryStockAccountInfo = 108,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryFutOrderInfo", Value=109)]
      QueryFutOrderInfo = 109,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryFutKnockInfo", Value=110)]
      QueryFutKnockInfo = 110,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryFutCancelInfo", Value=111)]
      QueryFutCancelInfo = 111,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryFutPositionInfo", Value=112)]
      QueryFutPositionInfo = 112,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryFutAccountInfo", Value=113)]
      QueryFutAccountInfo = 113,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryMiniteLineInfo", Value=114)]
      QueryMiniteLineInfo = 114,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryDayLineInfo", Value=115)]
      QueryDayLineInfo = 115,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryFutureMarginRateAndCommission", Value=116)]
      QueryFutureMarginRateAndCommission = 116,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryQtsProductNav", Value=117)]
      QueryQtsProductNav = 117,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryIndexComponentInfo", Value=118)]
      QueryIndexComponentInfo = 118,
            
      [global::ProtoBuf.ProtoEnum(Name=@"StockPreSettle", Value=119)]
      StockPreSettle = 119,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryStockPreSettleResult", Value=120)]
      QueryStockPreSettleResult = 120,
            
      [global::ProtoBuf.ProtoEnum(Name=@"StockReckonTradingLogImp", Value=121)]
      StockReckonTradingLogImp = 121,
            
      [global::ProtoBuf.ProtoEnum(Name=@"StockReckonAccountImp", Value=122)]
      StockReckonAccountImp = 122,
            
      [global::ProtoBuf.ProtoEnum(Name=@"StockReckonStklistImp", Value=123)]
      StockReckonStklistImp = 123,
            
      [global::ProtoBuf.ProtoEnum(Name=@"StockReckonAndResultReturn", Value=124)]
      StockReckonAndResultReturn = 124,
            
      [global::ProtoBuf.ProtoEnum(Name=@"ComputeProductNav", Value=125)]
      ComputeProductNav = 125,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryQuotationTicks", Value=126)]
      QueryQuotationTicks = 126,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc127", Value=127)]
      TestFunc127 = 127,
            
      [global::ProtoBuf.ProtoEnum(Name=@"GetSysInfo", Value=128)]
      GetSysInfo = 128,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryNeedStkInfo", Value=129)]
      QueryNeedStkInfo = 129,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryWhiteList", Value=130)]
      QueryWhiteList = 130,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryBlackList", Value=131)]
      QueryBlackList = 131,
            
      [global::ProtoBuf.ProtoEnum(Name=@"RefreshPrjPosition", Value=132)]
      RefreshPrjPosition = 132,
            
      [global::ProtoBuf.ProtoEnum(Name=@"OMSOptLogin", Value=133)]
      OMSOptLogin = 133,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryLOFInfo", Value=134)]
      QueryLOFInfo = 134,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryUnProcess", Value=135)]
      QueryUnProcess = 135,
            
      [global::ProtoBuf.ProtoEnum(Name=@"RestrictListMaintance", Value=136)]
      RestrictListMaintance = 136,
            
      [global::ProtoBuf.ProtoEnum(Name=@"RequestTradeInfo", Value=137)]
      RequestTradeInfo = 137,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryDayLineInfoFromCiccDC", Value=138)]
      QueryDayLineInfoFromCiccDC = 138,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryOptionInfo", Value=139)]
      QueryOptionInfo = 139,
            
      [global::ProtoBuf.ProtoEnum(Name=@"QueryFutureETFArbPara", Value=200)]
      QueryFutureETFArbPara = 200,
            
      [global::ProtoBuf.ProtoEnum(Name=@"PauseTrade", Value=500)]
      PauseTrade = 500,
            
      [global::ProtoBuf.ProtoEnum(Name=@"ContinueTrade", Value=501)]
      ContinueTrade = 501,
            
      [global::ProtoBuf.ProtoEnum(Name=@"SimuPara", Value=9000)]
      SimuPara = 9000,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16351", Value=16351)]
      TestFunc16351 = 16351,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16352", Value=16352)]
      TestFunc16352 = 16352,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16353", Value=16353)]
      TestFunc16353 = 16353,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16354", Value=16354)]
      TestFunc16354 = 16354,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16355", Value=16355)]
      TestFunc16355 = 16355,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16356", Value=16356)]
      TestFunc16356 = 16356,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16357", Value=16357)]
      TestFunc16357 = 16357,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16358", Value=16358)]
      TestFunc16358 = 16358,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16359", Value=16359)]
      TestFunc16359 = 16359,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16360", Value=16360)]
      TestFunc16360 = 16360,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16361", Value=16361)]
      TestFunc16361 = 16361,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16362", Value=16362)]
      TestFunc16362 = 16362,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16363", Value=16363)]
      TestFunc16363 = 16363,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16364", Value=16364)]
      TestFunc16364 = 16364,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16365", Value=16365)]
      TestFunc16365 = 16365,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16366", Value=16366)]
      TestFunc16366 = 16366,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16367", Value=16367)]
      TestFunc16367 = 16367,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16368", Value=16368)]
      TestFunc16368 = 16368,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16369", Value=16369)]
      TestFunc16369 = 16369,
            
      [global::ProtoBuf.ProtoEnum(Name=@"TestFunc16370", Value=16370)]
      TestFunc16370 = 16370
    }
  
}