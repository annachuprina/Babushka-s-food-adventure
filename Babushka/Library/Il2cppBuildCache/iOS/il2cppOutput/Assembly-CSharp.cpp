#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t2B519B7CD269238D4C71A96E4B005CF88488FACA;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.EventSystems.RaycastResult[]
struct RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem[]
struct DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// CameraSwitch
struct CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// ChangeScene
struct ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Dish2D
struct Dish2D_t73FF6CAEEADD1B279CD96DCE3EF4B62EA9067BCA;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// LevelReset
struct LevelReset_t5AF897661BE368D93B6E70E28DEC6F45A5B79905;
// LifeTracker
struct LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuSceneLoader
struct MenuSceneLoader_t0D08CE40978A1EAF3F262A54E41A1C6F8FDC3FC2;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MoveControl_Gesture
struct MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243;
// MoveScript_Button
struct MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityStandardAssets.SceneUtils.ParticleSceneControls
struct ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// UnityStandardAssets.Effects.ParticleSystemMultiplier
struct ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646;
// PauseMenu
struct PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityStandardAssets.SceneUtils.PlaceTargetWithMouse
struct PlaceTargetWithMouse_t384CCC910074BE48EFA5F779E972A03374E97310;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SceneAndURLLoader
struct SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityStandardAssets.SceneUtils.SlowMoButton
struct SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E;
// Spawn_items
struct Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TimeTracker
struct TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212;
// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// endText
struct endText_t8F671A2CB00E79B2059B7F43FC0230D83BAA0D80;
// statsTracker
struct statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem
struct DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B;
// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList
struct DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E;
// Spawn_items/<Spawn>d__15
struct U3CSpawnU3Ed__15_t5EC3F5A92B8730CD59D9BC1F4A11433B4C08D4C3;
// TimeTracker/<TimerRoutine>d__9
struct U3CTimerRoutineU3Ed__9_tDC526327E767CA60CCDEF88AF35006B69C2D70B2;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075;

IL2CPP_EXTERN_C RuntimeClass* CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSpawnU3Ed__15_t5EC3F5A92B8730CD59D9BC1F4A11433B4C08D4C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTimerRoutineU3Ed__9_tDC526327E767CA60CCDEF88AF35006B69C2D70B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0AD3FEEE763C75B6DC34EB1D200A130E476833FF;
IL2CPP_EXTERN_C String_t* _stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9;
IL2CPP_EXTERN_C String_t* _stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A;
IL2CPP_EXTERN_C String_t* _stringLiteral1034D8B07E225029FF095B4DB108E1A8C4087186;
IL2CPP_EXTERN_C String_t* _stringLiteral1591D8BA06E9A684F59CFE81B59971D7B35A559F;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2CF5186F7B4192709D79E1505C289FAD1C871EC5;
IL2CPP_EXTERN_C String_t* _stringLiteral2F95E57697BB41E99DE855093AF6D5B53CF4A332;
IL2CPP_EXTERN_C String_t* _stringLiteral517D808350B69B15A82D8E496BE58CA6EA7F9E01;
IL2CPP_EXTERN_C String_t* _stringLiteral5779B815CB6D39750E39B7B01772582CFE658A21;
IL2CPP_EXTERN_C String_t* _stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF;
IL2CPP_EXTERN_C String_t* _stringLiteral73124E9790094D4B33B67A45B9974829E69AE9AB;
IL2CPP_EXTERN_C String_t* _stringLiteral793124C2C69F7C5AD956B8E7C24C95DFD06780A5;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral85AB632D8912311A63D1634F5AF4DD67389B2426;
IL2CPP_EXTERN_C String_t* _stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2;
IL2CPP_EXTERN_C String_t* _stringLiteral9820C3496732D02B184D4FDD866A6B0F158AEC42;
IL2CPP_EXTERN_C String_t* _stringLiteralA8239D7D184C3B9CB62A6BDF5686BE90EB8CF240;
IL2CPP_EXTERN_C String_t* _stringLiteralAB4D84F7C62E7D302A9A088AA8E292DF6A477309;
IL2CPP_EXTERN_C String_t* _stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF;
IL2CPP_EXTERN_C String_t* _stringLiteralB678AF03FCDF1FE0331A041A507ED15FF29B871D;
IL2CPP_EXTERN_C String_t* _stringLiteralC3C8A6D75E0496334E5CB7C59886BB5A4E44DAF1;
IL2CPP_EXTERN_C String_t* _stringLiteralE76182B21D2403F531AD0C0985D5DEBD9FB5E555;
IL2CPP_EXTERN_C String_t* _stringLiteralF2F948238B10213B1CD11691301D4D2307E8E5EE;
IL2CPP_EXTERN_C String_t* _stringLiteralF4BBD73966B377764504FFCFA5EC00884CD2CCA1;
IL2CPP_EXTERN_C String_t* _stringLiteralFFBA7DAADA6B4A27D35056583285A70EA0D38DCD;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisPauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_m98153975CAC553ED05CBA0FDC20E56CCF659A615_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_mC10A47F63047FC771E4FD5AF00284CEF8D43055F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m776A2FA26D0AA2185665AC714486953B3DBA5D9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParticleSceneControls_Next_m4AB6C18CBE0148C4D354FDCAD5EE45D472577B8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ParticleSceneControls_Previous_mC2FE564898A6019238C5611E63B5EC3581CEAA63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSpawnU3Ed__15_System_Collections_IEnumerator_Reset_m538ACD5FEED144BC983BCC2045ED3C4B1B095A2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTimerRoutineU3Ed__9_System_Collections_IEnumerator_Reset_mC0866412E791605261958BE0C35DB67268D3DD4E_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____items_1)); }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* get__items_1() const { return ____items_1; }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_StaticFields, ____emptyArray_5)); }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RaycastResultU5BU5D_t55B9DF597EFA3BE063604C0950E370D850283B9D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____items_1)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList
struct DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E  : public RuntimeObject
{
public:
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem[] UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList::items
	DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* ___items_0;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E, ___items_0)); }
	inline DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* get_items_0() const { return ___items_0; }
	inline DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}
};


// Spawn_items/<Spawn>d__15
struct U3CSpawnU3Ed__15_t5EC3F5A92B8730CD59D9BC1F4A11433B4C08D4C3  : public RuntimeObject
{
public:
	// System.Int32 Spawn_items/<Spawn>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Spawn_items/<Spawn>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Spawn_items Spawn_items/<Spawn>d__15::<>4__this
	Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSpawnU3Ed__15_t5EC3F5A92B8730CD59D9BC1F4A11433B4C08D4C3, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSpawnU3Ed__15_t5EC3F5A92B8730CD59D9BC1F4A11433B4C08D4C3, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSpawnU3Ed__15_t5EC3F5A92B8730CD59D9BC1F4A11433B4C08D4C3, ___U3CU3E4__this_2)); }
	inline Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TimeTracker/<TimerRoutine>d__9
struct U3CTimerRoutineU3Ed__9_tDC526327E767CA60CCDEF88AF35006B69C2D70B2  : public RuntimeObject
{
public:
	// System.Int32 TimeTracker/<TimerRoutine>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TimeTracker/<TimerRoutine>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTimerRoutineU3Ed__9_tDC526327E767CA60CCDEF88AF35006B69C2D70B2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTimerRoutineU3Ed__9_tDC526327E767CA60CCDEF88AF35006B69C2D70B2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/EmissionModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/EmissionModule
struct EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Origin_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6, ___m_Direction_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// UnityEngine.UI.GraphicRaycaster/BlockingObjects
struct BlockingObjects_t3E2C52C921D1DE2C3EDB3FBC0685E319727BE810 
{
public:
	// System.Int32 UnityEngine.UI.GraphicRaycaster/BlockingObjects::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlockingObjects_t3E2C52C921D1DE2C3EDB3FBC0685E319727BE810, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.SceneUtils.ParticleSceneControls/AlignMode
struct AlignMode_tF0D113E79436A0DC5CF24C6BABE7EEEE0F25CF2F 
{
public:
	// System.Int32 UnityStandardAssets.SceneUtils.ParticleSceneControls/AlignMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AlignMode_tF0D113E79436A0DC5CF24C6BABE7EEEE0F25CF2F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityStandardAssets.SceneUtils.ParticleSceneControls/Mode
struct Mode_tD50EE54888EE10F71F5224B8057142A70BB88532 
{
public:
	// System.Int32 UnityStandardAssets.SceneUtils.ParticleSceneControls/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_tD50EE54888EE10F71F5224B8057142A70BB88532, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Toggle/ToggleTransition
struct ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167 
{
public:
	// System.Int32 UnityEngine.UI.Toggle/ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t4D1AA30F2BA24242EB9D1DD2E3DF839F0BAC5167, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem
struct DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B  : public RuntimeObject
{
public:
	// UnityEngine.Transform UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_0;
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/Mode UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::mode
	int32_t ___mode_1;
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/AlignMode UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::align
	int32_t ___align_2;
	// System.Int32 UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::maxCount
	int32_t ___maxCount_3;
	// System.Single UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::minDist
	float ___minDist_4;
	// System.Int32 UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::camOffset
	int32_t ___camOffset_5;
	// System.String UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::instructionText
	String_t* ___instructionText_6;

public:
	inline static int32_t get_offset_of_transform_0() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B, ___transform_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_0() const { return ___transform_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_0() { return &___transform_0; }
	inline void set_transform_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_0), (void*)value);
	}

	inline static int32_t get_offset_of_mode_1() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B, ___mode_1)); }
	inline int32_t get_mode_1() const { return ___mode_1; }
	inline int32_t* get_address_of_mode_1() { return &___mode_1; }
	inline void set_mode_1(int32_t value)
	{
		___mode_1 = value;
	}

	inline static int32_t get_offset_of_align_2() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B, ___align_2)); }
	inline int32_t get_align_2() const { return ___align_2; }
	inline int32_t* get_address_of_align_2() { return &___align_2; }
	inline void set_align_2(int32_t value)
	{
		___align_2 = value;
	}

	inline static int32_t get_offset_of_maxCount_3() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B, ___maxCount_3)); }
	inline int32_t get_maxCount_3() const { return ___maxCount_3; }
	inline int32_t* get_address_of_maxCount_3() { return &___maxCount_3; }
	inline void set_maxCount_3(int32_t value)
	{
		___maxCount_3 = value;
	}

	inline static int32_t get_offset_of_minDist_4() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B, ___minDist_4)); }
	inline float get_minDist_4() const { return ___minDist_4; }
	inline float* get_address_of_minDist_4() { return &___minDist_4; }
	inline void set_minDist_4(float value)
	{
		___minDist_4 = value;
	}

	inline static int32_t get_offset_of_camOffset_5() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B, ___camOffset_5)); }
	inline int32_t get_camOffset_5() const { return ___camOffset_5; }
	inline int32_t* get_address_of_camOffset_5() { return &___camOffset_5; }
	inline void set_camOffset_5(int32_t value)
	{
		___camOffset_5 = value;
	}

	inline static int32_t get_offset_of_instructionText_6() { return static_cast<int32_t>(offsetof(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B, ___instructionText_6)); }
	inline String_t* get_instructionText_6() const { return ___instructionText_6; }
	inline String_t** get_address_of_instructionText_6() { return &___instructionText_6; }
	inline void set_instructionText_6(String_t* value)
	{
		___instructionText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instructionText_6), (void*)value);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// CameraSwitch
struct CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] CameraSwitch::objects
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___objects_4;
	// UnityEngine.UI.Text CameraSwitch::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_5;
	// System.Int32 CameraSwitch::m_CurrentActiveObject
	int32_t ___m_CurrentActiveObject_6;

public:
	inline static int32_t get_offset_of_objects_4() { return static_cast<int32_t>(offsetof(CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D, ___objects_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_objects_4() const { return ___objects_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_objects_4() { return &___objects_4; }
	inline void set_objects_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___objects_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objects_4), (void*)value);
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D, ___text_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_5() const { return ___text_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentActiveObject_6() { return static_cast<int32_t>(offsetof(CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D, ___m_CurrentActiveObject_6)); }
	inline int32_t get_m_CurrentActiveObject_6() const { return ___m_CurrentActiveObject_6; }
	inline int32_t* get_address_of_m_CurrentActiveObject_6() { return &___m_CurrentActiveObject_6; }
	inline void set_m_CurrentActiveObject_6(int32_t value)
	{
		___m_CurrentActiveObject_6 = value;
	}
};


// ChangeScene
struct ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Dish2D
struct Dish2D_t73FF6CAEEADD1B279CD96DCE3EF4B62EA9067BCA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean Dish2D::canBeGrabbed
	bool ___canBeGrabbed_4;
	// UnityEngine.Vector3 Dish2D::screen
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___screen_5;

public:
	inline static int32_t get_offset_of_canBeGrabbed_4() { return static_cast<int32_t>(offsetof(Dish2D_t73FF6CAEEADD1B279CD96DCE3EF4B62EA9067BCA, ___canBeGrabbed_4)); }
	inline bool get_canBeGrabbed_4() const { return ___canBeGrabbed_4; }
	inline bool* get_address_of_canBeGrabbed_4() { return &___canBeGrabbed_4; }
	inline void set_canBeGrabbed_4(bool value)
	{
		___canBeGrabbed_4 = value;
	}

	inline static int32_t get_offset_of_screen_5() { return static_cast<int32_t>(offsetof(Dish2D_t73FF6CAEEADD1B279CD96DCE3EF4B62EA9067BCA, ___screen_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_screen_5() const { return ___screen_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_screen_5() { return &___screen_5; }
	inline void set_screen_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___screen_5 = value;
	}
};


// LevelReset
struct LevelReset_t5AF897661BE368D93B6E70E28DEC6F45A5B79905  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// LifeTracker
struct LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text LifeTracker::lifeText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___lifeText_5;

public:
	inline static int32_t get_offset_of_lifeText_5() { return static_cast<int32_t>(offsetof(LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7, ___lifeText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_lifeText_5() const { return ___lifeText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_lifeText_5() { return &___lifeText_5; }
	inline void set_lifeText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___lifeText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lifeText_5), (void*)value);
	}
};

struct LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_StaticFields
{
public:
	// System.Int32 LifeTracker::life
	int32_t ___life_4;

public:
	inline static int32_t get_offset_of_life_4() { return static_cast<int32_t>(offsetof(LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_StaticFields, ___life_4)); }
	inline int32_t get_life_4() const { return ___life_4; }
	inline int32_t* get_address_of_life_4() { return &___life_4; }
	inline void set_life_4(int32_t value)
	{
		___life_4 = value;
	}
};


// MenuSceneLoader
struct MenuSceneLoader_t0D08CE40978A1EAF3F262A54E41A1C6F8FDC3FC2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject MenuSceneLoader::menuUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___menuUI_4;
	// UnityEngine.GameObject MenuSceneLoader::m_Go
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Go_5;

public:
	inline static int32_t get_offset_of_menuUI_4() { return static_cast<int32_t>(offsetof(MenuSceneLoader_t0D08CE40978A1EAF3F262A54E41A1C6F8FDC3FC2, ___menuUI_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_menuUI_4() const { return ___menuUI_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_menuUI_4() { return &___menuUI_4; }
	inline void set_menuUI_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___menuUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menuUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Go_5() { return static_cast<int32_t>(offsetof(MenuSceneLoader_t0D08CE40978A1EAF3F262A54E41A1C6F8FDC3FC2, ___m_Go_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Go_5() const { return ___m_Go_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Go_5() { return &___m_Go_5; }
	inline void set_m_Go_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Go_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Go_5), (void*)value);
	}
};


// MoveControl_Gesture
struct MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody2D MoveControl_Gesture::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_4;
	// UnityEngine.Vector2 MoveControl_Gesture::movement
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___movement_5;
	// UnityEngine.Vector2 MoveControl_Gesture::screenBounds
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenBounds_6;
	// System.Single MoveControl_Gesture::dirX
	float ___dirX_7;
	// System.Single MoveControl_Gesture::maxX
	float ___maxX_8;
	// System.Single MoveControl_Gesture::minX
	float ___minX_9;
	// System.Single MoveControl_Gesture::movementSpeed
	float ___movementSpeed_10;
	// UnityEngine.Animator MoveControl_Gesture::babushka_animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___babushka_animator_12;
	// UnityEngine.UI.Text MoveControl_Gesture::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_13;
	// UnityEngine.UI.Text MoveControl_Gesture::timeText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timeText_14;

public:
	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243, ___rb_4)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_4() const { return ___rb_4; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_4), (void*)value);
	}

	inline static int32_t get_offset_of_movement_5() { return static_cast<int32_t>(offsetof(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243, ___movement_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_movement_5() const { return ___movement_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_movement_5() { return &___movement_5; }
	inline void set_movement_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___movement_5 = value;
	}

	inline static int32_t get_offset_of_screenBounds_6() { return static_cast<int32_t>(offsetof(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243, ___screenBounds_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenBounds_6() const { return ___screenBounds_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenBounds_6() { return &___screenBounds_6; }
	inline void set_screenBounds_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenBounds_6 = value;
	}

	inline static int32_t get_offset_of_dirX_7() { return static_cast<int32_t>(offsetof(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243, ___dirX_7)); }
	inline float get_dirX_7() const { return ___dirX_7; }
	inline float* get_address_of_dirX_7() { return &___dirX_7; }
	inline void set_dirX_7(float value)
	{
		___dirX_7 = value;
	}

	inline static int32_t get_offset_of_maxX_8() { return static_cast<int32_t>(offsetof(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243, ___maxX_8)); }
	inline float get_maxX_8() const { return ___maxX_8; }
	inline float* get_address_of_maxX_8() { return &___maxX_8; }
	inline void set_maxX_8(float value)
	{
		___maxX_8 = value;
	}

	inline static int32_t get_offset_of_minX_9() { return static_cast<int32_t>(offsetof(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243, ___minX_9)); }
	inline float get_minX_9() const { return ___minX_9; }
	inline float* get_address_of_minX_9() { return &___minX_9; }
	inline void set_minX_9(float value)
	{
		___minX_9 = value;
	}

	inline static int32_t get_offset_of_movementSpeed_10() { return static_cast<int32_t>(offsetof(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243, ___movementSpeed_10)); }
	inline float get_movementSpeed_10() const { return ___movementSpeed_10; }
	inline float* get_address_of_movementSpeed_10() { return &___movementSpeed_10; }
	inline void set_movementSpeed_10(float value)
	{
		___movementSpeed_10 = value;
	}

	inline static int32_t get_offset_of_babushka_animator_12() { return static_cast<int32_t>(offsetof(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243, ___babushka_animator_12)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_babushka_animator_12() const { return ___babushka_animator_12; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_babushka_animator_12() { return &___babushka_animator_12; }
	inline void set_babushka_animator_12(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___babushka_animator_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___babushka_animator_12), (void*)value);
	}

	inline static int32_t get_offset_of_scoreText_13() { return static_cast<int32_t>(offsetof(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243, ___scoreText_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_13() const { return ___scoreText_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_13() { return &___scoreText_13; }
	inline void set_scoreText_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_13), (void*)value);
	}

	inline static int32_t get_offset_of_timeText_14() { return static_cast<int32_t>(offsetof(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243, ___timeText_14)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timeText_14() const { return ___timeText_14; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timeText_14() { return &___timeText_14; }
	inline void set_timeText_14(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timeText_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeText_14), (void*)value);
	}
};

struct MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_StaticFields
{
public:
	// System.Int32 MoveControl_Gesture::score
	int32_t ___score_11;

public:
	inline static int32_t get_offset_of_score_11() { return static_cast<int32_t>(offsetof(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_StaticFields, ___score_11)); }
	inline int32_t get_score_11() const { return ___score_11; }
	inline int32_t* get_address_of_score_11() { return &___score_11; }
	inline void set_score_11(int32_t value)
	{
		___score_11 = value;
	}
};


// MoveScript_Button
struct MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single MoveScript_Button::dirX
	float ___dirX_4;
	// System.Single MoveScript_Button::moveSpeed
	float ___moveSpeed_5;
	// UnityEngine.Rigidbody2D MoveScript_Button::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_6;
	// UnityEngine.UI.Text MoveScript_Button::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_8;
	// UnityEngine.UI.Text MoveScript_Button::timeText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timeText_9;
	// UnityEngine.Animator MoveScript_Button::babushka_animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___babushka_animator_10;

public:
	inline static int32_t get_offset_of_dirX_4() { return static_cast<int32_t>(offsetof(MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA, ___dirX_4)); }
	inline float get_dirX_4() const { return ___dirX_4; }
	inline float* get_address_of_dirX_4() { return &___dirX_4; }
	inline void set_dirX_4(float value)
	{
		___dirX_4 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_5() { return static_cast<int32_t>(offsetof(MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA, ___moveSpeed_5)); }
	inline float get_moveSpeed_5() const { return ___moveSpeed_5; }
	inline float* get_address_of_moveSpeed_5() { return &___moveSpeed_5; }
	inline void set_moveSpeed_5(float value)
	{
		___moveSpeed_5 = value;
	}

	inline static int32_t get_offset_of_rb_6() { return static_cast<int32_t>(offsetof(MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA, ___rb_6)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_6() const { return ___rb_6; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_6() { return &___rb_6; }
	inline void set_rb_6(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_6), (void*)value);
	}

	inline static int32_t get_offset_of_scoreText_8() { return static_cast<int32_t>(offsetof(MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA, ___scoreText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_8() const { return ___scoreText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_8() { return &___scoreText_8; }
	inline void set_scoreText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_8), (void*)value);
	}

	inline static int32_t get_offset_of_timeText_9() { return static_cast<int32_t>(offsetof(MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA, ___timeText_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timeText_9() const { return ___timeText_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timeText_9() { return &___timeText_9; }
	inline void set_timeText_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timeText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeText_9), (void*)value);
	}

	inline static int32_t get_offset_of_babushka_animator_10() { return static_cast<int32_t>(offsetof(MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA, ___babushka_animator_10)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_babushka_animator_10() const { return ___babushka_animator_10; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_babushka_animator_10() { return &___babushka_animator_10; }
	inline void set_babushka_animator_10(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___babushka_animator_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___babushka_animator_10), (void*)value);
	}
};

struct MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA_StaticFields
{
public:
	// System.Int32 MoveScript_Button::score
	int32_t ___score_7;

public:
	inline static int32_t get_offset_of_score_7() { return static_cast<int32_t>(offsetof(MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA_StaticFields, ___score_7)); }
	inline int32_t get_score_7() const { return ___score_7; }
	inline int32_t* get_address_of_score_7() { return &___score_7; }
	inline void set_score_7(int32_t value)
	{
		___score_7 = value;
	}
};


// UnityStandardAssets.SceneUtils.ParticleSceneControls
struct ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList UnityStandardAssets.SceneUtils.ParticleSceneControls::demoParticles
	DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E * ___demoParticles_4;
	// System.Single UnityStandardAssets.SceneUtils.ParticleSceneControls::spawnOffset
	float ___spawnOffset_5;
	// System.Single UnityStandardAssets.SceneUtils.ParticleSceneControls::multiply
	float ___multiply_6;
	// System.Boolean UnityStandardAssets.SceneUtils.ParticleSceneControls::clearOnChange
	bool ___clearOnChange_7;
	// UnityEngine.UI.Text UnityStandardAssets.SceneUtils.ParticleSceneControls::titleText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___titleText_8;
	// UnityEngine.Transform UnityStandardAssets.SceneUtils.ParticleSceneControls::sceneCamera
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___sceneCamera_9;
	// UnityEngine.UI.Text UnityStandardAssets.SceneUtils.ParticleSceneControls::instructionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___instructionText_10;
	// UnityEngine.UI.Button UnityStandardAssets.SceneUtils.ParticleSceneControls::previousButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___previousButton_11;
	// UnityEngine.UI.Button UnityStandardAssets.SceneUtils.ParticleSceneControls::nextButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___nextButton_12;
	// UnityEngine.UI.GraphicRaycaster UnityStandardAssets.SceneUtils.ParticleSceneControls::graphicRaycaster
	GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6 * ___graphicRaycaster_13;
	// UnityEngine.EventSystems.EventSystem UnityStandardAssets.SceneUtils.ParticleSceneControls::eventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem_14;
	// UnityStandardAssets.Effects.ParticleSystemMultiplier UnityStandardAssets.SceneUtils.ParticleSceneControls::m_ParticleMultiplier
	ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * ___m_ParticleMultiplier_15;
	// System.Collections.Generic.List`1<UnityEngine.Transform> UnityStandardAssets.SceneUtils.ParticleSceneControls::m_CurrentParticleList
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___m_CurrentParticleList_16;
	// UnityEngine.Transform UnityStandardAssets.SceneUtils.ParticleSceneControls::m_Instance
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_Instance_17;
	// UnityEngine.Vector3 UnityStandardAssets.SceneUtils.ParticleSceneControls::m_CamOffsetVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_CamOffsetVelocity_19;
	// UnityEngine.Vector3 UnityStandardAssets.SceneUtils.ParticleSceneControls::m_LastPos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_LastPos_20;

public:
	inline static int32_t get_offset_of_demoParticles_4() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___demoParticles_4)); }
	inline DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E * get_demoParticles_4() const { return ___demoParticles_4; }
	inline DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E ** get_address_of_demoParticles_4() { return &___demoParticles_4; }
	inline void set_demoParticles_4(DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E * value)
	{
		___demoParticles_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___demoParticles_4), (void*)value);
	}

	inline static int32_t get_offset_of_spawnOffset_5() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___spawnOffset_5)); }
	inline float get_spawnOffset_5() const { return ___spawnOffset_5; }
	inline float* get_address_of_spawnOffset_5() { return &___spawnOffset_5; }
	inline void set_spawnOffset_5(float value)
	{
		___spawnOffset_5 = value;
	}

	inline static int32_t get_offset_of_multiply_6() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___multiply_6)); }
	inline float get_multiply_6() const { return ___multiply_6; }
	inline float* get_address_of_multiply_6() { return &___multiply_6; }
	inline void set_multiply_6(float value)
	{
		___multiply_6 = value;
	}

	inline static int32_t get_offset_of_clearOnChange_7() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___clearOnChange_7)); }
	inline bool get_clearOnChange_7() const { return ___clearOnChange_7; }
	inline bool* get_address_of_clearOnChange_7() { return &___clearOnChange_7; }
	inline void set_clearOnChange_7(bool value)
	{
		___clearOnChange_7 = value;
	}

	inline static int32_t get_offset_of_titleText_8() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___titleText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_titleText_8() const { return ___titleText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_titleText_8() { return &___titleText_8; }
	inline void set_titleText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___titleText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___titleText_8), (void*)value);
	}

	inline static int32_t get_offset_of_sceneCamera_9() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___sceneCamera_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_sceneCamera_9() const { return ___sceneCamera_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_sceneCamera_9() { return &___sceneCamera_9; }
	inline void set_sceneCamera_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___sceneCamera_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneCamera_9), (void*)value);
	}

	inline static int32_t get_offset_of_instructionText_10() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___instructionText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_instructionText_10() const { return ___instructionText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_instructionText_10() { return &___instructionText_10; }
	inline void set_instructionText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___instructionText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instructionText_10), (void*)value);
	}

	inline static int32_t get_offset_of_previousButton_11() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___previousButton_11)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_previousButton_11() const { return ___previousButton_11; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_previousButton_11() { return &___previousButton_11; }
	inline void set_previousButton_11(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___previousButton_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousButton_11), (void*)value);
	}

	inline static int32_t get_offset_of_nextButton_12() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___nextButton_12)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_nextButton_12() const { return ___nextButton_12; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_nextButton_12() { return &___nextButton_12; }
	inline void set_nextButton_12(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___nextButton_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextButton_12), (void*)value);
	}

	inline static int32_t get_offset_of_graphicRaycaster_13() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___graphicRaycaster_13)); }
	inline GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6 * get_graphicRaycaster_13() const { return ___graphicRaycaster_13; }
	inline GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6 ** get_address_of_graphicRaycaster_13() { return &___graphicRaycaster_13; }
	inline void set_graphicRaycaster_13(GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6 * value)
	{
		___graphicRaycaster_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphicRaycaster_13), (void*)value);
	}

	inline static int32_t get_offset_of_eventSystem_14() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___eventSystem_14)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_eventSystem_14() const { return ___eventSystem_14; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_eventSystem_14() { return &___eventSystem_14; }
	inline void set_eventSystem_14(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___eventSystem_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___eventSystem_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParticleMultiplier_15() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___m_ParticleMultiplier_15)); }
	inline ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * get_m_ParticleMultiplier_15() const { return ___m_ParticleMultiplier_15; }
	inline ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 ** get_address_of_m_ParticleMultiplier_15() { return &___m_ParticleMultiplier_15; }
	inline void set_m_ParticleMultiplier_15(ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * value)
	{
		___m_ParticleMultiplier_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleMultiplier_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentParticleList_16() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___m_CurrentParticleList_16)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_m_CurrentParticleList_16() const { return ___m_CurrentParticleList_16; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_m_CurrentParticleList_16() { return &___m_CurrentParticleList_16; }
	inline void set_m_CurrentParticleList_16(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___m_CurrentParticleList_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentParticleList_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Instance_17() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___m_Instance_17)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_Instance_17() const { return ___m_Instance_17; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_Instance_17() { return &___m_Instance_17; }
	inline void set_m_Instance_17(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_Instance_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Instance_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_CamOffsetVelocity_19() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___m_CamOffsetVelocity_19)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_CamOffsetVelocity_19() const { return ___m_CamOffsetVelocity_19; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_CamOffsetVelocity_19() { return &___m_CamOffsetVelocity_19; }
	inline void set_m_CamOffsetVelocity_19(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_CamOffsetVelocity_19 = value;
	}

	inline static int32_t get_offset_of_m_LastPos_20() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246, ___m_LastPos_20)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_LastPos_20() const { return ___m_LastPos_20; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_LastPos_20() { return &___m_LastPos_20; }
	inline void set_m_LastPos_20(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_LastPos_20 = value;
	}
};

struct ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields
{
public:
	// System.Int32 UnityStandardAssets.SceneUtils.ParticleSceneControls::s_SelectedIndex
	int32_t ___s_SelectedIndex_18;
	// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem UnityStandardAssets.SceneUtils.ParticleSceneControls::s_Selected
	DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * ___s_Selected_21;

public:
	inline static int32_t get_offset_of_s_SelectedIndex_18() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields, ___s_SelectedIndex_18)); }
	inline int32_t get_s_SelectedIndex_18() const { return ___s_SelectedIndex_18; }
	inline int32_t* get_address_of_s_SelectedIndex_18() { return &___s_SelectedIndex_18; }
	inline void set_s_SelectedIndex_18(int32_t value)
	{
		___s_SelectedIndex_18 = value;
	}

	inline static int32_t get_offset_of_s_Selected_21() { return static_cast<int32_t>(offsetof(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields, ___s_Selected_21)); }
	inline DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * get_s_Selected_21() const { return ___s_Selected_21; }
	inline DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B ** get_address_of_s_Selected_21() { return &___s_Selected_21; }
	inline void set_s_Selected_21(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * value)
	{
		___s_Selected_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selected_21), (void*)value);
	}
};


// UnityStandardAssets.Effects.ParticleSystemMultiplier
struct ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single UnityStandardAssets.Effects.ParticleSystemMultiplier::multiplier
	float ___multiplier_4;

public:
	inline static int32_t get_offset_of_multiplier_4() { return static_cast<int32_t>(offsetof(ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646, ___multiplier_4)); }
	inline float get_multiplier_4() const { return ___multiplier_4; }
	inline float* get_address_of_multiplier_4() { return &___multiplier_4; }
	inline void set_multiplier_4(float value)
	{
		___multiplier_4 = value;
	}
};


// PauseMenu
struct PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Toggle PauseMenu::m_MenuToggle
	Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * ___m_MenuToggle_4;
	// System.Single PauseMenu::m_TimeScaleRef
	float ___m_TimeScaleRef_5;
	// System.Single PauseMenu::m_VolumeRef
	float ___m_VolumeRef_6;
	// System.Boolean PauseMenu::m_Paused
	bool ___m_Paused_7;

public:
	inline static int32_t get_offset_of_m_MenuToggle_4() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___m_MenuToggle_4)); }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * get_m_MenuToggle_4() const { return ___m_MenuToggle_4; }
	inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E ** get_address_of_m_MenuToggle_4() { return &___m_MenuToggle_4; }
	inline void set_m_MenuToggle_4(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * value)
	{
		___m_MenuToggle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MenuToggle_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_TimeScaleRef_5() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___m_TimeScaleRef_5)); }
	inline float get_m_TimeScaleRef_5() const { return ___m_TimeScaleRef_5; }
	inline float* get_address_of_m_TimeScaleRef_5() { return &___m_TimeScaleRef_5; }
	inline void set_m_TimeScaleRef_5(float value)
	{
		___m_TimeScaleRef_5 = value;
	}

	inline static int32_t get_offset_of_m_VolumeRef_6() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___m_VolumeRef_6)); }
	inline float get_m_VolumeRef_6() const { return ___m_VolumeRef_6; }
	inline float* get_address_of_m_VolumeRef_6() { return &___m_VolumeRef_6; }
	inline void set_m_VolumeRef_6(float value)
	{
		___m_VolumeRef_6 = value;
	}

	inline static int32_t get_offset_of_m_Paused_7() { return static_cast<int32_t>(offsetof(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791, ___m_Paused_7)); }
	inline bool get_m_Paused_7() const { return ___m_Paused_7; }
	inline bool* get_address_of_m_Paused_7() { return &___m_Paused_7; }
	inline void set_m_Paused_7(bool value)
	{
		___m_Paused_7 = value;
	}
};


// UnityStandardAssets.SceneUtils.PlaceTargetWithMouse
struct PlaceTargetWithMouse_t384CCC910074BE48EFA5F779E972A03374E97310  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::surfaceOffset
	float ___surfaceOffset_4;
	// UnityEngine.GameObject UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::setTargetOn
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___setTargetOn_5;

public:
	inline static int32_t get_offset_of_surfaceOffset_4() { return static_cast<int32_t>(offsetof(PlaceTargetWithMouse_t384CCC910074BE48EFA5F779E972A03374E97310, ___surfaceOffset_4)); }
	inline float get_surfaceOffset_4() const { return ___surfaceOffset_4; }
	inline float* get_address_of_surfaceOffset_4() { return &___surfaceOffset_4; }
	inline void set_surfaceOffset_4(float value)
	{
		___surfaceOffset_4 = value;
	}

	inline static int32_t get_offset_of_setTargetOn_5() { return static_cast<int32_t>(offsetof(PlaceTargetWithMouse_t384CCC910074BE48EFA5F779E972A03374E97310, ___setTargetOn_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_setTargetOn_5() const { return ___setTargetOn_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_setTargetOn_5() { return &___setTargetOn_5; }
	inline void set_setTargetOn_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___setTargetOn_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setTargetOn_5), (void*)value);
	}
};


// SceneAndURLLoader
struct SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PauseMenu SceneAndURLLoader::m_PauseMenu
	PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * ___m_PauseMenu_4;

public:
	inline static int32_t get_offset_of_m_PauseMenu_4() { return static_cast<int32_t>(offsetof(SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E, ___m_PauseMenu_4)); }
	inline PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * get_m_PauseMenu_4() const { return ___m_PauseMenu_4; }
	inline PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 ** get_address_of_m_PauseMenu_4() { return &___m_PauseMenu_4; }
	inline void set_m_PauseMenu_4(PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * value)
	{
		___m_PauseMenu_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PauseMenu_4), (void*)value);
	}
};


// UnityStandardAssets.SceneUtils.SlowMoButton
struct SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Sprite UnityStandardAssets.SceneUtils.SlowMoButton::FullSpeedTex
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___FullSpeedTex_4;
	// UnityEngine.Sprite UnityStandardAssets.SceneUtils.SlowMoButton::SlowSpeedTex
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___SlowSpeedTex_5;
	// System.Single UnityStandardAssets.SceneUtils.SlowMoButton::fullSpeed
	float ___fullSpeed_6;
	// System.Single UnityStandardAssets.SceneUtils.SlowMoButton::slowSpeed
	float ___slowSpeed_7;
	// UnityEngine.UI.Button UnityStandardAssets.SceneUtils.SlowMoButton::button
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___button_8;
	// System.Boolean UnityStandardAssets.SceneUtils.SlowMoButton::m_SlowMo
	bool ___m_SlowMo_9;

public:
	inline static int32_t get_offset_of_FullSpeedTex_4() { return static_cast<int32_t>(offsetof(SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E, ___FullSpeedTex_4)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_FullSpeedTex_4() const { return ___FullSpeedTex_4; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_FullSpeedTex_4() { return &___FullSpeedTex_4; }
	inline void set_FullSpeedTex_4(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___FullSpeedTex_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullSpeedTex_4), (void*)value);
	}

	inline static int32_t get_offset_of_SlowSpeedTex_5() { return static_cast<int32_t>(offsetof(SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E, ___SlowSpeedTex_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_SlowSpeedTex_5() const { return ___SlowSpeedTex_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_SlowSpeedTex_5() { return &___SlowSpeedTex_5; }
	inline void set_SlowSpeedTex_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___SlowSpeedTex_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SlowSpeedTex_5), (void*)value);
	}

	inline static int32_t get_offset_of_fullSpeed_6() { return static_cast<int32_t>(offsetof(SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E, ___fullSpeed_6)); }
	inline float get_fullSpeed_6() const { return ___fullSpeed_6; }
	inline float* get_address_of_fullSpeed_6() { return &___fullSpeed_6; }
	inline void set_fullSpeed_6(float value)
	{
		___fullSpeed_6 = value;
	}

	inline static int32_t get_offset_of_slowSpeed_7() { return static_cast<int32_t>(offsetof(SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E, ___slowSpeed_7)); }
	inline float get_slowSpeed_7() const { return ___slowSpeed_7; }
	inline float* get_address_of_slowSpeed_7() { return &___slowSpeed_7; }
	inline void set_slowSpeed_7(float value)
	{
		___slowSpeed_7 = value;
	}

	inline static int32_t get_offset_of_button_8() { return static_cast<int32_t>(offsetof(SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E, ___button_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_button_8() const { return ___button_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_button_8() { return &___button_8; }
	inline void set_button_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___button_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_SlowMo_9() { return static_cast<int32_t>(offsetof(SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E, ___m_SlowMo_9)); }
	inline bool get_m_SlowMo_9() const { return ___m_SlowMo_9; }
	inline bool* get_address_of_m_SlowMo_9() { return &___m_SlowMo_9; }
	inline void set_m_SlowMo_9(bool value)
	{
		___m_SlowMo_9 = value;
	}
};


// Spawn_items
struct Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Spawn_items::spawnTime
	float ___spawnTime_4;
	// UnityEngine.GameObject Spawn_items::borsch
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___borsch_5;
	// UnityEngine.GameObject Spawn_items::dumplings
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___dumplings_6;
	// UnityEngine.GameObject Spawn_items::cake
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cake_7;
	// UnityEngine.GameObject Spawn_items::powerUp
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___powerUp_8;
	// UnityEngine.GameObject Spawn_items::powerDown
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___powerDown_9;
	// System.Single Spawn_items::maxX
	float ___maxX_10;
	// System.Single Spawn_items::minX
	float ___minX_11;
	// System.Int32 Spawn_items::objectsNumber
	int32_t ___objectsNumber_13;
	// System.Int32 Spawn_items::powerupNumber
	int32_t ___powerupNumber_14;
	// System.Int32 Spawn_items::powerdownNumber
	int32_t ___powerdownNumber_15;
	// System.Int32 Spawn_items::objectsCounter
	int32_t ___objectsCounter_16;
	// System.String[] Spawn_items::objectsArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___objectsArray_17;

public:
	inline static int32_t get_offset_of_spawnTime_4() { return static_cast<int32_t>(offsetof(Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E, ___spawnTime_4)); }
	inline float get_spawnTime_4() const { return ___spawnTime_4; }
	inline float* get_address_of_spawnTime_4() { return &___spawnTime_4; }
	inline void set_spawnTime_4(float value)
	{
		___spawnTime_4 = value;
	}

	inline static int32_t get_offset_of_borsch_5() { return static_cast<int32_t>(offsetof(Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E, ___borsch_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_borsch_5() const { return ___borsch_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_borsch_5() { return &___borsch_5; }
	inline void set_borsch_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___borsch_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___borsch_5), (void*)value);
	}

	inline static int32_t get_offset_of_dumplings_6() { return static_cast<int32_t>(offsetof(Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E, ___dumplings_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_dumplings_6() const { return ___dumplings_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_dumplings_6() { return &___dumplings_6; }
	inline void set_dumplings_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___dumplings_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dumplings_6), (void*)value);
	}

	inline static int32_t get_offset_of_cake_7() { return static_cast<int32_t>(offsetof(Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E, ___cake_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cake_7() const { return ___cake_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cake_7() { return &___cake_7; }
	inline void set_cake_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cake_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cake_7), (void*)value);
	}

	inline static int32_t get_offset_of_powerUp_8() { return static_cast<int32_t>(offsetof(Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E, ___powerUp_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_powerUp_8() const { return ___powerUp_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_powerUp_8() { return &___powerUp_8; }
	inline void set_powerUp_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___powerUp_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___powerUp_8), (void*)value);
	}

	inline static int32_t get_offset_of_powerDown_9() { return static_cast<int32_t>(offsetof(Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E, ___powerDown_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_powerDown_9() const { return ___powerDown_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_powerDown_9() { return &___powerDown_9; }
	inline void set_powerDown_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___powerDown_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___powerDown_9), (void*)value);
	}

	inline static int32_t get_offset_of_maxX_10() { return static_cast<int32_t>(offsetof(Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E, ___maxX_10)); }
	inline float get_maxX_10() const { return ___maxX_10; }
	inline float* get_address_of_maxX_10() { return &___maxX_10; }
	inline void set_maxX_10(float value)
	{
		___maxX_10 = value;
	}

	inline static int32_t get_offset_of_minX_11() { return static_cast<int32_t>(offsetof(Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E, ___minX_11)); }
	inline float get_minX_11() const { return ___minX_11; }
	inline float* get_address_of_minX_11() { return &___minX_11; }
	inline void set_minX_11(float value)
	{
		___minX_11 = value;
	}

	inline static int32_t get_offset_of_objectsNumber_13() { return static_cast<int32_t>(offsetof(Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E, ___objectsNumber_13)); }
	inline int32_t get_objectsNumber_13() const { return ___objectsNumber_13; }
	inline int32_t* get_address_of_objectsNumber_13() { return &___objectsNumber_13; }
	inline void set_objectsNumber_13(int32_t value)
	{
		___objectsNumber_13 = value;
	}

	inline static int32_t get_offset_of_powerupNumber_14() { return static_cast<int32_t>(offsetof(Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E, ___powerupNumber_14)); }
	inline int32_t get_powerupNumber_14() const { return ___powerupNumber_14; }
	inline int32_t* get_address_of_powerupNumber_14() { return &___powerupNumber_14; }
	inline void set_powerupNumber_14(int32_t value)
	{
		___powerupNumber_14 = value;
	}

	inline static int32_t get_offset_of_powerdownNumber_15() { return static_cast<int32_t>(offsetof(Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E, ___powerdownNumber_15)); }
	inline int32_t get_powerdownNumber_15() const { return ___powerdownNumber_15; }
	inline int32_t* get_address_of_powerdownNumber_15() { return &___powerdownNumber_15; }
	inline void set_powerdownNumber_15(int32_t value)
	{
		___powerdownNumber_15 = value;
	}

	inline static int32_t get_offset_of_objectsCounter_16() { return static_cast<int32_t>(offsetof(Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E, ___objectsCounter_16)); }
	inline int32_t get_objectsCounter_16() const { return ___objectsCounter_16; }
	inline int32_t* get_address_of_objectsCounter_16() { return &___objectsCounter_16; }
	inline void set_objectsCounter_16(int32_t value)
	{
		___objectsCounter_16 = value;
	}

	inline static int32_t get_offset_of_objectsArray_17() { return static_cast<int32_t>(offsetof(Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E, ___objectsArray_17)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_objectsArray_17() const { return ___objectsArray_17; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_objectsArray_17() { return &___objectsArray_17; }
	inline void set_objectsArray_17(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___objectsArray_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectsArray_17), (void*)value);
	}
};

struct Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E_StaticFields
{
public:
	// System.Boolean Spawn_items::increaseSpeed
	bool ___increaseSpeed_12;

public:
	inline static int32_t get_offset_of_increaseSpeed_12() { return static_cast<int32_t>(offsetof(Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E_StaticFields, ___increaseSpeed_12)); }
	inline bool get_increaseSpeed_12() const { return ___increaseSpeed_12; }
	inline bool* get_address_of_increaseSpeed_12() { return &___increaseSpeed_12; }
	inline void set_increaseSpeed_12(bool value)
	{
		___increaseSpeed_12 = value;
	}
};


// TimeTracker
struct TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields
{
public:
	// System.Single TimeTracker::Seconds
	float ___Seconds_4;
	// System.Int32 TimeTracker::Hours
	int32_t ___Hours_5;
	// System.Int32 TimeTracker::Minutes
	int32_t ___Minutes_6;
	// TimeTracker TimeTracker::instance
	TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212 * ___instance_7;

public:
	inline static int32_t get_offset_of_Seconds_4() { return static_cast<int32_t>(offsetof(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields, ___Seconds_4)); }
	inline float get_Seconds_4() const { return ___Seconds_4; }
	inline float* get_address_of_Seconds_4() { return &___Seconds_4; }
	inline void set_Seconds_4(float value)
	{
		___Seconds_4 = value;
	}

	inline static int32_t get_offset_of_Hours_5() { return static_cast<int32_t>(offsetof(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields, ___Hours_5)); }
	inline int32_t get_Hours_5() const { return ___Hours_5; }
	inline int32_t* get_address_of_Hours_5() { return &___Hours_5; }
	inline void set_Hours_5(int32_t value)
	{
		___Hours_5 = value;
	}

	inline static int32_t get_offset_of_Minutes_6() { return static_cast<int32_t>(offsetof(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields, ___Minutes_6)); }
	inline int32_t get_Minutes_6() const { return ___Minutes_6; }
	inline int32_t* get_address_of_Minutes_6() { return &___Minutes_6; }
	inline void set_Minutes_6(int32_t value)
	{
		___Minutes_6 = value;
	}

	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields, ___instance_7)); }
	inline TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212 * get_instance_7() const { return ___instance_7; }
	inline TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212 ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212 * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_7), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// endText
struct endText_t8F671A2CB00E79B2059B7F43FC0230D83BAA0D80  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text endText::scoreText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___scoreText_4;
	// UnityEngine.UI.Text endText::missedObjText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___missedObjText_5;
	// UnityEngine.UI.Text endText::powerUpText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___powerUpText_6;
	// UnityEngine.UI.Text endText::powerDownText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___powerDownText_7;
	// UnityEngine.UI.Text endText::timePlayedText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timePlayedText_8;

public:
	inline static int32_t get_offset_of_scoreText_4() { return static_cast<int32_t>(offsetof(endText_t8F671A2CB00E79B2059B7F43FC0230D83BAA0D80, ___scoreText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_scoreText_4() const { return ___scoreText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_scoreText_4() { return &___scoreText_4; }
	inline void set_scoreText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___scoreText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_4), (void*)value);
	}

	inline static int32_t get_offset_of_missedObjText_5() { return static_cast<int32_t>(offsetof(endText_t8F671A2CB00E79B2059B7F43FC0230D83BAA0D80, ___missedObjText_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_missedObjText_5() const { return ___missedObjText_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_missedObjText_5() { return &___missedObjText_5; }
	inline void set_missedObjText_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___missedObjText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___missedObjText_5), (void*)value);
	}

	inline static int32_t get_offset_of_powerUpText_6() { return static_cast<int32_t>(offsetof(endText_t8F671A2CB00E79B2059B7F43FC0230D83BAA0D80, ___powerUpText_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_powerUpText_6() const { return ___powerUpText_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_powerUpText_6() { return &___powerUpText_6; }
	inline void set_powerUpText_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___powerUpText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___powerUpText_6), (void*)value);
	}

	inline static int32_t get_offset_of_powerDownText_7() { return static_cast<int32_t>(offsetof(endText_t8F671A2CB00E79B2059B7F43FC0230D83BAA0D80, ___powerDownText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_powerDownText_7() const { return ___powerDownText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_powerDownText_7() { return &___powerDownText_7; }
	inline void set_powerDownText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___powerDownText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___powerDownText_7), (void*)value);
	}

	inline static int32_t get_offset_of_timePlayedText_8() { return static_cast<int32_t>(offsetof(endText_t8F671A2CB00E79B2059B7F43FC0230D83BAA0D80, ___timePlayedText_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timePlayedText_8() const { return ___timePlayedText_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timePlayedText_8() { return &___timePlayedText_8; }
	inline void set_timePlayedText_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timePlayedText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timePlayedText_8), (void*)value);
	}
};


// statsTracker
struct statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields
{
public:
	// System.Int32 statsTracker::missedObjects
	int32_t ___missedObjects_4;
	// System.Int32 statsTracker::collectedPowerUp
	int32_t ___collectedPowerUp_5;
	// System.Int32 statsTracker::collectedPowerDown
	int32_t ___collectedPowerDown_6;
	// System.Int32 statsTracker::score
	int32_t ___score_7;
	// System.String statsTracker::timePlayed
	String_t* ___timePlayed_8;

public:
	inline static int32_t get_offset_of_missedObjects_4() { return static_cast<int32_t>(offsetof(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields, ___missedObjects_4)); }
	inline int32_t get_missedObjects_4() const { return ___missedObjects_4; }
	inline int32_t* get_address_of_missedObjects_4() { return &___missedObjects_4; }
	inline void set_missedObjects_4(int32_t value)
	{
		___missedObjects_4 = value;
	}

	inline static int32_t get_offset_of_collectedPowerUp_5() { return static_cast<int32_t>(offsetof(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields, ___collectedPowerUp_5)); }
	inline int32_t get_collectedPowerUp_5() const { return ___collectedPowerUp_5; }
	inline int32_t* get_address_of_collectedPowerUp_5() { return &___collectedPowerUp_5; }
	inline void set_collectedPowerUp_5(int32_t value)
	{
		___collectedPowerUp_5 = value;
	}

	inline static int32_t get_offset_of_collectedPowerDown_6() { return static_cast<int32_t>(offsetof(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields, ___collectedPowerDown_6)); }
	inline int32_t get_collectedPowerDown_6() const { return ___collectedPowerDown_6; }
	inline int32_t* get_address_of_collectedPowerDown_6() { return &___collectedPowerDown_6; }
	inline void set_collectedPowerDown_6(int32_t value)
	{
		___collectedPowerDown_6 = value;
	}

	inline static int32_t get_offset_of_score_7() { return static_cast<int32_t>(offsetof(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields, ___score_7)); }
	inline int32_t get_score_7() const { return ___score_7; }
	inline int32_t* get_address_of_score_7() { return &___score_7; }
	inline void set_score_7(int32_t value)
	{
		___score_7 = value;
	}

	inline static int32_t get_offset_of_timePlayed_8() { return static_cast<int32_t>(offsetof(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields, ___timePlayed_8)); }
	inline String_t* get_timePlayed_8() const { return ___timePlayed_8; }
	inline String_t** get_address_of_timePlayed_8() { return &___timePlayed_8; }
	inline void set_timePlayed_8(String_t* value)
	{
		___timePlayed_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timePlayed_8), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::m_RootRaycaster
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___m_RootRaycaster_4;

public:
	inline static int32_t get_offset_of_m_RootRaycaster_4() { return static_cast<int32_t>(offsetof(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876, ___m_RootRaycaster_4)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_m_RootRaycaster_4() const { return ___m_RootRaycaster_4; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_m_RootRaycaster_4() { return &___m_RootRaycaster_4; }
	inline void set_m_RootRaycaster_4(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___m_RootRaycaster_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RootRaycaster_4), (void*)value);
	}
};


// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___m_DummyData_13;

public:
	inline static int32_t get_offset_of_m_SystemInputModules_4() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SystemInputModules_4)); }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * get_m_SystemInputModules_4() const { return ___m_SystemInputModules_4; }
	inline List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 ** get_address_of_m_SystemInputModules_4() { return &___m_SystemInputModules_4; }
	inline void set_m_SystemInputModules_4(List_1_t39946D94B66FAE9B0DED5D3A84AD116AF9DDDCC1 * value)
	{
		___m_SystemInputModules_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SystemInputModules_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurrentInputModule_5() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentInputModule_5)); }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * get_m_CurrentInputModule_5() const { return ___m_CurrentInputModule_5; }
	inline BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 ** get_address_of_m_CurrentInputModule_5() { return &___m_CurrentInputModule_5; }
	inline void set_m_CurrentInputModule_5(BaseInputModule_t395DEB45C225A941B2C831CBDB000A23E5899924 * value)
	{
		___m_CurrentInputModule_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentInputModule_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_FirstSelected_7() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_FirstSelected_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_FirstSelected_7() const { return ___m_FirstSelected_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_FirstSelected_7() { return &___m_FirstSelected_7; }
	inline void set_m_FirstSelected_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_FirstSelected_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FirstSelected_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_sendNavigationEvents_8() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_sendNavigationEvents_8)); }
	inline bool get_m_sendNavigationEvents_8() const { return ___m_sendNavigationEvents_8; }
	inline bool* get_address_of_m_sendNavigationEvents_8() { return &___m_sendNavigationEvents_8; }
	inline void set_m_sendNavigationEvents_8(bool value)
	{
		___m_sendNavigationEvents_8 = value;
	}

	inline static int32_t get_offset_of_m_DragThreshold_9() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DragThreshold_9)); }
	inline int32_t get_m_DragThreshold_9() const { return ___m_DragThreshold_9; }
	inline int32_t* get_address_of_m_DragThreshold_9() { return &___m_DragThreshold_9; }
	inline void set_m_DragThreshold_9(int32_t value)
	{
		___m_DragThreshold_9 = value;
	}

	inline static int32_t get_offset_of_m_CurrentSelected_10() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_CurrentSelected_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_CurrentSelected_10() const { return ___m_CurrentSelected_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_CurrentSelected_10() { return &___m_CurrentSelected_10; }
	inline void set_m_CurrentSelected_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_CurrentSelected_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurrentSelected_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_HasFocus_11() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_HasFocus_11)); }
	inline bool get_m_HasFocus_11() const { return ___m_HasFocus_11; }
	inline bool* get_address_of_m_HasFocus_11() { return &___m_HasFocus_11; }
	inline void set_m_HasFocus_11(bool value)
	{
		___m_HasFocus_11 = value;
	}

	inline static int32_t get_offset_of_m_SelectionGuard_12() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_SelectionGuard_12)); }
	inline bool get_m_SelectionGuard_12() const { return ___m_SelectionGuard_12; }
	inline bool* get_address_of_m_SelectionGuard_12() { return &___m_SelectionGuard_12; }
	inline void set_m_SelectionGuard_12(bool value)
	{
		___m_SelectionGuard_12 = value;
	}

	inline static int32_t get_offset_of_m_DummyData_13() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C, ___m_DummyData_13)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_m_DummyData_13() const { return ___m_DummyData_13; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_m_DummyData_13() { return &___m_DummyData_13; }
	inline void set_m_DummyData_13(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___m_DummyData_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DummyData_13), (void*)value);
	}
};

struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * ___s_RaycastComparer_14;

public:
	inline static int32_t get_offset_of_m_EventSystems_6() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___m_EventSystems_6)); }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * get_m_EventSystems_6() const { return ___m_EventSystems_6; }
	inline List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 ** get_address_of_m_EventSystems_6() { return &___m_EventSystems_6; }
	inline void set_m_EventSystems_6(List_1_tEF3D2378B547F18609950BEABF54AF34FBBC9733 * value)
	{
		___m_EventSystems_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystems_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_RaycastComparer_14() { return static_cast<int32_t>(offsetof(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C_StaticFields, ___s_RaycastComparer_14)); }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * get_s_RaycastComparer_14() const { return ___s_RaycastComparer_14; }
	inline Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 ** get_address_of_s_RaycastComparer_14() { return &___s_RaycastComparer_14; }
	inline void set_s_RaycastComparer_14(Comparison_1_t47C8B3739FFDD51D29B281A2FD2C36A57DDF9E38 * value)
	{
		___s_RaycastComparer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_RaycastComparer_14), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6  : public BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876
{
public:
	// System.Boolean UnityEngine.UI.GraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_6;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::m_BlockingObjects
	int32_t ___m_BlockingObjects_7;
	// UnityEngine.LayerMask UnityEngine.UI.GraphicRaycaster::m_BlockingMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_BlockingMask_8;
	// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_9;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::m_RaycastResults
	List_1_t2B519B7CD269238D4C71A96E4B005CF88488FACA * ___m_RaycastResults_10;

public:
	inline static int32_t get_offset_of_m_IgnoreReversedGraphics_6() { return static_cast<int32_t>(offsetof(GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6, ___m_IgnoreReversedGraphics_6)); }
	inline bool get_m_IgnoreReversedGraphics_6() const { return ___m_IgnoreReversedGraphics_6; }
	inline bool* get_address_of_m_IgnoreReversedGraphics_6() { return &___m_IgnoreReversedGraphics_6; }
	inline void set_m_IgnoreReversedGraphics_6(bool value)
	{
		___m_IgnoreReversedGraphics_6 = value;
	}

	inline static int32_t get_offset_of_m_BlockingObjects_7() { return static_cast<int32_t>(offsetof(GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6, ___m_BlockingObjects_7)); }
	inline int32_t get_m_BlockingObjects_7() const { return ___m_BlockingObjects_7; }
	inline int32_t* get_address_of_m_BlockingObjects_7() { return &___m_BlockingObjects_7; }
	inline void set_m_BlockingObjects_7(int32_t value)
	{
		___m_BlockingObjects_7 = value;
	}

	inline static int32_t get_offset_of_m_BlockingMask_8() { return static_cast<int32_t>(offsetof(GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6, ___m_BlockingMask_8)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_BlockingMask_8() const { return ___m_BlockingMask_8; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_BlockingMask_8() { return &___m_BlockingMask_8; }
	inline void set_m_BlockingMask_8(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_BlockingMask_8 = value;
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6, ___m_Canvas_9)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_RaycastResults_10() { return static_cast<int32_t>(offsetof(GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6, ___m_RaycastResults_10)); }
	inline List_1_t2B519B7CD269238D4C71A96E4B005CF88488FACA * get_m_RaycastResults_10() const { return ___m_RaycastResults_10; }
	inline List_1_t2B519B7CD269238D4C71A96E4B005CF88488FACA ** get_address_of_m_RaycastResults_10() { return &___m_RaycastResults_10; }
	inline void set_m_RaycastResults_10(List_1_t2B519B7CD269238D4C71A96E4B005CF88488FACA * value)
	{
		___m_RaycastResults_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RaycastResults_10), (void*)value);
	}
};

struct GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::s_SortedGraphics
	List_1_t2B519B7CD269238D4C71A96E4B005CF88488FACA * ___s_SortedGraphics_11;

public:
	inline static int32_t get_offset_of_s_SortedGraphics_11() { return static_cast<int32_t>(offsetof(GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6_StaticFields, ___s_SortedGraphics_11)); }
	inline List_1_t2B519B7CD269238D4C71A96E4B005CF88488FACA * get_s_SortedGraphics_11() const { return ___s_SortedGraphics_11; }
	inline List_1_t2B519B7CD269238D4C71A96E4B005CF88488FACA ** get_address_of_s_SortedGraphics_11() { return &___s_SortedGraphics_11; }
	inline void set_s_SortedGraphics_11(List_1_t2B519B7CD269238D4C71A96E4B005CF88488FACA * value)
	{
		___s_SortedGraphics_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SortedGraphics_11), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Toggle
struct Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;

public:
	inline static int32_t get_offset_of_toggleTransition_20() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___toggleTransition_20)); }
	inline int32_t get_toggleTransition_20() const { return ___toggleTransition_20; }
	inline int32_t* get_address_of_toggleTransition_20() { return &___toggleTransition_20; }
	inline void set_toggleTransition_20(int32_t value)
	{
		___toggleTransition_20 = value;
	}

	inline static int32_t get_offset_of_graphic_21() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___graphic_21)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_graphic_21() const { return ___graphic_21; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_graphic_21() { return &___graphic_21; }
	inline void set_graphic_21(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___graphic_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Group_22() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_Group_22)); }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * get_m_Group_22() const { return ___m_Group_22; }
	inline ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 ** get_address_of_m_Group_22() { return &___m_Group_22; }
	inline void set_m_Group_22(ToggleGroup_t12E1DFDEB3FFD979A20299EE42A94388AC619C95 * value)
	{
		___m_Group_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Group_22), (void*)value);
	}

	inline static int32_t get_offset_of_onValueChanged_23() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___onValueChanged_23)); }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * get_onValueChanged_23() const { return ___onValueChanged_23; }
	inline ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 ** get_address_of_onValueChanged_23() { return &___onValueChanged_23; }
	inline void set_onValueChanged_23(ToggleEvent_t7B9EFE80B7D7F16F3E7B8FA75FEF45B00E0C0075 * value)
	{
		___onValueChanged_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValueChanged_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsOn_24() { return static_cast<int32_t>(offsetof(Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E, ___m_IsOn_24)); }
	inline bool get_m_IsOn_24() const { return ___m_IsOn_24; }
	inline bool* get_address_of_m_IsOn_24() { return &___m_IsOn_24; }
	inline void set_m_IsOn_24(bool value)
	{
		___m_IsOn_24 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem[]
struct DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * m_Items[1];

public:
	inline DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_gshared (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_gshared_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void ChangeScene::resetStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_resetStats_mC5CE5A6FFF87BBF1DD1878190F9FA0BF3A2FADAD (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method);
// System.Void statsTracker::resetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker_resetScore_m622F2CE128A30CF7738D9EA373AD258EF42424B2 (const RuntimeMethod* method);
// System.Void statsTracker::resetMissedObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker_resetMissedObjects_mA56B496E6226359FDEEEBB27F76B3A5562FEB208 (const RuntimeMethod* method);
// System.Void statsTracker::resetPowerUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker_resetPowerUp_mA19F40E5445761AC25763FC3244AC21C44E6EDD4 (const RuntimeMethod* method);
// System.Void statsTracker::resetPowerDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker_resetPowerDown_mABC1FBAC36F4B427DD00D63FF7ADB89EF03E18BB (const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void statsTracker::increaseMissedObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker_increaseMissedObjects_m2EE755F2E319652971DA7A627A0C87F8B7721602 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetSceneAt_m46AF96028C6A3A09198ABB313E4206D93A8D1F3F (int32_t ___index0, const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void TimeTracker::StopTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeTracker_StopTimer_mE1A930DFD72C6C86138CB38003B21787178D287A (const RuntimeMethod* method);
// System.String TimeTracker::GetCurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeTracker_GetCurrentTime_m7EB00003870021F330F02977C072702E6485B612 (const RuntimeMethod* method);
// System.Void statsTracker::setTime(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void statsTracker_setTime_mCB05600E29F99952BF90B06E79E3DFF0B774DE8A_inline (String_t* ___t0, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void TimeTracker::StartTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeTracker_StartTimer_m53CB4E02EB88AA1CC37F027327B215AF46471250 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void statsTracker::setScore(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void statsTracker_setScore_m308A8A5F627A162F85D7F35921D7E8E0F46AE6DD_inline (int32_t ___s0, const RuntimeMethod* method);
// System.Void statsTracker::increasePowerUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker_increasePowerUp_m66D82205A2743B0CB9FB4DB0B0F452BF2521C873 (const RuntimeMethod* method);
// System.Void statsTracker::increasePowerDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker_increasePowerDown_m36F404878514FCAAE8BCE10D04755125450E1376 (const RuntimeMethod* method);
// System.Single UnityStandardAssets.CrossPlatformInput.CrossPlatformInputManager::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CrossPlatformInputManager_GetAxis_mA6C107E25EC40F79CF6F0F9079FF3D8CAC3ECE25 (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ViewportToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_speed_m632FF62E0D6B668C55190B3579B12684316C4041 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Select(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Select_m123BA8121C7C5C454EF649A13C724F2622B4517A (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, int32_t ___i0, const RuntimeMethod* method);
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityStandardAssets.SceneUtils.ParticleSceneControls::CheckForGuiCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSceneControls_CheckForGuiCollision_mB8EDC5E34CE1B59986991852009A011D9514A8FB (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___pos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E (Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  ___ray0, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674 (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Transform>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityStandardAssets.Effects.ParticleSystemMultiplier>()
inline ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(!0)
inline void List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982 (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m776A2FA26D0AA2185665AC714486953B3DBA5D9E (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/EmissionModule UnityEngine.ParticleSystem::get_emission()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  ParticleSystem_get_emission_m0BAA1EDF775A8712DA7D62BF3C42A2B1A6C96CA1 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/EmissionModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmissionModule_set_enabled_mD9FD50C9F5EECD04B22D03E5C00C7DD64D2AC1F1 (EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Emit_m07EF0D2DA84EB04814DA7EE6B8618B008DE75F28 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, int32_t ___count0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::.ctor(UnityEngine.EventSystems.EventSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2 (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___eventSystem0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_pressPosition(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pressPosition_mE644EE1603DFF2087224FF6364EA0204D04D7939_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.PointerEventData::set_position(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m65960EBCA54317C91CEFFC4893466F87FB168BBF_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::.ctor()
inline void List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3 (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *, const RuntimeMethod*))List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>::get_Count()
inline int32_t List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *, const RuntimeMethod*))List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Toggle>()
inline Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_mC10A47F63047FC771E4FD5AF00284CEF8D43055F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4 (const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.AudioListener::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioListener_get_volume_m42CB4AE6FDAE4430D1153AE8B1B363B1C3B30344 (const RuntimeMethod* method);
// System.Void UnityEngine.AudioListener::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE (float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, const RuntimeMethod* method);
// System.Void PauseMenu::MenuOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOn_m8973DC956DD5235381EE4ACB4A182AA5BF0EF2EA (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method);
// System.Void PauseMenu::MenuOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOff_mCD1AF41F916B0C02D2FD6F82377DBEAFF7C30720 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___methodName0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<PauseMenu>()
inline PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * Component_GetComponentInChildren_TisPauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_m98153975CAC553ED05CBA0FDC20E56CCF659A615 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E (String_t* ___url0, const RuntimeMethod* method);
// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::get_targetGraphic()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * Selectable_get_targetGraphic_mF2D1BFB9DE33BAB553933533CC4A9135A37F4A72_inline (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Selectable::set_targetGraphic(UnityEngine.UI.Graphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_targetGraphic_m668325D43E18A35560B4176477D004ECDB9C9604 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___value0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_gravityScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void Spawn_items/<Spawn>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnU3Ed__15__ctor_mDF259E1FE589485ECEE6C501358A8D995AE229D6 (U3CSpawnU3Ed__15_t5EC3F5A92B8730CD59D9BC1F4A11433B4C08D4C3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator TimeTracker::TimerRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeTracker_TimerRoutine_m58E7E1B1E72143D6AAF7C72231DC21F9C170367A (const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void TimeTracker/<TimerRoutine>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerRoutineU3Ed__9__ctor_m610B0ADDEC1237A4785EECED11224160E31FB051 (U3CTimerRoutineU3Ed__9_tDC526327E767CA60CCDEF88AF35006B69C2D70B2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Int32 statsTracker::getScore()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t statsTracker_getScore_m98263FF93FD72EC7FF3C2FFDB7666BD488F43CC7_inline (const RuntimeMethod* method);
// System.Int32 statsTracker::getMissedObjects()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t statsTracker_getMissedObjects_m83311F146E3881AEE80CECB6A1B96DCEED5E82D7_inline (const RuntimeMethod* method);
// System.String statsTracker::getTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* statsTracker_getTime_mAC847AF4E4011D011FEE53D566435BF831BB943C_inline (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void CameraSwitch::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraSwitch_OnEnable_mD422991EDD9D880928644EE1BC4E557EE644679C (CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D * __this, const RuntimeMethod* method)
{
	{
		// text.text = objects[m_CurrentActiveObject].name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_text_5();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_objects_4();
		int32_t L_2 = __this->get_m_CurrentActiveObject_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_5);
		// }
		return;
	}
}
// System.Void CameraSwitch::NextCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraSwitch_NextCamera_m38AB4521C129032FA1DA5154E09D36D0FE2DB257 (CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		// int nextactiveobject = m_CurrentActiveObject + 1 >= objects.Length ? 0 : m_CurrentActiveObject + 1;
		int32_t L_0 = __this->get_m_CurrentActiveObject_6();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_objects_4();
		NullCheck(L_1);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1))) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = __this->get_m_CurrentActiveObject_6();
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1));
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = 0;
	}

IL_001d:
	{
		V_0 = G_B3_0;
		// for (int i = 0; i < objects.Length; i++)
		V_1 = 0;
		goto IL_0037;
	}

IL_0022:
	{
		// objects[i].SetActive(i == nextactiveobject);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = __this->get_objects_4();
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		int32_t L_7 = V_1;
		int32_t L_8 = V_0;
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0), /*hidden argument*/NULL);
		// for (int i = 0; i < objects.Length; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0037:
	{
		// for (int i = 0; i < objects.Length; i++)
		int32_t L_10 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = __this->get_objects_4();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		// m_CurrentActiveObject = nextactiveobject;
		int32_t L_12 = V_0;
		__this->set_m_CurrentActiveObject_6(L_12);
		// text.text = objects[m_CurrentActiveObject].name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13 = __this->get_text_5();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = __this->get_objects_4();
		int32_t L_15 = __this->get_m_CurrentActiveObject_6();
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_17, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_18);
		// }
		return;
	}
}
// System.Void CameraSwitch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraSwitch__ctor_m550FCA9B0C24BBBC8BDBCAAAAA7BBF26312399FE (CameraSwitch_t1250A923FF8BEF5D33B749F5268A0C54C30BB26D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ChangeScene::ChangeToButtonControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_ChangeToButtonControl_mB35703D727BB75236EDFC443EF7D847AC0EC5043 (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1591D8BA06E9A684F59CFE81B59971D7B35A559F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("ButtonControlScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral1591D8BA06E9A684F59CFE81B59971D7B35A559F, /*hidden argument*/NULL);
		// MoveScript_Button.score = 0;
		IL2CPP_RUNTIME_CLASS_INIT(MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA_il2cpp_TypeInfo_var);
		((MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA_StaticFields*)il2cpp_codegen_static_fields_for(MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA_il2cpp_TypeInfo_var))->set_score_7(0);
		// resetStats();
		ChangeScene_resetStats_mC5CE5A6FFF87BBF1DD1878190F9FA0BF3A2FADAD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::ChangeToGestureControl1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_ChangeToGestureControl1_m92AFE262F172508462C6EB04756A276ECAA7E945 (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5779B815CB6D39750E39B7B01772582CFE658A21);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("GestureControlScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral5779B815CB6D39750E39B7B01772582CFE658A21, /*hidden argument*/NULL);
		// MoveControl_Gesture.score = 0;
		IL2CPP_RUNTIME_CLASS_INIT(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_il2cpp_TypeInfo_var);
		((MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_StaticFields*)il2cpp_codegen_static_fields_for(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_il2cpp_TypeInfo_var))->set_score_11(0);
		// resetStats();
		ChangeScene_resetStats_mC5CE5A6FFF87BBF1DD1878190F9FA0BF3A2FADAD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::ChangeToStartScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_ChangeToStartScene_mC987DA02D7BD45E53258BF324539782574EE155A (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral793124C2C69F7C5AD956B8E7C24C95DFD06780A5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("StartScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral793124C2C69F7C5AD956B8E7C24C95DFD06780A5, /*hidden argument*/NULL);
		// MoveControl_Gesture.score = 0;
		IL2CPP_RUNTIME_CLASS_INIT(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_il2cpp_TypeInfo_var);
		((MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_StaticFields*)il2cpp_codegen_static_fields_for(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_il2cpp_TypeInfo_var))->set_score_11(0);
		// resetStats();
		ChangeScene_resetStats_mC5CE5A6FFF87BBF1DD1878190F9FA0BF3A2FADAD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::resetStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_resetStats_mC5CE5A6FFF87BBF1DD1878190F9FA0BF3A2FADAD (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// statsTracker.resetScore();
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		statsTracker_resetScore_m622F2CE128A30CF7738D9EA373AD258EF42424B2(/*hidden argument*/NULL);
		// statsTracker.resetMissedObjects();
		statsTracker_resetMissedObjects_mA56B496E6226359FDEEEBB27F76B3A5562FEB208(/*hidden argument*/NULL);
		// statsTracker.resetPowerUp();
		statsTracker_resetPowerUp_mA19F40E5445761AC25763FC3244AC21C44E6EDD4(/*hidden argument*/NULL);
		// statsTracker.resetPowerDown();
		statsTracker_resetPowerDown_mABC1FBAC36F4B427DD00D63FF7ADB89EF03E18BB(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene__ctor_m4B5E6457BC8ADD899516038BA745E96E48F2C9E0 (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Dish2D::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dish2D_Start_mE21FC4DF61D64E812D93503C67EB39E5268A3902 (Dish2D_t73FF6CAEEADD1B279CD96DCE3EF4B62EA9067BCA * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Dish2D::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dish2D_Update_m3EAA96FF3FF57D2F19CDBDB9E8FF8B26CB78A072 (Dish2D_t73FF6CAEEADD1B279CD96DCE3EF4B62EA9067BCA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85AB632D8912311A63D1634F5AF4DD67389B2426);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// screen = Camera.main.WorldToScreenPoint(transform.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0;
		L_0 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Camera_WorldToScreenPoint_m44710195E7736CE9DE5A9B05E32059A9A950F95C(L_0, L_2, /*hidden argument*/NULL);
		__this->set_screen_5(L_3);
		// if (canBeGrabbed && screen.y < -20)
		bool L_4 = __this->get_canBeGrabbed_4();
		if (!L_4)
		{
			goto IL_0069;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_5 = __this->get_address_of_screen_5();
		float L_6 = L_5->get_y_3();
		if ((!(((float)L_6) < ((float)(-20.0f)))))
		{
			goto IL_0069;
		}
	}
	{
		// if (gameObject.tag == "Dish")
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8;
		L_8 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_7, /*hidden argument*/NULL);
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral85AB632D8912311A63D1634F5AF4DD67389B2426, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_005d;
		}
	}
	{
		// LifeTracker.life--;
		int32_t L_10 = ((LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_StaticFields*)il2cpp_codegen_static_fields_for(LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_il2cpp_TypeInfo_var))->get_life_4();
		((LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_StaticFields*)il2cpp_codegen_static_fields_for(LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_il2cpp_TypeInfo_var))->set_life_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
		// statsTracker.increaseMissedObjects();
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		statsTracker_increaseMissedObjects_m2EE755F2E319652971DA7A627A0C87F8B7721602(/*hidden argument*/NULL);
	}

IL_005d:
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_11, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0069:
	{
		// else if (!canBeGrabbed && screen.y > -10)
		bool L_12 = __this->get_canBeGrabbed_4();
		if (L_12)
		{
			goto IL_008a;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_13 = __this->get_address_of_screen_5();
		float L_14 = L_13->get_y_3();
		if ((!(((float)L_14) > ((float)(-10.0f)))))
		{
			goto IL_008a;
		}
	}
	{
		// canBeGrabbed = true;
		__this->set_canBeGrabbed_4((bool)1);
	}

IL_008a:
	{
		// }
		return;
	}
}
// System.Void Dish2D::Hit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dish2D_Hit_m8E9284D8C78568AD61A0DBF3DB32726670F99BC4 (Dish2D_t73FF6CAEEADD1B279CD96DCE3EF4B62EA9067BCA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Dish2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dish2D__ctor_m90AC44D4EB73CA46CF9E603942F3ED16FE726FB4 (Dish2D_t73FF6CAEEADD1B279CD96DCE3EF4B62EA9067BCA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LevelReset::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelReset_OnPointerClick_m9625C8235343CB1DE6B089AD6F2D5ACF738072A4 (LevelReset_t5AF897661BE368D93B6E70E28DEC6F45A5B79905 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetSceneAt(0).name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetSceneAt_m46AF96028C6A3A09198ABB313E4206D93A8D1F3F(0, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LevelReset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelReset__ctor_mFD2BB9AF1A9D7E795DDAAE2F33C1F0EB1FB31F07 (LevelReset_t5AF897661BE368D93B6E70E28DEC6F45A5B79905 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LifeTracker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifeTracker_Start_m68F499C2205350B6E01C1828AADBFCEDDD0E873D (LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// life = 3;
		((LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_StaticFields*)il2cpp_codegen_static_fields_for(LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_il2cpp_TypeInfo_var))->set_life_4(3);
		// }
		return;
	}
}
// System.Void LifeTracker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifeTracker_Update_mAF6388439A708E6661EC63D195DC9EA3B0D07BD1 (LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1034D8B07E225029FF095B4DB108E1A8C4087186);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB678AF03FCDF1FE0331A041A507ED15FF29B871D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (life <= 0)
		int32_t L_0 = ((LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_StaticFields*)il2cpp_codegen_static_fields_for(LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_il2cpp_TypeInfo_var))->get_life_4();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		// TimeTracker.StopTimer();
		TimeTracker_StopTimer_mE1A930DFD72C6C86138CB38003B21787178D287A(/*hidden argument*/NULL);
		// statsTracker.setTime(TimeTracker.GetCurrentTime());
		String_t* L_1;
		L_1 = TimeTracker_GetCurrentTime_m7EB00003870021F330F02977C072702E6485B612(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		statsTracker_setTime_mCB05600E29F99952BF90B06E79E3DFF0B774DE8A_inline(L_1, /*hidden argument*/NULL);
		// SceneManager.LoadScene("EndScene");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralB678AF03FCDF1FE0331A041A507ED15FF29B871D, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0022:
	{
		// lifeText.text = "Life: " + life;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_lifeText_5();
		String_t* L_3;
		L_3 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_StaticFields*)il2cpp_codegen_static_fields_for(LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_il2cpp_TypeInfo_var))->get_address_of_life_4()), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1034D8B07E225029FF095B4DB108E1A8C4087186, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
		// }
		return;
	}
}
// System.Void LifeTracker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifeTracker__ctor_mADF393A1EC11AB204BB0470B9F2BC896E4DE4ECA (LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MenuSceneLoader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuSceneLoader_Awake_m18B4E09AAFDC9578469D066C50A8AC0054AA34AC (MenuSceneLoader_t0D08CE40978A1EAF3F262A54E41A1C6F8FDC3FC2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Go == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_m_Go_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// m_Go = Instantiate(menuUI);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_menuUI_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		__this->set_m_Go_5(L_3);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void MenuSceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuSceneLoader__ctor_m27FD45CA6C6C8B579D2FA4EEDABBA35F2C7EF6BC (MenuSceneLoader_t0D08CE40978A1EAF3F262A54E41A1C6F8FDC3FC2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MoveControl_Gesture::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveControl_Gesture_Start_m821B02A5138FB9C82257B35DA5F689865DF23C8D (MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_4(L_0);
		// minX = Camera.main.ScreenToWorldPoint(new Vector2(0f, 0f)).x + 0.3f;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_1, L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		__this->set_minX_9(((float)il2cpp_codegen_add((float)L_5, (float)(0.300000012f))));
		// maxX = -minX;
		float L_6 = __this->get_minX_9();
		__this->set_maxX_8(((-L_6)));
		// babushka_animator = gameObject.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_8;
		L_8 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_7, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_babushka_animator_12(L_8);
		// TimeTracker.StartTimer();
		TimeTracker_StartTimer_m53CB4E02EB88AA1CC37F027327B215AF46471250(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoveControl_Gesture::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveControl_Gesture_Update_mF4EBA12E241EF5A0ED7F1093EF1604CA30763A01 (MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AD3FEEE763C75B6DC34EB1D200A130E476833FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CF5186F7B4192709D79E1505C289FAD1C871EC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dirX = Input.acceleration.x * movementSpeed;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		float L_1 = L_0.get_x_2();
		float L_2 = __this->get_movementSpeed_10();
		__this->set_dirX_7(((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)));
		// if (transform.position.x > maxX) transform.position = new Vector2(maxX, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		float L_6 = __this->get_maxX_8();
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_005c;
		}
	}
	{
		// if (transform.position.x > maxX) transform.position = new Vector2(maxX, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_8 = __this->get_maxX_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_12), L_8, L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_13, /*hidden argument*/NULL);
		goto IL_009f;
	}

IL_005c:
	{
		// else if (transform.position.x < minX) transform.position = new Vector2(minX, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_x_2();
		float L_17 = __this->get_minX_9();
		if ((!(((float)L_16) < ((float)L_17))))
		{
			goto IL_009f;
		}
	}
	{
		// else if (transform.position.x < minX) transform.position = new Vector2(minX, transform.position.y);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_19 = __this->get_minX_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_20, /*hidden argument*/NULL);
		float L_22 = L_21.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_23), L_19, L_22, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_18, L_24, /*hidden argument*/NULL);
	}

IL_009f:
	{
		// Debug.Log(Input.acceleration.x);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		float L_26 = L_25.get_x_2();
		float L_27 = L_26;
		RuntimeObject * L_28 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_27);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_28, /*hidden argument*/NULL);
		// if (Input.acceleration.x < 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		float L_30 = L_29.get_x_2();
		if ((!(((float)L_30) < ((float)(0.0f)))))
		{
			goto IL_00f2;
		}
	}
	{
		// babushka_animator.SetBool("isWalking", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_31 = __this->get_babushka_animator_12();
		NullCheck(L_31);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_31, _stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A, (bool)1, /*hidden argument*/NULL);
		// babushka_animator.SetBool("isRotated", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_32 = __this->get_babushka_animator_12();
		NullCheck(L_32);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_32, _stringLiteral0AD3FEEE763C75B6DC34EB1D200A130E476833FF, (bool)0, /*hidden argument*/NULL);
		// Debug.Log("left");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, /*hidden argument*/NULL);
		// }
		goto IL_015d;
	}

IL_00f2:
	{
		// else if (Input.acceleration.x > 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		float L_34 = L_33.get_x_2();
		if ((!(((float)L_34) > ((float)(0.0f)))))
		{
			goto IL_0131;
		}
	}
	{
		// babushka_animator.SetBool("isWalking", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_35 = __this->get_babushka_animator_12();
		NullCheck(L_35);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_35, _stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A, (bool)1, /*hidden argument*/NULL);
		// babushka_animator.SetBool("isRotated", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_36 = __this->get_babushka_animator_12();
		NullCheck(L_36);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_36, _stringLiteral0AD3FEEE763C75B6DC34EB1D200A130E476833FF, (bool)1, /*hidden argument*/NULL);
		// Debug.Log("right");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, /*hidden argument*/NULL);
		// }
		goto IL_015d;
	}

IL_0131:
	{
		// else if (Input.acceleration.x == 0)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Input_get_acceleration_mE04EFD6EDBEBA7B29231FAE71149899AB94B3361(/*hidden argument*/NULL);
		float L_38 = L_37.get_x_2();
		if ((!(((float)L_38) == ((float)(0.0f)))))
		{
			goto IL_015d;
		}
	}
	{
		// babushka_animator.SetBool("isWalking", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_39 = __this->get_babushka_animator_12();
		NullCheck(L_39);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_39, _stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A, (bool)0, /*hidden argument*/NULL);
		// Debug.Log("none");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9, /*hidden argument*/NULL);
	}

IL_015d:
	{
		// timeText.text = "time: " + TimeTracker.GetCurrentTime();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_40 = __this->get_timeText_14();
		String_t* L_41;
		L_41 = TimeTracker_GetCurrentTime_m7EB00003870021F330F02977C072702E6485B612(/*hidden argument*/NULL);
		String_t* L_42;
		L_42 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral2CF5186F7B4192709D79E1505C289FAD1C871EC5, L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_40, L_42);
		// }
		return;
	}
}
// System.Void MoveControl_Gesture::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveControl_Gesture_FixedUpdate_m3489525394EF802FAD7A4CBFD6E0524FBCE0C45D (MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243 * __this, const RuntimeMethod* method)
{
	{
		// rb.velocity = new Vector2(dirX, 0f);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rb_4();
		float L_1 = __this->get_dirX_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), L_1, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoveControl_Gesture::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveControl_Gesture_OnTriggerEnter2D_mAF7EC998DAF3EF7093E9DA5122C84390B7D6107A (MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85AB632D8912311A63D1634F5AF4DD67389B2426);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE76182B21D2403F531AD0C0985D5DEBD9FB5E555);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFBA7DAADA6B4A27D35056583285A70EA0D38DCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.tag == "Dish")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral85AB632D8912311A63D1634F5AF4DD67389B2426, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		// score += 10;
		IL2CPP_RUNTIME_CLASS_INIT(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_il2cpp_TypeInfo_var);
		int32_t L_3 = ((MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_StaticFields*)il2cpp_codegen_static_fields_for(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_il2cpp_TypeInfo_var))->get_score_11();
		((MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_StaticFields*)il2cpp_codegen_static_fields_for(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_il2cpp_TypeInfo_var))->set_score_11(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)10))));
		// scoreText.text = "Score: " + score;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_scoreText_13();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_StaticFields*)il2cpp_codegen_static_fields_for(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_il2cpp_TypeInfo_var))->get_address_of_score_11()), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
		// statsTracker.setScore(score);
		int32_t L_7 = ((MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_StaticFields*)il2cpp_codegen_static_fields_for(MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243_il2cpp_TypeInfo_var))->get_score_11();
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		statsTracker_setScore_m308A8A5F627A162F85D7F35921D7E8E0F46AE6DD_inline(L_7, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___collision0;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_9, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0054:
	{
		// else if (collision.tag == "PowerUp")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_10 = ___collision0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteralFFBA7DAADA6B4A27D35056583285A70EA0D38DCD, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0083;
		}
	}
	{
		// LifeTracker.life++;
		int32_t L_13 = ((LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_StaticFields*)il2cpp_codegen_static_fields_for(LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_il2cpp_TypeInfo_var))->get_life_4();
		((LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_StaticFields*)il2cpp_codegen_static_fields_for(LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_il2cpp_TypeInfo_var))->set_life_4(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		// statsTracker.increasePowerUp();
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		statsTracker_increasePowerUp_m66D82205A2743B0CB9FB4DB0B0F452BF2521C873(/*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_14 = ___collision0;
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_15, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0083:
	{
		// else if (collision.tag == "PowerDown")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = ___collision0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_16, /*hidden argument*/NULL);
		bool L_18;
		L_18 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_17, _stringLiteralE76182B21D2403F531AD0C0985D5DEBD9FB5E555, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00b1;
		}
	}
	{
		// LifeTracker.life--;
		int32_t L_19 = ((LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_StaticFields*)il2cpp_codegen_static_fields_for(LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_il2cpp_TypeInfo_var))->get_life_4();
		((LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_StaticFields*)il2cpp_codegen_static_fields_for(LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_il2cpp_TypeInfo_var))->set_life_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)));
		// statsTracker.increasePowerDown();
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		statsTracker_increasePowerDown_m36F404878514FCAAE8BCE10D04755125450E1376(/*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_20 = ___collision0;
		NullCheck(L_20);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_21, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Void MoveControl_Gesture::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveControl_Gesture__ctor_m37AE7FF0D59A8FFB2591ED5F2659A4662885D24A (MoveControl_Gesture_tFED1582B5D85BFD90FBD2BFC80F41AE1370B8243 * __this, const RuntimeMethod* method)
{
	{
		// public float movementSpeed = 30f;
		__this->set_movementSpeed_10((30.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveControl_Gesture::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveControl_Gesture__cctor_mC28A01378467BB5DB06345822D5F0FCF95D4CA85 (const RuntimeMethod* method)
{
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
// System.Void MoveScript_Button::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveScript_Button_Start_mBF54DF8FE311DF8D24255673EC0580B0FC116BB5 (MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rb_6(L_0);
		// babushka_animator = gameObject.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2;
		L_2 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_1, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_babushka_animator_10(L_2);
		// TimeTracker.StartTimer();
		TimeTracker_StartTimer_m53CB4E02EB88AA1CC37F027327B215AF46471250(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoveScript_Button::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveScript_Button_Update_m4897B87711D459DC16BBAD9AFC710DD06936568B (MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AD3FEEE763C75B6DC34EB1D200A130E476833FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CF5186F7B4192709D79E1505C289FAD1C871EC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// dirX = CrossPlatformInputManager.GetAxis("Horizontal");
		IL2CPP_RUNTIME_CLASS_INIT(CrossPlatformInputManager_t95A27E14ECD5D5798B2F620293E5F8E86821800A_il2cpp_TypeInfo_var);
		float L_0;
		L_0 = CrossPlatformInputManager_GetAxis_mA6C107E25EC40F79CF6F0F9079FF3D8CAC3ECE25(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		__this->set_dirX_4(L_0);
		// Vector3 pos = Camera.main.WorldToViewportPoint(transform.position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Camera_WorldToViewportPoint_m656CDAE26AAC040A4A47DAFF8EEDB0A941BE051D(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// pos.x = Mathf.Clamp01(pos.x);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		float L_6 = L_5.get_x_2();
		float L_7;
		L_7 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_6, /*hidden argument*/NULL);
		(&V_0)->set_x_2(L_7);
		// transform.position = Camera.main.ViewportToWorldPoint(pos);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9;
		L_9 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Camera_ViewportToWorldPoint_m1273EE3868551C6FF551ABA9A76DC7D66E883116(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_8, L_11, /*hidden argument*/NULL);
		// babushka_animator.speed = 1;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_12 = __this->get_babushka_animator_10();
		NullCheck(L_12);
		Animator_set_speed_m632FF62E0D6B668C55190B3579B12684316C4041(L_12, (1.0f), /*hidden argument*/NULL);
		// if (dirX == -1)
		float L_13 = __this->get_dirX_4();
		if ((!(((float)L_13) == ((float)(-1.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		// babushka_animator.SetBool("isWalking", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_14 = __this->get_babushka_animator_10();
		NullCheck(L_14);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_14, _stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A, (bool)1, /*hidden argument*/NULL);
		// babushka_animator.SetBool("isRotated", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_15 = __this->get_babushka_animator_10();
		NullCheck(L_15);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_15, _stringLiteral0AD3FEEE763C75B6DC34EB1D200A130E476833FF, (bool)0, /*hidden argument*/NULL);
		// Debug.Log("left");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral8739227E8E687EF781DA0D923452C2686CFF10A2, /*hidden argument*/NULL);
		// }
		goto IL_00fc;
	}

IL_0099:
	{
		// else if (dirX == 1)
		float L_16 = __this->get_dirX_4();
		if ((!(((float)L_16) == ((float)(1.0f)))))
		{
			goto IL_00d4;
		}
	}
	{
		// babushka_animator.SetBool("isWalking", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_17 = __this->get_babushka_animator_10();
		NullCheck(L_17);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_17, _stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A, (bool)1, /*hidden argument*/NULL);
		// babushka_animator.SetBool("isRotated", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_18 = __this->get_babushka_animator_10();
		NullCheck(L_18);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_18, _stringLiteral0AD3FEEE763C75B6DC34EB1D200A130E476833FF, (bool)1, /*hidden argument*/NULL);
		// Debug.Log("right");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB1E5119D36EC43B340C0A0DDC99F1156546EA9DF, /*hidden argument*/NULL);
		// }
		goto IL_00fc;
	}

IL_00d4:
	{
		// else if (dirX == 0)
		float L_19 = __this->get_dirX_4();
		if ((!(((float)L_19) == ((float)(0.0f)))))
		{
			goto IL_00fc;
		}
	}
	{
		// babushka_animator.SetBool("isWalking", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_20 = __this->get_babushka_animator_10();
		NullCheck(L_20);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_20, _stringLiteral0F255915E07DA7FC595B804942A8C02376116B7A, (bool)0, /*hidden argument*/NULL);
		// Debug.Log("none");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral0AEA2C46AAEB233C6D2DF0275EF92FB2E56BAFE9, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		// timeText.text = "time: " + TimeTracker.GetCurrentTime();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = __this->get_timeText_9();
		String_t* L_22;
		L_22 = TimeTracker_GetCurrentTime_m7EB00003870021F330F02977C072702E6485B612(/*hidden argument*/NULL);
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral2CF5186F7B4192709D79E1505C289FAD1C871EC5, L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_23);
		// }
		return;
	}
}
// System.Void MoveScript_Button::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveScript_Button_FixedUpdate_mB7BC4674353BF99E2BC9252AB7ABD98E7B4A0A8B (MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA * __this, const RuntimeMethod* method)
{
	{
		// rb.velocity = new Vector2(dirX * moveSpeed, rb.velocity.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rb_6();
		float L_1 = __this->get_dirX_4();
		float L_2 = __this->get_moveSpeed_5();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3 = __this->get_rb_6();
		NullCheck(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_0, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoveScript_Button::LeftButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveScript_Button_LeftButtonClick_m5202FBDE6DB77D039340FC1B862BE32E0AF9C587 (MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA * __this, const RuntimeMethod* method)
{
	{
		// rb.velocity = new Vector2(dirX * moveSpeed, rb.velocity.y);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rb_6();
		float L_1 = __this->get_dirX_4();
		float L_2 = __this->get_moveSpeed_5();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3 = __this->get_rb_6();
		NullCheck(L_3);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_0, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MoveScript_Button::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveScript_Button_OnTriggerEnter2D_m436BFB19442B8FF02A10F9DE1577BA8FB4EA28D2 (MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85AB632D8912311A63D1634F5AF4DD67389B2426);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE76182B21D2403F531AD0C0985D5DEBD9FB5E555);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFBA7DAADA6B4A27D35056583285A70EA0D38DCD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.tag == "Dish")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral85AB632D8912311A63D1634F5AF4DD67389B2426, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		// score += 10;
		IL2CPP_RUNTIME_CLASS_INIT(MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA_il2cpp_TypeInfo_var);
		int32_t L_3 = ((MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA_StaticFields*)il2cpp_codegen_static_fields_for(MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA_il2cpp_TypeInfo_var))->get_score_7();
		((MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA_StaticFields*)il2cpp_codegen_static_fields_for(MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA_il2cpp_TypeInfo_var))->set_score_7(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)10))));
		// scoreText.text = "Score: " + score;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_scoreText_8();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA_StaticFields*)il2cpp_codegen_static_fields_for(MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA_il2cpp_TypeInfo_var))->get_address_of_score_7()), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
		// statsTracker.setScore(score);
		int32_t L_7 = ((MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA_StaticFields*)il2cpp_codegen_static_fields_for(MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA_il2cpp_TypeInfo_var))->get_score_7();
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		statsTracker_setScore_m308A8A5F627A162F85D7F35921D7E8E0F46AE6DD_inline(L_7, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___collision0;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_9, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0054:
	{
		// else if (collision.tag == "PowerUp")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_10 = ___collision0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_10, /*hidden argument*/NULL);
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteralFFBA7DAADA6B4A27D35056583285A70EA0D38DCD, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0083;
		}
	}
	{
		// LifeTracker.life++;
		int32_t L_13 = ((LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_StaticFields*)il2cpp_codegen_static_fields_for(LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_il2cpp_TypeInfo_var))->get_life_4();
		((LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_StaticFields*)il2cpp_codegen_static_fields_for(LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_il2cpp_TypeInfo_var))->set_life_4(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		// statsTracker.increasePowerUp();
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		statsTracker_increasePowerUp_m66D82205A2743B0CB9FB4DB0B0F452BF2521C873(/*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_14 = ___collision0;
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_15, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0083:
	{
		// else if (collision.tag == "PowerDown")
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_16 = ___collision0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = Component_get_tag_m77B4A7356E58F985216CC53966F7A9699454803E(L_16, /*hidden argument*/NULL);
		bool L_18;
		L_18 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_17, _stringLiteralE76182B21D2403F531AD0C0985D5DEBD9FB5E555, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00b1;
		}
	}
	{
		// LifeTracker.life--;
		int32_t L_19 = ((LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_StaticFields*)il2cpp_codegen_static_fields_for(LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_il2cpp_TypeInfo_var))->get_life_4();
		((LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_StaticFields*)il2cpp_codegen_static_fields_for(LifeTracker_tEF8224CBD3563CD6342432FE576E2BD20EA6DAE7_il2cpp_TypeInfo_var))->set_life_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1)));
		// statsTracker.increasePowerDown();
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		statsTracker_increasePowerDown_m36F404878514FCAAE8BCE10D04755125450E1376(/*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_20 = ___collision0;
		NullCheck(L_20);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_21, /*hidden argument*/NULL);
	}

IL_00b1:
	{
		// }
		return;
	}
}
// System.Void MoveScript_Button::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveScript_Button__ctor_mE9351A342C833EB6951A4CF5EF482B25E3F097C5 (MoveScript_Button_t9C7886893C344181A9403834A2C2AD97526FEFBA * __this, const RuntimeMethod* method)
{
	{
		// private float moveSpeed = 10f;
		__this->set_moveSpeed_5((10.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MoveScript_Button::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveScript_Button__cctor_mFA713700C88180991AC217B8464EE6E3D68E2F9D (const RuntimeMethod* method)
{
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
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Awake_m3268C5B5B81D4EE59C85C27AED5CA3956C284DA4 (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_Next_m4AB6C18CBE0148C4D354FDCAD5EE45D472577B8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_Previous_mC2FE564898A6019238C5611E63B5EC3581CEAA63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Select(s_SelectedIndex);
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_SelectedIndex_18();
		ParticleSceneControls_Select_m123BA8121C7C5C454EF649A13C724F2622B4517A(__this, L_0, /*hidden argument*/NULL);
		// previousButton.onClick.AddListener(Previous);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = __this->get_previousButton_11();
		NullCheck(L_1);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_2;
		L_2 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_1, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_3 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_3, __this, (intptr_t)((intptr_t)ParticleSceneControls_Previous_mC2FE564898A6019238C5611E63B5EC3581CEAA63_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_2, L_3, /*hidden argument*/NULL);
		// nextButton.onClick.AddListener(Next);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = __this->get_nextButton_12();
		NullCheck(L_4);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_5;
		L_5 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_4, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_6 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_6, __this, (intptr_t)((intptr_t)ParticleSceneControls_Next_m4AB6C18CBE0148C4D354FDCAD5EE45D472577B8E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_5);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_5, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_OnDisable_mEB5EAF7BC1928EBEFD83E651459327948255D811 (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_Next_m4AB6C18CBE0148C4D354FDCAD5EE45D472577B8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_Previous_mC2FE564898A6019238C5611E63B5EC3581CEAA63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// previousButton.onClick.RemoveListener (Previous);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_previousButton_11();
		NullCheck(L_0);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_1;
		L_1 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_0, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_2 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_2, __this, (intptr_t)((intptr_t)ParticleSceneControls_Previous_mC2FE564898A6019238C5611E63B5EC3581CEAA63_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_1, L_2, /*hidden argument*/NULL);
		// nextButton.onClick.RemoveListener (Next);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get_nextButton_12();
		NullCheck(L_3);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_4;
		L_4 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_3, /*hidden argument*/NULL);
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_5 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_5, __this, (intptr_t)((intptr_t)ParticleSceneControls_Next_m4AB6C18CBE0148C4D354FDCAD5EE45D472577B8E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		UnityEvent_RemoveListener_m2EB96C90EFA456EB833B618513CECB86493AF956(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Previous()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Previous_mC2FE564898A6019238C5611E63B5EC3581CEAA63 (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_SelectedIndex--;
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_SelectedIndex_18();
		((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->set_s_SelectedIndex_18(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// if (s_SelectedIndex == -1)
		int32_t L_1 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_SelectedIndex_18();
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		// s_SelectedIndex = demoParticles.items.Length - 1;
		DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E * L_2 = __this->get_demoParticles_4();
		NullCheck(L_2);
		DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* L_3 = L_2->get_items_0();
		NullCheck(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->set_s_SelectedIndex_18(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), (int32_t)1)));
	}

IL_0028:
	{
		// Select(s_SelectedIndex);
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		int32_t L_4 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_SelectedIndex_18();
		ParticleSceneControls_Select_m123BA8121C7C5C454EF649A13C724F2622B4517A(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Next_m4AB6C18CBE0148C4D354FDCAD5EE45D472577B8E (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_SelectedIndex++;
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_SelectedIndex_18();
		((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->set_s_SelectedIndex_18(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// if (s_SelectedIndex == demoParticles.items.Length)
		int32_t L_1 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_SelectedIndex_18();
		DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E * L_2 = __this->get_demoParticles_4();
		NullCheck(L_2);
		DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* L_3 = L_2->get_items_0();
		NullCheck(L_3);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))))
		{
			goto IL_0026;
		}
	}
	{
		// s_SelectedIndex = 0;
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->set_s_SelectedIndex_18(0);
	}

IL_0026:
	{
		// Select(s_SelectedIndex);
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		int32_t L_4 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_SelectedIndex_18();
		ParticleSceneControls_Select_m123BA8121C7C5C454EF649A13C724F2622B4517A(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Update_m7B5894AE70D3733C901BFFF529195AC1467D632B (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m776A2FA26D0AA2185665AC714486953B3DBA5D9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B7_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B10_1 = 0;
	{
		// sceneCamera.localPosition = Vector3.SmoothDamp(sceneCamera.localPosition, Vector3.forward*-s_Selected.camOffset,
		//                                            ref m_CamOffsetVelocity, 1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_sceneCamera_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_sceneCamera_9();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localPosition_m527B8B5B625DA9A61E551E0FBCD3BE8CA4539FC2(L_1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_4 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_camOffset_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_3, ((float)((float)((-L_5)))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = __this->get_address_of_m_CamOffsetVelocity_19();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627(L_2, L_6, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_7, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_0, L_8, /*hidden argument*/NULL);
		// if (s_Selected.mode == Mode.Activate)
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_9 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_mode_1();
		if (L_10)
		{
			goto IL_0049;
		}
	}
	{
		// return;
		return;
	}

IL_0049:
	{
		// if (CheckForGuiCollision()) return;
		bool L_11;
		L_11 = ParticleSceneControls_CheckForGuiCollision_mB8EDC5E34CE1B59986991852009A011D9514A8FB(__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0052;
		}
	}
	{
		// if (CheckForGuiCollision()) return;
		return;
	}

IL_0052:
	{
		// bool oneShotClick = (Input.GetMouseButtonDown(0) && s_Selected.mode == Mode.Instantiate);
		bool L_12;
		L_12 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_13 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_mode_1();
		G_B7_0 = ((((int32_t)L_14) == ((int32_t)1))? 1 : 0);
		goto IL_006a;
	}

IL_0069:
	{
		G_B7_0 = 0;
	}

IL_006a:
	{
		// bool repeat = (Input.GetMouseButton(0) && s_Selected.mode == Mode.Trail);
		bool L_15;
		L_15 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		G_B8_0 = G_B7_0;
		if (!L_15)
		{
			G_B9_0 = G_B7_0;
			goto IL_0081;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_16 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_mode_1();
		G_B10_0 = ((((int32_t)L_17) == ((int32_t)2))? 1 : 0);
		G_B10_1 = G_B8_0;
		goto IL_0082;
	}

IL_0081:
	{
		G_B10_0 = 0;
		G_B10_1 = G_B9_0;
	}

IL_0082:
	{
		V_0 = (bool)G_B10_0;
		// if (oneShotClick || repeat)
		bool L_18 = V_0;
		if (!((int32_t)((int32_t)G_B10_1|(int32_t)L_18)))
		{
			goto IL_0241;
		}
	}
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19;
		L_19 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_19);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_21;
		L_21 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_19, L_20, /*hidden argument*/NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_22;
		L_22 = Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E(L_21, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_0241;
		}
	}
	{
		// var rot = Quaternion.LookRotation(hit.normal);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
		L_24 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		// if (s_Selected.align == AlignMode.Up)
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_25 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_align_2();
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_00c5;
		}
	}
	{
		// rot = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_27;
		L_27 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		V_2 = L_27;
	}

IL_00c5:
	{
		// var pos = hit.point + hit.normal*spawnOffset;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		float L_30 = __this->get_spawnOffset_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_29, L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_28, L_31, /*hidden argument*/NULL);
		V_3 = L_32;
		// if ((pos - m_LastPos).magnitude > s_Selected.minDist)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = __this->get_m_LastPos_20();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_33, L_34, /*hidden argument*/NULL);
		V_4 = L_35;
		float L_36;
		L_36 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_4), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_37 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_37);
		float L_38 = L_37->get_minDist_4();
		if ((!(((float)L_36) > ((float)L_38))))
		{
			goto IL_0241;
		}
	}
	{
		// if (s_Selected.mode != Mode.Trail || m_Instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_39 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_39);
		int32_t L_40 = L_39->get_mode_1();
		if ((!(((uint32_t)L_40) == ((uint32_t)2))))
		{
			goto IL_0126;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41 = __this->get_m_Instance_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_41, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_01ce;
		}
	}

IL_0126:
	{
		// m_Instance = (Transform) Instantiate(s_Selected.transform, pos, rot);
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_43 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_43);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44 = L_43->get_transform_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = V_3;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_46 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_47;
		L_47 = Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30(L_44, L_45, L_46, /*hidden argument*/Object_Instantiate_TisTransform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_mC13E8DA0CA1DFD88310E2E066C5479E3994BAA30_RuntimeMethod_var);
		__this->set_m_Instance_17(L_47);
		// if (m_ParticleMultiplier != null)
		ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * L_48 = __this->get_m_ParticleMultiplier_15();
		bool L_49;
		L_49 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_48, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_49)
		{
			goto IL_0161;
		}
	}
	{
		// m_Instance.GetComponent<ParticleSystemMultiplier>().multiplier = multiply;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50 = __this->get_m_Instance_17();
		NullCheck(L_50);
		ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * L_51;
		L_51 = Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5(L_50, /*hidden argument*/Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5_RuntimeMethod_var);
		float L_52 = __this->get_multiply_6();
		NullCheck(L_51);
		L_51->set_multiplier_4(L_52);
	}

IL_0161:
	{
		// m_CurrentParticleList.Add(m_Instance);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_53 = __this->get_m_CurrentParticleList_16();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54 = __this->get_m_Instance_17();
		NullCheck(L_53);
		List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982(L_53, L_54, /*hidden argument*/List_1_Add_m7AB707ADE023585729593334A399B3FF485A7982_RuntimeMethod_var);
		// if (s_Selected.maxCount > 0 && m_CurrentParticleList.Count > s_Selected.maxCount)
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_55 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_55);
		int32_t L_56 = L_55->get_maxCount_3();
		if ((((int32_t)L_56) <= ((int32_t)0)))
		{
			goto IL_01e6;
		}
	}
	{
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_57 = __this->get_m_CurrentParticleList_16();
		NullCheck(L_57);
		int32_t L_58;
		L_58 = List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline(L_57, /*hidden argument*/List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_59 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_59);
		int32_t L_60 = L_59->get_maxCount_3();
		if ((((int32_t)L_58) <= ((int32_t)L_60)))
		{
			goto IL_01e6;
		}
	}
	{
		// if (m_CurrentParticleList[0] != null)
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_61 = __this->get_m_CurrentParticleList_16();
		NullCheck(L_61);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_62;
		L_62 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_61, 0, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_63;
		L_63 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_62, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_63)
		{
			goto IL_01c0;
		}
	}
	{
		// Destroy(m_CurrentParticleList[0].gameObject);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_64 = __this->get_m_CurrentParticleList_16();
		NullCheck(L_64);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_64, 0, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		NullCheck(L_65);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66;
		L_66 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_66, /*hidden argument*/NULL);
	}

IL_01c0:
	{
		// m_CurrentParticleList.RemoveAt(0);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_67 = __this->get_m_CurrentParticleList_16();
		NullCheck(L_67);
		List_1_RemoveAt_m776A2FA26D0AA2185665AC714486953B3DBA5D9E(L_67, 0, /*hidden argument*/List_1_RemoveAt_m776A2FA26D0AA2185665AC714486953B3DBA5D9E_RuntimeMethod_var);
		// }
		goto IL_01e6;
	}

IL_01ce:
	{
		// m_Instance.position = pos;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_68 = __this->get_m_Instance_17();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_69 = V_3;
		NullCheck(L_68);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_68, L_69, /*hidden argument*/NULL);
		// m_Instance.rotation = rot;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70 = __this->get_m_Instance_17();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_71 = V_2;
		NullCheck(L_70);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_70, L_71, /*hidden argument*/NULL);
	}

IL_01e6:
	{
		// if (s_Selected.mode == Mode.Trail)
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_72 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_72);
		int32_t L_73 = L_72->get_mode_1();
		if ((!(((uint32_t)L_73) == ((uint32_t)2))))
		{
			goto IL_0228;
		}
	}
	{
		// var emission = m_Instance.transform.GetComponent<ParticleSystem>().emission;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74 = __this->get_m_Instance_17();
		NullCheck(L_74);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_75;
		L_75 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_74, /*hidden argument*/NULL);
		NullCheck(L_75);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_76;
		L_76 = Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3(L_75, /*hidden argument*/Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var);
		NullCheck(L_76);
		EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D  L_77;
		L_77 = ParticleSystem_get_emission_m0BAA1EDF775A8712DA7D62BF3C42A2B1A6C96CA1(L_76, /*hidden argument*/NULL);
		V_5 = L_77;
		// emission.enabled = false;
		EmissionModule_set_enabled_mD9FD50C9F5EECD04B22D03E5C00C7DD64D2AC1F1((EmissionModule_tE778D94F4003A96ECE3D8B670DDEDD2D557DE52D *)(&V_5), (bool)0, /*hidden argument*/NULL);
		// m_Instance.transform.GetComponent<ParticleSystem>().Emit(1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_78 = __this->get_m_Instance_17();
		NullCheck(L_78);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_79;
		L_79 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_78, /*hidden argument*/NULL);
		NullCheck(L_79);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_80;
		L_80 = Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3(L_79, /*hidden argument*/Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var);
		NullCheck(L_80);
		ParticleSystem_Emit_m07EF0D2DA84EB04814DA7EE6B8618B008DE75F28(L_80, 1, /*hidden argument*/NULL);
	}

IL_0228:
	{
		// m_Instance.parent = hit.transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_81 = __this->get_m_Instance_17();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_82;
		L_82 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_81);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_81, L_82, /*hidden argument*/NULL);
		// m_LastPos = pos;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83 = V_3;
		__this->set_m_LastPos_20(L_83);
	}

IL_0241:
	{
		// }
		return;
	}
}
// System.Boolean UnityStandardAssets.SceneUtils.ParticleSceneControls::CheckForGuiCollision()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSceneControls_CheckForGuiCollision_mB8EDC5E34CE1B59986991852009A011D9514A8FB (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * V_0 = NULL;
	List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * V_1 = NULL;
	{
		// PointerEventData eventData = new PointerEventData(eventSystem);
		EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * L_0 = __this->get_eventSystem_14();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_1 = (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *)il2cpp_codegen_object_new(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954_il2cpp_TypeInfo_var);
		PointerEventData__ctor_m3A877590C20995B4F549C6923BBE2B0901A684F2(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// eventData.pressPosition = Input.mousePosition;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		PointerEventData_set_pressPosition_mE644EE1603DFF2087224FF6364EA0204D04D7939_inline(L_2, L_4, /*hidden argument*/NULL);
		// eventData.position = Input.mousePosition;
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_5 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7;
		L_7 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		PointerEventData_set_position_m65960EBCA54317C91CEFFC4893466F87FB168BBF_inline(L_5, L_7, /*hidden argument*/NULL);
		// List<RaycastResult> list = new List<RaycastResult>();
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_8 = (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 *)il2cpp_codegen_object_new(List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447_il2cpp_TypeInfo_var);
		List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3(L_8, /*hidden argument*/List_1__ctor_m3B54A4C20C7EA7D3350768955A3CD521D7F069D3_RuntimeMethod_var);
		V_1 = L_8;
		// graphicRaycaster.Raycast(eventData, list);
		GraphicRaycaster_tD6DFF30B8B7F1E0DA9522A4F2BB9DC18E19638E6 * L_9 = __this->get_graphicRaycaster_13();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_10 = V_0;
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_11 = V_1;
		NullCheck(L_9);
		VirtActionInvoker2< PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 *, List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * >::Invoke(17 /* System.Void UnityEngine.EventSystems.BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData,System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>) */, L_9, L_10, L_11);
		// return list.Count > 0;
		List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_inline(L_12, /*hidden argument*/List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_RuntimeMethod_var);
		return (bool)((((int32_t)L_13) > ((int32_t)0))? 1 : 0);
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::Select(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls_Select_m123BA8121C7C5C454EF649A13C724F2622B4517A (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m776A2FA26D0AA2185665AC714486953B3DBA5D9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* V_0 = NULL;
	int32_t V_1 = 0;
	DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * V_2 = NULL;
	{
		// s_Selected = demoParticles.items[i];
		DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E * L_0 = __this->get_demoParticles_4();
		NullCheck(L_0);
		DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* L_1 = L_0->get_items_0();
		int32_t L_2 = ___i0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->set_s_Selected_21(L_4);
		// m_Instance = null;
		__this->set_m_Instance_17((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)NULL);
		// foreach (var otherEffect in demoParticles.items)
		DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E * L_5 = __this->get_demoParticles_4();
		NullCheck(L_5);
		DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* L_6 = L_5->get_items_0();
		V_0 = L_6;
		V_1 = 0;
		goto IL_0052;
	}

IL_0029:
	{
		// foreach (var otherEffect in demoParticles.items)
		DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		// if ((otherEffect != s_Selected) && (otherEffect.mode == Mode.Activate))
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_11 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_12 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		if ((((RuntimeObject*)(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B *)L_11) == ((RuntimeObject*)(DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B *)L_12)))
		{
			goto IL_004e;
		}
	}
	{
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_mode_1();
		if (L_14)
		{
			goto IL_004e;
		}
	}
	{
		// otherEffect.transform.gameObject.SetActive(false);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_15 = V_2;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = L_15->get_transform_0();
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)0, /*hidden argument*/NULL);
	}

IL_004e:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0052:
	{
		// foreach (var otherEffect in demoParticles.items)
		int32_t L_19 = V_1;
		DemoParticleSystemU5BU5D_tECC3FBA90A93A35A05B79DFD1CA338C08FEDD8B1* L_20 = V_0;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))))
		{
			goto IL_0029;
		}
	}
	{
		// if (s_Selected.mode == Mode.Activate)
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_21 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_21);
		int32_t L_22 = L_21->get_mode_1();
		if (L_22)
		{
			goto IL_0079;
		}
	}
	{
		// s_Selected.transform.gameObject.SetActive(true);
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_23 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24 = L_23->get_transform_0();
		NullCheck(L_24);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_25, (bool)1, /*hidden argument*/NULL);
	}

IL_0079:
	{
		// m_ParticleMultiplier = s_Selected.transform.GetComponent<ParticleSystemMultiplier>();
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_26 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = L_26->get_transform_0();
		NullCheck(L_27);
		ParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646 * L_28;
		L_28 = Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5(L_27, /*hidden argument*/Component_GetComponent_TisParticleSystemMultiplier_t668A6839174257A2EAE505C5B64A1A0BBEF70646_m552D01340683FACF6E28951C78FAFB573B5152A5_RuntimeMethod_var);
		__this->set_m_ParticleMultiplier_15(L_28);
		// multiply = 1;
		__this->set_multiply_6((1.0f));
		// if (clearOnChange)
		bool L_29 = __this->get_clearOnChange_7();
		if (!L_29)
		{
			goto IL_00d3;
		}
	}
	{
		goto IL_00c5;
	}

IL_00a3:
	{
		// Destroy(m_CurrentParticleList[0].gameObject);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_30 = __this->get_m_CurrentParticleList_16();
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_30, 0, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		NullCheck(L_31);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_32, /*hidden argument*/NULL);
		// m_CurrentParticleList.RemoveAt(0);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_33 = __this->get_m_CurrentParticleList_16();
		NullCheck(L_33);
		List_1_RemoveAt_m776A2FA26D0AA2185665AC714486953B3DBA5D9E(L_33, 0, /*hidden argument*/List_1_RemoveAt_m776A2FA26D0AA2185665AC714486953B3DBA5D9E_RuntimeMethod_var);
	}

IL_00c5:
	{
		// while (m_CurrentParticleList.Count > 0)
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_34 = __this->get_m_CurrentParticleList_16();
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline(L_34, /*hidden argument*/List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		if ((((int32_t)L_35) > ((int32_t)0)))
		{
			goto IL_00a3;
		}
	}

IL_00d3:
	{
		// instructionText.text = s_Selected.instructionText;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_36 = __this->get_instructionText_10();
		IL2CPP_RUNTIME_CLASS_INIT(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var);
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_37 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_37);
		String_t* L_38 = L_37->get_instructionText_6();
		NullCheck(L_36);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, L_38);
		// titleText.text = s_Selected.transform.name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_39 = __this->get_titleText_8();
		DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * L_40 = ((ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_StaticFields*)il2cpp_codegen_static_fields_for(ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246_il2cpp_TypeInfo_var))->get_s_Selected_21();
		NullCheck(L_40);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41 = L_40->get_transform_0();
		NullCheck(L_41);
		String_t* L_42;
		L_42 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_41, /*hidden argument*/NULL);
		NullCheck(L_39);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, L_42);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls__ctor_mFE76B488C636F213B77193EDFF38F514A3186631 (ParticleSceneControls_t8535BFA9A38CB3210524D0D7BA2EDD95363DC246 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float spawnOffset = 0.5f;
		__this->set_spawnOffset_5((0.5f));
		// public float multiply = 1;
		__this->set_multiply_6((1.0f));
		// private List<Transform> m_CurrentParticleList = new List<Transform>();
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_0 = (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *)il2cpp_codegen_object_new(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var);
		List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F(L_0, /*hidden argument*/List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var);
		__this->set_m_CurrentParticleList_16(L_0);
		// private Vector3 m_CamOffsetVelocity = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_m_CamOffsetVelocity_19(L_1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSceneControls__cctor_mBA868BA9BC2400AD1AB420B3D0AB42D863358338 (const RuntimeMethod* method)
{
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
// System.Void PauseMenu::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Awake_mB04BCBDA84AEC654D1976EC3DF61A0CF68D2C86C (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_mC10A47F63047FC771E4FD5AF00284CEF8D43055F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_MenuToggle = GetComponent <Toggle> ();
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_0;
		L_0 = Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_mC10A47F63047FC771E4FD5AF00284CEF8D43055F(__this, /*hidden argument*/Component_GetComponent_TisToggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E_mC10A47F63047FC771E4FD5AF00284CEF8D43055F_RuntimeMethod_var);
		__this->set_m_MenuToggle_4(L_0);
		// }
		return;
	}
}
// System.Void PauseMenu::MenuOn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOn_m8973DC956DD5235381EE4ACB4A182AA5BF0EF2EA (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// m_TimeScaleRef = Time.timeScale;
		float L_0;
		L_0 = Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4(/*hidden argument*/NULL);
		__this->set_m_TimeScaleRef_5(L_0);
		// Time.timeScale = 0f;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// m_VolumeRef = AudioListener.volume;
		float L_1;
		L_1 = AudioListener_get_volume_m42CB4AE6FDAE4430D1153AE8B1B363B1C3B30344(/*hidden argument*/NULL);
		__this->set_m_VolumeRef_6(L_1);
		// AudioListener.volume = 0f;
		AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE((0.0f), /*hidden argument*/NULL);
		// m_Paused = true;
		__this->set_m_Paused_7((bool)1);
		// }
		return;
	}
}
// System.Void PauseMenu::MenuOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MenuOff_mCD1AF41F916B0C02D2FD6F82377DBEAFF7C30720 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = m_TimeScaleRef;
		float L_0 = __this->get_m_TimeScaleRef_5();
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA(L_0, /*hidden argument*/NULL);
		// AudioListener.volume = m_VolumeRef;
		float L_1 = __this->get_m_VolumeRef_6();
		AudioListener_set_volume_mDC667AECD1CAE741AE6978A9ADE6FEA6EF5B1BEE(L_1, /*hidden argument*/NULL);
		// m_Paused = false;
		__this->set_m_Paused_7((bool)0);
		// }
		return;
	}
}
// System.Void PauseMenu::OnMenuStatusChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_OnMenuStatusChange_mD1E8BD9B9CCB274A83FFF0FE2E06E6ABD0361B4A (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// if (m_MenuToggle.isOn && !m_Paused)
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_0 = __this->get_m_MenuToggle_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		bool L_2 = __this->get_m_Paused_7();
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		// MenuOn();
		PauseMenu_MenuOn_m8973DC956DD5235381EE4ACB4A182AA5BF0EF2EA(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001c:
	{
		// else if (!m_MenuToggle.isOn && m_Paused)
		Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * L_3 = __this->get_m_MenuToggle_4();
		NullCheck(L_3);
		bool L_4;
		L_4 = Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		bool L_5 = __this->get_m_Paused_7();
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// MenuOff();
		PauseMenu_MenuOff_mCD1AF41F916B0C02D2FD6F82377DBEAFF7C30720(__this, /*hidden argument*/NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_mA1A281F3359C234E5CF24FFEAC20C12C48D69018 (PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * __this, const RuntimeMethod* method)
{
	{
		// private float m_TimeScaleRef = 1f;
		__this->set_m_TimeScaleRef_5((1.0f));
		// private float m_VolumeRef = 1f;
		__this->set_m_VolumeRef_6((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTargetWithMouse_Update_m28E68FE68FA0185C0D20A6001F4C262868348BE3 (PlaceTargetWithMouse_t384CCC910074BE48EFA5F779E972A03374E97310 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB4D84F7C62E7D302A9A088AA8E292DF6A477309);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_1);
		Ray_t2E9E67CC8B03EE6ED2BBF3D2C9C96DDF70E1D5E6  L_3;
		L_3 = Camera_ScreenPointToRay_mD385213935A81030EDC604A39FD64761077CFBAB(L_1, L_2, /*hidden argument*/NULL);
		// if (!Physics.Raycast(ray, out hit))
		bool L_4;
		L_4 = Physics_Raycast_m80EC8EEDA0ABA8B01838BA9054834CD1A381916E(L_3, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0022;
		}
	}
	{
		// return;
		return;
	}

IL_0022:
	{
		// transform.position = hit.point + hit.normal*surfaceOffset;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		float L_8 = __this->get_surfaceOffset_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_7, L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_6, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_10, /*hidden argument*/NULL);
		// if (setTargetOn != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_setTargetOn_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// setTargetOn.SendMessage("SetTarget", transform);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_setTargetOn_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_SendMessage_m9727C08D6F0A5E8F309FA9FFF389ADF8130D7BE7(L_13, _stringLiteralAB4D84F7C62E7D302A9A088AA8E292DF6A477309, L_14, /*hidden argument*/NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.PlaceTargetWithMouse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaceTargetWithMouse__ctor_m3582FA7DC3CF8198244F9EB014FE12AC97985FE7 (PlaceTargetWithMouse_t384CCC910074BE48EFA5F779E972A03374E97310 * __this, const RuntimeMethod* method)
{
	{
		// public float surfaceOffset = 1.5f;
		__this->set_surfaceOffset_4((1.5f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SceneAndURLLoader::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader_Awake_m8F276157A2A5FA943EF7918D6CCDB81273317E23 (SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisPauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_m98153975CAC553ED05CBA0FDC20E56CCF659A615_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PauseMenu = GetComponentInChildren <PauseMenu> ();
		PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * L_0;
		L_0 = Component_GetComponentInChildren_TisPauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_m98153975CAC553ED05CBA0FDC20E56CCF659A615(__this, /*hidden argument*/Component_GetComponentInChildren_TisPauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791_m98153975CAC553ED05CBA0FDC20E56CCF659A615_RuntimeMethod_var);
		__this->set_m_PauseMenu_4(L_0);
		// }
		return;
	}
}
// System.Void SceneAndURLLoader::SceneLoad(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader_SceneLoad_m2B09BD48F419F49A6BD461DBC7B2290EC8632B06 (SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PauseMenu.MenuOff ();
		PauseMenu_tA57AC8D7056D427531596655447E6DDDBB7DB791 * L_0 = __this->get_m_PauseMenu_4();
		NullCheck(L_0);
		PauseMenu_MenuOff_mCD1AF41F916B0C02D2FD6F82377DBEAFF7C30720(L_0, /*hidden argument*/NULL);
		// SceneManager.LoadScene(sceneName);
		String_t* L_1 = ___sceneName0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneAndURLLoader::LoadURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader_LoadURL_m47E3E286E80F2D5B3E6A164C32F7E1B473532AE2 (SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E * __this, String_t* ___url0, const RuntimeMethod* method)
{
	{
		// Application.OpenURL(url);
		String_t* L_0 = ___url0;
		Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SceneAndURLLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneAndURLLoader__ctor_m6DEE574FADF9E3E894594690CB2755F69D5D4BE5 (SceneAndURLLoader_t8B9BB2A4140000EE42EA4DEBAAA47DAFB0E18B5E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton_Start_m8F334286C4BEE772EAA4842F431E01BB4929A04C (SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E * __this, const RuntimeMethod* method)
{
	{
		// m_SlowMo = false;
		__this->set_m_SlowMo_9((bool)0);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton_OnDestroy_mE8D51330ED641B12795E984B6F0ECCB00536DBDB (SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E * __this, const RuntimeMethod* method)
{
	{
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::ChangeSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton_ChangeSpeed_m0C19576C039AA7BBBC478C87A6C964376BA58EAB (SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * V_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B3_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B2_0 = NULL;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * G_B4_0 = NULL;
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * G_B4_1 = NULL;
	float G_B8_0 = 0.0f;
	{
		// m_SlowMo = !m_SlowMo;
		bool L_0 = __this->get_m_SlowMo_9();
		__this->set_m_SlowMo_9((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// var image = button.targetGraphic as Image;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = __this->get_button_8();
		NullCheck(L_1);
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_2;
		L_2 = Selectable_get_targetGraphic_mF2D1BFB9DE33BAB553933533CC4A9135A37F4A72_inline(L_1, /*hidden argument*/NULL);
		V_0 = ((Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C *)IsInstClass((RuntimeObject*)L_2, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_il2cpp_TypeInfo_var));
		// if (image != null)
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		// image.sprite = m_SlowMo ? SlowSpeedTex : FullSpeedTex;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = V_0;
		bool L_6 = __this->get_m_SlowMo_9();
		G_B2_0 = L_5;
		if (L_6)
		{
			G_B3_0 = L_5;
			goto IL_003a;
		}
	}
	{
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7 = __this->get_FullSpeedTex_4();
		G_B4_0 = L_7;
		G_B4_1 = G_B2_0;
		goto IL_0040;
	}

IL_003a:
	{
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_8 = __this->get_SlowSpeedTex_5();
		G_B4_0 = L_8;
		G_B4_1 = G_B3_0;
	}

IL_0040:
	{
		NullCheck(G_B4_1);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(G_B4_1, G_B4_0, /*hidden argument*/NULL);
	}

IL_0045:
	{
		// button.targetGraphic = image;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_9 = __this->get_button_8();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = V_0;
		NullCheck(L_9);
		Selectable_set_targetGraphic_m668325D43E18A35560B4176477D004ECDB9C9604(L_9, L_10, /*hidden argument*/NULL);
		// Time.timeScale = m_SlowMo ? slowSpeed : fullSpeed;
		bool L_11 = __this->get_m_SlowMo_9();
		if (L_11)
		{
			goto IL_0061;
		}
	}
	{
		float L_12 = __this->get_fullSpeed_6();
		G_B8_0 = L_12;
		goto IL_0067;
	}

IL_0061:
	{
		float L_13 = __this->get_slowSpeed_7();
		G_B8_0 = L_13;
	}

IL_0067:
	{
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA(G_B8_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityStandardAssets.SceneUtils.SlowMoButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlowMoButton__ctor_m993A85A43C7462445119B63636FD65A6F8C0F6BF (SlowMoButton_t80B8DA3AC1AF29DE10D3490401D378DC855ECF1E * __this, const RuntimeMethod* method)
{
	{
		// public float fullSpeed = 1;
		__this->set_fullSpeed_6((1.0f));
		// public float slowSpeed = 0.3f;
		__this->set_slowSpeed_7((0.300000012f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Spawn_items::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawn_items_Start_m289FE14E0E28D2A73A431F53CCA8E10213089842 (Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F95E57697BB41E99DE855093AF6D5B53CF4A332);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9820C3496732D02B184D4FDD866A6B0F158AEC42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3C8A6D75E0496334E5CB7C59886BB5A4E44DAF1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4BBD73966B377764504FFCFA5EC00884CD2CCA1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		// StartCoroutine("Spawn");
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_0;
		L_0 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(__this, _stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF, /*hidden argument*/NULL);
		// borsch.gameObject.GetComponent<Rigidbody2D>().gravityScale = 0.3f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_borsch_5();
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3;
		L_3 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_2, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		NullCheck(L_3);
		Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF(L_3, (0.300000012f), /*hidden argument*/NULL);
		// dumplings.gameObject.GetComponent<Rigidbody2D>().gravityScale = 0.3f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_dumplings_6();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_6;
		L_6 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_5, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		NullCheck(L_6);
		Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF(L_6, (0.300000012f), /*hidden argument*/NULL);
		// objectsArray = new string[objectsNumber];
		int32_t L_7 = __this->get_objectsNumber_13();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_7);
		__this->set_objectsArray_17(L_8);
		// for (int i = 0; i < objectsNumber; i++)
		V_0 = 0;
		goto IL_0066;
	}

IL_0055:
	{
		// objectsArray[i] = "dish";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = __this->get_objectsArray_17();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral9820C3496732D02B184D4FDD866A6B0F158AEC42);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (String_t*)_stringLiteral9820C3496732D02B184D4FDD866A6B0F158AEC42);
		// for (int i = 0; i < objectsNumber; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0066:
	{
		// for (int i = 0; i < objectsNumber; i++)
		int32_t L_12 = V_0;
		int32_t L_13 = __this->get_objectsNumber_13();
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0055;
		}
	}
	{
		// for (int i = 0; i < powerupNumber; i++)
		V_1 = 0;
		goto IL_0091;
	}

IL_0073:
	{
		// int j = Random.Range(0, objectsNumber);
		int32_t L_14 = __this->get_objectsNumber_13();
		int32_t L_15;
		L_15 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		// objectsArray[j] = "powerup";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = __this->get_objectsArray_17();
		int32_t L_17 = V_2;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralC3C8A6D75E0496334E5CB7C59886BB5A4E44DAF1);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (String_t*)_stringLiteralC3C8A6D75E0496334E5CB7C59886BB5A4E44DAF1);
		// for (int i = 0; i < powerupNumber; i++)
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0091:
	{
		// for (int i = 0; i < powerupNumber; i++)
		int32_t L_19 = V_1;
		int32_t L_20 = __this->get_powerupNumber_14();
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0073;
		}
	}
	{
		// for (int i = 0; i < powerdownNumber; i++)
		V_3 = 0;
		goto IL_00f8;
	}

IL_009e:
	{
		// int j = Random.Range(0, objectsNumber);
		int32_t L_21 = __this->get_objectsNumber_13();
		int32_t L_22;
		L_22 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		goto IL_00bc;
	}

IL_00ae:
	{
		// j = Random.Range(0, objectsNumber);
		int32_t L_23 = __this->get_objectsNumber_13();
		int32_t L_24;
		L_24 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_23, /*hidden argument*/NULL);
		V_4 = L_24;
	}

IL_00bc:
	{
		// while ((objectsArray[j] == "powerup") || (objectsArray[j] == "powerdown"))
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = __this->get_objectsArray_17();
		int32_t L_26 = V_4;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		String_t* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		bool L_29;
		L_29 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_28, _stringLiteralC3C8A6D75E0496334E5CB7C59886BB5A4E44DAF1, /*hidden argument*/NULL);
		if (L_29)
		{
			goto IL_00ae;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = __this->get_objectsArray_17();
		int32_t L_31 = V_4;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		String_t* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		bool L_34;
		L_34 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_33, _stringLiteralF4BBD73966B377764504FFCFA5EC00884CD2CCA1, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_00ae;
		}
	}
	{
		// objectsArray[j] = "powerdown";
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_35 = __this->get_objectsArray_17();
		int32_t L_36 = V_4;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteralF4BBD73966B377764504FFCFA5EC00884CD2CCA1);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_36), (String_t*)_stringLiteralF4BBD73966B377764504FFCFA5EC00884CD2CCA1);
		// for (int i = 0; i < powerdownNumber; i++)
		int32_t L_37 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_00f8:
	{
		// for (int i = 0; i < powerdownNumber; i++)
		int32_t L_38 = V_3;
		int32_t L_39 = __this->get_powerdownNumber_15();
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_009e;
		}
	}
	{
		// for (int i = 0; i < objectsNumber; i++)
		V_5 = 0;
		goto IL_0130;
	}

IL_0106:
	{
		// Debug.Log("object type " + i + " " + objectsArray[i]);
		String_t* L_40;
		L_40 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_5), /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_41 = __this->get_objectsArray_17();
		int32_t L_42 = V_5;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		String_t* L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		String_t* L_45;
		L_45 = String_Concat_m37A5BF26F8F8F1892D60D727303B23FB604FEE78(_stringLiteral2F95E57697BB41E99DE855093AF6D5B53CF4A332, L_40, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_45, /*hidden argument*/NULL);
		// for (int i = 0; i < objectsNumber; i++)
		int32_t L_46 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_0130:
	{
		// for (int i = 0; i < objectsNumber; i++)
		int32_t L_47 = V_5;
		int32_t L_48 = __this->get_objectsNumber_13();
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_0106;
		}
	}
	{
		// objectsCounter = 0;
		__this->set_objectsCounter_16(0);
		// }
		return;
	}
}
// System.Collections.IEnumerator Spawn_items::Spawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Spawn_items_Spawn_m53DA373706C35323876FFC5B8BD625188BAB28AA (Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSpawnU3Ed__15_t5EC3F5A92B8730CD59D9BC1F4A11433B4C08D4C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSpawnU3Ed__15_t5EC3F5A92B8730CD59D9BC1F4A11433B4C08D4C3 * L_0 = (U3CSpawnU3Ed__15_t5EC3F5A92B8730CD59D9BC1F4A11433B4C08D4C3 *)il2cpp_codegen_object_new(U3CSpawnU3Ed__15_t5EC3F5A92B8730CD59D9BC1F4A11433B4C08D4C3_il2cpp_TypeInfo_var);
		U3CSpawnU3Ed__15__ctor_mDF259E1FE589485ECEE6C501358A8D995AE229D6(L_0, 0, /*hidden argument*/NULL);
		U3CSpawnU3Ed__15_t5EC3F5A92B8730CD59D9BC1F4A11433B4C08D4C3 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Spawn_items::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawn_items_Update_m7A22636A2AFDFC03DB164450A5601FB5164B7133 (Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Spawn_items::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawn_items__ctor_m8340CAFFC5E07D3036E6905E46FC1D1BE35BC569 (Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * __this, const RuntimeMethod* method)
{
	{
		// private float spawnTime = 2;
		__this->set_spawnTime_4((2.0f));
		// public float maxX = -7;
		__this->set_maxX_10((-7.0f));
		// public float minX = 7;
		__this->set_minX_11((7.0f));
		// private int objectsNumber = 30, powerupNumber = 5, powerdownNumber = 5, objectsCounter;
		__this->set_objectsNumber_13(((int32_t)30));
		// private int objectsNumber = 30, powerupNumber = 5, powerdownNumber = 5, objectsCounter;
		__this->set_powerupNumber_14(5);
		// private int objectsNumber = 30, powerupNumber = 5, powerdownNumber = 5, objectsCounter;
		__this->set_powerdownNumber_15(5);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spawn_items::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawn_items__cctor_mE5D834963776442CC8DEDA2561AA250F690F0BCE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool increaseSpeed = true;
		((Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E_StaticFields*)il2cpp_codegen_static_fields_for(Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E_il2cpp_TypeInfo_var))->set_increaseSpeed_12((bool)1);
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
// System.Void TimeTracker::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeTracker_Awake_mCE11CE7F375AFFAC18F5A00C8F7BEA2EA7FB015B (TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this; //set our static reference to our newly initialized instance
		((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->set_instance_7(__this);
		// }
		return;
	}
}
// System.Void TimeTracker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeTracker_Start_m0D465FB50B4F32610B9A50633831D5526226FE9A (TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TimeTracker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeTracker_Update_mFCE263E7DF3674A4640E56A5F3C96BA552AA12D1 (TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void TimeTracker::StartTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeTracker_StartTimer_m53CB4E02EB88AA1CC37F027327B215AF46471250 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance.StopAllCoroutines();
		TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212 * L_0 = ((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->get_instance_7();
		NullCheck(L_0);
		MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4(L_0, /*hidden argument*/NULL);
		// instance.StartCoroutine(TimerRoutine());
		TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212 * L_1 = ((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->get_instance_7();
		RuntimeObject* L_2;
		L_2 = TimeTracker_TimerRoutine_m58E7E1B1E72143D6AAF7C72231DC21F9C170367A(/*hidden argument*/NULL);
		NullCheck(L_1);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_3;
		L_3 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TimeTracker::StopTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeTracker_StopTimer_mE1A930DFD72C6C86138CB38003B21787178D287A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance.StopAllCoroutines();
		TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212 * L_0 = ((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->get_instance_7();
		NullCheck(L_0);
		MonoBehaviour_StopAllCoroutines_m6CFEADAA0266A99176A33B47129392DF954962B4(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator TimeTracker::TimerRoutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeTracker_TimerRoutine_m58E7E1B1E72143D6AAF7C72231DC21F9C170367A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTimerRoutineU3Ed__9_tDC526327E767CA60CCDEF88AF35006B69C2D70B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTimerRoutineU3Ed__9_tDC526327E767CA60CCDEF88AF35006B69C2D70B2 * L_0 = (U3CTimerRoutineU3Ed__9_tDC526327E767CA60CCDEF88AF35006B69C2D70B2 *)il2cpp_codegen_object_new(U3CTimerRoutineU3Ed__9_tDC526327E767CA60CCDEF88AF35006B69C2D70B2_il2cpp_TypeInfo_var);
		U3CTimerRoutineU3Ed__9__ctor_m610B0ADDEC1237A4785EECED11224160E31FB051(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String TimeTracker::GetCurrentTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeTracker_GetCurrentTime_m7EB00003870021F330F02977C072702E6485B612 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8239D7D184C3B9CB62A6BDF5686BE90EB8CF240);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return $"{Hours:00}:{Minutes:00}:{Seconds:00}";
		int32_t L_0 = ((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->get_Hours_5();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->get_Minutes_6();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		float L_6 = ((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->get_Seconds_4();
		float L_7 = L_6;
		RuntimeObject * L_8 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6(_stringLiteralA8239D7D184C3B9CB62A6BDF5686BE90EB8CF240, L_2, L_5, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void TimeTracker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeTracker__ctor_m98DD7C9C62D67420646C0CBB44D0F14035C786A9 (TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void endText::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void endText_Start_mAF8E27DF32F7BE1597A48A2507DBF33F2047ADF2 (endText_t8F671A2CB00E79B2059B7F43FC0230D83BAA0D80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral517D808350B69B15A82D8E496BE58CA6EA7F9E01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73124E9790094D4B33B67A45B9974829E69AE9AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2F948238B10213B1CD11691301D4D2307E8E5EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// scoreText.text = "Final Score: " + statsTracker.getScore();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_scoreText_4();
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = statsTracker_getScore_m98263FF93FD72EC7FF3C2FFDB7666BD488F43CC7_inline(/*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral73124E9790094D4B33B67A45B9974829E69AE9AB, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// missedObjText.text = "Missed Objects: " + statsTracker.getMissedObjects();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_missedObjText_5();
		int32_t L_5;
		L_5 = statsTracker_getMissedObjects_m83311F146E3881AEE80CECB6A1B96DCEED5E82D7_inline(/*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralF2F948238B10213B1CD11691301D4D2307E8E5EE, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_7);
		// timePlayedText.text = "Time Played: " + statsTracker.getTime();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_timePlayedText_8();
		String_t* L_9;
		L_9 = statsTracker_getTime_mAC847AF4E4011D011FEE53D566435BF831BB943C_inline(/*hidden argument*/NULL);
		String_t* L_10;
		L_10 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral517D808350B69B15A82D8E496BE58CA6EA7F9E01, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_10);
		// }
		return;
	}
}
// System.Void endText::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void endText_Update_mA7658DDFE24B45BF15F58903A82FA3D06B3F2E7A (endText_t8F671A2CB00E79B2059B7F43FC0230D83BAA0D80 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void endText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void endText__ctor_mB381E5AAD45A401344AAD4001DC48250BAAD4C27 (endText_t8F671A2CB00E79B2059B7F43FC0230D83BAA0D80 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void statsTracker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker_Start_m2BE08FFD1F1A64C004BF7C9D29A8D02189BB7C43 (statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void statsTracker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker_Update_m9815AF28DD560E1C0C3151E04D7AE056E120F13A (statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void statsTracker::setScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker_setScore_m308A8A5F627A162F85D7F35921D7E8E0F46AE6DD (int32_t ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score = s;
		int32_t L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->set_score_7(L_0);
		// }
		return;
	}
}
// System.Int32 statsTracker::getScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t statsTracker_getScore_m98263FF93FD72EC7FF3C2FFDB7666BD488F43CC7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return score;
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		int32_t L_0 = ((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->get_score_7();
		return L_0;
	}
}
// System.Void statsTracker::resetScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker_resetScore_m622F2CE128A30CF7738D9EA373AD258EF42424B2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score = 0;
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->set_score_7(0);
		// }
		return;
	}
}
// System.Void statsTracker::increaseMissedObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker_increaseMissedObjects_m2EE755F2E319652971DA7A627A0C87F8B7721602 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// missedObjects++;
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		int32_t L_0 = ((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->get_missedObjects_4();
		((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->set_missedObjects_4(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// }
		return;
	}
}
// System.Int32 statsTracker::getMissedObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t statsTracker_getMissedObjects_m83311F146E3881AEE80CECB6A1B96DCEED5E82D7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return missedObjects;
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		int32_t L_0 = ((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->get_missedObjects_4();
		return L_0;
	}
}
// System.Void statsTracker::resetMissedObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker_resetMissedObjects_mA56B496E6226359FDEEEBB27F76B3A5562FEB208 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// missedObjects = 0;
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->set_missedObjects_4(0);
		// }
		return;
	}
}
// System.Void statsTracker::increasePowerUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker_increasePowerUp_m66D82205A2743B0CB9FB4DB0B0F452BF2521C873 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// collectedPowerUp++;
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		int32_t L_0 = ((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->get_collectedPowerUp_5();
		((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->set_collectedPowerUp_5(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// }
		return;
	}
}
// System.Int32 statsTracker::getPowerUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t statsTracker_getPowerUp_m8C1C2702848C26ABA881886B97E5F23C2B3EACE2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return collectedPowerUp;
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		int32_t L_0 = ((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->get_collectedPowerUp_5();
		return L_0;
	}
}
// System.Void statsTracker::resetPowerUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker_resetPowerUp_mA19F40E5445761AC25763FC3244AC21C44E6EDD4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// collectedPowerUp = 0;
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->set_collectedPowerUp_5(0);
		// }
		return;
	}
}
// System.Void statsTracker::increasePowerDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker_increasePowerDown_m36F404878514FCAAE8BCE10D04755125450E1376 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// collectedPowerDown++;
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		int32_t L_0 = ((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->get_collectedPowerDown_6();
		((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->set_collectedPowerDown_6(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// }
		return;
	}
}
// System.Int32 statsTracker::getPowerDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t statsTracker_getPowerDown_mF75BF5E8A27F0CF83D2E1D8DB84077D0EB883480 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return collectedPowerDown;
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		int32_t L_0 = ((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->get_collectedPowerDown_6();
		return L_0;
	}
}
// System.Void statsTracker::resetPowerDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker_resetPowerDown_mABC1FBAC36F4B427DD00D63FF7ADB89EF03E18BB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// collectedPowerDown = 0;
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->set_collectedPowerDown_6(0);
		// }
		return;
	}
}
// System.Void statsTracker::setTime(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker_setTime_mCB05600E29F99952BF90B06E79E3DFF0B774DE8A (String_t* ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timePlayed = t;
		String_t* L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->set_timePlayed_8(L_0);
		// }
		return;
	}
}
// System.String statsTracker::getTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* statsTracker_getTime_mAC847AF4E4011D011FEE53D566435BF831BB943C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return timePlayed;
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		String_t* L_0 = ((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->get_timePlayed_8();
		return L_0;
	}
}
// System.Void statsTracker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker__ctor_m88023D41C71B314400AAF629ADC8478B00C0865D (statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void statsTracker::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void statsTracker__cctor_m58234449DA1085D4B45538A7E3408A3AB0013B62 (const RuntimeMethod* method)
{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoParticleSystem__ctor_mA046B73C934441755CA5D57991D7C453645AD8CE (DemoParticleSystem_t6F0E4F45BF28278B96F760E47CFDF17FA7F76C2B * __this, const RuntimeMethod* method)
{
	{
		// public int camOffset = 15;
		__this->set_camOffset_5(((int32_t)15));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityStandardAssets.SceneUtils.ParticleSceneControls/DemoParticleSystemList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoParticleSystemList__ctor_mAFBB16272EB2E695826211DD030553401DF6E83B (DemoParticleSystemList_t3885BBD1CA5C4C983B20441E24226833802CD01E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Spawn_items/<Spawn>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnU3Ed__15__ctor_mDF259E1FE589485ECEE6C501358A8D995AE229D6 (U3CSpawnU3Ed__15_t5EC3F5A92B8730CD59D9BC1F4A11433B4C08D4C3 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Spawn_items/<Spawn>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnU3Ed__15_System_IDisposable_Dispose_m521F66B87E96D2A4DF3BAF0C008F4BA620F84399 (U3CSpawnU3Ed__15_t5EC3F5A92B8730CD59D9BC1F4A11433B4C08D4C3 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Spawn_items/<Spawn>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSpawnU3Ed__15_MoveNext_m7D251BE5E65B72FC659421563C5BC62AD970B8FE (U3CSpawnU3Ed__15_t5EC3F5A92B8730CD59D9BC1F4A11433B4C08D4C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9820C3496732D02B184D4FDD866A6B0F158AEC42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3C8A6D75E0496334E5CB7C59886BB5A4E44DAF1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(spawnTime);
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_spawnTime_4();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GameObject go = borsch;
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_7 = V_1;
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_borsch_5();
		V_2 = L_8;
		// if (objectsCounter < objectsNumber)
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_objectsCounter_16();
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_objectsNumber_13();
		if ((((int32_t)L_10) >= ((int32_t)L_12)))
		{
			goto IL_0211;
		}
	}
	{
		// if (objectsArray[objectsCounter] == "dish")
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_13 = V_1;
		NullCheck(L_13);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13->get_objectsArray_17();
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_objectsCounter_16();
		NullCheck(L_14);
		int32_t L_17 = L_16;
		String_t* L_18 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteral9820C3496732D02B184D4FDD866A6B0F158AEC42, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_0164;
		}
	}
	{
		// var random = Random.Range(0, 100);
		int32_t L_20;
		L_20 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)100), /*hidden argument*/NULL);
		V_4 = L_20;
		// if (random < 30)
		int32_t L_21 = V_4;
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)30))))
		{
			goto IL_00ca;
		}
	}
	{
		// go = Instantiate(borsch, new Vector3(Random.Range(minX, maxX + 1), transform.position.y, 0f), Quaternion.identity) as GameObject;
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_22 = V_1;
		NullCheck(L_22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = L_22->get_borsch_5();
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_24 = V_1;
		NullCheck(L_24);
		float L_25 = L_24->get_minX_11();
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_26 = V_1;
		NullCheck(L_26);
		float L_27 = L_26->get_maxX_10();
		float L_28;
		L_28 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_25, ((float)il2cpp_codegen_add((float)L_27, (float)(1.0f))), /*hidden argument*/NULL);
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_29 = V_1;
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_30, /*hidden argument*/NULL);
		float L_32 = L_31.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_33), L_28, L_32, (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_34;
		L_34 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_23, L_33, L_34, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_2 = L_35;
		// }
		goto IL_0203;
	}

IL_00ca:
	{
		// else if ((random > 30 ) && (random < 70))
		int32_t L_36 = V_4;
		if ((((int32_t)L_36) <= ((int32_t)((int32_t)30))))
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_37 = V_4;
		if ((((int32_t)L_37) >= ((int32_t)((int32_t)70))))
		{
			goto IL_011d;
		}
	}
	{
		// go = Instantiate(dumplings, new Vector3(Random.Range(minX, maxX + 1), transform.position.y, 0f), Quaternion.identity) as GameObject;
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_38 = V_1;
		NullCheck(L_38);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = L_38->get_dumplings_6();
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_40 = V_1;
		NullCheck(L_40);
		float L_41 = L_40->get_minX_11();
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_42 = V_1;
		NullCheck(L_42);
		float L_43 = L_42->get_maxX_10();
		float L_44;
		L_44 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_41, ((float)il2cpp_codegen_add((float)L_43, (float)(1.0f))), /*hidden argument*/NULL);
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_45 = V_1;
		NullCheck(L_45);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_46, /*hidden argument*/NULL);
		float L_48 = L_47.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_49), L_44, L_48, (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_50;
		L_50 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_39, L_49, L_50, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_2 = L_51;
		// }
		goto IL_0203;
	}

IL_011d:
	{
		// go = Instantiate(cake, new Vector3(Random.Range(minX, maxX + 1), transform.position.y, 0f), Quaternion.identity) as GameObject;
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_52 = V_1;
		NullCheck(L_52);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = L_52->get_cake_7();
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_54 = V_1;
		NullCheck(L_54);
		float L_55 = L_54->get_minX_11();
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_56 = V_1;
		NullCheck(L_56);
		float L_57 = L_56->get_maxX_10();
		float L_58;
		L_58 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_55, ((float)il2cpp_codegen_add((float)L_57, (float)(1.0f))), /*hidden argument*/NULL);
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_59 = V_1;
		NullCheck(L_59);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_59, /*hidden argument*/NULL);
		NullCheck(L_60);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_60, /*hidden argument*/NULL);
		float L_62 = L_61.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_63), L_58, L_62, (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_64;
		L_64 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65;
		L_65 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_53, L_63, L_64, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_2 = L_65;
		// }
		goto IL_0203;
	}

IL_0164:
	{
		// else if (objectsArray[objectsCounter] == "powerup")
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_66 = V_1;
		NullCheck(L_66);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = L_66->get_objectsArray_17();
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_68 = V_1;
		NullCheck(L_68);
		int32_t L_69 = L_68->get_objectsCounter_16();
		NullCheck(L_67);
		int32_t L_70 = L_69;
		String_t* L_71 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		bool L_72;
		L_72 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_71, _stringLiteralC3C8A6D75E0496334E5CB7C59886BB5A4E44DAF1, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_01c1;
		}
	}
	{
		// go = Instantiate(powerUp, new Vector3(Random.Range(minX, maxX + 1), transform.position.y, 0f), Quaternion.identity) as GameObject;
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_73 = V_1;
		NullCheck(L_73);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_74 = L_73->get_powerUp_8();
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_75 = V_1;
		NullCheck(L_75);
		float L_76 = L_75->get_minX_11();
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_77 = V_1;
		NullCheck(L_77);
		float L_78 = L_77->get_maxX_10();
		float L_79;
		L_79 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_76, ((float)il2cpp_codegen_add((float)L_78, (float)(1.0f))), /*hidden argument*/NULL);
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_80 = V_1;
		NullCheck(L_80);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_81;
		L_81 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_80, /*hidden argument*/NULL);
		NullCheck(L_81);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		L_82 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_81, /*hidden argument*/NULL);
		float L_83 = L_82.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84;
		memset((&L_84), 0, sizeof(L_84));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_84), L_79, L_83, (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_85;
		L_85 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_86;
		L_86 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_74, L_84, L_85, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_2 = L_86;
		// }
		goto IL_0203;
	}

IL_01c1:
	{
		// go = Instantiate(powerDown, new Vector3(Random.Range(minX, maxX + 1), transform.position.y, 0f), Quaternion.identity) as GameObject;
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_87 = V_1;
		NullCheck(L_87);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_88 = L_87->get_powerDown_9();
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_89 = V_1;
		NullCheck(L_89);
		float L_90 = L_89->get_minX_11();
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_91 = V_1;
		NullCheck(L_91);
		float L_92 = L_91->get_maxX_10();
		float L_93;
		L_93 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2(L_90, ((float)il2cpp_codegen_add((float)L_92, (float)(1.0f))), /*hidden argument*/NULL);
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_94 = V_1;
		NullCheck(L_94);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_95;
		L_95 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_94, /*hidden argument*/NULL);
		NullCheck(L_95);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96;
		L_96 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_95, /*hidden argument*/NULL);
		float L_97 = L_96.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_98), L_93, L_97, (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_99;
		L_99 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_100;
		L_100 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_88, L_98, L_99, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		V_2 = L_100;
	}

IL_0203:
	{
		// objectsCounter++;
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_101 = V_1;
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_102 = V_1;
		NullCheck(L_102);
		int32_t L_103 = L_102->get_objectsCounter_16();
		NullCheck(L_101);
		L_101->set_objectsCounter_16(((int32_t)il2cpp_codegen_add((int32_t)L_103, (int32_t)1)));
	}

IL_0211:
	{
		// int speedRandomizer = Random.Range(0, 100);
		int32_t L_104;
		L_104 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)100), /*hidden argument*/NULL);
		V_3 = L_104;
		// if (speedRandomizer < 30)
		int32_t L_105 = V_3;
		if ((((int32_t)L_105) >= ((int32_t)((int32_t)30))))
		{
			goto IL_0236;
		}
	}
	{
		// go.gameObject.GetComponent<Rigidbody2D>().gravityScale = 0.2f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_106 = V_2;
		NullCheck(L_106);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_107;
		L_107 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_106, /*hidden argument*/NULL);
		NullCheck(L_107);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_108;
		L_108 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_107, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		NullCheck(L_108);
		Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF(L_108, (0.200000003f), /*hidden argument*/NULL);
		// }
		goto IL_028d;
	}

IL_0236:
	{
		// else if ((speedRandomizer > 30) && (speedRandomizer < 70))
		int32_t L_109 = V_3;
		if ((((int32_t)L_109) <= ((int32_t)((int32_t)30))))
		{
			goto IL_0257;
		}
	}
	{
		int32_t L_110 = V_3;
		if ((((int32_t)L_110) >= ((int32_t)((int32_t)70))))
		{
			goto IL_0257;
		}
	}
	{
		// go.gameObject.GetComponent<Rigidbody2D>().gravityScale = 0.3f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_111 = V_2;
		NullCheck(L_111);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_112;
		L_112 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_111, /*hidden argument*/NULL);
		NullCheck(L_112);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_113;
		L_113 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_112, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		NullCheck(L_113);
		Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF(L_113, (0.300000012f), /*hidden argument*/NULL);
		// }
		goto IL_028d;
	}

IL_0257:
	{
		// else if ((speedRandomizer > 70) && (speedRandomizer < 90))
		int32_t L_114 = V_3;
		if ((((int32_t)L_114) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0278;
		}
	}
	{
		int32_t L_115 = V_3;
		if ((((int32_t)L_115) >= ((int32_t)((int32_t)90))))
		{
			goto IL_0278;
		}
	}
	{
		// go.gameObject.GetComponent<Rigidbody2D>().gravityScale = 0.4f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_116 = V_2;
		NullCheck(L_116);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_117;
		L_117 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_116, /*hidden argument*/NULL);
		NullCheck(L_117);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_118;
		L_118 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_117, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		NullCheck(L_118);
		Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF(L_118, (0.400000006f), /*hidden argument*/NULL);
		// }
		goto IL_028d;
	}

IL_0278:
	{
		// go.gameObject.GetComponent<Rigidbody2D>().gravityScale = 0.5f;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_119 = V_2;
		NullCheck(L_119);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_120;
		L_120 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_119, /*hidden argument*/NULL);
		NullCheck(L_120);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_121;
		L_121 = GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40(L_120, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_mE749A8DAAB8733CB623A476DC361B88581AF3E40_RuntimeMethod_var);
		NullCheck(L_121);
		Rigidbody2D_set_gravityScale_mEDC82EE2ED74DA9C5AB8A0C4A929B09149522BBF(L_121, (0.5f), /*hidden argument*/NULL);
	}

IL_028d:
	{
		// StartCoroutine("Spawn");
		Spawn_items_t7790D9B277C4EEF074E106A657AF945E6C09AB7E * L_122 = V_1;
		NullCheck(L_122);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_123;
		L_123 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(L_122, _stringLiteral72B58DE8F72FD344433A6CB297B24FE2EEE17AEF, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Spawn_items/<Spawn>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m40FF3370C4B7ED7A2821D50ADAD2B8EFA3CB3386 (U3CSpawnU3Ed__15_t5EC3F5A92B8730CD59D9BC1F4A11433B4C08D4C3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Spawn_items/<Spawn>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSpawnU3Ed__15_System_Collections_IEnumerator_Reset_m538ACD5FEED144BC983BCC2045ED3C4B1B095A2C (U3CSpawnU3Ed__15_t5EC3F5A92B8730CD59D9BC1F4A11433B4C08D4C3 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSpawnU3Ed__15_System_Collections_IEnumerator_Reset_m538ACD5FEED144BC983BCC2045ED3C4B1B095A2C_RuntimeMethod_var)));
	}
}
// System.Object Spawn_items/<Spawn>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSpawnU3Ed__15_System_Collections_IEnumerator_get_Current_mA5F863A1E86099FB554E954771F939D323BB1EB4 (U3CSpawnU3Ed__15_t5EC3F5A92B8730CD59D9BC1F4A11433B4C08D4C3 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TimeTracker/<TimerRoutine>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerRoutineU3Ed__9__ctor_m610B0ADDEC1237A4785EECED11224160E31FB051 (U3CTimerRoutineU3Ed__9_tDC526327E767CA60CCDEF88AF35006B69C2D70B2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TimeTracker/<TimerRoutine>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerRoutineU3Ed__9_System_IDisposable_Dispose_mF186934AFFBDB9D1582BA7C85E752EE13953C326 (U3CTimerRoutineU3Ed__9_tDC526327E767CA60CCDEF88AF35006B69C2D70B2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TimeTracker/<TimerRoutine>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTimerRoutineU3Ed__9_MoveNext_mC5D5DBFAAB03EF121AEB0D6602C152F74B861BE7 (U3CTimerRoutineU3Ed__9_tDC526327E767CA60CCDEF88AF35006B69C2D70B2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00a0;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Seconds = 0;
		((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->set_Seconds_4((0.0f));
		// Hours = 0;
		((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->set_Hours_5(0);
		// Minutes = 0;
		((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->set_Minutes_6(0);
	}

IL_0030:
	{
		// Seconds += Time.deltaTime;
		float L_3 = ((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->get_Seconds_4();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->set_Seconds_4(((float)il2cpp_codegen_add((float)L_3, (float)L_4)));
		// if (Seconds >= 60)
		float L_5 = ((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->get_Seconds_4();
		if ((!(((float)L_5) >= ((float)(60.0f)))))
		{
			goto IL_008a;
		}
	}
	{
		// Seconds -= 60.0f;
		float L_6 = ((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->get_Seconds_4();
		((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->set_Seconds_4(((float)il2cpp_codegen_subtract((float)L_6, (float)(60.0f))));
		// Minutes += 1;
		int32_t L_7 = ((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->get_Minutes_6();
		((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->set_Minutes_6(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		// if (Minutes >= 60)
		int32_t L_8 = ((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->get_Minutes_6();
		if ((((int32_t)L_8) < ((int32_t)((int32_t)60))))
		{
			goto IL_008a;
		}
	}
	{
		// Minutes -= 60;
		int32_t L_9 = ((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->get_Minutes_6();
		((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->set_Minutes_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)60))));
		// Hours += 1;
		int32_t L_10 = ((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->get_Hours_5();
		((TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_StaticFields*)il2cpp_codegen_static_fields_for(TimeTracker_t60594223ADB7996ECC1AD1E06F48A04B20E2E212_il2cpp_TypeInfo_var))->set_Hours_5(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
	}

IL_008a:
	{
		// GetCurrentTime();
		String_t* L_11;
		L_11 = TimeTracker_GetCurrentTime_m7EB00003870021F330F02977C072702E6485B612(/*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a0:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0030;
	}
}
// System.Object TimeTracker/<TimerRoutine>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTimerRoutineU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9B085577ED3022BBADEBDAD60C0578DBE0BA9147 (U3CTimerRoutineU3Ed__9_tDC526327E767CA60CCDEF88AF35006B69C2D70B2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TimeTracker/<TimerRoutine>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerRoutineU3Ed__9_System_Collections_IEnumerator_Reset_mC0866412E791605261958BE0C35DB67268D3DD4E (U3CTimerRoutineU3Ed__9_tDC526327E767CA60CCDEF88AF35006B69C2D70B2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTimerRoutineU3Ed__9_System_Collections_IEnumerator_Reset_mC0866412E791605261958BE0C35DB67268D3DD4E_RuntimeMethod_var)));
	}
}
// System.Object TimeTracker/<TimerRoutine>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTimerRoutineU3Ed__9_System_Collections_IEnumerator_get_Current_m9EE2F8BCC0E543A6BAAB6F14550EE31DAC93FB3F (U3CTimerRoutineU3Ed__9_tDC526327E767CA60CCDEF88AF35006B69C2D70B2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void statsTracker_setTime_mCB05600E29F99952BF90B06E79E3DFF0B774DE8A_inline (String_t* ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timePlayed = t;
		String_t* L_0 = ___t0;
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->set_timePlayed_8(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void statsTracker_setScore_m308A8A5F627A162F85D7F35921D7E8E0F46AE6DD_inline (int32_t ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score = s;
		int32_t L_0 = ___s0;
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->set_score_7(L_0);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_pressPosition_mE644EE1603DFF2087224FF6364EA0204D04D7939_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 pressPosition { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CpressPositionU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PointerEventData_set_position_m65960EBCA54317C91CEFFC4893466F87FB168BBF_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method)
{
	{
		// public Vector2 position { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___value0;
		__this->set_U3CpositionU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m2B1F3640101A6FCDA6B5AF27924FFD10E3A89A6C_inline (Toggle_t68F5A84CDD2BBAEA866F42EB4E0C9F2B431D612E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->get_m_IsOn_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * Selectable_get_targetGraphic_mF2D1BFB9DE33BAB553933533CC4A9135A37F4A72_inline (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, const RuntimeMethod* method)
{
	{
		// public Graphic           targetGraphic     { get { return m_TargetGraphic; } set { if (SetPropertyUtility.SetClass(ref m_TargetGraphic, value))     OnSetProperty(); } }
		Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * L_0 = __this->get_m_TargetGraphic_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t statsTracker_getScore_m98263FF93FD72EC7FF3C2FFDB7666BD488F43CC7_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return score;
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		int32_t L_0 = ((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->get_score_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t statsTracker_getMissedObjects_m83311F146E3881AEE80CECB6A1B96DCEED5E82D7_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return missedObjects;
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		int32_t L_0 = ((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->get_missedObjects_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* statsTracker_getTime_mAC847AF4E4011D011FEE53D566435BF831BB943C_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return timePlayed;
		IL2CPP_RUNTIME_CLASS_INIT(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var);
		String_t* L_0 = ((statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_StaticFields*)il2cpp_codegen_static_fields_for(statsTracker_t23863B5E8A09CC4EE96AE52A7EC5FFA9EBA84B16_il2cpp_TypeInfo_var))->get_timePlayed_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m38EC27A53451661964C4F33683313E1FFF3A060D_gshared_inline (List_1_t367B604D3EA3D6A9EC95A32A521EF83F5DA9B447 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
