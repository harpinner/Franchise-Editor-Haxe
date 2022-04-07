#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_feathers_events_StyleProviderEvent
#include <feathers/events/StyleProviderEvent.h>
#endif
#ifndef INCLUDED_feathers_graphics_FillStyle
#include <feathers/graphics/FillStyle.h>
#endif
#ifndef INCLUDED_feathers_graphics_LineStyle
#include <feathers/graphics/LineStyle.h>
#endif
#ifndef INCLUDED_feathers_graphics__CreateGradientBoxMatrix_CreateGradientBoxMatrix_Impl_
#include <feathers/graphics/_CreateGradientBoxMatrix/CreateGradientBoxMatrix_Impl_.h>
#endif
#ifndef INCLUDED_feathers_style_ClassVariantStyleProvider
#include <feathers/style/ClassVariantStyleProvider.h>
#endif
#ifndef INCLUDED_feathers_style_IDarkModeTheme
#include <feathers/style/IDarkModeTheme.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleProvider
#include <feathers/style/IStyleProvider.h>
#endif
#ifndef INCLUDED_feathers_style_ITheme
#include <feathers/style/ITheme.h>
#endif
#ifndef INCLUDED_feathers_text_TextFormat
#include <feathers/text/TextFormat.h>
#endif
#ifndef INCLUDED_feathers_themes_ClassVariantTheme
#include <feathers/themes/ClassVariantTheme.h>
#endif
#ifndef INCLUDED_feathers_themes_steel_BaseSteelTheme
#include <feathers/themes/steel/BaseSteelTheme.h>
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
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e704295178143e52_32_new,"feathers.themes.steel.BaseSteelTheme","new",0x5e372baa,"feathers.themes.steel.BaseSteelTheme.new","feathers/themes/steel/BaseSteelTheme.hx",32,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_63_get_darkMode,"feathers.themes.steel.BaseSteelTheme","get_darkMode",0x8e196678,"feathers.themes.steel.BaseSteelTheme.get_darkMode","feathers/themes/steel/BaseSteelTheme.hx",63,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_66_set_darkMode,"feathers.themes.steel.BaseSteelTheme","set_darkMode",0xa31289ec,"feathers.themes.steel.BaseSteelTheme.set_darkMode","feathers/themes/steel/BaseSteelTheme.hx",66,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_125_refreshColors,"feathers.themes.steel.BaseSteelTheme","refreshColors",0xcccf85b5,"feathers.themes.steel.BaseSteelTheme.refreshColors","feathers/themes/steel/BaseSteelTheme.hx",125,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_201_refreshFonts,"feathers.themes.steel.BaseSteelTheme","refreshFonts",0x73f39f5f,"feathers.themes.steel.BaseSteelTheme.refreshFonts","feathers/themes/steel/BaseSteelTheme.hx",201,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_206_refreshFontSizes,"feathers.themes.steel.BaseSteelTheme","refreshFontSizes",0x2bb1fd5e,"feathers.themes.steel.BaseSteelTheme.refreshFontSizes","feathers/themes/steel/BaseSteelTheme.hx",206,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_213_getThemeFill,"feathers.themes.steel.BaseSteelTheme","getThemeFill",0x9004392c,"feathers.themes.steel.BaseSteelTheme.getThemeFill","feathers/themes/steel/BaseSteelTheme.hx",213,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_217_getControlFill,"feathers.themes.steel.BaseSteelTheme","getControlFill",0x94d46080,"feathers.themes.steel.BaseSteelTheme.getControlFill","feathers/themes/steel/BaseSteelTheme.hx",217,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_221_getControlDisabledFill,"feathers.themes.steel.BaseSteelTheme","getControlDisabledFill",0xcc24011c,"feathers.themes.steel.BaseSteelTheme.getControlDisabledFill","feathers/themes/steel/BaseSteelTheme.hx",221,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_225_getButtonFill,"feathers.themes.steel.BaseSteelTheme","getButtonFill",0x1232b595,"feathers.themes.steel.BaseSteelTheme.getButtonFill","feathers/themes/steel/BaseSteelTheme.hx",225,0x077137c5)
static const Float _hx_array_data_4dc1ceb8_10[] = {
	1.0,1.0,
};
static const int _hx_array_data_4dc1ceb8_11[] = {
	(int)0,(int)255,
};
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_229_getButtonDownFill,"feathers.themes.steel.BaseSteelTheme","getButtonDownFill",0xa750a417,"feathers.themes.steel.BaseSteelTheme.getButtonDownFill","feathers/themes/steel/BaseSteelTheme.hx",229,0x077137c5)
static const Float _hx_array_data_4dc1ceb8_13[] = {
	1.0,1.0,
};
static const int _hx_array_data_4dc1ceb8_14[] = {
	(int)0,(int)255,
};
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_233_getButtonDisabledFill,"feathers.themes.steel.BaseSteelTheme","getButtonDisabledFill",0x4d2cf331,"feathers.themes.steel.BaseSteelTheme.getButtonDisabledFill","feathers/themes/steel/BaseSteelTheme.hx",233,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_237_getScrollBarThumbFill,"feathers.themes.steel.BaseSteelTheme","getScrollBarThumbFill",0xde563713,"feathers.themes.steel.BaseSteelTheme.getScrollBarThumbFill","feathers/themes/steel/BaseSteelTheme.hx",237,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_241_getScrollBarThumbDisabledFill,"feathers.themes.steel.BaseSteelTheme","getScrollBarThumbDisabledFill",0xed0b22af,"feathers.themes.steel.BaseSteelTheme.getScrollBarThumbDisabledFill","feathers/themes/steel/BaseSteelTheme.hx",241,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_245_getBorder,"feathers.themes.steel.BaseSteelTheme","getBorder",0x70fec4ec,"feathers.themes.steel.BaseSteelTheme.getBorder","feathers/themes/steel/BaseSteelTheme.hx",245,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_249_getButtonBorder,"feathers.themes.steel.BaseSteelTheme","getButtonBorder",0xeb669c7e,"feathers.themes.steel.BaseSteelTheme.getButtonBorder","feathers/themes/steel/BaseSteelTheme.hx",249,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_253_getInsetBorder,"feathers.themes.steel.BaseSteelTheme","getInsetBorder",0xcae3c9a9,"feathers.themes.steel.BaseSteelTheme.getInsetBorder","feathers/themes/steel/BaseSteelTheme.hx",253,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_257_getDisabledInsetBorder,"feathers.themes.steel.BaseSteelTheme","getDisabledInsetBorder",0x44e8d98d,"feathers.themes.steel.BaseSteelTheme.getDisabledInsetBorder","feathers/themes/steel/BaseSteelTheme.hx",257,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_261_getSelectedInsetBorder,"feathers.themes.steel.BaseSteelTheme","getSelectedInsetBorder",0x79996f0e,"feathers.themes.steel.BaseSteelTheme.getSelectedInsetBorder","feathers/themes/steel/BaseSteelTheme.hx",261,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_265_getThemeBorder,"feathers.themes.steel.BaseSteelTheme","getThemeBorder",0xa35173d5,"feathers.themes.steel.BaseSteelTheme.getThemeBorder","feathers/themes/steel/BaseSteelTheme.hx",265,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_269_getSelectedBorder,"feathers.themes.steel.BaseSteelTheme","getSelectedBorder",0xa19519a7,"feathers.themes.steel.BaseSteelTheme.getSelectedBorder","feathers/themes/steel/BaseSteelTheme.hx",269,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_273_getActiveFillBorder,"feathers.themes.steel.BaseSteelTheme","getActiveFillBorder",0x4198c535,"feathers.themes.steel.BaseSteelTheme.getActiveFillBorder","feathers/themes/steel/BaseSteelTheme.hx",273,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_277_getContainerBorder,"feathers.themes.steel.BaseSteelTheme","getContainerBorder",0xed67a50d,"feathers.themes.steel.BaseSteelTheme.getContainerBorder","feathers/themes/steel/BaseSteelTheme.hx",277,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_281_getDividerBorder,"feathers.themes.steel.BaseSteelTheme","getDividerBorder",0x4d51cca5,"feathers.themes.steel.BaseSteelTheme.getDividerBorder","feathers/themes/steel/BaseSteelTheme.hx",281,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_285_getDividerFill,"feathers.themes.steel.BaseSteelTheme","getDividerFill",0xe4fdbdfc,"feathers.themes.steel.BaseSteelTheme.getDividerFill","feathers/themes/steel/BaseSteelTheme.hx",285,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_289_getSubHeadingDividerBorder,"feathers.themes.steel.BaseSteelTheme","getSubHeadingDividerBorder",0xa9206923,"feathers.themes.steel.BaseSteelTheme.getSubHeadingDividerBorder","feathers/themes/steel/BaseSteelTheme.hx",289,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_293_getSubHeadingDividerFill,"feathers.themes.steel.BaseSteelTheme","getSubHeadingDividerFill",0xb6d39efa,"feathers.themes.steel.BaseSteelTheme.getSubHeadingDividerFill","feathers/themes/steel/BaseSteelTheme.hx",293,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_297_getFocusBorder,"feathers.themes.steel.BaseSteelTheme","getFocusBorder",0x430e1ae4,"feathers.themes.steel.BaseSteelTheme.getFocusBorder","feathers/themes/steel/BaseSteelTheme.hx",297,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_301_getInsetFill,"feathers.themes.steel.BaseSteelTheme","getInsetFill",0x8d27b200,"feathers.themes.steel.BaseSteelTheme.getInsetFill","feathers/themes/steel/BaseSteelTheme.hx",301,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_305_getDisabledInsetFill,"feathers.themes.steel.BaseSteelTheme","getDisabledInsetFill",0x84c040e4,"feathers.themes.steel.BaseSteelTheme.getDisabledInsetFill","feathers/themes/steel/BaseSteelTheme.hx",305,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_308_getActiveThemeFill,"feathers.themes.steel.BaseSteelTheme","getActiveThemeFill",0x786f6e86,"feathers.themes.steel.BaseSteelTheme.getActiveThemeFill","feathers/themes/steel/BaseSteelTheme.hx",308,0x077137c5)
static const Float _hx_array_data_4dc1ceb8_35[] = {
	1.0,1.0,
};
static const int _hx_array_data_4dc1ceb8_36[] = {
	(int)0,(int)255,
};
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_313_getReversedActiveThemeFill,"feathers.themes.steel.BaseSteelTheme","getReversedActiveThemeFill",0x14b3a3a4,"feathers.themes.steel.BaseSteelTheme.getReversedActiveThemeFill","feathers/themes/steel/BaseSteelTheme.hx",313,0x077137c5)
static const Float _hx_array_data_4dc1ceb8_38[] = {
	1.0,1.0,
};
static const int _hx_array_data_4dc1ceb8_39[] = {
	(int)0,(int)255,
};
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_318_getDangerFill,"feathers.themes.steel.BaseSteelTheme","getDangerFill",0xf22e7306,"feathers.themes.steel.BaseSteelTheme.getDangerFill","feathers/themes/steel/BaseSteelTheme.hx",318,0x077137c5)
static const Float _hx_array_data_4dc1ceb8_41[] = {
	1.0,1.0,
};
static const int _hx_array_data_4dc1ceb8_42[] = {
	(int)0,(int)255,
};
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_323_getReversedDangerFill,"feathers.themes.steel.BaseSteelTheme","getReversedDangerFill",0x525252a8,"feathers.themes.steel.BaseSteelTheme.getReversedDangerFill","feathers/themes/steel/BaseSteelTheme.hx",323,0x077137c5)
static const Float _hx_array_data_4dc1ceb8_44[] = {
	1.0,1.0,
};
static const int _hx_array_data_4dc1ceb8_45[] = {
	(int)0,(int)255,
};
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_329_getDangerBorder,"feathers.themes.steel.BaseSteelTheme","getDangerBorder",0x8fe1582f,"feathers.themes.steel.BaseSteelTheme.getDangerBorder","feathers/themes/steel/BaseSteelTheme.hx",329,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_333_getOverlayFill,"feathers.themes.steel.BaseSteelTheme","getOverlayFill",0xee1ece33,"feathers.themes.steel.BaseSteelTheme.getOverlayFill","feathers/themes/steel/BaseSteelTheme.hx",333,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_337_getRootFill,"feathers.themes.steel.BaseSteelTheme","getRootFill",0x43e519c5,"feathers.themes.steel.BaseSteelTheme.getRootFill","feathers/themes/steel/BaseSteelTheme.hx",337,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_341_getContainerFill,"feathers.themes.steel.BaseSteelTheme","getContainerFill",0x2f8d2c64,"feathers.themes.steel.BaseSteelTheme.getContainerFill","feathers/themes/steel/BaseSteelTheme.hx",341,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_345_getSubHeadingFill,"feathers.themes.steel.BaseSteelTheme","getSubHeadingFill",0x21c131c5,"feathers.themes.steel.BaseSteelTheme.getSubHeadingFill","feathers/themes/steel/BaseSteelTheme.hx",345,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_349_getTextFormat,"feathers.themes.steel.BaseSteelTheme","getTextFormat",0x98ff87c4,"feathers.themes.steel.BaseSteelTheme.getTextFormat","feathers/themes/steel/BaseSteelTheme.hx",349,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_353_getDisabledTextFormat,"feathers.themes.steel.BaseSteelTheme","getDisabledTextFormat",0x46e40060,"feathers.themes.steel.BaseSteelTheme.getDisabledTextFormat","feathers/themes/steel/BaseSteelTheme.hx",353,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_357_getSecondaryTextFormat,"feathers.themes.steel.BaseSteelTheme","getSecondaryTextFormat",0x557c4458,"feathers.themes.steel.BaseSteelTheme.getSecondaryTextFormat","feathers/themes/steel/BaseSteelTheme.hx",357,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_361_getDangerTextFormat,"feathers.themes.steel.BaseSteelTheme","getDangerTextFormat",0x4c007887,"feathers.themes.steel.BaseSteelTheme.getDangerTextFormat","feathers/themes/steel/BaseSteelTheme.hx",361,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_365_getHeaderTextFormat,"feathers.themes.steel.BaseSteelTheme","getHeaderTextFormat",0x08a0e7b1,"feathers.themes.steel.BaseSteelTheme.getHeaderTextFormat","feathers/themes/steel/BaseSteelTheme.hx",365,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_369_getDisabledHeaderTextFormat,"feathers.themes.steel.BaseSteelTheme","getDisabledHeaderTextFormat",0xa043bd4d,"feathers.themes.steel.BaseSteelTheme.getDisabledHeaderTextFormat","feathers/themes/steel/BaseSteelTheme.hx",369,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_373_getDetailTextFormat,"feathers.themes.steel.BaseSteelTheme","getDetailTextFormat",0x8f432db5,"feathers.themes.steel.BaseSteelTheme.getDetailTextFormat","feathers/themes/steel/BaseSteelTheme.hx",373,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_377_getDisabledDetailTextFormat,"feathers.themes.steel.BaseSteelTheme","getDisabledDetailTextFormat",0x26e60351,"feathers.themes.steel.BaseSteelTheme.getDisabledDetailTextFormat","feathers/themes/steel/BaseSteelTheme.hx",377,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_381_getHeaderFill,"feathers.themes.steel.BaseSteelTheme","getHeaderFill",0xdacdc6b0,"feathers.themes.steel.BaseSteelTheme.getHeaderFill","feathers/themes/steel/BaseSteelTheme.hx",381,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_384_lighten,"feathers.themes.steel.BaseSteelTheme","lighten",0xb7b71309,"feathers.themes.steel.BaseSteelTheme.lighten","feathers/themes/steel/BaseSteelTheme.hx",384,0x077137c5)
HX_LOCAL_STACK_FRAME(_hx_pos_e704295178143e52_408_darken,"feathers.themes.steel.BaseSteelTheme","darken",0xaa8b8555,"feathers.themes.steel.BaseSteelTheme.darken","feathers/themes/steel/BaseSteelTheme.hx",408,0x077137c5)
namespace feathers{
namespace themes{
namespace steel{

void BaseSteelTheme_obj::__construct( ::Dynamic themeColor, ::Dynamic darkThemeColor){
            	HX_GC_STACKFRAME(&_hx_pos_e704295178143e52_32_new)
HXLINE(  58)		this->_darkMode = false;
HXLINE(  34)		super::__construct();
HXLINE(  36)		this->customThemeColor = themeColor;
HXLINE(  37)		this->customDarkThemeColor = darkThemeColor;
HXLINE(  38)		this->refreshColors();
HXLINE(  39)		this->refreshFonts();
HXLINE(  40)		this->styleProvider =  ::feathers::style::ClassVariantStyleProvider_obj::__alloc( HX_CTX );
            	}

Dynamic BaseSteelTheme_obj::__CreateEmpty() { return new BaseSteelTheme_obj; }

void *BaseSteelTheme_obj::_hx_vtable = 0;

Dynamic BaseSteelTheme_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BaseSteelTheme_obj > _hx_result = new BaseSteelTheme_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool BaseSteelTheme_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2da0fa7a) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2da0fa7a;
	} else {
		return inClassId==(int)0x5c3db93c;
	}
}

static ::feathers::style::IDarkModeTheme_obj _hx_feathers_themes_steel_BaseSteelTheme__hx_feathers_style_IDarkModeTheme= {
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::themes::steel::BaseSteelTheme_obj::getStyleProvider,
	( void (::hx::Object::*)())&::feathers::themes::steel::BaseSteelTheme_obj::dispose,
	( bool (::hx::Object::*)())&::feathers::themes::steel::BaseSteelTheme_obj::get_darkMode,
	( bool (::hx::Object::*)(bool))&::feathers::themes::steel::BaseSteelTheme_obj::set_darkMode,
};

static ::feathers::style::ITheme_obj _hx_feathers_themes_steel_BaseSteelTheme__hx_feathers_style_ITheme= {
	( ::Dynamic (::hx::Object::*)(::Dynamic))&::feathers::themes::steel::BaseSteelTheme_obj::getStyleProvider,
	( void (::hx::Object::*)())&::feathers::themes::steel::BaseSteelTheme_obj::dispose,
};

void *BaseSteelTheme_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa443ce88: return &_hx_feathers_themes_steel_BaseSteelTheme__hx_feathers_style_IDarkModeTheme;
		case (int)0xcaf21441: return &_hx_feathers_themes_steel_BaseSteelTheme__hx_feathers_style_ITheme;
	}
	return super::_hx_getInterface(inHash);
}

bool BaseSteelTheme_obj::get_darkMode(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_63_get_darkMode)
HXDLIN(  63)		return this->_darkMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,get_darkMode,return )

bool BaseSteelTheme_obj::set_darkMode(bool value){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_66_set_darkMode)
HXLINE(  67)		if ((this->_darkMode == value)) {
HXLINE(  68)			return this->_darkMode;
            		}
HXLINE(  70)		this->_darkMode = value;
HXLINE(  71)		this->refreshColors();
HXLINE(  72)		::feathers::events::StyleProviderEvent_obj::dispatch(this->styleProvider,HX_("stylesChange",32,31,e4,f9),null());
HXLINE(  73)		return this->_darkMode;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,set_darkMode,return )

void BaseSteelTheme_obj::refreshColors(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_125_refreshColors)
HXDLIN( 125)		if (this->_darkMode) {
HXLINE( 126)			if (::hx::IsNotNull( this->customDarkThemeColor )) {
HXLINE( 127)				this->themeColor = ( (int)(this->customDarkThemeColor) );
            			}
            			else {
HXLINE( 128)				if (::hx::IsNotNull( this->customThemeColor )) {
HXLINE( 129)					this->themeColor = ( (int)(this->customThemeColor) );
            				}
            				else {
HXLINE( 131)					this->themeColor = 5205919;
            				}
            			}
HXLINE( 133)			this->offsetThemeColor = this->darken(this->themeColor,986895);
HXLINE( 134)			this->rootFillColor = 3684408;
HXLINE( 135)			this->controlFillColor1 = 6250335;
HXLINE( 136)			this->controlFillColor2 = 5000268;
HXLINE( 137)			this->controlDisabledFillColor = 3158064;
HXLINE( 138)			this->scrollBarThumbFillColor = 7303023;
HXLINE( 139)			this->scrollBarThumbDisabledFillColor = 4144959;
HXLINE( 140)			this->insetFillColor = 1579032;
HXLINE( 141)			this->disabledInsetFillColor = 2631720;
HXLINE( 142)			this->insetBorderColor = 4737096;
HXLINE( 143)			this->disabledInsetBorderColor = 3684408;
HXLINE( 144)			this->selectedInsetBorderColor = this->themeColor;
HXLINE( 145)			this->activeFillBorderColor = this->darken(this->themeColor,3092271);
HXLINE( 146)			this->selectedBorderColor = this->lighten(this->themeColor,986895);
HXLINE( 147)			this->focusBorderColor = this->lighten(this->themeColor,986895);
HXLINE( 148)			this->containerFillColor = 3684408;
HXLINE( 149)			this->headerFillColor = 4144959;
HXLINE( 150)			this->overlayFillColor = 7303023;
HXLINE( 151)			this->subHeadingFillColor = 2894892;
HXLINE( 152)			this->dangerFillColor = 10440527;
HXLINE( 153)			this->offsetDangerFillColor = this->darken(this->dangerFillColor,986895);
HXLINE( 154)			this->dangerBorderColor = this->darken(this->dangerFillColor,3092271);
HXLINE( 155)			this->borderColor = 526344;
HXLINE( 156)			this->dividerColor = 2631720;
HXLINE( 157)			this->subHeadingDividerColor = 789516;
HXLINE( 158)			this->textColor = 15856113;
HXLINE( 159)			this->disabledTextColor = 9408399;
HXLINE( 160)			this->secondaryTextColor = 11513775;
HXLINE( 161)			this->dangerTextColor = 13385535;
            		}
            		else {
HXLINE( 164)			if (::hx::IsNotNull( this->customThemeColor )) {
HXLINE( 165)				this->themeColor = ( (int)(this->customThemeColor) );
            			}
            			else {
HXLINE( 167)				this->themeColor = 10535152;
            			}
HXLINE( 169)			this->offsetThemeColor = this->darken(this->themeColor,986895);
HXLINE( 170)			this->rootFillColor = 16316664;
HXLINE( 171)			this->controlFillColor1 = 16777215;
HXLINE( 172)			this->controlFillColor2 = 15263976;
HXLINE( 173)			this->controlDisabledFillColor = 15724527;
HXLINE( 174)			this->scrollBarThumbFillColor = 9408399;
HXLINE( 175)			this->scrollBarThumbDisabledFillColor = 13619151;
HXLINE( 176)			this->insetFillColor = 16579836;
HXLINE( 177)			this->disabledInsetFillColor = 15856113;
HXLINE( 178)			this->insetBorderColor = 11316396;
HXLINE( 179)			this->disabledInsetBorderColor = 13421772;
HXLINE( 180)			this->selectedInsetBorderColor = this->darken(this->themeColor,3092271);
HXLINE( 181)			this->activeFillBorderColor = this->darken(this->themeColor,3092271);
HXLINE( 182)			this->selectedBorderColor = this->darken(this->themeColor,3092271);
HXLINE( 183)			this->focusBorderColor = this->darken(this->themeColor,3092271);
HXLINE( 184)			this->containerFillColor = 16316664;
HXLINE( 185)			this->headerFillColor = 15527148;
HXLINE( 186)			this->overlayFillColor = 9408399;
HXLINE( 187)			this->subHeadingFillColor = 14671839;
HXLINE( 188)			this->dangerFillColor = 15769760;
HXLINE( 189)			this->offsetDangerFillColor = this->darken(this->dangerFillColor,986895);
HXLINE( 190)			this->dangerBorderColor = this->darken(this->dangerFillColor,3092271);
HXLINE( 191)			this->borderColor = 11316396;
HXLINE( 192)			this->dividerColor = 14671839;
HXLINE( 193)			this->subHeadingDividerColor = 13619151;
HXLINE( 194)			this->textColor = 2039583;
HXLINE( 195)			this->disabledTextColor = 10461087;
HXLINE( 196)			this->secondaryTextColor = 7303023;
HXLINE( 197)			this->dangerTextColor = 13385535;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,refreshColors,(void))

void BaseSteelTheme_obj::refreshFonts(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_201_refreshFonts)
HXLINE( 202)		this->fontName = HX_("_sans",32,a0,5e,ff);
HXLINE( 203)		this->refreshFontSizes();
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,refreshFonts,(void))

void BaseSteelTheme_obj::refreshFontSizes(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_206_refreshFontSizes)
HXLINE( 207)		this->fontSize = 14;
HXLINE( 208)		this->headerFontSize = 18;
HXLINE( 209)		this->detailFontSize = 12;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,refreshFontSizes,(void))

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getThemeFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_213_getThemeFill)
HXDLIN( 213)		return ::feathers::graphics::FillStyle_obj::SolidColor(this->themeColor,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getThemeFill,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getControlFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_217_getControlFill)
HXDLIN( 217)		return ::feathers::graphics::FillStyle_obj::SolidColor(this->controlFillColor2,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getControlFill,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getControlDisabledFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_221_getControlDisabledFill)
HXDLIN( 221)		return ::feathers::graphics::FillStyle_obj::SolidColor(this->controlDisabledFillColor,((Float)0.7));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getControlDisabledFill,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getButtonFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_225_getButtonFill)
HXDLIN( 225)		::Array< int > _hx_tmp = ::Array_obj< int >::__new(2)->init(0,this->controlFillColor1)->init(1,this->controlFillColor2);
HXDLIN( 225)		return ::feathers::graphics::FillStyle_obj::Gradient(0,_hx_tmp,::Array_obj< Float >::fromData( _hx_array_data_4dc1ceb8_10,2),::Array_obj< int >::fromData( _hx_array_data_4dc1ceb8_11,2),::feathers::graphics::_CreateGradientBoxMatrix::CreateGradientBoxMatrix_Impl__obj::fromRadians((::Math_obj::PI / ((Float)2.0))),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getButtonFill,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getButtonDownFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_229_getButtonDownFill)
HXDLIN( 229)		::Array< int > _hx_tmp = ::Array_obj< int >::__new(2)->init(0,this->controlFillColor2)->init(1,this->controlFillColor1);
HXDLIN( 229)		return ::feathers::graphics::FillStyle_obj::Gradient(0,_hx_tmp,::Array_obj< Float >::fromData( _hx_array_data_4dc1ceb8_13,2),::Array_obj< int >::fromData( _hx_array_data_4dc1ceb8_14,2),::feathers::graphics::_CreateGradientBoxMatrix::CreateGradientBoxMatrix_Impl__obj::fromRadians((::Math_obj::PI / ((Float)2.0))),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getButtonDownFill,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getButtonDisabledFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_233_getButtonDisabledFill)
HXDLIN( 233)		return ::feathers::graphics::FillStyle_obj::SolidColor(this->controlDisabledFillColor,((Float)0.7));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getButtonDisabledFill,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getScrollBarThumbFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_237_getScrollBarThumbFill)
HXDLIN( 237)		return ::feathers::graphics::FillStyle_obj::SolidColor(this->scrollBarThumbFillColor,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getScrollBarThumbFill,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getScrollBarThumbDisabledFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_241_getScrollBarThumbDisabledFill)
HXDLIN( 241)		return ::feathers::graphics::FillStyle_obj::SolidColor(this->scrollBarThumbDisabledFillColor,((Float)0.7));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getScrollBarThumbDisabledFill,return )

 ::feathers::graphics::LineStyle BaseSteelTheme_obj::getBorder(::hx::Null< Float >  __o_thickness){
            		Float thickness = __o_thickness.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_245_getBorder)
HXDLIN( 245)		return ::feathers::graphics::LineStyle_obj::SolidColor(thickness,this->borderColor,null(),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getBorder,return )

 ::feathers::graphics::LineStyle BaseSteelTheme_obj::getButtonBorder(::hx::Null< Float >  __o_thickness){
            		Float thickness = __o_thickness.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_249_getButtonBorder)
HXDLIN( 249)		return ::feathers::graphics::LineStyle_obj::SolidColor(thickness,this->borderColor,null(),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getButtonBorder,return )

 ::feathers::graphics::LineStyle BaseSteelTheme_obj::getInsetBorder(::hx::Null< Float >  __o_thickness){
            		Float thickness = __o_thickness.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_253_getInsetBorder)
HXDLIN( 253)		return ::feathers::graphics::LineStyle_obj::SolidColor(thickness,this->insetBorderColor,null(),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getInsetBorder,return )

 ::feathers::graphics::LineStyle BaseSteelTheme_obj::getDisabledInsetBorder(::hx::Null< Float >  __o_thickness){
            		Float thickness = __o_thickness.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_257_getDisabledInsetBorder)
HXDLIN( 257)		return ::feathers::graphics::LineStyle_obj::SolidColor(thickness,this->disabledInsetBorderColor,null(),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getDisabledInsetBorder,return )

 ::feathers::graphics::LineStyle BaseSteelTheme_obj::getSelectedInsetBorder(::hx::Null< Float >  __o_thickness){
            		Float thickness = __o_thickness.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_261_getSelectedInsetBorder)
HXDLIN( 261)		return ::feathers::graphics::LineStyle_obj::SolidColor(thickness,this->selectedInsetBorderColor,null(),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getSelectedInsetBorder,return )

 ::feathers::graphics::LineStyle BaseSteelTheme_obj::getThemeBorder(::hx::Null< Float >  __o_thickness){
            		Float thickness = __o_thickness.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_265_getThemeBorder)
HXDLIN( 265)		return ::feathers::graphics::LineStyle_obj::SolidColor(thickness,this->themeColor,null(),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getThemeBorder,return )

 ::feathers::graphics::LineStyle BaseSteelTheme_obj::getSelectedBorder(::hx::Null< Float >  __o_thickness){
            		Float thickness = __o_thickness.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_269_getSelectedBorder)
HXDLIN( 269)		return ::feathers::graphics::LineStyle_obj::SolidColor(thickness,this->selectedBorderColor,null(),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getSelectedBorder,return )

 ::feathers::graphics::LineStyle BaseSteelTheme_obj::getActiveFillBorder(::hx::Null< Float >  __o_thickness){
            		Float thickness = __o_thickness.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_273_getActiveFillBorder)
HXDLIN( 273)		return ::feathers::graphics::LineStyle_obj::SolidColor(thickness,this->activeFillBorderColor,null(),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getActiveFillBorder,return )

 ::feathers::graphics::LineStyle BaseSteelTheme_obj::getContainerBorder(::hx::Null< Float >  __o_thickness){
            		Float thickness = __o_thickness.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_277_getContainerBorder)
HXDLIN( 277)		return ::feathers::graphics::LineStyle_obj::SolidColor(thickness,this->borderColor,null(),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getContainerBorder,return )

 ::feathers::graphics::LineStyle BaseSteelTheme_obj::getDividerBorder(::hx::Null< Float >  __o_thickness){
            		Float thickness = __o_thickness.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_281_getDividerBorder)
HXDLIN( 281)		return ::feathers::graphics::LineStyle_obj::SolidColor(thickness,this->dividerColor,null(),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getDividerBorder,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getDividerFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_285_getDividerFill)
HXDLIN( 285)		return ::feathers::graphics::FillStyle_obj::SolidColor(this->dividerColor,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getDividerFill,return )

 ::feathers::graphics::LineStyle BaseSteelTheme_obj::getSubHeadingDividerBorder(::hx::Null< Float >  __o_thickness){
            		Float thickness = __o_thickness.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_289_getSubHeadingDividerBorder)
HXDLIN( 289)		return ::feathers::graphics::LineStyle_obj::SolidColor(thickness,this->subHeadingDividerColor,null(),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getSubHeadingDividerBorder,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getSubHeadingDividerFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_293_getSubHeadingDividerFill)
HXDLIN( 293)		return ::feathers::graphics::FillStyle_obj::SolidColor(this->subHeadingDividerColor,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getSubHeadingDividerFill,return )

 ::feathers::graphics::LineStyle BaseSteelTheme_obj::getFocusBorder(::hx::Null< Float >  __o_thickness){
            		Float thickness = __o_thickness.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_297_getFocusBorder)
HXDLIN( 297)		return ::feathers::graphics::LineStyle_obj::SolidColor(thickness,this->focusBorderColor,null(),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getFocusBorder,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getInsetFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_301_getInsetFill)
HXDLIN( 301)		return ::feathers::graphics::FillStyle_obj::SolidColor(this->insetFillColor,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getInsetFill,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getDisabledInsetFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_305_getDisabledInsetFill)
HXDLIN( 305)		return ::feathers::graphics::FillStyle_obj::SolidColor(this->disabledInsetFillColor,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getDisabledInsetFill,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getActiveThemeFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_308_getActiveThemeFill)
HXLINE( 309)		::Array< int > colors = ::Array_obj< int >::__new(2)->init(0,this->themeColor)->init(1,this->offsetThemeColor);
HXLINE( 310)		return ::feathers::graphics::FillStyle_obj::Gradient(0,colors,::Array_obj< Float >::fromData( _hx_array_data_4dc1ceb8_35,2),::Array_obj< int >::fromData( _hx_array_data_4dc1ceb8_36,2),::feathers::graphics::_CreateGradientBoxMatrix::CreateGradientBoxMatrix_Impl__obj::fromRadians((::Math_obj::PI / ((Float)2.0))),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getActiveThemeFill,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getReversedActiveThemeFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_313_getReversedActiveThemeFill)
HXLINE( 314)		::Array< int > colors = ::Array_obj< int >::__new(2)->init(0,this->offsetThemeColor)->init(1,this->themeColor);
HXLINE( 315)		return ::feathers::graphics::FillStyle_obj::Gradient(0,colors,::Array_obj< Float >::fromData( _hx_array_data_4dc1ceb8_38,2),::Array_obj< int >::fromData( _hx_array_data_4dc1ceb8_39,2),::feathers::graphics::_CreateGradientBoxMatrix::CreateGradientBoxMatrix_Impl__obj::fromRadians((::Math_obj::PI / ((Float)2.0))),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getReversedActiveThemeFill,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getDangerFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_318_getDangerFill)
HXLINE( 319)		::Array< int > colors = ::Array_obj< int >::__new(2)->init(0,this->dangerFillColor)->init(1,this->offsetDangerFillColor);
HXLINE( 320)		return ::feathers::graphics::FillStyle_obj::Gradient(0,colors,::Array_obj< Float >::fromData( _hx_array_data_4dc1ceb8_41,2),::Array_obj< int >::fromData( _hx_array_data_4dc1ceb8_42,2),::feathers::graphics::_CreateGradientBoxMatrix::CreateGradientBoxMatrix_Impl__obj::fromRadians((::Math_obj::PI / ((Float)2.0))),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getDangerFill,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getReversedDangerFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_323_getReversedDangerFill)
HXLINE( 324)		::Array< int > colors = ::Array_obj< int >::__new(2)->init(0,this->offsetDangerFillColor)->init(1,this->dangerFillColor);
HXLINE( 325)		return ::feathers::graphics::FillStyle_obj::Gradient(0,colors,::Array_obj< Float >::fromData( _hx_array_data_4dc1ceb8_44,2),::Array_obj< int >::fromData( _hx_array_data_4dc1ceb8_45,2),::feathers::graphics::_CreateGradientBoxMatrix::CreateGradientBoxMatrix_Impl__obj::fromRadians((::Math_obj::PI / ((Float)2.0))),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getReversedDangerFill,return )

 ::feathers::graphics::LineStyle BaseSteelTheme_obj::getDangerBorder(::hx::Null< Float >  __o_thickness){
            		Float thickness = __o_thickness.Default(((Float)1.0));
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_329_getDangerBorder)
HXDLIN( 329)		return ::feathers::graphics::LineStyle_obj::SolidColor(thickness,this->dangerBorderColor,null(),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getDangerBorder,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getOverlayFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_333_getOverlayFill)
HXDLIN( 333)		return ::feathers::graphics::FillStyle_obj::SolidColor(this->overlayFillColor,((Float)0.8));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getOverlayFill,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getRootFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_337_getRootFill)
HXDLIN( 337)		return ::feathers::graphics::FillStyle_obj::SolidColor(this->rootFillColor,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getRootFill,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getContainerFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_341_getContainerFill)
HXDLIN( 341)		return ::feathers::graphics::FillStyle_obj::SolidColor(this->containerFillColor,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getContainerFill,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getSubHeadingFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_345_getSubHeadingFill)
HXDLIN( 345)		return ::feathers::graphics::FillStyle_obj::SolidColor(this->subHeadingFillColor,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getSubHeadingFill,return )

 ::feathers::text::TextFormat BaseSteelTheme_obj::getTextFormat( ::Dynamic __o_align){
            		 ::Dynamic align = __o_align;
            		if (::hx::IsNull(__o_align)) align = 3;
            	HX_GC_STACKFRAME(&_hx_pos_e704295178143e52_349_getTextFormat)
HXDLIN( 349)		return  ::feathers::text::TextFormat_obj::__alloc( HX_CTX ,this->fontName,this->fontSize,this->textColor,null(),null(),null(),null(),null(),align,null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getTextFormat,return )

 ::feathers::text::TextFormat BaseSteelTheme_obj::getDisabledTextFormat( ::Dynamic __o_align){
            		 ::Dynamic align = __o_align;
            		if (::hx::IsNull(__o_align)) align = 3;
            	HX_GC_STACKFRAME(&_hx_pos_e704295178143e52_353_getDisabledTextFormat)
HXDLIN( 353)		return  ::feathers::text::TextFormat_obj::__alloc( HX_CTX ,this->fontName,this->fontSize,this->disabledTextColor,null(),null(),null(),null(),null(),align,null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getDisabledTextFormat,return )

 ::feathers::text::TextFormat BaseSteelTheme_obj::getSecondaryTextFormat( ::Dynamic __o_align){
            		 ::Dynamic align = __o_align;
            		if (::hx::IsNull(__o_align)) align = 3;
            	HX_GC_STACKFRAME(&_hx_pos_e704295178143e52_357_getSecondaryTextFormat)
HXDLIN( 357)		return  ::feathers::text::TextFormat_obj::__alloc( HX_CTX ,this->fontName,this->fontSize,this->secondaryTextColor,null(),null(),null(),null(),null(),align,null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getSecondaryTextFormat,return )

 ::feathers::text::TextFormat BaseSteelTheme_obj::getDangerTextFormat( ::Dynamic __o_align){
            		 ::Dynamic align = __o_align;
            		if (::hx::IsNull(__o_align)) align = 3;
            	HX_GC_STACKFRAME(&_hx_pos_e704295178143e52_361_getDangerTextFormat)
HXDLIN( 361)		return  ::feathers::text::TextFormat_obj::__alloc( HX_CTX ,this->fontName,this->fontSize,this->dangerTextColor,null(),null(),null(),null(),null(),align,null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getDangerTextFormat,return )

 ::feathers::text::TextFormat BaseSteelTheme_obj::getHeaderTextFormat( ::Dynamic __o_align){
            		 ::Dynamic align = __o_align;
            		if (::hx::IsNull(__o_align)) align = 3;
            	HX_GC_STACKFRAME(&_hx_pos_e704295178143e52_365_getHeaderTextFormat)
HXDLIN( 365)		return  ::feathers::text::TextFormat_obj::__alloc( HX_CTX ,this->fontName,this->headerFontSize,this->textColor,null(),null(),null(),null(),null(),align,null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getHeaderTextFormat,return )

 ::feathers::text::TextFormat BaseSteelTheme_obj::getDisabledHeaderTextFormat( ::Dynamic __o_align){
            		 ::Dynamic align = __o_align;
            		if (::hx::IsNull(__o_align)) align = 3;
            	HX_GC_STACKFRAME(&_hx_pos_e704295178143e52_369_getDisabledHeaderTextFormat)
HXDLIN( 369)		return  ::feathers::text::TextFormat_obj::__alloc( HX_CTX ,this->fontName,this->headerFontSize,this->disabledTextColor,null(),null(),null(),null(),null(),align,null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getDisabledHeaderTextFormat,return )

 ::feathers::text::TextFormat BaseSteelTheme_obj::getDetailTextFormat( ::Dynamic __o_align){
            		 ::Dynamic align = __o_align;
            		if (::hx::IsNull(__o_align)) align = 3;
            	HX_GC_STACKFRAME(&_hx_pos_e704295178143e52_373_getDetailTextFormat)
HXDLIN( 373)		return  ::feathers::text::TextFormat_obj::__alloc( HX_CTX ,this->fontName,this->detailFontSize,this->secondaryTextColor,null(),null(),null(),null(),null(),align,null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getDetailTextFormat,return )

 ::feathers::text::TextFormat BaseSteelTheme_obj::getDisabledDetailTextFormat( ::Dynamic __o_align){
            		 ::Dynamic align = __o_align;
            		if (::hx::IsNull(__o_align)) align = 3;
            	HX_GC_STACKFRAME(&_hx_pos_e704295178143e52_377_getDisabledDetailTextFormat)
HXDLIN( 377)		return  ::feathers::text::TextFormat_obj::__alloc( HX_CTX ,this->fontName,this->detailFontSize,this->disabledTextColor,null(),null(),null(),null(),null(),align,null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseSteelTheme_obj,getDisabledDetailTextFormat,return )

 ::feathers::graphics::FillStyle BaseSteelTheme_obj::getHeaderFill(){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_381_getHeaderFill)
HXDLIN( 381)		return ::feathers::graphics::FillStyle_obj::SolidColor(this->headerFillColor,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseSteelTheme_obj,getHeaderFill,return )

int BaseSteelTheme_obj::lighten(int color,int offset){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_384_lighten)
HXLINE( 385)		int r1 = ((color >> 16) & 255);
HXLINE( 386)		int g1 = ((color >> 8) & 255);
HXLINE( 387)		int b1 = (color & 255);
HXLINE( 389)		int r2 = ((offset >> 16) & 255);
HXLINE( 390)		int g2 = ((offset >> 8) & 255);
HXLINE( 391)		int b2 = (offset & 255);
HXLINE( 393)		r1 = (r1 + r2);
HXLINE( 394)		if ((r1 > 255)) {
HXLINE( 395)			r1 = 255;
            		}
HXLINE( 397)		g1 = (g1 + g2);
HXLINE( 398)		if ((g1 > 255)) {
HXLINE( 399)			g1 = 255;
            		}
HXLINE( 401)		b1 = (b1 + b2);
HXLINE( 402)		if ((b1 > 255)) {
HXLINE( 403)			b1 = 255;
            		}
HXLINE( 405)		return (((r1 << 16) + (g1 << 8)) + b1);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseSteelTheme_obj,lighten,return )

int BaseSteelTheme_obj::darken(int color,int offset){
            	HX_STACKFRAME(&_hx_pos_e704295178143e52_408_darken)
HXLINE( 409)		int r1 = ((color >> 16) & 255);
HXLINE( 410)		int g1 = ((color >> 8) & 255);
HXLINE( 411)		int b1 = (color & 255);
HXLINE( 413)		int r2 = ((offset >> 16) & 255);
HXLINE( 414)		int g2 = ((offset >> 8) & 255);
HXLINE( 415)		int b2 = (offset & 255);
HXLINE( 417)		r1 = (r1 - r2);
HXLINE( 418)		if ((r1 < 0)) {
HXLINE( 419)			r1 = 0;
            		}
HXLINE( 421)		g1 = (g1 - g2);
HXLINE( 422)		if ((g1 < 0)) {
HXLINE( 423)			g1 = 0;
            		}
HXLINE( 425)		b1 = (b1 - b2);
HXLINE( 426)		if ((b1 < 0)) {
HXLINE( 427)			b1 = 0;
            		}
HXLINE( 429)		return (((r1 << 16) + (g1 << 8)) + b1);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BaseSteelTheme_obj,darken,return )


::hx::ObjectPtr< BaseSteelTheme_obj > BaseSteelTheme_obj::__new( ::Dynamic themeColor, ::Dynamic darkThemeColor) {
	::hx::ObjectPtr< BaseSteelTheme_obj > __this = new BaseSteelTheme_obj();
	__this->__construct(themeColor,darkThemeColor);
	return __this;
}

::hx::ObjectPtr< BaseSteelTheme_obj > BaseSteelTheme_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic themeColor, ::Dynamic darkThemeColor) {
	BaseSteelTheme_obj *__this = (BaseSteelTheme_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BaseSteelTheme_obj), true, "feathers.themes.steel.BaseSteelTheme"));
	*(void **)__this = BaseSteelTheme_obj::_hx_vtable;
	__this->__construct(themeColor,darkThemeColor);
	return __this;
}

BaseSteelTheme_obj::BaseSteelTheme_obj()
{
}

void BaseSteelTheme_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseSteelTheme);
	HX_MARK_MEMBER_NAME(_darkMode,"_darkMode");
	HX_MARK_MEMBER_NAME(customThemeColor,"customThemeColor");
	HX_MARK_MEMBER_NAME(customDarkThemeColor,"customDarkThemeColor");
	HX_MARK_MEMBER_NAME(themeColor,"themeColor");
	HX_MARK_MEMBER_NAME(offsetThemeColor,"offsetThemeColor");
	HX_MARK_MEMBER_NAME(rootFillColor,"rootFillColor");
	HX_MARK_MEMBER_NAME(controlFillColor1,"controlFillColor1");
	HX_MARK_MEMBER_NAME(controlFillColor2,"controlFillColor2");
	HX_MARK_MEMBER_NAME(controlDisabledFillColor,"controlDisabledFillColor");
	HX_MARK_MEMBER_NAME(scrollBarThumbFillColor,"scrollBarThumbFillColor");
	HX_MARK_MEMBER_NAME(scrollBarThumbDisabledFillColor,"scrollBarThumbDisabledFillColor");
	HX_MARK_MEMBER_NAME(insetFillColor,"insetFillColor");
	HX_MARK_MEMBER_NAME(disabledInsetFillColor,"disabledInsetFillColor");
	HX_MARK_MEMBER_NAME(insetBorderColor,"insetBorderColor");
	HX_MARK_MEMBER_NAME(disabledInsetBorderColor,"disabledInsetBorderColor");
	HX_MARK_MEMBER_NAME(selectedInsetBorderColor,"selectedInsetBorderColor");
	HX_MARK_MEMBER_NAME(activeFillBorderColor,"activeFillBorderColor");
	HX_MARK_MEMBER_NAME(selectedBorderColor,"selectedBorderColor");
	HX_MARK_MEMBER_NAME(focusBorderColor,"focusBorderColor");
	HX_MARK_MEMBER_NAME(containerFillColor,"containerFillColor");
	HX_MARK_MEMBER_NAME(headerFillColor,"headerFillColor");
	HX_MARK_MEMBER_NAME(overlayFillColor,"overlayFillColor");
	HX_MARK_MEMBER_NAME(subHeadingFillColor,"subHeadingFillColor");
	HX_MARK_MEMBER_NAME(borderColor,"borderColor");
	HX_MARK_MEMBER_NAME(dividerColor,"dividerColor");
	HX_MARK_MEMBER_NAME(subHeadingDividerColor,"subHeadingDividerColor");
	HX_MARK_MEMBER_NAME(textColor,"textColor");
	HX_MARK_MEMBER_NAME(secondaryTextColor,"secondaryTextColor");
	HX_MARK_MEMBER_NAME(disabledTextColor,"disabledTextColor");
	HX_MARK_MEMBER_NAME(dangerTextColor,"dangerTextColor");
	HX_MARK_MEMBER_NAME(dangerFillColor,"dangerFillColor");
	HX_MARK_MEMBER_NAME(offsetDangerFillColor,"offsetDangerFillColor");
	HX_MARK_MEMBER_NAME(dangerBorderColor,"dangerBorderColor");
	HX_MARK_MEMBER_NAME(fontName,"fontName");
	HX_MARK_MEMBER_NAME(fontSize,"fontSize");
	HX_MARK_MEMBER_NAME(headerFontSize,"headerFontSize");
	HX_MARK_MEMBER_NAME(detailFontSize,"detailFontSize");
	 ::feathers::themes::ClassVariantTheme_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BaseSteelTheme_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_darkMode,"_darkMode");
	HX_VISIT_MEMBER_NAME(customThemeColor,"customThemeColor");
	HX_VISIT_MEMBER_NAME(customDarkThemeColor,"customDarkThemeColor");
	HX_VISIT_MEMBER_NAME(themeColor,"themeColor");
	HX_VISIT_MEMBER_NAME(offsetThemeColor,"offsetThemeColor");
	HX_VISIT_MEMBER_NAME(rootFillColor,"rootFillColor");
	HX_VISIT_MEMBER_NAME(controlFillColor1,"controlFillColor1");
	HX_VISIT_MEMBER_NAME(controlFillColor2,"controlFillColor2");
	HX_VISIT_MEMBER_NAME(controlDisabledFillColor,"controlDisabledFillColor");
	HX_VISIT_MEMBER_NAME(scrollBarThumbFillColor,"scrollBarThumbFillColor");
	HX_VISIT_MEMBER_NAME(scrollBarThumbDisabledFillColor,"scrollBarThumbDisabledFillColor");
	HX_VISIT_MEMBER_NAME(insetFillColor,"insetFillColor");
	HX_VISIT_MEMBER_NAME(disabledInsetFillColor,"disabledInsetFillColor");
	HX_VISIT_MEMBER_NAME(insetBorderColor,"insetBorderColor");
	HX_VISIT_MEMBER_NAME(disabledInsetBorderColor,"disabledInsetBorderColor");
	HX_VISIT_MEMBER_NAME(selectedInsetBorderColor,"selectedInsetBorderColor");
	HX_VISIT_MEMBER_NAME(activeFillBorderColor,"activeFillBorderColor");
	HX_VISIT_MEMBER_NAME(selectedBorderColor,"selectedBorderColor");
	HX_VISIT_MEMBER_NAME(focusBorderColor,"focusBorderColor");
	HX_VISIT_MEMBER_NAME(containerFillColor,"containerFillColor");
	HX_VISIT_MEMBER_NAME(headerFillColor,"headerFillColor");
	HX_VISIT_MEMBER_NAME(overlayFillColor,"overlayFillColor");
	HX_VISIT_MEMBER_NAME(subHeadingFillColor,"subHeadingFillColor");
	HX_VISIT_MEMBER_NAME(borderColor,"borderColor");
	HX_VISIT_MEMBER_NAME(dividerColor,"dividerColor");
	HX_VISIT_MEMBER_NAME(subHeadingDividerColor,"subHeadingDividerColor");
	HX_VISIT_MEMBER_NAME(textColor,"textColor");
	HX_VISIT_MEMBER_NAME(secondaryTextColor,"secondaryTextColor");
	HX_VISIT_MEMBER_NAME(disabledTextColor,"disabledTextColor");
	HX_VISIT_MEMBER_NAME(dangerTextColor,"dangerTextColor");
	HX_VISIT_MEMBER_NAME(dangerFillColor,"dangerFillColor");
	HX_VISIT_MEMBER_NAME(offsetDangerFillColor,"offsetDangerFillColor");
	HX_VISIT_MEMBER_NAME(dangerBorderColor,"dangerBorderColor");
	HX_VISIT_MEMBER_NAME(fontName,"fontName");
	HX_VISIT_MEMBER_NAME(fontSize,"fontSize");
	HX_VISIT_MEMBER_NAME(headerFontSize,"headerFontSize");
	HX_VISIT_MEMBER_NAME(detailFontSize,"detailFontSize");
	 ::feathers::themes::ClassVariantTheme_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BaseSteelTheme_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"darken") ) { return ::hx::Val( darken_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lighten") ) { return ::hx::Val( lighten_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"darkMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_darkMode() ); }
		if (HX_FIELD_EQ(inName,"fontName") ) { return ::hx::Val( fontName ); }
		if (HX_FIELD_EQ(inName,"fontSize") ) { return ::hx::Val( fontSize ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_darkMode") ) { return ::hx::Val( _darkMode ); }
		if (HX_FIELD_EQ(inName,"textColor") ) { return ::hx::Val( textColor ); }
		if (HX_FIELD_EQ(inName,"getBorder") ) { return ::hx::Val( getBorder_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"themeColor") ) { return ::hx::Val( themeColor ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { return ::hx::Val( borderColor ); }
		if (HX_FIELD_EQ(inName,"getRootFill") ) { return ::hx::Val( getRootFill_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_darkMode") ) { return ::hx::Val( get_darkMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_darkMode") ) { return ::hx::Val( set_darkMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"dividerColor") ) { return ::hx::Val( dividerColor ); }
		if (HX_FIELD_EQ(inName,"refreshFonts") ) { return ::hx::Val( refreshFonts_dyn() ); }
		if (HX_FIELD_EQ(inName,"getThemeFill") ) { return ::hx::Val( getThemeFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInsetFill") ) { return ::hx::Val( getInsetFill_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rootFillColor") ) { return ::hx::Val( rootFillColor ); }
		if (HX_FIELD_EQ(inName,"refreshColors") ) { return ::hx::Val( refreshColors_dyn() ); }
		if (HX_FIELD_EQ(inName,"getButtonFill") ) { return ::hx::Val( getButtonFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDangerFill") ) { return ::hx::Val( getDangerFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTextFormat") ) { return ::hx::Val( getTextFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"getHeaderFill") ) { return ::hx::Val( getHeaderFill_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"insetFillColor") ) { return ::hx::Val( insetFillColor ); }
		if (HX_FIELD_EQ(inName,"headerFontSize") ) { return ::hx::Val( headerFontSize ); }
		if (HX_FIELD_EQ(inName,"detailFontSize") ) { return ::hx::Val( detailFontSize ); }
		if (HX_FIELD_EQ(inName,"getControlFill") ) { return ::hx::Val( getControlFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"getInsetBorder") ) { return ::hx::Val( getInsetBorder_dyn() ); }
		if (HX_FIELD_EQ(inName,"getThemeBorder") ) { return ::hx::Val( getThemeBorder_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDividerFill") ) { return ::hx::Val( getDividerFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFocusBorder") ) { return ::hx::Val( getFocusBorder_dyn() ); }
		if (HX_FIELD_EQ(inName,"getOverlayFill") ) { return ::hx::Val( getOverlayFill_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"headerFillColor") ) { return ::hx::Val( headerFillColor ); }
		if (HX_FIELD_EQ(inName,"dangerTextColor") ) { return ::hx::Val( dangerTextColor ); }
		if (HX_FIELD_EQ(inName,"dangerFillColor") ) { return ::hx::Val( dangerFillColor ); }
		if (HX_FIELD_EQ(inName,"getButtonBorder") ) { return ::hx::Val( getButtonBorder_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDangerBorder") ) { return ::hx::Val( getDangerBorder_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"customThemeColor") ) { return ::hx::Val( customThemeColor ); }
		if (HX_FIELD_EQ(inName,"offsetThemeColor") ) { return ::hx::Val( offsetThemeColor ); }
		if (HX_FIELD_EQ(inName,"insetBorderColor") ) { return ::hx::Val( insetBorderColor ); }
		if (HX_FIELD_EQ(inName,"focusBorderColor") ) { return ::hx::Val( focusBorderColor ); }
		if (HX_FIELD_EQ(inName,"overlayFillColor") ) { return ::hx::Val( overlayFillColor ); }
		if (HX_FIELD_EQ(inName,"refreshFontSizes") ) { return ::hx::Val( refreshFontSizes_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDividerBorder") ) { return ::hx::Val( getDividerBorder_dyn() ); }
		if (HX_FIELD_EQ(inName,"getContainerFill") ) { return ::hx::Val( getContainerFill_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"controlFillColor1") ) { return ::hx::Val( controlFillColor1 ); }
		if (HX_FIELD_EQ(inName,"controlFillColor2") ) { return ::hx::Val( controlFillColor2 ); }
		if (HX_FIELD_EQ(inName,"disabledTextColor") ) { return ::hx::Val( disabledTextColor ); }
		if (HX_FIELD_EQ(inName,"dangerBorderColor") ) { return ::hx::Val( dangerBorderColor ); }
		if (HX_FIELD_EQ(inName,"getButtonDownFill") ) { return ::hx::Val( getButtonDownFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSelectedBorder") ) { return ::hx::Val( getSelectedBorder_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSubHeadingFill") ) { return ::hx::Val( getSubHeadingFill_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"containerFillColor") ) { return ::hx::Val( containerFillColor ); }
		if (HX_FIELD_EQ(inName,"secondaryTextColor") ) { return ::hx::Val( secondaryTextColor ); }
		if (HX_FIELD_EQ(inName,"getContainerBorder") ) { return ::hx::Val( getContainerBorder_dyn() ); }
		if (HX_FIELD_EQ(inName,"getActiveThemeFill") ) { return ::hx::Val( getActiveThemeFill_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectedBorderColor") ) { return ::hx::Val( selectedBorderColor ); }
		if (HX_FIELD_EQ(inName,"subHeadingFillColor") ) { return ::hx::Val( subHeadingFillColor ); }
		if (HX_FIELD_EQ(inName,"getActiveFillBorder") ) { return ::hx::Val( getActiveFillBorder_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDangerTextFormat") ) { return ::hx::Val( getDangerTextFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"getHeaderTextFormat") ) { return ::hx::Val( getHeaderTextFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDetailTextFormat") ) { return ::hx::Val( getDetailTextFormat_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"customDarkThemeColor") ) { return ::hx::Val( customDarkThemeColor ); }
		if (HX_FIELD_EQ(inName,"getDisabledInsetFill") ) { return ::hx::Val( getDisabledInsetFill_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"activeFillBorderColor") ) { return ::hx::Val( activeFillBorderColor ); }
		if (HX_FIELD_EQ(inName,"offsetDangerFillColor") ) { return ::hx::Val( offsetDangerFillColor ); }
		if (HX_FIELD_EQ(inName,"getButtonDisabledFill") ) { return ::hx::Val( getButtonDisabledFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"getScrollBarThumbFill") ) { return ::hx::Val( getScrollBarThumbFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"getReversedDangerFill") ) { return ::hx::Val( getReversedDangerFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDisabledTextFormat") ) { return ::hx::Val( getDisabledTextFormat_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"disabledInsetFillColor") ) { return ::hx::Val( disabledInsetFillColor ); }
		if (HX_FIELD_EQ(inName,"subHeadingDividerColor") ) { return ::hx::Val( subHeadingDividerColor ); }
		if (HX_FIELD_EQ(inName,"getControlDisabledFill") ) { return ::hx::Val( getControlDisabledFill_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDisabledInsetBorder") ) { return ::hx::Val( getDisabledInsetBorder_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSelectedInsetBorder") ) { return ::hx::Val( getSelectedInsetBorder_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSecondaryTextFormat") ) { return ::hx::Val( getSecondaryTextFormat_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"scrollBarThumbFillColor") ) { return ::hx::Val( scrollBarThumbFillColor ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"controlDisabledFillColor") ) { return ::hx::Val( controlDisabledFillColor ); }
		if (HX_FIELD_EQ(inName,"disabledInsetBorderColor") ) { return ::hx::Val( disabledInsetBorderColor ); }
		if (HX_FIELD_EQ(inName,"selectedInsetBorderColor") ) { return ::hx::Val( selectedInsetBorderColor ); }
		if (HX_FIELD_EQ(inName,"getSubHeadingDividerFill") ) { return ::hx::Val( getSubHeadingDividerFill_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getSubHeadingDividerBorder") ) { return ::hx::Val( getSubHeadingDividerBorder_dyn() ); }
		if (HX_FIELD_EQ(inName,"getReversedActiveThemeFill") ) { return ::hx::Val( getReversedActiveThemeFill_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"getDisabledHeaderTextFormat") ) { return ::hx::Val( getDisabledHeaderTextFormat_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDisabledDetailTextFormat") ) { return ::hx::Val( getDisabledDetailTextFormat_dyn() ); }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"getScrollBarThumbDisabledFill") ) { return ::hx::Val( getScrollBarThumbDisabledFill_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"scrollBarThumbDisabledFillColor") ) { return ::hx::Val( scrollBarThumbDisabledFillColor ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BaseSteelTheme_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"darkMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_darkMode(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"fontName") ) { fontName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontSize") ) { fontSize=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_darkMode") ) { _darkMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textColor") ) { textColor=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"themeColor") ) { themeColor=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"borderColor") ) { borderColor=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dividerColor") ) { dividerColor=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rootFillColor") ) { rootFillColor=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"insetFillColor") ) { insetFillColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"headerFontSize") ) { headerFontSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"detailFontSize") ) { detailFontSize=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"headerFillColor") ) { headerFillColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dangerTextColor") ) { dangerTextColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dangerFillColor") ) { dangerFillColor=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"customThemeColor") ) { customThemeColor=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetThemeColor") ) { offsetThemeColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"insetBorderColor") ) { insetBorderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focusBorderColor") ) { focusBorderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"overlayFillColor") ) { overlayFillColor=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"controlFillColor1") ) { controlFillColor1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"controlFillColor2") ) { controlFillColor2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disabledTextColor") ) { disabledTextColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dangerBorderColor") ) { dangerBorderColor=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"containerFillColor") ) { containerFillColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"secondaryTextColor") ) { secondaryTextColor=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectedBorderColor") ) { selectedBorderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"subHeadingFillColor") ) { subHeadingFillColor=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"customDarkThemeColor") ) { customDarkThemeColor=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"activeFillBorderColor") ) { activeFillBorderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetDangerFillColor") ) { offsetDangerFillColor=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"disabledInsetFillColor") ) { disabledInsetFillColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"subHeadingDividerColor") ) { subHeadingDividerColor=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"scrollBarThumbFillColor") ) { scrollBarThumbFillColor=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"controlDisabledFillColor") ) { controlDisabledFillColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disabledInsetBorderColor") ) { disabledInsetBorderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"selectedInsetBorderColor") ) { selectedInsetBorderColor=inValue.Cast< int >(); return inValue; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"scrollBarThumbDisabledFillColor") ) { scrollBarThumbDisabledFillColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseSteelTheme_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_darkMode",58,be,b5,c4));
	outFields->push(HX_("darkMode",f9,c6,1f,7d));
	outFields->push(HX_("customThemeColor",ab,55,0b,de));
	outFields->push(HX_("customDarkThemeColor",41,7a,1b,e6));
	outFields->push(HX_("themeColor",9a,e2,f0,58));
	outFields->push(HX_("offsetThemeColor",0d,d4,9b,45));
	outFields->push(HX_("rootFillColor",5e,b5,bd,4e));
	outFields->push(HX_("controlFillColor1",0e,72,34,ed));
	outFields->push(HX_("controlFillColor2",0f,72,34,ed));
	outFields->push(HX_("controlDisabledFillColor",a7,e2,dd,e4));
	outFields->push(HX_("scrollBarThumbFillColor",50,9d,7f,76));
	outFields->push(HX_("scrollBarThumbDisabledFillColor",34,1c,fb,e4));
	outFields->push(HX_("insetFillColor",43,77,20,0f));
	outFields->push(HX_("disabledInsetFillColor",df,6d,eb,c1));
	outFields->push(HX_("insetBorderColor",fa,fa,72,35));
	outFields->push(HX_("disabledInsetBorderColor",96,d0,dd,69));
	outFields->push(HX_("selectedInsetBorderColor",75,a7,fa,f7));
	outFields->push(HX_("activeFillBorderColor",ee,93,0e,ad));
	outFields->push(HX_("selectedBorderColor",3c,e2,c2,1d));
	outFields->push(HX_("focusBorderColor",df,53,51,64));
	outFields->push(HX_("containerFillColor",5f,d2,b4,d0));
	outFields->push(HX_("headerFillColor",93,54,11,a5));
	outFields->push(HX_("overlayFillColor",30,42,09,17));
	outFields->push(HX_("subHeadingFillColor",5e,9d,74,0d));
	outFields->push(HX_("borderColor",d7,3c,d5,d6));
	outFields->push(HX_("dividerColor",ca,93,3d,e3));
	outFields->push(HX_("subHeadingDividerColor",0c,91,c6,2c));
	outFields->push(HX_("textColor",76,01,4a,e3));
	outFields->push(HX_("secondaryTextColor",62,03,5f,28));
	outFields->push(HX_("disabledTextColor",5a,90,1a,75));
	outFields->push(HX_("dangerTextColor",13,9a,b8,60));
	outFields->push(HX_("dangerFillColor",7d,30,72,96));
	outFields->push(HX_("offsetDangerFillColor",2a,1e,88,7e));
	outFields->push(HX_("dangerBorderColor",b4,f6,90,7f));
	outFields->push(HX_("fontName",ba,8f,7d,cb));
	outFields->push(HX_("fontSize",30,be,d1,ce));
	outFields->push(HX_("headerFontSize",dd,58,2b,51));
	outFields->push(HX_("detailFontSize",e1,55,91,b4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BaseSteelTheme_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(BaseSteelTheme_obj,_darkMode),HX_("_darkMode",58,be,b5,c4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(BaseSteelTheme_obj,customThemeColor),HX_("customThemeColor",ab,55,0b,de)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(BaseSteelTheme_obj,customDarkThemeColor),HX_("customDarkThemeColor",41,7a,1b,e6)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,themeColor),HX_("themeColor",9a,e2,f0,58)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,offsetThemeColor),HX_("offsetThemeColor",0d,d4,9b,45)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,rootFillColor),HX_("rootFillColor",5e,b5,bd,4e)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,controlFillColor1),HX_("controlFillColor1",0e,72,34,ed)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,controlFillColor2),HX_("controlFillColor2",0f,72,34,ed)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,controlDisabledFillColor),HX_("controlDisabledFillColor",a7,e2,dd,e4)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,scrollBarThumbFillColor),HX_("scrollBarThumbFillColor",50,9d,7f,76)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,scrollBarThumbDisabledFillColor),HX_("scrollBarThumbDisabledFillColor",34,1c,fb,e4)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,insetFillColor),HX_("insetFillColor",43,77,20,0f)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,disabledInsetFillColor),HX_("disabledInsetFillColor",df,6d,eb,c1)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,insetBorderColor),HX_("insetBorderColor",fa,fa,72,35)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,disabledInsetBorderColor),HX_("disabledInsetBorderColor",96,d0,dd,69)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,selectedInsetBorderColor),HX_("selectedInsetBorderColor",75,a7,fa,f7)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,activeFillBorderColor),HX_("activeFillBorderColor",ee,93,0e,ad)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,selectedBorderColor),HX_("selectedBorderColor",3c,e2,c2,1d)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,focusBorderColor),HX_("focusBorderColor",df,53,51,64)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,containerFillColor),HX_("containerFillColor",5f,d2,b4,d0)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,headerFillColor),HX_("headerFillColor",93,54,11,a5)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,overlayFillColor),HX_("overlayFillColor",30,42,09,17)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,subHeadingFillColor),HX_("subHeadingFillColor",5e,9d,74,0d)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,borderColor),HX_("borderColor",d7,3c,d5,d6)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,dividerColor),HX_("dividerColor",ca,93,3d,e3)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,subHeadingDividerColor),HX_("subHeadingDividerColor",0c,91,c6,2c)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,textColor),HX_("textColor",76,01,4a,e3)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,secondaryTextColor),HX_("secondaryTextColor",62,03,5f,28)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,disabledTextColor),HX_("disabledTextColor",5a,90,1a,75)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,dangerTextColor),HX_("dangerTextColor",13,9a,b8,60)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,dangerFillColor),HX_("dangerFillColor",7d,30,72,96)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,offsetDangerFillColor),HX_("offsetDangerFillColor",2a,1e,88,7e)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,dangerBorderColor),HX_("dangerBorderColor",b4,f6,90,7f)},
	{::hx::fsString,(int)offsetof(BaseSteelTheme_obj,fontName),HX_("fontName",ba,8f,7d,cb)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,fontSize),HX_("fontSize",30,be,d1,ce)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,headerFontSize),HX_("headerFontSize",dd,58,2b,51)},
	{::hx::fsInt,(int)offsetof(BaseSteelTheme_obj,detailFontSize),HX_("detailFontSize",e1,55,91,b4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BaseSteelTheme_obj_sStaticStorageInfo = 0;
#endif

static ::String BaseSteelTheme_obj_sMemberFields[] = {
	HX_("_darkMode",58,be,b5,c4),
	HX_("get_darkMode",02,7b,39,32),
	HX_("set_darkMode",76,9e,32,47),
	HX_("customThemeColor",ab,55,0b,de),
	HX_("customDarkThemeColor",41,7a,1b,e6),
	HX_("themeColor",9a,e2,f0,58),
	HX_("offsetThemeColor",0d,d4,9b,45),
	HX_("rootFillColor",5e,b5,bd,4e),
	HX_("controlFillColor1",0e,72,34,ed),
	HX_("controlFillColor2",0f,72,34,ed),
	HX_("controlDisabledFillColor",a7,e2,dd,e4),
	HX_("scrollBarThumbFillColor",50,9d,7f,76),
	HX_("scrollBarThumbDisabledFillColor",34,1c,fb,e4),
	HX_("insetFillColor",43,77,20,0f),
	HX_("disabledInsetFillColor",df,6d,eb,c1),
	HX_("insetBorderColor",fa,fa,72,35),
	HX_("disabledInsetBorderColor",96,d0,dd,69),
	HX_("selectedInsetBorderColor",75,a7,fa,f7),
	HX_("activeFillBorderColor",ee,93,0e,ad),
	HX_("selectedBorderColor",3c,e2,c2,1d),
	HX_("focusBorderColor",df,53,51,64),
	HX_("containerFillColor",5f,d2,b4,d0),
	HX_("headerFillColor",93,54,11,a5),
	HX_("overlayFillColor",30,42,09,17),
	HX_("subHeadingFillColor",5e,9d,74,0d),
	HX_("borderColor",d7,3c,d5,d6),
	HX_("dividerColor",ca,93,3d,e3),
	HX_("subHeadingDividerColor",0c,91,c6,2c),
	HX_("textColor",76,01,4a,e3),
	HX_("secondaryTextColor",62,03,5f,28),
	HX_("disabledTextColor",5a,90,1a,75),
	HX_("dangerTextColor",13,9a,b8,60),
	HX_("dangerFillColor",7d,30,72,96),
	HX_("offsetDangerFillColor",2a,1e,88,7e),
	HX_("dangerBorderColor",b4,f6,90,7f),
	HX_("fontName",ba,8f,7d,cb),
	HX_("fontSize",30,be,d1,ce),
	HX_("headerFontSize",dd,58,2b,51),
	HX_("detailFontSize",e1,55,91,b4),
	HX_("refreshColors",eb,69,c1,c4),
	HX_("refreshFonts",e9,b3,13,18),
	HX_("refreshFontSizes",e8,1e,b8,d8),
	HX_("getThemeFill",b6,4d,24,34),
	HX_("getControlFill",8a,2b,8a,90),
	HX_("getControlDisabledFill",26,e6,8a,b0),
	HX_("getButtonFill",cb,99,24,0a),
	HX_("getButtonDownFill",4d,db,a7,5f),
	HX_("getButtonDisabledFill",67,fd,8e,9e),
	HX_("getScrollBarThumbFill",49,41,b8,2f),
	HX_("getScrollBarThumbDisabledFill",e5,52,73,5d),
	HX_("getBorder",22,d6,70,e0),
	HX_("getButtonBorder",34,7a,c2,2e),
	HX_("getInsetBorder",b3,94,99,c6),
	HX_("getDisabledInsetBorder",97,be,4f,29),
	HX_("getSelectedInsetBorder",18,54,00,5e),
	HX_("getThemeBorder",df,3e,07,9f),
	HX_("getSelectedBorder",dd,50,ec,59),
	HX_("getActiveFillBorder",eb,b5,94,27),
	HX_("getContainerBorder",17,bd,60,81),
	HX_("getDividerBorder",2f,ee,57,fa),
	HX_("getDividerFill",06,89,b3,e0),
	HX_("getSubHeadingDividerBorder",2d,9b,5f,3d),
	HX_("getSubHeadingDividerFill",84,5a,85,ae),
	HX_("getFocusBorder",ee,e5,c3,3e),
	HX_("getInsetFill",8a,c6,47,31),
	HX_("getDisabledInsetFill",6e,ef,36,db),
	HX_("getActiveThemeFill",90,86,68,0c),
	HX_("getReversedActiveThemeFill",ae,d5,f2,a8),
	HX_("getDangerFill",3c,57,20,ea),
	HX_("getReversedDangerFill",de,5c,b4,a3),
	HX_("getDangerBorder",e5,35,3d,d3),
	HX_("getOverlayFill",3d,99,d4,e9),
	HX_("getRootFill",7b,64,e6,00),
	HX_("getContainerFill",ee,4d,93,dc),
	HX_("getSubHeadingFill",fb,68,18,da),
	HX_("getTextFormat",fa,6b,f1,90),
	HX_("getDisabledTextFormat",96,0a,46,98),
	HX_("getSecondaryTextFormat",62,29,e3,39),
	HX_("getDangerTextFormat",3d,69,fc,31),
	HX_("getHeaderTextFormat",67,d8,9c,ee),
	HX_("getDisabledHeaderTextFormat",03,54,50,c3),
	HX_("getDetailTextFormat",6b,1e,3f,75),
	HX_("getDisabledDetailTextFormat",07,9a,f2,49),
	HX_("getHeaderFill",e6,aa,bf,d2),
	HX_("lighten",bf,4a,e3,19),
	HX_("darken",5f,36,3a,21),
	::String(null()) };

::hx::Class BaseSteelTheme_obj::__mClass;

void BaseSteelTheme_obj::__register()
{
	BaseSteelTheme_obj _hx_dummy;
	BaseSteelTheme_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.themes.steel.BaseSteelTheme",b8,ce,c1,4d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseSteelTheme_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BaseSteelTheme_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseSteelTheme_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseSteelTheme_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace themes
} // end namespace steel
