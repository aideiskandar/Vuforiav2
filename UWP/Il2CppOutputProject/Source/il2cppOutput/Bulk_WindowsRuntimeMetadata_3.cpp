#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// Windows.UI.Xaml.UIElement
struct UIElement_t285774554;
// Windows.UI.Xaml.Window
struct Window_t610934964;
// Windows.UI.Xaml.Markup.ContentPropertyAttribute
struct ContentPropertyAttribute_t1871920044;
// Windows.UI.Xaml.DependencyObject
struct DependencyObject_t3266284141;
// System.__Il2CppComObject
struct Il2CppComObject;
// Windows.UI.Xaml.IWindowStatics
struct IWindowStatics_t4212309588;
// System.String
struct String_t;
// Windows.UI.Xaml.IDependencyObjectFactory
struct IDependencyObjectFactory_t1390337327;
// Windows.UI.Xaml.IUIElementFactory
struct IUIElementFactory_t520894359;
// Windows.UI.Xaml.IUIElementStatics5
struct IUIElementStatics5_t2850146268;
// Windows.UI.Xaml.IUIElementStatics6
struct IUIElementStatics6_t2849949660;
// Windows.UI.Xaml.IUIElementStatics2
struct IUIElementStatics2_t2850211804;
// Windows.UI.Xaml.IUIElementStatics
struct IUIElementStatics_t2851391452;
// Windows.UI.Xaml.IUIElementStatics7
struct IUIElementStatics7_t2850015196;
// Windows.UI.Xaml.IUIElementStatics4
struct IUIElementStatics4_t2850080732;
// Windows.UI.Xaml.IUIElementStatics3
struct IUIElementStatics3_t2850277340;
// Windows.UI.Xaml.IUIElementStatics8
struct IUIElementStatics8_t2849818588;

extern RuntimeClass* Window_t610934964_il2cpp_TypeInfo_var;
extern const uint32_t IWindowStatics_get_Current_m2727593796_MetadataUsageId;
extern const uint32_t Window_get_Current_m4066583680_MetadataUsageId;
struct IUIElement_t3288794271;
struct IWindow_t1812628404;



// Windows.UI.Xaml.IDependencyObjectFactory
struct NOVTABLE IDependencyObjectFactory_t1390337327 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDependencyObjectFactory_U24__Stripped0_CreateInstance_m2528011140() = 0;
};
// Windows.UI.Xaml.IWindow
struct NOVTABLE IWindow_t1812628404 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped0_get_Bounds_m123376021() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped1_get_Visible_m592197766() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped2_get_Content_m1746690858() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_put_Content_m4117502627(IUIElement_t3288794271* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped3_get_CoreWindow_m4259805472() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped4_get_Dispatcher_m3798848468() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped5_add_Activated_m3811839677() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped6_remove_Activated_m2029729572() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped7_add_Closed_m3691173314() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped8_remove_Closed_m3910943907() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped9_add_SizeChanged_m2557086806() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped10_remove_SizeChanged_m2630680177() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped11_add_VisibilityChanged_m895439912() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped12_remove_VisibilityChanged_m2918732124() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_Activate_m3562427990() = 0;
	virtual il2cpp_hresult_t STDCALL IWindow_U24__Stripped13_Close_m2866880086() = 0;
};
// Windows.UI.Xaml.IUIElement
struct NOVTABLE IUIElement_t3288794271 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped0_get_DesiredSize_m709505871() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped1_get_AllowDrop_m3041840487() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped2_put_AllowDrop_m1914749527() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped3_get_Opacity_m1283699049() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped4_put_Opacity_m1763390924() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped5_get_Clip_m2019843943() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped6_put_Clip_m2265905608() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped7_get_RenderTransform_m3490464697() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped8_put_RenderTransform_m898491632() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped9_get_Projection_m1464130521() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped10_put_Projection_m616859082() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped11_get_RenderTransformOrigin_m3594412852() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped12_put_RenderTransformOrigin_m4070130220() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped13_get_IsHitTestVisible_m1599923731() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped14_put_IsHitTestVisible_m1467555182() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped15_get_Visibility_m1485712346() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped16_put_Visibility_m519271095() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped17_get_RenderSize_m2451352256() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped18_get_UseLayoutRounding_m3341743904() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped19_put_UseLayoutRounding_m3125512970() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped20_get_Transitions_m2849948766() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped21_put_Transitions_m292681833() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped22_get_CacheMode_m3654219909() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped23_put_CacheMode_m2632895200() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped24_get_IsTapEnabled_m3278885581() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped25_put_IsTapEnabled_m1608082586() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped26_get_IsDoubleTapEnabled_m3126845406() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped27_put_IsDoubleTapEnabled_m2925086161() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped28_get_IsRightTapEnabled_m316417938() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped29_put_IsRightTapEnabled_m1518143830() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped30_get_IsHoldingEnabled_m3760226653() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped31_put_IsHoldingEnabled_m1861642174() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped32_get_ManipulationMode_m1557223318() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped33_put_ManipulationMode_m3366924177() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped34_get_PointerCaptures_m3724483891() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped35_add_KeyUp_m200859880() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped36_remove_KeyUp_m119276464() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped37_add_KeyDown_m1840932757() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped38_remove_KeyDown_m3053191285() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped39_add_GotFocus_m746626947() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped40_remove_GotFocus_m2480174581() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped41_add_LostFocus_m1266493993() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped42_remove_LostFocus_m2240699806() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped43_add_DragEnter_m1980480137() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped44_remove_DragEnter_m2374587345() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped45_add_DragLeave_m1764869820() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped46_remove_DragLeave_m1996947567() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped47_add_DragOver_m2971783047() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped48_remove_DragOver_m181087868() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped49_add_Drop_m3309253802() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped50_remove_Drop_m140032712() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped51_add_PointerPressed_m3652816380() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped52_remove_PointerPressed_m2925169172() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped53_add_PointerMoved_m1570630938() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped54_remove_PointerMoved_m3082380070() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped55_add_PointerReleased_m1626534899() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped56_remove_PointerReleased_m1933810421() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped57_add_PointerEntered_m3246226754() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped58_remove_PointerEntered_m3267619821() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped59_add_PointerExited_m1189440032() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped60_remove_PointerExited_m4240502376() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped61_add_PointerCaptureLost_m1281635200() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped62_remove_PointerCaptureLost_m1928036220() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped63_add_PointerCanceled_m1556729753() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped64_remove_PointerCanceled_m1735245720() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped65_add_PointerWheelChanged_m1013600326() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped66_remove_PointerWheelChanged_m1863361210() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped67_add_Tapped_m3601874654() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped68_remove_Tapped_m3911463356() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped69_add_DoubleTapped_m328664637() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped70_remove_DoubleTapped_m1570413593() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped71_add_Holding_m4020918841() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped72_remove_Holding_m1467099910() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped73_add_RightTapped_m935484686() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped74_remove_RightTapped_m3756107077() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped75_add_ManipulationStarting_m750061822() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped76_remove_ManipulationStarting_m3485797370() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped77_add_ManipulationInertiaStarting_m1232703763() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped78_remove_ManipulationInertiaStarting_m1085187474() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped79_add_ManipulationStarted_m1202855073() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped80_remove_ManipulationStarted_m3160566381() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped81_add_ManipulationDelta_m3829629683() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped82_remove_ManipulationDelta_m2594433141() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped83_add_ManipulationCompleted_m1390324433() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped84_remove_ManipulationCompleted_m2373650716() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped85_Measure_m2553385115() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped86_Arrange_m1454536553() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped87_CapturePointer_m1568653454() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped88_ReleasePointerCapture_m2759647656() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped89_ReleasePointerCaptures_m3581341934() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped90_AddHandler_m786959478() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped91_RemoveHandler_m36482523() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped92_TransformToVisual_m3151024488() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped93_InvalidateMeasure_m2862264214() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped94_InvalidateArrange_m1939028230() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement_U24__Stripped95_UpdateLayout_m615574013() = 0;
};
// Windows.UI.Xaml.IUIElementStatics5
struct NOVTABLE IUIElementStatics5_t2850146268 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped0_get_LightsProperty_m2261138472() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped1_get_KeyTipPlacementModeProperty_m987709722() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped2_get_KeyTipHorizontalOffsetProperty_m2917931878() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped3_get_KeyTipVerticalOffsetProperty_m1467972288() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped4_get_XYFocusKeyboardNavigationProperty_m2709596147() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped5_get_XYFocusUpNavigationStrategyProperty_m904536377() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped6_get_XYFocusDownNavigationStrategyProperty_m124140899() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped7_get_XYFocusLeftNavigationStrategyProperty_m1791013667() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped8_get_XYFocusRightNavigationStrategyProperty_m255940994() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped9_get_HighContrastAdjustmentProperty_m554935372() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped10_get_TabFocusNavigationProperty_m1958710776() = 0;
};
// Windows.UI.Xaml.IUIElementStatics6
struct NOVTABLE IUIElementStatics6_t2849949660 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics6_U24__Stripped0_get_GettingFocusEvent_m235841184() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics6_U24__Stripped1_get_LosingFocusEvent_m3992675556() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics6_U24__Stripped2_get_NoFocusCandidateFoundEvent_m4026140250() = 0;
};
// Windows.UI.Xaml.IUIElementStatics7
struct NOVTABLE IUIElementStatics7_t2850015196 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics7_U24__Stripped0_get_PreviewKeyDownEvent_m1717309932() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics7_U24__Stripped1_get_CharacterReceivedEvent_m149088619() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics7_U24__Stripped2_get_PreviewKeyUpEvent_m586550763() = 0;
};
// Windows.UI.Xaml.IWindow2
struct NOVTABLE IWindow2_t194020276 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWindow2_U24__Stripped0_SetTitleBar_m2660430300() = 0;
};
// Windows.UI.Xaml.IUIElement2
struct NOVTABLE IUIElement2_t1568362829 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement2_U24__Stripped0_get_CompositeMode_m2320528698() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement2_U24__Stripped1_put_CompositeMode_m2387925255() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement2_U24__Stripped2_CancelDirectManipulations_m927747193() = 0;
};
// Windows.UI.Xaml.IDependencyObject
struct NOVTABLE IDependencyObject_t3468341335 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped0_GetValue_m1957740890() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped1_SetValue_m1035023860() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped2_ClearValue_m1609098810() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped3_ReadLocalValue_m4161021806() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped4_GetAnimationBaseValue_m182226023() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject_U24__Stripped5_get_Dispatcher_m187262419() = 0;
};
// Windows.UI.Xaml.IDependencyObject2
struct NOVTABLE IDependencyObject2_t3465326679 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDependencyObject2_U24__Stripped0_RegisterPropertyChangedCallback_m1182027682() = 0;
	virtual il2cpp_hresult_t STDCALL IDependencyObject2_U24__Stripped1_UnregisterPropertyChangedCallback_m2683655511() = 0;
};
// Windows.UI.Xaml.IWindow3
struct NOVTABLE IWindow3_t2532672436 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWindow3_U24__Stripped0_get_Compositor_m3306310847() = 0;
};
// Windows.UI.Xaml.IWindowStatics
struct NOVTABLE IWindowStatics_t4212309588 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWindowStatics_get_Current_m2727593796(IWindow_t1812628404** comReturnValue) = 0;
};
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
// Windows.UI.Xaml.IUIElementStatics4
struct NOVTABLE IUIElementStatics4_t2850080732 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped0_get_ContextFlyoutProperty_m3337258647() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped1_get_ExitDisplayModeOnAccessKeyInvokedProperty_m957145381() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped2_get_IsAccessKeyScopeProperty_m1588787071() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped3_get_AccessKeyScopeOwnerProperty_m1259683738() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped4_get_AccessKeyProperty_m96307873() = 0;
};
// Windows.UI.Xaml.IUIElement7
struct NOVTABLE IUIElement7_t1165078302 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped0_get_KeyboardAccelerators_m314738730() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped1_add_CharacterReceived_m3366474890() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped2_remove_CharacterReceived_m3990213188() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped3_add_ProcessKeyboardAccelerators_m393671582() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped4_remove_ProcessKeyboardAccelerators_m583944176() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped5_add_PreviewKeyDown_m3683785448() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped6_remove_PreviewKeyDown_m1586689604() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped7_add_PreviewKeyUp_m169946256() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped8_remove_PreviewKeyUp_m2860320783() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement7_U24__Stripped9_TryInvokeKeyboardAccelerator_m928627232() = 0;
};
// Windows.UI.Xaml.IUIElement8
struct NOVTABLE IUIElement8_t2374931883 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped0_get_KeyTipTarget_m1722824891() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped1_put_KeyTipTarget_m955880836() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped2_get_KeyboardAcceleratorPlacementTarget_m3293357750() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped3_put_KeyboardAcceleratorPlacementTarget_m423403693() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped4_get_KeyboardAcceleratorPlacementMode_m816856528() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped5_put_KeyboardAcceleratorPlacementMode_m2830594714() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped6_add_BringIntoViewRequested_m4147617655() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement8_U24__Stripped7_remove_BringIntoViewRequested_m1561917121() = 0;
};
// Windows.UI.Xaml.IUIElementFactory
struct NOVTABLE IUIElementFactory_t520894359 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// Windows.UI.Xaml.IUIElement5
struct NOVTABLE IUIElement5_t2327877716 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped0_get_Lights_m3852189642() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped1_get_KeyTipPlacementMode_m3518358736() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped2_put_KeyTipPlacementMode_m4085063995() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped3_get_KeyTipHorizontalOffset_m1041374737() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped4_put_KeyTipHorizontalOffset_m1053336967() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped5_get_KeyTipVerticalOffset_m242791772() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped6_put_KeyTipVerticalOffset_m4275497207() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped7_get_XYFocusKeyboardNavigation_m1413502891() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped8_put_XYFocusKeyboardNavigation_m2278532605() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped9_get_XYFocusUpNavigationStrategy_m736030916() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped10_put_XYFocusUpNavigationStrategy_m4003263365() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped11_get_XYFocusDownNavigationStrategy_m130943138() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped12_put_XYFocusDownNavigationStrategy_m4218571923() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped13_get_XYFocusLeftNavigationStrategy_m2044067174() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped14_put_XYFocusLeftNavigationStrategy_m3083452028() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped15_get_XYFocusRightNavigationStrategy_m2694847801() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped16_put_XYFocusRightNavigationStrategy_m2397921798() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped17_get_HighContrastAdjustment_m459726645() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped18_put_HighContrastAdjustment_m4227084072() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped19_get_TabFocusNavigation_m3111587259() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped20_put_TabFocusNavigation_m938136106() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped21_add_GettingFocus_m1116968056() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped22_remove_GettingFocus_m3837629682() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped23_add_LosingFocus_m253118518() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped24_remove_LosingFocus_m1486763130() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped25_add_NoFocusCandidateFound_m4234253717() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped26_remove_NoFocusCandidateFound_m4022790968() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped27_StartBringIntoView_m3875079692() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement5_U24__Stripped28_StartBringIntoView_m145204572() = 0;
};
// Windows.UI.Xaml.IUIElementStatics8
struct NOVTABLE IUIElementStatics8_t2849818588 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped0_get_BringIntoViewRequestedEvent_m3557629462() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped1_get_ContextRequestedEvent_m3564525032() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped2_get_KeyTipTargetProperty_m495934429() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped3_get_KeyboardAcceleratorPlacementTargetProperty_m3470991248() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped4_get_KeyboardAcceleratorPlacementModeProperty_m2034484522() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped5_RegisterAsScrollPort_m3289950510() = 0;
};
// Windows.UI.Xaml.IUIElement3
struct NOVTABLE IUIElement3_t3134446770 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped0_get_Transform3D_m934841580() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped1_put_Transform3D_m638506349() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped2_get_CanDrag_m520210759() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped3_put_CanDrag_m3560492036() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped4_add_DragStarting_m2694354441() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped5_remove_DragStarting_m2454540868() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped6_add_DropCompleted_m1175786039() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped7_remove_DropCompleted_m611253450() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement3_U24__Stripped8_StartDragAsync_m2459046213() = 0;
};
// Windows.UI.Xaml.IUIElement4
struct NOVTABLE IUIElement4_t761793775 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped0_get_ContextFlyout_m2253164546() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped1_put_ContextFlyout_m3007812933() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped2_get_ExitDisplayModeOnAccessKeyInvoked_m842823807() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped3_put_ExitDisplayModeOnAccessKeyInvoked_m2535379857() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped4_get_IsAccessKeyScope_m3950109518() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped5_put_IsAccessKeyScope_m2750740659() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped6_get_AccessKeyScopeOwner_m2732354747() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped7_put_AccessKeyScopeOwner_m3207032609() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped8_get_AccessKey_m802488922() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped9_put_AccessKey_m687120149() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped10_add_ContextRequested_m2385230748() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped11_remove_ContextRequested_m1248239922() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped12_add_ContextCanceled_m2065709033() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped13_remove_ContextCanceled_m3874277537() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped14_add_AccessKeyDisplayRequested_m3815559356() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped15_remove_AccessKeyDisplayRequested_m567478217() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped16_add_AccessKeyDisplayDismissed_m999452147() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped17_remove_AccessKeyDisplayDismissed_m3269864802() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped18_add_AccessKeyInvoked_m3234915069() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElement4_U24__Stripped19_remove_AccessKeyInvoked_m3497140154() = 0;
};
// Windows.UI.Xaml.IUIElementOverrides
struct NOVTABLE IUIElementOverrides_t2453769578 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides_U24__Stripped0_OnCreateAutomationPeer_m4180009883() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides_U24__Stripped1_OnDisconnectVisualChildren_m2912367149() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides_U24__Stripped2_FindSubElementsForTouchTargeting_m2501103066() = 0;
};
// Windows.UI.Xaml.IUIElementStatics3
struct NOVTABLE IUIElementStatics3_t2850277340 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics3_U24__Stripped0_get_Transform3DProperty_m80143119() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics3_U24__Stripped1_get_CanDragProperty_m2972085764() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics3_U24__Stripped2_TryStartDirectManipulation_m2962009957() = 0;
};
// Windows.UI.Xaml.IUIElementOverrides8
struct NOVTABLE IUIElementOverrides8_t3983117674 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides8_U24__Stripped0_OnKeyboardAcceleratorInvoked_m579114990() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides8_U24__Stripped1_OnBringIntoViewRequested_m2077379998() = 0;
};
// Windows.UI.Xaml.IUIElementStatics
struct NOVTABLE IUIElementStatics_t2851391452 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped0_get_KeyDownEvent_m3282640798() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped1_get_KeyUpEvent_m2430006508() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped2_get_PointerEnteredEvent_m706886339() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped3_get_PointerPressedEvent_m1604554080() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped4_get_PointerMovedEvent_m1720155775() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped5_get_PointerReleasedEvent_m1544992601() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped6_get_PointerExitedEvent_m2286235842() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped7_get_PointerCaptureLostEvent_m2216822275() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped8_get_PointerCanceledEvent_m3727711221() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped9_get_PointerWheelChangedEvent_m1234194674() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped10_get_TappedEvent_m457097512() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped11_get_DoubleTappedEvent_m2036555176() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped12_get_HoldingEvent_m4187082037() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped13_get_RightTappedEvent_m2020476792() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped14_get_ManipulationStartingEvent_m2779776069() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped15_get_ManipulationInertiaStartingEvent_m1734054308() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped16_get_ManipulationStartedEvent_m2167151048() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped17_get_ManipulationDeltaEvent_m1802581843() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped18_get_ManipulationCompletedEvent_m3264411539() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped19_get_DragEnterEvent_m2373691178() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped20_get_DragLeaveEvent_m1839505660() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped21_get_DragOverEvent_m559253999() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped22_get_DropEvent_m2352208043() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped23_get_AllowDropProperty_m993570433() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped24_get_OpacityProperty_m740386576() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped25_get_ClipProperty_m3943830253() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped26_get_RenderTransformProperty_m2507760255() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped27_get_ProjectionProperty_m3076524370() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped28_get_RenderTransformOriginProperty_m4294828757() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped29_get_IsHitTestVisibleProperty_m1476920693() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped30_get_VisibilityProperty_m2327890703() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped31_get_UseLayoutRoundingProperty_m3937161119() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped32_get_TransitionsProperty_m891434974() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped33_get_CacheModeProperty_m374930607() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped34_get_IsTapEnabledProperty_m1165183625() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped35_get_IsDoubleTapEnabledProperty_m1523951021() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped36_get_IsRightTapEnabledProperty_m680050134() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped37_get_IsHoldingEnabledProperty_m3582174128() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped38_get_ManipulationModeProperty_m729018583() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped39_get_PointerCapturesProperty_m3889929875() = 0;
};
// Windows.UI.Xaml.IUIElementStatics2
struct NOVTABLE IUIElementStatics2_t2850211804 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics2_U24__Stripped0_get_CompositeModeProperty_m348935177() = 0;
};
// Windows.UI.Xaml.IUIElementOverrides7
struct NOVTABLE IUIElementOverrides7_t2026802538 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides7_U24__Stripped0_GetChildrenInTabFocusOrder_m2438105784() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementOverrides7_U24__Stripped1_OnProcessKeyboardAccelerators_m3389550628() = 0;
};
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef WINDOW_T610934964_H
#define WINDOW_T610934964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Window
struct  Window_t610934964  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Xaml.IWindow
	IWindow_t1812628404* ____iwindow_t1812628404;
	// Cached pointer to Windows.UI.Xaml.IWindow2
	IWindow2_t194020276* ____iwindow2_t194020276;
	// Cached pointer to Windows.UI.Xaml.IWindow3
	IWindow3_t2532672436* ____iwindow3_t2532672436;

public:
	inline IWindow_t1812628404* get_____iwindow_t1812628404()
	{
		IWindow_t1812628404* returnValue = ____iwindow_t1812628404;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IWindow_t1812628404::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IWindow_t1812628404>((&____iwindow_t1812628404), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwindow_t1812628404;
			}
		}
		return returnValue;
	}

	inline IWindow2_t194020276* get_____iwindow2_t194020276()
	{
		IWindow2_t194020276* returnValue = ____iwindow2_t194020276;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IWindow2_t194020276::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IWindow2_t194020276>((&____iwindow2_t194020276), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwindow2_t194020276;
			}
		}
		return returnValue;
	}

	inline IWindow3_t2532672436* get_____iwindow3_t2532672436()
	{
		IWindow3_t2532672436* returnValue = ____iwindow3_t2532672436;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IWindow3_t2532672436::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IWindow3_t2532672436>((&____iwindow3_t2532672436), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwindow3_t2532672436;
			}
		}
		return returnValue;
	}
};

struct Window_t610934964_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.IWindowStatics
	IWindowStatics_t4212309588* ____iwindowStatics_t4212309588;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.Window"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IWindowStatics_t4212309588* get_____iwindowStatics_t4212309588()
	{
		IWindowStatics_t4212309588* returnValue = ____iwindowStatics_t4212309588;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IWindowStatics_t4212309588::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IWindowStatics_t4212309588>((&____iwindowStatics_t4212309588), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwindowStatics_t4212309588;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOW_T610934964_H
#ifndef CONTENTPROPERTYATTRIBUTE_T1871920044_H
#define CONTENTPROPERTYATTRIBUTE_T1871920044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Markup.ContentPropertyAttribute
struct  ContentPropertyAttribute_t1871920044  : public Attribute_t861562559
{
public:
	// System.String Windows.UI.Xaml.Markup.ContentPropertyAttribute::Name
	String_t* ___Name_0;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ContentPropertyAttribute_t1871920044, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTPROPERTYATTRIBUTE_T1871920044_H
#ifndef DEPENDENCYOBJECT_T3266284141_H
#define DEPENDENCYOBJECT_T3266284141_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.DependencyObject
struct  DependencyObject_t3266284141  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Xaml.IDependencyObject
	IDependencyObject_t3468341335* ____idependencyObject_t3468341335;
	// Cached pointer to Windows.UI.Xaml.IDependencyObject2
	IDependencyObject2_t3465326679* ____idependencyObject2_t3465326679;

public:
	inline IDependencyObject_t3468341335* get_____idependencyObject_t3468341335()
	{
		IDependencyObject_t3468341335* returnValue = ____idependencyObject_t3468341335;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDependencyObject_t3468341335::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDependencyObject_t3468341335>((&____idependencyObject_t3468341335), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idependencyObject_t3468341335;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IDependencyObject2_t3465326679* get_____idependencyObject2_t3465326679()
	{
		IDependencyObject2_t3465326679* returnValue = ____idependencyObject2_t3465326679;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IDependencyObject2_t3465326679::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDependencyObject2_t3465326679>((&____idependencyObject2_t3465326679), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idependencyObject2_t3465326679;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}
};

struct DependencyObject_t3266284141_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.IDependencyObjectFactory
	IDependencyObjectFactory_t1390337327* ____idependencyObjectFactory_t1390337327;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.DependencyObject"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDependencyObjectFactory_t1390337327* get_____idependencyObjectFactory_t1390337327()
	{
		IDependencyObjectFactory_t1390337327* returnValue = ____idependencyObjectFactory_t1390337327;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDependencyObjectFactory_t1390337327::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IDependencyObjectFactory_t1390337327>((&____idependencyObjectFactory_t1390337327), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idependencyObjectFactory_t1390337327;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPENDENCYOBJECT_T3266284141_H
#ifndef UIELEMENT_T285774554_H
#define UIELEMENT_T285774554_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.UIElement
struct  UIElement_t285774554  : public DependencyObject_t3266284141
{
public:
	// Cached pointer to Windows.UI.Xaml.IUIElement
	IUIElement_t3288794271* ____iuIElement_t3288794271;
	// Cached pointer to Windows.UI.Xaml.IUIElementOverrides
	IUIElementOverrides_t2453769578* ____iuIElementOverrides_t2453769578;
	// Cached pointer to Windows.UI.Xaml.IUIElement2
	IUIElement2_t1568362829* ____iuIElement2_t1568362829;
	// Cached pointer to Windows.UI.Xaml.IUIElement3
	IUIElement3_t3134446770* ____iuIElement3_t3134446770;
	// Cached pointer to Windows.UI.Xaml.IUIElement4
	IUIElement4_t761793775* ____iuIElement4_t761793775;
	// Cached pointer to Windows.UI.Xaml.IUIElement5
	IUIElement5_t2327877716* ____iuIElement5_t2327877716;
	// Cached pointer to Windows.UI.Xaml.IUIElement7
	IUIElement7_t1165078302* ____iuIElement7_t1165078302;
	// Cached pointer to Windows.UI.Xaml.IUIElementOverrides7
	IUIElementOverrides7_t2026802538* ____iuIElementOverrides7_t2026802538;
	// Cached pointer to Windows.UI.Xaml.IUIElement8
	IUIElement8_t2374931883* ____iuIElement8_t2374931883;
	// Cached pointer to Windows.UI.Xaml.IUIElementOverrides8
	IUIElementOverrides8_t3983117674* ____iuIElementOverrides8_t3983117674;

public:
	inline IUIElement_t3288794271* get_____iuIElement_t3288794271()
	{
		IUIElement_t3288794271* returnValue = ____iuIElement_t3288794271;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElement_t3288794271::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElement_t3288794271>((&____iuIElement_t3288794271), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElement_t3288794271;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IUIElementOverrides_t2453769578* get_____iuIElementOverrides_t2453769578()
	{
		IUIElementOverrides_t2453769578* returnValue = ____iuIElementOverrides_t2453769578;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElementOverrides_t2453769578::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementOverrides_t2453769578>((&____iuIElementOverrides_t2453769578), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementOverrides_t2453769578;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IUIElement2_t1568362829* get_____iuIElement2_t1568362829()
	{
		IUIElement2_t1568362829* returnValue = ____iuIElement2_t1568362829;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElement2_t1568362829::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElement2_t1568362829>((&____iuIElement2_t1568362829), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElement2_t1568362829;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IUIElement3_t3134446770* get_____iuIElement3_t3134446770()
	{
		IUIElement3_t3134446770* returnValue = ____iuIElement3_t3134446770;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElement3_t3134446770::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElement3_t3134446770>((&____iuIElement3_t3134446770), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElement3_t3134446770;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IUIElement4_t761793775* get_____iuIElement4_t761793775()
	{
		IUIElement4_t761793775* returnValue = ____iuIElement4_t761793775;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElement4_t761793775::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElement4_t761793775>((&____iuIElement4_t761793775), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElement4_t761793775;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IUIElement5_t2327877716* get_____iuIElement5_t2327877716()
	{
		IUIElement5_t2327877716* returnValue = ____iuIElement5_t2327877716;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElement5_t2327877716::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElement5_t2327877716>((&____iuIElement5_t2327877716), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElement5_t2327877716;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IUIElement7_t1165078302* get_____iuIElement7_t1165078302()
	{
		IUIElement7_t1165078302* returnValue = ____iuIElement7_t1165078302;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElement7_t1165078302::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElement7_t1165078302>((&____iuIElement7_t1165078302), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElement7_t1165078302;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IUIElementOverrides7_t2026802538* get_____iuIElementOverrides7_t2026802538()
	{
		IUIElementOverrides7_t2026802538* returnValue = ____iuIElementOverrides7_t2026802538;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElementOverrides7_t2026802538::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementOverrides7_t2026802538>((&____iuIElementOverrides7_t2026802538), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementOverrides7_t2026802538;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IUIElement8_t2374931883* get_____iuIElement8_t2374931883()
	{
		IUIElement8_t2374931883* returnValue = ____iuIElement8_t2374931883;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElement8_t2374931883::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElement8_t2374931883>((&____iuIElement8_t2374931883), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElement8_t2374931883;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}

	inline IUIElementOverrides8_t3983117674* get_____iuIElementOverrides8_t3983117674()
	{
		IUIElementOverrides8_t3983117674* returnValue = ____iuIElementOverrides8_t3983117674;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUIElementOverrides8_t3983117674::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementOverrides8_t3983117674>((&____iuIElementOverrides8_t3983117674), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementOverrides8_t3983117674;
			}
			else if (!klass->is_import_or_windows_runtime)
			{
				returnValue->Release();
			}
		}
		return returnValue;
	}
};

struct UIElement_t285774554_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.IUIElementFactory
	IUIElementFactory_t520894359* ____iuIElementFactory_t520894359;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics5
	IUIElementStatics5_t2850146268* ____iuIElementStatics5_t2850146268;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics6
	IUIElementStatics6_t2849949660* ____iuIElementStatics6_t2849949660;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics2
	IUIElementStatics2_t2850211804* ____iuIElementStatics2_t2850211804;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics
	IUIElementStatics_t2851391452* ____iuIElementStatics_t2851391452;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics7
	IUIElementStatics7_t2850015196* ____iuIElementStatics7_t2850015196;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics4
	IUIElementStatics4_t2850080732* ____iuIElementStatics4_t2850080732;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics3
	IUIElementStatics3_t2850277340* ____iuIElementStatics3_t2850277340;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics8
	IUIElementStatics8_t2849818588* ____iuIElementStatics8_t2849818588;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.UIElement"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IUIElementFactory_t520894359* get_____iuIElementFactory_t520894359()
	{
		IUIElementFactory_t520894359* returnValue = ____iuIElementFactory_t520894359;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementFactory_t520894359::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementFactory_t520894359>((&____iuIElementFactory_t520894359), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementFactory_t520894359;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics5_t2850146268* get_____iuIElementStatics5_t2850146268()
	{
		IUIElementStatics5_t2850146268* returnValue = ____iuIElementStatics5_t2850146268;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics5_t2850146268::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementStatics5_t2850146268>((&____iuIElementStatics5_t2850146268), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics5_t2850146268;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics6_t2849949660* get_____iuIElementStatics6_t2849949660()
	{
		IUIElementStatics6_t2849949660* returnValue = ____iuIElementStatics6_t2849949660;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics6_t2849949660::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementStatics6_t2849949660>((&____iuIElementStatics6_t2849949660), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics6_t2849949660;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics2_t2850211804* get_____iuIElementStatics2_t2850211804()
	{
		IUIElementStatics2_t2850211804* returnValue = ____iuIElementStatics2_t2850211804;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics2_t2850211804::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementStatics2_t2850211804>((&____iuIElementStatics2_t2850211804), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics2_t2850211804;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics_t2851391452* get_____iuIElementStatics_t2851391452()
	{
		IUIElementStatics_t2851391452* returnValue = ____iuIElementStatics_t2851391452;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics_t2851391452::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementStatics_t2851391452>((&____iuIElementStatics_t2851391452), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics_t2851391452;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics7_t2850015196* get_____iuIElementStatics7_t2850015196()
	{
		IUIElementStatics7_t2850015196* returnValue = ____iuIElementStatics7_t2850015196;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics7_t2850015196::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementStatics7_t2850015196>((&____iuIElementStatics7_t2850015196), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics7_t2850015196;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics4_t2850080732* get_____iuIElementStatics4_t2850080732()
	{
		IUIElementStatics4_t2850080732* returnValue = ____iuIElementStatics4_t2850080732;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics4_t2850080732::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementStatics4_t2850080732>((&____iuIElementStatics4_t2850080732), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics4_t2850080732;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics3_t2850277340* get_____iuIElementStatics3_t2850277340()
	{
		IUIElementStatics3_t2850277340* returnValue = ____iuIElementStatics3_t2850277340;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics3_t2850277340::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementStatics3_t2850277340>((&____iuIElementStatics3_t2850277340), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics3_t2850277340;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics8_t2849818588* get_____iuIElementStatics8_t2849818588()
	{
		IUIElementStatics8_t2849818588* returnValue = ____iuIElementStatics8_t2849818588;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics8_t2849818588::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUIElementStatics8_t2849818588>((&____iuIElementStatics8_t2849818588), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics8_t2849818588;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIELEMENT_T285774554_H



// System.Void Windows.UI.Xaml.DependencyObject::Finalize()
extern "C"  void DependencyObject_Finalize_m3302098354 (DependencyObject_t3266284141 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.__Il2CppComObject::Finalize()
extern "C"  void __Il2CppComObject_Finalize_m2923638372 (Il2CppComObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.UI.Xaml.IUIElement3
const Il2CppGuid IUIElement3_t3134446770::IID = { 0xbc2b28f1, 0x26f2, 0x4aab, 0xb2, 0x56, 0x3b, 0x53, 0x50, 0x88, 0x1e, 0x37 };
// Windows.UI.Xaml.IUIElement4
const Il2CppGuid IUIElement4_t761793775::IID = { 0x69145cd4, 0x199a, 0x4657, 0x9e, 0x57, 0xe9, 0x9e, 0x8f, 0x13, 0x67, 0x12 };
// Windows.UI.Xaml.IUIElement5
const Il2CppGuid IUIElement5_t2327877716::IID = { 0x8eed9bc2, 0xa58c, 0x4453, 0xaf, 0xf, 0xa9, 0x2e, 0xe0, 0x6d, 0x3, 0x17 };
// Windows.UI.Xaml.IUIElement7
const Il2CppGuid IUIElement7_t1165078302::IID = { 0xcafc4968, 0x6369, 0x4249, 0x80, 0xf9, 0x3d, 0x65, 0x63, 0x19, 0xe8, 0x11 };
// Windows.UI.Xaml.IUIElement8
const Il2CppGuid IUIElement8_t2374931883::IID = { 0x3ab70e85, 0xd508, 0x4477, 0xb6, 0xf8, 0xe, 0x43, 0x57, 0x1, 0xc8, 0x36 };
// Windows.UI.Xaml.IUIElementFactory
const Il2CppGuid IUIElementFactory_t520894359::IID = { 0xb9ee93fe, 0xa338, 0x419f, 0xac, 0x32, 0x91, 0xdc, 0xaa, 0xdf, 0x5d, 0x8 };
// Windows.UI.Xaml.IUIElementOverrides
const Il2CppGuid IUIElementOverrides_t2453769578::IID = { 0x608d2f1d, 0x7858, 0x4aeb, 0x89, 0xe4, 0xb5, 0x4e, 0x2c, 0x7e, 0xd3, 0xd3 };
// Windows.UI.Xaml.IUIElementOverrides7
const Il2CppGuid IUIElementOverrides7_t2026802538::IID = { 0xb97f7f68, 0xc29b, 0x4c99, 0xa1, 0xc3, 0x95, 0x26, 0x19, 0xd6, 0xe7, 0x20 };
// Windows.UI.Xaml.IUIElementOverrides8
const Il2CppGuid IUIElementOverrides8_t3983117674::IID = { 0x4a5a645c, 0x548d, 0x48cf, 0xb9, 0x98, 0x78, 0x44, 0xd6, 0xe2, 0x35, 0xa1 };
// Windows.UI.Xaml.IUIElementStatics
const Il2CppGuid IUIElementStatics_t2851391452::IID = { 0x58d3573b, 0xf52c, 0x45be, 0x98, 0x8b, 0xa5, 0x86, 0x95, 0x64, 0x87, 0x3c };
// Windows.UI.Xaml.IUIElementStatics2
const Il2CppGuid IUIElementStatics2_t2850211804::IID = { 0x58d3574b, 0xf53c, 0x45be, 0x98, 0x9b, 0xa5, 0x86, 0x95, 0x64, 0x87, 0x4c };
// Windows.UI.Xaml.IUIElementStatics3
const Il2CppGuid IUIElementStatics3_t2850277340::IID = { 0xd1f87ade, 0xeca1, 0x4561, 0xa3, 0x2b, 0x64, 0x60, 0x1b, 0x4e, 0x5, 0x97 };
// Windows.UI.Xaml.IUIElementStatics4
const Il2CppGuid IUIElementStatics4_t2850080732::IID = { 0x1d157d61, 0x16af, 0x411f, 0xb7, 0x74, 0x27, 0x23, 0x75, 0xa4, 0xac, 0x2c };
// Windows.UI.Xaml.IUIElementStatics5
const Il2CppGuid IUIElementStatics5_t2850146268::IID = { 0x59bd7d91, 0x8fa3, 0x4c65, 0xba, 0x1b, 0x40, 0xdf, 0x38, 0x55, 0x6c, 0xbb };
// Windows.UI.Xaml.IUIElementStatics6
const Il2CppGuid IUIElementStatics6_t2849949660::IID = { 0x647e03b7, 0x36a, 0x4dea, 0x95, 0x40, 0x1d, 0xd7, 0xfd, 0x12, 0x66, 0xf1 };
// Windows.UI.Xaml.IUIElementStatics7
const Il2CppGuid IUIElementStatics7_t2850015196::IID = { 0xda9b4493, 0xa695, 0x4145, 0xae, 0x93, 0x88, 0x80, 0x24, 0x39, 0x6a, 0xf };
// Windows.UI.Xaml.IUIElementStatics8
const Il2CppGuid IUIElementStatics8_t2849818588::IID = { 0x17be3487, 0x4875, 0x4915, 0xb0, 0xb1, 0xa4, 0xc0, 0xf8, 0x51, 0xdf, 0x3f };
// Windows.UI.Xaml.IWindow
const Il2CppGuid IWindow_t1812628404::IID = { 0x3276167d, 0xc9f6, 0x462d, 0x9d, 0xe2, 0xae, 0x4c, 0x1f, 0xd8, 0xc2, 0xe5 };
// System.Void Windows.UI.Xaml.IWindow::put_Content(Windows.UI.Xaml.UIElement)
extern "C"  void IWindow_put_Content_m4117502627 (RuntimeObject* __this, UIElement_t285774554 * ___value0, const RuntimeMethod* method)
{
	IWindow_t1812628404* ____iwindow_t1812628404 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IWindow_t1812628404::IID, reinterpret_cast<void**>(&____iwindow_t1812628404));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IUIElement_t3288794271* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			____value0_marshaled = (___value0)->get_____iuIElement_t3288794271();
			____value0_marshaled->AddRef();
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IUIElement_t3288794271>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iwindow_t1812628404->IWindow_put_Content_m4117502627(____value0_marshaled);
	____iwindow_t1812628404->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

}
// System.Void Windows.UI.Xaml.IWindow::Activate()
extern "C"  void IWindow_Activate_m3562427990 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IWindow_t1812628404* ____iwindow_t1812628404 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IWindow_t1812628404::IID, reinterpret_cast<void**>(&____iwindow_t1812628404));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	hr = ____iwindow_t1812628404->IWindow_Activate_m3562427990();
	____iwindow_t1812628404->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// Windows.UI.Xaml.IWindow2
const Il2CppGuid IWindow2_t194020276::IID = { 0xd384759f, 0x34f6, 0x4482, 0x84, 0x35, 0xf5, 0x52, 0xf9, 0xb2, 0x4c, 0xc8 };
// Windows.UI.Xaml.IWindow3
const Il2CppGuid IWindow3_t2532672436::IID = { 0xb70bdc9d, 0x1c35, 0x462a, 0x9b, 0x97, 0x80, 0x8d, 0x5a, 0xf9, 0xf2, 0x8e };
// Windows.UI.Xaml.IWindowStatics
const Il2CppGuid IWindowStatics_t4212309588::IID = { 0x93328409, 0x4ea1, 0x4afa, 0x83, 0xdc, 0xc, 0x4e, 0x73, 0xe8, 0x8b, 0xb1 };
// Windows.UI.Xaml.Window Windows.UI.Xaml.IWindowStatics::get_Current()
extern "C"  Window_t610934964 * IWindowStatics_get_Current_m2727593796 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IWindowStatics_get_Current_m2727593796_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IWindowStatics_t4212309588* ____iwindowStatics_t4212309588 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IWindowStatics_t4212309588::IID, reinterpret_cast<void**>(&____iwindowStatics_t4212309588));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IWindow_t1812628404* returnValue = NULL;
	hr = ____iwindowStatics_t4212309588->IWindowStatics_get_Current_m2727593796(&returnValue);
	____iwindowStatics_t4212309588->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	Window_t610934964 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<Window_t610934964>(returnValue, Window_t610934964_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.UI.Xaml.Markup.ContentPropertyAttribute::.ctor()
extern "C"  void ContentPropertyAttribute__ctor_m1816207389 (ContentPropertyAttribute_t1871920044 * __this, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_invalid_operation_exception("Cannot construct type 'Windows.UI.Xaml.Markup.ContentPropertyAttribute'. Windows Runtime attribute types are not constructable."),NULL);
}
// System.Void Windows.UI.Xaml.UIElement::Finalize()
extern "C"  void UIElement_Finalize_m1508206873 (UIElement_t285774554 * __this, const RuntimeMethod* method)
{
	if (il2cpp_codegen_is_import_or_windows_runtime((RuntimeObject*)__this))
	{
		if (__this->____iuIElement_t3288794271 != NULL)
		{
			__this->____iuIElement_t3288794271->Release();
		}
		if (__this->____iuIElementOverrides_t2453769578 != NULL)
		{
			__this->____iuIElementOverrides_t2453769578->Release();
		}
		if (__this->____iuIElement2_t1568362829 != NULL)
		{
			__this->____iuIElement2_t1568362829->Release();
		}
		if (__this->____iuIElement3_t3134446770 != NULL)
		{
			__this->____iuIElement3_t3134446770->Release();
		}
		if (__this->____iuIElement4_t761793775 != NULL)
		{
			__this->____iuIElement4_t761793775->Release();
		}
		if (__this->____iuIElement5_t2327877716 != NULL)
		{
			__this->____iuIElement5_t2327877716->Release();
		}
		if (__this->____iuIElement7_t1165078302 != NULL)
		{
			__this->____iuIElement7_t1165078302->Release();
		}
		if (__this->____iuIElementOverrides7_t2026802538 != NULL)
		{
			__this->____iuIElementOverrides7_t2026802538->Release();
		}
		if (__this->____iuIElement8_t2374931883 != NULL)
		{
			__this->____iuIElement8_t2374931883->Release();
		}
		if (__this->____iuIElementOverrides8_t3983117674 != NULL)
		{
			__this->____iuIElementOverrides8_t3983117674->Release();
		}
	}

	__this->____iuIElement_t3288794271 = NULL;
	__this->____iuIElementOverrides_t2453769578 = NULL;
	__this->____iuIElement2_t1568362829 = NULL;
	__this->____iuIElement3_t3134446770 = NULL;
	__this->____iuIElement4_t761793775 = NULL;
	__this->____iuIElement5_t2327877716 = NULL;
	__this->____iuIElement7_t1165078302 = NULL;
	__this->____iuIElementOverrides7_t2026802538 = NULL;
	__this->____iuIElement8_t2374931883 = NULL;
	__this->____iuIElementOverrides8_t3983117674 = NULL;

	DependencyObject_Finalize_m3302098354(__this, NULL);
}
// System.Void Windows.UI.Xaml.Window::put_Content(Windows.UI.Xaml.UIElement)
extern "C"  void Window_put_Content_m1467370454 (Window_t610934964 * __this, UIElement_t285774554 * ___value0, const RuntimeMethod* method)
{
	IWindow_t1812628404* ____iwindow_t1812628404 = __this->get_____iwindow_t1812628404();

	// Marshaling of parameter '___value0' to native representation
	IUIElement_t3288794271* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			____value0_marshaled = (___value0)->get_____iuIElement_t3288794271();
			____value0_marshaled->AddRef();
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IUIElement_t3288794271>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____iwindow_t1812628404->IWindow_put_Content_m4117502627(____value0_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

}
// System.Void Windows.UI.Xaml.Window::Activate()
extern "C"  void Window_Activate_m1676596102 (Window_t610934964 * __this, const RuntimeMethod* method)
{
	IWindow_t1812628404* ____iwindow_t1812628404 = __this->get_____iwindow_t1812628404();

	// Native function invocation
	const il2cpp_hresult_t hr = ____iwindow_t1812628404->IWindow_Activate_m3562427990();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

}
// Windows.UI.Xaml.Window Windows.UI.Xaml.Window::get_Current()
extern "C"  Window_t610934964 * Window_get_Current_m4066583680 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Window_get_Current_m4066583680_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IWindowStatics_t4212309588* ____iwindowStatics_t4212309588 = ((Window_t610934964_StaticFields*)Window_t610934964_il2cpp_TypeInfo_var->static_fields)->get_____iwindowStatics_t4212309588();

	// Native function invocation
	IWindow_t1812628404* returnValue = NULL;
	const il2cpp_hresult_t hr = ____iwindowStatics_t4212309588->IWindowStatics_get_Current_m2727593796(&returnValue);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	Window_t610934964 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<Window_t610934964>(returnValue, Window_t610934964_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.UI.Xaml.Window::Finalize()
extern "C"  void Window_Finalize_m748653472 (Window_t610934964 * __this, const RuntimeMethod* method)
{
	if (__this->____iwindow_t1812628404 != NULL)
	{
		__this->____iwindow_t1812628404->Release();
	}
	if (__this->____iwindow2_t194020276 != NULL)
	{
		__this->____iwindow2_t194020276->Release();
	}
	if (__this->____iwindow3_t2532672436 != NULL)
	{
		__this->____iwindow3_t2532672436->Release();
	}

	__this->____iwindow_t1812628404 = NULL;
	__this->____iwindow2_t194020276 = NULL;
	__this->____iwindow3_t2532672436 = NULL;

	__Il2CppComObject_Finalize_m2923638372(__this, NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
