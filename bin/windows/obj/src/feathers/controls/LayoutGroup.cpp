#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_controls_LayoutGroup
#include <feathers/controls/LayoutGroup.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_feathers_core_InvalidationFlag
#include <feathers/core/InvalidationFlag.h>
#endif
#ifndef INCLUDED_feathers_core_MeasureSprite
#include <feathers/core/MeasureSprite.h>
#endif
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_layout_AutoSizeMode
#include <feathers/layout/AutoSizeMode.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayout
#include <feathers/layout/ILayout.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_layout_LayoutBoundsResult
#include <feathers/layout/LayoutBoundsResult.h>
#endif
#ifndef INCLUDED_feathers_layout_Measurements
#include <feathers/layout/Measurements.h>
#endif
#ifndef INCLUDED_feathers_skins_IProgrammaticSkin
#include <feathers/skins/IProgrammaticSkin.h>
#endif
#ifndef INCLUDED_feathers_style_IDarkModeTheme
#include <feathers/style/IDarkModeTheme.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_ITheme
#include <feathers/style/ITheme.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_feathers_themes_ClassVariantTheme
#include <feathers/themes/ClassVariantTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_BaseSteelTheme
#include <feathers/themes/steel/BaseSteelTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_components_SteelLayoutGroupStyles
#include <feathers/themes/steel/components/SteelLayoutGroupStyles.h>
#endif
#ifndef INCLUDED_feathers_utils_MeasurementsUtil
#include <feathers/utils/MeasurementsUtil.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af811a8d34d03704_60_new,"feathers.controls.LayoutGroup","new",0x437ef0cd,"feathers.controls.LayoutGroup.new","feathers/controls/LayoutGroup.hx",60,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_208_get_autoSizeMode,"feathers.controls.LayoutGroup","get_autoSizeMode",0x944c034f,"feathers.controls.LayoutGroup.get_autoSizeMode","feathers/controls/LayoutGroup.hx",208,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_211_set_autoSizeMode,"feathers.controls.LayoutGroup","set_autoSizeMode",0xea8df0c3,"feathers.controls.LayoutGroup.set_autoSizeMode","feathers/controls/LayoutGroup.hx",211,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_235_get_numChildren,"feathers.controls.LayoutGroup","get_numChildren",0xb7b2b129,"feathers.controls.LayoutGroup.get_numChildren","feathers/controls/LayoutGroup.hx",235,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_241_get__numChildren,"feathers.controls.LayoutGroup","get__numChildren",0x335663a2,"feathers.controls.LayoutGroup.get__numChildren","feathers/controls/LayoutGroup.hx",241,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_244_addChildAt,"feathers.controls.LayoutGroup","addChildAt",0xbf2a24c1,"feathers.controls.LayoutGroup.addChildAt","feathers/controls/LayoutGroup.hx",244,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_274__addChild,"feathers.controls.LayoutGroup","_addChild",0xdf937747,"feathers.controls.LayoutGroup._addChild","feathers/controls/LayoutGroup.hx",274,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_278__addChildAt,"feathers.controls.LayoutGroup","_addChildAt",0x84d5501a,"feathers.controls.LayoutGroup._addChildAt","feathers/controls/LayoutGroup.hx",278,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_281_removeChild,"feathers.controls.LayoutGroup","removeChild",0x28025c25,"feathers.controls.LayoutGroup.removeChild","feathers/controls/LayoutGroup.hx",281,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_298__removeChild,"feathers.controls.LayoutGroup","_removeChild",0x581d1eac,"feathers.controls.LayoutGroup._removeChild","feathers/controls/LayoutGroup.hx",298,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_301_removeChildAt,"feathers.controls.LayoutGroup","removeChildAt",0xf26da878,"feathers.controls.LayoutGroup.removeChildAt","feathers/controls/LayoutGroup.hx",301,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_309__removeChildAt,"feathers.controls.LayoutGroup","_removeChildAt",0x70a35abf,"feathers.controls.LayoutGroup._removeChildAt","feathers/controls/LayoutGroup.hx",309,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_313_getChildIndex,"feathers.controls.LayoutGroup","getChildIndex",0x6c0932b9,"feathers.controls.LayoutGroup.getChildIndex","feathers/controls/LayoutGroup.hx",313,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_317__getChildIndex,"feathers.controls.LayoutGroup","_getChildIndex",0xea3ee500,"feathers.controls.LayoutGroup._getChildIndex","feathers/controls/LayoutGroup.hx",317,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_320_getChildByName,"feathers.controls.LayoutGroup","getChildByName",0x965e463b,"feathers.controls.LayoutGroup.getChildByName","feathers/controls/LayoutGroup.hx",320,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_330__getChildByName,"feathers.controls.LayoutGroup","_getChildByName",0x87249214,"feathers.controls.LayoutGroup._getChildByName","feathers/controls/LayoutGroup.hx",330,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_333_removeChildren,"feathers.controls.LayoutGroup","removeChildren",0x2daae256,"feathers.controls.LayoutGroup.removeChildren","feathers/controls/LayoutGroup.hx",333,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_356__removeChildren,"feathers.controls.LayoutGroup","_removeChildren",0x1e712e2f,"feathers.controls.LayoutGroup._removeChildren","feathers/controls/LayoutGroup.hx",356,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_359_setChildIndex,"feathers.controls.LayoutGroup","setChildIndex",0xb10f14c5,"feathers.controls.LayoutGroup.setChildIndex","feathers/controls/LayoutGroup.hx",359,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_372__setChildIndex,"feathers.controls.LayoutGroup","_setChildIndex",0x2f44c70c,"feathers.controls.LayoutGroup._setChildIndex","feathers/controls/LayoutGroup.hx",372,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_376_getChildAt,"feathers.controls.LayoutGroup","getChildAt",0xa7017eec,"feathers.controls.LayoutGroup.getChildAt","feathers/controls/LayoutGroup.hx",376,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_380__getChildAt,"feathers.controls.LayoutGroup","_getChildAt",0x6cacaa45,"feathers.controls.LayoutGroup._getChildAt","feathers/controls/LayoutGroup.hx",380,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_384_initializeLayoutGroupTheme,"feathers.controls.LayoutGroup","initializeLayoutGroupTheme",0x64927c37,"feathers.controls.LayoutGroup.initializeLayoutGroupTheme","feathers/controls/LayoutGroup.hx",384,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_387_getPrivateIndexForPublicIndex,"feathers.controls.LayoutGroup","getPrivateIndexForPublicIndex",0xa6fef172,"feathers.controls.LayoutGroup.getPrivateIndexForPublicIndex","feathers/controls/LayoutGroup.hx",387,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_403_get_xmlContent,"feathers.controls.LayoutGroup","get_xmlContent",0x64a2d51e,"feathers.controls.LayoutGroup.get_xmlContent","feathers/controls/LayoutGroup.hx",403,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_406_set_xmlContent,"feathers.controls.LayoutGroup","set_xmlContent",0x84c2bd92,"feathers.controls.LayoutGroup.set_xmlContent","feathers/controls/LayoutGroup.hx",406,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_425_validateNow,"feathers.controls.LayoutGroup","validateNow",0xaed4978d,"feathers.controls.LayoutGroup.validateNow","feathers/controls/LayoutGroup.hx",425,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_437_update,"feathers.controls.LayoutGroup","update",0xbf9aa7bc,"feathers.controls.LayoutGroup.update","feathers/controls/LayoutGroup.hx",437,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_473_refreshDisabledOverlay,"feathers.controls.LayoutGroup","refreshDisabledOverlay",0xa7e4058c,"feathers.controls.LayoutGroup.refreshDisabledOverlay","feathers/controls/LayoutGroup.hx",473,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_494_refreshLayout,"feathers.controls.LayoutGroup","refreshLayout",0x09fa1d92,"feathers.controls.LayoutGroup.refreshLayout","feathers/controls/LayoutGroup.hx",494,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_508_refreshBackgroundSkin,"feathers.controls.LayoutGroup","refreshBackgroundSkin",0x6095fc73,"feathers.controls.LayoutGroup.refreshBackgroundSkin","feathers/controls/LayoutGroup.hx",508,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_518_getCurrentBackgroundSkin,"feathers.controls.LayoutGroup","getCurrentBackgroundSkin",0xd772f5a1,"feathers.controls.LayoutGroup.getCurrentBackgroundSkin","feathers/controls/LayoutGroup.hx",518,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_525_addCurrentBackgroundSkin,"feathers.controls.LayoutGroup","addCurrentBackgroundSkin",0x08ee4636,"feathers.controls.LayoutGroup.addCurrentBackgroundSkin","feathers/controls/LayoutGroup.hx",525,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_544_removeCurrentBackgroundSkin,"feathers.controls.LayoutGroup","removeCurrentBackgroundSkin",0x8e103c2d,"feathers.controls.LayoutGroup.removeCurrentBackgroundSkin","feathers/controls/LayoutGroup.hx",544,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_559_refreshMaskSkin,"feathers.controls.LayoutGroup","refreshMaskSkin",0x81de6271,"feathers.controls.LayoutGroup.refreshMaskSkin","feathers/controls/LayoutGroup.hx",559,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_570_getCurrentMaskSkin,"feathers.controls.LayoutGroup","getCurrentMaskSkin",0x4b27251f,"feathers.controls.LayoutGroup.getCurrentMaskSkin","feathers/controls/LayoutGroup.hx",570,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_573_addCurrentMaskSkin,"feathers.controls.LayoutGroup","addCurrentMaskSkin",0xe6d927f4,"feathers.controls.LayoutGroup.addCurrentMaskSkin","feathers/controls/LayoutGroup.hx",573,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_587_removeCurrentMaskSkin,"feathers.controls.LayoutGroup","removeCurrentMaskSkin",0xe869baab,"feathers.controls.LayoutGroup.removeCurrentMaskSkin","feathers/controls/LayoutGroup.hx",587,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_600_refreshViewPortBounds,"feathers.controls.LayoutGroup","refreshViewPortBounds",0xe8bd3283,"feathers.controls.LayoutGroup.refreshViewPortBounds","feathers/controls/LayoutGroup.hx",600,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_683_handleCustomLayout,"feathers.controls.LayoutGroup","handleCustomLayout",0x804b1336,"feathers.controls.LayoutGroup.handleCustomLayout","feathers/controls/LayoutGroup.hx",683,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_691_handleManualLayout,"feathers.controls.LayoutGroup","handleManualLayout",0xc78a578b,"feathers.controls.LayoutGroup.handleManualLayout","feathers/controls/LayoutGroup.hx",691,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_745_handleLayoutResult,"feathers.controls.LayoutGroup","handleLayoutResult",0x4bbdf522,"feathers.controls.LayoutGroup.handleLayoutResult","feathers/controls/LayoutGroup.hx",745,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_751_refreshMaskLayout,"feathers.controls.LayoutGroup","refreshMaskLayout",0xfc23df9e,"feathers.controls.LayoutGroup.refreshMaskLayout","feathers/controls/LayoutGroup.hx",751,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_765_refreshBackgroundLayout,"feathers.controls.LayoutGroup","refreshBackgroundLayout",0xab777e20,"feathers.controls.LayoutGroup.refreshBackgroundLayout","feathers/controls/LayoutGroup.hx",765,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_786_validateChildren,"feathers.controls.LayoutGroup","validateChildren",0x94f08b68,"feathers.controls.LayoutGroup.validateChildren","feathers/controls/LayoutGroup.hx",786,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_798_layoutGroup_addedToStageHandler,"feathers.controls.LayoutGroup","layoutGroup_addedToStageHandler",0x63f56d4a,"feathers.controls.LayoutGroup.layoutGroup_addedToStageHandler","feathers/controls/LayoutGroup.hx",798,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_809_layoutGroup_removedFromStageHandler,"feathers.controls.LayoutGroup","layoutGroup_removedFromStageHandler",0x435e6819,"feathers.controls.LayoutGroup.layoutGroup_removedFromStageHandler","feathers/controls/LayoutGroup.hx",809,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_815_layoutGroup_stage_resizeHandler,"feathers.controls.LayoutGroup","layoutGroup_stage_resizeHandler",0x772a2558,"feathers.controls.LayoutGroup.layoutGroup_stage_resizeHandler","feathers/controls/LayoutGroup.hx",815,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_818_layoutGroup_child_resizeHandler,"feathers.controls.LayoutGroup","layoutGroup_child_resizeHandler",0xb03d6cb6,"feathers.controls.LayoutGroup.layoutGroup_child_resizeHandler","feathers/controls/LayoutGroup.hx",818,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_829_layoutGroup_child_layoutDataChangeHandler,"feathers.controls.LayoutGroup","layoutGroup_child_layoutDataChangeHandler",0x824ed626,"feathers.controls.LayoutGroup.layoutGroup_child_layoutDataChangeHandler","feathers/controls/LayoutGroup.hx",829,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_840_layoutGroup_layout_changeHandler,"feathers.controls.LayoutGroup","layoutGroup_layout_changeHandler",0xdcb321a2,"feathers.controls.LayoutGroup.layoutGroup_layout_changeHandler","feathers/controls/LayoutGroup.hx",840,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_85_get_layout,"feathers.controls.LayoutGroup","get_layout",0x3a3395a6,"feathers.controls.LayoutGroup.get_layout","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_99_set_layout,"feathers.controls.LayoutGroup","set_layout",0x3db1341a,"feathers.controls.LayoutGroup.set_layout","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_125_clearStyle_layout,"feathers.controls.LayoutGroup","clearStyle_layout",0x71c71592,"feathers.controls.LayoutGroup.clearStyle_layout","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_85_get_backgroundSkin,"feathers.controls.LayoutGroup","get_backgroundSkin",0x95e3a887,"feathers.controls.LayoutGroup.get_backgroundSkin","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_99_set_backgroundSkin,"feathers.controls.LayoutGroup","set_backgroundSkin",0x7292dafb,"feathers.controls.LayoutGroup.set_backgroundSkin","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_125_clearStyle_backgroundSkin,"feathers.controls.LayoutGroup","clearStyle_backgroundSkin",0x521af473,"feathers.controls.LayoutGroup.clearStyle_backgroundSkin","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_85_get_disabledBackgroundSkin,"feathers.controls.LayoutGroup","get_disabledBackgroundSkin",0xbf63fb23,"feathers.controls.LayoutGroup.get_disabledBackgroundSkin","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_99_set_disabledBackgroundSkin,"feathers.controls.LayoutGroup","set_disabledBackgroundSkin",0x1ef8c197,"feathers.controls.LayoutGroup.set_disabledBackgroundSkin","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_125_clearStyle_disabledBackgroundSkin,"feathers.controls.LayoutGroup","clearStyle_disabledBackgroundSkin",0x3aeb130f,"feathers.controls.LayoutGroup.clearStyle_disabledBackgroundSkin","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_85_get_maskSkin,"feathers.controls.LayoutGroup","get_maskSkin",0x4d750785,"feathers.controls.LayoutGroup.get_maskSkin","feathers/macros/StyleMacro.hx",85,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_99_set_maskSkin,"feathers.controls.LayoutGroup","set_maskSkin",0x626e2af9,"feathers.controls.LayoutGroup.set_maskSkin","feathers/macros/StyleMacro.hx",99,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_ca6a2a38fe1f1011_125_clearStyle_maskSkin,"feathers.controls.LayoutGroup","clearStyle_maskSkin",0x30d95a71,"feathers.controls.LayoutGroup.clearStyle_maskSkin","feathers/macros/StyleMacro.hx",125,0x3426f2ba)
HX_LOCAL_STACK_FRAME(_hx_pos_59a4bfa62b570069_42_get_styleContext,"feathers.controls.LayoutGroup","get_styleContext",0xb74ddcba,"feathers.controls.LayoutGroup.get_styleContext","feathers/macros/StyleContextMacro.hx",42,0xea61cbb9)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_60_boot,"feathers.controls.LayoutGroup","boot",0xc3acc325,"feathers.controls.LayoutGroup.boot","feathers/controls/LayoutGroup.hx",60,0x9fa86723)
HX_LOCAL_STACK_FRAME(_hx_pos_af811a8d34d03704_77_boot,"feathers.controls.LayoutGroup","boot",0xc3acc325,"feathers.controls.LayoutGroup.boot","feathers/controls/LayoutGroup.hx",77,0x9fa86723)
namespace feathers{
namespace controls{

void LayoutGroup_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_af811a8d34d03704_60_new)
HXLINE( 185)		this->_hx___maskSkin = null();
HXLINE( 159)		this->_hx___disabledBackgroundSkin = null();
HXLINE( 138)		this->_hx___backgroundSkin = null();
HXLINE( 109)		this->_hx___layout = null();
HXLINE( 396)		this->_xmlContent = null();
HXLINE( 187)		this->_autoSizeMode = ::feathers::layout::AutoSizeMode_obj::CONTENT_dyn();
HXLINE( 161)		this->_currentMaskSkin = null();
HXLINE( 117)		this->_backgroundSkinMeasurements = null();
HXLINE( 116)		this->_currentBackgroundSkin = null();
HXLINE( 115)		this->_ignoreLayoutChanges = false;
HXLINE( 114)		this->_ignoreChangesButSetFlags = false;
HXLINE( 113)		this->_ignoreChildChanges = false;
HXLINE( 112)		this->_layoutMeasurements =  ::feathers::layout::Measurements_obj::__alloc( HX_CTX ,null());
HXLINE( 111)		this->_layoutResult =  ::feathers::layout::LayoutBoundsResult_obj::__alloc( HX_CTX );
HXLINE(  91)		this->items = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  85)		this->initializeLayoutGroupTheme();
HXLINE(  87)		super::__construct();
HXLINE(  88)		this->addEventListener(HX_("addedToStage",63,22,55,0c),this->layoutGroup_addedToStageHandler_dyn(),null(),null(),null());
            	}

Dynamic LayoutGroup_obj::__CreateEmpty() { return new LayoutGroup_obj; }

void *LayoutGroup_obj::_hx_vtable = 0;

Dynamic LayoutGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LayoutGroup_obj > _hx_result = new LayoutGroup_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LayoutGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x093ab78b) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x093ab78b;
				}
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x11a722e7 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x58123034) {
			if (inClassId<=(int)0x4af7dd8e) {
				return inClassId==(int)0x4033f4be || inClassId==(int)0x4af7dd8e;
			} else {
				return inClassId==(int)0x58123034;
			}
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

 ::feathers::layout::AutoSizeMode LayoutGroup_obj::get_autoSizeMode(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_208_get_autoSizeMode)
HXDLIN( 208)		return this->_autoSizeMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,get_autoSizeMode,return )

 ::feathers::layout::AutoSizeMode LayoutGroup_obj::set_autoSizeMode( ::feathers::layout::AutoSizeMode value){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_211_set_autoSizeMode)
HXLINE( 212)		if (::hx::IsPointerEq( this->_autoSizeMode,value )) {
HXLINE( 213)			return this->_autoSizeMode;
            		}
HXLINE( 215)		this->_autoSizeMode = value;
HXLINE( 216)		this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
HXLINE( 217)		if (::hx::IsNotNull( this->stage )) {
HXLINE( 218)			if (::hx::IsPointerEq( this->_autoSizeMode,::feathers::layout::AutoSizeMode_obj::STAGE_dyn() )) {
HXLINE( 219)				this->stage->addEventListener(HX_("resize",f4,59,7b,08),this->layoutGroup_stage_resizeHandler_dyn(),false,0,true);
HXLINE( 220)				this->addEventListener(HX_("removedFromStage",34,21,76,ba),this->layoutGroup_removedFromStageHandler_dyn(),null(),null(),null());
            			}
            			else {
HXLINE( 222)				this->stage->removeEventListener(HX_("resize",f4,59,7b,08),this->layoutGroup_stage_resizeHandler_dyn(),null());
HXLINE( 223)				this->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->layoutGroup_removedFromStageHandler_dyn(),null());
            			}
            		}
HXLINE( 226)		return this->_autoSizeMode;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,set_autoSizeMode,return )

int LayoutGroup_obj::get_numChildren(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_235_get_numChildren)
HXDLIN( 235)		return this->items->length;
            	}


int LayoutGroup_obj::get__numChildren(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_241_get__numChildren)
HXDLIN( 241)		return this->super::get_numChildren();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,get__numChildren,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::addChildAt( ::openfl::display::DisplayObject child,int index){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_244_addChildAt)
HXLINE( 245)		int oldIndex = this->items->indexOf(child,null());
HXLINE( 246)		if ((oldIndex == index)) {
HXLINE( 247)			return child;
            		}
HXLINE( 249)		if ((oldIndex >= 0)) {
HXLINE( 250)			this->items->remove(child);
            		}
HXLINE( 252)		int privateIndex = this->getPrivateIndexForPublicIndex(index);
HXLINE( 255)		this->items->insert(index,child);
HXLINE( 256)		 ::openfl::display::DisplayObject result = this->_addChildAt(child,privateIndex);
HXLINE( 259)		child->addEventListener(HX_("resize",f4,59,7b,08),this->layoutGroup_child_resizeHandler_dyn(),null(),null(),null());
HXLINE( 260)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 261)			child->addEventListener(HX_("layoutDataChange",84,c2,16,c9),this->layoutGroup_child_layoutDataChangeHandler_dyn(),false,0,true);
            		}
HXLINE( 263)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 264)		return result;
            	}


 ::openfl::display::DisplayObject LayoutGroup_obj::_addChild( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_274__addChild)
HXDLIN( 274)		return this->super::addChildAt(child,this->get__numChildren());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,_addChild,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::_addChildAt( ::openfl::display::DisplayObject child,int index){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_278__addChildAt)
HXDLIN( 278)		return this->super::addChildAt(child,index);
            	}


HX_DEFINE_DYNAMIC_FUNC2(LayoutGroup_obj,_addChildAt,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::removeChild( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_281_removeChild)
HXLINE( 282)		bool _hx_tmp;
HXDLIN( 282)		if (::hx::IsNotNull( child )) {
HXLINE( 282)			_hx_tmp = ::hx::IsInstanceNotEq( child->parent,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE( 282)			_hx_tmp = true;
            		}
HXDLIN( 282)		if (_hx_tmp) {
HXLINE( 283)			return child;
            		}
HXLINE( 285)		this->items->remove(child);
HXLINE( 286)		 ::openfl::display::DisplayObject result = this->_removeChild(child);
HXLINE( 289)		child->removeEventListener(HX_("resize",f4,59,7b,08),this->layoutGroup_child_resizeHandler_dyn(),null());
HXLINE( 290)		if (::Std_obj::isOfType(child,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 291)			child->removeEventListener(HX_("layoutDataChange",84,c2,16,c9),this->layoutGroup_child_layoutDataChangeHandler_dyn(),null());
            		}
HXLINE( 293)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 294)		return result;
            	}


 ::openfl::display::DisplayObject LayoutGroup_obj::_removeChild( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_298__removeChild)
HXDLIN( 298)		return this->super::removeChild(child);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,_removeChild,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::removeChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_301_removeChildAt)
HXLINE( 302)		bool _hx_tmp;
HXDLIN( 302)		if ((index >= 0)) {
HXLINE( 302)			_hx_tmp = (index < this->items->length);
            		}
            		else {
HXLINE( 302)			_hx_tmp = false;
            		}
HXDLIN( 302)		if (_hx_tmp) {
HXLINE( 303)			return this->removeChild(this->items->__get(index).StaticCast<  ::openfl::display::DisplayObject >());
            		}
HXLINE( 305)		return null();
            	}


 ::openfl::display::DisplayObject LayoutGroup_obj::_removeChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_309__removeChildAt)
HXDLIN( 309)		return this->super::removeChildAt(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,_removeChildAt,return )

int LayoutGroup_obj::getChildIndex( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_313_getChildIndex)
HXDLIN( 313)		return this->items->indexOf(child,null());
            	}


int LayoutGroup_obj::_getChildIndex( ::openfl::display::DisplayObject child){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_317__getChildIndex)
HXDLIN( 317)		return this->super::getChildIndex(child);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,_getChildIndex,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::getChildByName(::String name){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_320_getChildByName)
HXLINE( 321)		{
HXLINE( 321)			int _g = 0;
HXDLIN( 321)			::Array< ::Dynamic> _g1 = this->items;
HXDLIN( 321)			while((_g < _g1->length)){
HXLINE( 321)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 321)				_g = (_g + 1);
HXLINE( 322)				if ((child->get_name() == name)) {
HXLINE( 323)					return child;
            				}
            			}
            		}
HXLINE( 326)		return null();
            	}


 ::openfl::display::DisplayObject LayoutGroup_obj::_getChildByName(::String name){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_330__getChildByName)
HXDLIN( 330)		return this->super::getChildByName(name);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,_getChildByName,return )

void LayoutGroup_obj::removeChildren(::hx::Null< int >  __o_beginIndex,::hx::Null< int >  __o_endIndex){
            		int beginIndex = __o_beginIndex.Default(0);
            		int endIndex = __o_endIndex.Default(2147483647);
            	HX_GC_STACKFRAME(&_hx_pos_af811a8d34d03704_333_removeChildren)
HXLINE( 334)		if ((endIndex == (int)2147483647)) {
HXLINE( 335)			endIndex = (this->items->length - 1);
HXLINE( 337)			if ((endIndex < 0)) {
HXLINE( 338)				return;
            			}
            		}
HXLINE( 342)		if ((beginIndex > (this->items->length - 1))) {
HXLINE( 343)			return;
            		}
            		else {
HXLINE( 344)			bool _hx_tmp;
HXDLIN( 344)			bool _hx_tmp1;
HXDLIN( 344)			if ((endIndex >= beginIndex)) {
HXLINE( 344)				_hx_tmp1 = (beginIndex < 0);
            			}
            			else {
HXLINE( 344)				_hx_tmp1 = true;
            			}
HXDLIN( 344)			if (!(_hx_tmp1)) {
HXLINE( 344)				_hx_tmp = (endIndex > this->items->length);
            			}
            			else {
HXLINE( 344)				_hx_tmp = true;
            			}
HXDLIN( 344)			if (_hx_tmp) {
HXLINE( 345)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::RangeError_obj::__alloc( HX_CTX ,HX_("The supplied index is out of bounds.",17,96,1b,51))));
            			}
            		}
HXLINE( 348)		int numRemovals = (endIndex - beginIndex);
HXLINE( 349)		while((numRemovals >= 0)){
HXLINE( 350)			this->removeChildAt(beginIndex);
HXLINE( 351)			numRemovals = (numRemovals - 1);
            		}
            	}


void LayoutGroup_obj::_removeChildren(::hx::Null< int >  __o_beginIndex,::hx::Null< int >  __o_endIndex){
            		int beginIndex = __o_beginIndex.Default(0);
            		int endIndex = __o_endIndex.Default(2147483647);
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_356__removeChildren)
HXDLIN( 356)		this->super::removeChildren(beginIndex,endIndex);
            	}


HX_DEFINE_DYNAMIC_FUNC2(LayoutGroup_obj,_removeChildren,(void))

void LayoutGroup_obj::setChildIndex( ::openfl::display::DisplayObject child,int index){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_359_setChildIndex)
HXLINE( 360)		int oldIndex = this->getChildIndex(child);
HXLINE( 361)		if ((oldIndex == index)) {
HXLINE( 363)			return;
            		}
HXLINE( 365)		this->_setChildIndex(child,this->getPrivateIndexForPublicIndex(index));
HXLINE( 366)		this->items->remove(child);
HXLINE( 367)		this->items->insert(index,child);
HXLINE( 368)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
            	}


void LayoutGroup_obj::_setChildIndex( ::openfl::display::DisplayObject child,int index){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_372__setChildIndex)
HXDLIN( 372)		this->super::setChildIndex(child,index);
            	}


HX_DEFINE_DYNAMIC_FUNC2(LayoutGroup_obj,_setChildIndex,(void))

 ::openfl::display::DisplayObject LayoutGroup_obj::getChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_376_getChildAt)
HXDLIN( 376)		return this->items->__get(index).StaticCast<  ::openfl::display::DisplayObject >();
            	}


 ::openfl::display::DisplayObject LayoutGroup_obj::_getChildAt(int index){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_380__getChildAt)
HXDLIN( 380)		return this->super::getChildAt(index);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,_getChildAt,return )

void LayoutGroup_obj::initializeLayoutGroupTheme(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_384_initializeLayoutGroupTheme)
HXDLIN( 384)		::feathers::themes::steel::components::SteelLayoutGroupStyles_obj::initialize(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,initializeLayoutGroupTheme,(void))

int LayoutGroup_obj::getPrivateIndexForPublicIndex(int publicIndex){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_387_getPrivateIndexForPublicIndex)
HXLINE( 388)		if ((this->items->length > 0)) {
HXLINE( 389)			return (publicIndex + this->_getChildIndex(this->items->__get(0).StaticCast<  ::openfl::display::DisplayObject >()));
            		}
            		else {
HXLINE( 390)			if ((this->get__numChildren() > 0)) {
HXLINE( 391)				return (publicIndex + this->get__numChildren());
            			}
            		}
HXLINE( 393)		return publicIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,getPrivateIndexForPublicIndex,return )

::Array< ::Dynamic> LayoutGroup_obj::get_xmlContent(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_403_get_xmlContent)
HXDLIN( 403)		return this->_xmlContent;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,get_xmlContent,return )

::Array< ::Dynamic> LayoutGroup_obj::set_xmlContent(::Array< ::Dynamic> value){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_406_set_xmlContent)
HXLINE( 407)		if (::hx::IsPointerEq( this->_xmlContent,value )) {
HXLINE( 408)			return this->_xmlContent;
            		}
HXLINE( 410)		if (::hx::IsNotNull( this->_xmlContent )) {
HXLINE( 411)			int _g = 0;
HXDLIN( 411)			::Array< ::Dynamic> _g1 = this->_xmlContent;
HXDLIN( 411)			while((_g < _g1->length)){
HXLINE( 411)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 411)				_g = (_g + 1);
HXLINE( 412)				this->removeChild(child);
            			}
            		}
HXLINE( 415)		this->_xmlContent = value;
HXLINE( 416)		if (::hx::IsNotNull( this->_xmlContent )) {
HXLINE( 417)			int _g = 0;
HXDLIN( 417)			::Array< ::Dynamic> _g1 = this->_xmlContent;
HXDLIN( 417)			while((_g < _g1->length)){
HXLINE( 417)				 ::openfl::display::DisplayObject child = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 417)				_g = (_g + 1);
HXLINE( 418)				this->addChild(child);
            			}
            		}
HXLINE( 421)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 422)		return this->_xmlContent;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,set_xmlContent,return )

void LayoutGroup_obj::validateNow(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_425_validateNow)
HXLINE( 429)		bool oldIgnoreChildChanges = this->_ignoreChangesButSetFlags;
HXLINE( 430)		this->_ignoreChangesButSetFlags = true;
HXLINE( 431)		this->super::validateNow();
HXLINE( 434)		this->_ignoreChangesButSetFlags = oldIgnoreChildChanges;
            	}


void LayoutGroup_obj::update(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_437_update)
HXLINE( 440)		this->_ignoreChangesButSetFlags = false;
HXLINE( 442)		bool layoutInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 443)		bool sizeInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
HXLINE( 444)		bool stylesInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 445)		bool stateInvalid = this->isInvalid(::feathers::core::InvalidationFlag_obj::STATE_dyn());
HXLINE( 447)		bool _hx_tmp;
HXDLIN( 447)		if (!(stylesInvalid)) {
HXLINE( 447)			_hx_tmp = stateInvalid;
            		}
            		else {
HXLINE( 447)			_hx_tmp = true;
            		}
HXDLIN( 447)		if (_hx_tmp) {
HXLINE( 448)			this->refreshBackgroundSkin();
            		}
HXLINE( 451)		if (stylesInvalid) {
HXLINE( 452)			this->refreshMaskSkin();
HXLINE( 453)			this->refreshLayout();
            		}
HXLINE( 456)		bool _hx_tmp1;
HXDLIN( 456)		bool _hx_tmp2;
HXDLIN( 456)		bool _hx_tmp3;
HXDLIN( 456)		if (!(sizeInvalid)) {
HXLINE( 456)			_hx_tmp3 = layoutInvalid;
            		}
            		else {
HXLINE( 456)			_hx_tmp3 = true;
            		}
HXDLIN( 456)		if (!(_hx_tmp3)) {
HXLINE( 456)			_hx_tmp2 = stylesInvalid;
            		}
            		else {
HXLINE( 456)			_hx_tmp2 = true;
            		}
HXDLIN( 456)		if (!(_hx_tmp2)) {
HXLINE( 456)			_hx_tmp1 = stateInvalid;
            		}
            		else {
HXLINE( 456)			_hx_tmp1 = true;
            		}
HXDLIN( 456)		if (_hx_tmp1) {
HXLINE( 457)			this->refreshViewPortBounds();
HXLINE( 458)			if (::hx::IsNotNull( this->_currentLayout )) {
HXLINE( 459)				this->handleCustomLayout();
            			}
            			else {
HXLINE( 461)				this->handleManualLayout();
            			}
HXLINE( 463)			this->handleLayoutResult();
HXLINE( 464)			this->refreshBackgroundLayout();
HXLINE( 465)			this->refreshDisabledOverlay();
HXLINE( 466)			this->refreshMaskLayout();
HXLINE( 469)			this->validateChildren();
            		}
            	}


void LayoutGroup_obj::refreshDisabledOverlay(){
            	HX_GC_STACKFRAME(&_hx_pos_af811a8d34d03704_473_refreshDisabledOverlay)
HXLINE( 474)		if (!(this->_enabled)) {
HXLINE( 475)			if (::hx::IsNull( this->_disabledOverlay )) {
HXLINE( 476)				this->_disabledOverlay =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE( 477)				this->_disabledOverlay->get_graphics()->beginFill(16711935,((Float)0.0));
HXLINE( 478)				this->_disabledOverlay->get_graphics()->drawRect(((Float)0.0),((Float)0.0),((Float)1.0),((Float)1.0));
HXLINE( 479)				this->_disabledOverlay->get_graphics()->endFill();
HXLINE( 480)				this->_addChild(this->_disabledOverlay);
            			}
            			else {
HXLINE( 482)				 ::openfl::display::Sprite _hx_tmp = this->_disabledOverlay;
HXDLIN( 482)				this->_setChildIndex(_hx_tmp,(this->get__numChildren() - 1));
            			}
            		}
HXLINE( 485)		if (::hx::IsNotNull( this->_disabledOverlay )) {
HXLINE( 486)			this->_disabledOverlay->set_visible(!(this->_enabled));
HXLINE( 487)			this->_disabledOverlay->set_x(((Float)0.0));
HXLINE( 488)			this->_disabledOverlay->set_y(((Float)0.0));
HXLINE( 489)			this->_disabledOverlay->set_width(this->actualWidth);
HXLINE( 490)			this->_disabledOverlay->set_height(this->actualHeight);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,refreshDisabledOverlay,(void))

void LayoutGroup_obj::refreshLayout(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_494_refreshLayout)
HXLINE( 495)		::Dynamic newLayout = this->get_layout();
HXLINE( 496)		if (::hx::IsInstanceEq( this->_currentLayout,newLayout )) {
HXLINE( 497)			return;
            		}
HXLINE( 499)		if (::hx::IsNotNull( this->_currentLayout )) {
HXLINE( 500)			::openfl::events::IEventDispatcher_obj::removeEventListener(this->_currentLayout,HX_("change",70,91,72,b7),this->layoutGroup_layout_changeHandler_dyn(),null());
            		}
HXLINE( 502)		this->_currentLayout = newLayout;
HXLINE( 503)		if (::hx::IsNotNull( this->_currentLayout )) {
HXLINE( 504)			::openfl::events::IEventDispatcher_obj::addEventListener(this->_currentLayout,HX_("change",70,91,72,b7),this->layoutGroup_layout_changeHandler_dyn(),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,refreshLayout,(void))

void LayoutGroup_obj::refreshBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_508_refreshBackgroundSkin)
HXLINE( 509)		 ::openfl::display::DisplayObject oldSkin = this->_currentBackgroundSkin;
HXLINE( 510)		this->_currentBackgroundSkin = this->getCurrentBackgroundSkin();
HXLINE( 511)		if (::hx::IsInstanceEq( this->_currentBackgroundSkin,oldSkin )) {
HXLINE( 512)			return;
            		}
HXLINE( 514)		this->removeCurrentBackgroundSkin(oldSkin);
HXLINE( 515)		this->addCurrentBackgroundSkin(this->_currentBackgroundSkin);
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,refreshBackgroundSkin,(void))

 ::openfl::display::DisplayObject LayoutGroup_obj::getCurrentBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_518_getCurrentBackgroundSkin)
HXLINE( 519)		bool _hx_tmp;
HXDLIN( 519)		if (!(this->_enabled)) {
HXLINE( 519)			_hx_tmp = ::hx::IsNotNull( this->get_disabledBackgroundSkin() );
            		}
            		else {
HXLINE( 519)			_hx_tmp = false;
            		}
HXDLIN( 519)		if (_hx_tmp) {
HXLINE( 520)			return this->get_disabledBackgroundSkin();
            		}
HXLINE( 522)		return this->get_backgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,getCurrentBackgroundSkin,return )

void LayoutGroup_obj::addCurrentBackgroundSkin( ::openfl::display::DisplayObject skin){
            	HX_GC_STACKFRAME(&_hx_pos_af811a8d34d03704_525_addCurrentBackgroundSkin)
HXLINE( 526)		if (::hx::IsNull( skin )) {
HXLINE( 527)			this->_backgroundSkinMeasurements = null();
HXLINE( 528)			return;
            		}
HXLINE( 530)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE( 531)			::feathers::core::IUIControl_obj::initializeNow( ::hx::interface_check(skin,0x2696a04f));
            		}
HXLINE( 533)		if (::hx::IsNull( this->_backgroundSkinMeasurements )) {
HXLINE( 534)			this->_backgroundSkinMeasurements =  ::feathers::layout::Measurements_obj::__alloc( HX_CTX ,skin);
            		}
            		else {
HXLINE( 536)			this->_backgroundSkinMeasurements->save(skin);
            		}
HXLINE( 538)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 539)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(skin,0x32a0d8d6),::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 541)		this->_addChildAt(skin,0);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,addCurrentBackgroundSkin,(void))

void LayoutGroup_obj::removeCurrentBackgroundSkin( ::openfl::display::DisplayObject skin){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_544_removeCurrentBackgroundSkin)
HXLINE( 545)		if (::hx::IsNull( skin )) {
HXLINE( 546)			return;
            		}
HXLINE( 548)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 549)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(skin,0x32a0d8d6),null());
            		}
HXLINE( 553)		this->_backgroundSkinMeasurements->restore(skin);
HXLINE( 554)		if (::hx::IsInstanceEq( skin->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 555)			this->_removeChild(skin);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,removeCurrentBackgroundSkin,(void))

void LayoutGroup_obj::refreshMaskSkin(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_559_refreshMaskSkin)
HXLINE( 560)		 ::openfl::display::DisplayObject oldSkin = this->_currentMaskSkin;
HXLINE( 561)		this->_currentMaskSkin = this->getCurrentMaskSkin();
HXLINE( 562)		if (::hx::IsInstanceEq( this->_currentMaskSkin,oldSkin )) {
HXLINE( 563)			return;
            		}
HXLINE( 565)		this->removeCurrentMaskSkin(oldSkin);
HXLINE( 566)		this->addCurrentMaskSkin(this->_currentMaskSkin);
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,refreshMaskSkin,(void))

 ::openfl::display::DisplayObject LayoutGroup_obj::getCurrentMaskSkin(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_570_getCurrentMaskSkin)
HXDLIN( 570)		return this->get_maskSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,getCurrentMaskSkin,return )

void LayoutGroup_obj::addCurrentMaskSkin( ::openfl::display::DisplayObject skin){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_573_addCurrentMaskSkin)
HXLINE( 574)		if (::hx::IsNull( skin )) {
HXLINE( 575)			return;
            		}
HXLINE( 577)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::core::IUIControl >())) {
HXLINE( 578)			::feathers::core::IUIControl_obj::initializeNow( ::hx::interface_check(skin,0x2696a04f));
            		}
HXLINE( 580)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 581)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(skin,0x32a0d8d6),::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 583)		this->_addChild(skin);
HXLINE( 584)		this->set_mask(skin);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,addCurrentMaskSkin,(void))

void LayoutGroup_obj::removeCurrentMaskSkin( ::openfl::display::DisplayObject skin){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_587_removeCurrentMaskSkin)
HXLINE( 588)		if (::hx::IsNull( skin )) {
HXLINE( 589)			return;
            		}
HXLINE( 591)		if (::Std_obj::isOfType(skin,::hx::ClassOf< ::feathers::skins::IProgrammaticSkin >())) {
HXLINE( 592)			::feathers::skins::IProgrammaticSkin_obj::set_uiContext( ::hx::interface_check(skin,0x32a0d8d6),null());
            		}
HXLINE( 594)		if (::hx::IsInstanceEq( skin->parent,::hx::ObjectPtr<OBJ_>(this) )) {
HXLINE( 595)			this->_removeChild(skin);
            		}
HXLINE( 597)		this->set_mask(null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,removeCurrentMaskSkin,(void))

void LayoutGroup_obj::refreshViewPortBounds(){
            	HX_GC_STACKFRAME(&_hx_pos_af811a8d34d03704_600_refreshViewPortBounds)
HXLINE( 601)		bool needsWidth = ::hx::IsNull( this->get_explicitWidth() );
HXLINE( 602)		bool needsHeight = ::hx::IsNull( this->get_explicitHeight() );
HXLINE( 603)		bool needsMinWidth = ::hx::IsNull( this->get_explicitMinWidth() );
HXLINE( 604)		bool needsMinHeight = ::hx::IsNull( this->get_explicitMinHeight() );
HXLINE( 605)		bool needsMaxWidth = ::hx::IsNull( this->get_explicitMaxWidth() );
HXLINE( 606)		bool needsMaxHeight = ::hx::IsNull( this->get_explicitMaxHeight() );
HXLINE( 608)		if (::hx::IsNotNull( this->_currentBackgroundSkin )) {
HXLINE( 609)			::feathers::utils::MeasurementsUtil_obj::resetFluidlyWithParent(this->_backgroundSkinMeasurements,this->_currentBackgroundSkin,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 610)			if (::Std_obj::isOfType(this->_currentBackgroundSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 611)				::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentBackgroundSkin,0x64d4b3cd));
            			}
            		}
HXLINE( 615)		bool needsToMeasureContent;
HXDLIN( 615)		if (::hx::IsPointerNotEq( this->_autoSizeMode,::feathers::layout::AutoSizeMode_obj::CONTENT_dyn() )) {
HXLINE( 615)			needsToMeasureContent = ::hx::IsNull( this->stage );
            		}
            		else {
HXLINE( 615)			needsToMeasureContent = true;
            		}
HXLINE( 616)		Float stageWidth = ((Float)0.0);
HXLINE( 617)		Float stageHeight = ((Float)0.0);
HXLINE( 618)		if (!(needsToMeasureContent)) {
HXLINE( 620)			 ::openfl::geom::Point topLeft = this->globalToLocal( ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 621)			 ::openfl::geom::Point bottomRight = this->globalToLocal( ::openfl::geom::Point_obj::__alloc( HX_CTX ,this->stage->stageWidth,this->stage->stageHeight));
HXLINE( 622)			stageWidth = (bottomRight->x - topLeft->x);
HXLINE( 623)			stageHeight = (bottomRight->y - topLeft->y);
            		}
HXLINE( 626)		bool _hx_tmp;
HXDLIN( 626)		if (needsWidth) {
HXLINE( 626)			_hx_tmp = !(needsToMeasureContent);
            		}
            		else {
HXLINE( 626)			_hx_tmp = false;
            		}
HXDLIN( 626)		if (_hx_tmp) {
HXLINE( 627)			this->_layoutMeasurements->width = stageWidth;
            		}
            		else {
HXLINE( 629)			this->_layoutMeasurements->width = this->get_explicitWidth();
            		}
HXLINE( 632)		bool _hx_tmp1;
HXDLIN( 632)		if (needsHeight) {
HXLINE( 632)			_hx_tmp1 = !(needsToMeasureContent);
            		}
            		else {
HXLINE( 632)			_hx_tmp1 = false;
            		}
HXDLIN( 632)		if (_hx_tmp1) {
HXLINE( 633)			this->_layoutMeasurements->height = stageHeight;
            		}
            		else {
HXLINE( 635)			this->_layoutMeasurements->height = this->get_explicitHeight();
            		}
HXLINE( 638)		 ::Dynamic viewPortMinWidth = this->get_explicitMinWidth();
HXLINE( 639)		if (needsMinWidth) {
HXLINE( 640)			viewPortMinWidth = ((Float)0.0);
            		}
HXLINE( 642)		 ::Dynamic viewPortMinHeight = this->get_explicitMinHeight();
HXLINE( 643)		if (needsMinHeight) {
HXLINE( 644)			viewPortMinHeight = ((Float)0.0);
            		}
HXLINE( 646)		 ::Dynamic viewPortMaxWidth = this->get_explicitMaxWidth();
HXLINE( 647)		if (needsMaxWidth) {
HXLINE( 648)			viewPortMaxWidth = ::hx::DivByZero(((Float)1.0));
            		}
HXLINE( 650)		 ::Dynamic viewPortMaxHeight = this->get_explicitMaxHeight();
HXLINE( 651)		if (needsMaxHeight) {
HXLINE( 652)			viewPortMaxHeight = ::hx::DivByZero(((Float)1.0));
            		}
HXLINE( 654)		if (::hx::IsNotNull( this->_backgroundSkinMeasurements )) {
HXLINE( 658)			if (::hx::IsNotNull( this->_backgroundSkinMeasurements->width )) {
HXLINE( 659)				if (::hx::IsGreater( this->_backgroundSkinMeasurements->width,viewPortMinWidth )) {
HXLINE( 660)					viewPortMinWidth = this->_backgroundSkinMeasurements->width;
            				}
            			}
            			else {
HXLINE( 662)				if (::hx::IsNotNull( this->_backgroundSkinMeasurements->minWidth )) {
HXLINE( 663)					if (::hx::IsGreater( this->_backgroundSkinMeasurements->minWidth,viewPortMinWidth )) {
HXLINE( 664)						viewPortMinWidth = this->_backgroundSkinMeasurements->minWidth;
            					}
            				}
            			}
HXLINE( 667)			if (::hx::IsNotNull( this->_backgroundSkinMeasurements->height )) {
HXLINE( 668)				if (::hx::IsGreater( this->_backgroundSkinMeasurements->height,viewPortMinHeight )) {
HXLINE( 669)					viewPortMinHeight = this->_backgroundSkinMeasurements->height;
            				}
            			}
            			else {
HXLINE( 671)				if (::hx::IsNotNull( this->_backgroundSkinMeasurements->minHeight )) {
HXLINE( 672)					if (::hx::IsGreater( this->_backgroundSkinMeasurements->minHeight,viewPortMinHeight )) {
HXLINE( 673)						viewPortMinHeight = this->_backgroundSkinMeasurements->minHeight;
            					}
            				}
            			}
            		}
HXLINE( 677)		this->_layoutMeasurements->minWidth = viewPortMinWidth;
HXLINE( 678)		this->_layoutMeasurements->minHeight = viewPortMinHeight;
HXLINE( 679)		this->_layoutMeasurements->maxWidth = viewPortMaxWidth;
HXLINE( 680)		this->_layoutMeasurements->maxHeight = viewPortMaxHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,refreshViewPortBounds,(void))

void LayoutGroup_obj::handleCustomLayout(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_683_handleCustomLayout)
HXLINE( 684)		bool oldIgnoreChildChanges = this->_ignoreChildChanges;
HXLINE( 685)		this->_ignoreChildChanges = true;
HXLINE( 686)		this->_layoutResult->reset();
HXLINE( 687)		::feathers::layout::ILayout_obj::layout(this->_currentLayout,this->items,this->_layoutMeasurements,this->_layoutResult);
HXLINE( 688)		this->_ignoreChildChanges = oldIgnoreChildChanges;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,handleCustomLayout,(void))

void LayoutGroup_obj::handleManualLayout(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_691_handleManualLayout)
HXLINE( 692)		 ::Dynamic maxX = this->_layoutMeasurements->width;
HXLINE( 693)		if (::hx::IsNull( maxX )) {
HXLINE( 694)			maxX = ((Float)0.0);
            		}
HXLINE( 696)		 ::Dynamic maxY = this->_layoutMeasurements->height;
HXLINE( 697)		if (::hx::IsNull( maxY )) {
HXLINE( 698)			maxY = ((Float)0.0);
            		}
HXLINE( 700)		bool oldIgnoreChildChanges = this->_ignoreChildChanges;
HXLINE( 701)		this->_ignoreChildChanges = true;
HXLINE( 702)		{
HXLINE( 702)			int _g = 0;
HXDLIN( 702)			::Array< ::Dynamic> _g1 = this->items;
HXDLIN( 702)			while((_g < _g1->length)){
HXLINE( 702)				 ::openfl::display::DisplayObject item = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 702)				_g = (_g + 1);
HXLINE( 703)				bool _hx_tmp;
HXDLIN( 703)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 703)					_hx_tmp = !(::feathers::layout::ILayoutObject_obj::get_includeInLayout( ::hx::interface_check(item,0xf54ca718)));
            				}
            				else {
HXLINE( 703)					_hx_tmp = false;
            				}
HXDLIN( 703)				if (_hx_tmp) {
HXLINE( 704)					continue;
            				}
HXLINE( 706)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 707)					::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(item,0x64d4b3cd));
            				}
HXLINE( 709)				Float itemMaxX = item->get_x();
HXDLIN( 709)				Float itemMaxX1 = (itemMaxX + item->get_width());
HXLINE( 710)				Float itemMaxY = item->get_y();
HXDLIN( 710)				Float itemMaxY1 = (itemMaxY + item->get_height());
HXLINE( 711)				if (::hx::IsLess( maxX,itemMaxX1 )) {
HXLINE( 712)					maxX = itemMaxX1;
            				}
HXLINE( 714)				if (::hx::IsLess( maxY,itemMaxY1 )) {
HXLINE( 715)					maxY = itemMaxY1;
            				}
            			}
            		}
HXLINE( 718)		this->_ignoreChildChanges = oldIgnoreChildChanges;
HXLINE( 719)		this->_layoutResult->contentX = ((Float)0.0);
HXLINE( 720)		this->_layoutResult->contentY = ((Float)0.0);
HXLINE( 721)		this->_layoutResult->contentWidth = ( (Float)(maxX) );
HXLINE( 722)		this->_layoutResult->contentHeight = ( (Float)(maxY) );
HXLINE( 723)		if (::hx::IsNotNull( this->_layoutMeasurements->width )) {
HXLINE( 724)			this->_layoutResult->viewPortWidth = ( (Float)(this->_layoutMeasurements->width) );
            		}
            		else {
HXLINE( 726)			bool _hx_tmp;
HXDLIN( 726)			if (::hx::IsNotNull( this->_layoutMeasurements->minWidth )) {
HXLINE( 726)				_hx_tmp = ::hx::IsLess( maxX,this->_layoutMeasurements->minWidth );
            			}
            			else {
HXLINE( 726)				_hx_tmp = false;
            			}
HXDLIN( 726)			if (_hx_tmp) {
HXLINE( 727)				maxX = this->_layoutMeasurements->minWidth;
            			}
            			else {
HXLINE( 728)				bool _hx_tmp;
HXDLIN( 728)				if (::hx::IsNotNull( this->_layoutMeasurements->maxWidth )) {
HXLINE( 728)					_hx_tmp = ::hx::IsGreater( maxX,this->_layoutMeasurements->maxWidth );
            				}
            				else {
HXLINE( 728)					_hx_tmp = false;
            				}
HXDLIN( 728)				if (_hx_tmp) {
HXLINE( 729)					maxX = this->_layoutMeasurements->maxWidth;
            				}
            			}
HXLINE( 731)			this->_layoutResult->viewPortWidth = ( (Float)(maxX) );
            		}
HXLINE( 733)		if (::hx::IsNotNull( this->_layoutMeasurements->height )) {
HXLINE( 734)			this->_layoutResult->viewPortHeight = ( (Float)(this->_layoutMeasurements->height) );
            		}
            		else {
HXLINE( 736)			bool _hx_tmp;
HXDLIN( 736)			if (::hx::IsNotNull( this->_layoutMeasurements->minHeight )) {
HXLINE( 736)				_hx_tmp = ::hx::IsLess( maxY,this->_layoutMeasurements->minHeight );
            			}
            			else {
HXLINE( 736)				_hx_tmp = false;
            			}
HXDLIN( 736)			if (_hx_tmp) {
HXLINE( 737)				maxY = this->_layoutMeasurements->minHeight;
            			}
            			else {
HXLINE( 738)				bool _hx_tmp;
HXDLIN( 738)				if (::hx::IsNotNull( this->_layoutMeasurements->maxHeight )) {
HXLINE( 738)					_hx_tmp = ::hx::IsGreater( maxY,this->_layoutMeasurements->maxHeight );
            				}
            				else {
HXLINE( 738)					_hx_tmp = false;
            				}
HXDLIN( 738)				if (_hx_tmp) {
HXLINE( 739)					maxY = this->_layoutMeasurements->maxHeight;
            				}
            			}
HXLINE( 741)			this->_layoutResult->viewPortHeight = ( (Float)(maxY) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,handleManualLayout,(void))

void LayoutGroup_obj::handleLayoutResult(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_745_handleLayoutResult)
HXLINE( 746)		Float viewPortWidth = this->_layoutResult->viewPortWidth;
HXLINE( 747)		Float viewPortHeight = this->_layoutResult->viewPortHeight;
HXLINE( 748)		this->saveMeasurements(viewPortWidth,viewPortHeight,viewPortWidth,viewPortHeight,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,handleLayoutResult,(void))

void LayoutGroup_obj::refreshMaskLayout(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_751_refreshMaskLayout)
HXLINE( 752)		if (::hx::IsNull( this->_currentMaskSkin )) {
HXLINE( 753)			return;
            		}
HXLINE( 756)		this->_currentMaskSkin->set_x(((Float)0.0));
HXLINE( 757)		this->_currentMaskSkin->set_y(((Float)0.0));
HXLINE( 758)		this->_currentMaskSkin->set_width(this->actualWidth);
HXLINE( 759)		this->_currentMaskSkin->set_height(this->actualHeight);
HXLINE( 760)		if (::Std_obj::isOfType(this->_currentMaskSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 761)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentMaskSkin,0x64d4b3cd));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,refreshMaskLayout,(void))

void LayoutGroup_obj::refreshBackgroundLayout(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_765_refreshBackgroundLayout)
HXLINE( 766)		if (::hx::IsNull( this->_currentBackgroundSkin )) {
HXLINE( 767)			return;
            		}
HXLINE( 769)		this->_currentBackgroundSkin->set_x(((Float)0.0));
HXLINE( 770)		this->_currentBackgroundSkin->set_y(((Float)0.0));
HXLINE( 775)		Float _hx_tmp = this->_currentBackgroundSkin->get_width();
HXDLIN( 775)		if ((_hx_tmp != this->actualWidth)) {
HXLINE( 776)			this->_currentBackgroundSkin->set_width(this->actualWidth);
            		}
HXLINE( 778)		Float _hx_tmp1 = this->_currentBackgroundSkin->get_height();
HXDLIN( 778)		if ((_hx_tmp1 != this->actualHeight)) {
HXLINE( 779)			this->_currentBackgroundSkin->set_height(this->actualHeight);
            		}
HXLINE( 781)		if (::Std_obj::isOfType(this->_currentBackgroundSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 782)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentBackgroundSkin,0x64d4b3cd));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,refreshBackgroundLayout,(void))

void LayoutGroup_obj::validateChildren(){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_786_validateChildren)
HXLINE( 787)		if (::Std_obj::isOfType(this->_currentBackgroundSkin,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 788)			::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(this->_currentBackgroundSkin,0x64d4b3cd));
            		}
HXLINE( 790)		{
HXLINE( 790)			int _g = 0;
HXDLIN( 790)			::Array< ::Dynamic> _g1 = this->items;
HXDLIN( 790)			while((_g < _g1->length)){
HXLINE( 790)				 ::openfl::display::DisplayObject item = _g1->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 790)				_g = (_g + 1);
HXLINE( 791)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 792)					::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(item,0x64d4b3cd));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,validateChildren,(void))

void LayoutGroup_obj::layoutGroup_addedToStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_798_layoutGroup_addedToStageHandler)
HXDLIN( 798)		if (::hx::IsPointerEq( this->_autoSizeMode,::feathers::layout::AutoSizeMode_obj::STAGE_dyn() )) {
HXLINE( 802)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
HXLINE( 804)			this->addEventListener(HX_("removedFromStage",34,21,76,ba),this->layoutGroup_removedFromStageHandler_dyn(),null(),null(),null());
HXLINE( 805)			this->stage->addEventListener(HX_("resize",f4,59,7b,08),this->layoutGroup_stage_resizeHandler_dyn(),false,0,true);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,layoutGroup_addedToStageHandler,(void))

void LayoutGroup_obj::layoutGroup_removedFromStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_809_layoutGroup_removedFromStageHandler)
HXLINE( 810)		this->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->layoutGroup_removedFromStageHandler_dyn(),null());
HXLINE( 811)		this->stage->removeEventListener(HX_("resize",f4,59,7b,08),this->layoutGroup_stage_resizeHandler_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,layoutGroup_removedFromStageHandler,(void))

void LayoutGroup_obj::layoutGroup_stage_resizeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_815_layoutGroup_stage_resizeHandler)
HXDLIN( 815)		this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,layoutGroup_stage_resizeHandler,(void))

void LayoutGroup_obj::layoutGroup_child_resizeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_818_layoutGroup_child_resizeHandler)
HXLINE( 819)		if (this->_ignoreChildChanges) {
HXLINE( 820)			return;
            		}
HXLINE( 822)		if (this->_ignoreChangesButSetFlags) {
HXLINE( 823)			this->setInvalidationFlag(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 824)			return;
            		}
HXLINE( 826)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,layoutGroup_child_resizeHandler,(void))

void LayoutGroup_obj::layoutGroup_child_layoutDataChangeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_829_layoutGroup_child_layoutDataChangeHandler)
HXLINE( 830)		if (this->_ignoreChildChanges) {
HXLINE( 831)			return;
            		}
HXLINE( 833)		if (this->_ignoreChangesButSetFlags) {
HXLINE( 834)			this->setInvalidationFlag(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 835)			return;
            		}
HXLINE( 837)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,layoutGroup_child_layoutDataChangeHandler,(void))

void LayoutGroup_obj::layoutGroup_layout_changeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_840_layoutGroup_layout_changeHandler)
HXLINE( 841)		if (this->_ignoreLayoutChanges) {
HXLINE( 842)			return;
            		}
HXLINE( 844)		if (this->_ignoreChangesButSetFlags) {
HXLINE( 845)			this->setInvalidationFlag(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
HXLINE( 846)			return;
            		}
HXLINE( 848)		this->setInvalid(::feathers::core::InvalidationFlag_obj::LAYOUT_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,layoutGroup_layout_changeHandler,(void))

::Dynamic LayoutGroup_obj::get_layout(){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_85_get_layout)
HXDLIN(  85)		return this->_hx___layout;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,get_layout,return )

::Dynamic LayoutGroup_obj::set_layout(::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_99_set_layout)
HXLINE( 100)		if (!(this->setStyle(HX_("layout",aa,ae,b8,58),null()))) {
HXLINE( 101)			return this->_hx___layout;
            		}
HXLINE( 103)		if (::hx::IsInstanceEq( this->_hx___layout,value )) {
HXLINE( 104)			return this->_hx___layout;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_layout_dyn();
HXLINE( 110)		this->_hx___layout = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___layout;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,set_layout,return )

::Dynamic LayoutGroup_obj::clearStyle_layout(){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_125_clearStyle_layout)
HXLINE( 126)		this->set_layout(null());
HXLINE( 127)		return this->get_layout();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,clearStyle_layout,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::get_backgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_85_get_backgroundSkin)
HXDLIN(  85)		return this->_hx___backgroundSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,get_backgroundSkin,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::set_backgroundSkin( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_99_set_backgroundSkin)
HXLINE( 100)		if (!(this->setStyle(HX_("backgroundSkin",8b,65,6f,20),null()))) {
HXLINE( 101)			return this->_hx___backgroundSkin;
            		}
HXLINE( 103)		if (::hx::IsInstanceEq( this->_hx___backgroundSkin,value )) {
HXLINE( 104)			return this->_hx___backgroundSkin;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_backgroundSkin_dyn();
HXLINE( 110)		this->_hx___backgroundSkin = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___backgroundSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,set_backgroundSkin,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::clearStyle_backgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_125_clearStyle_backgroundSkin)
HXLINE( 126)		this->set_backgroundSkin(null());
HXLINE( 127)		return this->get_backgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,clearStyle_backgroundSkin,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::get_disabledBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_85_get_disabledBackgroundSkin)
HXDLIN(  85)		return this->_hx___disabledBackgroundSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,get_disabledBackgroundSkin,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::set_disabledBackgroundSkin( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_99_set_disabledBackgroundSkin)
HXLINE( 100)		if (!(this->setStyle(HX_("disabledBackgroundSkin",27,5c,3a,d3),null()))) {
HXLINE( 101)			return this->_hx___disabledBackgroundSkin;
            		}
HXLINE( 103)		if (::hx::IsInstanceEq( this->_hx___disabledBackgroundSkin,value )) {
HXLINE( 104)			return this->_hx___disabledBackgroundSkin;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_disabledBackgroundSkin_dyn();
HXLINE( 110)		this->_hx___disabledBackgroundSkin = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___disabledBackgroundSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,set_disabledBackgroundSkin,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::clearStyle_disabledBackgroundSkin(){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_125_clearStyle_disabledBackgroundSkin)
HXLINE( 126)		this->set_disabledBackgroundSkin(null());
HXLINE( 127)		return this->get_disabledBackgroundSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,clearStyle_disabledBackgroundSkin,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::get_maskSkin(){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_85_get_maskSkin)
HXDLIN(  85)		return this->_hx___maskSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,get_maskSkin,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::set_maskSkin( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_99_set_maskSkin)
HXLINE( 100)		if (!(this->setStyle(HX_("maskSkin",89,69,35,ea),null()))) {
HXLINE( 101)			return this->_hx___maskSkin;
            		}
HXLINE( 103)		if (::hx::IsInstanceEq( this->_hx___maskSkin,value )) {
HXLINE( 104)			return this->_hx___maskSkin;
            		}
HXLINE( 109)		this->_previousClearStyle = this->clearStyle_maskSkin_dyn();
HXLINE( 110)		this->_hx___maskSkin = value;
HXLINE( 111)		this->setInvalid(::feathers::core::InvalidationFlag_obj::STYLES_dyn());
HXLINE( 112)		return this->_hx___maskSkin;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LayoutGroup_obj,set_maskSkin,return )

 ::openfl::display::DisplayObject LayoutGroup_obj::clearStyle_maskSkin(){
            	HX_STACKFRAME(&_hx_pos_ca6a2a38fe1f1011_125_clearStyle_maskSkin)
HXLINE( 126)		this->set_maskSkin(null());
HXLINE( 127)		return this->get_maskSkin();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LayoutGroup_obj,clearStyle_maskSkin,return )

::hx::Class LayoutGroup_obj::get_styleContext(){
            	HX_STACKFRAME(&_hx_pos_59a4bfa62b570069_42_get_styleContext)
HXDLIN(  42)		return ::hx::ClassOf< ::feathers::controls::LayoutGroup >();
            	}


::String LayoutGroup_obj::VARIANT_TOOL_BAR;


::hx::ObjectPtr< LayoutGroup_obj > LayoutGroup_obj::__new() {
	::hx::ObjectPtr< LayoutGroup_obj > __this = new LayoutGroup_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LayoutGroup_obj > LayoutGroup_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LayoutGroup_obj *__this = (LayoutGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LayoutGroup_obj), true, "feathers.controls.LayoutGroup"));
	*(void **)__this = LayoutGroup_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LayoutGroup_obj::LayoutGroup_obj()
{
}

void LayoutGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LayoutGroup);
	HX_MARK_MEMBER_NAME(items,"items");
	HX_MARK_MEMBER_NAME(_layoutResult,"_layoutResult");
	HX_MARK_MEMBER_NAME(_layoutMeasurements,"_layoutMeasurements");
	HX_MARK_MEMBER_NAME(_ignoreChildChanges,"_ignoreChildChanges");
	HX_MARK_MEMBER_NAME(_ignoreChangesButSetFlags,"_ignoreChangesButSetFlags");
	HX_MARK_MEMBER_NAME(_ignoreLayoutChanges,"_ignoreLayoutChanges");
	HX_MARK_MEMBER_NAME(_currentBackgroundSkin,"_currentBackgroundSkin");
	HX_MARK_MEMBER_NAME(_backgroundSkinMeasurements,"_backgroundSkinMeasurements");
	HX_MARK_MEMBER_NAME(_currentMaskSkin,"_currentMaskSkin");
	HX_MARK_MEMBER_NAME(_autoSizeMode,"_autoSizeMode");
	HX_MARK_MEMBER_NAME(_disabledOverlay,"_disabledOverlay");
	HX_MARK_MEMBER_NAME(_currentLayout,"_currentLayout");
	HX_MARK_MEMBER_NAME(_xmlContent,"_xmlContent");
	HX_MARK_MEMBER_NAME(_hx___layout,"__layout");
	HX_MARK_MEMBER_NAME(_hx___backgroundSkin,"__backgroundSkin");
	HX_MARK_MEMBER_NAME(_hx___disabledBackgroundSkin,"__disabledBackgroundSkin");
	HX_MARK_MEMBER_NAME(_hx___maskSkin,"__maskSkin");
	 ::feathers::core::FeathersControl_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LayoutGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(items,"items");
	HX_VISIT_MEMBER_NAME(_layoutResult,"_layoutResult");
	HX_VISIT_MEMBER_NAME(_layoutMeasurements,"_layoutMeasurements");
	HX_VISIT_MEMBER_NAME(_ignoreChildChanges,"_ignoreChildChanges");
	HX_VISIT_MEMBER_NAME(_ignoreChangesButSetFlags,"_ignoreChangesButSetFlags");
	HX_VISIT_MEMBER_NAME(_ignoreLayoutChanges,"_ignoreLayoutChanges");
	HX_VISIT_MEMBER_NAME(_currentBackgroundSkin,"_currentBackgroundSkin");
	HX_VISIT_MEMBER_NAME(_backgroundSkinMeasurements,"_backgroundSkinMeasurements");
	HX_VISIT_MEMBER_NAME(_currentMaskSkin,"_currentMaskSkin");
	HX_VISIT_MEMBER_NAME(_autoSizeMode,"_autoSizeMode");
	HX_VISIT_MEMBER_NAME(_disabledOverlay,"_disabledOverlay");
	HX_VISIT_MEMBER_NAME(_currentLayout,"_currentLayout");
	HX_VISIT_MEMBER_NAME(_xmlContent,"_xmlContent");
	HX_VISIT_MEMBER_NAME(_hx___layout,"__layout");
	HX_VISIT_MEMBER_NAME(_hx___backgroundSkin,"__backgroundSkin");
	HX_VISIT_MEMBER_NAME(_hx___disabledBackgroundSkin,"__disabledBackgroundSkin");
	HX_VISIT_MEMBER_NAME(_hx___maskSkin,"__maskSkin");
	 ::feathers::core::FeathersControl_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LayoutGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { return ::hx::Val( items ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_layout() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maskSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maskSkin() ); }
		if (HX_FIELD_EQ(inName,"__layout") ) { return ::hx::Val( _hx___layout ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_addChild") ) { return ::hx::Val( _addChild_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return ::hx::Val( addChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return ::hx::Val( getChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"xmlContent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_xmlContent() ); }
		if (HX_FIELD_EQ(inName,"get_layout") ) { return ::hx::Val( get_layout_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_layout") ) { return ::hx::Val( set_layout_dyn() ); }
		if (HX_FIELD_EQ(inName,"__maskSkin") ) { return ::hx::Val( _hx___maskSkin ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_addChildAt") ) { return ::hx::Val( _addChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return ::hx::Val( removeChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"_getChildAt") ) { return ::hx::Val( _getChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"_xmlContent") ) { return ::hx::Val( _xmlContent ); }
		if (HX_FIELD_EQ(inName,"validateNow") ) { return ::hx::Val( validateNow_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"autoSizeMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_autoSizeMode() ); }
		if (HX_FIELD_EQ(inName,"_numChildren") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get__numChildren() ); }
		if (HX_FIELD_EQ(inName,"_removeChild") ) { return ::hx::Val( _removeChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maskSkin") ) { return ::hx::Val( get_maskSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maskSkin") ) { return ::hx::Val( set_maskSkin_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_layoutResult") ) { return ::hx::Val( _layoutResult ); }
		if (HX_FIELD_EQ(inName,"_autoSizeMode") ) { return ::hx::Val( _autoSizeMode ); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return ::hx::Val( removeChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return ::hx::Val( getChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return ::hx::Val( setChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshLayout") ) { return ::hx::Val( refreshLayout_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"backgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_backgroundSkin() ); }
		if (HX_FIELD_EQ(inName,"_currentLayout") ) { return ::hx::Val( _currentLayout ); }
		if (HX_FIELD_EQ(inName,"_removeChildAt") ) { return ::hx::Val( _removeChildAt_dyn() ); }
		if (HX_FIELD_EQ(inName,"_getChildIndex") ) { return ::hx::Val( _getChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return ::hx::Val( getChildByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return ::hx::Val( removeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"_setChildIndex") ) { return ::hx::Val( _setChildIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_xmlContent") ) { return ::hx::Val( get_xmlContent_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_xmlContent") ) { return ::hx::Val( set_xmlContent_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return ::hx::Val( get_numChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"_getChildByName") ) { return ::hx::Val( _getChildByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"_removeChildren") ) { return ::hx::Val( _removeChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshMaskSkin") ) { return ::hx::Val( refreshMaskSkin_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_currentMaskSkin") ) { return ::hx::Val( _currentMaskSkin ); }
		if (HX_FIELD_EQ(inName,"get_autoSizeMode") ) { return ::hx::Val( get_autoSizeMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_autoSizeMode") ) { return ::hx::Val( set_autoSizeMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"_disabledOverlay") ) { return ::hx::Val( _disabledOverlay ); }
		if (HX_FIELD_EQ(inName,"get__numChildren") ) { return ::hx::Val( get__numChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"validateChildren") ) { return ::hx::Val( validateChildren_dyn() ); }
		if (HX_FIELD_EQ(inName,"__backgroundSkin") ) { return ::hx::Val( _hx___backgroundSkin ); }
		if (HX_FIELD_EQ(inName,"get_styleContext") ) { return ::hx::Val( get_styleContext_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"refreshMaskLayout") ) { return ::hx::Val( refreshMaskLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearStyle_layout") ) { return ::hx::Val( clearStyle_layout_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getCurrentMaskSkin") ) { return ::hx::Val( getCurrentMaskSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"addCurrentMaskSkin") ) { return ::hx::Val( addCurrentMaskSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleCustomLayout") ) { return ::hx::Val( handleCustomLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleManualLayout") ) { return ::hx::Val( handleManualLayout_dyn() ); }
		if (HX_FIELD_EQ(inName,"handleLayoutResult") ) { return ::hx::Val( handleLayoutResult_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_backgroundSkin") ) { return ::hx::Val( get_backgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundSkin") ) { return ::hx::Val( set_backgroundSkin_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_layoutMeasurements") ) { return ::hx::Val( _layoutMeasurements ); }
		if (HX_FIELD_EQ(inName,"_ignoreChildChanges") ) { return ::hx::Val( _ignoreChildChanges ); }
		if (HX_FIELD_EQ(inName,"clearStyle_maskSkin") ) { return ::hx::Val( clearStyle_maskSkin_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_ignoreLayoutChanges") ) { return ::hx::Val( _ignoreLayoutChanges ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"refreshBackgroundSkin") ) { return ::hx::Val( refreshBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeCurrentMaskSkin") ) { return ::hx::Val( removeCurrentMaskSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshViewPortBounds") ) { return ::hx::Val( refreshViewPortBounds_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_currentBackgroundSkin") ) { return ::hx::Val( _currentBackgroundSkin ); }
		if (HX_FIELD_EQ(inName,"disabledBackgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_disabledBackgroundSkin() ); }
		if (HX_FIELD_EQ(inName,"refreshDisabledOverlay") ) { return ::hx::Val( refreshDisabledOverlay_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"refreshBackgroundLayout") ) { return ::hx::Val( refreshBackgroundLayout_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getCurrentBackgroundSkin") ) { return ::hx::Val( getCurrentBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"addCurrentBackgroundSkin") ) { return ::hx::Val( addCurrentBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"__disabledBackgroundSkin") ) { return ::hx::Val( _hx___disabledBackgroundSkin ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ignoreChangesButSetFlags") ) { return ::hx::Val( _ignoreChangesButSetFlags ); }
		if (HX_FIELD_EQ(inName,"clearStyle_backgroundSkin") ) { return ::hx::Val( clearStyle_backgroundSkin_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"initializeLayoutGroupTheme") ) { return ::hx::Val( initializeLayoutGroupTheme_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_disabledBackgroundSkin") ) { return ::hx::Val( get_disabledBackgroundSkin_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_disabledBackgroundSkin") ) { return ::hx::Val( set_disabledBackgroundSkin_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_backgroundSkinMeasurements") ) { return ::hx::Val( _backgroundSkinMeasurements ); }
		if (HX_FIELD_EQ(inName,"removeCurrentBackgroundSkin") ) { return ::hx::Val( removeCurrentBackgroundSkin_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"getPrivateIndexForPublicIndex") ) { return ::hx::Val( getPrivateIndexForPublicIndex_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"layoutGroup_addedToStageHandler") ) { return ::hx::Val( layoutGroup_addedToStageHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"layoutGroup_stage_resizeHandler") ) { return ::hx::Val( layoutGroup_stage_resizeHandler_dyn() ); }
		if (HX_FIELD_EQ(inName,"layoutGroup_child_resizeHandler") ) { return ::hx::Val( layoutGroup_child_resizeHandler_dyn() ); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"layoutGroup_layout_changeHandler") ) { return ::hx::Val( layoutGroup_layout_changeHandler_dyn() ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"clearStyle_disabledBackgroundSkin") ) { return ::hx::Val( clearStyle_disabledBackgroundSkin_dyn() ); }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"layoutGroup_removedFromStageHandler") ) { return ::hx::Val( layoutGroup_removedFromStageHandler_dyn() ); }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"layoutGroup_child_layoutDataChangeHandler") ) { return ::hx::Val( layoutGroup_child_layoutDataChangeHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LayoutGroup_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"VARIANT_TOOL_BAR") ) { outValue = ( VARIANT_TOOL_BAR ); return true; }
	}
	return false;
}

::hx::Val LayoutGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { items=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_layout(inValue.Cast< ::Dynamic >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maskSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maskSkin(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		if (HX_FIELD_EQ(inName,"__layout") ) { _hx___layout=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"xmlContent") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_xmlContent(inValue.Cast< ::Array< ::Dynamic> >()) ); }
		if (HX_FIELD_EQ(inName,"__maskSkin") ) { _hx___maskSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_xmlContent") ) { _xmlContent=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"autoSizeMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_autoSizeMode(inValue.Cast<  ::feathers::layout::AutoSizeMode >()) ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_layoutResult") ) { _layoutResult=inValue.Cast<  ::feathers::layout::LayoutBoundsResult >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_autoSizeMode") ) { _autoSizeMode=inValue.Cast<  ::feathers::layout::AutoSizeMode >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"backgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundSkin(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		if (HX_FIELD_EQ(inName,"_currentLayout") ) { _currentLayout=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_currentMaskSkin") ) { _currentMaskSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_disabledOverlay") ) { _disabledOverlay=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__backgroundSkin") ) { _hx___backgroundSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_layoutMeasurements") ) { _layoutMeasurements=inValue.Cast<  ::feathers::layout::Measurements >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ignoreChildChanges") ) { _ignoreChildChanges=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_ignoreLayoutChanges") ) { _ignoreLayoutChanges=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"_currentBackgroundSkin") ) { _currentBackgroundSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disabledBackgroundSkin") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_disabledBackgroundSkin(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__disabledBackgroundSkin") ) { _hx___disabledBackgroundSkin=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"_ignoreChangesButSetFlags") ) { _ignoreChangesButSetFlags=inValue.Cast< bool >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"_backgroundSkinMeasurements") ) { _backgroundSkinMeasurements=inValue.Cast<  ::feathers::layout::Measurements >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LayoutGroup_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"VARIANT_TOOL_BAR") ) { VARIANT_TOOL_BAR=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void LayoutGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("items",00,ac,0c,c2));
	outFields->push(HX_("layout",aa,ae,b8,58));
	outFields->push(HX_("_layoutResult",06,7a,37,06));
	outFields->push(HX_("_layoutMeasurements",e0,8a,1d,e1));
	outFields->push(HX_("_ignoreChildChanges",18,b7,88,de));
	outFields->push(HX_("_ignoreChangesButSetFlags",74,fb,7a,8a));
	outFields->push(HX_("_ignoreLayoutChanges",08,9e,67,16));
	outFields->push(HX_("_currentBackgroundSkin",e5,c0,55,58));
	outFields->push(HX_("_backgroundSkinMeasurements",41,46,9b,f8));
	outFields->push(HX_("backgroundSkin",8b,65,6f,20));
	outFields->push(HX_("disabledBackgroundSkin",27,5c,3a,d3));
	outFields->push(HX_("_currentMaskSkin",63,65,66,a9));
	outFields->push(HX_("maskSkin",89,69,35,ea));
	outFields->push(HX_("_autoSizeMode",32,4a,ee,05));
	outFields->push(HX_("autoSizeMode",53,b7,7f,23));
	outFields->push(HX_("_disabledOverlay",f5,d3,25,b1));
	outFields->push(HX_("_currentLayout",04,20,67,7a));
	outFields->push(HX_("_numChildren",a6,17,8a,c2));
	outFields->push(HX_("_xmlContent",41,8d,4c,ce));
	outFields->push(HX_("xmlContent",22,c0,c2,fb));
	outFields->push(HX_("__layout",ca,19,e8,00));
	outFields->push(HX_("__backgroundSkin",ab,f0,ae,54));
	outFields->push(HX_("__disabledBackgroundSkin",47,07,aa,50));
	outFields->push(HX_("__maskSkin",a9,dc,6d,8d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LayoutGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(LayoutGroup_obj,items),HX_("items",00,ac,0c,c2)},
	{::hx::fsObject /*  ::feathers::layout::LayoutBoundsResult */ ,(int)offsetof(LayoutGroup_obj,_layoutResult),HX_("_layoutResult",06,7a,37,06)},
	{::hx::fsObject /*  ::feathers::layout::Measurements */ ,(int)offsetof(LayoutGroup_obj,_layoutMeasurements),HX_("_layoutMeasurements",e0,8a,1d,e1)},
	{::hx::fsBool,(int)offsetof(LayoutGroup_obj,_ignoreChildChanges),HX_("_ignoreChildChanges",18,b7,88,de)},
	{::hx::fsBool,(int)offsetof(LayoutGroup_obj,_ignoreChangesButSetFlags),HX_("_ignoreChangesButSetFlags",74,fb,7a,8a)},
	{::hx::fsBool,(int)offsetof(LayoutGroup_obj,_ignoreLayoutChanges),HX_("_ignoreLayoutChanges",08,9e,67,16)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(LayoutGroup_obj,_currentBackgroundSkin),HX_("_currentBackgroundSkin",e5,c0,55,58)},
	{::hx::fsObject /*  ::feathers::layout::Measurements */ ,(int)offsetof(LayoutGroup_obj,_backgroundSkinMeasurements),HX_("_backgroundSkinMeasurements",41,46,9b,f8)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(LayoutGroup_obj,_currentMaskSkin),HX_("_currentMaskSkin",63,65,66,a9)},
	{::hx::fsObject /*  ::feathers::layout::AutoSizeMode */ ,(int)offsetof(LayoutGroup_obj,_autoSizeMode),HX_("_autoSizeMode",32,4a,ee,05)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(LayoutGroup_obj,_disabledOverlay),HX_("_disabledOverlay",f5,d3,25,b1)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(LayoutGroup_obj,_currentLayout),HX_("_currentLayout",04,20,67,7a)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(LayoutGroup_obj,_xmlContent),HX_("_xmlContent",41,8d,4c,ce)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(LayoutGroup_obj,_hx___layout),HX_("__layout",ca,19,e8,00)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(LayoutGroup_obj,_hx___backgroundSkin),HX_("__backgroundSkin",ab,f0,ae,54)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(LayoutGroup_obj,_hx___disabledBackgroundSkin),HX_("__disabledBackgroundSkin",47,07,aa,50)},
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(LayoutGroup_obj,_hx___maskSkin),HX_("__maskSkin",a9,dc,6d,8d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo LayoutGroup_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &LayoutGroup_obj::VARIANT_TOOL_BAR,HX_("VARIANT_TOOL_BAR",66,f0,2e,84)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LayoutGroup_obj_sMemberFields[] = {
	HX_("items",00,ac,0c,c2),
	HX_("_layoutResult",06,7a,37,06),
	HX_("_layoutMeasurements",e0,8a,1d,e1),
	HX_("_ignoreChildChanges",18,b7,88,de),
	HX_("_ignoreChangesButSetFlags",74,fb,7a,8a),
	HX_("_ignoreLayoutChanges",08,9e,67,16),
	HX_("_currentBackgroundSkin",e5,c0,55,58),
	HX_("_backgroundSkinMeasurements",41,46,9b,f8),
	HX_("_currentMaskSkin",63,65,66,a9),
	HX_("_autoSizeMode",32,4a,ee,05),
	HX_("get_autoSizeMode",dc,a3,1e,28),
	HX_("set_autoSizeMode",50,91,60,7e),
	HX_("_disabledOverlay",f5,d3,25,b1),
	HX_("_currentLayout",04,20,67,7a),
	HX_("get_numChildren",3c,21,62,1d),
	HX_("get__numChildren",2f,04,29,c7),
	HX_("addChildAt",8e,ad,36,ce),
	HX_("_addChild",1a,c7,ac,06),
	HX_("_addChildAt",ad,7a,c0,a0),
	HX_("removeChild",b8,86,ed,43),
	HX_("_removeChild",b9,34,f7,a9),
	HX_("removeChildAt",cb,dd,66,3f),
	HX_("_removeChildAt",0c,ce,b8,7d),
	HX_("getChildIndex",0c,68,02,b9),
	HX_("_getChildIndex",4d,58,54,f7),
	HX_("getChildByName",88,b9,73,a3),
	HX_("_getChildByName",27,02,d4,ec),
	HX_("removeChildren",a3,55,c0,3a),
	HX_("_removeChildren",42,9e,20,84),
	HX_("setChildIndex",18,4a,08,fe),
	HX_("_setChildIndex",59,3a,5a,3c),
	HX_("getChildAt",b9,07,0e,b6),
	HX_("_getChildAt",d8,d4,97,88),
	HX_("initializeLayoutGroupTheme",04,2f,6e,b0),
	HX_("getPrivateIndexForPublicIndex",c5,3c,7f,25),
	HX_("_xmlContent",41,8d,4c,ce),
	HX_("get_xmlContent",6b,48,b8,71),
	HX_("set_xmlContent",df,30,d8,91),
	HX_("validateNow",20,c2,bf,ca),
	HX_("update",09,86,05,87),
	HX_("refreshDisabledOverlay",d9,0d,c1,36),
	HX_("refreshLayout",e5,52,f3,56),
	HX_("refreshBackgroundSkin",c6,3c,91,2d),
	HX_("getCurrentBackgroundSkin",2e,6b,dc,9d),
	HX_("addCurrentBackgroundSkin",c3,bb,57,cf),
	HX_("removeCurrentBackgroundSkin",c0,fc,70,a2),
	HX_("refreshMaskSkin",84,d2,8d,e7),
	HX_("getCurrentMaskSkin",ec,c2,4c,71),
	HX_("addCurrentMaskSkin",c1,c5,fe,0c),
	HX_("removeCurrentMaskSkin",fe,fa,64,b5),
	HX_("refreshViewPortBounds",d6,72,b8,b5),
	HX_("handleCustomLayout",03,b1,70,a6),
	HX_("handleManualLayout",58,f5,af,ed),
	HX_("handleLayoutResult",ef,92,e3,71),
	HX_("refreshMaskLayout",71,ba,9d,c0),
	HX_("refreshBackgroundLayout",33,b9,01,1e),
	HX_("validateChildren",f5,2b,c3,28),
	HX_("layoutGroup_addedToStageHandler",5d,73,9d,bb),
	HX_("layoutGroup_removedFromStageHandler",ac,73,1e,e7),
	HX_("layoutGroup_stage_resizeHandler",6b,2b,d2,ce),
	HX_("layoutGroup_child_resizeHandler",c9,72,e5,07),
	HX_("layoutGroup_child_layoutDataChangeHandler",f9,51,fc,c2),
	HX_("layoutGroup_layout_changeHandler",2f,6c,10,38),
	HX_("__layout",ca,19,e8,00),
	HX_("get_layout",73,1e,40,49),
	HX_("set_layout",e7,bc,bd,4c),
	HX_("clearStyle_layout",65,f0,40,36),
	HX_("__backgroundSkin",ab,f0,ae,54),
	HX_("get_backgroundSkin",54,46,09,bc),
	HX_("set_backgroundSkin",c8,78,b8,98),
	HX_("clearStyle_backgroundSkin",46,5a,f8,27),
	HX_("__disabledBackgroundSkin",47,07,aa,50),
	HX_("get_disabledBackgroundSkin",f0,ad,3f,0b),
	HX_("set_disabledBackgroundSkin",64,74,d4,6a),
	HX_("clearStyle_disabledBackgroundSkin",e2,03,2f,d1),
	HX_("__maskSkin",a9,dc,6d,8d),
	HX_("get_maskSkin",92,1d,4f,9f),
	HX_("set_maskSkin",06,41,48,b4),
	HX_("clearStyle_maskSkin",04,d0,9d,6b),
	HX_("get_styleContext",47,7d,20,4b),
	::String(null()) };

static void LayoutGroup_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LayoutGroup_obj::VARIANT_TOOL_BAR,"VARIANT_TOOL_BAR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LayoutGroup_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LayoutGroup_obj::VARIANT_TOOL_BAR,"VARIANT_TOOL_BAR");
};

#endif

::hx::Class LayoutGroup_obj::__mClass;

static ::String LayoutGroup_obj_sStaticFields[] = {
	HX_("VARIANT_TOOL_BAR",66,f0,2e,84),
	::String(null())
};

void LayoutGroup_obj::__register()
{
	LayoutGroup_obj _hx_dummy;
	LayoutGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.controls.LayoutGroup",5b,86,11,b1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LayoutGroup_obj::__GetStatic;
	__mClass->mSetStaticField = &LayoutGroup_obj::__SetStatic;
	__mClass->mMarkFunc = LayoutGroup_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LayoutGroup_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LayoutGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LayoutGroup_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LayoutGroup_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LayoutGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LayoutGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LayoutGroup_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_60_boot)
HXDLIN(  60)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("defaultXmlProperty",0b,06,d9,8a),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("xmlContent",22,c0,c2,fb))))));
            	}
{
            	HX_STACKFRAME(&_hx_pos_af811a8d34d03704_77_boot)
HXDLIN(  77)		VARIANT_TOOL_BAR = HX_("toolBar",5b,b5,66,6a);
            	}
}

} // end namespace feathers
} // end namespace controls
