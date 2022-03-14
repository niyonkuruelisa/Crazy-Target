#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<Unity.VisualScripting.Dependencies.NCalc.LogicalExpression>
struct List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression[]
struct LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.VisualScripting.Dependencies.NCalc.BinaryExpression
struct BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree
struct CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1;
// Unity.VisualScripting.Dependencies.NCalc.EvaluationException
struct EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// Unity.VisualScripting.Dependencies.NCalc.FunctionExpression
struct FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// Unity.VisualScripting.Antlr3.Runtime.IToken
struct IToken_t620DE9D086BA75DE074EF126922C24743D268A42;
// Unity.VisualScripting.Dependencies.NCalc.IdentifierExpression
struct IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression
struct LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor
struct LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// Unity.VisualScripting.Dependencies.NCalc.ParameterArgs
struct ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957;
// Unity.VisualScripting.Antlr3.Runtime.ParserRuleReturnScope
struct ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor
struct SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Unity.VisualScripting.Dependencies.NCalc.TernaryExpression
struct TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC;
// System.Type
struct Type_t;
// Unity.VisualScripting.Dependencies.NCalc.UnaryExpression
struct UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E;
// Unity.VisualScripting.Dependencies.NCalc.ValueExpression
struct ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/additiveExpression_return
struct additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/arguments_return
struct arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseAndExpression_return
struct bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseOrExpression_return
struct bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseXOrExpression_return
struct bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/booleanAndExpression_return
struct booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/conditionalExpression_return
struct conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/equalityExpression_return
struct equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/expressionList_return
struct expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/identifier_return
struct identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/logicalExpression_return
struct logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/multiplicativeExpression_return
struct multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/ncalcExpression_return
struct ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/primaryExpression_return
struct primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/relationalExpression_return
struct relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/shiftExpression_return
struct shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/unaryExpression_return
struct unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64;
// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/value_return
struct value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3;
IL2CPP_EXTERN_C String_t* _stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46;
IL2CPP_EXTERN_C String_t* _stringLiteral15FB8A04339464F72B79BAF171F17EF1E153CA52;
IL2CPP_EXTERN_C String_t* _stringLiteral1B1EB7B676D45EEA70B706E25988B5A063563F3D;
IL2CPP_EXTERN_C String_t* _stringLiteral1B9D3CF4697EAF2BF914545D4E803CF9FCA58F66;
IL2CPP_EXTERN_C String_t* _stringLiteral210A6A07AB8F66B3554669378F6148D2C7F62920;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2FDB12CAF040DE0941DCA5DA173D724FBE249CE3;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral4809E30105820D7F0D6338C0181D9A191EAE18E2;
IL2CPP_EXTERN_C String_t* _stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922;
IL2CPP_EXTERN_C String_t* _stringLiteral51A0BD638EC24062E1BB5CBBDC0CEBB6BFB167A5;
IL2CPP_EXTERN_C String_t* _stringLiteral64DDEE858A91B7DDB44761D703E5A2FD737BCAA9;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral88DE3AE5D1539B4DC69F188BF0BA71D156A2A987;
IL2CPP_EXTERN_C String_t* _stringLiteral8F89784DF2CB8ABD4A4F34F5A767DF3253A9AAFE;
IL2CPP_EXTERN_C String_t* _stringLiteral9452A87FAA0073A5238C5BF8FBCAE0BFB2A7512D;
IL2CPP_EXTERN_C String_t* _stringLiteral9624DEBBCD14C2B589D0526FE720B99449CA1D13;
IL2CPP_EXTERN_C String_t* _stringLiteral9B2D833B107F93D5FC776077FE8509021DCC803E;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralAC47381A312D0BE38226537F85448FFF2264564C;
IL2CPP_EXTERN_C String_t* _stringLiteralADB95DDF09353FBDD17E9890451F2F88C7F3AF20;
IL2CPP_EXTERN_C String_t* _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924;
IL2CPP_EXTERN_C String_t* _stringLiteralC8FB3AADE865E6D34A8377CFB1E0D3ADC4040BDC;
IL2CPP_EXTERN_C String_t* _stringLiteralCDF1B8C01FE1D4D3E80FBCE3178BE0FA050AC8D9;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralE0CFF3BC021C7A77F8C1BAFB2D406397F52AD882;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF4DEFACDDC6EDC45049E58865E8CC7A05C7AEA5B;
IL2CPP_EXTERN_C String_t* _stringLiteralFC920BF5B48C73F1A2C760180F624A2192ADDA32;
IL2CPP_EXTERN_C const RuntimeMethod* ValueExpression__ctor_mACD41125FFF375D20F709F1B2CB4B0002A8D2C97_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t32B9240F30447D9E5C4951749F43B17B2E485B9D  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree
struct BaseTree_t93C88620BBC74C7117CD89A87723D83057772909  : public RuntimeObject
{
	// System.Collections.IList Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::children
	RuntimeObject* ___children_0;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression
struct LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465  : public RuntimeObject
{
};

// Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor
struct LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope
struct RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree
struct CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1  : public BaseTree_t93C88620BBC74C7117CD89A87723D83057772909
{
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::startIndex
	int32_t ___startIndex_1;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::stopIndex
	int32_t ___stopIndex_2;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::token
	RuntimeObject* ___token_3;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::parent
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___parent_4;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::childIndex
	int32_t ___childIndex_5;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// Unity.VisualScripting.Dependencies.NCalc.FunctionExpression
struct FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD  : public LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465
{
	// Unity.VisualScripting.Dependencies.NCalc.IdentifierExpression Unity.VisualScripting.Dependencies.NCalc.FunctionExpression::<Identifier>k__BackingField
	IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* ___U3CIdentifierU3Ek__BackingField_1;
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression[] Unity.VisualScripting.Dependencies.NCalc.FunctionExpression::<Expressions>k__BackingField
	LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* ___U3CExpressionsU3Ek__BackingField_2;
};

// Unity.VisualScripting.Dependencies.NCalc.IdentifierExpression
struct IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1  : public LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465
{
	// System.String Unity.VisualScripting.Dependencies.NCalc.IdentifierExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Unity.VisualScripting.Dependencies.NCalc.ParameterArgs
struct ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Object Unity.VisualScripting.Dependencies.NCalc.ParameterArgs::_result
	RuntimeObject* ____result_1;
	// System.Boolean Unity.VisualScripting.Dependencies.NCalc.ParameterArgs::<HasResult>k__BackingField
	bool ___U3CHasResultU3Ek__BackingField_2;
};

// Unity.VisualScripting.Antlr3.Runtime.ParserRuleReturnScope
struct ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035  : public RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2
{
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ParserRuleReturnScope::start
	RuntimeObject* ___start_0;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.ParserRuleReturnScope::stop
	RuntimeObject* ___stop_1;
};

// Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor
struct SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58  : public LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2
{
	// System.Globalization.NumberFormatInfo Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::_numberFormatInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ____numberFormatInfo_0;
	// System.Text.StringBuilder Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::<Result>k__BackingField
	StringBuilder_t* ___U3CResultU3Ek__BackingField_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// Unity.VisualScripting.Dependencies.NCalc.TernaryExpression
struct TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC  : public LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::<LeftExpression>k__BackingField
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___U3CLeftExpressionU3Ek__BackingField_1;
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::<MiddleExpression>k__BackingField
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___U3CMiddleExpressionU3Ek__BackingField_2;
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::<RightExpression>k__BackingField
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___U3CRightExpressionU3Ek__BackingField_3;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Unity.VisualScripting.Dependencies.NCalc.BinaryExpressionType
struct BinaryExpressionType_t5C88EAB828EEECE90F6F0E6955A8FF90F495694F 
{
	// System.Int32 Unity.VisualScripting.Dependencies.NCalc.BinaryExpressionType::value__
	int32_t ___value___2;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Globalization.NumberStyles
struct NumberStyles_t567C6CBC2A2B5B5A2C43B2855D158949984A810C 
{
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.TypeCode
struct TypeCode_tBEF9BE86C8BCF5A6B82F3381219738D27804EF79 
{
	// System.Int32 System.TypeCode::value__
	int32_t ___value___2;
};

// Unity.VisualScripting.Dependencies.NCalc.UnaryExpressionType
struct UnaryExpressionType_t829138CDF61258D25BBCA73BDE47A77444E3C0BA 
{
	// System.Int32 Unity.VisualScripting.Dependencies.NCalc.UnaryExpressionType::value__
	int32_t ___value___2;
};

// Unity.VisualScripting.Dependencies.NCalc.ValueType
struct ValueType_t3A8A944212A8E6FE5F8D48C84370521F50FD68B6 
{
	// System.Int32 Unity.VisualScripting.Dependencies.NCalc.ValueType::value__
	int32_t ___value___2;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/additiveExpression_return
struct additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/additiveExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/additiveExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/arguments_return
struct arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// System.Collections.Generic.List`1<Unity.VisualScripting.Dependencies.NCalc.LogicalExpression> Unity.VisualScripting.Dependencies.NCalc.NCalcParser/arguments_return::value
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/arguments_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseAndExpression_return
struct bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseAndExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseAndExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseOrExpression_return
struct bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseOrExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseOrExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseXOrExpression_return
struct bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseXOrExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseXOrExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/booleanAndExpression_return
struct booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/booleanAndExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/booleanAndExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/conditionalExpression_return
struct conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/conditionalExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/conditionalExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/equalityExpression_return
struct equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/equalityExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/equalityExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/expressionList_return
struct expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// System.Collections.Generic.List`1<Unity.VisualScripting.Dependencies.NCalc.LogicalExpression> Unity.VisualScripting.Dependencies.NCalc.NCalcParser/expressionList_return::value
	List_1_tDCCE5145C732F307DAE1184C70E9943DDF498ABF* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/expressionList_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/identifier_return
struct identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.IdentifierExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/identifier_return::value
	IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/identifier_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/logicalExpression_return
struct logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/logicalExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/logicalExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/multiplicativeExpression_return
struct multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/multiplicativeExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/multiplicativeExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/ncalcExpression_return
struct ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/ncalcExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/ncalcExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/primaryExpression_return
struct primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/primaryExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/primaryExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/relationalExpression_return
struct relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/relationalExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/relationalExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/shiftExpression_return
struct shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/shiftExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/shiftExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/unaryExpression_return
struct unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/unaryExpression_return::value
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/unaryExpression_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// Unity.VisualScripting.Dependencies.NCalc.NCalcParser/value_return
struct value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA  : public ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035
{
	// Unity.VisualScripting.Dependencies.NCalc.ValueExpression Unity.VisualScripting.Dependencies.NCalc.NCalcParser/value_return::value
	ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* ___value_2;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree Unity.VisualScripting.Dependencies.NCalc.NCalcParser/value_return::tree
	CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* ___tree_3;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// Unity.VisualScripting.Dependencies.NCalc.BinaryExpression
struct BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B  : public LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.BinaryExpression::<LeftExpression>k__BackingField
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___U3CLeftExpressionU3Ek__BackingField_1;
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.BinaryExpression::<RightExpression>k__BackingField
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___U3CRightExpressionU3Ek__BackingField_2;
	// Unity.VisualScripting.Dependencies.NCalc.BinaryExpressionType Unity.VisualScripting.Dependencies.NCalc.BinaryExpression::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_3;
};

// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;
};

struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo_0;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Unity.VisualScripting.Dependencies.NCalc.UnaryExpression
struct UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E  : public LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465
{
	// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::<Expression>k__BackingField
	LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___U3CExpressionU3Ek__BackingField_1;
	// Unity.VisualScripting.Dependencies.NCalc.UnaryExpressionType Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_2;
};

// Unity.VisualScripting.Dependencies.NCalc.ValueExpression
struct ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7  : public LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465
{
	// System.Object Unity.VisualScripting.Dependencies.NCalc.ValueExpression::<Value>k__BackingField
	RuntimeObject* ___U3CValueU3Ek__BackingField_1;
	// Unity.VisualScripting.Dependencies.NCalc.ValueType Unity.VisualScripting.Dependencies.NCalc.ValueExpression::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_2;
};

// Unity.VisualScripting.Dependencies.NCalc.EvaluationException
struct EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression[]
struct LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B  : public RuntimeArray
{
	ALIGN_FIELD (8) LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* m_Items[1];

	inline LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void Unity.VisualScripting.Antlr3.Runtime.ParserRuleReturnScope::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07 (ParserRuleReturnScope_t967AE5B151AA6B0C4EB99698FCC6E4DFFCAEE035* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.ParameterArgs::set_HasResult(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParameterArgs_set_HasResult_m9CB8E148415DFDB780A5C5D0299E71AB596A76B8_inline (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogicalExpressionVisitor__ctor_m24C7C345ACEE6EADDD7106CAC9D789BFEBB0F3D9 (LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::set_Result(System.Text.StringBuilder)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SerializationVisitor_set_Result_m1C2912A68EBF051E396DA3EC9A52BFED68A46A36_inline (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, StringBuilder_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Globalization.NumberFormatInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatInfo__ctor_m94502038B1DB45D50D1331C312DDAD0D80CD608C (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
// System.Void System.Globalization.NumberFormatInfo::set_NumberDecimalSeparator(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NumberFormatInfo_set_NumberDecimalSeparator_mEC8D7493863AD768CF6107DE7617811E1105DF10 (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::get_LeftExpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_LeftExpression_mDE504809B2CDB09C513D85D62F681F3432EAEBE0_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::EncapsulateNoValue(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___expression0, const RuntimeMethod* method) ;
// System.Text.StringBuilder Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::get_Result()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::get_MiddleExpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_MiddleExpression_m31BE5A457389B52577A93E6757D2291A3ABDDFA7_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::get_RightExpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_RightExpression_m3BB5D4B3540900E08217DBA3B4DCA150B3293825_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.BinaryExpression::get_LeftExpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* BinaryExpression_get_LeftExpression_mD21818A59055D95C304B73471F9D4B782DB63B28_inline (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.BinaryExpressionType Unity.VisualScripting.Dependencies.NCalc.BinaryExpression::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BinaryExpression_get_Type_m643CED48C4A086AB2E63036E53B64DD3D04D10A1_inline (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.BinaryExpression::get_RightExpression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* BinaryExpression_get_RightExpression_m7CF8195F4CC8C4EEABB53A658BECE92ACEE3BD94_inline (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.UnaryExpressionType Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnaryExpression_get_Type_m1975DEB3A3A893A20EEF225A9B83A818812A457B_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::get_Expression()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* UnaryExpression_get_Expression_m048BC347DA44FFBA007ECA3B5C71B26C9A730EED_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.ValueType Unity.VisualScripting.Dependencies.NCalc.ValueExpression::get_Type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ValueExpression_get_Type_mB8AC3CE9703854799ACF44BC217CE9F39ED933E5_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, const RuntimeMethod* method) ;
// System.Object Unity.VisualScripting.Dependencies.NCalc.ValueExpression::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Decimal System.Decimal::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Decimal_Parse_m5EB981A9432517BD05A49A0351F4DEAD0712F4B1 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.Decimal::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Decimal_ToString_m08256316312F5D05FE3D099C083A99BC694F4762 (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.IdentifierExpression Unity.VisualScripting.Dependencies.NCalc.FunctionExpression::get_Identifier()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* FunctionExpression_get_Identifier_mC36B5723E1F5542170364200861FE75527686D3E_inline (FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* __this, const RuntimeMethod* method) ;
// System.String Unity.VisualScripting.Dependencies.NCalc.IdentifierExpression::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IdentifierExpression_get_Name_mEC9209065D0E0A9E5877D0D7CE5C5F06317F27B2_inline (IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression[] Unity.VisualScripting.Dependencies.NCalc.FunctionExpression::get_Expressions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* FunctionExpression_get_Expressions_mDD1CA87B11D2BAE3D578441A3BC83657D0FB9819_inline (FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90 (StringBuilder_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D (StringBuilder_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.LogicalExpression::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF (LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::set_LeftExpression(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_LeftExpression_mA61386087E56C883FC1036D5C1A93347C2C0D7BF_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::set_MiddleExpression(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_MiddleExpression_m78AB85AA7179BE64D7C6EEC0D534DED8E16CBB03_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::set_RightExpression(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_RightExpression_m32C9F11F1B7C64A2853EA2D1EDAA0BC18D0E775E_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::set_Type(Unity.VisualScripting.Dependencies.NCalc.UnaryExpressionType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnaryExpression_set_Type_m99254492E0713042FF17F8993E77B00312BB5DE1_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::set_Expression(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnaryExpression_set_Expression_m458F59A7061112E5568F1C100D0655350B6E9029_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::set_Value(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::set_Type(Unity.VisualScripting.Dependencies.NCalc.ValueType)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.TypeCode System.Type::GetTypeCode(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Type_GetTypeCode_m98820B2A4DCAA218E805D4773E2D0A33AFDF7192 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Dependencies.NCalc.EvaluationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EvaluationException__ctor_mC3545B04D76AEAFC2007507CC0D00D12D4CC6BFE (EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/ncalcExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ncalcExpression_return_get_Tree_m25FA69C84C0E7B4D9FAB6B2FBDE8BDA6B226E48B (ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* __this, const RuntimeMethod* method) 
{
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/ncalcExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ncalcExpression_return_set_Tree_m526E16C672F4A31CCF5B6BBF6A62C34EDDCE18D3 (ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/ncalcExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ncalcExpression_return__ctor_m422CF138036F78F966DAAC76FA5FF572615E7F8F (ncalcExpression_return_t7BA944E8990E85BEF9FF951F17899A1F2E37E3E6* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/logicalExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* logicalExpression_return_get_Tree_m47FC55BA1965114A63281798B470109FF06A5FC6 (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* __this, const RuntimeMethod* method) 
{
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/logicalExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void logicalExpression_return_set_Tree_m37615E3C802912EF29AABF3131391A21472A6A1F (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/logicalExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void logicalExpression_return__ctor_m7CEAB730B76250C43456F8505740F98C886B8AAD (logicalExpression_return_tA9AB7E6573A30432D380780EBFE7611B28413402* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/conditionalExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* conditionalExpression_return_get_Tree_m7B00F4BCC18C932058B8878CFB6FE23E6EAE5888 (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* __this, const RuntimeMethod* method) 
{
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/conditionalExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void conditionalExpression_return_set_Tree_m4DCA1F66FEA8A6D2089F4E3D303A1F337043E849 (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/conditionalExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void conditionalExpression_return__ctor_m426B2C4F035ED6EA2823C4B46845822BF796CC96 (conditionalExpression_return_t2DECB6C11A392479654651E2B4810638F9B43257* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/booleanAndExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* booleanAndExpression_return_get_Tree_m4A3DBEDA3FEEB27060C343E3AC1312A9FE1AA965 (booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* __this, const RuntimeMethod* method) 
{
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/booleanAndExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void booleanAndExpression_return_set_Tree_m804E06B46D0C9D966E08D2183E2573437779CC14 (booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/booleanAndExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void booleanAndExpression_return__ctor_mFEAEFA25C564E27C239A57B0777976BA2BFEA086 (booleanAndExpression_return_t5D327F81B89C002A4B4A6F6BB78124A06C536033* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseOrExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bitwiseOrExpression_return_get_Tree_m7616E8D8DBA134F58E0CDE0A3E00211CE135683B (bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* __this, const RuntimeMethod* method) 
{
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseOrExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseOrExpression_return_set_Tree_mA8B42B36ED141EF81ECC7BCF3AEE279FC7DDFA03 (bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseOrExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseOrExpression_return__ctor_m9AF5AE54B95A0454E1D5C5536EA2AAB50AC51630 (bitwiseOrExpression_return_t5D649C1429A30B43746A096C989A3B03F1804A2C* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseXOrExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bitwiseXOrExpression_return_get_Tree_mDCD92F7B30C5C0C2082CBE367160D3FE6D4E9622 (bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* __this, const RuntimeMethod* method) 
{
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseXOrExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseXOrExpression_return_set_Tree_mF42C5260CAEAE16659EB23CE30503DDE935DB599 (bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseXOrExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseXOrExpression_return__ctor_m541B10184341E638DDE6E5B26AE7B085DADFBAE3 (bitwiseXOrExpression_return_t2B047A72026B167727E58761DB6CB4285A7D154F* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseAndExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bitwiseAndExpression_return_get_Tree_mFEF73BA1F82770B77896085106AB6A4C1C940040 (bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* __this, const RuntimeMethod* method) 
{
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseAndExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseAndExpression_return_set_Tree_mFA1C91FF73AD56348572CD428DAD444076BDF5E8 (bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/bitwiseAndExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void bitwiseAndExpression_return__ctor_m7B0C7223BC7F67092EBC55739953BD24CD5C9686 (bitwiseAndExpression_return_t175E1A2F5820948567BD9AA8684F4B7984CD25CD* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/equalityExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* equalityExpression_return_get_Tree_m62DE6B858A75C7C1263EDA6801016507981C88F5 (equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* __this, const RuntimeMethod* method) 
{
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/equalityExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void equalityExpression_return_set_Tree_m1EAFCEDC072CAB7C92A09A8E86888D05A9EE52D1 (equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/equalityExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void equalityExpression_return__ctor_m00B929AD146884433C96A1CDA91E593171A28D6A (equalityExpression_return_t0D80CDA5C73818322F64909C0E18BE6A66139957* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/relationalExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* relationalExpression_return_get_Tree_mCAE9CDD4E575A356921EF4954880B98A2CA775BA (relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* __this, const RuntimeMethod* method) 
{
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/relationalExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void relationalExpression_return_set_Tree_mCD9919CCC08608D2DE71E5F87F3FA042599F7919 (relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/relationalExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void relationalExpression_return__ctor_m5A84A5D6F3647F41895F0281CB5087695BF44B64 (relationalExpression_return_tC04CDE620BCC02B06DB216424FB881600C5BF1EE* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/shiftExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* shiftExpression_return_get_Tree_mC7FB6F92729DCADB2B13440C7289DF494F1100EA (shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* __this, const RuntimeMethod* method) 
{
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/shiftExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shiftExpression_return_set_Tree_mDB7F9948616A4E701032595D7DE599B85F7705B7 (shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/shiftExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void shiftExpression_return__ctor_mDA7571BFF156CDDEB994FEBA01C969A002837E9B (shiftExpression_return_t4D59B55A1F185BBBF6A94C93C302F52383806B71* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/additiveExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* additiveExpression_return_get_Tree_m251D5360DEC7D9C6870284A8D8604A51F53339BD (additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* __this, const RuntimeMethod* method) 
{
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/additiveExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void additiveExpression_return_set_Tree_mE782367D93C327CFD39BCFB5602D2C4E9E4FAF98 (additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/additiveExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void additiveExpression_return__ctor_m069149FDAE713F9A87A10851AD630B59C869CA53 (additiveExpression_return_tB18B0EC332BCD3B19584E9DAFEFE5C3A3AA07AA9* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/multiplicativeExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* multiplicativeExpression_return_get_Tree_m91EBDD30267B15C0F1FC2ACE126F9AB0B38D40DB (multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* __this, const RuntimeMethod* method) 
{
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/multiplicativeExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void multiplicativeExpression_return_set_Tree_mBA83AC1DE18FD7E1D4BEF0F19815A02CF5F2A8AE (multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/multiplicativeExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void multiplicativeExpression_return__ctor_m4EC6588201A9DD7527112016F99FD17611790A3C (multiplicativeExpression_return_t7A09259F17BF722C3F4DB872B13DB1156FEAF2AE* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/unaryExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* unaryExpression_return_get_Tree_mE07C150C325AE6DB206226A63D022E8D986042D8 (unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* __this, const RuntimeMethod* method) 
{
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/unaryExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unaryExpression_return_set_Tree_mA24F81046099E1E681E95090F5EA88F4E8568BB3 (unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/unaryExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void unaryExpression_return__ctor_mE4FBA5CA64602B3C38981B648ED292D7B0C7DA98 (unaryExpression_return_t1D4375D11904F5069239CF413FA752605C805B64* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/primaryExpression_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* primaryExpression_return_get_Tree_mCB8524A9E1AA313BCF8710D2E8686D3104214205 (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* __this, const RuntimeMethod* method) 
{
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/primaryExpression_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void primaryExpression_return_set_Tree_m4FDF089D1628CD32FDC6D066DFA132ADEFEFA5E0 (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/primaryExpression_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void primaryExpression_return__ctor_mF0B4992409A94995D798FC05A446633E95165C65 (primaryExpression_return_t5F4C3B79D4F622E70BB3E8721D9D71C84E737F55* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/value_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* value_return_get_Tree_m7F398FCF1A6F68554E94F9CB20A9F2C8A0665594 (value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* __this, const RuntimeMethod* method) 
{
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/value_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void value_return_set_Tree_m9AA445CFA3DA5B81A338DE2F944A7D0EF2A26D81 (value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/value_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void value_return__ctor_m1D48771759774D00FCCB206334475E57EB8C2A8B (value_return_t9454A396BAAADDC799C8683452D54B73FB6AD0CA* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/identifier_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* identifier_return_get_Tree_mC911B456349FB5AF7A896EF70089D24023406D4D (identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* __this, const RuntimeMethod* method) 
{
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/identifier_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void identifier_return_set_Tree_mA1DEFC2FF6BF66309052BA15F9D0BDB2C269AD67 (identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/identifier_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void identifier_return__ctor_m607079BF18B64935F5D65C179A1DD2EEBDD1DC64 (identifier_return_t7975BB7A138630A5D91EEC2F07E00881BC9C161D* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/expressionList_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* expressionList_return_get_Tree_m7492B83626B037F9D2FE29E5B1BCDD25DA9EC72D (expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* __this, const RuntimeMethod* method) 
{
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/expressionList_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void expressionList_return_set_Tree_m3E9798B55F6865DC07A4C738440BC9AA4769953A (expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/expressionList_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void expressionList_return__ctor_m2EA78AA8DAA3AC6FD1F1B998CA9BC362502D0FC7 (expressionList_return_tC2A1C94AC3FC330E8C6B7B9AC0119EEE42596F7C* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Dependencies.NCalc.NCalcParser/arguments_return::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* arguments_return_get_Tree_m6BDE202D6590A78646A6B0D16500B4D92E595DDD (arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* __this, const RuntimeMethod* method) 
{
	{
		// return tree;
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_0 = __this->___tree_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/arguments_return::set_Tree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void arguments_return_set_Tree_mAA2BAF43843A5E5A57F044054FCCFB32F07D3164 (arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tree = (CommonTree)value;
		RuntimeObject* L_0 = ___value0;
		__this->___tree_3 = ((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_3), (void*)((CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)CastclassClass((RuntimeObject*)L_0, CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.NCalcParser/arguments_return::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void arguments_return__ctor_mD57A323BD2933750E6A65521119CA6EE4B0F8384 (arguments_return_t43E6906F1BAB77E73E8865459062A500CF3E7B6B* __this, const RuntimeMethod* method) 
{
	{
		ParserRuleReturnScope__ctor_mF6716D4DA9A33F58E0C4B78692935001F6D13B07(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Dependencies.NCalc.ParameterArgs::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParameterArgs_get_Result_m0C577BECCB47D7097879C041C6EF76D7AB597AB7 (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, const RuntimeMethod* method) 
{
	{
		// return _result;
		RuntimeObject* L_0 = __this->____result_1;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ParameterArgs::set_Result(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterArgs_set_Result_mEB9F6FC8CA211EF0F80C66161F5A91A94A205BD8 (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// _result = value;
		RuntimeObject* L_0 = ___value0;
		__this->____result_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____result_1), (void*)L_0);
		// HasResult = true;
		ParameterArgs_set_HasResult_m9CB8E148415DFDB780A5C5D0299E71AB596A76B8_inline(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Boolean Unity.VisualScripting.Dependencies.NCalc.ParameterArgs::get_HasResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterArgs_get_HasResult_m00CBA2CBCC312D378EAAF7665634BB5B0CE2F444 (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, const RuntimeMethod* method) 
{
	{
		// public bool HasResult { get; set; }
		bool L_0 = __this->___U3CHasResultU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ParameterArgs::set_HasResult(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterArgs_set_HasResult_m9CB8E148415DFDB780A5C5D0299E71AB596A76B8 (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool HasResult { get; set; }
		bool L_0 = ___value0;
		__this->___U3CHasResultU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ParameterArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParameterArgs__ctor_m8AE187E045B505540DE24CDB377ECE4B14F96E42 (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor__ctor_m375F92459AC15A3D38B7941759CB2727AD953C42 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SerializationVisitor()
		LogicalExpressionVisitor__ctor_m24C7C345ACEE6EADDD7106CAC9D789BFEBB0F3D9(__this, NULL);
		// Result = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		SerializationVisitor_set_Result_m1C2912A68EBF051E396DA3EC9A52BFED68A46A36_inline(__this, L_0, NULL);
		// _numberFormatInfo = new NumberFormatInfo { NumberDecimalSeparator = "." };
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_1 = (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472*)il2cpp_codegen_object_new(NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NumberFormatInfo__ctor_m94502038B1DB45D50D1331C312DDAD0D80CD608C(L_1, NULL);
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2 = L_1;
		NullCheck(L_2);
		NumberFormatInfo_set_NumberDecimalSeparator_mEC8D7493863AD768CF6107DE7617811E1105DF10(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		__this->____numberFormatInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____numberFormatInfo_0), (void*)L_2);
		// }
		return;
	}
}
// System.Text.StringBuilder Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, const RuntimeMethod* method) 
{
	{
		// public StringBuilder Result { get; protected set; }
		StringBuilder_t* L_0 = __this->___U3CResultU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::set_Result(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_set_Result_m1C2912A68EBF051E396DA3EC9A52BFED68A46A36 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, StringBuilder_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public StringBuilder Result { get; protected set; }
		StringBuilder_t* L_0 = ___value0;
		__this->___U3CResultU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::Visit(Unity.VisualScripting.Dependencies.NCalc.TernaryExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_mF41318032810D31B1C2AA564FA7DE48DF8152B47 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* ___ternary0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral210A6A07AB8F66B3554669378F6148D2C7F62920);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EncapsulateNoValue(ternary.LeftExpression);
		TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* L_0 = ___ternary0;
		NullCheck(L_0);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_1;
		L_1 = TernaryExpression_get_LeftExpression_mDE504809B2CDB09C513D85D62F681F3432EAEBE0_inline(L_0, NULL);
		SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9(__this, L_1, NULL);
		// Result.Append("? ");
		StringBuilder_t* L_2;
		L_2 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, _stringLiteral210A6A07AB8F66B3554669378F6148D2C7F62920, NULL);
		// EncapsulateNoValue(ternary.MiddleExpression);
		TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* L_4 = ___ternary0;
		NullCheck(L_4);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_5;
		L_5 = TernaryExpression_get_MiddleExpression_m31BE5A457389B52577A93E6757D2291A3ABDDFA7_inline(L_4, NULL);
		SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9(__this, L_5, NULL);
		// Result.Append(": ");
		StringBuilder_t* L_6;
		L_6 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155, NULL);
		// EncapsulateNoValue(ternary.RightExpression);
		TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* L_8 = ___ternary0;
		NullCheck(L_8);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_9;
		L_9 = TernaryExpression_get_RightExpression_m3BB5D4B3540900E08217DBA3B4DCA150B3293825_inline(L_8, NULL);
		SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::Visit(Unity.VisualScripting.Dependencies.NCalc.BinaryExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_m6E14C2211C9FAF620D5D07FA6C4EC16F8A45668D (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* ___binary0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15FB8A04339464F72B79BAF171F17EF1E153CA52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B1EB7B676D45EEA70B706E25988B5A063563F3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B9D3CF4697EAF2BF914545D4E803CF9FCA58F66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FDB12CAF040DE0941DCA5DA173D724FBE249CE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4809E30105820D7F0D6338C0181D9A191EAE18E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51A0BD638EC24062E1BB5CBBDC0CEBB6BFB167A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64DDEE858A91B7DDB44761D703E5A2FD737BCAA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88DE3AE5D1539B4DC69F188BF0BA71D156A2A987);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9624DEBBCD14C2B589D0526FE720B99449CA1D13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B2D833B107F93D5FC776077FE8509021DCC803E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC47381A312D0BE38226537F85448FFF2264564C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralADB95DDF09353FBDD17E9890451F2F88C7F3AF20);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8FB3AADE865E6D34A8377CFB1E0D3ADC4040BDC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDF1B8C01FE1D4D3E80FBCE3178BE0FA050AC8D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0CFF3BC021C7A77F8C1BAFB2D406397F52AD882);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4DEFACDDC6EDC45049E58865E8CC7A05C7AEA5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC920BF5B48C73F1A2C760180F624A2192ADDA32);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// EncapsulateNoValue(binary.LeftExpression);
		BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_0 = ___binary0;
		NullCheck(L_0);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_1;
		L_1 = BinaryExpression_get_LeftExpression_mD21818A59055D95C304B73471F9D4B782DB63B28_inline(L_0, NULL);
		SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9(__this, L_1, NULL);
		// switch (binary.Type)
		BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_2 = ___binary0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BinaryExpression_get_Type_m643CED48C4A086AB2E63036E53B64DD3D04D10A1_inline(L_2, NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0066;
			}
			case 1:
			{
				goto IL_007c;
			}
			case 2:
			{
				goto IL_0142;
			}
			case 3:
			{
				goto IL_0100;
			}
			case 4:
			{
				goto IL_00d4;
			}
			case 5:
			{
				goto IL_00ea;
			}
			case 6:
			{
				goto IL_00be;
			}
			case 7:
			{
				goto IL_00a8;
			}
			case 8:
			{
				goto IL_0116;
			}
			case 9:
			{
				goto IL_0158;
			}
			case 10:
			{
				goto IL_012c;
			}
			case 11:
			{
				goto IL_0092;
			}
			case 12:
			{
				goto IL_016b;
			}
			case 13:
			{
				goto IL_0191;
			}
			case 14:
			{
				goto IL_017e;
			}
			case 15:
			{
				goto IL_01a4;
			}
			case 16:
			{
				goto IL_01b7;
			}
			case 17:
			{
				goto IL_01ca;
			}
		}
	}
	{
		goto IL_01db;
	}

IL_0066:
	{
		// Result.Append("and ");
		StringBuilder_t* L_5;
		L_5 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral64DDEE858A91B7DDB44761D703E5A2FD737BCAA9, NULL);
		// break;
		goto IL_01db;
	}

IL_007c:
	{
		// Result.Append("or ");
		StringBuilder_t* L_7;
		L_7 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteralC8FB3AADE865E6D34A8377CFB1E0D3ADC4040BDC, NULL);
		// break;
		goto IL_01db;
	}

IL_0092:
	{
		// Result.Append("/ ");
		StringBuilder_t* L_9;
		L_9 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_9);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, _stringLiteralADB95DDF09353FBDD17E9890451F2F88C7F3AF20, NULL);
		// break;
		goto IL_01db;
	}

IL_00a8:
	{
		// Result.Append("= ");
		StringBuilder_t* L_11;
		L_11 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteral9B2D833B107F93D5FC776077FE8509021DCC803E, NULL);
		// break;
		goto IL_01db;
	}

IL_00be:
	{
		// Result.Append("> ");
		StringBuilder_t* L_13;
		L_13 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteral4E1C61AD64824F0F49388BB9A0A66BA660066922, NULL);
		// break;
		goto IL_01db;
	}

IL_00d4:
	{
		// Result.Append(">= ");
		StringBuilder_t* L_15;
		L_15 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteralCDF1B8C01FE1D4D3E80FBCE3178BE0FA050AC8D9, NULL);
		// break;
		goto IL_01db;
	}

IL_00ea:
	{
		// Result.Append("< ");
		StringBuilder_t* L_17;
		L_17 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteral2FDB12CAF040DE0941DCA5DA173D724FBE249CE3, NULL);
		// break;
		goto IL_01db;
	}

IL_0100:
	{
		// Result.Append("<= ");
		StringBuilder_t* L_19;
		L_19 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral88DE3AE5D1539B4DC69F188BF0BA71D156A2A987, NULL);
		// break;
		goto IL_01db;
	}

IL_0116:
	{
		// Result.Append("- ");
		StringBuilder_t* L_21;
		L_21 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_21);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, _stringLiteralFC920BF5B48C73F1A2C760180F624A2192ADDA32, NULL);
		// break;
		goto IL_01db;
	}

IL_012c:
	{
		// Result.Append("% ");
		StringBuilder_t* L_23;
		L_23 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_23);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, _stringLiteralAC47381A312D0BE38226537F85448FFF2264564C, NULL);
		// break;
		goto IL_01db;
	}

IL_0142:
	{
		// Result.Append("!= ");
		StringBuilder_t* L_25;
		L_25 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_25);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, _stringLiteralF4DEFACDDC6EDC45049E58865E8CC7A05C7AEA5B, NULL);
		// break;
		goto IL_01db;
	}

IL_0158:
	{
		// Result.Append("+ ");
		StringBuilder_t* L_27;
		L_27 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_27, _stringLiteral1B9D3CF4697EAF2BF914545D4E803CF9FCA58F66, NULL);
		// break;
		goto IL_01db;
	}

IL_016b:
	{
		// Result.Append("* ");
		StringBuilder_t* L_29;
		L_29 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_29);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_29, _stringLiteral15FB8A04339464F72B79BAF171F17EF1E153CA52, NULL);
		// break;
		goto IL_01db;
	}

IL_017e:
	{
		// Result.Append("& ");
		StringBuilder_t* L_31;
		L_31 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_31, _stringLiteral9624DEBBCD14C2B589D0526FE720B99449CA1D13, NULL);
		// break;
		goto IL_01db;
	}

IL_0191:
	{
		// Result.Append("| ");
		StringBuilder_t* L_33;
		L_33 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_33);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_33, _stringLiteral1B1EB7B676D45EEA70B706E25988B5A063563F3D, NULL);
		// break;
		goto IL_01db;
	}

IL_01a4:
	{
		// Result.Append("~ ");
		StringBuilder_t* L_35;
		L_35 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_35);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_35, _stringLiteralE0CFF3BC021C7A77F8C1BAFB2D406397F52AD882, NULL);
		// break;
		goto IL_01db;
	}

IL_01b7:
	{
		// Result.Append("<< ");
		StringBuilder_t* L_37;
		L_37 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_37);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_37, _stringLiteral4809E30105820D7F0D6338C0181D9A191EAE18E2, NULL);
		// break;
		goto IL_01db;
	}

IL_01ca:
	{
		// Result.Append(">> ");
		StringBuilder_t* L_39;
		L_39 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_39);
		StringBuilder_t* L_40;
		L_40 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_39, _stringLiteral51A0BD638EC24062E1BB5CBBDC0CEBB6BFB167A5, NULL);
	}

IL_01db:
	{
		// EncapsulateNoValue(binary.RightExpression);
		BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* L_41 = ___binary0;
		NullCheck(L_41);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_42;
		L_42 = BinaryExpression_get_RightExpression_m7CF8195F4CC8C4EEABB53A658BECE92ACEE3BD94_inline(L_41, NULL);
		SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9(__this, L_42, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::Visit(Unity.VisualScripting.Dependencies.NCalc.UnaryExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_mA2167A9765FE3128958F0CB0D0AA1A94CF33B896 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* ___unary0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9452A87FAA0073A5238C5BF8FBCAE0BFB2A7512D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (unary.Type)
		UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* L_0 = ___unary0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UnaryExpression_get_Type_m1975DEB3A3A893A20EEF225A9B83A818812A457B_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_002e;
			}
			case 2:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_0052;
	}

IL_001b:
	{
		// Result.Append("!");
		StringBuilder_t* L_3;
		L_3 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, _stringLiteral15196F05B117690F3E12E56AA0C43803EA0D2A46, NULL);
		// break;
		goto IL_0052;
	}

IL_002e:
	{
		// Result.Append("-");
		StringBuilder_t* L_5;
		L_5 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, NULL);
		// break;
		goto IL_0052;
	}

IL_0041:
	{
		// Result.Append("~");
		StringBuilder_t* L_7;
		L_7 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_7, _stringLiteral9452A87FAA0073A5238C5BF8FBCAE0BFB2A7512D, NULL);
	}

IL_0052:
	{
		// EncapsulateNoValue(unary.Expression);
		UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* L_9 = ___unary0;
		NullCheck(L_9);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_10;
		L_10 = UnaryExpression_get_Expression_m048BC347DA44FFBA007ECA3B5C71B26C9A730EED_inline(L_9, NULL);
		SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::Visit(Unity.VisualScripting.Dependencies.NCalc.ValueExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_mAF3BD72EE9DAF030DB798A90E571B62E3F08D2AC (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// switch (value.Type)
		ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_0 = ___value0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ValueExpression_get_Type_mB8AC3CE9703854799ACF44BC217CE9F39ED933E5_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_00a5;
			}
			case 1:
			{
				goto IL_00c2;
			}
			case 2:
			{
				goto IL_003f;
			}
			case 3:
			{
				goto IL_0070;
			}
			case 4:
			{
				goto IL_0022;
			}
		}
	}
	{
		return;
	}

IL_0022:
	{
		// Result.Append(value.Value).Append(" ");
		StringBuilder_t* L_3;
		L_3 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_4 = ___value0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline(L_4, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_3, L_5, NULL);
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		// break;
		return;
	}

IL_003f:
	{
		// Result.Append("#").Append(value.Value).Append("#").Append(" ");
		StringBuilder_t* L_8;
		L_8 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, NULL);
		ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_10 = ___value0;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline(L_10, NULL);
		NullCheck(L_9);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_9, L_11, NULL);
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_12, _stringLiteral0B0FEB3147CE20EB2C90076367F895C59BCD14B3, NULL);
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		// break;
		return;
	}

IL_0070:
	{
		// Result.Append(decimal.Parse(value.Value.ToString()).ToString(_numberFormatInfo)).Append(" ");
		StringBuilder_t* L_15;
		L_15 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_16 = ___value0;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline(L_16, NULL);
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		il2cpp_codegen_runtime_class_init_inline(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_il2cpp_TypeInfo_var);
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_19;
		L_19 = Decimal_Parse_m5EB981A9432517BD05A49A0351F4DEAD0712F4B1(L_18, NULL);
		V_1 = L_19;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_20 = __this->____numberFormatInfo_0;
		String_t* L_21;
		L_21 = Decimal_ToString_m08256316312F5D05FE3D099C083A99BC694F4762((&V_1), L_20, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_21, NULL);
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		// break;
		return;
	}

IL_00a5:
	{
		// Result.Append(value.Value).Append(" ");
		StringBuilder_t* L_24;
		L_24 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_25 = ___value0;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline(L_25, NULL);
		NullCheck(L_24);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_24, L_26, NULL);
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_27, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		// break;
		return;
	}

IL_00c2:
	{
		// Result.Append("'").Append(value.Value).Append("'").Append(" ");
		StringBuilder_t* L_29;
		L_29 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_29);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_29, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
		ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* L_31 = ___value0;
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline(L_31, NULL);
		NullCheck(L_30);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_30, L_32, NULL);
		NullCheck(L_33);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_33, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, NULL);
		NullCheck(L_34);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_34, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::Visit(Unity.VisualScripting.Dependencies.NCalc.FunctionExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_m61FDF5B476F37E1A8710A3532564AB9790487D65 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* ___function0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Result.Append(function.Identifier.Name);
		StringBuilder_t* L_0;
		L_0 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* L_1 = ___function0;
		NullCheck(L_1);
		IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* L_2;
		L_2 = FunctionExpression_get_Identifier_mC36B5723E1F5542170364200861FE75527686D3E_inline(L_1, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = IdentifierExpression_get_Name_mEC9209065D0E0A9E5877D0D7CE5C5F06317F27B2_inline(L_2, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, L_3, NULL);
		// Result.Append("(");
		StringBuilder_t* L_5;
		L_5 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, NULL);
		// for (var i = 0; i < function.Expressions.Length; i++)
		V_0 = 0;
		goto IL_0076;
	}

IL_002c:
	{
		// function.Expressions[i].Accept(this);
		FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* L_7 = ___function0;
		NullCheck(L_7);
		LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* L_8;
		L_8 = FunctionExpression_get_Expressions_mDD1CA87B11D2BAE3D578441A3BC83657D0FB9819_inline(L_7, NULL);
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		VirtualActionInvoker1< LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* >::Invoke(4 /* System.Void Unity.VisualScripting.Dependencies.NCalc.LogicalExpression::Accept(Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor) */, L_11, __this);
		// if (i < function.Expressions.Length - 1)
		int32_t L_12 = V_0;
		FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* L_13 = ___function0;
		NullCheck(L_13);
		LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* L_14;
		L_14 = FunctionExpression_get_Expressions_mDD1CA87B11D2BAE3D578441A3BC83657D0FB9819_inline(L_13, NULL);
		NullCheck(L_14);
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_14)->max_length)), 1)))))
		{
			goto IL_0072;
		}
	}
	{
		// Result.Remove(Result.Length - 1, 1);
		StringBuilder_t* L_15;
		L_15 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		StringBuilder_t* L_16;
		L_16 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_15, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), 1, NULL);
		// Result.Append(", ");
		StringBuilder_t* L_19;
		L_19 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D, NULL);
	}

IL_0072:
	{
		// for (var i = 0; i < function.Expressions.Length; i++)
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0076:
	{
		// for (var i = 0; i < function.Expressions.Length; i++)
		int32_t L_22 = V_0;
		FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* L_23 = ___function0;
		NullCheck(L_23);
		LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* L_24;
		L_24 = FunctionExpression_get_Expressions_mDD1CA87B11D2BAE3D578441A3BC83657D0FB9819_inline(L_23, NULL);
		NullCheck(L_24);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_009d;
	}

IL_0083:
	{
		// Result.Remove(Result.Length - 1, 1);
		StringBuilder_t* L_25;
		L_25 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		StringBuilder_t* L_26;
		L_26 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_26);
		int32_t L_27;
		L_27 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_26, NULL);
		NullCheck(L_25);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_25, ((int32_t)il2cpp_codegen_subtract(L_27, 1)), 1, NULL);
	}

IL_009d:
	{
		// while (Result[Result.Length - 1] == ' ')
		StringBuilder_t* L_29;
		L_29 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		StringBuilder_t* L_30;
		L_30 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_30);
		int32_t L_31;
		L_31 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_30, NULL);
		NullCheck(L_29);
		Il2CppChar L_32;
		L_32 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_29, ((int32_t)il2cpp_codegen_subtract(L_31, 1)), NULL);
		if ((((int32_t)L_32) == ((int32_t)((int32_t)32))))
		{
			goto IL_0083;
		}
	}
	{
		// Result.Append(") ");
		StringBuilder_t* L_33;
		L_33 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_33);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_33, _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::Visit(Unity.VisualScripting.Dependencies.NCalc.IdentifierExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_Visit_mF388B7819484B208F634D64AEAD4A61A409959F8 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* ___identifier0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Result.Append("[").Append(identifier.Name).Append("] ");
		StringBuilder_t* L_0;
		L_0 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, NULL);
		IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* L_2 = ___identifier0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = IdentifierExpression_get_Name_mEC9209065D0E0A9E5877D0D7CE5C5F06317F27B2_inline(L_2, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_3, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteral10A105116F1400FFCE661E402C3C12DDCA0D688C, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.SerializationVisitor::EncapsulateNoValue(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationVisitor_EncapsulateNoValue_m06891EDB91B45CA3AF14D77517BAF38013719DC9 (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___expression0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (expression is ValueExpression)
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___expression0;
		if (!((ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7*)IsInstClass((RuntimeObject*)L_0, ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7_il2cpp_TypeInfo_var)))
		{
			goto IL_0010;
		}
	}
	{
		// expression.Accept(this);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_1 = ___expression0;
		NullCheck(L_1);
		VirtualActionInvoker1< LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* >::Invoke(4 /* System.Void Unity.VisualScripting.Dependencies.NCalc.LogicalExpression::Accept(Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor) */, L_1, __this);
		return;
	}

IL_0010:
	{
		// Result.Append("(");
		StringBuilder_t* L_2;
		L_2 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73, NULL);
		// expression.Accept(this);
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_4 = ___expression0;
		NullCheck(L_4);
		VirtualActionInvoker1< LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* >::Invoke(4 /* System.Void Unity.VisualScripting.Dependencies.NCalc.LogicalExpression::Accept(Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor) */, L_4, __this);
		goto IL_0044;
	}

IL_002a:
	{
		// Result.Remove(Result.Length - 1, 1);
		StringBuilder_t* L_5;
		L_5 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		StringBuilder_t* L_6;
		L_6 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_6);
		int32_t L_7;
		L_7 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_6, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Remove_m0D93692674D1C09795C7D6542420A3B6C5F81E90(L_5, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), 1, NULL);
	}

IL_0044:
	{
		// while (Result[Result.Length - 1] == ' ')
		StringBuilder_t* L_9;
		L_9 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		StringBuilder_t* L_10;
		L_10 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_10);
		int32_t L_11;
		L_11 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_10, NULL);
		NullCheck(L_9);
		Il2CppChar L_12;
		L_12 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_9, ((int32_t)il2cpp_codegen_subtract(L_11, 1)), NULL);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)32))))
		{
			goto IL_002a;
		}
	}
	{
		// Result.Append(") ");
		StringBuilder_t* L_13;
		L_13 = SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline(__this, NULL);
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteralC087E631060AB76B7C814C0E1B92D5C7C4C4B924, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::.ctor(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression,Unity.VisualScripting.Dependencies.NCalc.LogicalExpression,Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression__ctor_mCB08337682715EEB37EE0D03996181A303FD3267 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___leftExpression0, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___middleExpression1, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___rightExpression2, const RuntimeMethod* method) 
{
	{
		// public TernaryExpression(LogicalExpression leftExpression, LogicalExpression middleExpression, LogicalExpression rightExpression)
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		// LeftExpression = leftExpression;
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___leftExpression0;
		TernaryExpression_set_LeftExpression_mA61386087E56C883FC1036D5C1A93347C2C0D7BF_inline(__this, L_0, NULL);
		// MiddleExpression = middleExpression;
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_1 = ___middleExpression1;
		TernaryExpression_set_MiddleExpression_m78AB85AA7179BE64D7C6EEC0D534DED8E16CBB03_inline(__this, L_1, NULL);
		// RightExpression = rightExpression;
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_2 = ___rightExpression2;
		TernaryExpression_set_RightExpression_m32C9F11F1B7C64A2853EA2D1EDAA0BC18D0E775E_inline(__this, L_2, NULL);
		// }
		return;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::get_LeftExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_LeftExpression_mDE504809B2CDB09C513D85D62F681F3432EAEBE0 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression LeftExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CLeftExpressionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::set_LeftExpression(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression_set_LeftExpression_mA61386087E56C883FC1036D5C1A93347C2C0D7BF (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression LeftExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___value0;
		__this->___U3CLeftExpressionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLeftExpressionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::get_MiddleExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_MiddleExpression_m31BE5A457389B52577A93E6757D2291A3ABDDFA7 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression MiddleExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CMiddleExpressionU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::set_MiddleExpression(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression_set_MiddleExpression_m78AB85AA7179BE64D7C6EEC0D534DED8E16CBB03 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression MiddleExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___value0;
		__this->___U3CMiddleExpressionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMiddleExpressionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::get_RightExpression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_RightExpression_m3BB5D4B3540900E08217DBA3B4DCA150B3293825 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression RightExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CRightExpressionU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::set_RightExpression(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression_set_RightExpression_m32C9F11F1B7C64A2853EA2D1EDAA0BC18D0E775E (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression RightExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___value0;
		__this->___U3CRightExpressionU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRightExpressionU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.TernaryExpression::Accept(Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TernaryExpression_Accept_m87285AA7D23F48EBC1D65506490B17EA950C2822 (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* ___visitor0, const RuntimeMethod* method) 
{
	{
		// visitor.Visit(this);
		LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* L_0 = ___visitor0;
		NullCheck(L_0);
		VirtualActionInvoker1< TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* >::Invoke(4 /* System.Void Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor::Visit(Unity.VisualScripting.Dependencies.NCalc.TernaryExpression) */, L_0, __this);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::.ctor(Unity.VisualScripting.Dependencies.NCalc.UnaryExpressionType,Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression__ctor_m1FB2772CED5F7227987F4689D8697977BCA3C24E (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, int32_t ___type0, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___expression1, const RuntimeMethod* method) 
{
	{
		// public UnaryExpression(UnaryExpressionType type, LogicalExpression expression)
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		// Type = type;
		int32_t L_0 = ___type0;
		UnaryExpression_set_Type_m99254492E0713042FF17F8993E77B00312BB5DE1_inline(__this, L_0, NULL);
		// Expression = expression;
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_1 = ___expression1;
		UnaryExpression_set_Expression_m458F59A7061112E5568F1C100D0655350B6E9029_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.LogicalExpression Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::get_Expression()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* UnaryExpression_get_Expression_m048BC347DA44FFBA007ECA3B5C71B26C9A730EED (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression Expression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CExpressionU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::set_Expression(Unity.VisualScripting.Dependencies.NCalc.LogicalExpression)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression_set_Expression_m458F59A7061112E5568F1C100D0655350B6E9029 (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression Expression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___value0;
		__this->___U3CExpressionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExpressionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.UnaryExpressionType Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnaryExpression_get_Type_m1975DEB3A3A893A20EEF225A9B83A818812A457B (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, const RuntimeMethod* method) 
{
	{
		// public UnaryExpressionType Type { get; set; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::set_Type(Unity.VisualScripting.Dependencies.NCalc.UnaryExpressionType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression_set_Type_m99254492E0713042FF17F8993E77B00312BB5DE1 (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public UnaryExpressionType Type { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.UnaryExpression::Accept(Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnaryExpression_Accept_m3A43817A0CF736373B199C035BF99EFD9BCF65C5 (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* ___visitor0, const RuntimeMethod* method) 
{
	{
		// visitor.Visit(this);
		LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* L_0 = ___visitor0;
		NullCheck(L_0);
		VirtualActionInvoker1< UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* >::Invoke(6 /* System.Void Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor::Visit(Unity.VisualScripting.Dependencies.NCalc.UnaryExpression) */, L_0, __this);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.Object,Unity.VisualScripting.Dependencies.NCalc.ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m824D9FF0F53B0C67CA4DF6DA22DC29D1C18A9ECB (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, RuntimeObject* ___value0, int32_t ___type1, const RuntimeMethod* method) 
{
	{
		// public ValueExpression(object value, ValueType type)
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		// Value = value;
		RuntimeObject* L_0 = ___value0;
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_0, NULL);
		// Type = type;
		int32_t L_1 = ___type1;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_mACD41125FFF375D20F709F1B2CB4B0002A8D2C97 (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* G_B9_0 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	{
		// public ValueExpression(object value)
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		// switch (System.Type.GetTypeCode(value.GetType()))
		RuntimeObject* L_0 = ___value0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Type_GetTypeCode_m98820B2A4DCAA218E805D4773E2D0A33AFDF7192(L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 3)))
		{
			case 0:
			{
				goto IL_005c;
			}
			case 1:
			{
				goto IL_0089;
			}
			case 2:
			{
				goto IL_0077;
			}
			case 3:
			{
				goto IL_0077;
			}
			case 4:
			{
				goto IL_0077;
			}
			case 5:
			{
				goto IL_0077;
			}
			case 6:
			{
				goto IL_0077;
			}
			case 7:
			{
				goto IL_0077;
			}
			case 8:
			{
				goto IL_0077;
			}
			case 9:
			{
				goto IL_0077;
			}
			case 10:
			{
				goto IL_006e;
			}
			case 11:
			{
				goto IL_006e;
			}
			case 12:
			{
				goto IL_006e;
			}
			case 13:
			{
				goto IL_0065;
			}
			case 14:
			{
				goto IL_0089;
			}
			case 15:
			{
				goto IL_0080;
			}
		}
	}
	{
		goto IL_0089;
	}

IL_005c:
	{
		// Type = ValueType.Boolean;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 4, NULL);
		// break;
		goto IL_00a5;
	}

IL_0065:
	{
		// Type = ValueType.DateTime;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 2, NULL);
		// break;
		goto IL_00a5;
	}

IL_006e:
	{
		// Type = ValueType.Float;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 3, NULL);
		// break;
		goto IL_00a5;
	}

IL_0077:
	{
		// Type = ValueType.Integer;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 0, NULL);
		// break;
		goto IL_00a5;
	}

IL_0080:
	{
		// Type = ValueType.String;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 1, NULL);
		// break;
		goto IL_00a5;
	}

IL_0089:
	{
		// throw new EvaluationException("This value could not be handled: " + value);
		RuntimeObject* L_4 = ___value0;
		G_B8_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F89784DF2CB8ABD4A4F34F5A767DF3253A9AAFE));
		if (L_4)
		{
			G_B9_0 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8F89784DF2CB8ABD4A4F34F5A767DF3253A9AAFE));
			goto IL_0094;
		}
	}
	{
		G_B10_0 = ((String_t*)(NULL));
		G_B10_1 = G_B8_0;
		goto IL_009a;
	}

IL_0094:
	{
		RuntimeObject* L_5 = ___value0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		G_B10_0 = L_6;
		G_B10_1 = G_B9_0;
	}

IL_009a:
	{
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B10_1, G_B10_0, NULL);
		EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E* L_8 = (EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EvaluationException_t0C3906BE18D421772799C4E0ACFE5478571FEA4E_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		EvaluationException__ctor_mC3545B04D76AEAFC2007507CC0D00D12D4CC6BFE(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueExpression__ctor_mACD41125FFF375D20F709F1B2CB4B0002A8D2C97_RuntimeMethod_var)));
	}

IL_00a5:
	{
		// Value = value;
		RuntimeObject* L_9 = ___value0;
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m64932619474457A2EC86AAFB6803242EAF683C9F (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public ValueExpression(string value)
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		// Value = value;
		String_t* L_0 = ___value0;
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_0, NULL);
		// Type = ValueType.String;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m7E0753DE1AD2DA756C691B84700449E413F7663A (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ValueExpression(int value)
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		// Value = value;
		int32_t L_0 = ___value0;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_2, NULL);
		// Type = ValueType.Integer;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_mE330F904E914D7B454BB195668A6D89C5B5F13DD (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ValueExpression(float value)
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		// Value = value;
		float L_0 = ___value0;
		float L_1 = L_0;
		RuntimeObject* L_2 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_1);
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_2, NULL);
		// Type = ValueType.Float;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 3, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m5FA864D2F1EC21C1C0788F61CF5B2EB0A203D223 (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ValueExpression(DateTime value)
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		// Value = value;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = L_0;
		RuntimeObject* L_2 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_1);
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_2, NULL);
		// Type = ValueType.DateTime;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 2, NULL);
		// }
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression__ctor_m3D94A47FFF8510B37262AD8CE50E6982153BA06A (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ValueExpression(bool value)
		LogicalExpression__ctor_mC180EF846E24CD9005ED04E50B507193551547EF(__this, NULL);
		// Value = value;
		bool L_0 = ___value0;
		bool L_1 = L_0;
		RuntimeObject* L_2 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_1);
		ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline(__this, L_2, NULL);
		// Type = ValueType.Boolean;
		ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline(__this, 4, NULL);
		// }
		return;
	}
}
// System.Object Unity.VisualScripting.Dependencies.NCalc.ValueExpression::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, const RuntimeMethod* method) 
{
	{
		// public object Value { get; set; }
		RuntimeObject* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::set_Value(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public object Value { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Unity.VisualScripting.Dependencies.NCalc.ValueType Unity.VisualScripting.Dependencies.NCalc.ValueExpression::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueExpression_get_Type_mB8AC3CE9703854799ACF44BC217CE9F39ED933E5 (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, const RuntimeMethod* method) 
{
	{
		// public ValueType Type { get; set; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::set_Type(Unity.VisualScripting.Dependencies.NCalc.ValueType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public ValueType Type { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void Unity.VisualScripting.Dependencies.NCalc.ValueExpression::Accept(Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueExpression_Accept_mE406F7BBE8CCC32F795063829B71C5577AC99E07 (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* ___visitor0, const RuntimeMethod* method) 
{
	{
		// visitor.Visit(this);
		LogicalExpressionVisitor_t7CEF3C71E05242B458501BB2898642F4F9C01AE2* L_0 = ___visitor0;
		NullCheck(L_0);
		VirtualActionInvoker1< ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* >::Invoke(7 /* System.Void Unity.VisualScripting.Dependencies.NCalc.LogicalExpressionVisitor::Visit(Unity.VisualScripting.Dependencies.NCalc.ValueExpression) */, L_0, __this);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m46307EA95C139B0817F589725E1F0DCE0AFD4058 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ParameterArgs_set_HasResult_m9CB8E148415DFDB780A5C5D0299E71AB596A76B8_inline (ParameterArgs_t6F99757E4429D71D057F5A21D287F4F0E57D7957* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool HasResult { get; set; }
		bool L_0 = ___value0;
		__this->___U3CHasResultU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SerializationVisitor_set_Result_m1C2912A68EBF051E396DA3EC9A52BFED68A46A36_inline (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, StringBuilder_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public StringBuilder Result { get; protected set; }
		StringBuilder_t* L_0 = ___value0;
		__this->___U3CResultU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_LeftExpression_mDE504809B2CDB09C513D85D62F681F3432EAEBE0_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression LeftExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CLeftExpressionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringBuilder_t* SerializationVisitor_get_Result_mC640670F888A2801FC65EDB88439253555AF1841_inline (SerializationVisitor_t905028B475D58D19AF23347E008E38A220539D58* __this, const RuntimeMethod* method) 
{
	{
		// public StringBuilder Result { get; protected set; }
		StringBuilder_t* L_0 = __this->___U3CResultU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_MiddleExpression_m31BE5A457389B52577A93E6757D2291A3ABDDFA7_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression MiddleExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CMiddleExpressionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* TernaryExpression_get_RightExpression_m3BB5D4B3540900E08217DBA3B4DCA150B3293825_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression RightExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CRightExpressionU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* BinaryExpression_get_LeftExpression_mD21818A59055D95C304B73471F9D4B782DB63B28_inline (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression LeftExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CLeftExpressionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BinaryExpression_get_Type_m643CED48C4A086AB2E63036E53B64DD3D04D10A1_inline (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, const RuntimeMethod* method) 
{
	{
		// public BinaryExpressionType Type { get; set; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* BinaryExpression_get_RightExpression_m7CF8195F4CC8C4EEABB53A658BECE92ACEE3BD94_inline (BinaryExpression_tCFC1F7B29A185986E4A41101F75232CFDDA81D2B* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression RightExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CRightExpressionU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnaryExpression_get_Type_m1975DEB3A3A893A20EEF225A9B83A818812A457B_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, const RuntimeMethod* method) 
{
	{
		// public UnaryExpressionType Type { get; set; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* UnaryExpression_get_Expression_m048BC347DA44FFBA007ECA3B5C71B26C9A730EED_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression Expression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = __this->___U3CExpressionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ValueExpression_get_Type_mB8AC3CE9703854799ACF44BC217CE9F39ED933E5_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, const RuntimeMethod* method) 
{
	{
		// public ValueType Type { get; set; }
		int32_t L_0 = __this->___U3CTypeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ValueExpression_get_Value_m5114B4BA989CC94C8E5090888632884B9EC3428E_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, const RuntimeMethod* method) 
{
	{
		// public object Value { get; set; }
		RuntimeObject* L_0 = __this->___U3CValueU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* FunctionExpression_get_Identifier_mC36B5723E1F5542170364200861FE75527686D3E_inline (FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* __this, const RuntimeMethod* method) 
{
	{
		// public IdentifierExpression Identifier { get; set; }
		IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* L_0 = __this->___U3CIdentifierU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* IdentifierExpression_get_Name_mEC9209065D0E0A9E5877D0D7CE5C5F06317F27B2_inline (IdentifierExpression_tC5B02681A1745D0F3ADE0B4FBA62CE3118E850E1* __this, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* FunctionExpression_get_Expressions_mDD1CA87B11D2BAE3D578441A3BC83657D0FB9819_inline (FunctionExpression_t3A53FC78B142456333673341D03D61C3A6216BAD* __this, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression[] Expressions { get; set; }
		LogicalExpressionU5BU5D_t49F14F6531BBD5377D7F7213C54828402C75EB0B* L_0 = __this->___U3CExpressionsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_LeftExpression_mA61386087E56C883FC1036D5C1A93347C2C0D7BF_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression LeftExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___value0;
		__this->___U3CLeftExpressionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLeftExpressionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_MiddleExpression_m78AB85AA7179BE64D7C6EEC0D534DED8E16CBB03_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression MiddleExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___value0;
		__this->___U3CMiddleExpressionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMiddleExpressionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TernaryExpression_set_RightExpression_m32C9F11F1B7C64A2853EA2D1EDAA0BC18D0E775E_inline (TernaryExpression_t9A0501B3ED48F564B0F3012DEF0E8D8CCDD106CC* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression RightExpression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___value0;
		__this->___U3CRightExpressionU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRightExpressionU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnaryExpression_set_Type_m99254492E0713042FF17F8993E77B00312BB5DE1_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public UnaryExpressionType Type { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnaryExpression_set_Expression_m458F59A7061112E5568F1C100D0655350B6E9029_inline (UnaryExpression_t7C7A55B898046D406C32F128859B2D1A7C97358E* __this, LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* ___value0, const RuntimeMethod* method) 
{
	{
		// public LogicalExpression Expression { get; set; }
		LogicalExpression_tCA9E3E9B83693197B8F1B3BEE909EEE4BF6FE465* L_0 = ___value0;
		__this->___U3CExpressionU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExpressionU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExpression_set_Value_m48A57BC266A58CFB4A2EF7821805AD556399EC7A_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public object Value { get; set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CValueU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CValueU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ValueExpression_set_Type_mDE7ABF79914D5FC2C93E353268D68AF6DFAB39DF_inline (ValueExpression_t10CE6DF459173F04F6A5B1F499ACB837E737DBC7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public ValueType Type { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CTypeU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
