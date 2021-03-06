//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Option: missing-value detection (*Specified/ShouldSerialize*/Reset*) enabled
    
// Generated from: ProtoDevPricing.proto
namespace Proto.DevPricing
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ProtoDevPricingReq")]
  public partial class ProtoDevPricingReq : global::ProtoBuf.IExtensible
  {
    public ProtoDevPricingReq() {}
    
    private Proto.DevPricing.EnumDevType _Dev_Type;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"Dev_Type", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public Proto.DevPricing.EnumDevType Dev_Type
    {
      get { return _Dev_Type; }
      set { _Dev_Type = value; }
    }
    private int _Year_Days;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"Year_Days", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int Year_Days
    {
      get { return _Year_Days; }
      set { _Year_Days = value; }
    }
    private int _Duration;
    [global::ProtoBuf.ProtoMember(3, IsRequired = true, Name=@"Duration", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int Duration
    {
      get { return _Duration; }
      set { _Duration = value; }
    }
    private double _Volatility;
    [global::ProtoBuf.ProtoMember(4, IsRequired = true, Name=@"Volatility", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double Volatility
    {
      get { return _Volatility; }
      set { _Volatility = value; }
    }
    private double _RiskFree_Rate;
    [global::ProtoBuf.ProtoMember(5, IsRequired = true, Name=@"RiskFree_Rate", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double RiskFree_Rate
    {
      get { return _RiskFree_Rate; }
      set { _RiskFree_Rate = value; }
    }
    private double? _Strike;
    [global::ProtoBuf.ProtoMember(6, IsRequired = false, Name=@"Strike", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double Strike
    {
      get { return _Strike?? default(double); }
      set { _Strike = value; }
    }
    [global::System.Xml.Serialization.XmlIgnore]
    [global::System.ComponentModel.Browsable(false)]
    public bool StrikeSpecified
    {
      get { return this._Strike != null; }
      set { if (value == (this._Strike== null)) this._Strike = value ? this.Strike : (double?)null; }
    }
    private bool ShouldSerializeStrike() { return StrikeSpecified; }
    private void ResetStrike() { StrikeSpecified = false; }
    
    private double? _S0;
    [global::ProtoBuf.ProtoMember(7, IsRequired = false, Name=@"S0", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double S0
    {
      get { return _S0?? default(double); }
      set { _S0 = value; }
    }
    [global::System.Xml.Serialization.XmlIgnore]
    [global::System.ComponentModel.Browsable(false)]
    public bool S0Specified
    {
      get { return this._S0 != null; }
      set { if (value == (this._S0== null)) this._S0 = value ? this.S0 : (double?)null; }
    }
    private bool ShouldSerializeS0() { return S0Specified; }
    private void ResetS0() { S0Specified = false; }
    
    private double? _S1;
    [global::ProtoBuf.ProtoMember(8, IsRequired = false, Name=@"S1", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double S1
    {
      get { return _S1?? default(double); }
      set { _S1 = value; }
    }
    [global::System.Xml.Serialization.XmlIgnore]
    [global::System.ComponentModel.Browsable(false)]
    public bool S1Specified
    {
      get { return this._S1 != null; }
      set { if (value == (this._S1== null)) this._S1 = value ? this.S1 : (double?)null; }
    }
    private bool ShouldSerializeS1() { return S1Specified; }
    private void ResetS1() { S1Specified = false; }
    
    private double? _Expected_Ret;
    [global::ProtoBuf.ProtoMember(9, IsRequired = false, Name=@"Expected_Ret", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double Expected_Ret
    {
      get { return _Expected_Ret?? default(double); }
      set { _Expected_Ret = value; }
    }
    [global::System.Xml.Serialization.XmlIgnore]
    [global::System.ComponentModel.Browsable(false)]
    public bool Expected_RetSpecified
    {
      get { return this._Expected_Ret != null; }
      set { if (value == (this._Expected_Ret== null)) this._Expected_Ret = value ? this.Expected_Ret : (double?)null; }
    }
    private bool ShouldSerializeExpected_Ret() { return Expected_RetSpecified; }
    private void ResetExpected_Ret() { Expected_RetSpecified = false; }
    
    private double? _KnockOut_Ratio;
    [global::ProtoBuf.ProtoMember(10, IsRequired = false, Name=@"KnockOut_Ratio", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double KnockOut_Ratio
    {
      get { return _KnockOut_Ratio?? default(double); }
      set { _KnockOut_Ratio = value; }
    }
    [global::System.Xml.Serialization.XmlIgnore]
    [global::System.ComponentModel.Browsable(false)]
    public bool KnockOut_RatioSpecified
    {
      get { return this._KnockOut_Ratio != null; }
      set { if (value == (this._KnockOut_Ratio== null)) this._KnockOut_Ratio = value ? this.KnockOut_Ratio : (double?)null; }
    }
    private bool ShouldSerializeKnockOut_Ratio() { return KnockOut_RatioSpecified; }
    private void ResetKnockOut_Ratio() { KnockOut_RatioSpecified = false; }
    
    private double? _KnockOut_Ratio2;
    [global::ProtoBuf.ProtoMember(11, IsRequired = false, Name=@"KnockOut_Ratio2", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double KnockOut_Ratio2
    {
      get { return _KnockOut_Ratio2?? default(double); }
      set { _KnockOut_Ratio2 = value; }
    }
    [global::System.Xml.Serialization.XmlIgnore]
    [global::System.ComponentModel.Browsable(false)]
    public bool KnockOut_Ratio2Specified
    {
      get { return this._KnockOut_Ratio2 != null; }
      set { if (value == (this._KnockOut_Ratio2== null)) this._KnockOut_Ratio2 = value ? this.KnockOut_Ratio2 : (double?)null; }
    }
    private bool ShouldSerializeKnockOut_Ratio2() { return KnockOut_Ratio2Specified; }
    private void ResetKnockOut_Ratio2() { KnockOut_Ratio2Specified = false; }
    
    private double? _KnockIn_Ratio;
    [global::ProtoBuf.ProtoMember(12, IsRequired = false, Name=@"KnockIn_Ratio", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double KnockIn_Ratio
    {
      get { return _KnockIn_Ratio?? default(double); }
      set { _KnockIn_Ratio = value; }
    }
    [global::System.Xml.Serialization.XmlIgnore]
    [global::System.ComponentModel.Browsable(false)]
    public bool KnockIn_RatioSpecified
    {
      get { return this._KnockIn_Ratio != null; }
      set { if (value == (this._KnockIn_Ratio== null)) this._KnockIn_Ratio = value ? this.KnockIn_Ratio : (double?)null; }
    }
    private bool ShouldSerializeKnockIn_Ratio() { return KnockIn_RatioSpecified; }
    private void ResetKnockIn_Ratio() { KnockIn_RatioSpecified = false; }
    
    private double? _KnockOut_Return;
    [global::ProtoBuf.ProtoMember(13, IsRequired = false, Name=@"KnockOut_Return", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double KnockOut_Return
    {
      get { return _KnockOut_Return?? default(double); }
      set { _KnockOut_Return = value; }
    }
    [global::System.Xml.Serialization.XmlIgnore]
    [global::System.ComponentModel.Browsable(false)]
    public bool KnockOut_ReturnSpecified
    {
      get { return this._KnockOut_Return != null; }
      set { if (value == (this._KnockOut_Return== null)) this._KnockOut_Return = value ? this.KnockOut_Return : (double?)null; }
    }
    private bool ShouldSerializeKnockOut_Return() { return KnockOut_ReturnSpecified; }
    private void ResetKnockOut_Return() { KnockOut_ReturnSpecified = false; }
    
    private int? _Start_Obsv_Date;
    [global::ProtoBuf.ProtoMember(14, IsRequired = false, Name=@"Start_Obsv_Date", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int Start_Obsv_Date
    {
      get { return _Start_Obsv_Date?? default(int); }
      set { _Start_Obsv_Date = value; }
    }
    [global::System.Xml.Serialization.XmlIgnore]
    [global::System.ComponentModel.Browsable(false)]
    public bool Start_Obsv_DateSpecified
    {
      get { return this._Start_Obsv_Date != null; }
      set { if (value == (this._Start_Obsv_Date== null)) this._Start_Obsv_Date = value ? this.Start_Obsv_Date : (int?)null; }
    }
    private bool ShouldSerializeStart_Obsv_Date() { return Start_Obsv_DateSpecified; }
    private void ResetStart_Obsv_Date() { Start_Obsv_DateSpecified = false; }
    
    private int? _MC_Samples;
    [global::ProtoBuf.ProtoMember(15, IsRequired = false, Name=@"MC_Samples", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int MC_Samples
    {
      get { return _MC_Samples?? default(int); }
      set { _MC_Samples = value; }
    }
    [global::System.Xml.Serialization.XmlIgnore]
    [global::System.ComponentModel.Browsable(false)]
    public bool MC_SamplesSpecified
    {
      get { return this._MC_Samples != null; }
      set { if (value == (this._MC_Samples== null)) this._MC_Samples = value ? this.MC_Samples : (int?)null; }
    }
    private bool ShouldSerializeMC_Samples() { return MC_SamplesSpecified; }
    private void ResetMC_Samples() { MC_SamplesSpecified = false; }
    
    private bool? _IS_KnockIn;
    [global::ProtoBuf.ProtoMember(16, IsRequired = false, Name=@"IS_KnockIn", DataFormat = global::ProtoBuf.DataFormat.Default)]
    public bool IS_KnockIn
    {
      get { return _IS_KnockIn?? (bool)false; }
      set { _IS_KnockIn = value; }
    }
    [global::System.Xml.Serialization.XmlIgnore]
    [global::System.ComponentModel.Browsable(false)]
    public bool IS_KnockInSpecified
    {
      get { return this._IS_KnockIn != null; }
      set { if (value == (this._IS_KnockIn== null)) this._IS_KnockIn = value ? this.IS_KnockIn : (bool?)null; }
    }
    private bool ShouldSerializeIS_KnockIn() { return IS_KnockInSpecified; }
    private void ResetIS_KnockIn() { IS_KnockInSpecified = false; }
    
    private double? _Barrier;
    [global::ProtoBuf.ProtoMember(17, IsRequired = false, Name=@"Barrier", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double Barrier
    {
      get { return _Barrier?? default(double); }
      set { _Barrier = value; }
    }
    [global::System.Xml.Serialization.XmlIgnore]
    [global::System.ComponentModel.Browsable(false)]
    public bool BarrierSpecified
    {
      get { return this._Barrier != null; }
      set { if (value == (this._Barrier== null)) this._Barrier = value ? this.Barrier : (double?)null; }
    }
    private bool ShouldSerializeBarrier() { return BarrierSpecified; }
    private void ResetBarrier() { BarrierSpecified = false; }
    
    private Proto.DevPricing.EnumBarrierType? _Barrier_Type;
    [global::ProtoBuf.ProtoMember(18, IsRequired = false, Name=@"Barrier_Type", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public Proto.DevPricing.EnumBarrierType Barrier_Type
    {
      get { return _Barrier_Type?? Proto.DevPricing.EnumBarrierType.CUO; }
      set { _Barrier_Type = value; }
    }
    [global::System.Xml.Serialization.XmlIgnore]
    [global::System.ComponentModel.Browsable(false)]
    public bool Barrier_TypeSpecified
    {
      get { return this._Barrier_Type != null; }
      set { if (value == (this._Barrier_Type== null)) this._Barrier_Type = value ? this.Barrier_Type : (Proto.DevPricing.EnumBarrierType?)null; }
    }
    private bool ShouldSerializeBarrier_Type() { return Barrier_TypeSpecified; }
    private void ResetBarrier_Type() { Barrier_TypeSpecified = false; }
    
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"ProtoDevPricingRsp")]
  public partial class ProtoDevPricingRsp : global::ProtoBuf.IExtensible
  {
    public ProtoDevPricingRsp() {}
    
    private Proto.DevPricing.EnumDevType _Dev_Type;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"Dev_Type", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public Proto.DevPricing.EnumDevType Dev_Type
    {
      get { return _Dev_Type; }
      set { _Dev_Type = value; }
    }
    private double _Value;
    [global::ProtoBuf.ProtoMember(2, IsRequired = true, Name=@"Value", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double Value
    {
      get { return _Value; }
      set { _Value = value; }
    }
    private double? _Value_Max;
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"Value_Max", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double Value_Max
    {
      get { return _Value_Max?? default(double); }
      set { _Value_Max = value; }
    }
    [global::System.Xml.Serialization.XmlIgnore]
    [global::System.ComponentModel.Browsable(false)]
    public bool Value_MaxSpecified
    {
      get { return this._Value_Max != null; }
      set { if (value == (this._Value_Max== null)) this._Value_Max = value ? this.Value_Max : (double?)null; }
    }
    private bool ShouldSerializeValue_Max() { return Value_MaxSpecified; }
    private void ResetValue_Max() { Value_MaxSpecified = false; }
    
    private double? _Value_Min;
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"Value_Min", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double Value_Min
    {
      get { return _Value_Min?? default(double); }
      set { _Value_Min = value; }
    }
    [global::System.Xml.Serialization.XmlIgnore]
    [global::System.ComponentModel.Browsable(false)]
    public bool Value_MinSpecified
    {
      get { return this._Value_Min != null; }
      set { if (value == (this._Value_Min== null)) this._Value_Min = value ? this.Value_Min : (double?)null; }
    }
    private bool ShouldSerializeValue_Min() { return Value_MinSpecified; }
    private void ResetValue_Min() { Value_MinSpecified = false; }
    
    private double? _Avg_Knockout_Month;
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"Avg_Knockout_Month", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public double Avg_Knockout_Month
    {
      get { return _Avg_Knockout_Month?? default(double); }
      set { _Avg_Knockout_Month = value; }
    }
    [global::System.Xml.Serialization.XmlIgnore]
    [global::System.ComponentModel.Browsable(false)]
    public bool Avg_Knockout_MonthSpecified
    {
      get { return this._Avg_Knockout_Month != null; }
      set { if (value == (this._Avg_Knockout_Month== null)) this._Avg_Knockout_Month = value ? this.Avg_Knockout_Month : (double?)null; }
    }
    private bool ShouldSerializeAvg_Knockout_Month() { return Avg_Knockout_MonthSpecified; }
    private void ResetAvg_Knockout_Month() { Avg_Knockout_MonthSpecified = false; }
    
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
    [global::ProtoBuf.ProtoContract(Name=@"EnumDevType")]
    public enum EnumDevType
    {
            
      [global::ProtoBuf.ProtoEnum(Name=@"Vanilla", Value=0)]
      Vanilla = 0,
            
      [global::ProtoBuf.ProtoEnum(Name=@"Sharkfin", Value=1)]
      Sharkfin = 1,
            
      [global::ProtoBuf.ProtoEnum(Name=@"Sharkfin2", Value=2)]
      Sharkfin2 = 2,
            
      [global::ProtoBuf.ProtoEnum(Name=@"Barrier", Value=3)]
      Barrier = 3,
            
      [global::ProtoBuf.ProtoEnum(Name=@"SnowBall", Value=10)]
      SnowBall = 10
    }
  
    [global::ProtoBuf.ProtoContract(Name=@"EnumBarrierType")]
    public enum EnumBarrierType
    {
            
      [global::ProtoBuf.ProtoEnum(Name=@"CUO", Value=0)]
      CUO = 0,
            
      [global::ProtoBuf.ProtoEnum(Name=@"CUI", Value=1)]
      CUI = 1,
            
      [global::ProtoBuf.ProtoEnum(Name=@"CDO", Value=2)]
      CDO = 2,
            
      [global::ProtoBuf.ProtoEnum(Name=@"CDI", Value=3)]
      CDI = 3,
            
      [global::ProtoBuf.ProtoEnum(Name=@"PUO", Value=4)]
      PUO = 4,
            
      [global::ProtoBuf.ProtoEnum(Name=@"PUI", Value=5)]
      PUI = 5,
            
      [global::ProtoBuf.ProtoEnum(Name=@"PDO", Value=6)]
      PDO = 6,
            
      [global::ProtoBuf.ProtoEnum(Name=@"PDI", Value=7)]
      PDI = 7
    }
  
}