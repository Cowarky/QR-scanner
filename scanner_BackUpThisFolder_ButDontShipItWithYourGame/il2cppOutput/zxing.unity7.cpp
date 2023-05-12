#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<ZXing.ResultMetadataType,System.Object>
struct Dictionary_2_tBB6F88EA7BFECA82550866E41E4C3523478ACB9A;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7;
// System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>
struct IDictionary_2_t8BD3FBFB61AB580CC7009E3B888C03B9F7BAB843;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>
struct IDictionary_2_t3B68EF519427E7FE95A7242758F0B03628B9AA64;
// System.Collections.Generic.IEqualityComparer`1<ZXing.ResultMetadataType>
struct IEqualityComparer_1_t53445917A9A44D31258F132EB926534380CA03FA;
// System.Collections.Generic.Dictionary`2/KeyCollection<ZXing.ResultMetadataType,System.Object>
struct KeyCollection_tD003F7A2BD4A796C0634AEC1910281367D443FA4;
// System.Collections.Generic.Dictionary`2/ValueCollection<ZXing.ResultMetadataType,System.Object>
struct ValueCollection_tD4804E53EF2F8D88D5308A0AE3A4AAAAC12BA9A6;
// System.Collections.Generic.Dictionary`2/Entry<ZXing.ResultMetadataType,System.Object>[]
struct EntryU5BU5D_t36E39BE593395D709749C4B6AAA6CC857B0C2DBD;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// ZXing.QrCode.Internal.ErrorCorrectionLevel[]
struct ErrorCorrectionLevelU5BU5D_t10A77BF5B586855E47F9279BC9691093BCB59918;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// ZXing.BaseLuminanceSource
struct BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C;
// ZXing.Common.BitArray
struct BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7;
// ZXing.Common.BitMatrix
struct BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91;
// ZXing.QrCode.Internal.ByteMatrix
struct ByteMatrix_t8F32ACBDCDF86856A438EC5580977D8CA452548D;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// ZXing.Color32LuminanceSource
struct Color32LuminanceSource_tF0F7DA904D1E949F51C065F613D0A398B9DF69FC;
// ZXing.Color32Renderer
struct Color32Renderer_t14E818551AA35E8EABA383D7E36281E9A5CCE8A0;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// ZXing.Common.EncodingOptions
struct EncodingOptions_t84F92A38829ABB6416A1FCE75DEB61FECF8AFA2D;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// ZXing.QrCode.Internal.ErrorCorrectionLevel
struct ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// ZXing.LuminanceSource
struct LuminanceSource_t066B696774156C477D4C4425791D3A0425F1DBDE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// ZXing.QrCode.Internal.Mode
struct Mode_t57AD40C6785C0056944AD4D4559F0386A9201B99;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// ZXing.QrCode.Internal.QRCode
struct QRCode_t54FE9443E07A2B3A9C97404E4F8F8A01E0AB311E;
// ZXing.QrCode.QRCodeWriter
struct QRCodeWriter_t5C6A9338AAB1D37DA9BC1575A6C7BA164CC3B7F4;
// ZXing.RGB565LuminanceSource
struct RGB565LuminanceSource_t5AB2F657F8D964F10FA73150CBAB153A07DAEE44;
// ZXing.RGBLuminanceSource
struct RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226;
// ZXing.ReaderException
struct ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C;
// ZXing.Result
struct Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF;
// ZXing.ResultPoint
struct ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB;
// ZXing.ResultPointCallback
struct ResultPointCallback_tAE973E1935484A681D816642668706DA311185D3;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// ZXing.Rendering.SvgRenderer
struct SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// ZXing.QrCode.Internal.Version
struct Version_t18C7D3249C9CBF6460CA517F61921FD25F7D3A65;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// ZXing.WriterException
struct WriterException_tEFA134561EB29AD1C3C58433F3C6A05F53A828C4;
// ZXing.Rendering.SvgRenderer/SvgImage
struct SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BarcodeFormat_t6AAFC3C9FCD9667A068874AE1559A09723CA3282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitmapFormat_t8D50A156429FFF20E5AFCAEEFBDE18004177F9AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32LuminanceSource_tF0F7DA904D1E949F51C065F613D0A398B9DF69FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tBB6F88EA7BFECA82550866E41E4C3523478ACB9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Encoder_tEC85267BAF0CC423B9924993DB04B8B39253CC31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t3B68EF519427E7FE95A7242758F0B03628B9AA64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t8BD3FBFB61AB580CC7009E3B888C03B9F7BAB843_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3BF4E31A04F4E2AFDBDE80A4FFD156E2E9E188CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t8AD41067F76DE24B0C85C30329DE1A43B9EE45E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RGB565LuminanceSource_t5AB2F657F8D964F10FA73150CBAB153A07DAEE44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral012B0FC82CBEF16F0D8138BA721FEB8F99ABEB89;
IL2CPP_EXTERN_C String_t* _stringLiteral35ED739EFA8E239D93DD0FA6AA08ED26E7BE342F;
IL2CPP_EXTERN_C String_t* _stringLiteral4244A0AD8D8E879A46026C4EE9CB6318F9FA49D8;
IL2CPP_EXTERN_C String_t* _stringLiteral4607F6A1AD253C7780023D486297757B840DE5EA;
IL2CPP_EXTERN_C String_t* _stringLiteral635C8F5A024FC929CA0A445E00437508C44B0CC3;
IL2CPP_EXTERN_C String_t* _stringLiteral637902A9BC3FB84B33AAAB41D3CBB84119F0977D;
IL2CPP_EXTERN_C String_t* _stringLiteral775BB245185671E2382534761174E22D3BDED057;
IL2CPP_EXTERN_C String_t* _stringLiteral7E80B524ECF4EB6F07C79D12D6E6AE33416E3A14;
IL2CPP_EXTERN_C String_t* _stringLiteral90DE7569ED210157F69728F80E6CAE8F912E19DA;
IL2CPP_EXTERN_C String_t* _stringLiteralB85E44E7200FA3E8E69C96E31FA57E58E51E715C;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA8866B433BA9069B0DB33015775433EC276B594;
IL2CPP_EXTERN_C String_t* _stringLiteralDAC00B1DFB240934CD3E7CA4995672FDDB47B0D0;
IL2CPP_EXTERN_C String_t* _stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D;
IL2CPP_EXTERN_C String_t* _stringLiteralDC256241FC67514DC379445C066477BE1029D779;
IL2CPP_EXTERN_C String_t* _stringLiteralDE7E8FECC7166973B85D31AD6B3DA9096111A248;
IL2CPP_EXTERN_C String_t* _stringLiteralEC5446A7FF5D4B637861FAED325178E8EA7A216E;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m70BA60E4E492D273A28BA223607EED75F692CFD2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mAC0C4F49939ABB2F0760CD42B69D6900A4BDB565_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m469FBD8407EDF5DF5C286131856C0C5550914E77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QRCodeWriter_encode_m3D54B2BA61C9F791159C9C768461291010ACB060_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* QRCodeWriter_renderResult_m8CFA2D0A27B4B5D187E9383D947973A720C52561_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RGBLuminanceSource_CalculateLuminance_m53B06ACB20E1411CF3A92C53191F259A949A136E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RGBLuminanceSource_DetermineBitmapFormat_m533F6D94D891BB58FE633B0BC6F0460D417F69F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Result__ctor_m9E9EE450F0974BF9E19FBFBA54C0F55BA0FEFB84_RuntimeMethod_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<ZXing.ResultMetadataType,System.Object>
struct Dictionary_2_tBB6F88EA7BFECA82550866E41E4C3523478ACB9A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t36E39BE593395D709749C4B6AAA6CC857B0C2DBD* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tD003F7A2BD4A796C0634AEC1910281367D443FA4* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD4804E53EF2F8D88D5308A0AE3A4AAAAC12BA9A6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// ZXing.Common.BitArray
struct BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7  : public RuntimeObject
{
	// System.Int32[] ZXing.Common.BitArray::bits
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bits_0;
	// System.Int32 ZXing.Common.BitArray::size
	int32_t ___size_1;
};

// ZXing.Common.BitMatrix
struct BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91  : public RuntimeObject
{
	// System.Int32 ZXing.Common.BitMatrix::width
	int32_t ___width_0;
	// System.Int32 ZXing.Common.BitMatrix::height
	int32_t ___height_1;
	// System.Int32 ZXing.Common.BitMatrix::rowSize
	int32_t ___rowSize_2;
	// System.Int32[] ZXing.Common.BitMatrix::bits
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___bits_3;
};

// ZXing.QrCode.Internal.ByteMatrix
struct ByteMatrix_t8F32ACBDCDF86856A438EC5580977D8CA452548D  : public RuntimeObject
{
	// System.Byte[][] ZXing.QrCode.Internal.ByteMatrix::bytes
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___bytes_0;
	// System.Int32 ZXing.QrCode.Internal.ByteMatrix::width
	int32_t ___width_1;
	// System.Int32 ZXing.QrCode.Internal.ByteMatrix::height
	int32_t ___height_2;
};

// ZXing.Color32Renderer
struct Color32Renderer_t14E818551AA35E8EABA383D7E36281E9A5CCE8A0  : public RuntimeObject
{
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// ZXing.Common.EncodingOptions
struct EncodingOptions_t84F92A38829ABB6416A1FCE75DEB61FECF8AFA2D  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object> ZXing.Common.EncodingOptions::<Hints>k__BackingField
	RuntimeObject* ___U3CHintsU3Ek__BackingField_0;
};

// ZXing.QrCode.Internal.ErrorCorrectionLevel
struct ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6  : public RuntimeObject
{
	// System.Int32 ZXing.QrCode.Internal.ErrorCorrectionLevel::bits
	int32_t ___bits_5;
	// System.Int32 ZXing.QrCode.Internal.ErrorCorrectionLevel::ordinal_Renamed_Field
	int32_t ___ordinal_Renamed_Field_6;
	// System.String ZXing.QrCode.Internal.ErrorCorrectionLevel::name
	String_t* ___name_7;
};

// ZXing.LuminanceSource
struct LuminanceSource_t066B696774156C477D4C4425791D3A0425F1DBDE  : public RuntimeObject
{
	// System.Int32 ZXing.LuminanceSource::width
	int32_t ___width_0;
	// System.Int32 ZXing.LuminanceSource::height
	int32_t ___height_1;
};

// ZXing.QrCode.Internal.QRCode
struct QRCode_t54FE9443E07A2B3A9C97404E4F8F8A01E0AB311E  : public RuntimeObject
{
	// ZXing.QrCode.Internal.Mode ZXing.QrCode.Internal.QRCode::<Mode>k__BackingField
	Mode_t57AD40C6785C0056944AD4D4559F0386A9201B99* ___U3CModeU3Ek__BackingField_1;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.QRCode::<ECLevel>k__BackingField
	ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6* ___U3CECLevelU3Ek__BackingField_2;
	// ZXing.QrCode.Internal.Version ZXing.QrCode.Internal.QRCode::<Version>k__BackingField
	Version_t18C7D3249C9CBF6460CA517F61921FD25F7D3A65* ___U3CVersionU3Ek__BackingField_3;
	// System.Int32 ZXing.QrCode.Internal.QRCode::<MaskPattern>k__BackingField
	int32_t ___U3CMaskPatternU3Ek__BackingField_4;
	// ZXing.QrCode.Internal.ByteMatrix ZXing.QrCode.Internal.QRCode::<Matrix>k__BackingField
	ByteMatrix_t8F32ACBDCDF86856A438EC5580977D8CA452548D* ___U3CMatrixU3Ek__BackingField_5;
};

// ZXing.QrCode.QRCodeWriter
struct QRCodeWriter_t5C6A9338AAB1D37DA9BC1575A6C7BA164CC3B7F4  : public RuntimeObject
{
};

// ZXing.Result
struct Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF  : public RuntimeObject
{
	// System.String ZXing.Result::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_0;
	// System.Byte[] ZXing.Result::<RawBytes>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CRawBytesU3Ek__BackingField_1;
	// ZXing.ResultPoint[] ZXing.Result::<ResultPoints>k__BackingField
	ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* ___U3CResultPointsU3Ek__BackingField_2;
	// ZXing.BarcodeFormat ZXing.Result::<BarcodeFormat>k__BackingField
	int32_t ___U3CBarcodeFormatU3Ek__BackingField_3;
	// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::<ResultMetadata>k__BackingField
	RuntimeObject* ___U3CResultMetadataU3Ek__BackingField_4;
	// System.Int64 ZXing.Result::<Timestamp>k__BackingField
	int64_t ___U3CTimestampU3Ek__BackingField_5;
};

// ZXing.ResultPoint
struct ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB  : public RuntimeObject
{
	// System.Single ZXing.ResultPoint::x
	float ___x_0;
	// System.Single ZXing.ResultPoint::y
	float ___y_1;
	// System.Byte[] ZXing.ResultPoint::bytesX
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytesX_2;
	// System.Byte[] ZXing.ResultPoint::bytesY
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytesY_3;
	// System.String ZXing.ResultPoint::toString
	String_t* ___toString_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// ZXing.SupportClass
struct SupportClass_t4DFF7A369FE88E3E52902C2244402187AAE40E99  : public RuntimeObject
{
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

// ZXing.Rendering.SvgRenderer/SvgImage
struct SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636  : public RuntimeObject
{
	// System.Text.StringBuilder ZXing.Rendering.SvgRenderer/SvgImage::content
	StringBuilder_t* ___content_0;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>
struct KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>
struct KeyValuePair_2_t115CEA7E80924A32801A3ECC2BC1DF844C2D42DD 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// ZXing.BaseLuminanceSource
struct BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C  : public LuminanceSource_t066B696774156C477D4C4425791D3A0425F1DBDE
{
	// System.Byte[] ZXing.BaseLuminanceSource::luminances
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___luminances_6;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
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

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// <PrivateImplementationDetails>/$ArrayType=1024
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D1024_t1B6507B5A24BCD75B39F02E13CBEE8573D95A83C 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D1024_t1B6507B5A24BCD75B39F02E13CBEE8573D95A83C__padding[1024];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=11148
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D11148_tA90BC389C491AAB0DB2098D1316658EFC4725BB5 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D11148_tA90BC389C491AAB0DB2098D1316658EFC4725BB5__padding[11148];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=112
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D112_t6744792739FEA96208B9A614236282FB9ECA971A 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D112_t6744792739FEA96208B9A614236282FB9ECA971A__padding[112];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=12
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12__padding[12];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=120
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571__padding[120];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=124
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D124_t99432C86FF28C92FFDDB1604350EB3AEC54D5825 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D124_t99432C86FF28C92FFDDB1604350EB3AEC54D5825__padding[124];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=128
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D128_tC44CEE7B03B163E8E31077029B71F0B172A7D86B 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D128_tC44CEE7B03B163E8E31077029B71F0B172A7D86B__padding[128];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=132
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D132_tDB72E96170D83C849F447FE61967156765982DA4 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D132_tDB72E96170D83C849F447FE61967156765982DA4__padding[132];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=136
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D136_t4D2F50AEF8D768EC829ADF6800257DC8FC1014D2 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D136_t4D2F50AEF8D768EC829ADF6800257DC8FC1014D2__padding[136];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=144
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D144_t398DA9D8FB2B4A8CBD45A654FFF56DAD3891985A 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D144_t398DA9D8FB2B4A8CBD45A654FFF56DAD3891985A__padding[144];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=148
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D148_t10AA0943B54E7E2147848B2CDD1A9D39F309ABC7 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D148_t10AA0943B54E7E2147848B2CDD1A9D39F309ABC7__padding[148];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=16
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67__padding[16];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=168
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D168_t591344C5A27A584097B447866938A35609392762 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D168_t591344C5A27A584097B447866938A35609392762__padding[168];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=176
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D176_tBA1263E9EBF578E83CE3188757EDB81ED288D512 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D176_tBA1263E9EBF578E83CE3188757EDB81ED288D512__padding[176];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=192
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D192_t02287C04F72E4D4D7775DCCF157D31E3B8FB8A26 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D192_t02287C04F72E4D4D7775DCCF157D31E3B8FB8A26__padding[192];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=20
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3__padding[20];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=2048
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D2048_t80283BCC64DC5C9D9CF8605498C214434C507DB1 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D2048_t80283BCC64DC5C9D9CF8605498C214434C507DB1__padding[2048];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=224
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D224_tC9C89E0CD3DF7624625230A676985EA5254FE15F 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D224_tC9C89E0CD3DF7624625230A676985EA5254FE15F__padding[224];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=24
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E__padding[24];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=248
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D248_t0CF5E248E292EB927C95FBE8536765F7ED5B16AE 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D248_t0CF5E248E292EB927C95FBE8536765F7ED5B16AE__padding[248];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=256
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D256_tCE18EF3C2B291E351A93A0EEA635D93E0FA98B7D 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D256_tCE18EF3C2B291E351A93A0EEA635D93E0FA98B7D__padding[256];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=272
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D272_tA563C3EE83236EC39F70BC0DDA5AC871AEBA1DF2 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D272_tA563C3EE83236EC39F70BC0DDA5AC871AEBA1DF2__padding[272];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=28
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E__padding[28];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=32
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3__padding[32];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=36
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D36_t9BAD3C9C20ED9BD4942DDA263897FDB4AE00E614 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D36_t9BAD3C9C20ED9BD4942DDA263897FDB4AE00E614__padding[36];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=3716
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D3716_t24D0377F87C1FD5D60198E7F08BF259FDEEAA247 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D3716_t24D0377F87C1FD5D60198E7F08BF259FDEEAA247__padding[3716];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=384
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D384_t7AFB7ED20AAC15AC0B060FC7E0D9C5D00DF15286 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D384_t7AFB7ED20AAC15AC0B060FC7E0D9C5D00DF15286__padding[384];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=40
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D40_t4757F36D3D0BB24F3CF7A3E0C5655607D03CE934 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D40_t4757F36D3D0BB24F3CF7A3E0C5655607D03CE934__padding[40];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=44
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D44_t2C89E8C6B06DE210ABF58F20B2EBCB96E4800F8F 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D44_t2C89E8C6B06DE210ABF58F20B2EBCB96E4800F8F__padding[44];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=48
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D48_t944FB4E3924F0B430AB1595EB4C5128BFDD73D93 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D48_t944FB4E3924F0B430AB1595EB4C5128BFDD73D93__padding[48];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=512
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D512_tA1BC0FC7E17D4A98BCD7190CE8CCB04D465D2314 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D512_tA1BC0FC7E17D4A98BCD7190CE8CCB04D465D2314__padding[512];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=52
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D52_tC2D0019A986F7D91626C16A03A8A643E5D2DA11C 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D52_tC2D0019A986F7D91626C16A03A8A643E5D2DA11C__padding[52];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=56
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D56_t4168C15A05BD872C659A1053014CC5BD6ED8B490 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D56_t4168C15A05BD872C659A1053014CC5BD6ED8B490__padding[56];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=60
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D60_t175D09B2F982245262BA96FE859CC907B4740C1D 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D60_t175D09B2F982245262BA96FE859CC907B4740C1D__padding[60];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=64
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D64_t9F1E248845F8DB8725999BC3634D3EEB492B6247 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D64_t9F1E248845F8DB8725999BC3634D3EEB492B6247__padding[64];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=72
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D72_t765CF7B997B1D36D964A0E95ED1C57B44EC99DAB 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D72_t765CF7B997B1D36D964A0E95ED1C57B44EC99DAB__padding[72];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=8
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D8_t3858E5DC60923A69CACC0F2039B1DA4EA0622034 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D8_t3858E5DC60923A69CACC0F2039B1DA4EA0622034__padding[8];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=80
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D80_tD0BBE75F1D774EAC2D46032C330B14A4FEC03466 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D80_tD0BBE75F1D774EAC2D46032C330B14A4FEC03466__padding[80];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=92
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D92_t8F104510A52BE3EA27132167B9AB58B823C961BB 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D92_t8F104510A52BE3EA27132167B9AB58B823C961BB__padding[92];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/$ArrayType=96
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D96_tB0A20D999A8D189587062EC671A2EC2FDD6C7037 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D96_tB0A20D999A8D189587062EC671A2EC2FDD6C7037__padding[96];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D  : public RuntimeObject
{
};

// ZXing.Color32LuminanceSource
struct Color32LuminanceSource_tF0F7DA904D1E949F51C065F613D0A398B9DF69FC  : public BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C
{
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

// ZXing.RGBLuminanceSource
struct RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226  : public BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C
{
};

// ZXing.Rendering.SvgRenderer
struct SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60  : public RuntimeObject
{
	// UnityEngine.Color32 ZXing.Rendering.SvgRenderer::<Foreground>k__BackingField
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___U3CForegroundU3Ek__BackingField_0;
	// UnityEngine.Color32 ZXing.Rendering.SvgRenderer::<Background>k__BackingField
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___U3CBackgroundU3Ek__BackingField_1;
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

// ZXing.RGB565LuminanceSource
struct RGB565LuminanceSource_t5AB2F657F8D964F10FA73150CBAB153A07DAEE44  : public RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226
{
};

// ZXing.ReaderException
struct ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// ZXing.WriterException
struct WriterException_tEFA134561EB29AD1C3C58433F3C6A05F53A828C4  : public Exception_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// ZXing.ResultPointCallback
struct ResultPointCallback_tAE973E1935484A681D816642668706DA311185D3  : public MulticastDelegate_t
{
};

// System.Collections.Generic.Dictionary`2<ZXing.ResultMetadataType,System.Object>

// System.Collections.Generic.Dictionary`2<ZXing.ResultMetadataType,System.Object>

// ZXing.Common.BitArray
struct BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7_StaticFields
{
	// System.Int32[] ZXing.Common.BitArray::_lookup
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____lookup_2;
};

// ZXing.Common.BitArray

// ZXing.Common.BitMatrix

// ZXing.Common.BitMatrix

// ZXing.QrCode.Internal.ByteMatrix

// ZXing.QrCode.Internal.ByteMatrix

// ZXing.Color32Renderer

// ZXing.Color32Renderer

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};

// System.Globalization.CultureInfo

// ZXing.Common.EncodingOptions

// ZXing.Common.EncodingOptions

// ZXing.QrCode.Internal.ErrorCorrectionLevel
struct ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6_StaticFields
{
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.ErrorCorrectionLevel::L
	ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6* ___L_0;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.ErrorCorrectionLevel::M
	ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6* ___M_1;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.ErrorCorrectionLevel::Q
	ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6* ___Q_2;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel ZXing.QrCode.Internal.ErrorCorrectionLevel::H
	ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6* ___H_3;
	// ZXing.QrCode.Internal.ErrorCorrectionLevel[] ZXing.QrCode.Internal.ErrorCorrectionLevel::FOR_BITS
	ErrorCorrectionLevelU5BU5D_t10A77BF5B586855E47F9279BC9691093BCB59918* ___FOR_BITS_4;
};

// ZXing.QrCode.Internal.ErrorCorrectionLevel

// ZXing.LuminanceSource

// ZXing.LuminanceSource

// ZXing.QrCode.Internal.QRCode
struct QRCode_t54FE9443E07A2B3A9C97404E4F8F8A01E0AB311E_StaticFields
{
	// System.Int32 ZXing.QrCode.Internal.QRCode::NUM_MASK_PATTERNS
	int32_t ___NUM_MASK_PATTERNS_0;
};

// ZXing.QrCode.Internal.QRCode

// ZXing.QrCode.QRCodeWriter

// ZXing.QrCode.QRCodeWriter

// ZXing.Result

// ZXing.Result

// ZXing.ResultPoint

// ZXing.ResultPoint

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// ZXing.SupportClass

// ZXing.SupportClass

// System.ValueType

// System.ValueType

// ZXing.Rendering.SvgRenderer/SvgImage

// ZXing.Rendering.SvgRenderer/SvgImage

// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>

// System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>

// System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

// ZXing.BaseLuminanceSource

// ZXing.BaseLuminanceSource

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.DateTime
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

// System.DateTime

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Single

// System.Single

// System.Void

// System.Void

// <PrivateImplementationDetails>/$ArrayType=1024

// <PrivateImplementationDetails>/$ArrayType=1024

// <PrivateImplementationDetails>/$ArrayType=11148

// <PrivateImplementationDetails>/$ArrayType=11148

// <PrivateImplementationDetails>/$ArrayType=112

// <PrivateImplementationDetails>/$ArrayType=112

// <PrivateImplementationDetails>/$ArrayType=12

// <PrivateImplementationDetails>/$ArrayType=12

// <PrivateImplementationDetails>/$ArrayType=120

// <PrivateImplementationDetails>/$ArrayType=120

// <PrivateImplementationDetails>/$ArrayType=124

// <PrivateImplementationDetails>/$ArrayType=124

// <PrivateImplementationDetails>/$ArrayType=128

// <PrivateImplementationDetails>/$ArrayType=128

// <PrivateImplementationDetails>/$ArrayType=132

// <PrivateImplementationDetails>/$ArrayType=132

// <PrivateImplementationDetails>/$ArrayType=136

// <PrivateImplementationDetails>/$ArrayType=136

// <PrivateImplementationDetails>/$ArrayType=144

// <PrivateImplementationDetails>/$ArrayType=144

// <PrivateImplementationDetails>/$ArrayType=148

// <PrivateImplementationDetails>/$ArrayType=148

// <PrivateImplementationDetails>/$ArrayType=16

// <PrivateImplementationDetails>/$ArrayType=16

// <PrivateImplementationDetails>/$ArrayType=168

// <PrivateImplementationDetails>/$ArrayType=168

// <PrivateImplementationDetails>/$ArrayType=176

// <PrivateImplementationDetails>/$ArrayType=176

// <PrivateImplementationDetails>/$ArrayType=192

// <PrivateImplementationDetails>/$ArrayType=192

// <PrivateImplementationDetails>/$ArrayType=20

// <PrivateImplementationDetails>/$ArrayType=20

// <PrivateImplementationDetails>/$ArrayType=2048

// <PrivateImplementationDetails>/$ArrayType=2048

// <PrivateImplementationDetails>/$ArrayType=224

// <PrivateImplementationDetails>/$ArrayType=224

// <PrivateImplementationDetails>/$ArrayType=24

// <PrivateImplementationDetails>/$ArrayType=24

// <PrivateImplementationDetails>/$ArrayType=248

// <PrivateImplementationDetails>/$ArrayType=248

// <PrivateImplementationDetails>/$ArrayType=256

// <PrivateImplementationDetails>/$ArrayType=256

// <PrivateImplementationDetails>/$ArrayType=272

// <PrivateImplementationDetails>/$ArrayType=272

// <PrivateImplementationDetails>/$ArrayType=28

// <PrivateImplementationDetails>/$ArrayType=28

// <PrivateImplementationDetails>/$ArrayType=32

// <PrivateImplementationDetails>/$ArrayType=32

// <PrivateImplementationDetails>/$ArrayType=36

// <PrivateImplementationDetails>/$ArrayType=36

// <PrivateImplementationDetails>/$ArrayType=3716

// <PrivateImplementationDetails>/$ArrayType=3716

// <PrivateImplementationDetails>/$ArrayType=384

// <PrivateImplementationDetails>/$ArrayType=384

// <PrivateImplementationDetails>/$ArrayType=40

// <PrivateImplementationDetails>/$ArrayType=40

// <PrivateImplementationDetails>/$ArrayType=44

// <PrivateImplementationDetails>/$ArrayType=44

// <PrivateImplementationDetails>/$ArrayType=48

// <PrivateImplementationDetails>/$ArrayType=48

// <PrivateImplementationDetails>/$ArrayType=512

// <PrivateImplementationDetails>/$ArrayType=512

// <PrivateImplementationDetails>/$ArrayType=52

// <PrivateImplementationDetails>/$ArrayType=52

// <PrivateImplementationDetails>/$ArrayType=56

// <PrivateImplementationDetails>/$ArrayType=56

// <PrivateImplementationDetails>/$ArrayType=60

// <PrivateImplementationDetails>/$ArrayType=60

// <PrivateImplementationDetails>/$ArrayType=64

// <PrivateImplementationDetails>/$ArrayType=64

// <PrivateImplementationDetails>/$ArrayType=72

// <PrivateImplementationDetails>/$ArrayType=72

// <PrivateImplementationDetails>/$ArrayType=8

// <PrivateImplementationDetails>/$ArrayType=8

// <PrivateImplementationDetails>/$ArrayType=80

// <PrivateImplementationDetails>/$ArrayType=80

// <PrivateImplementationDetails>/$ArrayType=92

// <PrivateImplementationDetails>/$ArrayType=92

// <PrivateImplementationDetails>/$ArrayType=96

// <PrivateImplementationDetails>/$ArrayType=96

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t7955C8F18AFF7E7A33F4A473AF96ED0DA7D29D4D_StaticFields
{
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-8FD55399F538FAF9608E938EAB08D4BC88D0E131
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D8FD55399F538FAF9608E938EAB08D4BC88D0E131_0;
	// <PrivateImplementationDetails>/$ArrayType=132 <PrivateImplementationDetails>::$field-D4F2F206A2D11A028F349E014012774EE5C43247
	U24ArrayTypeU3D132_tDB72E96170D83C849F447FE61967156765982DA4 ___U24fieldU2DD4F2F206A2D11A028F349E014012774EE5C43247_1;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-B5C5575EEA3D9D3E8B672FFFE1F8DAB271D98FAD
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2DB5C5575EEA3D9D3E8B672FFFE1F8DAB271D98FAD_2;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-0B6464E6B1E58A6A529DADCF6906D3D8598C22FE
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D0B6464E6B1E58A6A529DADCF6906D3D8598C22FE_3;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-82AAC437924B5066FB76075A613B26D61E008C53
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D82AAC437924B5066FB76075A613B26D61E008C53_4;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-9891A9B6E056E5C7602BF4C40B6BE7A255D184D7
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D9891A9B6E056E5C7602BF4C40B6BE7A255D184D7_5;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-3624ED91F698B4810009426A87A5BCE232A5A705
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D3624ED91F698B4810009426A87A5BCE232A5A705_6;
	// <PrivateImplementationDetails>/$ArrayType=112 <PrivateImplementationDetails>::$field-905ADE31F711C9AA9766F905B9ED8D705921788B
	U24ArrayTypeU3D112_t6744792739FEA96208B9A614236282FB9ECA971A ___U24fieldU2D905ADE31F711C9AA9766F905B9ED8D705921788B_7;
	// <PrivateImplementationDetails>/$ArrayType=124 <PrivateImplementationDetails>::$field-94A84E93AD0291B6263CF8BD73710B93A4E08204
	U24ArrayTypeU3D124_t99432C86FF28C92FFDDB1604350EB3AEC54D5825 ___U24fieldU2D94A84E93AD0291B6263CF8BD73710B93A4E08204_8;
	// <PrivateImplementationDetails>/$ArrayType=40 <PrivateImplementationDetails>::$field-B5D7D91B14E682B7F63D296B2498143A8415F347
	U24ArrayTypeU3D40_t4757F36D3D0BB24F3CF7A3E0C5655607D03CE934 ___U24fieldU2DB5D7D91B14E682B7F63D296B2498143A8415F347_9;
	// <PrivateImplementationDetails>/$ArrayType=148 <PrivateImplementationDetails>::$field-EB774035880443AEFBF8B61E7760DA5273A8A44C
	U24ArrayTypeU3D148_t10AA0943B54E7E2147848B2CDD1A9D39F309ABC7 ___U24fieldU2DEB774035880443AEFBF8B61E7760DA5273A8A44C_10;
	// <PrivateImplementationDetails>/$ArrayType=80 <PrivateImplementationDetails>::$field-FAEB0F6FFFA8C7CB94DD23E11A954BB9D67801CA
	U24ArrayTypeU3D80_tD0BBE75F1D774EAC2D46032C330B14A4FEC03466 ___U24fieldU2DFAEB0F6FFFA8C7CB94DD23E11A954BB9D67801CA_11;
	// <PrivateImplementationDetails>/$ArrayType=56 <PrivateImplementationDetails>::$field-62A2A60607D00B99271D1861A97971513BC61D89
	U24ArrayTypeU3D56_t4168C15A05BD872C659A1053014CC5BD6ED8B490 ___U24fieldU2D62A2A60607D00B99271D1861A97971513BC61D89_12;
	// <PrivateImplementationDetails>/$ArrayType=80 <PrivateImplementationDetails>::$field-A6E975E72D8A987E6B9AA9400DE3025C1E91BE96
	U24ArrayTypeU3D80_tD0BBE75F1D774EAC2D46032C330B14A4FEC03466 ___U24fieldU2DA6E975E72D8A987E6B9AA9400DE3025C1E91BE96_13;
	// <PrivateImplementationDetails>/$ArrayType=64 <PrivateImplementationDetails>::$field-C6B6783FDC75202733D0518585E649906008DBC5
	U24ArrayTypeU3D64_t9F1E248845F8DB8725999BC3634D3EEB492B6247 ___U24fieldU2DC6B6783FDC75202733D0518585E649906008DBC5_14;
	// <PrivateImplementationDetails>/$ArrayType=64 <PrivateImplementationDetails>::$field-75946F2A7B76F034BACEC7179FCD76C25AD5DC3F
	U24ArrayTypeU3D64_t9F1E248845F8DB8725999BC3634D3EEB492B6247 ___U24fieldU2D75946F2A7B76F034BACEC7179FCD76C25AD5DC3F_15;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-16A23B321A63D60555581B49BEFA71D9AA71A863
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D16A23B321A63D60555581B49BEFA71D9AA71A863_16;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-CEF34889DB3D00B6A0A7F6984D9BA7E9CC870A25
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2DCEF34889DB3D00B6A0A7F6984D9BA7E9CC870A25_17;
	// <PrivateImplementationDetails>/$ArrayType=40 <PrivateImplementationDetails>::$field-94ACF5952DA43795D5F4B96CA6AACD104DFF74FB
	U24ArrayTypeU3D40_t4757F36D3D0BB24F3CF7A3E0C5655607D03CE934 ___U24fieldU2D94ACF5952DA43795D5F4B96CA6AACD104DFF74FB_18;
	// <PrivateImplementationDetails>/$ArrayType=44 <PrivateImplementationDetails>::$field-1C513EBAF3C6DD10108E508D6FA1826E0E1F327A
	U24ArrayTypeU3D44_t2C89E8C6B06DE210ABF58F20B2EBCB96E4800F8F ___U24fieldU2D1C513EBAF3C6DD10108E508D6FA1826E0E1F327A_19;
	// <PrivateImplementationDetails>/$ArrayType=48 <PrivateImplementationDetails>::$field-749D861CA8AB7BBC15EDC3492ECDD615BC3A0E6C
	U24ArrayTypeU3D48_t944FB4E3924F0B430AB1595EB4C5128BFDD73D93 ___U24fieldU2D749D861CA8AB7BBC15EDC3492ECDD615BC3A0E6C_20;
	// <PrivateImplementationDetails>/$ArrayType=56 <PrivateImplementationDetails>::$field-5B9B89A83AF2C5283CBCE5238EC89752E934B0BC
	U24ArrayTypeU3D56_t4168C15A05BD872C659A1053014CC5BD6ED8B490 ___U24fieldU2D5B9B89A83AF2C5283CBCE5238EC89752E934B0BC_21;
	// <PrivateImplementationDetails>/$ArrayType=72 <PrivateImplementationDetails>::$field-FC67B8DFF847663BDB26298A67B37358B795A705
	U24ArrayTypeU3D72_t765CF7B997B1D36D964A0E95ED1C57B44EC99DAB ___U24fieldU2DFC67B8DFF847663BDB26298A67B37358B795A705_22;
	// <PrivateImplementationDetails>/$ArrayType=80 <PrivateImplementationDetails>::$field-D3DAF7160783537865ADF4ABADFE98C9E7F9B61E
	U24ArrayTypeU3D80_tD0BBE75F1D774EAC2D46032C330B14A4FEC03466 ___U24fieldU2DD3DAF7160783537865ADF4ABADFE98C9E7F9B61E_23;
	// <PrivateImplementationDetails>/$ArrayType=96 <PrivateImplementationDetails>::$field-E470FFB0F4CAC4828F5D1E14786E5791C8546B70
	U24ArrayTypeU3D96_tB0A20D999A8D189587062EC671A2EC2FDD6C7037 ___U24fieldU2DE470FFB0F4CAC4828F5D1E14786E5791C8546B70_24;
	// <PrivateImplementationDetails>/$ArrayType=112 <PrivateImplementationDetails>::$field-3F6C095C10403C885D2152739D2E10DC74FF1E85
	U24ArrayTypeU3D112_t6744792739FEA96208B9A614236282FB9ECA971A ___U24fieldU2D3F6C095C10403C885D2152739D2E10DC74FF1E85_25;
	// <PrivateImplementationDetails>/$ArrayType=144 <PrivateImplementationDetails>::$field-2FF845E679E01FFB89E1631A6B9FFD277F8D1E7A
	U24ArrayTypeU3D144_t398DA9D8FB2B4A8CBD45A654FFF56DAD3891985A ___U24fieldU2D2FF845E679E01FFB89E1631A6B9FFD277F8D1E7A_26;
	// <PrivateImplementationDetails>/$ArrayType=168 <PrivateImplementationDetails>::$field-16E90138C3138004AD6601E6E85327784EAA946A
	U24ArrayTypeU3D168_t591344C5A27A584097B447866938A35609392762 ___U24fieldU2D16E90138C3138004AD6601E6E85327784EAA946A_27;
	// <PrivateImplementationDetails>/$ArrayType=192 <PrivateImplementationDetails>::$field-CE174E5BE6B8E9DF88A7269051C0C3AF6133E3BE
	U24ArrayTypeU3D192_t02287C04F72E4D4D7775DCCF157D31E3B8FB8A26 ___U24fieldU2DCE174E5BE6B8E9DF88A7269051C0C3AF6133E3BE_28;
	// <PrivateImplementationDetails>/$ArrayType=224 <PrivateImplementationDetails>::$field-30002BF0461E7F63A2309B2CB938229C92BDCF84
	U24ArrayTypeU3D224_tC9C89E0CD3DF7624625230A676985EA5254FE15F ___U24fieldU2D30002BF0461E7F63A2309B2CB938229C92BDCF84_29;
	// <PrivateImplementationDetails>/$ArrayType=248 <PrivateImplementationDetails>::$field-897B0E153C80661CB4CE6531BD7E9356B4413F71
	U24ArrayTypeU3D248_t0CF5E248E292EB927C95FBE8536765F7ED5B16AE ___U24fieldU2D897B0E153C80661CB4CE6531BD7E9356B4413F71_30;
	// <PrivateImplementationDetails>/$ArrayType=272 <PrivateImplementationDetails>::$field-C363BAE661D99D64ECF2F0D7CD35AFC5BFFB7306
	U24ArrayTypeU3D272_tA563C3EE83236EC39F70BC0DDA5AC871AEBA1DF2 ___U24fieldU2DC363BAE661D99D64ECF2F0D7CD35AFC5BFFB7306_31;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-94E4519EDE61C5D927804C8A62787FDC744861F7
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D94E4519EDE61C5D927804C8A62787FDC744861F7_32;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-9E85F5711FC795D5DBAD4BEF335EDB8055ADD174
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D9E85F5711FC795D5DBAD4BEF335EDB8055ADD174_33;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-BBAA25706062E8AA738F96C541E3A6D6357F92E3
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2DBBAA25706062E8AA738F96C541E3A6D6357F92E3_34;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-1A3C01816F6E750EC65FDEF4FEB7758235456890
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2D1A3C01816F6E750EC65FDEF4FEB7758235456890_35;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-7BC6404D48DA137303466471F7131DC1C9B13BAA
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2D7BC6404D48DA137303466471F7131DC1C9B13BAA_36;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-C7BD442E02179DC75AB7FEF343C297E1F46A7806
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2DC7BD442E02179DC75AB7FEF343C297E1F46A7806_37;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-FA200C2489E9868CC920129D1E2D694172C2BA49
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2DFA200C2489E9868CC920129D1E2D694172C2BA49_38;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-5BCFEA149A36030B8B3EB1FAE31AF9173B76B87C
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2D5BCFEA149A36030B8B3EB1FAE31AF9173B76B87C_39;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-EEADCBA5CAFE3FDC2C2B1FAEEB0B474F3E9668D5
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2DEEADCBA5CAFE3FDC2C2B1FAEEB0B474F3E9668D5_40;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-B6BCDFDEDD07A19F1028F226DE019E32E7FB2333
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2DB6BCDFDEDD07A19F1028F226DE019E32E7FB2333_41;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-49E2034AE9BD046DF074F7FA4ACAE05980D1DC6F
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2D49E2034AE9BD046DF074F7FA4ACAE05980D1DC6F_42;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-142E1469231D592823559059166B32655910D0CF
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2D142E1469231D592823559059166B32655910D0CF_43;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-D2BCB25441A9A8F3DE94D1EF27A870BB77553833
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2DD2BCB25441A9A8F3DE94D1EF27A870BB77553833_44;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-0BF07D5C458ED1EF2F2CAD7D1DA239CF12952AB6
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2D0BF07D5C458ED1EF2F2CAD7D1DA239CF12952AB6_45;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-6AF652181FBB423ED995C5CF63D5B83726DE74CF
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2D6AF652181FBB423ED995C5CF63D5B83726DE74CF_46;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-3102377CA043644BFD52C56AE2A9F554723263FD
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2D3102377CA043644BFD52C56AE2A9F554723263FD_47;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-1D562AD827598FC3F5C82FC2091E65C8F8A07ADC
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2D1D562AD827598FC3F5C82FC2091E65C8F8A07ADC_48;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-A94E3BD2B46BBC16C9F5C0AD295E9B2C62B6B7A4
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2DA94E3BD2B46BBC16C9F5C0AD295E9B2C62B6B7A4_49;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-F975859F5AFA5A4AE7703BA3B943AFC04919E9B7
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2DF975859F5AFA5A4AE7703BA3B943AFC04919E9B7_50;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-BDA0E80EABB31C2B339BA084415FF30AE14ECF9F
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2DBDA0E80EABB31C2B339BA084415FF30AE14ECF9F_51;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-7FF393DF5D10580FA38BF854328B3072169E0A1A
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2D7FF393DF5D10580FA38BF854328B3072169E0A1A_52;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-73B101BBEDC241CE765CA03BB6E4D467FA769312
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2D73B101BBEDC241CE765CA03BB6E4D467FA769312_53;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-C6CA93B7FFF2C18F722DDBD501761C1381E2E55E
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2DC6CA93B7FFF2C18F722DDBD501761C1381E2E55E_54;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-836DA48724BC66F3257E70FFF165ACCE037666A6
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2D836DA48724BC66F3257E70FFF165ACCE037666A6_55;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-2D3DF989BE3BBA2B353F845C37992DFF85579505
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2D2D3DF989BE3BBA2B353F845C37992DFF85579505_56;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-A2978A4F76015511E3741ABF9B58117B348B19C2
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2DA2978A4F76015511E3741ABF9B58117B348B19C2_57;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-2A84324D54FDC0473BE021004C50F363ADCD89AF
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2D2A84324D54FDC0473BE021004C50F363ADCD89AF_58;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-D923777F48CDA51F21CABCED4FE36A2D620288A2
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2DD923777F48CDA51F21CABCED4FE36A2D620288A2_59;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-193330123B5DF8BA7DDD1FD73E3941FD113C71C7
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2D193330123B5DF8BA7DDD1FD73E3941FD113C71C7_60;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-D73BDC60FA2857E7CE2F742530B056A1866C2177
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2DD73BDC60FA2857E7CE2F742530B056A1866C2177_61;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-67013075958AAD75C4545796BF80B16683B33A59
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2D67013075958AAD75C4545796BF80B16683B33A59_62;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-1BCA1A912FF22DA69AA3E91A68492D4BA5179162
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2D1BCA1A912FF22DA69AA3E91A68492D4BA5179162_63;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-227C649F55292B0A293EBB2D56AB8ABAECC7F629
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2D227C649F55292B0A293EBB2D56AB8ABAECC7F629_64;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-445E0C138E7D9647FCD08184FB23A833C4D00D0D
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2D445E0C138E7D9647FCD08184FB23A833C4D00D0D_65;
	// <PrivateImplementationDetails>/$ArrayType=120 <PrivateImplementationDetails>::$field-EDF6280B8AEAF6DDC736AF7B745668475CE8552F
	U24ArrayTypeU3D120_t1A3D8372BDA58105D472D7DDCFB77E8A712FB571 ___U24fieldU2DEDF6280B8AEAF6DDC736AF7B745668475CE8552F_66;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-A4D21F42F028A0AD9FBA3DEA5E66ED152FDA49B4
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2DA4D21F42F028A0AD9FBA3DEA5E66ED152FDA49B4_67;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-54902FACAE835477E45CADCFD0878A9EEF7CA7F9
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2D54902FACAE835477E45CADCFD0878A9EEF7CA7F9_68;
	// <PrivateImplementationDetails>/$ArrayType=8 <PrivateImplementationDetails>::$field-876B19A4297EC7FA169B6DE6836F7EA990393C79
	U24ArrayTypeU3D8_t3858E5DC60923A69CACC0F2039B1DA4EA0622034 ___U24fieldU2D876B19A4297EC7FA169B6DE6836F7EA990393C79_69;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-00EDC85108675D602B89163157E9C8E2FB54671F
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D00EDC85108675D602B89163157E9C8E2FB54671F_70;
	// <PrivateImplementationDetails>/$ArrayType=8 <PrivateImplementationDetails>::$field-A23A9B23FAFA85AF1DDFD23CEA8722A8CEE6C624
	U24ArrayTypeU3D8_t3858E5DC60923A69CACC0F2039B1DA4EA0622034 ___U24fieldU2DA23A9B23FAFA85AF1DDFD23CEA8722A8CEE6C624_71;
	// <PrivateImplementationDetails>/$ArrayType=8 <PrivateImplementationDetails>::$field-F74D612823D55B954DFD1ADD51E7F24BD6295C8A
	U24ArrayTypeU3D8_t3858E5DC60923A69CACC0F2039B1DA4EA0622034 ___U24fieldU2DF74D612823D55B954DFD1ADD51E7F24BD6295C8A_72;
	// <PrivateImplementationDetails>/$ArrayType=8 <PrivateImplementationDetails>::$field-139E85884EF0D494C9FEBD9E2DD8337547E7737F
	U24ArrayTypeU3D8_t3858E5DC60923A69CACC0F2039B1DA4EA0622034 ___U24fieldU2D139E85884EF0D494C9FEBD9E2DD8337547E7737F_73;
	// <PrivateImplementationDetails>/$ArrayType=8 <PrivateImplementationDetails>::$field-EF40140E6D3438F31E92E88C9A0D6A807867A517
	U24ArrayTypeU3D8_t3858E5DC60923A69CACC0F2039B1DA4EA0622034 ___U24fieldU2DEF40140E6D3438F31E92E88C9A0D6A807867A517_74;
	// <PrivateImplementationDetails>/$ArrayType=8 <PrivateImplementationDetails>::$field-513429EA20E8F2CB93CBE443D34F7766E2C125E1
	U24ArrayTypeU3D8_t3858E5DC60923A69CACC0F2039B1DA4EA0622034 ___U24fieldU2D513429EA20E8F2CB93CBE443D34F7766E2C125E1_75;
	// <PrivateImplementationDetails>/$ArrayType=80 <PrivateImplementationDetails>::$field-0443C73B92DF9C67128EF5F0702DCBC469EDD2EA
	U24ArrayTypeU3D80_tD0BBE75F1D774EAC2D46032C330B14A4FEC03466 ___U24fieldU2D0443C73B92DF9C67128EF5F0702DCBC469EDD2EA_76;
	// <PrivateImplementationDetails>/$ArrayType=8 <PrivateImplementationDetails>::$field-AF35D391D56E5153255BA0E0810F3EF49FC4CE6A
	U24ArrayTypeU3D8_t3858E5DC60923A69CACC0F2039B1DA4EA0622034 ___U24fieldU2DAF35D391D56E5153255BA0E0810F3EF49FC4CE6A_77;
	// <PrivateImplementationDetails>/$ArrayType=8 <PrivateImplementationDetails>::$field-147643D73FEF5B111C5605485E9DEDEFF93E5C3A
	U24ArrayTypeU3D8_t3858E5DC60923A69CACC0F2039B1DA4EA0622034 ___U24fieldU2D147643D73FEF5B111C5605485E9DEDEFF93E5C3A_78;
	// <PrivateImplementationDetails>/$ArrayType=8 <PrivateImplementationDetails>::$field-15FC919587B4F1C1F0F201B89EEC63F51B763738
	U24ArrayTypeU3D8_t3858E5DC60923A69CACC0F2039B1DA4EA0622034 ___U24fieldU2D15FC919587B4F1C1F0F201B89EEC63F51B763738_79;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-F100C709518544CED81B98D3F1C862F094DAF46A
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DF100C709518544CED81B98D3F1C862F094DAF46A_80;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-CC74BF89CF621AAC29665426A911E4B8BBB60B91
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DCC74BF89CF621AAC29665426A911E4B8BBB60B91_81;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-BCF92ED388B84323DFDE7D40E59EA1AEB742CB0A
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DBCF92ED388B84323DFDE7D40E59EA1AEB742CB0A_82;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-F1F22748A7C1A4CC79E97C2063C48D7FF070D941
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DF1F22748A7C1A4CC79E97C2063C48D7FF070D941_83;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-4DE742FEB32578958FCFC33D6732EFF616C8A94B
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D4DE742FEB32578958FCFC33D6732EFF616C8A94B_84;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-80F763BA90E27F755F2DEFA7FE720AD9371D6E6B
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D80F763BA90E27F755F2DEFA7FE720AD9371D6E6B_85;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-5B02FED4CA0B61476F1AAA5C6445F024374B075A
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D5B02FED4CA0B61476F1AAA5C6445F024374B075A_86;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-D7AE4E850949E37E7359595699CCDC751E1C45E4
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DD7AE4E850949E37E7359595699CCDC751E1C45E4_87;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-3C22A633B79B510613E37BC5A02FF91A4AB006ED
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D3C22A633B79B510613E37BC5A02FF91A4AB006ED_88;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-3DF543E51AB43F1F561B11B8789C82E26C427F72
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D3DF543E51AB43F1F561B11B8789C82E26C427F72_89;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-79F14B68470B4B7AA3BCDCA6758072F2B9320320
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D79F14B68470B4B7AA3BCDCA6758072F2B9320320_90;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-79123EF44D00F5B0ED365348D1FD49F9FA2CB222
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D79123EF44D00F5B0ED365348D1FD49F9FA2CB222_91;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-5CB924E7461B9011EC8197A30815EA263595B3A4
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D5CB924E7461B9011EC8197A30815EA263595B3A4_92;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-44DB2483C3365FFD6E86B5C807C599AAF3EEE238
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D44DB2483C3365FFD6E86B5C807C599AAF3EEE238_93;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-56A5590CEC5A9DF3AE13EDFBA60AAC3CB21CA9FE
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D56A5590CEC5A9DF3AE13EDFBA60AAC3CB21CA9FE_94;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-712B24DD3C17671C78BE33C83316576AD9285273
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D712B24DD3C17671C78BE33C83316576AD9285273_95;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-994037270AFD7BB2BBAFCFBF2C5901853D0AEBBB
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D994037270AFD7BB2BBAFCFBF2C5901853D0AEBBB_96;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-D7207A48A00E499EF63FC2990337CC8B05C7AE9C
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DD7207A48A00E499EF63FC2990337CC8B05C7AE9C_97;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-D6B85A234C187D0FC82CE310F6423237C934B93A
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DD6B85A234C187D0FC82CE310F6423237C934B93A_98;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-BC5EFA0F409033551EB01FD9CAA887739FBB267C
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DBC5EFA0F409033551EB01FD9CAA887739FBB267C_99;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-DEDEF9E8D2052710E15C0CC080004BFB33F47665
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DDEDEF9E8D2052710E15C0CC080004BFB33F47665_100;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-6E1E2FE69810DD67F59A4BAC7367A17D2F1B9BDA
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D6E1E2FE69810DD67F59A4BAC7367A17D2F1B9BDA_101;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-A98B8F0C923F5DFC97332FCC80F65C96F9F27181
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DA98B8F0C923F5DFC97332FCC80F65C96F9F27181_102;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-52EFBB0B7A687E5D277CB80D62D4BDEA8C9C5AAF
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D52EFBB0B7A687E5D277CB80D62D4BDEA8C9C5AAF_103;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-BC1ACC3AC4459BD0D19A953A64E05727DA98279A
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DBC1ACC3AC4459BD0D19A953A64E05727DA98279A_104;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-322BC3569CD0270EC3179B30382F24148B533D10
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D322BC3569CD0270EC3179B30382F24148B533D10_105;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-A350EF43D37B02EFF537EB2B57DD4CF05DD72C47
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DA350EF43D37B02EFF537EB2B57DD4CF05DD72C47_106;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-88B6AF1079C72775E54D0AC3BEEDCCC6506B6269
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D88B6AF1079C72775E54D0AC3BEEDCCC6506B6269_107;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-866652192B68681CC538B2CB21C5979544DF35AB
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D866652192B68681CC538B2CB21C5979544DF35AB_108;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-D6D9691C10001AC45C1A8A68D4B08412F42D9F5D
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DD6D9691C10001AC45C1A8A68D4B08412F42D9F5D_109;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-6957A133E0DC21707BCAAF62194EAF4FF75E0768
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D6957A133E0DC21707BCAAF62194EAF4FF75E0768_110;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-80E21576779C61DA5B185D15A732CF7A8BD6F88C
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D80E21576779C61DA5B185D15A732CF7A8BD6F88C_111;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-61A1021606CAD0A5990E00FD305478E75F1983D6
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D61A1021606CAD0A5990E00FD305478E75F1983D6_112;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-86EA004891DE06B357581B1885C9C0EFD73DE2E9
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D86EA004891DE06B357581B1885C9C0EFD73DE2E9_113;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-1D0501D14FE31729CD75A4073F4404AF7E53B024
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D1D0501D14FE31729CD75A4073F4404AF7E53B024_114;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-1E45F828069EAF87A0B553BE1E65B98F20E377ED
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D1E45F828069EAF87A0B553BE1E65B98F20E377ED_115;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-7DAC049D7C6EB133A805C7CE9ACBB961B3E65A8D
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D7DAC049D7C6EB133A805C7CE9ACBB961B3E65A8D_116;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-CED1DB702E32A812D587254A4E1BAAA409E30859
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DCED1DB702E32A812D587254A4E1BAAA409E30859_117;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-B5DDF34D20E879DBA76358A13661F61E6682B937
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DB5DDF34D20E879DBA76358A13661F61E6682B937_118;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-AEE03822C3725428610E6E7DAAF7970DE35F7675
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DAEE03822C3725428610E6E7DAAF7970DE35F7675_119;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-648C489642395164C2A2AA2379A6E7F44CAB018B
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D648C489642395164C2A2AA2379A6E7F44CAB018B_120;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-24E7D35141138E4668DE547A98CE3A84AF0E6FEB
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D24E7D35141138E4668DE547A98CE3A84AF0E6FEB_121;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-CA03F848D4A9DD85B5CF092E36317D483E3B0864
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DCA03F848D4A9DD85B5CF092E36317D483E3B0864_122;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-07438A85BDEE90305A6125B92084A5F3F2FD5F18
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D07438A85BDEE90305A6125B92084A5F3F2FD5F18_123;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-1DB4EC083D80319093844E5CD9A7EB62EB1DC8D9
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D1DB4EC083D80319093844E5CD9A7EB62EB1DC8D9_124;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-463C3B3709985BB32747ACC9AE3406BB6836368B
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D463C3B3709985BB32747ACC9AE3406BB6836368B_125;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-094D7DFD41161273E784D60EAE6D844127D77F0B
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D094D7DFD41161273E784D60EAE6D844127D77F0B_126;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-10111111FB24B2D331FB3F698193046CBCB8AAFE
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D10111111FB24B2D331FB3F698193046CBCB8AAFE_127;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-A7977502040EE08933752F579060577814723508
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DA7977502040EE08933752F579060577814723508_128;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-8EED33571FFED1BBCA4954A909498A1D3316EDC8
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D8EED33571FFED1BBCA4954A909498A1D3316EDC8_129;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-8EEE72A955DF384253C5C458726A8A7299A05164
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D8EEE72A955DF384253C5C458726A8A7299A05164_130;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-6CC1359B9ED72500183D5566D70BBEE1BBD46FFF
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D6CC1359B9ED72500183D5566D70BBEE1BBD46FFF_131;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-B29A2328618A7D8133205EA8F9E0EE1D9D2A7E8C
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DB29A2328618A7D8133205EA8F9E0EE1D9D2A7E8C_132;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-03AB6BB65AC7B8ECF309D37CACECE4B53B38D824
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D03AB6BB65AC7B8ECF309D37CACECE4B53B38D824_133;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-71F4D547D52F31EDEC55B1909114455FDAE5A97E
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D71F4D547D52F31EDEC55B1909114455FDAE5A97E_134;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-8523C737ED49D8A2E9BB85218190E4E83B902E28
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D8523C737ED49D8A2E9BB85218190E4E83B902E28_135;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-465B4A79F3CD93D22FD6AFE37CB544AC27728D1D
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D465B4A79F3CD93D22FD6AFE37CB544AC27728D1D_136;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-583A438479F42C7D8DE8C6699B0C37A4A026A643
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D583A438479F42C7D8DE8C6699B0C37A4A026A643_137;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-8909772CC771C2FF1D61415555452F2ED4ADA536
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D8909772CC771C2FF1D61415555452F2ED4ADA536_138;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-C82F7744F78AA5830EDBD9AD774CFF76737F7D40
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DC82F7744F78AA5830EDBD9AD774CFF76737F7D40_139;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-F0B8FC0DD1D15142D7FE83F9E3295413AB138E5A
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DF0B8FC0DD1D15142D7FE83F9E3295413AB138E5A_140;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-FE68796AD0908776C9F23F326A4181C1F53CF4DF
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DFE68796AD0908776C9F23F326A4181C1F53CF4DF_141;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-D5B6993D49960DF01393AD8095091B12332C2FA3
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DD5B6993D49960DF01393AD8095091B12332C2FA3_142;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-EFAA45999AF190FC718690DC0121EB49DE7FFCE5
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DEFAA45999AF190FC718690DC0121EB49DE7FFCE5_143;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-8971045D9FA23669DC4A204D478DC63888A9B420
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D8971045D9FA23669DC4A204D478DC63888A9B420_144;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-0C7D347178E5302733AED896AA3A7B5DDEDC3A90
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D0C7D347178E5302733AED896AA3A7B5DDEDC3A90_145;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-F3C13ED8775EDD51E351EE8A9EE972F228E4D6DE
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DF3C13ED8775EDD51E351EE8A9EE972F228E4D6DE_146;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-12625AC94FB97DAA377449A877D25786C8ADFFC5
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D12625AC94FB97DAA377449A877D25786C8ADFFC5_147;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-99CC0827BC16027263E3737FF59411A5D4BFDE31
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D99CC0827BC16027263E3737FF59411A5D4BFDE31_148;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-CB780513B9E4B4E2590F7104B066F632E7BC3E38
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DCB780513B9E4B4E2590F7104B066F632E7BC3E38_149;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-484B207F3CBCE8338BDE26F04E87EE256891BE0F
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D484B207F3CBCE8338BDE26F04E87EE256891BE0F_150;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-71D2BEF10D4C6CA98FC143E3E4B7DB154F9FB890
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D71D2BEF10D4C6CA98FC143E3E4B7DB154F9FB890_151;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-AA607BA0FA20D3E80F456E68768C517D17D073D5
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DAA607BA0FA20D3E80F456E68768C517D17D073D5_152;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-E29A089A3B7A1786D6BD82DBB5C8E7E5785542ED
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DE29A089A3B7A1786D6BD82DBB5C8E7E5785542ED_153;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-48F073C6CC618A8FDA6FD23ABFDC828CC6A5812E
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D48F073C6CC618A8FDA6FD23ABFDC828CC6A5812E_154;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-35E8FEC2F20CD20788D4696BE84FFE01B7F8CF49
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D35E8FEC2F20CD20788D4696BE84FFE01B7F8CF49_155;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-22BF5B86DC5E0B87331903141C5973C117DA716E
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D22BF5B86DC5E0B87331903141C5973C117DA716E_156;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-2357B210FC2522A4A9D0F465AEAC250A79FA9449
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D2357B210FC2522A4A9D0F465AEAC250A79FA9449_157;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-38017E50AF503681BFC2BD0CDED5F7565471B574
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D38017E50AF503681BFC2BD0CDED5F7565471B574_158;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-E5AD60E2BE68FA0155888A7E87B34F03905E7584
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DE5AD60E2BE68FA0155888A7E87B34F03905E7584_159;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-B5E2D0ECF599F0A1D05EA2245C99A83E064F0B2A
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DB5E2D0ECF599F0A1D05EA2245C99A83E064F0B2A_160;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-BFF88CC5DA20A8D6A16ABACAA74E0573BBA528FA
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DBFF88CC5DA20A8D6A16ABACAA74E0573BBA528FA_161;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-79BEC582299CE5F46902B9C091C19931E26D9323
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D79BEC582299CE5F46902B9C091C19931E26D9323_162;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-1DDB4E5FC90455E6D0C0C82A30C6CB0EC456C9A9
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D1DDB4E5FC90455E6D0C0C82A30C6CB0EC456C9A9_163;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-1A85140B8FCA30191EE9347F53782234F0781F79
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D1A85140B8FCA30191EE9347F53782234F0781F79_164;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-6B38D84409B2091CBC93686439AC2C04C76DB96E
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D6B38D84409B2091CBC93686439AC2C04C76DB96E_165;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-DC7D58FD4F690A68811E226229F74D0089F018B3
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DDC7D58FD4F690A68811E226229F74D0089F018B3_166;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-6727D77DB74B08CC9003029AC92B7AC68E258811
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D6727D77DB74B08CC9003029AC92B7AC68E258811_167;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-C7FBA0F208A16658206056EC89481A5EE74A7259
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DC7FBA0F208A16658206056EC89481A5EE74A7259_168;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-AE2DCC8D6F51ED60D95A61A92C489BB896645BEA
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DAE2DCC8D6F51ED60D95A61A92C489BB896645BEA_169;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-E2654B2181D84518EB5EE7BC342CFFD1F528E908
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DE2654B2181D84518EB5EE7BC342CFFD1F528E908_170;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-34617E1F9E901BD9DD9FEB1839483F5ED406E7B3
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D34617E1F9E901BD9DD9FEB1839483F5ED406E7B3_171;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-F09F029091837E12B4E60500BED0749D79F77FC2
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DF09F029091837E12B4E60500BED0749D79F77FC2_172;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-C92559E411FAF1D47ADD6CCA7374DAF066069D00
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DC92559E411FAF1D47ADD6CCA7374DAF066069D00_173;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-FCF9CE737F38E152A767F1291260BF9E15F80078
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DFCF9CE737F38E152A767F1291260BF9E15F80078_174;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-3D8521A958BBFCC708EE0728993AE8CAFEB154D6
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D3D8521A958BBFCC708EE0728993AE8CAFEB154D6_175;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-0D0AD555C6DA0BD4268F8573DC103F455F62A610
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D0D0AD555C6DA0BD4268F8573DC103F455F62A610_176;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-749EB212DEC39495349481F49F3DEF480777A197
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D749EB212DEC39495349481F49F3DEF480777A197_177;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-802AD21B222E489DAFEADD5E18868203D9FC2A89
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D802AD21B222E489DAFEADD5E18868203D9FC2A89_178;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-3F152B3DFAF72A55D78439E5015C55A20967621A
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D3F152B3DFAF72A55D78439E5015C55A20967621A_179;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-BBE42ED1645F9D77581D1D5B6EE11B933512F832
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DBBE42ED1645F9D77581D1D5B6EE11B933512F832_180;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-770616E567083077933DC0B29A8F8368FC2EB431
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D770616E567083077933DC0B29A8F8368FC2EB431_181;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-DD04181543E071971F6379A33D631064A9B051D8
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DDD04181543E071971F6379A33D631064A9B051D8_182;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-D1C5CA089B2632B5ECD27F78A8E343FB6088AF2F
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DD1C5CA089B2632B5ECD27F78A8E343FB6088AF2F_183;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-5C35E2C7D0F17CBE31F7F544FF3837EA3A2EE963
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D5C35E2C7D0F17CBE31F7F544FF3837EA3A2EE963_184;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-3199DD35AA6A041AF9F66BFBAEC3563E838D3731
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D3199DD35AA6A041AF9F66BFBAEC3563E838D3731_185;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-E4728252FCD7F68FDFA39BD57E3E2CA9D7FEA1C2
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2DE4728252FCD7F68FDFA39BD57E3E2CA9D7FEA1C2_186;
	// <PrivateImplementationDetails>/$ArrayType=176 <PrivateImplementationDetails>::$field-42A99199D41E8832E72CD942706DDA326C0BB356
	U24ArrayTypeU3D176_tBA1263E9EBF578E83CE3188757EDB81ED288D512 ___U24fieldU2D42A99199D41E8832E72CD942706DDA326C0BB356_187;
	// <PrivateImplementationDetails>/$ArrayType=192 <PrivateImplementationDetails>::$field-7E1BD4E95DA87F65A3B99B774AE2F2F3B56E4739
	U24ArrayTypeU3D192_t02287C04F72E4D4D7775DCCF157D31E3B8FB8A26 ___U24fieldU2D7E1BD4E95DA87F65A3B99B774AE2F2F3B56E4739_188;
	// <PrivateImplementationDetails>/$ArrayType=40 <PrivateImplementationDetails>::$field-C4449C115C6F0E639E5F53D593F6E85D55D18DB0
	U24ArrayTypeU3D40_t4757F36D3D0BB24F3CF7A3E0C5655607D03CE934 ___U24fieldU2DC4449C115C6F0E639E5F53D593F6E85D55D18DB0_189;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-4B811DD8E2B83E6826F8004D4A5CE44AFACAEB3E
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D4B811DD8E2B83E6826F8004D4A5CE44AFACAEB3E_190;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-49594851C4B6C279C35B162F0236A99E7C31DD36
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D49594851C4B6C279C35B162F0236A99E7C31DD36_191;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-76D7CB1729978C5437409A8C56AA1C7E24890D5C
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2D76D7CB1729978C5437409A8C56AA1C7E24890D5C_192;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-53173106B161530CA26C69983B44BBE2FAB890D0
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D53173106B161530CA26C69983B44BBE2FAB890D0_193;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-5DD69D93CBAA5623AE286E97265890A7693A0AC2
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D5DD69D93CBAA5623AE286E97265890A7693A0AC2_194;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-9BBB53FFCACBBEE118BC0F5D16EDC4DF37E55093
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D9BBB53FFCACBBEE118BC0F5D16EDC4DF37E55093_195;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-5E3F56450E340B21A3A13E39A66941353F8C7C1A
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D5E3F56450E340B21A3A13E39A66941353F8C7C1A_196;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-5B09FAED4CEFCE4CFF42D910767BD0D40C69AB6C
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D5B09FAED4CEFCE4CFF42D910767BD0D40C69AB6C_197;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-85666B25692AB814E91F685384EEA0389F147E70
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D85666B25692AB814E91F685384EEA0389F147E70_198;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-2923D4191FF7FBBF11BFC643B6D93CC8074D31E1
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D2923D4191FF7FBBF11BFC643B6D93CC8074D31E1_199;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-BF4FBD059EA47B09FA514A81515DD83A7F22A498
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2DBF4FBD059EA47B09FA514A81515DD83A7F22A498_200;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-2DFCD7C13A7339CC41C473220CE80CDD5933C64C
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D2DFCD7C13A7339CC41C473220CE80CDD5933C64C_201;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-241FC42CDC9A5435B317D1D425FB9AB8A93B16CD
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D241FC42CDC9A5435B317D1D425FB9AB8A93B16CD_202;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-FB5B6D5F0175884C50A188B0D895EF076089CA59
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2DFB5B6D5F0175884C50A188B0D895EF076089CA59_203;
	// <PrivateImplementationDetails>/$ArrayType=40 <PrivateImplementationDetails>::$field-D8E058E700187A5AE3C7ED9D62CD09EDA04E8C70
	U24ArrayTypeU3D40_t4757F36D3D0BB24F3CF7A3E0C5655607D03CE934 ___U24fieldU2DD8E058E700187A5AE3C7ED9D62CD09EDA04E8C70_204;
	// <PrivateImplementationDetails>/$ArrayType=40 <PrivateImplementationDetails>::$field-69499AF6438C222AAADFC92FF3D3DF3902A454FC
	U24ArrayTypeU3D40_t4757F36D3D0BB24F3CF7A3E0C5655607D03CE934 ___U24fieldU2D69499AF6438C222AAADFC92FF3D3DF3902A454FC_205;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-BC601A72F71FEE653B26E1E23423D670FD6142A9
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2DBC601A72F71FEE653B26E1E23423D670FD6142A9_206;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-58617B53456F13D2C965FEDC713224146FF1D11D
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D58617B53456F13D2C965FEDC713224146FF1D11D_207;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-37720E07DCB1A0DE1B2AA26140CBBCE5B7CEF83B
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D37720E07DCB1A0DE1B2AA26140CBBCE5B7CEF83B_208;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-A775526D6CB18A159A9D0058EF4965E28F37728A
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DA775526D6CB18A159A9D0058EF4965E28F37728A_209;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-CD19C8A720539A82055A9A79DC2ACA383C8391EC
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DCD19C8A720539A82055A9A79DC2ACA383C8391EC_210;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-F3D696342113DA08D1E1137FAF4A0EA75528F4B1
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DF3D696342113DA08D1E1137FAF4A0EA75528F4B1_211;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-F712084872F1D1032709FE5D061EB9823935218B
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DF712084872F1D1032709FE5D061EB9823935218B_212;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-7D57D9A1C7BE3A7DA2E580EBEAD0BFD45258D685
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D7D57D9A1C7BE3A7DA2E580EBEAD0BFD45258D685_213;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-979F2569756BB119E445AEE1858AA9FF843D50D3
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D979F2569756BB119E445AEE1858AA9FF843D50D3_214;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-554D07B120F670642C2E084630E1FC934493F77A
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D554D07B120F670642C2E084630E1FC934493F77A_215;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-ED287C12C98FBFF89ABECF791F6002C744611DF2
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DED287C12C98FBFF89ABECF791F6002C744611DF2_216;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-489C00B0880CC1722D3C9AA39E9B3A7E9B707E1B
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D489C00B0880CC1722D3C9AA39E9B3A7E9B707E1B_217;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-AE522D87D7B5CE3FD6024A99A470034A3CD2AD77
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DAE522D87D7B5CE3FD6024A99A470034A3CD2AD77_218;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-D391A06D49B4A83235C72DFF6CD585A3A6A25DAC
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DD391A06D49B4A83235C72DFF6CD585A3A6A25DAC_219;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-68640313FD96E135B2552AEAF57640ECD0F5FAAD
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D68640313FD96E135B2552AEAF57640ECD0F5FAAD_220;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-F5421F21FA24DF84E420E784964BD05712FA7877
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DF5421F21FA24DF84E420E784964BD05712FA7877_221;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-B6D48CCB374BD668F4702FC075136D8D3F342249
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DB6D48CCB374BD668F4702FC075136D8D3F342249_222;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-50F1A8BFE881D12B7F71F2F6DF665871961C1844
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D50F1A8BFE881D12B7F71F2F6DF665871961C1844_223;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-F8E35537587B75B92FEE6B7CB5382B94B7C60801
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DF8E35537587B75B92FEE6B7CB5382B94B7C60801_224;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-822AAEB126055DDDEF1FD83D397EBD1B42251D55
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D822AAEB126055DDDEF1FD83D397EBD1B42251D55_225;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-C99165B6EF57146FA371C56E00E9D3AFA9A4FF1A
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DC99165B6EF57146FA371C56E00E9D3AFA9A4FF1A_226;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-6C4421D25E36893E7F97F8C7D52C6EDF80282F84
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D6C4421D25E36893E7F97F8C7D52C6EDF80282F84_227;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-0FF58C886BC81FD5582D8D9EBF3E6D25465C4EE3
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D0FF58C886BC81FD5582D8D9EBF3E6D25465C4EE3_228;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-E60E9BD2EB51E1ECDA0723CF09889B4A3BFB8956
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DE60E9BD2EB51E1ECDA0723CF09889B4A3BFB8956_229;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-30930F1250FC272AF80220FB38413B7DD06046FE
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D30930F1250FC272AF80220FB38413B7DD06046FE_230;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-52B044D1FBBA0C585B2A0D552AFB1B842597FA3A
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D52B044D1FBBA0C585B2A0D552AFB1B842597FA3A_231;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-F4987342446B9EA993951AA78D5DD62FD492A090
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DF4987342446B9EA993951AA78D5DD62FD492A090_232;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-463B5AF98CB96CE44023CC9A16BD22C68DB41662
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D463B5AF98CB96CE44023CC9A16BD22C68DB41662_233;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-ABC8C99B49769734BD820D6257999C9D6CD9DE60
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2DABC8C99B49769734BD820D6257999C9D6CD9DE60_234;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-2861CF9E030EE4DA3C1BA4824C08FA40377E2C1A
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D2861CF9E030EE4DA3C1BA4824C08FA40377E2C1A_235;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-454BEECC44D2D67A27C16F6E7CD7D3C3BEA3CE8E
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D454BEECC44D2D67A27C16F6E7CD7D3C3BEA3CE8E_236;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-8683FBE90F936E0F2A1080E053EBA3EE9F44A02B
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D8683FBE90F936E0F2A1080E053EBA3EE9F44A02B_237;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-72CDCBDCF34EFD3E09C3F7057DB715DAAFCE06E2
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D72CDCBDCF34EFD3E09C3F7057DB715DAAFCE06E2_238;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-9032D4E1ED9EBAC2417A10654FF0C658D2CC9825
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D9032D4E1ED9EBAC2417A10654FF0C658D2CC9825_239;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-0BDCFD3264DD1A949E825D9EBC8E14CB1FB19F49
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D0BDCFD3264DD1A949E825D9EBC8E14CB1FB19F49_240;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-23D0C20AB9ABA25A5B61CC87AF33BBE7DDF6E2DD
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D23D0C20AB9ABA25A5B61CC87AF33BBE7DDF6E2DD_241;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-808AD19CA818077F71100880E7D7AA21147E987E
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D808AD19CA818077F71100880E7D7AA21147E987E_242;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-F7A6F8B9AF2E302CB6C36EC03780155D9A9C5CC4
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2DF7A6F8B9AF2E302CB6C36EC03780155D9A9C5CC4_243;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-471648086F9480CB553B7802323E0A75FFE09C5A
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D471648086F9480CB553B7802323E0A75FFE09C5A_244;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-79F9F064F81690C950BF4EFFAA5245BA966607C9
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D79F9F064F81690C950BF4EFFAA5245BA966607C9_245;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-80DD6A282D563836522C10A78AAA17F0B865EB5A
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D80DD6A282D563836522C10A78AAA17F0B865EB5A_246;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-1037DC6EAB9D7D3850660726ED132EAD961A41E9
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D1037DC6EAB9D7D3850660726ED132EAD961A41E9_247;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-661F9E9FEA16C3A9CDF452AB61743578471F7447
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D661F9E9FEA16C3A9CDF452AB61743578471F7447_248;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-F86A89C59555BE5241482CB0FD35624F05D127CD
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DF86A89C59555BE5241482CB0FD35624F05D127CD_249;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-6F604C33212E20CBFCE9F2221492DC6FD823857C
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D6F604C33212E20CBFCE9F2221492DC6FD823857C_250;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-3E8C3886467AEC93954B0B1F23B4969CE5FDB3A1
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D3E8C3886467AEC93954B0B1F23B4969CE5FDB3A1_251;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-F2A80E19AE1B044B9792F5F7C2936FB5C5D8581F
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DF2A80E19AE1B044B9792F5F7C2936FB5C5D8581F_252;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-88CFCB31ED9AFFB90483973D02D5DEE8A82A4892
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D88CFCB31ED9AFFB90483973D02D5DEE8A82A4892_253;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-C29C4F31F34306CA62AC81D96AE1FB141EC2A8B6
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DC29C4F31F34306CA62AC81D96AE1FB141EC2A8B6_254;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-CF1C9B07580D3992A644F840EBBB156E0E92B758
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DCF1C9B07580D3992A644F840EBBB156E0E92B758_255;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-4CCAF842695DCCF7F7A9EC0D641DC36B38937FA3
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D4CCAF842695DCCF7F7A9EC0D641DC36B38937FA3_256;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-C62717FC35BA54563F42385BF79E44DD0A510124
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DC62717FC35BA54563F42385BF79E44DD0A510124_257;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-B19381C60E723A535EF856EC118DB867503FCC63
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DB19381C60E723A535EF856EC118DB867503FCC63_258;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-7FDC1CA6ED532684E45DDAE8484274399FCE4C59
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D7FDC1CA6ED532684E45DDAE8484274399FCE4C59_259;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-061E1E805CBF51D839C3B91E8ACD0326E5C77FFE
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D061E1E805CBF51D839C3B91E8ACD0326E5C77FFE_260;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-99D70A082BCB145B3134DDB7BEC4FDB5BDEFA756
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D99D70A082BCB145B3134DDB7BEC4FDB5BDEFA756_261;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-8DCF3F57BD5AAF8D097375E4290A41B13B2C8B04
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D8DCF3F57BD5AAF8D097375E4290A41B13B2C8B04_262;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-A3F55D69F9A97411DB4065F0FA414D912A181B69
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DA3F55D69F9A97411DB4065F0FA414D912A181B69_263;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-539B26D17C2DEB88FB9E07611D164408E23C35AB
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D539B26D17C2DEB88FB9E07611D164408E23C35AB_264;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-AB44F69765F4A8ECD5D47354EA625039C43CC4D6
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DAB44F69765F4A8ECD5D47354EA625039C43CC4D6_265;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-A0324640CCF369A6794A9A8BB204ED22651ECBCC
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DA0324640CCF369A6794A9A8BB204ED22651ECBCC_266;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-43F1E6E3BAC38A7A3EF99D836F94376A07C57F79
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2D43F1E6E3BAC38A7A3EF99D836F94376A07C57F79_267;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-C9E3D331C8CC7E17B017EC19E05F5868E4A2D00B
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2DC9E3D331C8CC7E17B017EC19E05F5868E4A2D00B_268;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-09E1F33A3C65971119BBEF1ED121FE70EA9CFA5C
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D09E1F33A3C65971119BBEF1ED121FE70EA9CFA5C_269;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-12F1DB2AC68CD455638374E8DF9E9D604B15F693
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D12F1DB2AC68CD455638374E8DF9E9D604B15F693_270;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-9623BB2649942957F680075A5AD3A16DE427F7A2
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D9623BB2649942957F680075A5AD3A16DE427F7A2_271;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-5C563BFAB6400B2824F5E41D78FB3097E8244C26
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D5C563BFAB6400B2824F5E41D78FB3097E8244C26_272;
	// <PrivateImplementationDetails>/$ArrayType=36 <PrivateImplementationDetails>::$field-6A09CB785087F5A9F6EC748C7C10F98FA2683534
	U24ArrayTypeU3D36_t9BAD3C9C20ED9BD4942DDA263897FDB4AE00E614 ___U24fieldU2D6A09CB785087F5A9F6EC748C7C10F98FA2683534_273;
	// <PrivateImplementationDetails>/$ArrayType=40 <PrivateImplementationDetails>::$field-9F8CAB0A98B00335FDDBCC16C748FEA524A25435
	U24ArrayTypeU3D40_t4757F36D3D0BB24F3CF7A3E0C5655607D03CE934 ___U24fieldU2D9F8CAB0A98B00335FDDBCC16C748FEA524A25435_274;
	// <PrivateImplementationDetails>/$ArrayType=44 <PrivateImplementationDetails>::$field-0E4585982EA19664C33EA213EE69EC548F7322B0
	U24ArrayTypeU3D44_t2C89E8C6B06DE210ABF58F20B2EBCB96E4800F8F ___U24fieldU2D0E4585982EA19664C33EA213EE69EC548F7322B0_275;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-E62D0D793D6BCA39079E6441B162E59F33ED2B07
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2DE62D0D793D6BCA39079E6441B162E59F33ED2B07_276;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-40FEF102AB67B5038E6D9E2EE2BE16854A49810D
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D40FEF102AB67B5038E6D9E2EE2BE16854A49810D_277;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-B15D37D4738DBDC32C38C2E1B6A1833322C22868
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2DB15D37D4738DBDC32C38C2E1B6A1833322C22868_278;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-D41FD917303D010F26005BDAF1F31ABC8A512A13
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2DD41FD917303D010F26005BDAF1F31ABC8A512A13_279;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-881C2E8F71772ECA0CFC4DB357196C4EB788D6F8
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D881C2E8F71772ECA0CFC4DB357196C4EB788D6F8_280;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-CC9EE2CF247B3534102C1324C2679503686EF031
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2DCC9EE2CF247B3534102C1324C2679503686EF031_281;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-E6C34D5D4381C0E6151B26FB9A314D8A57292366
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2DE6C34D5D4381C0E6151B26FB9A314D8A57292366_282;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-F0E174E706EA1C2F8D181561F84976C942B1DE4B
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2DF0E174E706EA1C2F8D181561F84976C942B1DE4B_283;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-80E9217618F8C2C7FED61E4E7653CD0E66C74872
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D80E9217618F8C2C7FED61E4E7653CD0E66C74872_284;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-9ACE167D7580B82857BBF66A5A9BC1E2D139353C
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D9ACE167D7580B82857BBF66A5A9BC1E2D139353C_285;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-8EB2BFBB9F53D86C1ADDFFA44DEE5F61A85BE91F
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D8EB2BFBB9F53D86C1ADDFFA44DEE5F61A85BE91F_286;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-7102A07EDF52C052D5625D73275A579DC6E76C92
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D7102A07EDF52C052D5625D73275A579DC6E76C92_287;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-9858ACE49B9B39354CFCB05E54A9790070E48D39
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D9858ACE49B9B39354CFCB05E54A9790070E48D39_288;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-6CEDD7504235CF66C53FB70A17ACBDD440D77C62
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D6CEDD7504235CF66C53FB70A17ACBDD440D77C62_289;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-3F6BF7D0B62CB3F477969D34B9EE004C7B4B7B5A
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D3F6BF7D0B62CB3F477969D34B9EE004C7B4B7B5A_290;
	// <PrivateImplementationDetails>/$ArrayType=40 <PrivateImplementationDetails>::$field-868C8972C4058443A2D131C22083401956DF81C7
	U24ArrayTypeU3D40_t4757F36D3D0BB24F3CF7A3E0C5655607D03CE934 ___U24fieldU2D868C8972C4058443A2D131C22083401956DF81C7_291;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-761EC2969B9D1960DB3CB7FC05EEC96944B59BC6
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2D761EC2969B9D1960DB3CB7FC05EEC96944B59BC6_292;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-5BE9DB9EEB9CBB4D22472CA9734B1FA1D36126BD
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2D5BE9DB9EEB9CBB4D22472CA9734B1FA1D36126BD_293;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-35859E8329070E55C5D9282930023DD6B1594141
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D35859E8329070E55C5D9282930023DD6B1594141_294;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-E52D7E54D3429CAFB3EDE14F949FC54F5CA8DB5E
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2DE52D7E54D3429CAFB3EDE14F949FC54F5CA8DB5E_295;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-91EA1528B7E2B59DB78E5E7A749312DD20AA43F1
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D91EA1528B7E2B59DB78E5E7A749312DD20AA43F1_296;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-10486CAECBA5E73DA05910F94513409DEB6316FD
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D10486CAECBA5E73DA05910F94513409DEB6316FD_297;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-F65CD55AD5CBB0D49B45E05C5C0369616C658AB1
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2DF65CD55AD5CBB0D49B45E05C5C0369616C658AB1_298;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-EB5C89140591CED42C39A8AE698A41F3593C3C62
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2DEB5C89140591CED42C39A8AE698A41F3593C3C62_299;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-79A4B717DAF4312A78F1A75A72221DB9690D1B25
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D79A4B717DAF4312A78F1A75A72221DB9690D1B25_300;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-F865498CC0010E6ACE166D01EEA92F0F3C87743D
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2DF865498CC0010E6ACE166D01EEA92F0F3C87743D_301;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-50DACD1562B0163C9FC5B673478D4231A4B37B1F
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D50DACD1562B0163C9FC5B673478D4231A4B37B1F_302;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-60E3C19D774F8C210299534335ED5D3154717218
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D60E3C19D774F8C210299534335ED5D3154717218_303;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-58B2CCE2545886B61E58C3C60831C2B049814E09
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D58B2CCE2545886B61E58C3C60831C2B049814E09_304;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-EA86E31C9F6288681516E2AA22EF6B5CD441AB94
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DEA86E31C9F6288681516E2AA22EF6B5CD441AB94_305;
	// <PrivateImplementationDetails>/$ArrayType=40 <PrivateImplementationDetails>::$field-C5D5B1E32C9C12C0006F02AA8C3B84BFF480F932
	U24ArrayTypeU3D40_t4757F36D3D0BB24F3CF7A3E0C5655607D03CE934 ___U24fieldU2DC5D5B1E32C9C12C0006F02AA8C3B84BFF480F932_306;
	// <PrivateImplementationDetails>/$ArrayType=40 <PrivateImplementationDetails>::$field-38CAE5BC1B31E24A88061CEC362093BB4D8F0523
	U24ArrayTypeU3D40_t4757F36D3D0BB24F3CF7A3E0C5655607D03CE934 ___U24fieldU2D38CAE5BC1B31E24A88061CEC362093BB4D8F0523_307;
	// <PrivateImplementationDetails>/$ArrayType=60 <PrivateImplementationDetails>::$field-AB8EE303E4778A072B4FBF0D1BAF719F5740D639
	U24ArrayTypeU3D60_t175D09B2F982245262BA96FE859CC907B4740C1D ___U24fieldU2DAB8EE303E4778A072B4FBF0D1BAF719F5740D639_308;
	// <PrivateImplementationDetails>/$ArrayType=52 <PrivateImplementationDetails>::$field-015DD996AF306342EB88A7A2CEBCA8C925A84DBA
	U24ArrayTypeU3D52_tC2D0019A986F7D91626C16A03A8A643E5D2DA11C ___U24fieldU2D015DD996AF306342EB88A7A2CEBCA8C925A84DBA_309;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-4D317202204E9741354BC1A1628BC10A05E2AB7B
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D4D317202204E9741354BC1A1628BC10A05E2AB7B_310;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-E2C0239EBBF1FD45925FAA7909458304DFD37A84
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2DE2C0239EBBF1FD45925FAA7909458304DFD37A84_311;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-6891D97C19F4C291AD821EF05E4C5D1BD3C34796
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D6891D97C19F4C291AD821EF05E4C5D1BD3C34796_312;
	// <PrivateImplementationDetails>/$ArrayType=36 <PrivateImplementationDetails>::$field-7CF92A83536E2264EF41D8C407D246E41E2DBCD6
	U24ArrayTypeU3D36_t9BAD3C9C20ED9BD4942DDA263897FDB4AE00E614 ___U24fieldU2D7CF92A83536E2264EF41D8C407D246E41E2DBCD6_313;
	// <PrivateImplementationDetails>/$ArrayType=3716 <PrivateImplementationDetails>::$field-321E8233438B6A0FC1CED376D83669D77DDCB197
	U24ArrayTypeU3D3716_t24D0377F87C1FD5D60198E7F08BF259FDEEAA247 ___U24fieldU2D321E8233438B6A0FC1CED376D83669D77DDCB197_314;
	// <PrivateImplementationDetails>/$ArrayType=3716 <PrivateImplementationDetails>::$field-3B13C34A22C3ABC46931B0F1ACB525AF9C766555
	U24ArrayTypeU3D3716_t24D0377F87C1FD5D60198E7F08BF259FDEEAA247 ___U24fieldU2D3B13C34A22C3ABC46931B0F1ACB525AF9C766555_315;
	// <PrivateImplementationDetails>/$ArrayType=3716 <PrivateImplementationDetails>::$field-4BF95F3AA815683A9B06E908AED381A4A1F74B69
	U24ArrayTypeU3D3716_t24D0377F87C1FD5D60198E7F08BF259FDEEAA247 ___U24fieldU2D4BF95F3AA815683A9B06E908AED381A4A1F74B69_316;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-1731583B409CA361F2043D134A8AE7347FEFFA02
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D1731583B409CA361F2043D134A8AE7347FEFFA02_317;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-DF826450A95A4CA3A4CF3C839F014A1E65CA7E66
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DDF826450A95A4CA3A4CF3C839F014A1E65CA7E66_318;
	// <PrivateImplementationDetails>/$ArrayType=64 <PrivateImplementationDetails>::$field-3A9899026AA45C5B8CBC33EA4E9500C06C70A676
	U24ArrayTypeU3D64_t9F1E248845F8DB8725999BC3634D3EEB492B6247 ___U24fieldU2D3A9899026AA45C5B8CBC33EA4E9500C06C70A676_319;
	// <PrivateImplementationDetails>/$ArrayType=128 <PrivateImplementationDetails>::$field-73007547B1ECC2B8F952DCF7F5C1DF9FA59816C0
	U24ArrayTypeU3D128_tC44CEE7B03B163E8E31077029B71F0B172A7D86B ___U24fieldU2D73007547B1ECC2B8F952DCF7F5C1DF9FA59816C0_320;
	// <PrivateImplementationDetails>/$ArrayType=256 <PrivateImplementationDetails>::$field-BEE3CD4B638BC8E793B43A957EEBA755EBFE6C7A
	U24ArrayTypeU3D256_tCE18EF3C2B291E351A93A0EEA635D93E0FA98B7D ___U24fieldU2DBEE3CD4B638BC8E793B43A957EEBA755EBFE6C7A_321;
	// <PrivateImplementationDetails>/$ArrayType=512 <PrivateImplementationDetails>::$field-63B399CDA18721BF4A3C1A8F3C46E0B4271B0C72
	U24ArrayTypeU3D512_tA1BC0FC7E17D4A98BCD7190CE8CCB04D465D2314 ___U24fieldU2D63B399CDA18721BF4A3C1A8F3C46E0B4271B0C72_322;
	// <PrivateImplementationDetails>/$ArrayType=1024 <PrivateImplementationDetails>::$field-CB977C653066713ED0380B2FE43BBE0F0DB23C40
	U24ArrayTypeU3D1024_t1B6507B5A24BCD75B39F02E13CBEE8573D95A83C ___U24fieldU2DCB977C653066713ED0380B2FE43BBE0F0DB23C40_323;
	// <PrivateImplementationDetails>/$ArrayType=2048 <PrivateImplementationDetails>::$field-6899B08AECD2920523869792BEF1EB015EA006EB
	U24ArrayTypeU3D2048_t80283BCC64DC5C9D9CF8605498C214434C507DB1 ___U24fieldU2D6899B08AECD2920523869792BEF1EB015EA006EB_324;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-BB5BACD5F279DFD18719AD741270EB4D572F5EB5
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2DBB5BACD5F279DFD18719AD741270EB4D572F5EB5_325;
	// <PrivateImplementationDetails>/$ArrayType=32 <PrivateImplementationDetails>::$field-549473D5D7CE946598E290443C2275781642E357
	U24ArrayTypeU3D32_tF13E0BADA5E7666E8C4FACA9395C8617400C72D3 ___U24fieldU2D549473D5D7CE946598E290443C2275781642E357_326;
	// <PrivateImplementationDetails>/$ArrayType=11148 <PrivateImplementationDetails>::$field-3E12851A90C6A08ACCD1D67634AC7FD1639B898D
	U24ArrayTypeU3D11148_tA90BC389C491AAB0DB2098D1316658EFC4725BB5 ___U24fieldU2D3E12851A90C6A08ACCD1D67634AC7FD1639B898D_327;
	// <PrivateImplementationDetails>/$ArrayType=11148 <PrivateImplementationDetails>::$field-E02E3EC94504AFEEB34CE409836A3797D7E43964
	U24ArrayTypeU3D11148_tA90BC389C491AAB0DB2098D1316658EFC4725BB5 ___U24fieldU2DE02E3EC94504AFEEB34CE409836A3797D7E43964_328;
	// <PrivateImplementationDetails>/$ArrayType=92 <PrivateImplementationDetails>::$field-9DE8A0E2623985ED7E979AD31C83E1F033A0A353
	U24ArrayTypeU3D92_t8F104510A52BE3EA27132167B9AB58B823C961BB ___U24fieldU2D9DE8A0E2623985ED7E979AD31C83E1F033A0A353_329;
	// <PrivateImplementationDetails>/$ArrayType=64 <PrivateImplementationDetails>::$field-3E4BBF9D0CDD2E34F78AA7A9A3979DCE1F7B02BD
	U24ArrayTypeU3D64_t9F1E248845F8DB8725999BC3634D3EEB492B6247 ___U24fieldU2D3E4BBF9D0CDD2E34F78AA7A9A3979DCE1F7B02BD_330;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-F20B4E4CCB47B4F0631333A4DEE30DB71336110C
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2DF20B4E4CCB47B4F0631333A4DEE30DB71336110C_331;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-59A84F660FFFFA4B9C037456F9D56E26ACF3663E
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2D59A84F660FFFFA4B9C037456F9D56E26ACF3663E_332;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-55A6E22CC24364881F62CCF67CBE9A348DC602FA
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2D55A6E22CC24364881F62CCF67CBE9A348DC602FA_333;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-C530C580972A28DBE79D791F61E5916A541E6A1A
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2DC530C580972A28DBE79D791F61E5916A541E6A1A_334;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-F44B79D8208EDC17F9C96AA7DEA4983114BF698D
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2DF44B79D8208EDC17F9C96AA7DEA4983114BF698D_335;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-20D740A7E661D50B06DC32EF6577367D264F6235
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2D20D740A7E661D50B06DC32EF6577367D264F6235_336;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-783FD3C801560D4BA59B6ADFEB9C9F8A4EBC4319
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2D783FD3C801560D4BA59B6ADFEB9C9F8A4EBC4319_337;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-FB977BD3A3BBAD68C2BBDBC28188F1084531E78E
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2DFB977BD3A3BBAD68C2BBDBC28188F1084531E78E_338;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-7616E4F44CA76DF539C11B9C8FD911D667FEFC52
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2D7616E4F44CA76DF539C11B9C8FD911D667FEFC52_339;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-9D6E2A703E2F8C69C9C7A0B8DB8F6A8035E84601
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2D9D6E2A703E2F8C69C9C7A0B8DB8F6A8035E84601_340;
	// <PrivateImplementationDetails>/$ArrayType=12 <PrivateImplementationDetails>::$field-8DB47DDFFC81E0976DEF3EFF3CA9EFC8465CFEEE
	U24ArrayTypeU3D12_tACD9F246DEDCFF646EC599730B13BF88AB8A6B12 ___U24fieldU2D8DB47DDFFC81E0976DEF3EFF3CA9EFC8465CFEEE_341;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-DA8D7694A42602F7DC0356F30B9E1DFF8196724A
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2DDA8D7694A42602F7DC0356F30B9E1DFF8196724A_342;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-0222E151247DAE31A8D697EAA14F43F718BD1F1C
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D0222E151247DAE31A8D697EAA14F43F718BD1F1C_343;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-E3F60CFE7E50B9DEE37D8E598AEF39CB00B560ED
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2DE3F60CFE7E50B9DEE37D8E598AEF39CB00B560ED_344;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-9E548860392B66258417232F41EF03D48EBDD686
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D9E548860392B66258417232F41EF03D48EBDD686_345;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-6DE89499E8F85867289E1690E176E1DE58EE6DD3
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D6DE89499E8F85867289E1690E176E1DE58EE6DD3_346;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-FE195C5B0D58FB23FADD5D69D2F59D86FA4E7C97
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2DFE195C5B0D58FB23FADD5D69D2F59D86FA4E7C97_347;
	// <PrivateImplementationDetails>/$ArrayType=16 <PrivateImplementationDetails>::$field-6882914B984B24C4880E3BEA646DC549B3C34ABC
	U24ArrayTypeU3D16_tFB538446D39CE76147BB375803F357EE01290A67 ___U24fieldU2D6882914B984B24C4880E3BEA646DC549B3C34ABC_348;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-BB40482B7503DCF14BB6DAE300C2717C3021C7B2
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2DBB40482B7503DCF14BB6DAE300C2717C3021C7B2_349;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-2AA5A01E857E2BB4C8B4DF06D1CA848E68BE04A2
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D2AA5A01E857E2BB4C8B4DF06D1CA848E68BE04A2_350;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-E7C922829EFA88D74E95C71CA41A941437B64767
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2DE7C922829EFA88D74E95C71CA41A941437B64767_351;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-9BBAB86ACB95EF8C028708733458CDBAC4715197
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D9BBAB86ACB95EF8C028708733458CDBAC4715197_352;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-2309DA7AF39CA2B05C77DC6399A4EFF2563EC3EB
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D2309DA7AF39CA2B05C77DC6399A4EFF2563EC3EB_353;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-9B3E34C734351ED3DE1984119EAB9572C48FA15E
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D9B3E34C734351ED3DE1984119EAB9572C48FA15E_354;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-259B7EF54A535F34001B95480B4BB11245EA41B5
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D259B7EF54A535F34001B95480B4BB11245EA41B5_355;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-188E7A480B871C554F3F805D3E1184673960EED5
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D188E7A480B871C554F3F805D3E1184673960EED5_356;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-AECEE3733C380177F0A39ACF3AF99BFE360C156F
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2DAECEE3733C380177F0A39ACF3AF99BFE360C156F_357;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-29AB17251F5A730B539AB351FFCB45B9F2FA8027
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D29AB17251F5A730B539AB351FFCB45B9F2FA8027_358;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-6AA66657BB3292572C8F56AB3D015A7990C43606
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D6AA66657BB3292572C8F56AB3D015A7990C43606_359;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-01A7BB0BE820D25E52A42C3D28DE27822EABCD4C
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D01A7BB0BE820D25E52A42C3D28DE27822EABCD4C_360;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-56F75F925774608B6BF88F69D6124CB44DDF42E1
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D56F75F925774608B6BF88F69D6124CB44DDF42E1_361;
	// <PrivateImplementationDetails>/$ArrayType=24 <PrivateImplementationDetails>::$field-28F991026781E1BC119F02498D75FB3A84F4ED37
	U24ArrayTypeU3D24_t8A2E24390F98625A48DA94880779D03F70FFCB1E ___U24fieldU2D28F991026781E1BC119F02498D75FB3A84F4ED37_362;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-E32CCC113D4CCCF7DD1FB13D5F02A7BE8D1C58B2
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2DE32CCC113D4CCCF7DD1FB13D5F02A7BE8D1C58B2_363;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-C04B3C75D3B52DBFE727A123E3E6A157786BBD6F
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2DC04B3C75D3B52DBFE727A123E3E6A157786BBD6F_364;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-00E14C77230AEF0974CFF3930481157AABDA07B4
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D00E14C77230AEF0974CFF3930481157AABDA07B4_365;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-48F53BDF84D98A3F4EF0C09A8F9E77C8EA67216D
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D48F53BDF84D98A3F4EF0C09A8F9E77C8EA67216D_366;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-C0935C173C7A144FE24DA09584F4892153D01F3C
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2DC0935C173C7A144FE24DA09584F4892153D01F3C_367;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-11D4D9FC526D047E01891BEE9949EA42408A800E
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D11D4D9FC526D047E01891BEE9949EA42408A800E_368;
	// <PrivateImplementationDetails>/$ArrayType=136 <PrivateImplementationDetails>::$field-40B82CCF037B966E2A6B5F4BAC86904796965A1C
	U24ArrayTypeU3D136_t4D2F50AEF8D768EC829ADF6800257DC8FC1014D2 ___U24fieldU2D40B82CCF037B966E2A6B5F4BAC86904796965A1C_369;
	// <PrivateImplementationDetails>/$ArrayType=384 <PrivateImplementationDetails>::$field-9848EC8C1177B700CDB98F1A7C07F2A9C9EDE444
	U24ArrayTypeU3D384_t7AFB7ED20AAC15AC0B060FC7E0D9C5D00DF15286 ___U24fieldU2D9848EC8C1177B700CDB98F1A7C07F2A9C9EDE444_370;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-B3FDEC1908C5093BFC5CFB12749EE2650C8612C3
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2DB3FDEC1908C5093BFC5CFB12749EE2650C8612C3_371;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-51109782EA6E98E8E277657055A598684D21520E
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D51109782EA6E98E8E277657055A598684D21520E_372;
	// <PrivateImplementationDetails>/$ArrayType=20 <PrivateImplementationDetails>::$field-4065D9695EFBED47DDA95610295BA85121D5A17B
	U24ArrayTypeU3D20_t7EC40DBF8445096112C711AE7576AA3CDE2DD5B3 ___U24fieldU2D4065D9695EFBED47DDA95610295BA85121D5A17B_373;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-69D489A8DADAF0948858B02F2CC7258B1530D843
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D69D489A8DADAF0948858B02F2CC7258B1530D843_374;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-11C3F78703162740B961B75ED808973DD68F7FA8
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D11C3F78703162740B961B75ED808973DD68F7FA8_375;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-501D7C551BDFD3885F36478424EEE5B72766C842
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D501D7C551BDFD3885F36478424EEE5B72766C842_376;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-62AB9401F4CB2B0A7FF72D3F3F56AA2F14E34FE0
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D62AB9401F4CB2B0A7FF72D3F3F56AA2F14E34FE0_377;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-E1C849B129FBB4352239208AEFE34F3631A27813
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2DE1C849B129FBB4352239208AEFE34F3631A27813_378;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-99073F844984F28C1A9FC1E1490E5631272E26A0
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D99073F844984F28C1A9FC1E1490E5631272E26A0_379;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-D1A2B61FD08BB2242E12F4CAF6B512029C0DC177
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2DD1A2B61FD08BB2242E12F4CAF6B512029C0DC177_380;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-D10229C07961891A434737F06293F1E0CC0FA33C
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2DD10229C07961891A434737F06293F1E0CC0FA33C_381;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-28D1E3B5188FE552D37912314E419E7F30ABD844
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D28D1E3B5188FE552D37912314E419E7F30ABD844_382;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-63B762373DE81B4580E1909D7168A21A989A182A
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D63B762373DE81B4580E1909D7168A21A989A182A_383;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-3F6E4F79F4A57C7F0F4467AA7116C5C46FDFB54E
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D3F6E4F79F4A57C7F0F4467AA7116C5C46FDFB54E_384;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-186E7643E22CF0E2479E92C738FEBEF56B275E95
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D186E7643E22CF0E2479E92C738FEBEF56B275E95_385;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-F240F486E15B43E152AE7F2B692A7FA361FA7776
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2DF240F486E15B43E152AE7F2B692A7FA361FA7776_386;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-993DC5FF70241D5149EB5EAF1CDD957CA0B23454
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D993DC5FF70241D5149EB5EAF1CDD957CA0B23454_387;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-B166D50D0891455E483E2C6E1DB11C3DC03CAFFA
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2DB166D50D0891455E483E2C6E1DB11C3DC03CAFFA_388;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-9C89FB9160DB0A983D5BE5D510BF9E801F0136A6
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D9C89FB9160DB0A983D5BE5D510BF9E801F0136A6_389;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-9AA52F510245480023EB2EF8CF779F6008E93D7A
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D9AA52F510245480023EB2EF8CF779F6008E93D7A_390;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-776EDFD0860A21D5119CA197C89BD2AC7D6F9283
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D776EDFD0860A21D5119CA197C89BD2AC7D6F9283_391;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-DBF9A772127E1119D6E557AF812B6078438CE970
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2DDBF9A772127E1119D6E557AF812B6078438CE970_392;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-910681E5316200ECA5484DF31EEAE1CF5E2F3439
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D910681E5316200ECA5484DF31EEAE1CF5E2F3439_393;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-EBB69348CF182DB7CB8021B09F8BBC2E8E87887C
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2DEBB69348CF182DB7CB8021B09F8BBC2E8E87887C_394;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-53D98E6046BB88C14DD740E4F77B16402271243B
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D53D98E6046BB88C14DD740E4F77B16402271243B_395;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-9F6BDC14CCFDFFBF8F1FE3539741F79424F33E16
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D9F6BDC14CCFDFFBF8F1FE3539741F79424F33E16_396;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-E5395170F0D79C58C3AF15E7AA917ACA2307CE5F
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2DE5395170F0D79C58C3AF15E7AA917ACA2307CE5F_397;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-01898B76F7C45E723996C7E8EDF45429F10AB352
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D01898B76F7C45E723996C7E8EDF45429F10AB352_398;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-7ECDF8C5F474CFF2B0970E93C397B504DD793D2C
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D7ECDF8C5F474CFF2B0970E93C397B504DD793D2C_399;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-E9D2FA0CF959FCDF5A50AE1515251477F11EE719
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2DE9D2FA0CF959FCDF5A50AE1515251477F11EE719_400;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-185FAB3B3D8AC0F1CBECFFCD7DEA45EE4AC9E357
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D185FAB3B3D8AC0F1CBECFFCD7DEA45EE4AC9E357_401;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-2E8B473A712423E983C2B2EDA43927EB0A14F5B4
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D2E8B473A712423E983C2B2EDA43927EB0A14F5B4_402;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-4CC0A0F757356B175679AE3FDB722375172ABA96
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D4CC0A0F757356B175679AE3FDB722375172ABA96_403;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-526BB16C9A1C821B19858E18142A1F7073BC648D
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D526BB16C9A1C821B19858E18142A1F7073BC648D_404;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-95C66836A6DB5A262B674463792A9A67241AEC25
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D95C66836A6DB5A262B674463792A9A67241AEC25_405;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-70CFE27207DDB1C62DD3A9DA22F21F3B1831D7D5
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2D70CFE27207DDB1C62DD3A9DA22F21F3B1831D7D5_406;
	// <PrivateImplementationDetails>/$ArrayType=28 <PrivateImplementationDetails>::$field-DD2B45529EC6CEEBB86596D35461F63244FB3BC1
	U24ArrayTypeU3D28_t92B66B4DE24DB73922E357789B79C2B58070223E ___U24fieldU2DDD2B45529EC6CEEBB86596D35461F63244FB3BC1_407;
};

// <PrivateImplementationDetails>

// ZXing.Color32LuminanceSource

// ZXing.Color32LuminanceSource

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// ZXing.RGBLuminanceSource

// ZXing.RGBLuminanceSource

// ZXing.Rendering.SvgRenderer

// ZXing.Rendering.SvgRenderer

// System.MulticastDelegate

// System.MulticastDelegate

// ZXing.RGB565LuminanceSource

// ZXing.RGB565LuminanceSource

// ZXing.ReaderException
struct ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C_StaticFields
{
	// ZXing.ReaderException ZXing.ReaderException::instance
	ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C* ___instance_18;
};

// ZXing.ReaderException

// System.SystemException

// System.SystemException

// ZXing.WriterException

// ZXing.WriterException

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// System.InvalidOperationException

// System.InvalidOperationException

// ZXing.ResultPointCallback

// ZXing.ResultPointCallback
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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// ZXing.ResultPoint[]
struct ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0  : public RuntimeArray
{
	ALIGN_FIELD (8) ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* m_Items[1];

	inline ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* value)
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
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
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
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Nullable`1<System.Int32>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m9698075D0C5F788A3B6AEBF1ABDFACCAB5854E90_gshared_inline (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m415A21240AEF58C2E0A2FBA97E2BB75637781DB5_gshared_inline (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeWriter::encode(System.String,ZXing.BarcodeFormat,System.Int32,System.Int32,System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* QRCodeWriter_encode_m3D54B2BA61C9F791159C9C768461291010ACB060 (QRCodeWriter_t5C6A9338AAB1D37DA9BC1575A6C7BA164CC3B7F4* __this, String_t* ___0_contents, int32_t ___1_format, int32_t ___2_width, int32_t ___3_height, RuntimeObject* ___4_hints, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A (RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32>::.ctor(T)
inline void Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703 (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_gshared)(__this, ___0_value, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
// ZXing.QrCode.Internal.QRCode ZXing.QrCode.Internal.Encoder::encode(System.String,ZXing.QrCode.Internal.ErrorCorrectionLevel,System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR QRCode_t54FE9443E07A2B3A9C97404E4F8F8A01E0AB311E* Encoder_encode_mE1F416EEA08EC717D82652C213E37C76C9EB1017 (String_t* ___0_content, ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6* ___1_ecLevel, RuntimeObject* ___2_hints, const RuntimeMethod* method) ;
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeWriter::renderResult(ZXing.QrCode.Internal.QRCode,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* QRCodeWriter_renderResult_m8CFA2D0A27B4B5D187E9383D947973A720C52561 (QRCode_t54FE9443E07A2B3A9C97404E4F8F8A01E0AB311E* ___0_code, int32_t ___1_width, int32_t ___2_height, int32_t ___3_quietZone, const RuntimeMethod* method) ;
// ZXing.QrCode.Internal.ByteMatrix ZXing.QrCode.Internal.QRCode::get_Matrix()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteMatrix_t8F32ACBDCDF86856A438EC5580977D8CA452548D* QRCode_get_Matrix_mC9C3EC7F608B8C47FFDE0B14E3C3424B52F9A22F_inline (QRCode_t54FE9443E07A2B3A9C97404E4F8F8A01E0AB311E* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Int32 ZXing.QrCode.Internal.ByteMatrix::get_Width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteMatrix_get_Width_mB07D527D6BA9290ED3CC7EC026EC5E5CC17EF430_inline (ByteMatrix_t8F32ACBDCDF86856A438EC5580977D8CA452548D* __this, const RuntimeMethod* method) ;
// System.Int32 ZXing.QrCode.Internal.ByteMatrix::get_Height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteMatrix_get_Height_m35C9F09824FBFCB301BC3539F5D09C946D48772E_inline (ByteMatrix_t8F32ACBDCDF86856A438EC5580977D8CA452548D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Void ZXing.Common.BitMatrix::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitMatrix__ctor_m5597C34F244CC8F9D5B0B063E94EC83C3F63CE17 (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Int32 ZXing.QrCode.Internal.ByteMatrix::get_Item(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ByteMatrix_get_Item_m8D90C6C8B0AC98BC6A1F549DB1F585A3AB5CBD2A (ByteMatrix_t8F32ACBDCDF86856A438EC5580977D8CA452548D* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.Void ZXing.Common.BitMatrix::setRegion(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitMatrix_setRegion_m7A363710FD3B752DE2CAC83BEC3CE64B441849F1 (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* __this, int32_t ___0_left, int32_t ___1_top, int32_t ___2_width, int32_t ___3_height, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void ZXing.ReaderException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderException__ctor_m975F3F3D493C17E08EBA918CDC9E8411D15730A0 (ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// UnityEngine.Color32 UnityEngine.Color32::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
// System.Void ZXing.Rendering.SvgRenderer::set_Foreground(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SvgRenderer_set_Foreground_m19624B5DA56218BEA3BC4B79E757884841A1B357_inline (SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) ;
// System.Void ZXing.Rendering.SvgRenderer::set_Background(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SvgRenderer_set_Background_m1180E0E278C061CC8AF8627D67316C3A4E67E8A0_inline (SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) ;
// ZXing.Rendering.SvgRenderer/SvgImage ZXing.Rendering.SvgRenderer::Render(ZXing.Common.BitMatrix,ZXing.BarcodeFormat,System.String,ZXing.Common.EncodingOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* SvgRenderer_Render_mF99156DA5385CE55AEBC2A2637E7EBDFC44BEAFE (SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60* __this, BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___0_matrix, int32_t ___1_format, String_t* ___2_content, EncodingOptions_t84F92A38829ABB6416A1FCE75DEB61FECF8AFA2D* ___3_options, const RuntimeMethod* method) ;
// System.Void ZXing.Rendering.SvgRenderer/SvgImage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage__ctor_mC72A21E1775843E51255F91C541DABA7C8A2D612 (SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* __this, const RuntimeMethod* method) ;
// System.Void ZXing.Rendering.SvgRenderer::Create(ZXing.Rendering.SvgRenderer/SvgImage,ZXing.Common.BitMatrix,ZXing.BarcodeFormat,System.String,ZXing.Common.EncodingOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer_Create_m6DD7517A5DD633E3FD4B5910267F0BD8BDF9B1B6 (SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60* __this, SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* ___0_image, BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___1_matrix, int32_t ___2_format, String_t* ___3_content, EncodingOptions_t84F92A38829ABB6416A1FCE75DEB61FECF8AFA2D* ___4_options, const RuntimeMethod* method) ;
// System.Int32 ZXing.Common.BitMatrix::get_Width()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitMatrix_get_Width_m22AD26EA7ECA9A3FB530324C455CFCB8BB3BBE54_inline (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* __this, const RuntimeMethod* method) ;
// System.Int32 ZXing.Common.BitMatrix::get_Height()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitMatrix_get_Height_m5921CB5056D46A8C528B01A06CD202F3097BB792_inline (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* __this, const RuntimeMethod* method) ;
// System.Void ZXing.Rendering.SvgRenderer/SvgImage::AddHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_AddHeader_mE7AC0CF17E9CD27186598DE9ED91720B242F046A (SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* __this, const RuntimeMethod* method) ;
// UnityEngine.Color32 ZXing.Rendering.SvgRenderer::get_Background()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B SvgRenderer_get_Background_mA786BA9EB5BC3DE4E886AFFBEAD50324CF98E983_inline (SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) ;
// UnityEngine.Color32 ZXing.Rendering.SvgRenderer::get_Foreground()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B SvgRenderer_get_Foreground_mE72A8266FE1FEDD4E01EE2C7B8EE1E8A731C9C12_inline (SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60* __this, const RuntimeMethod* method) ;
// System.Void ZXing.Rendering.SvgRenderer/SvgImage::AddTag(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_AddTag_m3A1D969829D8CC54315BC89E8C7A0A9BDE66909A (SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* __this, int32_t ___0_displaysizeX, int32_t ___1_displaysizeY, int32_t ___2_viewboxSizeX, int32_t ___3_viewboxSizeY, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___4_background, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___5_fill, const RuntimeMethod* method) ;
// System.Void ZXing.Rendering.SvgRenderer::AppendDarkCell(ZXing.Rendering.SvgRenderer/SvgImage,ZXing.Common.BitMatrix,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer_AppendDarkCell_m6AECF57412445ED689E9A5D34A95FDCCC915EA45 (SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* ___0_image, BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___1_matrix, int32_t ___2_offsetX, int32_t ___3_offSetY, const RuntimeMethod* method) ;
// System.Void ZXing.Rendering.SvgRenderer/SvgImage::AddEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_AddEnd_mB65C5ADF848A9EE9E38531A921C9A1EFE6D78E02 (SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* __this, const RuntimeMethod* method) ;
// System.Boolean ZXing.Common.BitMatrix::get_Item(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitMatrix_get_Item_m1C5EA5DD84B63FD3347B5EB676B83A6557766F8B (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* __this, int32_t ___0_x, int32_t ___1_y, const RuntimeMethod* method) ;
// System.Void ZXing.Common.BitMatrix::set_Item(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611 (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* __this, int32_t ___0_x, int32_t ___1_y, bool ___2_value, const RuntimeMethod* method) ;
// System.Void ZXing.Rendering.SvgRenderer::FindMaximumRectangle(ZXing.Common.BitMatrix,ZXing.Common.BitMatrix,System.Int32,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer_FindMaximumRectangle_m0EC27C831F091D14447E17A64ABC98A237AF29EA (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___0_matrix, BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___1_processed, int32_t ___2_startPosX, int32_t ___3_startPosY, int32_t ___4_endPosY, int32_t* ___5_endPosX, const RuntimeMethod* method) ;
// System.Void ZXing.Rendering.SvgRenderer/SvgImage::AddRec(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_AddRec_mAEEECA93E4F7D4C8A7F1A304BA71C701E9FBEEE0 (SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* __this, int32_t ___0_posX, int32_t ___1_posY, int32_t ___2_width, int32_t ___3_height, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60 (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String ZXing.Rendering.SvgRenderer/SvgImage::GetColorRgb(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgImage_GetColorRgb_m91E889E9A63EBA2F62F4459A61C36BC565964FCE (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_color, const RuntimeMethod* method) ;
// System.Double ZXing.Rendering.SvgRenderer/SvgImage::ConvertAlpha(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SvgImage_ConvertAlpha_mB540D91961368C532E3DFD00D7D926A4E7E57CCE (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_alpha, const RuntimeMethod* method) ;
// System.String ZXing.Rendering.SvgRenderer/SvgImage::GetBackgroundStyle(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgImage_GetBackgroundStyle_m8F7288EF8A8E0DAC2825B1FBD551F496736A7083 (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_color, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6 (const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendFormat_m0A69DC59537ACE5D88B174EE1098453E1276E53B (StringBuilder_t* __this, RuntimeObject* ___0_provider, String_t* ___1_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___2_args, const RuntimeMethod* method) ;
// System.Double System.Math::Round(System.Double,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline (double ___0_value, int32_t ___1_digits, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void ZXing.Result::.ctor(System.String,System.Byte[],ZXing.ResultPoint[],ZXing.BarcodeFormat,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_m9E9EE450F0974BF9E19FBFBA54C0F55BA0FEFB84 (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, String_t* ___0_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_rawBytes, ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* ___2_resultPoints, int32_t ___3_format, int64_t ___4_timestamp, const RuntimeMethod* method) ;
// System.Void ZXing.Result::set_Text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Result_set_Text_m0D9F537DDA607D94327CFBEF56ADE0EE0B975F88_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void ZXing.Result::set_RawBytes(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Result_set_RawBytes_m53C58BCBE3661C41D30B738AD17F0E7BAD3A1F0E_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) ;
// System.Void ZXing.Result::set_ResultPoints(ZXing.ResultPoint[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Result_set_ResultPoints_mF62AA333AA342D1959D5DDDDE9D8D88BB114240D_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* ___0_value, const RuntimeMethod* method) ;
// System.Void ZXing.Result::set_BarcodeFormat(ZXing.BarcodeFormat)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Result_set_BarcodeFormat_m546DC86BEF0CB06002D6CA244700B01F3B227E76_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void ZXing.Result::set_ResultMetadata(System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Result_set_ResultMetadata_mF444AF5A54D471D27875F2142156B363BDA86022_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void ZXing.Result::set_Timestamp(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Result_set_Timestamp_mBA61D16B2FF63701E76DDE2EFB75EF48642684BF_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, int64_t ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::get_ResultMetadata()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Result_get_ResultMetadata_m76F9383FC2A3FF66F29D4EE0F4A9FAECD6AC3F58_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<ZXing.ResultMetadataType,System.Object>::.ctor()
inline void Dictionary_2__ctor_m70BA60E4E492D273A28BA223607EED75F692CFD2 (Dictionary_2_tBB6F88EA7BFECA82550866E41E4C3523478ACB9A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tBB6F88EA7BFECA82550866E41E4C3523478ACB9A*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>::get_Key()
inline int32_t KeyValuePair_2_get_Key_mAC0C4F49939ABB2F0760CD42B69D6900A4BDB565_inline (KeyValuePair_2_t115CEA7E80924A32801A3ECC2BC1DF844C2D42DD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t115CEA7E80924A32801A3ECC2BC1DF844C2D42DD*, const RuntimeMethod*))KeyValuePair_2_get_Key_m9698075D0C5F788A3B6AEBF1ABDFACCAB5854E90_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m469FBD8407EDF5DF5C286131856C0C5550914E77_inline (KeyValuePair_2_t115CEA7E80924A32801A3ECC2BC1DF844C2D42DD* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_t115CEA7E80924A32801A3ECC2BC1DF844C2D42DD*, const RuntimeMethod*))KeyValuePair_2_get_Value_m415A21240AEF58C2E0A2FBA97E2BB75637781DB5_gshared_inline)(__this, method);
}
// ZXing.ResultPoint[] ZXing.Result::get_ResultPoints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* Result_get_ResultPoints_m98C7CADDAC629C1618DAE400297F3B7ABE7F40F1_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.String ZXing.Result::get_Text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) ;
// System.Byte[] ZXing.Result::get_RawBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Result_get_RawBytes_m696914EEE6115066285985EE3A03A788ACBE02CD_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9 (RuntimeObject* ___0_arg0, RuntimeObject* ___1_arg1, RuntimeObject* ___2_arg2, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m86ADBB3533A4FFA79B7303FBEBC9EBD1BCA6A549 (float ___0_value, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_CurrentUICulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentUICulture_m1620C5666BB7E4BD8A58FB12FB86352FC5311455 (const RuntimeMethod* method) ;
// System.Single ZXing.ResultPoint::distance(ZXing.ResultPoint,ZXing.ResultPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ResultPoint_distance_mD79EA410CC82252F03B53C77F0A4A70A9709A91B (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___0_pattern1, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___1_pattern2, const RuntimeMethod* method) ;
// System.Single ZXing.ResultPoint::crossProductZ(ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ResultPoint_crossProductZ_m25B07907D44324A12779C1CCDE914DD9CCA19B98 (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___0_pointA, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___1_pointB, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___2_pointC, const RuntimeMethod* method) ;
// System.Single ZXing.Common.Detector.MathUtils::distance(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MathUtils_distance_m4EE9BC601D8414FD168751C587ABCC119036EB35 (float ___0_aX, float ___1_aY, float ___2_bX, float ___3_bY, const RuntimeMethod* method) ;
// System.Void ZXing.RGBLuminanceSource::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource__ctor_m685F1E845C1900E3CA492EFC64E91757DA396602 (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Void ZXing.RGBLuminanceSource::.ctor(System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource__ctor_m0D1C41446874B8323AC21E911E7FABB91603C97F (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, int32_t ___1_width, int32_t ___2_height, int32_t ___3_bitmapFormat, const RuntimeMethod* method) ;
// System.Void ZXing.RGB565LuminanceSource::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGB565LuminanceSource__ctor_m40E844F5E0A4AA2F3FE8EBDD54B024ECFC98131A (RGB565LuminanceSource_t5AB2F657F8D964F10FA73150CBAB153A07DAEE44* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Void ZXing.BaseLuminanceSource::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseLuminanceSource__ctor_m4A76735608455D9F7E95FDBD2FDE827E5EED7E73 (BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// System.Void ZXing.RGBLuminanceSource::CalculateLuminance(System.Byte[],ZXing.RGBLuminanceSource/BitmapFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminance_m53B06ACB20E1411CF3A92C53191F259A949A136E (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, int32_t ___1_bitmapFormat, const RuntimeMethod* method) ;
// ZXing.RGBLuminanceSource/BitmapFormat ZXing.RGBLuminanceSource::DetermineBitmapFormat(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RGBLuminanceSource_DetermineBitmapFormat_m533F6D94D891BB58FE633B0BC6F0460D417F69F2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB24(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB24_mFAC68EC49E38555C53EEA07022920A3D02392EB1 (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, const RuntimeMethod* method) ;
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGR24(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGR24_m1C8918583FB2303E756F778D8D27FEC759419971 (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, const RuntimeMethod* method) ;
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB32_m487AC4231B3BC5B768A0767561726E1BF253468E (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, const RuntimeMethod* method) ;
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGR32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGR32_m66705AC7D371EF4BC707D033188CF7D47DC60375 (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, const RuntimeMethod* method) ;
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGBA32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGBA32_mC3F7CE8FAD3670F7EEE900ED95FA2464F10A47F4 (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, const RuntimeMethod* method) ;
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceARGB32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceARGB32_mD6DE468ED18E9B669F1F1B5DBF0B4BB0602E2E70 (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, const RuntimeMethod* method) ;
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGRA32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGRA32_mE029AA79C97FD314538052826C96C73DB349D4A2 (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, const RuntimeMethod* method) ;
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB565(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB565_m84B85BC5FA303170D29C76761D97D49BE1662387 (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgb565RawData, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void System.Array::Reverse(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_val, const RuntimeMethod* method) ;
// System.Void ZXing.Color32LuminanceSource::SetPixels(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32LuminanceSource_SetPixels_m6738AB1D4BBD9E72BB0D10DD027DB282E8435BC3 (Color32LuminanceSource_tF0F7DA904D1E949F51C065F613D0A398B9DF69FC* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_color32s, const RuntimeMethod* method) ;
// System.Void ZXing.Color32LuminanceSource::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32LuminanceSource__ctor_m7CB2ECA01B47DC80852B28D7F7C30BEE9DBA8CF7 (Color32LuminanceSource_tF0F7DA904D1E949F51C065F613D0A398B9DF69FC* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) ;
// UnityEngine.Color32[] ZXing.Color32Renderer::Render(ZXing.Common.BitMatrix,ZXing.BarcodeFormat,System.String,ZXing.Common.EncodingOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Color32Renderer_Render_m89E47C6691EDC74387D40562DD8A0043CAB5CE67 (Color32Renderer_t14E818551AA35E8EABA383D7E36281E9A5CCE8A0* __this, BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___0_matrix, int32_t ___1_format, String_t* ___2_content, EncodingOptions_t84F92A38829ABB6416A1FCE75DEB61FECF8AFA2D* ___3_options, const RuntimeMethod* method) ;
// ZXing.Common.BitArray ZXing.Common.BitMatrix::getRow(System.Int32,ZXing.Common.BitArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* BitMatrix_getRow_m4D4F0FAEDC2FF3561EE6511FFF1472C225C17185 (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* __this, int32_t ___0_y, BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* ___1_row, const RuntimeMethod* method) ;
// System.Int32[] ZXing.Common.BitArray::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* BitArray_get_Array_m514E69EBF1161AF51796B60EB4AB1C9C949E0C9A_inline (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Double System.Math::Round(System.Double,System.Int32,System.MidpointRounding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Round_m8DB2F61CB73B9E71E54149290ABD5DC8A68890D1 (double ___0_value, int32_t ___1_digits, int32_t ___2_mode, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.QrCode.QRCodeWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QRCodeWriter__ctor_mE4E98F826C0E373A1C58C63E2BC20D0FF9C019E4 (QRCodeWriter_t5C6A9338AAB1D37DA9BC1575A6C7BA164CC3B7F4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeWriter::encode(System.String,ZXing.BarcodeFormat,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* QRCodeWriter_encode_mF92530986BA14B361DDB6549A27EDD2B8D44A3DA (QRCodeWriter_t5C6A9338AAB1D37DA9BC1575A6C7BA164CC3B7F4* __this, String_t* ___0_contents, int32_t ___1_format, int32_t ___2_width, int32_t ___3_height, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_contents;
		int32_t L_1 = ___1_format;
		int32_t L_2 = ___2_width;
		int32_t L_3 = ___3_height;
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_4;
		L_4 = QRCodeWriter_encode_m3D54B2BA61C9F791159C9C768461291010ACB060(__this, L_0, L_1, L_2, L_3, (RuntimeObject*)NULL, NULL);
		return L_4;
	}
}
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeWriter::encode(System.String,ZXing.BarcodeFormat,System.Int32,System.Int32,System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* QRCodeWriter_encode_m3D54B2BA61C9F791159C9C768461291010ACB060 (QRCodeWriter_t5C6A9338AAB1D37DA9BC1575A6C7BA164CC3B7F4* __this, String_t* ___0_contents, int32_t ___1_format, int32_t ___2_width, int32_t ___3_height, RuntimeObject* ___4_hints, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Encoder_tEC85267BAF0CC423B9924993DB04B8B39253CC31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t8BD3FBFB61AB580CC7009E3B888C03B9F7BAB843_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6* V_0 = NULL;
	int32_t V_1 = 0;
	ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6* V_2 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 V_4;
	memset((&V_4), 0, sizeof(V_4));
	QRCode_t54FE9443E07A2B3A9C97404E4F8F8A01E0AB311E* V_5 = NULL;
	ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6* G_B11_0 = NULL;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 G_B16_0;
	memset((&G_B16_0), 0, sizeof(G_B16_0));
	{
		String_t* L_0 = ___0_contents;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDC256241FC67514DC379445C066477BE1029D779)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QRCodeWriter_encode_m3D54B2BA61C9F791159C9C768461291010ACB060_RuntimeMethod_var)));
	}

IL_0016:
	{
		int32_t L_3 = ___1_format;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)2048))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_4 = ___1_format;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BarcodeFormat_t6AAFC3C9FCD9667A068874AE1559A09723CA3282_il2cpp_TypeInfo_var)), &L_5);
		String_t* L_7;
		L_7 = String_Concat_m81A40DADB89BCDB78DA8D63D6B723B0023A09A1A(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral775BB245185671E2382534761174E22D3BDED057)), L_6, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QRCodeWriter_encode_m3D54B2BA61C9F791159C9C768461291010ACB060_RuntimeMethod_var)));
	}

IL_0037:
	{
		int32_t L_9 = ___2_width;
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_10 = ___3_height;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_007c;
		}
	}

IL_0046:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral012B0FC82CBEF16F0D8138BA721FEB8F99ABEB89)));
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral012B0FC82CBEF16F0D8138BA721FEB8F99ABEB89)));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		int32_t L_14 = ___2_width;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		Il2CppChar L_18 = ((Il2CppChar)((int32_t)120));
		RuntimeObject* L_19 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var)), &L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_19);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_17;
		int32_t L_21 = ___3_height;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_22);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_23);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_23);
		String_t* L_24;
		L_24 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_20, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_25 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_25);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_25, L_24, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_25, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QRCodeWriter_encode_m3D54B2BA61C9F791159C9C768461291010ACB060_RuntimeMethod_var)));
	}

IL_007c:
	{
		il2cpp_codegen_runtime_class_init_inline(ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6_il2cpp_TypeInfo_var);
		ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6* L_26 = ((ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6_StaticFields*)il2cpp_codegen_static_fields_for(ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6_il2cpp_TypeInfo_var))->___L_0;
		V_0 = L_26;
		V_1 = 4;
		RuntimeObject* L_27 = ___4_hints;
		if (!L_27)
		{
			goto IL_00f7;
		}
	}
	{
		RuntimeObject* L_28 = ___4_hints;
		NullCheck(L_28);
		bool L_29;
		L_29 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>::ContainsKey(TKey) */, IDictionary_2_t8BD3FBFB61AB580CC7009E3B888C03B9F7BAB843_il2cpp_TypeInfo_var, L_28, 3);
		if (!L_29)
		{
			goto IL_00aa;
		}
	}
	{
		RuntimeObject* L_30 = ___4_hints;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>::get_Item(TKey) */, IDictionary_2_t8BD3FBFB61AB580CC7009E3B888C03B9F7BAB843_il2cpp_TypeInfo_var, L_30, 3);
		G_B11_0 = ((ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6*)CastclassSealed((RuntimeObject*)L_31, ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6_il2cpp_TypeInfo_var));
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B11_0 = ((ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6*)(NULL));
	}

IL_00ab:
	{
		V_2 = G_B11_0;
		ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6* L_32 = V_2;
		if (!L_32)
		{
			goto IL_00b4;
		}
	}
	{
		ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6* L_33 = V_2;
		V_0 = L_33;
	}

IL_00b4:
	{
		RuntimeObject* L_34 = ___4_hints;
		NullCheck(L_34);
		bool L_35;
		L_35 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>::ContainsKey(TKey) */, IDictionary_2_t8BD3FBFB61AB580CC7009E3B888C03B9F7BAB843_il2cpp_TypeInfo_var, L_34, 5);
		if (!L_35)
		{
			goto IL_00d8;
		}
	}
	{
		RuntimeObject* L_36 = ___4_hints;
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<ZXing.EncodeHintType,System.Object>::get_Item(TKey) */, IDictionary_2_t8BD3FBFB61AB580CC7009E3B888C03B9F7BAB843_il2cpp_TypeInfo_var, L_36, 5);
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703((&L_38), ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_37, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)))), /*hidden argument*/Nullable_1__ctor_m141FA88563AC0B5179132FB929EABD02C47FF703_RuntimeMethod_var);
		G_B16_0 = L_38;
		goto IL_00e2;
	}

IL_00d8:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28));
		Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 L_39 = V_4;
		G_B16_0 = L_39;
	}

IL_00e2:
	{
		V_3 = G_B16_0;
		bool L_40;
		L_40 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&V_3), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (!L_40)
		{
			goto IL_00f7;
		}
	}
	{
		int32_t L_41;
		L_41 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&V_3), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		V_1 = L_41;
	}

IL_00f7:
	{
		String_t* L_42 = ___0_contents;
		ErrorCorrectionLevel_t9A4ACDF2476294D59956719BCC528C0664BC33E6* L_43 = V_0;
		RuntimeObject* L_44 = ___4_hints;
		il2cpp_codegen_runtime_class_init_inline(Encoder_tEC85267BAF0CC423B9924993DB04B8B39253CC31_il2cpp_TypeInfo_var);
		QRCode_t54FE9443E07A2B3A9C97404E4F8F8A01E0AB311E* L_45;
		L_45 = Encoder_encode_mE1F416EEA08EC717D82652C213E37C76C9EB1017(L_42, L_43, L_44, NULL);
		V_5 = L_45;
		QRCode_t54FE9443E07A2B3A9C97404E4F8F8A01E0AB311E* L_46 = V_5;
		int32_t L_47 = ___2_width;
		int32_t L_48 = ___3_height;
		int32_t L_49 = V_1;
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_50;
		L_50 = QRCodeWriter_renderResult_m8CFA2D0A27B4B5D187E9383D947973A720C52561(L_46, L_47, L_48, L_49, NULL);
		return L_50;
	}
}
// ZXing.Common.BitMatrix ZXing.QrCode.QRCodeWriter::renderResult(ZXing.QrCode.Internal.QRCode,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* QRCodeWriter_renderResult_m8CFA2D0A27B4B5D187E9383D947973A720C52561 (QRCode_t54FE9443E07A2B3A9C97404E4F8F8A01E0AB311E* ___0_code, int32_t ___1_width, int32_t ___2_height, int32_t ___3_quietZone, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteMatrix_t8F32ACBDCDF86856A438EC5580977D8CA452548D* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		QRCode_t54FE9443E07A2B3A9C97404E4F8F8A01E0AB311E* L_0 = ___0_code;
		NullCheck(L_0);
		ByteMatrix_t8F32ACBDCDF86856A438EC5580977D8CA452548D* L_1;
		L_1 = QRCode_get_Matrix_mC9C3EC7F608B8C47FFDE0B14E3C3424B52F9A22F_inline(L_0, NULL);
		V_0 = L_1;
		ByteMatrix_t8F32ACBDCDF86856A438EC5580977D8CA452548D* L_2 = V_0;
		if (L_2)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&QRCodeWriter_renderResult_m8CFA2D0A27B4B5D187E9383D947973A720C52561_RuntimeMethod_var)));
	}

IL_0013:
	{
		ByteMatrix_t8F32ACBDCDF86856A438EC5580977D8CA452548D* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = ByteMatrix_get_Width_mB07D527D6BA9290ED3CC7EC026EC5E5CC17EF430_inline(L_4, NULL);
		V_1 = L_5;
		ByteMatrix_t8F32ACBDCDF86856A438EC5580977D8CA452548D* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = ByteMatrix_get_Height_m35C9F09824FBFCB301BC3539F5D09C946D48772E_inline(L_6, NULL);
		V_2 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___3_quietZone;
		V_3 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)(L_9<<1))));
		int32_t L_10 = V_2;
		int32_t L_11 = ___3_quietZone;
		V_4 = ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)(L_11<<1))));
		int32_t L_12 = ___1_width;
		int32_t L_13 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_14;
		L_14 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_12, L_13, NULL);
		V_5 = L_14;
		int32_t L_15 = ___2_height;
		int32_t L_16 = V_4;
		int32_t L_17;
		L_17 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_15, L_16, NULL);
		V_6 = L_17;
		int32_t L_18 = V_5;
		int32_t L_19 = V_3;
		int32_t L_20 = V_6;
		int32_t L_21 = V_4;
		int32_t L_22;
		L_22 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(((int32_t)(L_18/L_19)), ((int32_t)(L_20/L_21)), NULL);
		V_7 = L_22;
		int32_t L_23 = V_5;
		int32_t L_24 = V_1;
		int32_t L_25 = V_7;
		V_8 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_23, ((int32_t)il2cpp_codegen_multiply(L_24, L_25))))/2));
		int32_t L_26 = V_6;
		int32_t L_27 = V_2;
		int32_t L_28 = V_7;
		V_9 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_26, ((int32_t)il2cpp_codegen_multiply(L_27, L_28))))/2));
		int32_t L_29 = V_5;
		int32_t L_30 = V_6;
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_31 = (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91*)il2cpp_codegen_object_new(BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		BitMatrix__ctor_m5597C34F244CC8F9D5B0B063E94EC83C3F63CE17(L_31, L_29, L_30, NULL);
		V_10 = L_31;
		V_11 = 0;
		int32_t L_32 = V_9;
		V_12 = L_32;
		goto IL_00cb;
	}

IL_007e:
	{
		V_13 = 0;
		int32_t L_33 = V_8;
		V_14 = L_33;
		goto IL_00b6;
	}

IL_008a:
	{
		ByteMatrix_t8F32ACBDCDF86856A438EC5580977D8CA452548D* L_34 = V_0;
		int32_t L_35 = V_13;
		int32_t L_36 = V_11;
		NullCheck(L_34);
		int32_t L_37;
		L_37 = ByteMatrix_get_Item_m8D90C6C8B0AC98BC6A1F549DB1F585A3AB5CBD2A(L_34, L_35, L_36, NULL);
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_00a9;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_38 = V_10;
		int32_t L_39 = V_14;
		int32_t L_40 = V_12;
		int32_t L_41 = V_7;
		int32_t L_42 = V_7;
		NullCheck(L_38);
		BitMatrix_setRegion_m7A363710FD3B752DE2CAC83BEC3CE64B441849F1(L_38, L_39, L_40, L_41, L_42, NULL);
	}

IL_00a9:
	{
		int32_t L_43 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_43, 1));
		int32_t L_44 = V_14;
		int32_t L_45 = V_7;
		V_14 = ((int32_t)il2cpp_codegen_add(L_44, L_45));
	}

IL_00b6:
	{
		int32_t L_46 = V_13;
		int32_t L_47 = V_1;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_008a;
		}
	}
	{
		int32_t L_48 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_12;
		int32_t L_50 = V_7;
		V_12 = ((int32_t)il2cpp_codegen_add(L_49, L_50));
	}

IL_00cb:
	{
		int32_t L_51 = V_11;
		int32_t L_52 = V_2;
		if ((((int32_t)L_51) < ((int32_t)L_52)))
		{
			goto IL_007e;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_53 = V_10;
		return L_53;
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
// System.Void ZXing.ReaderException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderException__ctor_m975F3F3D493C17E08EBA918CDC9E8411D15730A0 (ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		return;
	}
}
// ZXing.ReaderException ZXing.ReaderException::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C* ReaderException_get_Instance_m451CFF3E9428412674F70765156A72D0AB96BE24 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C_il2cpp_TypeInfo_var);
		ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C* L_0 = ((ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C_StaticFields*)il2cpp_codegen_static_fields_for(ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C_il2cpp_TypeInfo_var))->___instance_18;
		return L_0;
	}
}
// System.Void ZXing.ReaderException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReaderException__cctor_m11084DB94ADC5588020ACC4D5D0F4802DAF0E952 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C* L_0 = (ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C*)il2cpp_codegen_object_new(ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ReaderException__ctor_m975F3F3D493C17E08EBA918CDC9E8411D15730A0(L_0, NULL);
		((ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C_StaticFields*)il2cpp_codegen_static_fields_for(ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C_il2cpp_TypeInfo_var))->___instance_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C_StaticFields*)il2cpp_codegen_static_fields_for(ReaderException_tBBE4FDB2C8588E917040D7B38DFDEA48C639600C_il2cpp_TypeInfo_var))->___instance_18), (void*)L_0);
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
// System.Void ZXing.Rendering.SvgRenderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer__ctor_mD07C72CDEBD061411F80482BD53206F75E0EA377 (SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (0.0f), (0.0f), (255.0f), /*hidden argument*/NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1;
		L_1 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_0, NULL);
		SvgRenderer_set_Foreground_m19624B5DA56218BEA3BC4B79E757884841A1B357_inline(__this, L_1, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_2), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		SvgRenderer_set_Background_m1180E0E278C061CC8AF8627D67316C3A4E67E8A0_inline(__this, L_2, NULL);
		return;
	}
}
// UnityEngine.Color32 ZXing.Rendering.SvgRenderer::get_Foreground()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B SvgRenderer_get_Foreground_mE72A8266FE1FEDD4E01EE2C7B8EE1E8A731C9C12 (SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60* __this, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = __this->___U3CForegroundU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ZXing.Rendering.SvgRenderer::set_Foreground(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer_set_Foreground_m19624B5DA56218BEA3BC4B79E757884841A1B357 (SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_value;
		__this->___U3CForegroundU3Ek__BackingField_0 = L_0;
		return;
	}
}
// UnityEngine.Color32 ZXing.Rendering.SvgRenderer::get_Background()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B SvgRenderer_get_Background_mA786BA9EB5BC3DE4E886AFFBEAD50324CF98E983 (SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60* __this, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = __this->___U3CBackgroundU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void ZXing.Rendering.SvgRenderer::set_Background(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer_set_Background_m1180E0E278C061CC8AF8627D67316C3A4E67E8A0 (SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_value;
		__this->___U3CBackgroundU3Ek__BackingField_1 = L_0;
		return;
	}
}
// ZXing.Rendering.SvgRenderer/SvgImage ZXing.Rendering.SvgRenderer::Render(ZXing.Common.BitMatrix,ZXing.BarcodeFormat,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* SvgRenderer_Render_m13244F4462EA692CF28A844CBD639270C41CDD63 (SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60* __this, BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___0_matrix, int32_t ___1_format, String_t* ___2_content, const RuntimeMethod* method) 
{
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_0 = ___0_matrix;
		int32_t L_1 = ___1_format;
		String_t* L_2 = ___2_content;
		SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* L_3;
		L_3 = SvgRenderer_Render_mF99156DA5385CE55AEBC2A2637E7EBDFC44BEAFE(__this, L_0, L_1, L_2, (EncodingOptions_t84F92A38829ABB6416A1FCE75DEB61FECF8AFA2D*)NULL, NULL);
		return L_3;
	}
}
// ZXing.Rendering.SvgRenderer/SvgImage ZXing.Rendering.SvgRenderer::Render(ZXing.Common.BitMatrix,ZXing.BarcodeFormat,System.String,ZXing.Common.EncodingOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* SvgRenderer_Render_mF99156DA5385CE55AEBC2A2637E7EBDFC44BEAFE (SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60* __this, BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___0_matrix, int32_t ___1_format, String_t* ___2_content, EncodingOptions_t84F92A38829ABB6416A1FCE75DEB61FECF8AFA2D* ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* V_0 = NULL;
	{
		SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* L_0 = (SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636*)il2cpp_codegen_object_new(SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SvgImage__ctor_mC72A21E1775843E51255F91C541DABA7C8A2D612(L_0, NULL);
		V_0 = L_0;
		SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* L_1 = V_0;
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_2 = ___0_matrix;
		int32_t L_3 = ___1_format;
		String_t* L_4 = ___2_content;
		EncodingOptions_t84F92A38829ABB6416A1FCE75DEB61FECF8AFA2D* L_5 = ___3_options;
		SvgRenderer_Create_m6DD7517A5DD633E3FD4B5910267F0BD8BDF9B1B6(__this, L_1, L_2, L_3, L_4, L_5, NULL);
		SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* L_6 = V_0;
		return L_6;
	}
}
// System.Void ZXing.Rendering.SvgRenderer::Create(ZXing.Rendering.SvgRenderer/SvgImage,ZXing.Common.BitMatrix,ZXing.BarcodeFormat,System.String,ZXing.Common.EncodingOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer_Create_m6DD7517A5DD633E3FD4B5910267F0BD8BDF9B1B6 (SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60* __this, SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* ___0_image, BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___1_matrix, int32_t ___2_format, String_t* ___3_content, EncodingOptions_t84F92A38829ABB6416A1FCE75DEB61FECF8AFA2D* ___4_options, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_0 = ___1_matrix;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_1 = ___1_matrix;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = BitMatrix_get_Width_m22AD26EA7ECA9A3FB530324C455CFCB8BB3BBE54_inline(L_1, NULL);
		V_0 = L_2;
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_3 = ___1_matrix;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = BitMatrix_get_Height_m5921CB5056D46A8C528B01A06CD202F3097BB792_inline(L_3, NULL);
		V_1 = L_4;
		SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* L_5 = ___0_image;
		NullCheck(L_5);
		SvgImage_AddHeader_mE7AC0CF17E9CD27186598DE9ED91720B242F046A(L_5, NULL);
		SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* L_6 = ___0_image;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9;
		L_9 = SvgRenderer_get_Background_mA786BA9EB5BC3DE4E886AFFBEAD50324CF98E983_inline(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		L_10 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_9, NULL);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_11;
		L_11 = SvgRenderer_get_Foreground_mE72A8266FE1FEDD4E01EE2C7B8EE1E8A731C9C12_inline(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_11, NULL);
		NullCheck(L_6);
		SvgImage_AddTag_m3A1D969829D8CC54315BC89E8C7A0A9BDE66909A(L_6, 0, 0, ((int32_t)il2cpp_codegen_add(((int32_t)10), L_7)), ((int32_t)il2cpp_codegen_add(((int32_t)10), L_8)), L_10, L_12, NULL);
		SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* L_13 = ___0_image;
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_14 = ___1_matrix;
		SvgRenderer_AppendDarkCell_m6AECF57412445ED689E9A5D34A95FDCCC915EA45(L_13, L_14, 5, 5, NULL);
		SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* L_15 = ___0_image;
		NullCheck(L_15);
		SvgImage_AddEnd_mB65C5ADF848A9EE9E38531A921C9A1EFE6D78E02(L_15, NULL);
		return;
	}
}
// System.Void ZXing.Rendering.SvgRenderer::AppendDarkCell(ZXing.Rendering.SvgRenderer/SvgImage,ZXing.Common.BitMatrix,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer_AppendDarkCell_m6AECF57412445ED689E9A5D34A95FDCCC915EA45 (SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* ___0_image, BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___1_matrix, int32_t ___2_offsetX, int32_t ___3_offSetY, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_0 = ___1_matrix;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_1 = ___1_matrix;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = BitMatrix_get_Width_m22AD26EA7ECA9A3FB530324C455CFCB8BB3BBE54_inline(L_1, NULL);
		V_0 = L_2;
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_3 = ___1_matrix;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = BitMatrix_get_Height_m5921CB5056D46A8C528B01A06CD202F3097BB792_inline(L_3, NULL);
		V_1 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_7 = (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91*)il2cpp_codegen_object_new(BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		BitMatrix__ctor_m5597C34F244CC8F9D5B0B063E94EC83C3F63CE17(L_7, L_5, L_6, NULL);
		V_2 = L_7;
		V_3 = (bool)0;
		V_4 = 0;
		V_5 = 0;
		V_6 = 0;
		goto IL_00ec;
	}

IL_002d:
	{
		V_8 = 0;
		goto IL_00af;
	}

IL_0035:
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_8 = V_2;
		int32_t L_9 = V_6;
		int32_t L_10 = V_8;
		NullCheck(L_8);
		bool L_11;
		L_11 = BitMatrix_get_Item_m1C5EA5DD84B63FD3347B5EB676B83A6557766F8B(L_8, L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0049;
		}
	}
	{
		goto IL_00a9;
	}

IL_0049:
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_12 = V_2;
		int32_t L_13 = V_6;
		int32_t L_14 = V_8;
		NullCheck(L_12);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_12, L_13, L_14, (bool)1, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_15 = ___1_matrix;
		int32_t L_16 = V_6;
		int32_t L_17 = V_8;
		NullCheck(L_15);
		bool L_18;
		L_18 = BitMatrix_get_Item_m1C5EA5DD84B63FD3347B5EB676B83A6557766F8B(L_15, L_16, L_17, NULL);
		if (!L_18)
		{
			goto IL_0078;
		}
	}
	{
		bool L_19 = V_3;
		if (L_19)
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_20 = V_6;
		V_4 = L_20;
		int32_t L_21 = V_8;
		V_5 = L_21;
		V_3 = (bool)1;
	}

IL_0073:
	{
		goto IL_00a9;
	}

IL_0078:
	{
		bool L_22 = V_3;
		if (!L_22)
		{
			goto IL_00a9;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_23 = ___1_matrix;
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_24 = V_2;
		int32_t L_25 = V_4;
		int32_t L_26 = V_5;
		int32_t L_27 = V_8;
		SvgRenderer_FindMaximumRectangle_m0EC27C831F091D14447E17A64ABC98A237AF29EA(L_23, L_24, L_25, L_26, L_27, (&V_7), NULL);
		SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* L_28 = ___0_image;
		int32_t L_29 = V_4;
		int32_t L_30 = ___2_offsetX;
		int32_t L_31 = V_5;
		int32_t L_32 = ___3_offSetY;
		int32_t L_33 = V_7;
		int32_t L_34 = V_4;
		int32_t L_35 = V_8;
		int32_t L_36 = V_5;
		NullCheck(L_28);
		SvgImage_AddRec_mAEEECA93E4F7D4C8A7F1A304BA71C701E9FBEEE0(L_28, ((int32_t)il2cpp_codegen_add(L_29, L_30)), ((int32_t)il2cpp_codegen_add(L_31, L_32)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_33, L_34)), 1)), ((int32_t)il2cpp_codegen_subtract(L_35, L_36)), NULL);
		V_3 = (bool)0;
	}

IL_00a9:
	{
		int32_t L_37 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_37, 1));
	}

IL_00af:
	{
		int32_t L_38 = V_8;
		int32_t L_39 = V_1;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0035;
		}
	}
	{
		bool L_40 = V_3;
		if (!L_40)
		{
			goto IL_00e6;
		}
	}
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_41 = ___1_matrix;
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_42 = V_2;
		int32_t L_43 = V_4;
		int32_t L_44 = V_5;
		int32_t L_45 = V_1;
		SvgRenderer_FindMaximumRectangle_m0EC27C831F091D14447E17A64ABC98A237AF29EA(L_41, L_42, L_43, L_44, L_45, (&V_7), NULL);
		SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* L_46 = ___0_image;
		int32_t L_47 = V_4;
		int32_t L_48 = ___2_offsetX;
		int32_t L_49 = V_5;
		int32_t L_50 = ___3_offSetY;
		int32_t L_51 = V_7;
		int32_t L_52 = V_4;
		int32_t L_53 = V_1;
		int32_t L_54 = V_5;
		NullCheck(L_46);
		SvgImage_AddRec_mAEEECA93E4F7D4C8A7F1A304BA71C701E9FBEEE0(L_46, ((int32_t)il2cpp_codegen_add(L_47, L_48)), ((int32_t)il2cpp_codegen_add(L_49, L_50)), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_51, L_52)), 1)), ((int32_t)il2cpp_codegen_subtract(L_53, L_54)), NULL);
		V_3 = (bool)0;
	}

IL_00e6:
	{
		int32_t L_55 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_55, 1));
	}

IL_00ec:
	{
		int32_t L_56 = V_6;
		int32_t L_57 = V_0;
		if ((((int32_t)L_56) < ((int32_t)L_57)))
		{
			goto IL_002d;
		}
	}
	{
		return;
	}
}
// System.Void ZXing.Rendering.SvgRenderer::FindMaximumRectangle(ZXing.Common.BitMatrix,ZXing.Common.BitMatrix,System.Int32,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgRenderer_FindMaximumRectangle_m0EC27C831F091D14447E17A64ABC98A237AF29EA (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___0_matrix, BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___1_processed, int32_t ___2_startPosX, int32_t ___3_startPosY, int32_t ___4_endPosY, int32_t* ___5_endPosX, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t* L_0 = ___5_endPosX;
		int32_t L_1 = ___2_startPosX;
		*((int32_t*)L_0) = (int32_t)((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = ___2_startPosX;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		goto IL_0054;
	}

IL_000f:
	{
		int32_t L_3 = ___3_startPosY;
		V_1 = L_3;
		goto IL_0028;
	}

IL_0016:
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_4 = ___0_matrix;
		int32_t L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_4);
		bool L_7;
		L_7 = BitMatrix_get_Item_m1C5EA5DD84B63FD3347B5EB676B83A6557766F8B(L_4, L_5, L_6, NULL);
		if (L_7)
		{
			goto IL_0024;
		}
	}
	{
		return;
	}

IL_0024:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0028:
	{
		int32_t L_9 = V_1;
		int32_t L_10 = ___4_endPosY;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t* L_11 = ___5_endPosX;
		int32_t L_12 = V_0;
		*((int32_t*)L_11) = (int32_t)L_12;
		int32_t L_13 = ___3_startPosY;
		V_2 = L_13;
		goto IL_0048;
	}

IL_003b:
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_14 = ___1_processed;
		int32_t L_15 = V_0;
		int32_t L_16 = V_2;
		NullCheck(L_14);
		BitMatrix_set_Item_m6834E66EB7C4313ABF8DCD28F9AC11D39977B611(L_14, L_15, L_16, (bool)1, NULL);
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0048:
	{
		int32_t L_18 = V_2;
		int32_t L_19 = ___4_endPosY;
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0054:
	{
		int32_t L_21 = V_0;
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_22 = ___0_matrix;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = BitMatrix_get_Width_m22AD26EA7ECA9A3FB530324C455CFCB8BB3BBE54_inline(L_22, NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_000f;
		}
	}
	{
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
// System.Void ZXing.Rendering.SvgRenderer/SvgImage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage__ctor_mC72A21E1775843E51255F91C541DABA7C8A2D612 (SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->___content_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___content_0), (void*)L_0);
		return;
	}
}
// System.Void ZXing.Rendering.SvgRenderer/SvgImage::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage__ctor_m672BAD54E92E459612909AFD0E2EF73050C5071A (SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* __this, String_t* ___0_content, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_content;
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_mCD797D942316CB356205FD96415B0B7581CDAD60(L_1, L_0, NULL);
		__this->___content_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___content_0), (void*)L_1);
		return;
	}
}
// System.String ZXing.Rendering.SvgRenderer/SvgImage::get_Content()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgImage_get_Content_mB4D775426AE226E03E9A511CCE95B2AA6C1BDE80 (SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* __this, const RuntimeMethod* method) 
{
	{
		StringBuilder_t* L_0 = __this->___content_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
// System.Void ZXing.Rendering.SvgRenderer/SvgImage::set_Content(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_set_Content_m63A474D0A25C97869966DFE65FC9254ACE315FAC (SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		StringBuilder_t* L_0 = __this->___content_0;
		NullCheck(L_0);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_0, 0, NULL);
		String_t* L_1 = ___0_value;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		StringBuilder_t* L_2 = __this->___content_0;
		String_t* L_3 = ___0_value;
		NullCheck(L_2);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, L_3, NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.String ZXing.Rendering.SvgRenderer/SvgImage::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgImage_ToString_mE74FACFD3EF3911AE3AC69F6372C485629A146E2 (SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* __this, const RuntimeMethod* method) 
{
	{
		StringBuilder_t* L_0 = __this->___content_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
// System.Void ZXing.Rendering.SvgRenderer/SvgImage::AddHeader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_AddHeader_mE7AC0CF17E9CD27186598DE9ED91720B242F046A (SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4244A0AD8D8E879A46026C4EE9CB6318F9FA49D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4607F6A1AD253C7780023D486297757B840DE5EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAC00B1DFB240934CD3E7CA4995672FDDB47B0D0);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = __this->___content_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral4244A0AD8D8E879A46026C4EE9CB6318F9FA49D8, NULL);
		StringBuilder_t* L_2 = __this->___content_0;
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, _stringLiteral4607F6A1AD253C7780023D486297757B840DE5EA, NULL);
		StringBuilder_t* L_4 = __this->___content_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteralDAC00B1DFB240934CD3E7CA4995672FDDB47B0D0, NULL);
		return;
	}
}
// System.Void ZXing.Rendering.SvgRenderer/SvgImage::AddEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_AddEnd_mB65C5ADF848A9EE9E38531A921C9A1EFE6D78E02 (SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E80B524ECF4EB6F07C79D12D6E6AE33416E3A14);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = __this->___content_0;
		NullCheck(L_0);
		StringBuilder_t* L_1;
		L_1 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_0, _stringLiteral7E80B524ECF4EB6F07C79D12D6E6AE33416E3A14, NULL);
		return;
	}
}
// System.Void ZXing.Rendering.SvgRenderer/SvgImage::AddTag(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_AddTag_m3A1D969829D8CC54315BC89E8C7A0A9BDE66909A (SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* __this, int32_t ___0_displaysizeX, int32_t ___1_displaysizeY, int32_t ___2_viewboxSizeX, int32_t ___3_viewboxSizeY, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___4_background, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___5_fill, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35ED739EFA8E239D93DD0FA6AA08ED26E7BE342F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral637902A9BC3FB84B33AAAB41D3CBB84119F0977D);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_displaysizeX;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___1_displaysizeY;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0097;
		}
	}

IL_000e:
	{
		StringBuilder_t* L_2 = __this->___content_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		int32_t L_5 = ___2_viewboxSizeX;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		int32_t L_9 = ___3_viewboxSizeY;
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___4_background;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_14;
		L_14 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_13, NULL);
		String_t* L_15;
		L_15 = SvgImage_GetColorRgb_m91E889E9A63EBA2F62F4459A61C36BC565964FCE(L_14, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___4_background;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_18;
		L_18 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_17, NULL);
		double L_19;
		L_19 = SvgImage_ConvertAlpha_mB540D91961368C532E3DFD00D7D926A4E7E57CCE(L_18, NULL);
		double L_20 = L_19;
		RuntimeObject* L_21 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_21);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_21);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___5_fill;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_24;
		L_24 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_23, NULL);
		String_t* L_25;
		L_25 = SvgImage_GetColorRgb_m91E889E9A63EBA2F62F4459A61C36BC565964FCE(L_24, NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_25);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = L_22;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___5_fill;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_28;
		L_28 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_27, NULL);
		double L_29;
		L_29 = SvgImage_ConvertAlpha_mB540D91961368C532E3DFD00D7D926A4E7E57CCE(L_28, NULL);
		double L_30 = L_29;
		RuntimeObject* L_31 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_30);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_31);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_31);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = L_26;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33 = ___4_background;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_34;
		L_34 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_33, NULL);
		String_t* L_35;
		L_35 = SvgImage_GetBackgroundStyle_m8F7288EF8A8E0DAC2825B1FBD551F496736A7083(L_34, NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_35);
		String_t* L_36;
		L_36 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral35ED739EFA8E239D93DD0FA6AA08ED26E7BE342F, L_32, NULL);
		NullCheck(L_2);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_2, L_36, NULL);
		goto IL_012e;
	}

IL_0097:
	{
		StringBuilder_t* L_38 = __this->___content_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = L_39;
		int32_t L_41 = ___2_viewboxSizeX;
		int32_t L_42 = L_41;
		RuntimeObject* L_43 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_43);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_43);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = L_40;
		int32_t L_45 = ___3_viewboxSizeY;
		int32_t L_46 = L_45;
		RuntimeObject* L_47 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_46);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_47);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_47);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = L_44;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_49 = ___4_background;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_50;
		L_50 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_49, NULL);
		String_t* L_51;
		L_51 = SvgImage_GetColorRgb_m91E889E9A63EBA2F62F4459A61C36BC565964FCE(L_50, NULL);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_51);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_51);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_52 = L_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_53 = ___4_background;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_54;
		L_54 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_53, NULL);
		double L_55;
		L_55 = SvgImage_ConvertAlpha_mB540D91961368C532E3DFD00D7D926A4E7E57CCE(L_54, NULL);
		double L_56 = L_55;
		RuntimeObject* L_57 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_56);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_57);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_57);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_58 = L_52;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59 = ___5_fill;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_60;
		L_60 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_59, NULL);
		String_t* L_61;
		L_61 = SvgImage_GetColorRgb_m91E889E9A63EBA2F62F4459A61C36BC565964FCE(L_60, NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_61);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_61);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62 = L_58;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_63 = ___5_fill;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_64;
		L_64 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_63, NULL);
		double L_65;
		L_65 = SvgImage_ConvertAlpha_mB540D91961368C532E3DFD00D7D926A4E7E57CCE(L_64, NULL);
		double L_66 = L_65;
		RuntimeObject* L_67 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_66);
		NullCheck(L_62);
		ArrayElementTypeCheck (L_62, L_67);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_67);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_68 = L_62;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_69 = ___4_background;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_70;
		L_70 = Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline(L_69, NULL);
		String_t* L_71;
		L_71 = SvgImage_GetBackgroundStyle_m8F7288EF8A8E0DAC2825B1FBD551F496736A7083(L_70, NULL);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_71);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_71);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_72 = L_68;
		int32_t L_73 = ___0_displaysizeX;
		int32_t L_74 = L_73;
		RuntimeObject* L_75 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_74);
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, L_75);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_75);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_76 = L_72;
		int32_t L_77 = ___1_displaysizeY;
		int32_t L_78 = L_77;
		RuntimeObject* L_79 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_78);
		NullCheck(L_76);
		ArrayElementTypeCheck (L_76, L_79);
		(L_76)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)L_79);
		String_t* L_80;
		L_80 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral637902A9BC3FB84B33AAAB41D3CBB84119F0977D, L_76, NULL);
		NullCheck(L_38);
		StringBuilder_t* L_81;
		L_81 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_38, L_80, NULL);
	}

IL_012e:
	{
		return;
	}
}
// System.Void ZXing.Rendering.SvgRenderer/SvgImage::AddRec(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SvgImage_AddRec_mAEEECA93E4F7D4C8A7F1A304BA71C701E9FBEEE0 (SvgImage_t5ADAF7CD7EABDE2CF2545CB0561998726133A636* __this, int32_t ___0_posX, int32_t ___1_posY, int32_t ___2_width, int32_t ___3_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB85E44E7200FA3E8E69C96E31FA57E58E51E715C);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t* L_0 = __this->___content_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_1;
		L_1 = CultureInfo_get_InvariantCulture_mD1E96DC845E34B10F78CB744B0CB5D7D63CEB1E6(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		int32_t L_4 = ___0_posX;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		int32_t L_8 = ___1_posY;
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		int32_t L_12 = ___2_width;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_11;
		int32_t L_16 = ___3_height;
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_18);
		NullCheck(L_0);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_AppendFormat_m0A69DC59537ACE5D88B174EE1098453E1276E53B(L_0, L_1, _stringLiteralB85E44E7200FA3E8E69C96E31FA57E58E51E715C, L_15, NULL);
		return;
	}
}
// System.Double ZXing.Rendering.SvgRenderer/SvgImage::ConvertAlpha(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SvgImage_ConvertAlpha_mB540D91961368C532E3DFD00D7D926A4E7E57CCE (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_alpha, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint8_t L_0 = (&___0_alpha)->___a_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline(((double)(((double)L_0)/(255.0))), 2, NULL);
		return L_1;
	}
}
// System.String ZXing.Rendering.SvgRenderer/SvgImage::GetBackgroundStyle(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgImage_GetBackgroundStyle_m8F7288EF8A8E0DAC2825B1FBD551F496736A7083 (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90DE7569ED210157F69728F80E6CAE8F912E19DA);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_color;
		double L_1;
		L_1 = SvgImage_ConvertAlpha_mB540D91961368C532E3DFD00D7D926A4E7E57CCE(L_0, NULL);
		V_0 = L_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		uint8_t L_4 = (&___0_color)->___r_1;
		uint8_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		uint8_t L_8 = (&___0_color)->___g_2;
		uint8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		uint8_t L_12 = (&___0_color)->___b_3;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_14);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_11;
		double L_16 = V_0;
		double L_17 = L_16;
		RuntimeObject* L_18 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_18);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_18);
		String_t* L_19;
		L_19 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteral90DE7569ED210157F69728F80E6CAE8F912E19DA, L_15, NULL);
		return L_19;
	}
}
// System.String ZXing.Rendering.SvgRenderer/SvgImage::GetColorRgb(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgImage_GetColorRgb_m91E889E9A63EBA2F62F4459A61C36BC565964FCE (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		uint8_t L_2 = (&___0_color)->___r_1;
		uint8_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_1;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		uint8_t L_7 = (&___0_color)->___g_2;
		uint8_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
		uint8_t L_12 = (&___0_color)->___b_3;
		uint8_t L_13 = L_12;
		RuntimeObject* L_14 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_14);
		String_t* L_15;
		L_15 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_11, NULL);
		return L_15;
	}
}
// System.String ZXing.Rendering.SvgRenderer/SvgImage::GetColorRgba(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SvgImage_GetColorRgba_m542D2970B3DE1A9892EACB65E9B0C6C68085F511 (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_color, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_color;
		double L_1;
		L_1 = SvgImage_ConvertAlpha_mB540D91961368C532E3DFD00D7D926A4E7E57CCE(L_0, NULL);
		V_0 = L_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		uint8_t L_4 = (&___0_color)->___r_1;
		uint8_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		uint8_t L_9 = (&___0_color)->___g_2;
		uint8_t L_10 = L_9;
		RuntimeObject* L_11 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		uint8_t L_14 = (&___0_color)->___b_3;
		uint8_t L_15 = L_14;
		RuntimeObject* L_16 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_13;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
		double L_19 = V_0;
		double L_20 = L_19;
		RuntimeObject* L_21 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_21);
		String_t* L_22;
		L_22 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_18, NULL);
		return L_22;
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
// System.Void ZXing.Result::.ctor(System.String,System.Byte[],ZXing.ResultPoint[],ZXing.BarcodeFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_m1FE156476FD7E8E25D0829D5D2DAC9432A419E55 (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, String_t* ___0_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_rawBytes, ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* ___2_resultPoints, int32_t ___3_format, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		String_t* L_0 = ___0_text;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_rawBytes;
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_2 = ___2_resultPoints;
		int32_t L_3 = ___3_format;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_0 = L_4;
		int64_t L_5;
		L_5 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_0), NULL);
		Result__ctor_m9E9EE450F0974BF9E19FBFBA54C0F55BA0FEFB84(__this, L_0, L_1, L_2, L_3, L_5, NULL);
		return;
	}
}
// System.Void ZXing.Result::.ctor(System.String,System.Byte[],ZXing.ResultPoint[],ZXing.BarcodeFormat,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result__ctor_m9E9EE450F0974BF9E19FBFBA54C0F55BA0FEFB84 (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, String_t* ___0_text, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_rawBytes, ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* ___2_resultPoints, int32_t ___3_format, int64_t ___4_timestamp, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___0_text;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___1_rawBytes;
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral635C8F5A024FC929CA0A445E00437508C44B0CC3)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Result__ctor_m9E9EE450F0974BF9E19FBFBA54C0F55BA0FEFB84_RuntimeMethod_var)));
	}

IL_001d:
	{
		String_t* L_3 = ___0_text;
		Result_set_Text_m0D9F537DDA607D94327CFBEF56ADE0EE0B975F88_inline(__this, L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___1_rawBytes;
		Result_set_RawBytes_m53C58BCBE3661C41D30B738AD17F0E7BAD3A1F0E_inline(__this, L_4, NULL);
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_5 = ___2_resultPoints;
		Result_set_ResultPoints_mF62AA333AA342D1959D5DDDDE9D8D88BB114240D_inline(__this, L_5, NULL);
		int32_t L_6 = ___3_format;
		Result_set_BarcodeFormat_m546DC86BEF0CB06002D6CA244700B01F3B227E76_inline(__this, L_6, NULL);
		Result_set_ResultMetadata_mF444AF5A54D471D27875F2142156B363BDA86022_inline(__this, (RuntimeObject*)NULL, NULL);
		int64_t L_7 = ___4_timestamp;
		Result_set_Timestamp_mBA61D16B2FF63701E76DDE2EFB75EF48642684BF_inline(__this, L_7, NULL);
		return;
	}
}
// System.String ZXing.Result::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89 (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void ZXing.Result::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_Text_m0D9F537DDA607D94327CFBEF56ADE0EE0B975F88 (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CTextU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Byte[] ZXing.Result::get_RawBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Result_get_RawBytes_m696914EEE6115066285985EE3A03A788ACBE02CD (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CRawBytesU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void ZXing.Result::set_RawBytes(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_RawBytes_m53C58BCBE3661C41D30B738AD17F0E7BAD3A1F0E (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CRawBytesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRawBytesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// ZXing.ResultPoint[] ZXing.Result::get_ResultPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* Result_get_ResultPoints_m98C7CADDAC629C1618DAE400297F3B7ABE7F40F1 (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) 
{
	{
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_0 = __this->___U3CResultPointsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void ZXing.Result::set_ResultPoints(ZXing.ResultPoint[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_ResultPoints_mF62AA333AA342D1959D5DDDDE9D8D88BB114240D (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* ___0_value, const RuntimeMethod* method) 
{
	{
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_0 = ___0_value;
		__this->___U3CResultPointsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultPointsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// ZXing.BarcodeFormat ZXing.Result::get_BarcodeFormat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Result_get_BarcodeFormat_m796820E994C575ECBFBD9CB93FBC3D6769B07AAB (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CBarcodeFormatU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void ZXing.Result::set_BarcodeFormat(ZXing.BarcodeFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_BarcodeFormat_m546DC86BEF0CB06002D6CA244700B01F3B227E76 (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CBarcodeFormatU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object> ZXing.Result::get_ResultMetadata()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Result_get_ResultMetadata_m76F9383FC2A3FF66F29D4EE0F4A9FAECD6AC3F58 (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CResultMetadataU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void ZXing.Result::set_ResultMetadata(System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_ResultMetadata_mF444AF5A54D471D27875F2142156B363BDA86022 (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CResultMetadataU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultMetadataU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Int64 ZXing.Result::get_Timestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Result_get_Timestamp_m340FEADFDADD61B79C6F94EBE0F99FE27F6076D4 (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CTimestampU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void ZXing.Result::set_Timestamp(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_set_Timestamp_mBA61D16B2FF63701E76DDE2EFB75EF48642684BF (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CTimestampU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Void ZXing.Result::putMetadata(ZXing.ResultMetadataType,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_putMetadata_m2D95B7A0F09318F7F0DE68A8AA8440A8FB080984 (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, int32_t ___0_type, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m70BA60E4E492D273A28BA223607EED75F692CFD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tBB6F88EA7BFECA82550866E41E4C3523478ACB9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t3B68EF519427E7FE95A7242758F0B03628B9AA64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = Result_get_ResultMetadata_m76F9383FC2A3FF66F29D4EE0F4A9FAECD6AC3F58_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Dictionary_2_tBB6F88EA7BFECA82550866E41E4C3523478ACB9A* L_1 = (Dictionary_2_tBB6F88EA7BFECA82550866E41E4C3523478ACB9A*)il2cpp_codegen_object_new(Dictionary_2_tBB6F88EA7BFECA82550866E41E4C3523478ACB9A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m70BA60E4E492D273A28BA223607EED75F692CFD2(L_1, Dictionary_2__ctor_m70BA60E4E492D273A28BA223607EED75F692CFD2_RuntimeMethod_var);
		Result_set_ResultMetadata_mF444AF5A54D471D27875F2142156B363BDA86022_inline(__this, L_1, NULL);
	}

IL_0016:
	{
		RuntimeObject* L_2;
		L_2 = Result_get_ResultMetadata_m76F9383FC2A3FF66F29D4EE0F4A9FAECD6AC3F58_inline(__this, NULL);
		int32_t L_3 = ___0_type;
		RuntimeObject* L_4 = ___1_value;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t3B68EF519427E7FE95A7242758F0B03628B9AA64_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		return;
	}
}
// System.Void ZXing.Result::putAllMetadata(System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_putAllMetadata_mC45C68DF94C5EA68A841ADD0329F34C0895F2F89 (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, RuntimeObject* ___0_metadata, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t3B68EF519427E7FE95A7242758F0B03628B9AA64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3BF4E31A04F4E2AFDBDE80A4FFD156E2E9E188CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t8AD41067F76DE24B0C85C30329DE1A43B9EE45E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mAC0C4F49939ABB2F0760CD42B69D6900A4BDB565_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m469FBD8407EDF5DF5C286131856C0C5550914E77_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t115CEA7E80924A32801A3ECC2BC1DF844C2D42DD V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___0_metadata;
		if (!L_0)
		{
			goto IL_0066;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = Result_get_ResultMetadata_m76F9383FC2A3FF66F29D4EE0F4A9FAECD6AC3F58_inline(__this, NULL);
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = ___0_metadata;
		Result_set_ResultMetadata_mF444AF5A54D471D27875F2142156B363BDA86022_inline(__this, L_2, NULL);
		goto IL_0066;
	}

IL_001d:
	{
		RuntimeObject* L_3 = ___0_metadata;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>>::GetEnumerator() */, IEnumerable_1_t3BF4E31A04F4E2AFDBDE80A4FFD156E2E9E188CA_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0059:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_1;
					if (!L_5)
					{
						goto IL_0065;
					}
				}
				{
					RuntimeObject* L_6 = V_1;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_0065:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0049_1;
			}

IL_0029_1:
			{
				RuntimeObject* L_7 = V_1;
				NullCheck(L_7);
				KeyValuePair_2_t115CEA7E80924A32801A3ECC2BC1DF844C2D42DD L_8;
				L_8 = InterfaceFuncInvoker0< KeyValuePair_2_t115CEA7E80924A32801A3ECC2BC1DF844C2D42DD >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<ZXing.ResultMetadataType,System.Object>>::get_Current() */, IEnumerator_1_t8AD41067F76DE24B0C85C30329DE1A43B9EE45E3_il2cpp_TypeInfo_var, L_7);
				V_0 = L_8;
				RuntimeObject* L_9;
				L_9 = Result_get_ResultMetadata_m76F9383FC2A3FF66F29D4EE0F4A9FAECD6AC3F58_inline(__this, NULL);
				int32_t L_10;
				L_10 = KeyValuePair_2_get_Key_mAC0C4F49939ABB2F0760CD42B69D6900A4BDB565_inline((&V_0), KeyValuePair_2_get_Key_mAC0C4F49939ABB2F0760CD42B69D6900A4BDB565_RuntimeMethod_var);
				RuntimeObject* L_11;
				L_11 = KeyValuePair_2_get_Value_m469FBD8407EDF5DF5C286131856C0C5550914E77_inline((&V_0), KeyValuePair_2_get_Value_m469FBD8407EDF5DF5C286131856C0C5550914E77_RuntimeMethod_var);
				NullCheck(L_9);
				InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<ZXing.ResultMetadataType,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t3B68EF519427E7FE95A7242758F0B03628B9AA64_il2cpp_TypeInfo_var, L_9, L_10, L_11);
			}

IL_0049_1:
			{
				RuntimeObject* L_12 = V_1;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_0029_1;
				}
			}
			{
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		return;
	}
}
// System.Void ZXing.Result::addResultPoints(ZXing.ResultPoint[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Result_addResultPoints_m5D1DE38BDE9AE982A6468B9259B83F55ECDC2E0D (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* ___0_newPoints, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* V_0 = NULL;
	ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* V_1 = NULL;
	{
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_0;
		L_0 = Result_get_ResultPoints_m98C7CADDAC629C1618DAE400297F3B7ABE7F40F1_inline(__this, NULL);
		V_0 = L_0;
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_1 = V_0;
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_2 = ___0_newPoints;
		Result_set_ResultPoints_mF62AA333AA342D1959D5DDDDE9D8D88BB114240D_inline(__this, L_2, NULL);
		goto IL_0056;
	}

IL_0019:
	{
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_3 = ___0_newPoints;
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_4 = ___0_newPoints;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) <= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_5 = V_0;
		NullCheck(L_5);
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_6 = ___0_newPoints;
		NullCheck(L_6);
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_7 = (ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0*)(ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0*)SZArrayNew(ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), ((int32_t)(((RuntimeArray*)L_6)->max_length)))));
		V_1 = L_7;
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_8 = V_0;
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_9 = V_1;
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_10 = V_0;
		NullCheck(L_10);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, 0, (RuntimeArray*)L_9, 0, ((int32_t)(((RuntimeArray*)L_10)->max_length)), NULL);
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_11 = ___0_newPoints;
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_12 = V_1;
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_13 = V_0;
		NullCheck(L_13);
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_14 = ___0_newPoints;
		NullCheck(L_14);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_11, 0, (RuntimeArray*)L_12, ((int32_t)(((RuntimeArray*)L_13)->max_length)), ((int32_t)(((RuntimeArray*)L_14)->max_length)), NULL);
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_15 = V_1;
		Result_set_ResultPoints_mF62AA333AA342D1959D5DDDDE9D8D88BB114240D_inline(__this, L_15, NULL);
	}

IL_0056:
	{
		return;
	}
}
// System.String ZXing.Result::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Result_ToString_mCA30BE14776A3B7726053A06B68DF29F5EAC04E6 (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA8866B433BA9069B0DB33015775433EC276B594);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline(__this, NULL);
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Result_get_RawBytes_m696914EEE6115066285985EE3A03A788ACBE02CD_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Concat_m9DF47FC6E1F8341012CA3FF02993D372AA7A96C9(_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, L_3, _stringLiteralDA8866B433BA9069B0DB33015775433EC276B594, NULL);
		return L_4;
	}

IL_0028:
	{
		String_t* L_5;
		L_5 = Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline(__this, NULL);
		return L_5;
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
// System.Void ZXing.ResultPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPoint__ctor_m747529DFA6CD5608A0B02267D8C1E05AD8C87C1A (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ZXing.ResultPoint::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPoint__ctor_m79866B07DD071E8125F003F1A53CEDE675F3213D (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___0_x;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = BitConverter_GetBytes_m86ADBB3533A4FFA79B7303FBEBC9EBD1BCA6A549(L_2, NULL);
		__this->___bytesX_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bytesX_2), (void*)L_3);
		float L_4 = ___1_y;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = BitConverter_GetBytes_m86ADBB3533A4FFA79B7303FBEBC9EBD1BCA6A549(L_4, NULL);
		__this->___bytesY_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bytesY_3), (void*)L_5);
		return;
	}
}
// System.Single ZXing.ResultPoint::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ResultPoint_get_X_m4E4028C91CEECACA98CCBDC9F73AFC4EC0585A07 (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___x_0;
		return L_0;
	}
}
// System.Single ZXing.ResultPoint::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ResultPoint_get_Y_mEB2737C292C13E22E782565E6335127E84F7605F (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___y_1;
		return L_0;
	}
}
// System.Boolean ZXing.ResultPoint::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResultPoint_Equals_m816C1EA4EAF70D5B851C8B60582721C9BDB9935D (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* __this, RuntimeObject* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* V_0 = NULL;
	int32_t G_B5_0 = 0;
	{
		RuntimeObject* L_0 = ___0_other;
		V_0 = ((ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB*)IsInstClass((RuntimeObject*)L_0, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB_il2cpp_TypeInfo_var));
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_1 = V_0;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (bool)0;
	}

IL_000f:
	{
		float L_2 = __this->___x_0;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_3 = V_0;
		NullCheck(L_3);
		float L_4 = L_3->___x_0;
		if ((!(((float)L_2) == ((float)L_4))))
		{
			goto IL_0030;
		}
	}
	{
		float L_5 = __this->___y_1;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_6 = V_0;
		NullCheck(L_6);
		float L_7 = L_6->___y_1;
		G_B5_0 = ((((float)L_5) == ((float)L_7))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B5_0 = 0;
	}

IL_0031:
	{
		return (bool)G_B5_0;
	}
}
// System.Int32 ZXing.ResultPoint::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResultPoint_GetHashCode_mFD5FE98108BA1201CEF424EA744EF02D57E92495 (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___bytesX_2;
		NullCheck(L_0);
		int32_t L_1 = 0;
		uint8_t L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___bytesX_2;
		NullCheck(L_3);
		int32_t L_4 = 1;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___bytesX_2;
		NullCheck(L_6);
		int32_t L_7 = 2;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___bytesX_2;
		NullCheck(L_9);
		int32_t L_10 = 3;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = __this->___bytesY_3;
		NullCheck(L_12);
		int32_t L_13 = 0;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___bytesY_3;
		NullCheck(L_15);
		int32_t L_16 = 1;
		uint8_t L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___bytesY_3;
		NullCheck(L_18);
		int32_t L_19 = 2;
		uint8_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = __this->___bytesY_3;
		NullCheck(L_21);
		int32_t L_22 = 3;
		uint8_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)31), ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)((int32_t)L_2<<((int32_t)24))), ((int32_t)((int32_t)L_5<<((int32_t)16))))), ((int32_t)((int32_t)L_8<<8)))), (int32_t)L_11)))), ((int32_t)((int32_t)L_14<<((int32_t)24))))), ((int32_t)((int32_t)L_17<<((int32_t)16))))), ((int32_t)((int32_t)L_20<<8)))), (int32_t)L_23));
	}
}
// System.String ZXing.ResultPoint::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ResultPoint_ToString_m20A476187B144F35BF8D992C40DE0445DCE836D3 (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___toString_4;
		if (L_0)
		{
			goto IL_0052;
		}
	}
	{
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_1, ((int32_t)25), NULL);
		V_0 = L_1;
		StringBuilder_t* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_3;
		L_3 = CultureInfo_get_CurrentUICulture_m1620C5666BB7E4BD8A58FB12FB86352FC5311455(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = L_4;
		float L_6 = __this->___x_0;
		float L_7 = L_6;
		RuntimeObject* L_8 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_8);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_5;
		float L_10 = __this->___y_1;
		float L_11 = L_10;
		RuntimeObject* L_12 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		NullCheck(L_2);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_AppendFormat_m0A69DC59537ACE5D88B174EE1098453E1276E53B(L_2, L_3, _stringLiteralDBD8760F0E4E49A1C274D51CE66C3AF4D4F6DD1D, L_9, NULL);
		StringBuilder_t* L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		__this->___toString_4 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toString_4), (void*)L_15);
	}

IL_0052:
	{
		String_t* L_16 = __this->___toString_4;
		return L_16;
	}
}
// System.Void ZXing.ResultPoint::orderBestPatterns(ZXing.ResultPoint[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPoint_orderBestPatterns_m074240947CA9681D90DA2D804BD960374772E434 (ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* ___0_patterns, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* V_3 = NULL;
	ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* V_4 = NULL;
	ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* V_5 = NULL;
	ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* V_6 = NULL;
	{
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_0 = ___0_patterns;
		NullCheck(L_0);
		int32_t L_1 = 0;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_3 = ___0_patterns;
		NullCheck(L_3);
		int32_t L_4 = 1;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		float L_6;
		L_6 = ResultPoint_distance_mD79EA410CC82252F03B53C77F0A4A70A9709A91B(L_2, L_5, NULL);
		V_0 = L_6;
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_7 = ___0_patterns;
		NullCheck(L_7);
		int32_t L_8 = 1;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_10 = ___0_patterns;
		NullCheck(L_10);
		int32_t L_11 = 2;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		float L_13;
		L_13 = ResultPoint_distance_mD79EA410CC82252F03B53C77F0A4A70A9709A91B(L_9, L_12, NULL);
		V_1 = L_13;
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_14 = ___0_patterns;
		NullCheck(L_14);
		int32_t L_15 = 0;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_17 = ___0_patterns;
		NullCheck(L_17);
		int32_t L_18 = 2;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		float L_20;
		L_20 = ResultPoint_distance_mD79EA410CC82252F03B53C77F0A4A70A9709A91B(L_16, L_19, NULL);
		V_2 = L_20;
		float L_21 = V_1;
		float L_22 = V_0;
		if ((!(((float)L_21) >= ((float)L_22))))
		{
			goto IL_0045;
		}
	}
	{
		float L_23 = V_1;
		float L_24 = V_2;
		if ((!(((float)L_23) >= ((float)L_24))))
		{
			goto IL_0045;
		}
	}
	{
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_25 = ___0_patterns;
		NullCheck(L_25);
		int32_t L_26 = 0;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		V_4 = L_27;
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_28 = ___0_patterns;
		NullCheck(L_28);
		int32_t L_29 = 1;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_3 = L_30;
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_31 = ___0_patterns;
		NullCheck(L_31);
		int32_t L_32 = 2;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_5 = L_33;
		goto IL_0074;
	}

IL_0045:
	{
		float L_34 = V_2;
		float L_35 = V_1;
		if ((!(((float)L_34) >= ((float)L_35))))
		{
			goto IL_0066;
		}
	}
	{
		float L_36 = V_2;
		float L_37 = V_0;
		if ((!(((float)L_36) >= ((float)L_37))))
		{
			goto IL_0066;
		}
	}
	{
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_38 = ___0_patterns;
		NullCheck(L_38);
		int32_t L_39 = 1;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		V_4 = L_40;
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_41 = ___0_patterns;
		NullCheck(L_41);
		int32_t L_42 = 0;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		V_3 = L_43;
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_44 = ___0_patterns;
		NullCheck(L_44);
		int32_t L_45 = 2;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_46 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_5 = L_46;
		goto IL_0074;
	}

IL_0066:
	{
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_47 = ___0_patterns;
		NullCheck(L_47);
		int32_t L_48 = 2;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		V_4 = L_49;
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_50 = ___0_patterns;
		NullCheck(L_50);
		int32_t L_51 = 0;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_52 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_3 = L_52;
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_53 = ___0_patterns;
		NullCheck(L_53);
		int32_t L_54 = 1;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		V_5 = L_55;
	}

IL_0074:
	{
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_56 = V_3;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_57 = V_4;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_58 = V_5;
		float L_59;
		L_59 = ResultPoint_crossProductZ_m25B07907D44324A12779C1CCDE914DD9CCA19B98(L_56, L_57, L_58, NULL);
		if ((!(((float)L_59) < ((float)(0.0f)))))
		{
			goto IL_0092;
		}
	}
	{
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_60 = V_3;
		V_6 = L_60;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_61 = V_5;
		V_3 = L_61;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_62 = V_6;
		V_5 = L_62;
	}

IL_0092:
	{
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_63 = ___0_patterns;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_64 = V_3;
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_64);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB*)L_64);
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_65 = ___0_patterns;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_66 = V_4;
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_66);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(1), (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB*)L_66);
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_67 = ___0_patterns;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_68 = V_5;
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_68);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB*)L_68);
		return;
	}
}
// System.Single ZXing.ResultPoint::distance(ZXing.ResultPoint,ZXing.ResultPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ResultPoint_distance_mD79EA410CC82252F03B53C77F0A4A70A9709A91B (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___0_pattern1, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___1_pattern2, const RuntimeMethod* method) 
{
	{
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_0 = ___0_pattern1;
		NullCheck(L_0);
		float L_1 = L_0->___x_0;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_2 = ___0_pattern1;
		NullCheck(L_2);
		float L_3 = L_2->___y_1;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_4 = ___1_pattern2;
		NullCheck(L_4);
		float L_5 = L_4->___x_0;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_6 = ___1_pattern2;
		NullCheck(L_6);
		float L_7 = L_6->___y_1;
		float L_8;
		L_8 = MathUtils_distance_m4EE9BC601D8414FD168751C587ABCC119036EB35(L_1, L_3, L_5, L_7, NULL);
		return L_8;
	}
}
// System.Single ZXing.ResultPoint::crossProductZ(ZXing.ResultPoint,ZXing.ResultPoint,ZXing.ResultPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ResultPoint_crossProductZ_m25B07907D44324A12779C1CCDE914DD9CCA19B98 (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___0_pointA, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___1_pointB, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___2_pointC, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_0 = ___1_pointB;
		NullCheck(L_0);
		float L_1 = L_0->___x_0;
		V_0 = L_1;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_2 = ___1_pointB;
		NullCheck(L_2);
		float L_3 = L_2->___y_1;
		V_1 = L_3;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_4 = ___2_pointC;
		NullCheck(L_4);
		float L_5 = L_4->___x_0;
		float L_6 = V_0;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_7 = ___0_pointA;
		NullCheck(L_7);
		float L_8 = L_7->___y_1;
		float L_9 = V_1;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_10 = ___2_pointC;
		NullCheck(L_10);
		float L_11 = L_10->___y_1;
		float L_12 = V_1;
		ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* L_13 = ___0_pointA;
		NullCheck(L_13);
		float L_14 = L_13->___x_0;
		float L_15 = V_0;
		return ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_6)), ((float)il2cpp_codegen_subtract(L_8, L_9)))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_11, L_12)), ((float)il2cpp_codegen_subtract(L_14, L_15))))));
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
void ResultPointCallback_Invoke_mACE4F177782E0203CD63C368103B2544D15F62EA_Multicast(ResultPointCallback_tAE973E1935484A681D816642668706DA311185D3* __this, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___0_point, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ResultPointCallback_tAE973E1935484A681D816642668706DA311185D3* currentDelegate = reinterpret_cast<ResultPointCallback_tAE973E1935484A681D816642668706DA311185D3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_point, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void ResultPointCallback_Invoke_mACE4F177782E0203CD63C368103B2544D15F62EA_OpenInst(ResultPointCallback_tAE973E1935484A681D816642668706DA311185D3* __this, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___0_point, const RuntimeMethod* method)
{
	NullCheck(___0_point);
	typedef void (*FunctionPointerType) (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_point, method);
}
void ResultPointCallback_Invoke_mACE4F177782E0203CD63C368103B2544D15F62EA_OpenStatic(ResultPointCallback_tAE973E1935484A681D816642668706DA311185D3* __this, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___0_point, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_point, method);
}
void ResultPointCallback_Invoke_mACE4F177782E0203CD63C368103B2544D15F62EA_OpenStaticInvoker(ResultPointCallback_tAE973E1935484A681D816642668706DA311185D3* __this, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___0_point, const RuntimeMethod* method)
{
	InvokerActionInvoker1< ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* >::Invoke(__this->___method_ptr_0, method, NULL, ___0_point);
}
void ResultPointCallback_Invoke_mACE4F177782E0203CD63C368103B2544D15F62EA_ClosedStaticInvoker(ResultPointCallback_tAE973E1935484A681D816642668706DA311185D3* __this, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___0_point, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_point);
}
void ResultPointCallback_Invoke_mACE4F177782E0203CD63C368103B2544D15F62EA_OpenVirtual(ResultPointCallback_tAE973E1935484A681D816642668706DA311185D3* __this, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___0_point, const RuntimeMethod* method)
{
	NullCheck(___0_point);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___0_point);
}
void ResultPointCallback_Invoke_mACE4F177782E0203CD63C368103B2544D15F62EA_OpenInterface(ResultPointCallback_tAE973E1935484A681D816642668706DA311185D3* __this, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___0_point, const RuntimeMethod* method)
{
	NullCheck(___0_point);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___0_point);
}
void ResultPointCallback_Invoke_mACE4F177782E0203CD63C368103B2544D15F62EA_OpenGenericVirtual(ResultPointCallback_tAE973E1935484A681D816642668706DA311185D3* __this, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___0_point, const RuntimeMethod* method)
{
	NullCheck(___0_point);
	GenericVirtualActionInvoker0::Invoke(method, ___0_point);
}
void ResultPointCallback_Invoke_mACE4F177782E0203CD63C368103B2544D15F62EA_OpenGenericInterface(ResultPointCallback_tAE973E1935484A681D816642668706DA311185D3* __this, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___0_point, const RuntimeMethod* method)
{
	NullCheck(___0_point);
	GenericInterfaceActionInvoker0::Invoke(method, ___0_point);
}
// System.Void ZXing.ResultPointCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPointCallback__ctor_m3FE04787E1B227F1387CB77996494FD78B37CF92 (ResultPointCallback_tAE973E1935484A681D816642668706DA311185D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ResultPointCallback_Invoke_mACE4F177782E0203CD63C368103B2544D15F62EA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ResultPointCallback_Invoke_mACE4F177782E0203CD63C368103B2544D15F62EA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ResultPointCallback_Invoke_mACE4F177782E0203CD63C368103B2544D15F62EA_OpenStatic;
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
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___1_method))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ResultPointCallback_Invoke_mACE4F177782E0203CD63C368103B2544D15F62EA_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ResultPointCallback_Invoke_mACE4F177782E0203CD63C368103B2544D15F62EA_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___1_method))
						__this->___invoke_impl_1 = (intptr_t)&ResultPointCallback_Invoke_mACE4F177782E0203CD63C368103B2544D15F62EA_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ResultPointCallback_Invoke_mACE4F177782E0203CD63C368103B2544D15F62EA_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ResultPointCallback_Invoke_mACE4F177782E0203CD63C368103B2544D15F62EA_OpenInst;
			}
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ResultPointCallback_Invoke_mACE4F177782E0203CD63C368103B2544D15F62EA_Multicast;
}
// System.Void ZXing.ResultPointCallback::Invoke(ZXing.ResultPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPointCallback_Invoke_mACE4F177782E0203CD63C368103B2544D15F62EA (ResultPointCallback_tAE973E1935484A681D816642668706DA311185D3* __this, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___0_point, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_point, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult ZXing.ResultPointCallback::BeginInvoke(ZXing.ResultPoint,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ResultPointCallback_BeginInvoke_m7B7A4CD18BDB85E18C26D4C9B71D600520561013 (ResultPointCallback_tAE973E1935484A681D816642668706DA311185D3* __this, ResultPoint_t3CD4CEBBB73A6443E7CE3220FBD0DB93A37516CB* ___0_point, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_point;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void ZXing.ResultPointCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResultPointCallback_EndInvoke_mFE024164E4DBDF0188208405C286D8673E7D5ABB (ResultPointCallback_tAE973E1935484A681D816642668706DA311185D3* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ZXing.RGB565LuminanceSource::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGB565LuminanceSource__ctor_m40E844F5E0A4AA2F3FE8EBDD54B024ECFC98131A (RGB565LuminanceSource_t5AB2F657F8D964F10FA73150CBAB153A07DAEE44* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_width;
		int32_t L_1 = ___1_height;
		RGBLuminanceSource__ctor_m685F1E845C1900E3CA492EFC64E91757DA396602(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void ZXing.RGB565LuminanceSource::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGB565LuminanceSource__ctor_m637685BC48CEBE9797C0A0A99B6090D622E38D8A (RGB565LuminanceSource_t5AB2F657F8D964F10FA73150CBAB153A07DAEE44* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgb565RawData, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgb565RawData;
		int32_t L_1 = ___1_width;
		int32_t L_2 = ___2_height;
		RGBLuminanceSource__ctor_m0D1C41446874B8323AC21E911E7FABB91603C97F(__this, L_0, L_1, L_2, 8, NULL);
		return;
	}
}
// ZXing.LuminanceSource ZXing.RGB565LuminanceSource::CreateLuminanceSource(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LuminanceSource_t066B696774156C477D4C4425791D3A0425F1DBDE* RGB565LuminanceSource_CreateLuminanceSource_mEEA88BF672CA3C64B500246C2C223E54E19EA03D (RGB565LuminanceSource_t5AB2F657F8D964F10FA73150CBAB153A07DAEE44* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_newLuminances, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RGB565LuminanceSource_t5AB2F657F8D964F10FA73150CBAB153A07DAEE44_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RGB565LuminanceSource_t5AB2F657F8D964F10FA73150CBAB153A07DAEE44* V_0 = NULL;
	{
		int32_t L_0 = ___1_width;
		int32_t L_1 = ___2_height;
		RGB565LuminanceSource_t5AB2F657F8D964F10FA73150CBAB153A07DAEE44* L_2 = (RGB565LuminanceSource_t5AB2F657F8D964F10FA73150CBAB153A07DAEE44*)il2cpp_codegen_object_new(RGB565LuminanceSource_t5AB2F657F8D964F10FA73150CBAB153A07DAEE44_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RGB565LuminanceSource__ctor_m40E844F5E0A4AA2F3FE8EBDD54B024ECFC98131A(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		RGB565LuminanceSource_t5AB2F657F8D964F10FA73150CBAB153A07DAEE44* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_newLuminances;
		NullCheck(L_3);
		((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)L_3)->___luminances_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)L_3)->___luminances_6), (void*)L_4);
		RGB565LuminanceSource_t5AB2F657F8D964F10FA73150CBAB153A07DAEE44* L_5 = V_0;
		return L_5;
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
// System.Void ZXing.RGBLuminanceSource::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource__ctor_m685F1E845C1900E3CA492EFC64E91757DA396602 (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_width;
		int32_t L_1 = ___1_height;
		BaseLuminanceSource__ctor_m4A76735608455D9F7E95FDBD2FDE827E5EED7E73(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::.ctor(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource__ctor_mCA0A6261124528600BCB51B6B1562FFD9EC0565C (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgbRawBytes;
		int32_t L_1 = ___1_width;
		int32_t L_2 = ___2_height;
		RGBLuminanceSource__ctor_m0D1C41446874B8323AC21E911E7FABB91603C97F(__this, L_0, L_1, L_2, 2, NULL);
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::.ctor(System.Byte[],System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource__ctor_mDD6E3007B167A046A9A69B3CF4EBC32BEB617616 (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_luminanceArray, int32_t ___1_width, int32_t ___2_height, bool ___3_is8Bit, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_luminanceArray;
		int32_t L_1 = ___1_width;
		int32_t L_2 = ___2_height;
		RGBLuminanceSource__ctor_m0D1C41446874B8323AC21E911E7FABB91603C97F(__this, L_0, L_1, L_2, 1, NULL);
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::.ctor(System.Byte[],System.Int32,System.Int32,ZXing.RGBLuminanceSource/BitmapFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource__ctor_m0D1C41446874B8323AC21E911E7FABB91603C97F (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, int32_t ___1_width, int32_t ___2_height, int32_t ___3_bitmapFormat, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_width;
		int32_t L_1 = ___2_height;
		BaseLuminanceSource__ctor_m4A76735608455D9F7E95FDBD2FDE827E5EED7E73(__this, L_0, L_1, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_rgbRawBytes;
		int32_t L_3 = ___3_bitmapFormat;
		RGBLuminanceSource_CalculateLuminance_m53B06ACB20E1411CF3A92C53191F259A949A136E(__this, L_2, L_3, NULL);
		return;
	}
}
// ZXing.LuminanceSource ZXing.RGBLuminanceSource::CreateLuminanceSource(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LuminanceSource_t066B696774156C477D4C4425791D3A0425F1DBDE* RGBLuminanceSource_CreateLuminanceSource_mD0C4E734C1638C02ECFE968FD37A2DE1D9A84DFF (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_newLuminances, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* V_0 = NULL;
	{
		int32_t L_0 = ___1_width;
		int32_t L_1 = ___2_height;
		RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* L_2 = (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226*)il2cpp_codegen_object_new(RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RGBLuminanceSource__ctor_m685F1E845C1900E3CA492EFC64E91757DA396602(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_newLuminances;
		NullCheck(L_3);
		((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)L_3)->___luminances_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)L_3)->___luminances_6), (void*)L_4);
		RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* L_5 = V_0;
		return L_5;
	}
}
// ZXing.RGBLuminanceSource/BitmapFormat ZXing.RGBLuminanceSource::DetermineBitmapFormat(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RGBLuminanceSource_DetermineBitmapFormat_m533F6D94D891BB58FE633B0BC6F0460D417F69F2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___1_width;
		int32_t L_1 = ___2_height;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, L_1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_rgbRawBytes;
		NullCheck(L_2);
		int32_t L_3 = V_0;
		V_1 = ((int32_t)(((int32_t)(((RuntimeArray*)L_2)->max_length))/L_3));
		int32_t L_4 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_4, 1)))
		{
			case 0:
			{
				goto IL_0027;
			}
			case 1:
			{
				goto IL_0029;
			}
			case 2:
			{
				goto IL_002b;
			}
			case 3:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_002f;
	}

IL_0027:
	{
		return (int32_t)(1);
	}

IL_0029:
	{
		return (int32_t)(8);
	}

IL_002b:
	{
		return (int32_t)(2);
	}

IL_002d:
	{
		return (int32_t)(3);
	}

IL_002f:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_5 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEC5446A7FF5D4B637861FAED325178E8EA7A216E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RGBLuminanceSource_DetermineBitmapFormat_m533F6D94D891BB58FE633B0BC6F0460D417F69F2_RuntimeMethod_var)));
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminance(System.Byte[],ZXing.RGBLuminanceSource/BitmapFormat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminance_m53B06ACB20E1411CF3A92C53191F259A949A136E (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, int32_t ___1_bitmapFormat, const RuntimeMethod* method) 
{
	int32_t G_B6_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B6_1 = NULL;
	int32_t G_B6_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B6_3 = NULL;
	int32_t G_B5_0 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B5_1 = NULL;
	int32_t G_B5_2 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B5_3 = NULL;
	int32_t G_B7_0 = 0;
	int32_t G_B7_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B7_2 = NULL;
	int32_t G_B7_3 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B7_4 = NULL;
	{
		int32_t L_0 = ___1_bitmapFormat;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_rgbRawBytes;
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 ZXing.LuminanceSource::get_Width() */, __this);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 ZXing.LuminanceSource::get_Height() */, __this);
		int32_t L_4;
		L_4 = RGBLuminanceSource_DetermineBitmapFormat_m533F6D94D891BB58FE633B0BC6F0460D417F69F2(L_1, L_2, L_3, NULL);
		___1_bitmapFormat = L_4;
	}

IL_001a:
	{
		int32_t L_5 = ___1_bitmapFormat;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_5, 1)))
		{
			case 0:
			{
				goto IL_004b;
			}
			case 1:
			{
				goto IL_007e;
			}
			case 2:
			{
				goto IL_0096;
			}
			case 3:
			{
				goto IL_00ba;
			}
			case 4:
			{
				goto IL_008a;
			}
			case 5:
			{
				goto IL_00a2;
			}
			case 6:
			{
				goto IL_00c6;
			}
			case 7:
			{
				goto IL_00d2;
			}
			case 8:
			{
				goto IL_00ae;
			}
		}
	}
	{
		goto IL_00de;
	}

IL_004b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_rgbRawBytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___0_rgbRawBytes;
		NullCheck(L_8);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		NullCheck(L_9);
		G_B5_0 = 0;
		G_B5_1 = L_7;
		G_B5_2 = 0;
		G_B5_3 = L_6;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			G_B6_0 = 0;
			G_B6_1 = L_7;
			G_B6_2 = 0;
			G_B6_3 = L_6;
			goto IL_006c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_rgbRawBytes;
		NullCheck(L_10);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_10)->max_length));
		G_B7_1 = G_B5_0;
		G_B7_2 = G_B5_1;
		G_B7_3 = G_B5_2;
		G_B7_4 = G_B5_3;
		goto IL_0074;
	}

IL_006c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		NullCheck(L_11);
		G_B7_0 = ((int32_t)(((RuntimeArray*)L_11)->max_length));
		G_B7_1 = G_B6_0;
		G_B7_2 = G_B6_1;
		G_B7_3 = G_B6_2;
		G_B7_4 = G_B6_3;
	}

IL_0074:
	{
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)G_B7_4, G_B7_3, (RuntimeArray*)G_B7_2, G_B7_1, G_B7_0, NULL);
		goto IL_00f6;
	}

IL_007e:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = ___0_rgbRawBytes;
		RGBLuminanceSource_CalculateLuminanceRGB24_mFAC68EC49E38555C53EEA07022920A3D02392EB1(__this, L_12, NULL);
		goto IL_00f6;
	}

IL_008a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = ___0_rgbRawBytes;
		RGBLuminanceSource_CalculateLuminanceBGR24_m1C8918583FB2303E756F778D8D27FEC759419971(__this, L_13, NULL);
		goto IL_00f6;
	}

IL_0096:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_rgbRawBytes;
		RGBLuminanceSource_CalculateLuminanceRGB32_m487AC4231B3BC5B768A0767561726E1BF253468E(__this, L_14, NULL);
		goto IL_00f6;
	}

IL_00a2:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_rgbRawBytes;
		RGBLuminanceSource_CalculateLuminanceBGR32_m66705AC7D371EF4BC707D033188CF7D47DC60375(__this, L_15, NULL);
		goto IL_00f6;
	}

IL_00ae:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ___0_rgbRawBytes;
		RGBLuminanceSource_CalculateLuminanceRGBA32_mC3F7CE8FAD3670F7EEE900ED95FA2464F10A47F4(__this, L_16, NULL);
		goto IL_00f6;
	}

IL_00ba:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = ___0_rgbRawBytes;
		RGBLuminanceSource_CalculateLuminanceARGB32_mD6DE468ED18E9B669F1F1B5DBF0B4BB0602E2E70(__this, L_17, NULL);
		goto IL_00f6;
	}

IL_00c6:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = ___0_rgbRawBytes;
		RGBLuminanceSource_CalculateLuminanceBGRA32_mE029AA79C97FD314538052826C96C73DB349D4A2(__this, L_18, NULL);
		goto IL_00f6;
	}

IL_00d2:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = ___0_rgbRawBytes;
		RGBLuminanceSource_CalculateLuminanceRGB565_m84B85BC5FA303170D29C76761D97D49BE1662387(__this, L_19, NULL);
		goto IL_00f6;
	}

IL_00de:
	{
		Il2CppFakeBox<int32_t> L_20(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BitmapFormat_t8D50A156429FFF20E5AFCAEEFBDE18004177F9AB_il2cpp_TypeInfo_var)), (&___1_bitmapFormat));
		String_t* L_21;
		L_21 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_20), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_22 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDE7E8FECC7166973B85D31AD6B3DA9096111A248)), L_21, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RGBLuminanceSource_CalculateLuminance_m53B06ACB20E1411CF3A92C53191F259A949A136E_RuntimeMethod_var)));
	}

IL_00f6:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB565(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB565_m84B85BC5FA303170D29C76761D97D49BE1662387 (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgb565RawData, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0090;
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgb565RawData;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint8_t L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_2 = L_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_rgb565RawData;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		uint8_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		uint8_t L_8 = V_2;
		V_4 = ((int32_t)((int32_t)L_8&((int32_t)31)));
		uint8_t L_9 = V_2;
		uint8_t L_10 = V_3;
		V_5 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_9&((int32_t)224)))>>5))|((int32_t)(((int32_t)((int32_t)L_10&3))<<3))))&((int32_t)31)));
		uint8_t L_11 = V_3;
		V_6 = ((int32_t)(((int32_t)((int32_t)L_11>>2))&((int32_t)31)));
		int32_t L_12 = V_6;
		V_7 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)527))), ((int32_t)23)))>>6));
		int32_t L_13 = V_5;
		V_8 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)527))), ((int32_t)23)))>>6));
		int32_t L_14 = V_4;
		V_9 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_14, ((int32_t)527))), ((int32_t)23)))>>6));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		int32_t L_16 = V_0;
		int32_t L_17 = V_7;
		int32_t L_18 = V_8;
		int32_t L_19 = V_9;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)19562), L_17)), ((int32_t)il2cpp_codegen_multiply(((int32_t)38550), L_18)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)7424), L_19))))>>((int32_t)16)))));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 2));
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0090:
	{
		int32_t L_22 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___0_rgb565RawData;
		NullCheck(L_23);
		if ((((int32_t)L_22) >= ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_00a7;
		}
	}
	{
		int32_t L_24 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0009;
		}
	}

IL_00a7:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB24(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB24_mFAC68EC49E38555C53EEA07022920A3D02392EB1 (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_004a;
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgbRawBytes;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_rgbRawBytes;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_rgbRawBytes;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		int32_t L_18 = V_3;
		int32_t L_19 = V_4;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)19562), L_17)), ((int32_t)il2cpp_codegen_multiply(((int32_t)38550), L_18)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)7424), L_19))))>>((int32_t)16)))));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_004a:
	{
		int32_t L_21 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_rgbRawBytes;
		NullCheck(L_22);
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_23 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0009;
		}
	}

IL_0061:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGR24(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGR24_m1C8918583FB2303E756F778D8D27FEC759419971 (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_004a;
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgbRawBytes;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_rgbRawBytes;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_rgbRawBytes;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		int32_t L_16 = V_1;
		int32_t L_17 = V_4;
		int32_t L_18 = V_3;
		int32_t L_19 = V_2;
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)19562), L_17)), ((int32_t)il2cpp_codegen_multiply(((int32_t)38550), L_18)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)7424), L_19))))>>((int32_t)16)))));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_004a:
	{
		int32_t L_21 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = ___0_rgbRawBytes;
		NullCheck(L_22);
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_23 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))
		{
			goto IL_0009;
		}
	}

IL_0061:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGB32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGB32_m487AC4231B3BC5B768A0767561726E1BF253468E (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_004e;
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgbRawBytes;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_rgbRawBytes;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_rgbRawBytes;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		int32_t L_17 = V_1;
		int32_t L_18 = V_2;
		int32_t L_19 = V_3;
		int32_t L_20 = V_4;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)19562), L_18)), ((int32_t)il2cpp_codegen_multiply(((int32_t)38550), L_19)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)7424), L_20))))>>((int32_t)16)))));
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_004e:
	{
		int32_t L_22 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___0_rgbRawBytes;
		NullCheck(L_23);
		if ((((int32_t)L_22) >= ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_24 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0009;
		}
	}

IL_0065:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGR32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGR32_m66705AC7D371EF4BC707D033188CF7D47DC60375 (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_004e;
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgbRawBytes;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_rgbRawBytes;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_rgbRawBytes;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		int32_t L_17 = V_1;
		int32_t L_18 = V_4;
		int32_t L_19 = V_3;
		int32_t L_20 = V_2;
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)19562), L_18)), ((int32_t)il2cpp_codegen_multiply(((int32_t)38550), L_19)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)7424), L_20))))>>((int32_t)16)))));
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_004e:
	{
		int32_t L_22 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ___0_rgbRawBytes;
		NullCheck(L_23);
		if ((((int32_t)L_22) >= ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_24 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0009;
		}
	}

IL_0065:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceBGRA32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceBGRA32_mE029AA79C97FD314538052826C96C73DB349D4A2 (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_006e;
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgbRawBytes;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_rgbRawBytes;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_rgbRawBytes;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_rgbRawBytes;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_5 = L_19;
		uint8_t L_20 = V_4;
		uint8_t L_21 = V_3;
		uint8_t L_22 = V_2;
		V_6 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)19562), (int32_t)L_20)), ((int32_t)il2cpp_codegen_multiply(((int32_t)38550), (int32_t)L_21)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)7424), (int32_t)L_22))))>>((int32_t)16))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		int32_t L_24 = V_1;
		uint8_t L_25 = V_6;
		uint8_t L_26 = V_5;
		uint8_t L_27 = V_5;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26))>>8)), ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)255), ((int32_t)il2cpp_codegen_subtract(((int32_t)255), (int32_t)L_27))))>>8))))));
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_006e:
	{
		int32_t L_29 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___0_rgbRawBytes;
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_31 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_0009;
		}
	}

IL_0085:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceRGBA32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceRGBA32_mC3F7CE8FAD3670F7EEE900ED95FA2464F10A47F4 (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_006e;
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgbRawBytes;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_rgbRawBytes;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_rgbRawBytes;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_rgbRawBytes;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_5 = L_19;
		uint8_t L_20 = V_2;
		uint8_t L_21 = V_3;
		uint8_t L_22 = V_4;
		V_6 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)19562), (int32_t)L_20)), ((int32_t)il2cpp_codegen_multiply(((int32_t)38550), (int32_t)L_21)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)7424), (int32_t)L_22))))>>((int32_t)16))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		int32_t L_24 = V_1;
		uint8_t L_25 = V_6;
		uint8_t L_26 = V_5;
		uint8_t L_27 = V_5;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26))>>8)), ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)255), ((int32_t)il2cpp_codegen_subtract(((int32_t)255), (int32_t)L_27))))>>8))))));
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_006e:
	{
		int32_t L_29 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___0_rgbRawBytes;
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_31 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_0009;
		}
	}

IL_0085:
	{
		return;
	}
}
// System.Void ZXing.RGBLuminanceSource::CalculateLuminanceARGB32(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RGBLuminanceSource_CalculateLuminanceARGB32_mD6DE468ED18E9B669F1F1B5DBF0B4BB0602E2E70 (RGBLuminanceSource_tC8395D893A051663ADC653B113CACCDA60C38226* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rgbRawBytes, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint8_t V_3 = 0x0;
	uint8_t V_4 = 0x0;
	uint8_t V_5 = 0x0;
	uint8_t V_6 = 0x0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_006d;
	}

IL_0009:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_rgbRawBytes;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		NullCheck(L_0);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___0_rgbRawBytes;
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		NullCheck(L_5);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = ___0_rgbRawBytes;
		int32_t L_11 = V_0;
		int32_t L_12 = L_11;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		NullCheck(L_10);
		int32_t L_13 = L_12;
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_4 = L_14;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = ___0_rgbRawBytes;
		int32_t L_16 = V_0;
		int32_t L_17 = L_16;
		V_0 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_15);
		int32_t L_18 = L_17;
		uint8_t L_19 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_5 = L_19;
		uint8_t L_20 = V_3;
		uint8_t L_21 = V_4;
		uint8_t L_22 = V_5;
		V_6 = (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)19562), (int32_t)L_20)), ((int32_t)il2cpp_codegen_multiply(((int32_t)38550), (int32_t)L_21)))), ((int32_t)il2cpp_codegen_multiply(((int32_t)7424), (int32_t)L_22))))>>((int32_t)16))));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		int32_t L_24 = V_1;
		uint8_t L_25 = V_6;
		uint8_t L_26 = V_2;
		uint8_t L_27 = V_2;
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add(((int32_t)(((int32_t)il2cpp_codegen_multiply((int32_t)L_25, (int32_t)L_26))>>8)), ((int32_t)(((int32_t)il2cpp_codegen_multiply(((int32_t)255), ((int32_t)il2cpp_codegen_subtract(((int32_t)255), (int32_t)L_27))))>>8))))));
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_006d:
	{
		int32_t L_29 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = ___0_rgbRawBytes;
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_31 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_32 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_0009;
		}
	}

IL_0084:
	{
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
// System.Void ZXing.SupportClass::GetCharsFromString(System.String,System.Int32,System.Int32,System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportClass_GetCharsFromString_m4E307D7319453791CAA671106486ECDA16E83735 (String_t* ___0_sourceString, int32_t ___1_sourceStart, int32_t ___2_sourceEnd, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___3_destinationArray, int32_t ___4_destinationStart, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___1_sourceStart;
		V_0 = L_0;
		int32_t L_1 = ___4_destinationStart;
		V_1 = L_1;
		goto IL_001c;
	}

IL_000a:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = ___3_destinationArray;
		int32_t L_3 = V_1;
		String_t* L_4 = ___0_sourceString;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, L_5, NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (Il2CppChar)L_6);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001c:
	{
		int32_t L_9 = V_0;
		int32_t L_10 = ___2_sourceEnd;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}
}
// System.String[] ZXing.SupportClass::toStringArray(System.Collections.Generic.ICollection`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* SupportClass_toStringArray_mAD76FDFED9A1879E0A659A8B1FA8192941CDBAE2 (RuntimeObject* ___0_strings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_strings;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.String>::get_Count() */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = ___0_strings;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		NullCheck(L_3);
		InterfaceActionInvoker2< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, int32_t >::Invoke(5 /* System.Void System.Collections.Generic.ICollection`1<System.String>::CopyTo(T[],System.Int32) */, ICollection_1_t5C03FBFD5ECBDE4EAB8C4ED582DDFCF702EB5DC7_il2cpp_TypeInfo_var, L_3, L_4, 0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_0;
		return L_5;
	}
}
// System.String ZXing.SupportClass::ToBinaryString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_ToBinaryString_m6286E8FF516C5C02AAF1F713E215B1073079FFD3 (int32_t ___0_x, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B3_1 = NULL;
	int32_t G_B2_0 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B2_1 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* G_B4_2 = NULL;
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)32));
		V_0 = L_0;
		V_1 = 0;
		goto IL_002d;
	}

IL_000f:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = ___0_x;
		G_B2_0 = L_3;
		G_B2_1 = L_1;
		if ((!(((uint32_t)((int32_t)(L_4&1))) == ((uint32_t)1))))
		{
			G_B3_0 = L_3;
			G_B3_1 = L_1;
			goto IL_0025;
		}
	}
	{
		G_B4_0 = ((int32_t)49);
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0027;
	}

IL_0025:
	{
		G_B4_0 = ((int32_t)48);
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0027:
	{
		NullCheck(G_B4_2);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (Il2CppChar)G_B4_0);
		int32_t L_5 = ___0_x;
		___0_x = ((int32_t)(L_5>>1));
	}

IL_002d:
	{
		int32_t L_6 = ___0_x;
		if (L_6)
		{
			goto IL_000f;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = V_0;
		int32_t L_8 = V_1;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD((RuntimeArray*)L_7, 0, L_8, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = V_0;
		String_t* L_10;
		L_10 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_9, NULL);
		return L_10;
	}
}
// System.Int32 ZXing.SupportClass::bitCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SupportClass_bitCount_m57135A6740DF4D87174A7AC446B1117D780856D4 (int32_t ___0_n, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0012;
	}

IL_0007:
	{
		int32_t L_0 = ___0_n;
		int32_t L_1 = ___0_n;
		___0_n = ((int32_t)(L_0&((int32_t)il2cpp_codegen_subtract(L_1, 1))));
		int32_t L_2 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_2, 1));
	}

IL_0012:
	{
		int32_t L_3 = ___0_n;
		if (L_3)
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
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
// System.Void ZXing.Color32LuminanceSource::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32LuminanceSource__ctor_m7CB2ECA01B47DC80852B28D7F7C30BEE9DBA8CF7 (Color32LuminanceSource_tF0F7DA904D1E949F51C065F613D0A398B9DF69FC* __this, int32_t ___0_width, int32_t ___1_height, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_width;
		int32_t L_1 = ___1_height;
		BaseLuminanceSource__ctor_m4A76735608455D9F7E95FDBD2FDE827E5EED7E73(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void ZXing.Color32LuminanceSource::.ctor(UnityEngine.Color32[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32LuminanceSource__ctor_mD6CD4FD1C2EFC7064C8BDE928DF6DA9BDEEBCA4A (Color32LuminanceSource_tF0F7DA904D1E949F51C065F613D0A398B9DF69FC* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_color32s, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___1_width;
		int32_t L_1 = ___2_height;
		BaseLuminanceSource__ctor_m4A76735608455D9F7E95FDBD2FDE827E5EED7E73(__this, L_0, L_1, NULL);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_2 = ___0_color32s;
		Color32LuminanceSource_SetPixels_m6738AB1D4BBD9E72BB0D10DD027DB282E8435BC3(__this, L_2, NULL);
		return;
	}
}
// System.Void ZXing.Color32LuminanceSource::SetPixels(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32LuminanceSource_SetPixels_m6738AB1D4BBD9E72BB0D10DD027DB282E8435BC3 (Color32LuminanceSource_tF0F7DA904D1E949F51C065F613D0A398B9DF69FC* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_color32s, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		V_0 = 0;
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 ZXing.LuminanceSource::get_Height() */, __this);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		goto IL_006f;
	}

IL_0010:
	{
		V_2 = 0;
		goto IL_005f;
	}

IL_0017:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_1 = ___0_color32s;
		int32_t L_2 = V_1;
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 ZXing.LuminanceSource::get_Width() */, __this);
		int32_t L_4 = V_2;
		NullCheck(L_1);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5 = (*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_2, L_3)), L_4))))));
		V_3 = L_5;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)__this)->___luminances_6;
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		uint8_t L_9 = (&V_3)->___r_1;
		uint8_t L_10 = (&V_3)->___g_2;
		uint8_t L_11 = (&V_3)->___g_2;
		uint8_t L_12 = (&V_3)->___b_3;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (uint8_t)((int32_t)(uint8_t)((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), (int32_t)L_11)), (int32_t)L_12))>>2))));
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_005f:
	{
		int32_t L_14 = V_2;
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 ZXing.LuminanceSource::get_Width() */, __this);
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_006f:
	{
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}
}
// ZXing.LuminanceSource ZXing.Color32LuminanceSource::CreateLuminanceSource(System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LuminanceSource_t066B696774156C477D4C4425791D3A0425F1DBDE* Color32LuminanceSource_CreateLuminanceSource_mA70EC3A71F4050322925F768A81FF0E783C9DF71 (Color32LuminanceSource_tF0F7DA904D1E949F51C065F613D0A398B9DF69FC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_newLuminances, int32_t ___1_width, int32_t ___2_height, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32LuminanceSource_tF0F7DA904D1E949F51C065F613D0A398B9DF69FC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color32LuminanceSource_tF0F7DA904D1E949F51C065F613D0A398B9DF69FC* V_0 = NULL;
	{
		int32_t L_0 = ___1_width;
		int32_t L_1 = ___2_height;
		Color32LuminanceSource_tF0F7DA904D1E949F51C065F613D0A398B9DF69FC* L_2 = (Color32LuminanceSource_tF0F7DA904D1E949F51C065F613D0A398B9DF69FC*)il2cpp_codegen_object_new(Color32LuminanceSource_tF0F7DA904D1E949F51C065F613D0A398B9DF69FC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Color32LuminanceSource__ctor_m7CB2ECA01B47DC80852B28D7F7C30BEE9DBA8CF7(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		Color32LuminanceSource_tF0F7DA904D1E949F51C065F613D0A398B9DF69FC* L_3 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_newLuminances;
		NullCheck(L_3);
		((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)L_3)->___luminances_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((BaseLuminanceSource_tDFA68C790E169BDADF5F2F05EECCACCE3111055C*)L_3)->___luminances_6), (void*)L_4);
		Color32LuminanceSource_tF0F7DA904D1E949F51C065F613D0A398B9DF69FC* L_5 = V_0;
		return L_5;
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
// System.Void ZXing.Color32Renderer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32Renderer__ctor_m5DE3F00D19BFE07573BE14E632106F8AC4615E83 (Color32Renderer_t14E818551AA35E8EABA383D7E36281E9A5CCE8A0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Color32[] ZXing.Color32Renderer::Render(ZXing.Common.BitMatrix,ZXing.BarcodeFormat,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Color32Renderer_Render_m5828886AFD5032C028CAA2BAF2A71D61390EE309 (Color32Renderer_t14E818551AA35E8EABA383D7E36281E9A5CCE8A0* __this, BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___0_matrix, int32_t ___1_format, String_t* ___2_content, const RuntimeMethod* method) 
{
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_0 = ___0_matrix;
		int32_t L_1 = ___1_format;
		String_t* L_2 = ___2_content;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_3;
		L_3 = Color32Renderer_Render_m89E47C6691EDC74387D40562DD8A0043CAB5CE67(__this, L_0, L_1, L_2, (EncodingOptions_t84F92A38829ABB6416A1FCE75DEB61FECF8AFA2D*)NULL, NULL);
		return L_3;
	}
}
// UnityEngine.Color32[] ZXing.Color32Renderer::Render(ZXing.Common.BitMatrix,ZXing.BarcodeFormat,System.String,ZXing.Common.EncodingOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Color32Renderer_Render_m89E47C6691EDC74387D40562DD8A0043CAB5CE67 (Color32Renderer_t14E818551AA35E8EABA383D7E36281E9A5CCE8A0* __this, BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* ___0_matrix, int32_t ___1_format, String_t* ___2_content, EncodingOptions_t84F92A38829ABB6416A1FCE75DEB61FECF8AFA2D* ___3_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* V_3 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_0 = ___0_matrix;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = BitMatrix_get_Width_m22AD26EA7ECA9A3FB530324C455CFCB8BB3BBE54_inline(L_0, NULL);
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_2 = ___0_matrix;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = BitMatrix_get_Height_m5921CB5056D46A8C528B01A06CD202F3097BB792_inline(L_2, NULL);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_4 = (Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259*)SZArrayNew(Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply(L_1, L_3)));
		V_0 = L_4;
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_5 = ___0_matrix;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = BitMatrix_get_Height_m5921CB5056D46A8C528B01A06CD202F3097BB792_inline(L_5, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		V_2 = 0;
		goto IL_00e2;
	}

IL_0023:
	{
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_7 = ___0_matrix;
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_7);
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_10;
		L_10 = BitMatrix_getRow_m4D4F0FAEDC2FF3561EE6511FFF1472C225C17185(L_7, ((int32_t)il2cpp_codegen_subtract(L_8, L_9)), (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7*)NULL, NULL);
		V_3 = L_10;
		BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* L_11 = V_3;
		NullCheck(L_11);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12;
		L_12 = BitArray_get_Array_m514E69EBF1161AF51796B60EB4AB1C9C949E0C9A_inline(L_11, NULL);
		V_4 = L_12;
		V_5 = 0;
		goto IL_00d3;
	}

IL_003e:
	{
		V_6 = 0;
		goto IL_00c4;
	}

IL_0046:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = V_4;
		int32_t L_14 = V_5;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = V_6;
		V_7 = ((int32_t)(((int32_t)(L_16>>((int32_t)(L_17&((int32_t)31)))))&1));
		int32_t L_18 = V_7;
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_008a;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_19 = V_0;
		int32_t L_20 = V_2;
		int32_t L_21 = V_5;
		int32_t L_22 = V_6;
		NullCheck(L_19);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_23;
		memset((&L_23), 0, sizeof(L_23));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_23), (uint8_t)0, (uint8_t)0, (uint8_t)0, (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)256), L_20)), ((int32_t)il2cpp_codegen_multiply(L_21, ((int32_t)32))))), L_22))))) = L_23;
		goto IL_00be;
	}

IL_008a:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_24 = V_0;
		int32_t L_25 = V_2;
		int32_t L_26 = V_5;
		int32_t L_27 = V_6;
		NullCheck(L_24);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_28;
		memset((&L_28), 0, sizeof(L_28));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_28), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		*(Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B*)((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)256), L_25)), ((int32_t)il2cpp_codegen_multiply(L_26, ((int32_t)32))))), L_27))))) = L_28;
	}

IL_00be:
	{
		int32_t L_29 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00c4:
	{
		int32_t L_30 = V_6;
		if ((((int32_t)L_30) < ((int32_t)((int32_t)32))))
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00d3:
	{
		int32_t L_32 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = V_4;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00e2:
	{
		int32_t L_35 = V_2;
		BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* L_36 = ___0_matrix;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = BitMatrix_get_Height_m5921CB5056D46A8C528B01A06CD202F3097BB792_inline(L_36, NULL);
		if ((((int32_t)L_35) < ((int32_t)L_37)))
		{
			goto IL_0023;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_38 = V_0;
		return L_38;
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
// System.Void ZXing.WriterException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterException__ctor_m104829F19D8B6B64FE58CF69E77750E6D5535CF9 (WriterException_tEFA134561EB29AD1C3C58433F3C6A05F53A828C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		return;
	}
}
// System.Void ZXing.WriterException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterException__ctor_mE42A6BBAA5852F488EFE0E8ECB2CF3F359D0B8F4 (WriterException_tEFA134561EB29AD1C3C58433F3C6A05F53A828C4* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		return;
	}
}
// System.Void ZXing.WriterException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterException__ctor_mB9527576EB0A0076248FB0E8182AD9871C8AA77C (WriterException_tEFA134561EB29AD1C3C58433F3C6A05F53A828C4* __this, String_t* ___0_message, Exception_t* ___1_innerExc, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_innerExc;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteMatrix_t8F32ACBDCDF86856A438EC5580977D8CA452548D* QRCode_get_Matrix_mC9C3EC7F608B8C47FFDE0B14E3C3424B52F9A22F_inline (QRCode_t54FE9443E07A2B3A9C97404E4F8F8A01E0AB311E* __this, const RuntimeMethod* method) 
{
	{
		ByteMatrix_t8F32ACBDCDF86856A438EC5580977D8CA452548D* L_0 = __this->___U3CMatrixU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteMatrix_get_Width_mB07D527D6BA9290ED3CC7EC026EC5E5CC17EF430_inline (ByteMatrix_t8F32ACBDCDF86856A438EC5580977D8CA452548D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___width_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ByteMatrix_get_Height_m35C9F09824FBFCB301BC3539F5D09C946D48772E_inline (ByteMatrix_t8F32ACBDCDF86856A438EC5580977D8CA452548D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___height_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B Color32_op_Implicit_m79AF5E0BDE9CE041CAC4D89CBFA66E71C6DD1B70_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_c;
		float L_1 = L_0.___r_0;
		float L_2;
		L_2 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_1, NULL);
		float L_3;
		L_3 = bankers_roundf(((float)il2cpp_codegen_multiply(L_2, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_c;
		float L_5 = L_4.___g_1;
		float L_6;
		L_6 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_5, NULL);
		float L_7;
		L_7 = bankers_roundf(((float)il2cpp_codegen_multiply(L_6, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_c;
		float L_9 = L_8.___b_2;
		float L_10;
		L_10 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_9, NULL);
		float L_11;
		L_11 = bankers_roundf(((float)il2cpp_codegen_multiply(L_10, (255.0f))));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_c;
		float L_13 = L_12.___a_3;
		float L_14;
		L_14 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_13, NULL);
		float L_15;
		L_15 = bankers_roundf(((float)il2cpp_codegen_multiply(L_14, (255.0f))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_16), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_3), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_7), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_11), (uint8_t)il2cpp_codegen_cast_floating_point<uint8_t, int32_t, float>(L_15), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0065;
	}

IL_0065:
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SvgRenderer_set_Foreground_m19624B5DA56218BEA3BC4B79E757884841A1B357_inline (SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_value;
		__this->___U3CForegroundU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___0_r, uint8_t ___1_g, uint8_t ___2_b, uint8_t ___3_a, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___0_r;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___1_g;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___2_b;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___3_a;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SvgRenderer_set_Background_m1180E0E278C061CC8AF8627D67316C3A4E67E8A0_inline (SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_value, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_value;
		__this->___U3CBackgroundU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitMatrix_get_Width_m22AD26EA7ECA9A3FB530324C455CFCB8BB3BBE54_inline (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___width_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitMatrix_get_Height_m5921CB5056D46A8C528B01A06CD202F3097BB792_inline (BitMatrix_t778C9E1BB9EA507245662AD1079B552BC23BCB91* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___height_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B SvgRenderer_get_Background_mA786BA9EB5BC3DE4E886AFFBEAD50324CF98E983_inline (SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60* __this, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = __this->___U3CBackgroundU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_c;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___0_c;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___0_c;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___0_c;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B SvgRenderer_get_Foreground_mE72A8266FE1FEDD4E01EE2C7B8EE1E8A731C9C12_inline (SvgRenderer_t856F5A64939A487B4F99D5F74A112C652BD24E60* __this, const RuntimeMethod* method) 
{
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = __this->___U3CForegroundU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Math_Round_m0BD20E38C73A9283F2EC89E6DF9CCC80A7752C38_inline (double ___0_value, int32_t ___1_digits, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___0_value;
		int32_t L_1 = ___1_digits;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Round_m8DB2F61CB73B9E71E54149290ABD5DC8A68890D1(L_0, L_1, 0, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Result_set_Text_m0D9F537DDA607D94327CFBEF56ADE0EE0B975F88_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___U3CTextU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Result_set_RawBytes_m53C58BCBE3661C41D30B738AD17F0E7BAD3A1F0E_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		__this->___U3CRawBytesU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRawBytesU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Result_set_ResultPoints_mF62AA333AA342D1959D5DDDDE9D8D88BB114240D_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* ___0_value, const RuntimeMethod* method) 
{
	{
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_0 = ___0_value;
		__this->___U3CResultPointsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultPointsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Result_set_BarcodeFormat_m546DC86BEF0CB06002D6CA244700B01F3B227E76_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CBarcodeFormatU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Result_set_ResultMetadata_mF444AF5A54D471D27875F2142156B363BDA86022_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CResultMetadataU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CResultMetadataU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Result_set_Timestamp_mBA61D16B2FF63701E76DDE2EFB75EF48642684BF_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, int64_t ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___0_value;
		__this->___U3CTimestampU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Result_get_ResultMetadata_m76F9383FC2A3FF66F29D4EE0F4A9FAECD6AC3F58_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CResultMetadataU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* Result_get_ResultPoints_m98C7CADDAC629C1618DAE400297F3B7ABE7F40F1_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) 
{
	{
		ResultPointU5BU5D_t98ED51EB991985ED1768D88FD09F826256CB6CB0* L_0 = __this->___U3CResultPointsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Result_get_Text_m65A52D001505F5311D513F3CDD86D3BB72103E89_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Result_get_RawBytes_m696914EEE6115066285985EE3A03A788ACBE02CD_inline (Result_tF578DE3ECC8EB51CFB66605B8ADCD433C837EBAF* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___U3CRawBytesU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* BitArray_get_Array_m514E69EBF1161AF51796B60EB4AB1C9C949E0C9A_inline (BitArray_t8EAEFC38498D7E15621241F160A7E05BD5F9F3D7* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___bits_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m9698075D0C5F788A3B6AEBF1ABDFACCAB5854E90_gshared_inline (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m415A21240AEF58C2E0A2FBA97E2BB75637781DB5_gshared_inline (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
