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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Collections.Generic.IList`1<Unity.VisualScripting.Antlr3.Runtime.IToken>
struct IList_1_tD3E9B3A85068432AAB5C8D67C8B4E4B1FD9EE2DC;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t6EE90D273EFCF5E7E4C37FAB712E70BB6F1B4BFF;
// Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<Unity.VisualScripting.Antlr3.Runtime.IToken>
struct RewriteRuleElementStream_1_t8EDC675AA1FBF4804CEDD8FB0964D889A107F908;
// Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<System.Object>
struct RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// Unity.VisualScripting.Antlr3.Runtime.BitSet[]
struct BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Collections.IDictionary[]
struct IDictionaryU5BU5D_t604DB404DAEF595B12A45890E1D58CF8FF54116C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer
struct BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B;
// Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree
struct BaseTree_t93C88620BBC74C7117CD89A87723D83057772909;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Unity.VisualScripting.Antlr3.Runtime.BitSet
struct BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6;
// Unity.VisualScripting.Antlr3.Runtime.CommonToken
struct CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF;
// Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree
struct CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// Unity.VisualScripting.Antlr3.Runtime.Collections.HashList
struct HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Unity.VisualScripting.Antlr3.Runtime.ICharStream
struct ICharStream_tEE477BBD87D8E66B57909DDE3EBCA406431F031D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.VisualScripting.Antlr3.Runtime.IIntStream
struct IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// Unity.VisualScripting.Antlr3.Runtime.IToken
struct IToken_t620DE9D086BA75DE074EF126922C24743D268A42;
// Unity.VisualScripting.Antlr3.Runtime.ITokenSource
struct ITokenSource_t7B8A9A88E1B36AA6B44922BBAB5AD6DAF4F22C57;
// Unity.VisualScripting.Antlr3.Runtime.Tree.ITree
struct ITree_t701625166D49E7918A0615A08F20EA8219135176;
// Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor
struct ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D;
// Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream
struct ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.VisualScripting.Antlr3.Runtime.MismatchedTreeNodeException
struct MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B;
// Unity.VisualScripting.Antlr3.Runtime.Tree.ParseTree
struct ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C;
// Unity.VisualScripting.Antlr3.Runtime.RecognitionException
struct RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55;
// Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState
struct RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream
struct RewriteRuleSubtreeStream_t4793D69FEBEFC9D5CF762AB98EDEE8C2BC21CC78;
// Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleTokenStream
struct RewriteRuleTokenStream_tF857F389C73F0B72B786E5B774220F3F417E5809;
// Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope
struct RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream
struct TokenRewriteStream_t0B7D1E10AA02F179976EFC3AB7B8C87BC0E4741F;
// Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser
struct TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51;
// Unity.VisualScripting.Antlr3.Runtime.Tree.TreeRuleReturnScope
struct TreeRuleReturnScope_t9097899C64771F9A792E0E9685EFA60C73F087C3;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream/ProcessHandler
struct ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402;
// Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/DeleteOp
struct DeleteOp_tED69947DAA25B218E06B449B2FB4BFA6C4B77E7B;
// Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/InsertBeforeOp
struct InsertBeforeOp_t8ACBF1FE876E93E65284D48EA488E53F08FC81CD;
// Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/ReplaceOp
struct ReplaceOp_tF848F97D788340809335FB95DFAF9B05ED22C76F;
// Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/RewriteOpComparer
struct RewriteOpComparer_t780464B520BA410848446313C8453CF8E7289D78;
// Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/RewriteOperation
struct RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E;

IL2CPP_EXTERN_C RuntimeClass* BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral026F016AC65927DA182AFCA5198EFE7B35E1A532;
IL2CPP_EXTERN_C String_t* _stringLiteral1F66D79B656BDA2916F8C6430ED835605C443B3E;
IL2CPP_EXTERN_C String_t* _stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F;
IL2CPP_EXTERN_C String_t* _stringLiteral3676B1B24AD6D0495AB7DB36401292DFCD7CF597;
IL2CPP_EXTERN_C String_t* _stringLiteral66F9860DC10AF6A9A642103519CA88A3F402D010;
IL2CPP_EXTERN_C String_t* _stringLiteral6C2E3DACDCD262BC3809A6E68DFA4CEFE02982EB;
IL2CPP_EXTERN_C String_t* _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921;
IL2CPP_EXTERN_C String_t* _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11;
IL2CPP_EXTERN_C String_t* _stringLiteral7438AD91821AC09B567FD544C2D0EA346D2713AF;
IL2CPP_EXTERN_C String_t* _stringLiteral8425022ABFE37E7261FEB1DF3415478B19AD4623;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8C0EF5134D52509F51E7C9DE84BE70E531F05B61;
IL2CPP_EXTERN_C String_t* _stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476;
IL2CPP_EXTERN_C String_t* _stringLiteralBF4E73EC9D25562DB8859EF77F71A5B0B584C215;
IL2CPP_EXTERN_C String_t* _stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE8628B031550BC12B52EB454380A691882A82AE1;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteRuleElementStream_1__Next_m359F8DFAD0DBEC93EEF35635A619C977C3A2859A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteRuleElementStream_1__Next_m47F177E6301C3202A0BAC568890430873A3D0675_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteRuleElementStream_1__ctor_m183EA8306A2421FFA71B1ACD18D942B4E64C6B42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteRuleElementStream_1__ctor_m49126BC51F1EECAB950A29F8068B471E02114CBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteRuleElementStream_1__ctor_m4D0205C3A7FB4E480ECA7D5B64AB069C75AAEC4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteRuleElementStream_1__ctor_m61FA582637EE1FED9AF128C0F0AA0457A15D8C19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteRuleElementStream_1__ctor_m6EF1D42ED24F3E6758E8C56C428E50BB167FDB87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteRuleElementStream_1__ctor_mC9219E8EE031B3BA80B3E884F7DC4D088A03A962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteRuleElementStream_1__ctor_mFD5E9B5CED50BED7746C1978ED2E74E43B83B0E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteRuleElementStream_1__ctor_mFFEF779612E220BFB4FF9AFC0A1DDEE837D7A900_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteRuleElementStream_1_get_Count_mB061A82734562491F2E1C06AA267C4BF1C7AFB93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteRuleSubtreeStream_U3CNextNodeU3Eb__0_mDF67429C8EB6E0069319E2A79A2C80115368BDF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteRuleSubtreeStream_U3CNextTreeU3Eb__1_mEFD5D87110D50E7B73BA164D01EF1D3B76D385EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TreeParser_RecoverFromMismatchedToken_m3149D3F1D4060BCC6FD5753D79F5AD42176E21F5_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<Unity.VisualScripting.Antlr3.Runtime.IToken>
struct RewriteRuleElementStream_1_t8EDC675AA1FBF4804CEDD8FB0964D889A107F908  : public RuntimeObject
{
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1::cursor
	int32_t ___cursor_0;
	// T Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1::singleElement
	RuntimeObject* ___singleElement_1;
	// System.Collections.Generic.IList`1<T> Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1::elements
	RuntimeObject* ___elements_2;
	// System.Boolean Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1::dirty
	bool ___dirty_3;
	// System.String Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1::elementDescription
	String_t* ___elementDescription_4;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1::adaptor
	RuntimeObject* ___adaptor_5;
};

// Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<System.Object>
struct RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58  : public RuntimeObject
{
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1::cursor
	int32_t ___cursor_0;
	// T Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1::singleElement
	RuntimeObject* ___singleElement_1;
	// System.Collections.Generic.IList`1<T> Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1::elements
	RuntimeObject* ___elements_2;
	// System.Boolean Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1::dirty
	bool ___dirty_3;
	// System.String Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1::elementDescription
	String_t* ___elementDescription_4;
	// Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1::adaptor
	RuntimeObject* ___adaptor_5;
};
struct Il2CppArrayBounds;

// Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer
struct BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B  : public RuntimeObject
{
	// Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::state
	RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* ___state_6;
};

struct BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_StaticFields
{
	// System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::NEXT_TOKEN_RULE_NAME
	String_t* ___NEXT_TOKEN_RULE_NAME_5;
};

// Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree
struct BaseTree_t93C88620BBC74C7117CD89A87723D83057772909  : public RuntimeObject
{
	// System.Collections.IList Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::children
	RuntimeObject* ___children_0;
};

// Unity.VisualScripting.Antlr3.Runtime.BitSet
struct BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6  : public RuntimeObject
{
	// System.UInt64[] Unity.VisualScripting.Antlr3.Runtime.BitSet::bits
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___bits_3;
};

struct BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6_StaticFields
{
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.BitSet::MOD_MASK
	int32_t ___MOD_MASK_2;
};

// Unity.VisualScripting.Antlr3.Runtime.CommonToken
struct CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF  : public RuntimeObject
{
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::type
	int32_t ___type_0;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::line
	int32_t ___line_1;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::charPositionInLine
	int32_t ___charPositionInLine_2;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::channel
	int32_t ___channel_3;
	// Unity.VisualScripting.Antlr3.Runtime.ICharStream Unity.VisualScripting.Antlr3.Runtime.CommonToken::input
	RuntimeObject* ___input_4;
	// System.String Unity.VisualScripting.Antlr3.Runtime.CommonToken::text
	String_t* ___text_5;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::index
	int32_t ___index_6;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::start
	int32_t ___start_7;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonToken::stop
	int32_t ___stop_8;
};

// Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream
struct CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A  : public RuntimeObject
{
	// Unity.VisualScripting.Antlr3.Runtime.ITokenSource Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::tokenSource
	RuntimeObject* ___tokenSource_0;
	// System.Collections.IList Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::tokens
	RuntimeObject* ___tokens_1;
	// System.Collections.IDictionary Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::channelOverrideMap
	RuntimeObject* ___channelOverrideMap_2;
	// Unity.VisualScripting.Antlr3.Runtime.Collections.HashList Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::discardSet
	HashList_t56D0AB4498A42AABCDBEDC36568089E25F48947E* ___discardSet_3;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::channel
	int32_t ___channel_4;
	// System.Boolean Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::discardOffChannelTokens
	bool ___discardOffChannelTokens_5;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::lastMarker
	int32_t ___lastMarker_6;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::p
	int32_t ___p_7;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState
struct RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0  : public RuntimeObject
{
	// Unity.VisualScripting.Antlr3.Runtime.BitSet[] Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::following
	BitSetU5BU5D_tAD1E81ACD53196F8764DA76829DE95533DDC1588* ___following_0;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::followingStackPointer
	int32_t ___followingStackPointer_1;
	// System.Boolean Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::errorRecovery
	bool ___errorRecovery_2;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::lastErrorIndex
	int32_t ___lastErrorIndex_3;
	// System.Boolean Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::failed
	bool ___failed_4;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::syntaxErrors
	int32_t ___syntaxErrors_5;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::backtracking
	int32_t ___backtracking_6;
	// System.Collections.IDictionary[] Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::ruleMemo
	IDictionaryU5BU5D_t604DB404DAEF595B12A45890E1D58CF8FF54116C* ___ruleMemo_7;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::token
	RuntimeObject* ___token_8;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::tokenStartCharIndex
	int32_t ___tokenStartCharIndex_9;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::tokenStartLine
	int32_t ___tokenStartLine_10;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::tokenStartCharPositionInLine
	int32_t ___tokenStartCharPositionInLine_11;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::channel
	int32_t ___channel_12;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::type
	int32_t ___type_13;
	// System.String Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState::text
	String_t* ___text_14;
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

// Unity.VisualScripting.Antlr3.Runtime.Token
struct Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05  : public RuntimeObject
{
};

struct Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields
{
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Token::MIN_TOKEN_TYPE
	int32_t ___MIN_TOKEN_TYPE_6;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Token::EOF
	int32_t ___EOF_7;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Token::EOF_TOKEN
	RuntimeObject* ___EOF_TOKEN_8;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Token::INVALID_TOKEN
	RuntimeObject* ___INVALID_TOKEN_9;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Token::SKIP_TOKEN
	RuntimeObject* ___SKIP_TOKEN_10;
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

// Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/RewriteOpComparer
struct RewriteOpComparer_t780464B520BA410848446313C8453CF8E7289D78  : public RuntimeObject
{
};

// Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/RewriteOperation
struct RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E  : public RuntimeObject
{
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/RewriteOperation::instructionIndex
	int32_t ___instructionIndex_0;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/RewriteOperation::index
	int32_t ___index_1;
	// System.Object Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/RewriteOperation::text
	RuntimeObject* ___text_2;
	// Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/RewriteOperation::parent
	TokenRewriteStream_t0B7D1E10AA02F179976EFC3AB7B8C87BC0E4741F* ___parent_3;
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

// Unity.VisualScripting.Antlr3.Runtime.Tree.ParseTree
struct ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C  : public BaseTree_t93C88620BBC74C7117CD89A87723D83057772909
{
	// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ParseTree::payload
	RuntimeObject* ___payload_1;
	// System.Collections.IList Unity.VisualScripting.Antlr3.Runtime.Tree.ParseTree::hiddenTokens
	RuntimeObject* ___hiddenTokens_2;
};

// Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream
struct RewriteRuleSubtreeStream_t4793D69FEBEFC9D5CF762AB98EDEE8C2BC21CC78  : public RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58
{
};

// Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleTokenStream
struct RewriteRuleTokenStream_tF857F389C73F0B72B786E5B774220F3F417E5809  : public RewriteRuleElementStream_1_t8EDC675AA1FBF4804CEDD8FB0964D889A107F908
{
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream
struct TokenRewriteStream_t0B7D1E10AA02F179976EFC3AB7B8C87BC0E4741F  : public CommonTokenStream_t9E028DF446BECDBE8FDBD048748569978EBFE71A
{
	// System.Collections.IDictionary Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream::programs
	RuntimeObject* ___programs_11;
	// System.Collections.IDictionary Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream::lastRewriteTokenIndexes
	RuntimeObject* ___lastRewriteTokenIndexes_12;
};

// Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser
struct TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51  : public BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B
{
	// Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::input
	RuntimeObject* ___input_15;
};

struct TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_StaticFields
{
	// System.String Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::dotdot
	String_t* ___dotdot_9;
	// System.String Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::doubleEtc
	String_t* ___doubleEtc_10;
	// System.String Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::spaces
	String_t* ___spaces_11;
	// System.Text.RegularExpressions.Regex Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::dotdotPattern
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___dotdotPattern_12;
	// System.Text.RegularExpressions.Regex Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::doubleEtcPattern
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___doubleEtcPattern_13;
	// System.Text.RegularExpressions.Regex Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::spacesPattern
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___spacesPattern_14;
};

// Unity.VisualScripting.Antlr3.Runtime.Tree.TreeRuleReturnScope
struct TreeRuleReturnScope_t9097899C64771F9A792E0E9685EFA60C73F087C3  : public RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2
{
	// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.TreeRuleReturnScope::start
	RuntimeObject* ___start_0;
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

// Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/InsertBeforeOp
struct InsertBeforeOp_t8ACBF1FE876E93E65284D48EA488E53F08FC81CD  : public RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E
{
};

// Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/ReplaceOp
struct ReplaceOp_tF848F97D788340809335FB95DFAF9B05ED22C76F  : public RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E
{
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/ReplaceOp::lastIndex
	int32_t ___lastIndex_4;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// System.Text.RegularExpressions.RegexOptions
struct RegexOptions_tE9DA9C4DF8FB26DD1C7E0F8AA022C1164A423F6B 
{
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/DeleteOp
struct DeleteOp_tED69947DAA25B218E06B449B2FB4BFA6C4B77E7B  : public ReplaceOp_tF848F97D788340809335FB95DFAF9B05ED22C76F
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Unity.VisualScripting.Antlr3.Runtime.RecognitionException
struct RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55  : public Exception_t
{
	// Unity.VisualScripting.Antlr3.Runtime.IIntStream Unity.VisualScripting.Antlr3.Runtime.RecognitionException::input
	RuntimeObject* ___input_18;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::index
	int32_t ___index_19;
	// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.RecognitionException::token
	RuntimeObject* ___token_20;
	// System.Object Unity.VisualScripting.Antlr3.Runtime.RecognitionException::node
	RuntimeObject* ___node_21;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::c
	int32_t ___c_22;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::line
	int32_t ___line_23;
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::charPositionInLine
	int32_t ___charPositionInLine_24;
	// System.Boolean Unity.VisualScripting.Antlr3.Runtime.RecognitionException::approximateLineInfo
	bool ___approximateLineInfo_25;
};

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// Unity.VisualScripting.Antlr3.Runtime.MismatchedTreeNodeException
struct MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B  : public RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55
{
	// System.Int32 Unity.VisualScripting.Antlr3.Runtime.MismatchedTreeNodeException::expecting
	int32_t ___expecting_26;
};

// Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream/ProcessHandler
struct ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<System.Object>::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream_1__ctor_m183EA8306A2421FFA71B1ACD18D942B4E64C6B42_gshared (RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<System.Object>::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream_1__ctor_m49126BC51F1EECAB950A29F8068B471E02114CBE_gshared (RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___oneElement2, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<System.Object>::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.Generic.IList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream_1__ctor_mFD5E9B5CED50BED7746C1978ED2E74E43B83B0E6_gshared (RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<System.Object>::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream_1__ctor_mFFEF779612E220BFB4FF9AFC0A1DDEE837D7A900_gshared (RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method) ;
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<System.Object>::_Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleElementStream_1__Next_m47F177E6301C3202A0BAC568890430873A3D0675_gshared (RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RewriteRuleElementStream_1_get_Count_mB061A82734562491F2E1C06AA267C4BF1C7AFB93_gshared (RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/RewriteOperation::.ctor(System.Int32,System.Object,Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteOperation__ctor_mCCE52963E4EDB5A43B9835C7204A94727C3BC468 (RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E* __this, int32_t ___index0, RuntimeObject* ___text1, TokenRewriteStream_t0B7D1E10AA02F179976EFC3AB7B8C87BC0E4741F* ___parent2, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63 (StringBuilder_t* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/ReplaceOp::.ctor(System.Int32,System.Int32,System.Object,Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplaceOp__ctor_m79D2EA24E0EE76F2E4678D183A3A0679EA63FA8C (ReplaceOp_tF848F97D788340809335FB95DFAF9B05ED22C76F* __this, int32_t ___from0, int32_t ___to1, RuntimeObject* ___text2, TokenRewriteStream_t0B7D1E10AA02F179976EFC3AB7B8C87BC0E4741F* ___parent3, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<System.Object>::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String)
inline void RewriteRuleElementStream_1__ctor_m183EA8306A2421FFA71B1ACD18D942B4E64C6B42 (RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, const RuntimeMethod* method)
{
	((  void (*) (RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58*, RuntimeObject*, String_t*, const RuntimeMethod*))RewriteRuleElementStream_1__ctor_m183EA8306A2421FFA71B1ACD18D942B4E64C6B42_gshared)(__this, ___adaptor0, ___elementDescription1, method);
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<System.Object>::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String,T)
inline void RewriteRuleElementStream_1__ctor_m49126BC51F1EECAB950A29F8068B471E02114CBE (RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___oneElement2, const RuntimeMethod* method)
{
	((  void (*) (RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58*, RuntimeObject*, String_t*, RuntimeObject*, const RuntimeMethod*))RewriteRuleElementStream_1__ctor_m49126BC51F1EECAB950A29F8068B471E02114CBE_gshared)(__this, ___adaptor0, ___elementDescription1, ___oneElement2, method);
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<System.Object>::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.Generic.IList`1<T>)
inline void RewriteRuleElementStream_1__ctor_mFD5E9B5CED50BED7746C1978ED2E74E43B83B0E6 (RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method)
{
	((  void (*) (RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58*, RuntimeObject*, String_t*, RuntimeObject*, const RuntimeMethod*))RewriteRuleElementStream_1__ctor_mFD5E9B5CED50BED7746C1978ED2E74E43B83B0E6_gshared)(__this, ___adaptor0, ___elementDescription1, ___elements2, method);
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<System.Object>::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.IList)
inline void RewriteRuleElementStream_1__ctor_mFFEF779612E220BFB4FF9AFC0A1DDEE837D7A900 (RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method)
{
	((  void (*) (RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58*, RuntimeObject*, String_t*, RuntimeObject*, const RuntimeMethod*))RewriteRuleElementStream_1__ctor_mFFEF779612E220BFB4FF9AFC0A1DDEE837D7A900_gshared)(__this, ___adaptor0, ___elementDescription1, ___elements2, method);
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream/ProcessHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessHandler__ctor_m84789C054378ED9ECF54610B85831E692FC144A8 (ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream::FetchObject(Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream/ProcessHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleSubtreeStream_FetchObject_mAD34B86F9CE3BE8FE17379795F3954CD9AC1568B (RewriteRuleSubtreeStream_t4793D69FEBEFC9D5CF762AB98EDEE8C2BC21CC78* __this, ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* ___ph0, const RuntimeMethod* method) ;
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream::RequiresDuplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewriteRuleSubtreeStream_RequiresDuplication_m53A8B41706BF12AD5D913E80B61EAB757A2ABA2D (RewriteRuleSubtreeStream_t4793D69FEBEFC9D5CF762AB98EDEE8C2BC21CC78* __this, const RuntimeMethod* method) ;
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<System.Object>::_Next()
inline RuntimeObject* RewriteRuleElementStream_1__Next_m47F177E6301C3202A0BAC568890430873A3D0675 (RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58*, const RuntimeMethod*))RewriteRuleElementStream_1__Next_m47F177E6301C3202A0BAC568890430873A3D0675_gshared)(__this, method);
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream/ProcessHandler::Invoke(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_inline (ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* __this, RuntimeObject* ___o0, const RuntimeMethod* method) ;
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<System.Object>::get_Count()
inline int32_t RewriteRuleElementStream_1_get_Count_mB061A82734562491F2E1C06AA267C4BF1C7AFB93 (RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58*, const RuntimeMethod*))RewriteRuleElementStream_1_get_Count_mB061A82734562491F2E1C06AA267C4BF1C7AFB93_gshared)(__this, method);
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream::Dup(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleSubtreeStream_Dup_m99A1C61ED6D9BCC40C125AE7D685164D490BE10A (RewriteRuleSubtreeStream_t4793D69FEBEFC9D5CF762AB98EDEE8C2BC21CC78* __this, RuntimeObject* ___el0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.RuleReturnScope::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuleReturnScope__ctor_m5D6A8AFA6864551D0E669074293F2003DBB500A6 (RuleReturnScope_tBBA077276043AD26E315A940C7809AFF65237FE2* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer__ctor_m1896802BFE995C01D0331380FA3FB24C21A257E7 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::.ctor(Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer__ctor_m7F1EE5D983A174EEDC315B30CB8D40992468ECAC (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* ___state0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.CommonToken::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken__ctor_m5B378A324216AAA7529462F6C80B92DC0DD004E4 (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* __this, int32_t ___type0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.CommonTree::.ctor(Unity.VisualScripting.Antlr3.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree__ctor_m333F7053371ADDD87ED32F45659B7230D9DB2B35 (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* __this, RuntimeObject* ___t0, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_Reset_m1BCCB93F4B484CBC862B17E5D0F796C76EB03973 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.MismatchedTreeNodeException::.ctor(System.Int32,Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedTreeNodeException__ctor_mEA3956B7D2F9B73B95E80C3A3AB541FDEBC04B11 (MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B* __this, int32_t ___expecting0, RuntimeObject* ___input1, const RuntimeMethod* method) ;
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_Line()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Line_mCF2F4576F154C8738C51851743302742941DE8F7_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_CharPositionInLine()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_CharPositionInLine_m27A503034EEA24F46F5061A077DBB7F7B3F84A5A_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) ;
// Unity.VisualScripting.Antlr3.Runtime.IIntStream Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_Input()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Input_m2A5456E8C6D96D19FEF877E1742417DB61378DB2_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) ;
// System.Object Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_Node()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Node_mF9017E74E9C1676B91BA3B92682C2370C1ABA345_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.RecognitionException::set_Token(Unity.VisualScripting.Antlr3.Runtime.IToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecognitionException_set_Token_mA3FEDA6DA97167AFDE5777C082A4D144BED3B8F9_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.RecognitionException::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Token_mBCAF7259CFD09E204848CE13E4347C4D3F2057FF_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) ;
// System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::GetErrorMessage(Unity.VisualScripting.Antlr3.Runtime.RecognitionException,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseRecognizer_GetErrorMessage_m0BE8FCB0FDC9E8744ACB54A082DF3DC455A4CE85 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___e0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenNames1, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::TraceIn(System.String,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_TraceIn_mE3FAE977EB7787C61AA80B57F79DC05416997660 (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, String_t* ___ruleName0, int32_t ___ruleIndex1, RuntimeObject* ___inputSymbol2, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::TraceOut(System.String,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_TraceOut_m1D0C438AEE661769DEAB2B61138578F1B94862DB (BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B* __this, String_t* ___ruleName0, int32_t ___ruleIndex1, RuntimeObject* ___inputSymbol2, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621 (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<Unity.VisualScripting.Antlr3.Runtime.IToken>::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String)
inline void RewriteRuleElementStream_1__ctor_m4D0205C3A7FB4E480ECA7D5B64AB069C75AAEC4A (RewriteRuleElementStream_1_t8EDC675AA1FBF4804CEDD8FB0964D889A107F908* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, const RuntimeMethod* method)
{
	((  void (*) (RewriteRuleElementStream_1_t8EDC675AA1FBF4804CEDD8FB0964D889A107F908*, RuntimeObject*, String_t*, const RuntimeMethod*))RewriteRuleElementStream_1__ctor_m183EA8306A2421FFA71B1ACD18D942B4E64C6B42_gshared)(__this, ___adaptor0, ___elementDescription1, method);
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<Unity.VisualScripting.Antlr3.Runtime.IToken>::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String,T)
inline void RewriteRuleElementStream_1__ctor_m61FA582637EE1FED9AF128C0F0AA0457A15D8C19 (RewriteRuleElementStream_1_t8EDC675AA1FBF4804CEDD8FB0964D889A107F908* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___oneElement2, const RuntimeMethod* method)
{
	((  void (*) (RewriteRuleElementStream_1_t8EDC675AA1FBF4804CEDD8FB0964D889A107F908*, RuntimeObject*, String_t*, RuntimeObject*, const RuntimeMethod*))RewriteRuleElementStream_1__ctor_m49126BC51F1EECAB950A29F8068B471E02114CBE_gshared)(__this, ___adaptor0, ___elementDescription1, ___oneElement2, method);
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<Unity.VisualScripting.Antlr3.Runtime.IToken>::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.Generic.IList`1<T>)
inline void RewriteRuleElementStream_1__ctor_mC9219E8EE031B3BA80B3E884F7DC4D088A03A962 (RewriteRuleElementStream_1_t8EDC675AA1FBF4804CEDD8FB0964D889A107F908* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method)
{
	((  void (*) (RewriteRuleElementStream_1_t8EDC675AA1FBF4804CEDD8FB0964D889A107F908*, RuntimeObject*, String_t*, RuntimeObject*, const RuntimeMethod*))RewriteRuleElementStream_1__ctor_mFD5E9B5CED50BED7746C1978ED2E74E43B83B0E6_gshared)(__this, ___adaptor0, ___elementDescription1, ___elements2, method);
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<Unity.VisualScripting.Antlr3.Runtime.IToken>::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.IList)
inline void RewriteRuleElementStream_1__ctor_m6EF1D42ED24F3E6758E8C56C428E50BB167FDB87 (RewriteRuleElementStream_1_t8EDC675AA1FBF4804CEDD8FB0964D889A107F908* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method)
{
	((  void (*) (RewriteRuleElementStream_1_t8EDC675AA1FBF4804CEDD8FB0964D889A107F908*, RuntimeObject*, String_t*, RuntimeObject*, const RuntimeMethod*))RewriteRuleElementStream_1__ctor_mFFEF779612E220BFB4FF9AFC0A1DDEE837D7A900_gshared)(__this, ___adaptor0, ___elementDescription1, ___elements2, method);
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleElementStream`1<Unity.VisualScripting.Antlr3.Runtime.IToken>::_Next()
inline RuntimeObject* RewriteRuleElementStream_1__Next_m359F8DFAD0DBEC93EEF35635A619C977C3A2859A (RewriteRuleElementStream_1_t8EDC675AA1FBF4804CEDD8FB0964D889A107F908* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RewriteRuleElementStream_1_t8EDC675AA1FBF4804CEDD8FB0964D889A107F908*, const RuntimeMethod*))RewriteRuleElementStream_1__Next_m47F177E6301C3202A0BAC568890430873A3D0675_gshared)(__this, method);
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.BaseTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTree__ctor_m9BBF12D742E39E6AB8F68D47E5DB68CC882A37DF (BaseTree_t93C88620BBC74C7117CD89A87723D83057772909* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ParseTree::_ToStringLeaves(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseTree__ToStringLeaves_m0CCB810CFFEC26474E54673AE57B0970407CC7D7 (ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C* __this, StringBuilder_t* ___buf0, const RuntimeMethod* method) ;
// System.String Unity.VisualScripting.Antlr3.Runtime.Tree.ParseTree::ToStringWithHiddenTokens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParseTree_ToStringWithHiddenTokens_mF05C5D79C24345D6F7D81CF359E8FBCCCF6C5536 (ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/RewriteOpComparer::Compare(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RewriteOpComparer_Compare_mA291BCEC1A4F54AFE03BE0EBA25FEE5497455C40 (RewriteOpComparer_t780464B520BA410848446313C8453CF8E7289D78* __this, RuntimeObject* ___o10, RuntimeObject* ___o21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E* V_0 = NULL;
	RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___o10;
		V_0 = ((RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E*)CastclassClass((RuntimeObject*)L_0, RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = ___o21;
		V_1 = ((RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E*)CastclassClass((RuntimeObject*)L_1, RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E_il2cpp_TypeInfo_var));
		RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->___index_1;
		RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E* L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = L_4->___index_1;
		if ((((int32_t)L_3) >= ((int32_t)L_5)))
		{
			goto IL_001e;
		}
	}
	{
		return (-1);
	}

IL_001e:
	{
		RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->___index_1;
		RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9 = L_8->___index_1;
		if ((((int32_t)L_7) <= ((int32_t)L_9)))
		{
			goto IL_002e;
		}
	}
	{
		return 1;
	}

IL_002e:
	{
		return 0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/RewriteOpComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteOpComparer__ctor_mD80BCC476275C1975AF6F9D98D561EFDA2ADAD97 (RewriteOpComparer_t780464B520BA410848446313C8453CF8E7289D78* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/RewriteOperation::.ctor(System.Int32,System.Object,Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteOperation__ctor_mCCE52963E4EDB5A43B9835C7204A94727C3BC468 (RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E* __this, int32_t ___index0, RuntimeObject* ___text1, TokenRewriteStream_t0B7D1E10AA02F179976EFC3AB7B8C87BC0E4741F* ___parent2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___index0;
		__this->___index_1 = L_0;
		RuntimeObject* L_1 = ___text1;
		__this->___text_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_2), (void*)L_1);
		TokenRewriteStream_t0B7D1E10AA02F179976EFC3AB7B8C87BC0E4741F* L_2 = ___parent2;
		__this->___parent_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_3), (void*)L_2);
		return;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/RewriteOperation::Execute(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RewriteOperation_Execute_m3A06F2E1144CE4BCDCE15F6CFAC62FF8E57AF180 (RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E* __this, StringBuilder_t* ___buf0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___index_1;
		return L_0;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/RewriteOperation::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RewriteOperation_ToString_m013A60A9811B50A220939F46DB6260E26712EAA5 (RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C2E3DACDCD262BC3809A6E68DFA4CEFE02982EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8628B031550BC12B52EB454380A691882A82AE1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	{
		Type_t* L_0;
		L_0 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(__this, NULL);
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String System.Type::get_FullName() */, L_0);
		V_0 = L_1;
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_mE21E78F35EF4A7768E385A72814C88D22B689966(L_2, ((int32_t)36), NULL);
		V_1 = L_3;
		String_t* L_4 = V_0;
		int32_t L_5 = V_1;
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		int32_t L_8 = V_1;
		NullCheck(L_4);
		String_t* L_9;
		L_9 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_4, ((int32_t)il2cpp_codegen_add(L_5, 1)), ((int32_t)il2cpp_codegen_subtract(L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)))), NULL);
		V_0 = L_9;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		V_2 = L_10;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_2;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral725B1CAFF9B49E1231FDA15B85166BBEFAA36A11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_2;
		String_t* L_13 = V_0;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_2;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteralBA1039E8CDAE53E44AC3E6185B0871F3D031A476);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_2;
		int32_t L_16 = __this->___index_1;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_2;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralE8628B031550BC12B52EB454380A691882A82AE1);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralE8628B031550BC12B52EB454380A691882A82AE1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_2;
		RuntimeObject* L_21 = __this->___text_2;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = V_2;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral6C2E3DACDCD262BC3809A6E68DFA4CEFE02982EB);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)_stringLiteral6C2E3DACDCD262BC3809A6E68DFA4CEFE02982EB);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = V_2;
		String_t* L_24;
		L_24 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_23, NULL);
		return L_24;
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/InsertBeforeOp::.ctor(System.Int32,System.Object,Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InsertBeforeOp__ctor_m8DD88582087886C2093CEF002928926849FE51F5 (InsertBeforeOp_t8ACBF1FE876E93E65284D48EA488E53F08FC81CD* __this, int32_t ___index0, RuntimeObject* ___text1, TokenRewriteStream_t0B7D1E10AA02F179976EFC3AB7B8C87BC0E4741F* ___parent2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___index0;
		RuntimeObject* L_1 = ___text1;
		TokenRewriteStream_t0B7D1E10AA02F179976EFC3AB7B8C87BC0E4741F* L_2 = ___parent2;
		RewriteOperation__ctor_mCCE52963E4EDB5A43B9835C7204A94727C3BC468(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/InsertBeforeOp::Execute(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InsertBeforeOp_Execute_mAA14B119600B02AB587D81B7E644CDFD55598E31 (InsertBeforeOp_t8ACBF1FE876E93E65284D48EA488E53F08FC81CD* __this, StringBuilder_t* ___buf0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = ___buf0;
		RuntimeObject* L_1 = ((RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E*)__this)->___text_2;
		NullCheck(L_0);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_0, L_1, NULL);
		StringBuilder_t* L_3 = ___buf0;
		TokenRewriteStream_t0B7D1E10AA02F179976EFC3AB7B8C87BC0E4741F* L_4 = ((RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E*)__this)->___parent_3;
		int32_t L_5 = ((RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E*)__this)->___index_1;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(21 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.CommonTokenStream::Get(System.Int32) */, L_4, L_5);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.IToken::get_Text() */, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_3);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, L_7, NULL);
		int32_t L_9 = ((RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E*)__this)->___index_1;
		return ((int32_t)il2cpp_codegen_add(L_9, 1));
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/ReplaceOp::.ctor(System.Int32,System.Int32,System.Object,Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReplaceOp__ctor_m79D2EA24E0EE76F2E4678D183A3A0679EA63FA8C (ReplaceOp_tF848F97D788340809335FB95DFAF9B05ED22C76F* __this, int32_t ___from0, int32_t ___to1, RuntimeObject* ___text2, TokenRewriteStream_t0B7D1E10AA02F179976EFC3AB7B8C87BC0E4741F* ___parent3, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___from0;
		RuntimeObject* L_1 = ___text2;
		TokenRewriteStream_t0B7D1E10AA02F179976EFC3AB7B8C87BC0E4741F* L_2 = ___parent3;
		RewriteOperation__ctor_mCCE52963E4EDB5A43B9835C7204A94727C3BC468(__this, L_0, L_1, L_2, NULL);
		int32_t L_3 = ___to1;
		__this->___lastIndex_4 = L_3;
		return;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/ReplaceOp::Execute(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReplaceOp_Execute_mB876F3254DA614CBE7B56EA01D21076BCCCABC27 (ReplaceOp_tF848F97D788340809335FB95DFAF9B05ED22C76F* __this, StringBuilder_t* ___buf0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ((RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E*)__this)->___text_2;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		StringBuilder_t* L_1 = ___buf0;
		RuntimeObject* L_2 = ((RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E*)__this)->___text_2;
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m3A7D629DAA5E0E36B8A617A911E34F79AF84AE63(L_1, L_2, NULL);
	}

IL_0015:
	{
		int32_t L_4 = __this->___lastIndex_4;
		return ((int32_t)il2cpp_codegen_add(L_4, 1));
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/ReplaceOp::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReplaceOp_ToString_mB0BF77B78C67292FBA2F56C46D833CC184619AAD (ReplaceOp_tF848F97D788340809335FB95DFAF9B05ED22C76F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66F9860DC10AF6A9A642103519CA88A3F402D010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C2E3DACDCD262BC3809A6E68DFA4CEFE02982EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8628B031550BC12B52EB454380A691882A82AE1);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral66F9860DC10AF6A9A642103519CA88A3F402D010);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral66F9860DC10AF6A9A642103519CA88A3F402D010);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		int32_t L_3 = ((RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E*)__this)->___index_1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		int32_t L_8 = __this->___lastIndex_4;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralE8628B031550BC12B52EB454380A691882A82AE1);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralE8628B031550BC12B52EB454380A691882A82AE1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		RuntimeObject* L_13 = ((RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E*)__this)->___text_2;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral6C2E3DACDCD262BC3809A6E68DFA4CEFE02982EB);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)_stringLiteral6C2E3DACDCD262BC3809A6E68DFA4CEFE02982EB);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
		String_t* L_16;
		L_16 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_15, NULL);
		return L_16;
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/DeleteOp::.ctor(System.Int32,System.Int32,Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeleteOp__ctor_m37061D987A99D71449272D0583DC06B5A5BDCC69 (DeleteOp_tED69947DAA25B218E06B449B2FB4BFA6C4B77E7B* __this, int32_t ___from0, int32_t ___to1, TokenRewriteStream_t0B7D1E10AA02F179976EFC3AB7B8C87BC0E4741F* ___parent2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___from0;
		int32_t L_1 = ___to1;
		TokenRewriteStream_t0B7D1E10AA02F179976EFC3AB7B8C87BC0E4741F* L_2 = ___parent2;
		ReplaceOp__ctor_m79D2EA24E0EE76F2E4678D183A3A0679EA63FA8C(__this, L_0, L_1, NULL, L_2, NULL);
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.TokenRewriteStream/DeleteOp::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DeleteOp_ToString_mBC21FD09E97FDDBB74E212470A6698719D45CAAC (DeleteOp_tED69947DAA25B218E06B449B2FB4BFA6C4B77E7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7438AD91821AC09B567FD544C2D0EA346D2713AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral7438AD91821AC09B567FD544C2D0EA346D2713AF);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteral7438AD91821AC09B567FD544C2D0EA346D2713AF);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = V_0;
		int32_t L_3 = ((RewriteOperation_tC2B47753752A9B47069C407A9785DADDEABB542E*)__this)->___index_1;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral26DC9E6A16A2B862023CCDC29E42E5404E9ACD4F);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		int32_t L_8 = ((ReplaceOp_tF848F97D788340809335FB95DFAF9B05ED22C76F*)__this)->___lastIndex_4;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		String_t* L_13;
		L_13 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_12, NULL);
		return L_13;
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleSubtreeStream__ctor_m2184CF754C52335CB78FA92A3F95B25D2807229E (RewriteRuleSubtreeStream_t4793D69FEBEFC9D5CF762AB98EDEE8C2BC21CC78* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewriteRuleElementStream_1__ctor_m183EA8306A2421FFA71B1ACD18D942B4E64C6B42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RewriteRuleElementStream_1__ctor_m183EA8306A2421FFA71B1ACD18D942B4E64C6B42(__this, L_0, L_1, RewriteRuleElementStream_1__ctor_m183EA8306A2421FFA71B1ACD18D942B4E64C6B42_RuntimeMethod_var);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleSubtreeStream__ctor_mE108EFE074715AA5C55CBE9C0FEB777BA98793BD (RewriteRuleSubtreeStream_t4793D69FEBEFC9D5CF762AB98EDEE8C2BC21CC78* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___oneElement2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewriteRuleElementStream_1__ctor_m49126BC51F1EECAB950A29F8068B471E02114CBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RuntimeObject* L_2 = ___oneElement2;
		RewriteRuleElementStream_1__ctor_m49126BC51F1EECAB950A29F8068B471E02114CBE(__this, L_0, L_1, L_2, RewriteRuleElementStream_1__ctor_m49126BC51F1EECAB950A29F8068B471E02114CBE_RuntimeMethod_var);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.Generic.IList`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleSubtreeStream__ctor_mB798C35CF8179C3CFFB4E977C0B84B208EDC6AC7 (RewriteRuleSubtreeStream_t4793D69FEBEFC9D5CF762AB98EDEE8C2BC21CC78* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewriteRuleElementStream_1__ctor_mFD5E9B5CED50BED7746C1978ED2E74E43B83B0E6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RuntimeObject* L_2 = ___elements2;
		RewriteRuleElementStream_1__ctor_mFD5E9B5CED50BED7746C1978ED2E74E43B83B0E6(__this, L_0, L_1, L_2, RewriteRuleElementStream_1__ctor_mFD5E9B5CED50BED7746C1978ED2E74E43B83B0E6_RuntimeMethod_var);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleSubtreeStream__ctor_m4E15217C39AB5BA9B968E39A5178F477EC91A5A2 (RewriteRuleSubtreeStream_t4793D69FEBEFC9D5CF762AB98EDEE8C2BC21CC78* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewriteRuleElementStream_1__ctor_mFFEF779612E220BFB4FF9AFC0A1DDEE837D7A900_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RuntimeObject* L_2 = ___elements2;
		RewriteRuleElementStream_1__ctor_mFFEF779612E220BFB4FF9AFC0A1DDEE837D7A900(__this, L_0, L_1, L_2, RewriteRuleElementStream_1__ctor_mFFEF779612E220BFB4FF9AFC0A1DDEE837D7A900_RuntimeMethod_var);
		return;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream::NextNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleSubtreeStream_NextNode_m6EE2716AF10224DAA15688585ACE863E43D685A4 (RewriteRuleSubtreeStream_t4793D69FEBEFC9D5CF762AB98EDEE8C2BC21CC78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewriteRuleSubtreeStream_U3CNextNodeU3Eb__0_mDF67429C8EB6E0069319E2A79A2C80115368BDF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* L_0 = (ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402*)il2cpp_codegen_object_new(ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ProcessHandler__ctor_m84789C054378ED9ECF54610B85831E692FC144A8(L_0, __this, (intptr_t)((void*)RewriteRuleSubtreeStream_U3CNextNodeU3Eb__0_mDF67429C8EB6E0069319E2A79A2C80115368BDF2_RuntimeMethod_var), NULL);
		RuntimeObject* L_1;
		L_1 = RewriteRuleSubtreeStream_FetchObject_mAD34B86F9CE3BE8FE17379795F3954CD9AC1568B(__this, L_0, NULL);
		return L_1;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream::FetchObject(Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream/ProcessHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleSubtreeStream_FetchObject_mAD34B86F9CE3BE8FE17379795F3954CD9AC1568B (RewriteRuleSubtreeStream_t4793D69FEBEFC9D5CF762AB98EDEE8C2BC21CC78* __this, ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* ___ph0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewriteRuleElementStream_1__Next_m47F177E6301C3202A0BAC568890430873A3D0675_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = RewriteRuleSubtreeStream_RequiresDuplication_m53A8B41706BF12AD5D913E80B61EAB757A2ABA2D(__this, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* L_1 = ___ph0;
		RuntimeObject* L_2;
		L_2 = RewriteRuleElementStream_1__Next_m47F177E6301C3202A0BAC568890430873A3D0675(__this, RewriteRuleElementStream_1__Next_m47F177E6301C3202A0BAC568890430873A3D0675_RuntimeMethod_var);
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_inline(L_1, L_2, NULL);
		return L_3;
	}

IL_0015:
	{
		RuntimeObject* L_4;
		L_4 = RewriteRuleElementStream_1__Next_m47F177E6301C3202A0BAC568890430873A3D0675(__this, RewriteRuleElementStream_1__Next_m47F177E6301C3202A0BAC568890430873A3D0675_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream::RequiresDuplication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewriteRuleSubtreeStream_RequiresDuplication_m53A8B41706BF12AD5D913E80B61EAB757A2ABA2D (RewriteRuleSubtreeStream_t4793D69FEBEFC9D5CF762AB98EDEE8C2BC21CC78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewriteRuleElementStream_1_get_Count_mB061A82734562491F2E1C06AA267C4BF1C7AFB93_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = RewriteRuleElementStream_1_get_Count_mB061A82734562491F2E1C06AA267C4BF1C7AFB93(__this, RewriteRuleElementStream_1_get_Count_mB061A82734562491F2E1C06AA267C4BF1C7AFB93_RuntimeMethod_var);
		V_0 = L_0;
		bool L_1 = ((RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58*)__this)->___dirty_3;
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_2 = ((RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58*)__this)->___cursor_0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_4 = V_0;
		return (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}

IL_001f:
	{
		return (bool)1;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream::NextTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleSubtreeStream_NextTree_m8557604290232E0C12DCE72E528098C3F0ED6243 (RewriteRuleSubtreeStream_t4793D69FEBEFC9D5CF762AB98EDEE8C2BC21CC78* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewriteRuleSubtreeStream_U3CNextTreeU3Eb__1_mEFD5D87110D50E7B73BA164D01EF1D3B76D385EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* L_0 = (ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402*)il2cpp_codegen_object_new(ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ProcessHandler__ctor_m84789C054378ED9ECF54610B85831E692FC144A8(L_0, __this, (intptr_t)((void*)RewriteRuleSubtreeStream_U3CNextTreeU3Eb__1_mEFD5D87110D50E7B73BA164D01EF1D3B76D385EC_RuntimeMethod_var), NULL);
		RuntimeObject* L_1;
		L_1 = RewriteRuleSubtreeStream_FetchObject_mAD34B86F9CE3BE8FE17379795F3954CD9AC1568B(__this, L_0, NULL);
		return L_1;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream::Dup(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleSubtreeStream_Dup_m99A1C61ED6D9BCC40C125AE7D685164D490BE10A (RewriteRuleSubtreeStream_t4793D69FEBEFC9D5CF762AB98EDEE8C2BC21CC78* __this, RuntimeObject* ___el0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58*)__this)->___adaptor_5;
		RuntimeObject* L_1 = ___el0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(2 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::DupTree(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream::<NextNode>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleSubtreeStream_U3CNextNodeU3Eb__0_mDF67429C8EB6E0069319E2A79A2C80115368BDF2 (RewriteRuleSubtreeStream_t4793D69FEBEFC9D5CF762AB98EDEE8C2BC21CC78* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((RewriteRuleElementStream_1_t190254BBE557374B160D7ECB71F1A23264F16D58*)__this)->___adaptor_5;
		RuntimeObject* L_1 = ___o0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(1 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::DupNode(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream::<NextTree>b__1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleSubtreeStream_U3CNextTreeU3Eb__1_mEFD5D87110D50E7B73BA164D01EF1D3B76D385EC (RewriteRuleSubtreeStream_t4793D69FEBEFC9D5CF762AB98EDEE8C2BC21CC78* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___o0;
		RuntimeObject* L_1;
		L_1 = RewriteRuleSubtreeStream_Dup_m99A1C61ED6D9BCC40C125AE7D685164D490BE10A(__this, L_0, NULL);
		return L_1;
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
RuntimeObject* ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_Multicast(ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* __this, RuntimeObject* ___o0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* currentDelegate = reinterpret_cast<ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___o0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_Open(ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* __this, RuntimeObject* ___o0, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___o0, method);
}
RuntimeObject* ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_OpenStaticInvoker(ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* __this, RuntimeObject* ___o0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___o0);
}
RuntimeObject* ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_ClosedStaticInvoker(ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* __this, RuntimeObject* ___o0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___o0);
}
RuntimeObject* ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_OpenVirtual(ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* __this, RuntimeObject* ___o0, const RuntimeMethod* method)
{
	return VirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___o0);
}
RuntimeObject* ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_OpenInterface(ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* __this, RuntimeObject* ___o0, const RuntimeMethod* method)
{
	return InterfaceFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___o0);
}
RuntimeObject* ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_OpenGenericVirtual(ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* __this, RuntimeObject* ___o0, const RuntimeMethod* method)
{
	return GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(method, ___o0);
}
RuntimeObject* ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_OpenGenericInterface(ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* __this, RuntimeObject* ___o0, const RuntimeMethod* method)
{
	return GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(method, ___o0);
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream/ProcessHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessHandler__ctor_m84789C054378ED9ECF54610B85831E692FC144A8 (ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_Open;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_Multicast;
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream/ProcessHandler::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4 (ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___o0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream/ProcessHandler::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProcessHandler_BeginInvoke_mABFF58417C282633745E5BDEB20492D6631F43E0 (ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* __this, RuntimeObject* ___o0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___o0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleSubtreeStream/ProcessHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ProcessHandler_EndInvoke_m3DAB3C87E447BBD3B7A2A5FE7917CB930CA7B2E8 (ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.TreeRuleReturnScope::get_Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRuleReturnScope_get_Start_m4767A862D1830D58142FF88D7B4F3C96C14F0E18 (TreeRuleReturnScope_t9097899C64771F9A792E0E9685EFA60C73F087C3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___start_0;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.TreeRuleReturnScope::set_Start(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeRuleReturnScope_set_Start_m3496B235D954DA190A4F8898615568636DC298CD (TreeRuleReturnScope_t9097899C64771F9A792E0E9685EFA60C73F087C3* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___start_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___start_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.TreeRuleReturnScope::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeRuleReturnScope__ctor_m433A5F8CA6EC3DBA71592D8D30A4EB190E61BE28 (TreeRuleReturnScope_t9097899C64771F9A792E0E9685EFA60C73F087C3* __this, const RuntimeMethod* method) 
{
	{
		RuleReturnScope__ctor_m5D6A8AFA6864551D0E669074293F2003DBB500A6(__this, NULL);
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser__ctor_m10B0761EB15B7456D9B16047017FCDAB40864A9F (TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_il2cpp_TypeInfo_var);
		BaseRecognizer__ctor_m1896802BFE995C01D0331380FA3FB24C21A257E7(__this, NULL);
		RuntimeObject* L_0 = ___input0;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(39 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::set_TreeNodeStream(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream) */, __this, L_0);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream,Unity.VisualScripting.Antlr3.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser__ctor_m2E49A1460CACCE162E6030621F89E2379F65474E (TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51* __this, RuntimeObject* ___input0, RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_0 = ___state1;
		il2cpp_codegen_runtime_class_init_inline(BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B_il2cpp_TypeInfo_var);
		BaseRecognizer__ctor_m7F1EE5D983A174EEDC315B30CB8D40992468ECAC(__this, L_0, NULL);
		RuntimeObject* L_1 = ___input0;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(39 /* System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::set_TreeNodeStream(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream) */, __this, L_1);
		return;
	}
}
// Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::get_TreeNodeStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeParser_get_TreeNodeStream_mAE5AC8EF47B9D5BEE6DA2BFF02E829284B8F9C95 (TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___input_15;
		return L_0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::set_TreeNodeStream(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser_set_TreeNodeStream_m9BAEAAB8D998760A1BEF3F84C615BD650CD695C5 (TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___input_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_15), (void*)L_0);
		return;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TreeParser_get_SourceName_mF924DD03B057D72386187400C181BCAC9FB55ADD (TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___input_15;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.IIntStream::get_SourceName() */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::GetCurrentInputSymbol(Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeParser_GetCurrentInputSymbol_m4E01F28BABEC2963241E0E57772B540368E6D8EF (TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var)));
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(5 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream::LT(System.Int32) */, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var)), 1);
		return L_1;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::GetMissingSymbol(Unity.VisualScripting.Antlr3.Runtime.IIntStream,Unity.VisualScripting.Antlr3.Runtime.RecognitionException,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeParser_GetMissingSymbol_m4D57723F680F5EBC357706ECD8F6AA34044A5FA3 (TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51* __this, RuntimeObject* ___input0, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___e1, int32_t ___expectedTokenType2, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___follow3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8425022ABFE37E7261FEB1DF3415478B19AD4623);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = VirtualFuncInvoker0< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(32 /* System.String[] Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::get_TokenNames() */, __this);
		int32_t L_1 = ___expectedTokenType2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		String_t* L_4;
		L_4 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral8425022ABFE37E7261FEB1DF3415478B19AD4623, L_3, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		V_0 = L_4;
		int32_t L_5 = ___expectedTokenType2;
		String_t* L_6 = V_0;
		CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* L_7 = (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF*)il2cpp_codegen_object_new(CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		CommonToken__ctor_m5B378A324216AAA7529462F6C80B92DC0DD004E4(L_7, L_5, L_6, NULL);
		CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1* L_8 = (CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1*)il2cpp_codegen_object_new(CommonTree_t3BD1CA810EEB23860077704FB2963AFE6B9C69B1_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		CommonTree__ctor_m333F7053371ADDD87ED32F45659B7230D9DB2B35(L_8, L_7, NULL);
		return L_8;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser_Reset_m075A17F457B901A9F775914DDC3ED7908D3134BC (TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseRecognizer_Reset_m1BCCB93F4B484CBC862B17E5D0F796C76EB03973(__this, NULL);
		RuntimeObject* L_0 = __this->___input_15;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___input_15;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(7 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Seek(System.Int32) */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_1, 0);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::MatchAny(Unity.VisualScripting.Antlr3.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser_MatchAny_m4DE06F0E77ED3BBA692142C9E5F66950D1E103EF (TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51* __this, RuntimeObject* ___ignore0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_0 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
		NullCheck(L_0);
		L_0->___errorRecovery_2 = (bool)0;
		RecognizerSharedState_t9D2FBFC05CB434CF1781D38CE444232CD5C52CF0* L_1 = ((BaseRecognizer_tDB3DD71405FD144217E223CEDA0FD1DEDA989F5B*)__this)->___state_6;
		NullCheck(L_1);
		L_1->___failed_4 = (bool)0;
		RuntimeObject* L_2 = __this->___input_15;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(5 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream::LT(System.Int32) */, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var, L_2, 1);
		V_0 = L_3;
		RuntimeObject* L_4 = __this->___input_15;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream::get_TreeAdaptor() */, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var, L_4);
		RuntimeObject* L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(25 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_5, L_6);
		if (L_7)
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_8 = __this->___input_15;
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_8);
		return;
	}

IL_0044:
	{
		V_1 = 0;
		RuntimeObject* L_9 = __this->___input_15;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream::get_TreeAdaptor() */, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var, L_9);
		RuntimeObject* L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(14 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNodeType(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_10, L_11);
		V_2 = L_12;
		goto IL_0096;
	}

IL_005a:
	{
		RuntimeObject* L_13 = __this->___input_15;
		NullCheck(L_13);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_13);
		RuntimeObject* L_14 = __this->___input_15;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(5 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream::LT(System.Int32) */, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var, L_14, 1);
		V_0 = L_15;
		RuntimeObject* L_16 = __this->___input_15;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream::get_TreeAdaptor() */, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var, L_16);
		RuntimeObject* L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(14 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNodeType(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_17, L_18);
		V_2 = L_19;
		int32_t L_20 = V_2;
		if ((!(((uint32_t)L_20) == ((uint32_t)2))))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		goto IL_0096;
	}

IL_008e:
	{
		int32_t L_22 = V_2;
		if ((!(((uint32_t)L_22) == ((uint32_t)3))))
		{
			goto IL_0096;
		}
	}
	{
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
	}

IL_0096:
	{
		int32_t L_24 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		int32_t L_25 = ((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF_7;
		if ((((int32_t)L_24) == ((int32_t)L_25)))
		{
			goto IL_00a5;
		}
	}
	{
		int32_t L_26 = V_2;
		if ((!(((uint32_t)L_26) == ((uint32_t)3))))
		{
			goto IL_005a;
		}
	}
	{
		int32_t L_27 = V_1;
		if (L_27)
		{
			goto IL_005a;
		}
	}

IL_00a5:
	{
		RuntimeObject* L_28 = __this->___input_15;
		NullCheck(L_28);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Unity.VisualScripting.Antlr3.Runtime.IIntStream::Consume() */, IIntStream_tB6E2ACC6BC342F95E0D502D3894797E83A285B4D_il2cpp_TypeInfo_var, L_28);
		return;
	}
}
// Unity.VisualScripting.Antlr3.Runtime.IIntStream Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::get_Input()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeParser_get_Input_mA14CC47E67A61E61FEF999EEC5942F7DD39EE6C0 (TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___input_15;
		return L_0;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::RecoverFromMismatchedToken(Unity.VisualScripting.Antlr3.Runtime.IIntStream,System.Int32,Unity.VisualScripting.Antlr3.Runtime.BitSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeParser_RecoverFromMismatchedToken_m3149D3F1D4060BCC6FD5753D79F5AD42176E21F5 (TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51* __this, RuntimeObject* ___input0, int32_t ___ttype1, BitSet_t042D0F1F2274F6B495A8EDF84DB4C9F2FA3BCCC6* ___follow2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___ttype1;
		RuntimeObject* L_1 = ___input0;
		MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B* L_2 = (MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedTreeNodeException_t8F89EBA32596703B33EDDA2B9C3620341B48BE5B_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		MismatchedTreeNodeException__ctor_mEA3956B7D2F9B73B95E80C3A3AB541FDEBC04B11(L_2, L_0, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var)))), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TreeParser_RecoverFromMismatchedToken_m3149D3F1D4060BCC6FD5753D79F5AD42176E21F5_RuntimeMethod_var)));
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::GetErrorHeader(Unity.VisualScripting.Antlr3.Runtime.RecognitionException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TreeParser_GetErrorHeader_m4C9FA80955F10552149BDCBCEC8C7BF4D91DC4CF (TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51* __this, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral026F016AC65927DA182AFCA5198EFE7B35E1A532);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F66D79B656BDA2916F8C6430ED835605C443B3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B2_1 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* G_B3_2 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = V_0;
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(24 /* System.String Unity.VisualScripting.Antlr3.Runtime.BaseRecognizer::get_GrammarFileName() */, __this);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral026F016AC65927DA182AFCA5198EFE7B35E1A532);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteral026F016AC65927DA182AFCA5198EFE7B35E1A532);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_5 = ___e0;
		NullCheck(L_5);
		bool L_6 = L_5->___approximateLineInfo_25;
		G_B1_0 = 2;
		G_B1_1 = L_4;
		if (L_6)
		{
			G_B2_0 = 2;
			G_B2_1 = L_4;
			goto IL_0029;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_002e;
	}

IL_0029:
	{
		G_B3_0 = _stringLiteral1F66D79B656BDA2916F8C6430ED835605C443B3E;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_002e:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject*)G_B3_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_9 = ___e0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = RecognitionException_get_Line_mCF2F4576F154C8738C51851743302742941DE8F7_inline(L_9, NULL);
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_12);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = V_0;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_0;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_15 = ___e0;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = RecognitionException_get_CharPositionInLine_m27A503034EEA24F46F5061A077DBB7F7B3F84A5A_inline(L_15, NULL);
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_18);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_0;
		String_t* L_20;
		L_20 = String_Concat_m33F64A335B610F305AEA5FA8CF4C8BAAAAF257DC(L_19, NULL);
		return L_20;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::GetErrorMessage(Unity.VisualScripting.Antlr3.Runtime.RecognitionException,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TreeParser_GetErrorMessage_m15E078FA14C4D1127AC0CC1908B4B10F0628518D (TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51* __this, RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* ___e0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenNames1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		if (!__this)
		{
			goto IL_0051;
		}
	}
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_0 = ___e0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = RecognitionException_get_Input_m2A5456E8C6D96D19FEF877E1742417DB61378DB2_inline(L_0, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_1, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream::get_TreeAdaptor() */, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var)));
		V_0 = L_2;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_3 = ___e0;
		RuntimeObject* L_4 = V_0;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_5 = ___e0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = RecognitionException_get_Node_mF9017E74E9C1676B91BA3B92682C2370C1ABA345_inline(L_5, NULL);
		NullCheck(L_4);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(18 /* Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetToken(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_4, L_6);
		NullCheck(L_3);
		RecognitionException_set_Token_mA3FEDA6DA97167AFDE5777C082A4D144BED3B8F9_inline(L_3, L_7, NULL);
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_8 = ___e0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = RecognitionException_get_Token_mBCAF7259CFD09E204848CE13E4347C4D3F2057FF_inline(L_8, NULL);
		if (L_9)
		{
			goto IL_0051;
		}
	}
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_10 = ___e0;
		RuntimeObject* L_11 = V_0;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_12 = ___e0;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = RecognitionException_get_Node_mF9017E74E9C1676B91BA3B92682C2370C1ABA345_inline(L_12, NULL);
		NullCheck(L_11);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(14 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNodeType(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_11, L_13);
		RuntimeObject* L_15 = V_0;
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_16 = ___e0;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = RecognitionException_get_Node_mF9017E74E9C1676B91BA3B92682C2370C1ABA345_inline(L_16, NULL);
		NullCheck(L_15);
		String_t* L_18;
		L_18 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(16 /* System.String Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::GetNodeText(System.Object) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_15, L_17);
		CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF* L_19 = (CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF*)il2cpp_codegen_object_new(CommonToken_tA7C9DF9C8B016696FA420966059884D3D4732ECF_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		CommonToken__ctor_m5B378A324216AAA7529462F6C80B92DC0DD004E4(L_19, L_14, L_18, NULL);
		NullCheck(L_10);
		RecognitionException_set_Token_mA3FEDA6DA97167AFDE5777C082A4D144BED3B8F9_inline(L_10, L_19, NULL);
	}

IL_0051:
	{
		RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* L_20 = ___e0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = ___tokenNames1;
		String_t* L_22;
		L_22 = BaseRecognizer_GetErrorMessage_m0BE8FCB0FDC9E8744ACB54A082DF3DC455A4CE85(__this, L_20, L_21, NULL);
		return L_22;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::TraceIn(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser_TraceIn_mBBE3A3239217A0D9BBC13D6B903EBFAD99D8CEFF (TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51* __this, String_t* ___ruleName0, int32_t ___ruleIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___ruleName0;
		int32_t L_1 = ___ruleIndex1;
		RuntimeObject* L_2 = __this->___input_15;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(5 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream::LT(System.Int32) */, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var, L_2, 1);
		BaseRecognizer_TraceIn_mE3FAE977EB7787C61AA80B57F79DC05416997660(__this, L_0, L_1, L_3, NULL);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::TraceOut(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser_TraceOut_m2505C473CBB568576F2C65AA251F356E2276E3A9 (TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51* __this, String_t* ___ruleName0, int32_t ___ruleIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___ruleName0;
		int32_t L_1 = ___ruleIndex1;
		RuntimeObject* L_2 = __this->___input_15;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(5 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeNodeStream::LT(System.Int32) */, ITreeNodeStream_tB0FD4EC324812953349D1AD7CF57B671FB2F2930_il2cpp_TypeInfo_var, L_2, 1);
		BaseRecognizer_TraceOut_m1D0C438AEE661769DEAB2B61138578F1B94862DB(__this, L_0, L_1, L_3, NULL);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.TreeParser::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser__cctor_m5F7F72BCEF7D60A105826EAAABD5C465076C1938 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3676B1B24AD6D0495AB7DB36401292DFCD7CF597);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C0EF5134D52509F51E7C9DE84BE70E531F05B61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF4E73EC9D25562DB8859EF77F71A5B0B584C215);
		s_Il2CppMethodInitialized = true;
	}
	{
		((TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_il2cpp_TypeInfo_var))->___dotdot_9 = _stringLiteral8C0EF5134D52509F51E7C9DE84BE70E531F05B61;
		Il2CppCodeGenWriteBarrier((void**)(&((TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_il2cpp_TypeInfo_var))->___dotdot_9), (void*)_stringLiteral8C0EF5134D52509F51E7C9DE84BE70E531F05B61);
		((TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_il2cpp_TypeInfo_var))->___doubleEtc_10 = _stringLiteral3676B1B24AD6D0495AB7DB36401292DFCD7CF597;
		Il2CppCodeGenWriteBarrier((void**)(&((TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_il2cpp_TypeInfo_var))->___doubleEtc_10), (void*)_stringLiteral3676B1B24AD6D0495AB7DB36401292DFCD7CF597);
		((TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_il2cpp_TypeInfo_var))->___spaces_11 = _stringLiteralBF4E73EC9D25562DB8859EF77F71A5B0B584C215;
		Il2CppCodeGenWriteBarrier((void**)(&((TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_il2cpp_TypeInfo_var))->___spaces_11), (void*)_stringLiteralBF4E73EC9D25562DB8859EF77F71A5B0B584C215);
		String_t* L_0 = ((TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_il2cpp_TypeInfo_var))->___dotdot_9;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_1 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_1, L_0, 8, NULL);
		((TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_il2cpp_TypeInfo_var))->___dotdotPattern_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_il2cpp_TypeInfo_var))->___dotdotPattern_12), (void*)L_1);
		String_t* L_2 = ((TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_il2cpp_TypeInfo_var))->___doubleEtc_10;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_3 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_3, L_2, 8, NULL);
		((TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_il2cpp_TypeInfo_var))->___doubleEtcPattern_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_il2cpp_TypeInfo_var))->___doubleEtcPattern_13), (void*)L_3);
		String_t* L_4 = ((TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_il2cpp_TypeInfo_var))->___spaces_11;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_5 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Regex__ctor_mE3996C71B04A4A6845745D01C93B1D27423D0621(L_5, L_4, 8, NULL);
		((TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_il2cpp_TypeInfo_var))->___spacesPattern_14 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tC6810D692E4623D38465CAA478D0A0FF8093DF51_il2cpp_TypeInfo_var))->___spacesPattern_14), (void*)L_5);
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleTokenStream::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleTokenStream__ctor_m56CAD70B37BF4A3980CC39485790AA0155C9E44D (RewriteRuleTokenStream_tF857F389C73F0B72B786E5B774220F3F417E5809* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewriteRuleElementStream_1__ctor_m4D0205C3A7FB4E480ECA7D5B64AB069C75AAEC4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RewriteRuleElementStream_1__ctor_m4D0205C3A7FB4E480ECA7D5B64AB069C75AAEC4A(__this, L_0, L_1, RewriteRuleElementStream_1__ctor_m4D0205C3A7FB4E480ECA7D5B64AB069C75AAEC4A_RuntimeMethod_var);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleTokenStream::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String,Unity.VisualScripting.Antlr3.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleTokenStream__ctor_m1629B13D9E2452501FA00985E098B82143D00D0A (RewriteRuleTokenStream_tF857F389C73F0B72B786E5B774220F3F417E5809* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___oneElement2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewriteRuleElementStream_1__ctor_m61FA582637EE1FED9AF128C0F0AA0457A15D8C19_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RuntimeObject* L_2 = ___oneElement2;
		RewriteRuleElementStream_1__ctor_m61FA582637EE1FED9AF128C0F0AA0457A15D8C19(__this, L_0, L_1, L_2, RewriteRuleElementStream_1__ctor_m61FA582637EE1FED9AF128C0F0AA0457A15D8C19_RuntimeMethod_var);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleTokenStream::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.Generic.IList`1<Unity.VisualScripting.Antlr3.Runtime.IToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleTokenStream__ctor_m7D80021CF50F50170083524314DD29C7D4B97F9E (RewriteRuleTokenStream_tF857F389C73F0B72B786E5B774220F3F417E5809* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewriteRuleElementStream_1__ctor_mC9219E8EE031B3BA80B3E884F7DC4D088A03A962_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RuntimeObject* L_2 = ___elements2;
		RewriteRuleElementStream_1__ctor_mC9219E8EE031B3BA80B3E884F7DC4D088A03A962(__this, L_0, L_1, L_2, RewriteRuleElementStream_1__ctor_mC9219E8EE031B3BA80B3E884F7DC4D088A03A962_RuntimeMethod_var);
		return;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleTokenStream::.ctor(Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleTokenStream__ctor_m526C1BC2962FA306EEDF16CF2FA65B3F00A10C38 (RewriteRuleTokenStream_tF857F389C73F0B72B786E5B774220F3F417E5809* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewriteRuleElementStream_1__ctor_m6EF1D42ED24F3E6758E8C56C428E50BB167FDB87_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RuntimeObject* L_2 = ___elements2;
		RewriteRuleElementStream_1__ctor_m6EF1D42ED24F3E6758E8C56C428E50BB167FDB87(__this, L_0, L_1, L_2, RewriteRuleElementStream_1__ctor_m6EF1D42ED24F3E6758E8C56C428E50BB167FDB87_RuntimeMethod_var);
		return;
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleTokenStream::NextNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleTokenStream_NextNode_m344B9CBAE6B6184EBCF39F6AA14E90657092F206 (RewriteRuleTokenStream_tF857F389C73F0B72B786E5B774220F3F417E5809* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewriteRuleElementStream_1__Next_m359F8DFAD0DBEC93EEF35635A619C977C3A2859A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((RewriteRuleElementStream_1_t8EDC675AA1FBF4804CEDD8FB0964D889A107F908*)__this)->___adaptor_5;
		RuntimeObject* L_1;
		L_1 = RewriteRuleElementStream_1__Next_m359F8DFAD0DBEC93EEF35635A619C977C3A2859A(__this, RewriteRuleElementStream_1__Next_m359F8DFAD0DBEC93EEF35635A619C977C3A2859A_RuntimeMethod_var);
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.ITreeAdaptor::Create(Unity.VisualScripting.Antlr3.Runtime.IToken) */, ITreeAdaptor_tA358C5DD9D6A502275F3433C64D23440927D167D_il2cpp_TypeInfo_var, L_0, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)));
		return L_2;
	}
}
// Unity.VisualScripting.Antlr3.Runtime.IToken Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleTokenStream::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleTokenStream_NextToken_m1FBCECFB2D761337AAF183FD40398E7EC0A87F48 (RewriteRuleTokenStream_tF857F389C73F0B72B786E5B774220F3F417E5809* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewriteRuleElementStream_1__Next_m359F8DFAD0DBEC93EEF35635A619C977C3A2859A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = RewriteRuleElementStream_1__Next_m359F8DFAD0DBEC93EEF35635A619C977C3A2859A(__this, RewriteRuleElementStream_1__Next_m359F8DFAD0DBEC93EEF35635A619C977C3A2859A_RuntimeMethod_var);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
	}
}
// System.Object Unity.VisualScripting.Antlr3.Runtime.Tree.RewriteRuleTokenStream::ToTree(Unity.VisualScripting.Antlr3.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleTokenStream_ToTree_m7ED0382656A561C1495E67F4782371804EA54371 (RewriteRuleTokenStream_tF857F389C73F0B72B786E5B774220F3F417E5809* __this, RuntimeObject* ___el0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___el0;
		return L_0;
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
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ParseTree::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseTree__ctor_m60B0C9FAA4B54241D25A7AD627A6FBBB138C2348 (ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C* __this, RuntimeObject* ___label0, const RuntimeMethod* method) 
{
	{
		BaseTree__ctor_m9BBF12D742E39E6AB8F68D47E5DB68CC882A37DF(__this, NULL);
		RuntimeObject* L_0 = ___label0;
		__this->___payload_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___payload_1), (void*)L_0);
		return;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.ParseTree::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParseTree_get_Type_m07DBDBBA7A7D0526DC0EFF5BC402C0720D3DD13E (ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C* __this, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.Tree.ParseTree::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParseTree_get_Text_mA37ED7EBC64C744AF9B7419E100EED9458FA0372 (ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		return L_0;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.ParseTree::get_TokenStartIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParseTree_get_TokenStartIndex_mB6E7B1C2858C7FD90DC6FC6541F441042691D2B3 (ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C* __this, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ParseTree::set_TokenStartIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseTree_set_TokenStartIndex_mE6FCA79AFFA8CB8D162DAA81AD1DFED393897BDF (ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Int32 Unity.VisualScripting.Antlr3.Runtime.Tree.ParseTree::get_TokenStopIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParseTree_get_TokenStopIndex_m5E300FC753B9DF6386477CCB420A6733DA98B718 (ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C* __this, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ParseTree::set_TokenStopIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseTree_set_TokenStopIndex_mE6EBF9F4353129E7E60577E6267C6F0BE5FC7587 (ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Unity.VisualScripting.Antlr3.Runtime.Tree.ITree Unity.VisualScripting.Antlr3.Runtime.Tree.ParseTree::DupNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParseTree_DupNode_mDF8D0C3002E98B21929F329CBF5B70B9548888D4 (ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C* __this, const RuntimeMethod* method) 
{
	{
		return (RuntimeObject*)NULL;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.Tree.ParseTree::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParseTree_ToString_mC80A3F07201E446059FF1FFC82680B903C5E6F4F (ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___payload_1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_0, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject* L_1 = __this->___payload_1;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 Unity.VisualScripting.Antlr3.Runtime.IToken::get_Type() */, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_2);
		il2cpp_codegen_runtime_class_init_inline(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var);
		int32_t L_4 = ((Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_StaticFields*)il2cpp_codegen_static_fields_for(Token_tE4FF5B64765BE863AD352E4FA5BBB93DCF6F7A05_il2cpp_TypeInfo_var))->___EOF_7;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_002c;
		}
	}
	{
		return _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921;
	}

IL_002c:
	{
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.IToken::get_Text() */, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_5);
		return L_6;
	}

IL_0033:
	{
		RuntimeObject* L_7 = __this->___payload_1;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		return L_8;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.Tree.ParseTree::ToStringWithHiddenTokens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParseTree_ToStringWithHiddenTokens_mF05C5D79C24345D6F7D81CF359E8FBCCCF6C5536 (ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	String_t* V_3 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = __this->___hiddenTokens_2;
		if (!L_1)
		{
			goto IL_0043;
		}
	}
	{
		V_1 = 0;
		goto IL_0035;
	}

IL_0012:
	{
		RuntimeObject* L_2 = __this->___hiddenTokens_2;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_2, L_3);
		V_2 = ((RuntimeObject*)Castclass((RuntimeObject*)L_4, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var));
		StringBuilder_t* L_5 = V_0;
		RuntimeObject* L_6 = V_2;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(10 /* System.String Unity.VisualScripting.Antlr3.Runtime.IToken::get_Text() */, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, L_7, NULL);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0035:
	{
		int32_t L_10 = V_1;
		RuntimeObject* L_11 = __this->___hiddenTokens_2;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}

IL_0043:
	{
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		V_3 = L_13;
		String_t* L_14 = V_3;
		bool L_15;
		L_15 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_14, _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921, NULL);
		if (!L_15)
		{
			goto IL_005f;
		}
	}
	{
		StringBuilder_t* L_16 = V_0;
		String_t* L_17 = V_3;
		NullCheck(L_16);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, L_17, NULL);
	}

IL_005f:
	{
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		return L_20;
	}
}
// System.String Unity.VisualScripting.Antlr3.Runtime.Tree.ParseTree::ToInputString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParseTree_ToInputString_m1F53E0C00A183FB5A44F0604749221630F9CD3C2 (ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		ParseTree__ToStringLeaves_m0CCB810CFFEC26474E54673AE57B0970407CC7D7(__this, L_1, NULL);
		StringBuilder_t* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.Void Unity.VisualScripting.Antlr3.Runtime.Tree.ParseTree::_ToStringLeaves(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseTree__ToStringLeaves_m0CCB810CFFEC26474E54673AE57B0970407CC7D7 (ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C* __this, StringBuilder_t* ___buf0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C* V_1 = NULL;
	{
		RuntimeObject* L_0 = __this->___payload_1;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_0, IToken_t620DE9D086BA75DE074EF126922C24743D268A42_il2cpp_TypeInfo_var)))
		{
			goto IL_001b;
		}
	}
	{
		StringBuilder_t* L_1 = ___buf0;
		String_t* L_2;
		L_2 = ParseTree_ToStringWithHiddenTokens_mF05C5D79C24345D6F7D81CF359E8FBCCCF6C5536(__this, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_2, NULL);
		return;
	}

IL_001b:
	{
		V_0 = 0;
		goto IL_003c;
	}

IL_001f:
	{
		RuntimeObject* L_4 = ((BaseTree_t93C88620BBC74C7117CD89A87723D83057772909*)__this)->___children_0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_4, L_5);
		V_1 = ((ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C*)CastclassClass((RuntimeObject*)L_6, ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C_il2cpp_TypeInfo_var));
		ParseTree_t365D8EA1D4EFCA58171DCD95C350862643B4974C* L_7 = V_1;
		StringBuilder_t* L_8 = ___buf0;
		NullCheck(L_7);
		ParseTree__ToStringLeaves_m0CCB810CFFEC26474E54673AE57B0970407CC7D7(L_7, L_8, NULL);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_003c:
	{
		RuntimeObject* L_10 = ((BaseTree_t93C88620BBC74C7117CD89A87723D83057772909*)__this)->___children_0;
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_11 = V_0;
		RuntimeObject* L_12 = ((BaseTree_t93C88620BBC74C7117CD89A87723D83057772909*)__this)->___children_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_001f;
		}
	}

IL_0052:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ProcessHandler_Invoke_mD0D7D6FDE173A7DE2C5ECBCFDB863000188E00F4_inline (ProcessHandler_t998EC2E63E9F33809DC2A10E945796B4A384F402* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___o0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Line_mCF2F4576F154C8738C51851743302742941DE8F7_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___line_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_CharPositionInLine_m27A503034EEA24F46F5061A077DBB7F7B3F84A5A_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___charPositionInLine_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Input_m2A5456E8C6D96D19FEF877E1742417DB61378DB2_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___input_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Node_mF9017E74E9C1676B91BA3B92682C2370C1ABA345_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___node_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecognitionException_set_Token_mA3FEDA6DA97167AFDE5777C082A4D144BED3B8F9_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___token_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___token_20), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Token_mBCAF7259CFD09E204848CE13E4347C4D3F2057FF_inline (RecognitionException_tFD248374278C5FC10168FCA559E211CB8D688E55* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___token_20;
		return L_0;
	}
}
