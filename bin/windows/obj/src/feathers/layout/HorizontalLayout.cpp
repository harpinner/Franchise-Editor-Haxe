#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_layout_HorizontalAlign
#include <feathers/layout/HorizontalAlign.h>
#endif
#ifndef INCLUDED_feathers_layout_HorizontalLayout
#include <feathers/layout/HorizontalLayout.h>
#endif
#ifndef INCLUDED_feathers_layout_HorizontalLayoutData
#include <feathers/layout/HorizontalLayoutData.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayout
#include <feathers/layout/ILayout.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutData
#include <feathers/layout/ILayoutData.h>
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
#ifndef INCLUDED_feathers_layout_VerticalAlign
#include <feathers/layout/VerticalAlign.h>
#endif
#ifndef INCLUDED_feathers_layout_VerticalLayoutData
#include <feathers/layout/VerticalLayoutData.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d038c4414a8a4fea_31_new,"feathers.layout.HorizontalLayout","new",0x67491286,"feathers.layout.HorizontalLayout.new","feathers/layout/HorizontalLayout.hx",31,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_60_get_paddingTop,"feathers.layout.HorizontalLayout","get_paddingTop",0x0fd3c927,"feathers.layout.HorizontalLayout.get_paddingTop","feathers/layout/HorizontalLayout.hx",60,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_63_set_paddingTop,"feathers.layout.HorizontalLayout","set_paddingTop",0x2ff3b19b,"feathers.layout.HorizontalLayout.set_paddingTop","feathers/layout/HorizontalLayout.hx",63,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_91_get_paddingRight,"feathers.layout.HorizontalLayout","get_paddingRight",0x586ab6ee,"feathers.layout.HorizontalLayout.get_paddingRight","feathers/layout/HorizontalLayout.hx",91,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_94_set_paddingRight,"feathers.layout.HorizontalLayout","set_paddingRight",0xaeaca462,"feathers.layout.HorizontalLayout.set_paddingRight","feathers/layout/HorizontalLayout.hx",94,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_122_get_paddingBottom,"feathers.layout.HorizontalLayout","get_paddingBottom",0x1c47eb99,"feathers.layout.HorizontalLayout.get_paddingBottom","feathers/layout/HorizontalLayout.hx",122,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_125_set_paddingBottom,"feathers.layout.HorizontalLayout","set_paddingBottom",0x3fb5c3a5,"feathers.layout.HorizontalLayout.set_paddingBottom","feathers/layout/HorizontalLayout.hx",125,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_153_get_paddingLeft,"feathers.layout.HorizontalLayout","get_paddingLeft",0xc42ae535,"feathers.layout.HorizontalLayout.get_paddingLeft","feathers/layout/HorizontalLayout.hx",153,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_156_set_paddingLeft,"feathers.layout.HorizontalLayout","set_paddingLeft",0xbff66241,"feathers.layout.HorizontalLayout.set_paddingLeft","feathers/layout/HorizontalLayout.hx",156,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_187_get_gap,"feathers.layout.HorizontalLayout","get_gap",0xffbb92d3,"feathers.layout.HorizontalLayout.get_gap","feathers/layout/HorizontalLayout.hx",187,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_190_set_gap,"feathers.layout.HorizontalLayout","set_gap",0xf2bd23df,"feathers.layout.HorizontalLayout.set_gap","feathers/layout/HorizontalLayout.hx",190,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_221_get_minGap,"feathers.layout.HorizontalLayout","get_minGap",0x54004907,"feathers.layout.HorizontalLayout.get_minGap","feathers/layout/HorizontalLayout.hx",221,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_224_set_minGap,"feathers.layout.HorizontalLayout","set_minGap",0x577de77b,"feathers.layout.HorizontalLayout.set_minGap","feathers/layout/HorizontalLayout.hx",224,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_261_get_horizontalAlign,"feathers.layout.HorizontalLayout","get_horizontalAlign",0x2cbccc7e,"feathers.layout.HorizontalLayout.get_horizontalAlign","feathers/layout/HorizontalLayout.hx",261,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_264_set_horizontalAlign,"feathers.layout.HorizontalLayout","set_horizontalAlign",0x6959bf8a,"feathers.layout.HorizontalLayout.set_horizontalAlign","feathers/layout/HorizontalLayout.hx",264,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_297_get_verticalAlign,"feathers.layout.HorizontalLayout","get_verticalAlign",0xb12aa26c,"feathers.layout.HorizontalLayout.get_verticalAlign","feathers/layout/HorizontalLayout.hx",297,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_300_set_verticalAlign,"feathers.layout.HorizontalLayout","set_verticalAlign",0xd4987a78,"feathers.layout.HorizontalLayout.set_verticalAlign","feathers/layout/HorizontalLayout.hx",300,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_323_get_justifyResetEnabled,"feathers.layout.HorizontalLayout","get_justifyResetEnabled",0x087a4d9f,"feathers.layout.HorizontalLayout.get_justifyResetEnabled","feathers/layout/HorizontalLayout.hx",323,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_326_set_justifyResetEnabled,"feathers.layout.HorizontalLayout","set_justifyResetEnabled",0x0adbb6ab,"feathers.layout.HorizontalLayout.set_justifyResetEnabled","feathers/layout/HorizontalLayout.hx",326,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_345_setPadding,"feathers.layout.HorizontalLayout","setPadding",0x33f06ce9,"feathers.layout.HorizontalLayout.setPadding","feathers/layout/HorizontalLayout.hx",345,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_355_layout,"feathers.layout.HorizontalLayout","layout",0xb216c844,"feathers.layout.HorizontalLayout.layout","feathers/layout/HorizontalLayout.hx",355,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_435_validateItems,"feathers.layout.HorizontalLayout","validateItems",0xf1ec1930,"feathers.layout.HorizontalLayout.validateItems","feathers/layout/HorizontalLayout.hx",435,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_485_applyVerticalAlign,"feathers.layout.HorizontalLayout","applyVerticalAlign",0x2286b4bb,"feathers.layout.HorizontalLayout.applyVerticalAlign","feathers/layout/HorizontalLayout.hx",485,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_509_applyHorizontalAlign,"feathers.layout.HorizontalLayout","applyHorizontalAlign",0xbafd508d,"feathers.layout.HorizontalLayout.applyHorizontalAlign","feathers/layout/HorizontalLayout.hx",509,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_552_applyPercentWidth,"feathers.layout.HorizontalLayout","applyPercentWidth",0x97110835,"feathers.layout.HorizontalLayout.applyPercentWidth","feathers/layout/HorizontalLayout.hx",552,0x9ce8818a)
HX_LOCAL_STACK_FRAME(_hx_pos_d038c4414a8a4fea_645_applyPercentHeight,"feathers.layout.HorizontalLayout","applyPercentHeight",0x4e259ed8,"feathers.layout.HorizontalLayout.applyPercentHeight","feathers/layout/HorizontalLayout.hx",645,0x9ce8818a)
namespace feathers{
namespace layout{

void HorizontalLayout_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_31_new)
HXLINE( 309)		this->_justifyResetEnabled = false;
HXLINE( 273)		this->_verticalAlign = ::feathers::layout::VerticalAlign_obj::TOP_dyn();
HXLINE( 233)		this->_horizontalAlign = ::feathers::layout::HorizontalAlign_obj::LEFT_dyn();
HXLINE( 199)		this->_minGap = ((Float)0.0);
HXLINE( 165)		this->_gap = ((Float)0.0);
HXLINE( 134)		this->_paddingLeft = ((Float)0.0);
HXLINE( 103)		this->_paddingBottom = ((Float)0.0);
HXLINE(  72)		this->_paddingRight = ((Float)0.0);
HXLINE(  41)		this->_paddingTop = ((Float)0.0);
HXLINE(  38)		super::__construct(null());
            	}

Dynamic HorizontalLayout_obj::__CreateEmpty() { return new HorizontalLayout_obj; }

void *HorizontalLayout_obj::_hx_vtable = 0;

Dynamic HorizontalLayout_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HorizontalLayout_obj > _hx_result = new HorizontalLayout_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HorizontalLayout_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x37a66054;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_feathers_layout_HorizontalLayout__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::layout::HorizontalLayout_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::layout::HorizontalLayout_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::layout::HorizontalLayout_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::layout::HorizontalLayout_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::layout::HorizontalLayout_obj::willTrigger,
};

static ::feathers::layout::ILayout_obj _hx_feathers_layout_HorizontalLayout__hx_feathers_layout_ILayout= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::layout::HorizontalLayout_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::layout::HorizontalLayout_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::layout::HorizontalLayout_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::layout::HorizontalLayout_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::layout::HorizontalLayout_obj::willTrigger,
	(  ::feathers::layout::LayoutBoundsResult (::hx::Object::*)(::Array< ::Dynamic>, ::feathers::layout::Measurements, ::feathers::layout::LayoutBoundsResult))&::feathers::layout::HorizontalLayout_obj::layout,
};

void *HorizontalLayout_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_feathers_layout_HorizontalLayout__hx_openfl_events_IEventDispatcher;
		case (int)0x3e135379: return &_hx_feathers_layout_HorizontalLayout__hx_feathers_layout_ILayout;
	}
	return super::_hx_getInterface(inHash);
}

Float HorizontalLayout_obj::get_paddingTop(){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_60_get_paddingTop)
HXDLIN(  60)		return this->_paddingTop;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalLayout_obj,get_paddingTop,return )

Float HorizontalLayout_obj::set_paddingTop(Float value){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_63_set_paddingTop)
HXLINE(  64)		if ((this->_paddingTop == value)) {
HXLINE(  65)			return this->_paddingTop;
            		}
HXLINE(  67)		this->_paddingTop = value;
HXLINE(  68)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE(  69)		return this->_paddingTop;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalLayout_obj,set_paddingTop,return )

Float HorizontalLayout_obj::get_paddingRight(){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_91_get_paddingRight)
HXDLIN(  91)		return this->_paddingRight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalLayout_obj,get_paddingRight,return )

Float HorizontalLayout_obj::set_paddingRight(Float value){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_94_set_paddingRight)
HXLINE(  95)		if ((this->_paddingRight == value)) {
HXLINE(  96)			return this->_paddingRight;
            		}
HXLINE(  98)		this->_paddingRight = value;
HXLINE(  99)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 100)		return this->_paddingRight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalLayout_obj,set_paddingRight,return )

Float HorizontalLayout_obj::get_paddingBottom(){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_122_get_paddingBottom)
HXDLIN( 122)		return this->_paddingBottom;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalLayout_obj,get_paddingBottom,return )

Float HorizontalLayout_obj::set_paddingBottom(Float value){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_125_set_paddingBottom)
HXLINE( 126)		if ((this->_paddingBottom == value)) {
HXLINE( 127)			return this->_paddingBottom;
            		}
HXLINE( 129)		this->_paddingBottom = value;
HXLINE( 130)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 131)		return this->_paddingBottom;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalLayout_obj,set_paddingBottom,return )

Float HorizontalLayout_obj::get_paddingLeft(){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_153_get_paddingLeft)
HXDLIN( 153)		return this->_paddingLeft;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalLayout_obj,get_paddingLeft,return )

Float HorizontalLayout_obj::set_paddingLeft(Float value){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_156_set_paddingLeft)
HXLINE( 157)		if ((this->_paddingLeft == value)) {
HXLINE( 158)			return this->_paddingLeft;
            		}
HXLINE( 160)		this->_paddingLeft = value;
HXLINE( 161)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 162)		return this->_paddingLeft;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalLayout_obj,set_paddingLeft,return )

Float HorizontalLayout_obj::get_gap(){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_187_get_gap)
HXDLIN( 187)		return this->_gap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalLayout_obj,get_gap,return )

Float HorizontalLayout_obj::set_gap(Float value){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_190_set_gap)
HXLINE( 191)		if ((this->_gap == value)) {
HXLINE( 192)			return this->_gap;
            		}
HXLINE( 194)		this->_gap = value;
HXLINE( 195)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 196)		return this->_gap;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalLayout_obj,set_gap,return )

Float HorizontalLayout_obj::get_minGap(){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_221_get_minGap)
HXDLIN( 221)		return this->_minGap;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalLayout_obj,get_minGap,return )

Float HorizontalLayout_obj::set_minGap(Float value){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_224_set_minGap)
HXLINE( 225)		if ((this->_minGap == value)) {
HXLINE( 226)			return this->_minGap;
            		}
HXLINE( 228)		this->_minGap = value;
HXLINE( 229)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 230)		return this->_minGap;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalLayout_obj,set_minGap,return )

 ::feathers::layout::HorizontalAlign HorizontalLayout_obj::get_horizontalAlign(){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_261_get_horizontalAlign)
HXDLIN( 261)		return this->_horizontalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalLayout_obj,get_horizontalAlign,return )

 ::feathers::layout::HorizontalAlign HorizontalLayout_obj::set_horizontalAlign( ::feathers::layout::HorizontalAlign value){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_264_set_horizontalAlign)
HXLINE( 265)		if (::hx::IsPointerEq( this->_horizontalAlign,value )) {
HXLINE( 266)			return this->_horizontalAlign;
            		}
HXLINE( 268)		this->_horizontalAlign = value;
HXLINE( 269)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 270)		return this->_horizontalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalLayout_obj,set_horizontalAlign,return )

 ::feathers::layout::VerticalAlign HorizontalLayout_obj::get_verticalAlign(){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_297_get_verticalAlign)
HXDLIN( 297)		return this->_verticalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalLayout_obj,get_verticalAlign,return )

 ::feathers::layout::VerticalAlign HorizontalLayout_obj::set_verticalAlign( ::feathers::layout::VerticalAlign value){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_300_set_verticalAlign)
HXLINE( 301)		if (::hx::IsPointerEq( this->_verticalAlign,value )) {
HXLINE( 302)			return this->_verticalAlign;
            		}
HXLINE( 304)		this->_verticalAlign = value;
HXLINE( 305)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 306)		return this->_verticalAlign;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalLayout_obj,set_verticalAlign,return )

bool HorizontalLayout_obj::get_justifyResetEnabled(){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_323_get_justifyResetEnabled)
HXDLIN( 323)		return this->_justifyResetEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HorizontalLayout_obj,get_justifyResetEnabled,return )

bool HorizontalLayout_obj::set_justifyResetEnabled(bool value){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_326_set_justifyResetEnabled)
HXLINE( 327)		if ((this->_justifyResetEnabled == value)) {
HXLINE( 328)			return this->_justifyResetEnabled;
            		}
HXLINE( 330)		this->_justifyResetEnabled = value;
HXLINE( 331)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE( 332)		return this->_justifyResetEnabled;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalLayout_obj,set_justifyResetEnabled,return )

void HorizontalLayout_obj::setPadding(Float value){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_345_setPadding)
HXLINE( 346)		this->set_paddingTop(value);
HXLINE( 347)		this->set_paddingRight(value);
HXLINE( 348)		this->set_paddingBottom(value);
HXLINE( 349)		this->set_paddingLeft(value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HorizontalLayout_obj,setPadding,(void))

 ::feathers::layout::LayoutBoundsResult HorizontalLayout_obj::layout(::Array< ::Dynamic> items, ::feathers::layout::Measurements measurements, ::feathers::layout::LayoutBoundsResult result){
            	HX_GC_STACKFRAME(&_hx_pos_d038c4414a8a4fea_355_layout)
HXLINE( 356)		Float adjustedGap = this->_gap;
HXLINE( 357)		bool hasFlexGap = (this->_gap == ::hx::DivByZero(((Float)1.0)));
HXLINE( 358)		if (hasFlexGap) {
HXLINE( 359)			adjustedGap = this->_minGap;
            		}
HXLINE( 362)		{
HXLINE( 362)			bool isJustified = ::hx::IsPointerEq( this->_verticalAlign,::feathers::layout::VerticalAlign_obj::JUSTIFY_dyn() );
HXDLIN( 362)			 ::Dynamic justifyHeight = measurements->height;
HXDLIN( 362)			if (::hx::IsNotNull( justifyHeight )) {
HXLINE( 362)				justifyHeight = (justifyHeight - (this->_paddingTop + this->_paddingBottom));
            			}
HXDLIN( 362)			{
HXLINE( 362)				int _g = 0;
HXDLIN( 362)				while((_g < items->length)){
HXLINE( 362)					 ::openfl::display::DisplayObject item = items->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 362)					_g = (_g + 1);
HXDLIN( 362)					if (isJustified) {
HXLINE( 362)						if (::hx::IsNotNull( justifyHeight )) {
HXLINE( 362)							item->set_height(( (Float)(justifyHeight) ));
            						}
            						else {
HXLINE( 362)							bool _hx_tmp;
HXDLIN( 362)							if (this->_justifyResetEnabled) {
HXLINE( 362)								_hx_tmp = ::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IMeasureObject >());
            							}
            							else {
HXLINE( 362)								_hx_tmp = false;
            							}
HXDLIN( 362)							if (_hx_tmp) {
HXLINE( 362)								::feathers::core::IMeasureObject_obj::resetHeight( ::hx::interface_check(item,0xcfc32883));
            							}
            						}
            					}
            					else {
HXLINE( 362)						if (::hx::IsNotNull( justifyHeight )) {
HXLINE( 362)							 ::Dynamic percentHeight = null();
HXDLIN( 362)							if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 362)								::Dynamic layoutItem =  ::hx::interface_check(item,0xf54ca718);
HXDLIN( 362)								if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutItem))) {
HXLINE( 362)									continue;
            								}
HXDLIN( 362)								 ::feathers::layout::VerticalLayoutData layoutData = ( ( ::feathers::layout::VerticalLayoutData)(::Std_obj::downcast(::feathers::layout::ILayoutObject_obj::get_layoutData(layoutItem),::hx::ClassOf< ::feathers::layout::VerticalLayoutData >())) );
HXDLIN( 362)								if (::hx::IsNotNull( layoutData )) {
HXLINE( 362)									percentHeight = layoutData->get_percentHeight();
            								}
            							}
HXDLIN( 362)							if (::hx::IsNotNull( percentHeight )) {
HXLINE( 362)								if (::hx::IsLess( percentHeight,((Float)0.0) )) {
HXLINE( 362)									percentHeight = ((Float)0.0);
            								}
            								else {
HXLINE( 362)									if (::hx::IsGreater( percentHeight,((Float)100.0) )) {
HXLINE( 362)										percentHeight = ((Float)100.0);
            									}
            								}
HXDLIN( 362)								item->set_height((( (Float)(justifyHeight) ) * (( (Float)(percentHeight) ) / ((Float)100.0))));
            							}
            						}
            					}
HXDLIN( 362)					if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 362)						::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(item,0x64d4b3cd));
            					}
HXDLIN( 362)					bool _hx_tmp;
HXDLIN( 362)					bool _hx_tmp1;
HXDLIN( 362)					if (isJustified) {
HXLINE( 362)						_hx_tmp1 = ::hx::IsNull( justifyHeight );
            					}
            					else {
HXLINE( 362)						_hx_tmp1 = false;
            					}
HXDLIN( 362)					if (_hx_tmp1) {
HXLINE( 362)						_hx_tmp = ::hx::IsNotNull( measurements->maxHeight );
            					}
            					else {
HXLINE( 362)						_hx_tmp = false;
            					}
HXDLIN( 362)					if (_hx_tmp) {
HXLINE( 362)						Float maxJustifyHeight = ((( (Float)(measurements->maxHeight) ) - this->_paddingTop) - this->_paddingBottom);
HXDLIN( 362)						if ((item->get_height() > maxJustifyHeight)) {
HXLINE( 362)							item->set_height(maxJustifyHeight);
HXDLIN( 362)							if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 362)								::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(item,0x64d4b3cd));
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 363)		this->applyPercentWidth(items,measurements->width,measurements->minWidth,measurements->maxWidth,adjustedGap);
HXLINE( 365)		Float contentWidth = this->_paddingLeft;
HXLINE( 366)		Float contentHeight = ((Float)0.0);
HXLINE( 367)		{
HXLINE( 367)			int _g1 = 0;
HXDLIN( 367)			while((_g1 < items->length)){
HXLINE( 367)				 ::openfl::display::DisplayObject item = items->__get(_g1).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 367)				_g1 = (_g1 + 1);
HXLINE( 368)				::Dynamic layoutObject = null();
HXLINE( 369)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 370)					layoutObject =  ::hx::interface_check(item,0xf54ca718);
HXLINE( 371)					if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutObject))) {
HXLINE( 372)						continue;
            					}
            				}
HXLINE( 375)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 376)					::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(item,0x64d4b3cd));
            				}
HXLINE( 378)				if ((contentHeight < item->get_height())) {
HXLINE( 379)					contentHeight = item->get_height();
            				}
HXLINE( 381)				item->set_x(contentWidth);
HXLINE( 382)				contentWidth = (contentWidth + (item->get_width() + adjustedGap));
            			}
            		}
HXLINE( 384)		Float maxItemHeight = contentHeight;
HXLINE( 385)		contentWidth = (contentWidth + this->_paddingRight);
HXLINE( 386)		if ((items->length > 0)) {
HXLINE( 387)			contentWidth = (contentWidth - adjustedGap);
            		}
HXLINE( 389)		contentHeight = (contentHeight + (this->_paddingTop + this->_paddingBottom));
HXLINE( 391)		Float viewPortWidth = contentWidth;
HXLINE( 392)		if (::hx::IsNotNull( measurements->width )) {
HXLINE( 393)			viewPortWidth = ( (Float)(measurements->width) );
            		}
            		else {
HXLINE( 395)			bool _hx_tmp;
HXDLIN( 395)			if (::hx::IsNotNull( measurements->minWidth )) {
HXLINE( 395)				_hx_tmp = ::hx::IsLess( viewPortWidth,measurements->minWidth );
            			}
            			else {
HXLINE( 395)				_hx_tmp = false;
            			}
HXDLIN( 395)			if (_hx_tmp) {
HXLINE( 396)				viewPortWidth = ( (Float)(measurements->minWidth) );
            			}
            			else {
HXLINE( 397)				bool _hx_tmp;
HXDLIN( 397)				if (::hx::IsNotNull( measurements->maxWidth )) {
HXLINE( 397)					_hx_tmp = ::hx::IsGreater( viewPortWidth,measurements->maxWidth );
            				}
            				else {
HXLINE( 397)					_hx_tmp = false;
            				}
HXDLIN( 397)				if (_hx_tmp) {
HXLINE( 398)					viewPortWidth = ( (Float)(measurements->maxWidth) );
            				}
            			}
            		}
HXLINE( 401)		Float viewPortHeight = contentHeight;
HXLINE( 402)		if (::hx::IsNotNull( measurements->height )) {
HXLINE( 403)			viewPortHeight = ( (Float)(measurements->height) );
            		}
            		else {
HXLINE( 405)			bool _hx_tmp;
HXDLIN( 405)			if (::hx::IsNotNull( measurements->minHeight )) {
HXLINE( 405)				_hx_tmp = ::hx::IsLess( viewPortHeight,measurements->minHeight );
            			}
            			else {
HXLINE( 405)				_hx_tmp = false;
            			}
HXDLIN( 405)			if (_hx_tmp) {
HXLINE( 406)				viewPortHeight = ( (Float)(measurements->minHeight) );
            			}
            			else {
HXLINE( 407)				bool _hx_tmp;
HXDLIN( 407)				if (::hx::IsNotNull( measurements->maxHeight )) {
HXLINE( 407)					_hx_tmp = ::hx::IsGreater( viewPortHeight,measurements->maxHeight );
            				}
            				else {
HXLINE( 407)					_hx_tmp = false;
            				}
HXDLIN( 407)				if (_hx_tmp) {
HXLINE( 408)					viewPortHeight = ( (Float)(measurements->maxHeight) );
            				}
            			}
            		}
HXLINE( 412)		this->applyPercentHeight(items,viewPortHeight);
HXLINE( 413)		{
HXLINE( 413)			int _g2 = 0;
HXDLIN( 413)			while((_g2 < items->length)){
HXLINE( 413)				 ::openfl::display::DisplayObject item = items->__get(_g2).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 413)				_g2 = (_g2 + 1);
HXDLIN( 413)				::Dynamic layoutObject = null();
HXDLIN( 413)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 413)					layoutObject =  ::hx::interface_check(item,0xf54ca718);
HXDLIN( 413)					if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutObject))) {
HXLINE( 413)						continue;
            					}
            				}
HXDLIN( 413)				switch((int)(this->_verticalAlign->_hx_getIndex())){
            					case (int)0: {
HXLINE( 413)						item->set_y(this->_paddingTop);
            					}
            					break;
            					case (int)1: {
HXLINE( 413)						Float _hx_tmp = this->_paddingTop;
HXDLIN( 413)						Float _hx_tmp1 = this->_paddingTop;
HXDLIN( 413)						Float _hx_tmp2 = ((viewPortHeight - this->_paddingTop) - this->_paddingBottom);
HXDLIN( 413)						item->set_y(::Math_obj::max(_hx_tmp,(_hx_tmp1 + ((_hx_tmp2 - item->get_height()) / ((Float)2.0)))));
            					}
            					break;
            					case (int)2: {
HXLINE( 413)						Float _hx_tmp = this->_paddingTop;
HXDLIN( 413)						Float _hx_tmp1 = (this->_paddingTop + ((viewPortHeight - this->_paddingTop) - this->_paddingBottom));
HXDLIN( 413)						item->set_y(::Math_obj::max(_hx_tmp,(_hx_tmp1 - item->get_height())));
            					}
            					break;
            					case (int)3: {
HXLINE( 413)						item->set_y(this->_paddingTop);
HXDLIN( 413)						item->set_height(((viewPortHeight - this->_paddingTop) - this->_paddingBottom));
            					}
            					break;
            				}
            			}
            		}
HXLINE( 414)		{
HXLINE( 414)			Float contentWidth1 = ((contentWidth - this->_paddingLeft) - this->_paddingRight);
HXDLIN( 414)			Float alignOffset = ((Float)0.0);
HXDLIN( 414)			Float gapOffset = ((Float)0.0);
HXDLIN( 414)			Float maxAlignmentWidth = ((viewPortWidth - this->_paddingLeft) - this->_paddingRight);
HXDLIN( 414)			Float adjustedGap1 = this->_gap;
HXDLIN( 414)			bool hasFlexGap1 = (this->_gap == ::hx::DivByZero(((Float)1.0)));
HXDLIN( 414)			if (hasFlexGap1) {
HXLINE( 414)				adjustedGap1 = this->_minGap;
HXDLIN( 414)				bool _hx_tmp;
HXDLIN( 414)				if ((items->length > 1)) {
HXLINE( 414)					_hx_tmp = (maxAlignmentWidth > contentWidth1);
            				}
            				else {
HXLINE( 414)					_hx_tmp = false;
            				}
HXDLIN( 414)				if (_hx_tmp) {
HXLINE( 414)					adjustedGap1 = (adjustedGap1 + ((maxAlignmentWidth - contentWidth1) / ( (Float)((items->length - 1)) )));
            				}
HXDLIN( 414)				gapOffset = (adjustedGap1 - this->_minGap);
            			}
            			else {
HXLINE( 414)				switch((int)(this->_horizontalAlign->_hx_getIndex())){
            					case (int)0: {
HXLINE( 414)						alignOffset = ((Float)0.0);
            					}
            					break;
            					case (int)1: {
HXLINE( 414)						alignOffset = ((maxAlignmentWidth - contentWidth1) / ((Float)2.0));
            					}
            					break;
            					case (int)2: {
HXLINE( 414)						alignOffset = (maxAlignmentWidth - contentWidth1);
            					}
            					break;
            					default:{
HXLINE( 414)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Unknown horizontal align: ",65,90,55,27) + ::Std_obj::string(this->_horizontalAlign)))));
            					}
            				}
HXDLIN( 414)				if ((alignOffset < ((Float)0.0))) {
HXLINE( 414)					alignOffset = ((Float)0.0);
            				}
            			}
HXDLIN( 414)			bool _hx_tmp;
HXDLIN( 414)			if ((alignOffset == ((Float)0.0))) {
HXLINE( 414)				_hx_tmp = (gapOffset == ((Float)0.0));
            			}
            			else {
HXLINE( 414)				_hx_tmp = false;
            			}
HXDLIN( 414)			if (!(_hx_tmp)) {
HXLINE( 414)				Float totalOffset = alignOffset;
HXDLIN( 414)				{
HXLINE( 414)					int _g = 0;
HXDLIN( 414)					while((_g < items->length)){
HXLINE( 414)						 ::openfl::display::DisplayObject item = items->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 414)						_g = (_g + 1);
HXDLIN( 414)						::Dynamic layoutObject = null();
HXDLIN( 414)						if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 414)							layoutObject =  ::hx::interface_check(item,0xf54ca718);
HXDLIN( 414)							if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutObject))) {
HXLINE( 414)								continue;
            							}
            						}
HXDLIN( 414)						Float _hx_tmp = this->_paddingLeft;
HXDLIN( 414)						item->set_x(::Math_obj::max(_hx_tmp,(item->get_x() + totalOffset)));
HXDLIN( 414)						totalOffset = (totalOffset + gapOffset);
            					}
            				}
            			}
            		}
HXLINE( 416)		if ((contentWidth < viewPortWidth)) {
HXLINE( 417)			contentWidth = viewPortWidth;
            		}
HXLINE( 419)		if ((contentHeight < viewPortHeight)) {
HXLINE( 420)			contentHeight = viewPortHeight;
            		}
HXLINE( 423)		if (::hx::IsNull( result )) {
HXLINE( 424)			result =  ::feathers::layout::LayoutBoundsResult_obj::__alloc( HX_CTX );
            		}
HXLINE( 426)		result->contentX = ((Float)0.0);
HXLINE( 427)		result->contentY = ((Float)0.0);
HXLINE( 428)		result->contentWidth = contentWidth;
HXLINE( 429)		result->contentHeight = contentHeight;
HXLINE( 430)		result->viewPortWidth = viewPortWidth;
HXLINE( 431)		result->viewPortHeight = viewPortHeight;
HXLINE( 432)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC3(HorizontalLayout_obj,layout,return )

void HorizontalLayout_obj::validateItems(::Array< ::Dynamic> items, ::feathers::layout::Measurements measurements){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_435_validateItems)
HXLINE( 436)		bool isJustified = ::hx::IsPointerEq( this->_verticalAlign,::feathers::layout::VerticalAlign_obj::JUSTIFY_dyn() );
HXLINE( 437)		 ::Dynamic justifyHeight = measurements->height;
HXLINE( 438)		if (::hx::IsNotNull( justifyHeight )) {
HXLINE( 439)			justifyHeight = (justifyHeight - (this->_paddingTop + this->_paddingBottom));
            		}
HXLINE( 441)		{
HXLINE( 441)			int _g = 0;
HXDLIN( 441)			while((_g < items->length)){
HXLINE( 441)				 ::openfl::display::DisplayObject item = items->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 441)				_g = (_g + 1);
HXLINE( 442)				if (isJustified) {
HXLINE( 443)					if (::hx::IsNotNull( justifyHeight )) {
HXLINE( 444)						item->set_height(( (Float)(justifyHeight) ));
            					}
            					else {
HXLINE( 445)						bool _hx_tmp;
HXDLIN( 445)						if (this->_justifyResetEnabled) {
HXLINE( 445)							_hx_tmp = ::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IMeasureObject >());
            						}
            						else {
HXLINE( 445)							_hx_tmp = false;
            						}
HXDLIN( 445)						if (_hx_tmp) {
HXLINE( 446)							::feathers::core::IMeasureObject_obj::resetHeight( ::hx::interface_check(item,0xcfc32883));
            						}
            					}
            				}
            				else {
HXLINE( 448)					if (::hx::IsNotNull( justifyHeight )) {
HXLINE( 449)						 ::Dynamic percentHeight = null();
HXLINE( 450)						if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 451)							::Dynamic layoutItem =  ::hx::interface_check(item,0xf54ca718);
HXLINE( 452)							if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutItem))) {
HXLINE( 453)								continue;
            							}
HXLINE( 455)							 ::feathers::layout::VerticalLayoutData layoutData = ( ( ::feathers::layout::VerticalLayoutData)(::Std_obj::downcast(::feathers::layout::ILayoutObject_obj::get_layoutData(layoutItem),::hx::ClassOf< ::feathers::layout::VerticalLayoutData >())) );
HXLINE( 456)							if (::hx::IsNotNull( layoutData )) {
HXLINE( 457)								percentHeight = layoutData->get_percentHeight();
            							}
            						}
HXLINE( 460)						if (::hx::IsNotNull( percentHeight )) {
HXLINE( 461)							if (::hx::IsLess( percentHeight,((Float)0.0) )) {
HXLINE( 462)								percentHeight = ((Float)0.0);
            							}
            							else {
HXLINE( 463)								if (::hx::IsGreater( percentHeight,((Float)100.0) )) {
HXLINE( 464)									percentHeight = ((Float)100.0);
            								}
            							}
HXLINE( 466)							item->set_height((( (Float)(justifyHeight) ) * (( (Float)(percentHeight) ) / ((Float)100.0))));
            						}
            					}
            				}
HXLINE( 469)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 470)					::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(item,0x64d4b3cd));
            				}
HXLINE( 472)				bool _hx_tmp;
HXDLIN( 472)				bool _hx_tmp1;
HXDLIN( 472)				if (isJustified) {
HXLINE( 472)					_hx_tmp1 = ::hx::IsNull( justifyHeight );
            				}
            				else {
HXLINE( 472)					_hx_tmp1 = false;
            				}
HXDLIN( 472)				if (_hx_tmp1) {
HXLINE( 472)					_hx_tmp = ::hx::IsNotNull( measurements->maxHeight );
            				}
            				else {
HXLINE( 472)					_hx_tmp = false;
            				}
HXDLIN( 472)				if (_hx_tmp) {
HXLINE( 473)					Float maxJustifyHeight = ((( (Float)(measurements->maxHeight) ) - this->_paddingTop) - this->_paddingBottom);
HXLINE( 474)					if ((item->get_height() > maxJustifyHeight)) {
HXLINE( 475)						item->set_height(maxJustifyHeight);
HXLINE( 476)						if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 477)							::feathers::core::IValidating_obj::validateNow( ::hx::interface_check(item,0x64d4b3cd));
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(HorizontalLayout_obj,validateItems,(void))

void HorizontalLayout_obj::applyVerticalAlign(::Array< ::Dynamic> items,Float maxItemHeight,Float viewPortHeight){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_485_applyVerticalAlign)
HXDLIN( 485)		int _g = 0;
HXDLIN( 485)		while((_g < items->length)){
HXDLIN( 485)			 ::openfl::display::DisplayObject item = items->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 485)			_g = (_g + 1);
HXLINE( 486)			::Dynamic layoutObject = null();
HXLINE( 487)			if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 488)				layoutObject =  ::hx::interface_check(item,0xf54ca718);
HXLINE( 489)				if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutObject))) {
HXLINE( 490)					continue;
            				}
            			}
HXLINE( 493)			switch((int)(this->_verticalAlign->_hx_getIndex())){
            				case (int)0: {
HXLINE( 499)					item->set_y(this->_paddingTop);
            				}
            				break;
            				case (int)1: {
HXLINE( 497)					Float _hx_tmp = this->_paddingTop;
HXDLIN( 497)					Float _hx_tmp1 = this->_paddingTop;
HXDLIN( 497)					Float _hx_tmp2 = ((viewPortHeight - this->_paddingTop) - this->_paddingBottom);
HXDLIN( 497)					item->set_y(::Math_obj::max(_hx_tmp,(_hx_tmp1 + ((_hx_tmp2 - item->get_height()) / ((Float)2.0)))));
            				}
            				break;
            				case (int)2: {
HXLINE( 495)					Float _hx_tmp = this->_paddingTop;
HXDLIN( 495)					Float _hx_tmp1 = (this->_paddingTop + ((viewPortHeight - this->_paddingTop) - this->_paddingBottom));
HXDLIN( 495)					item->set_y(::Math_obj::max(_hx_tmp,(_hx_tmp1 - item->get_height())));
            				}
            				break;
            				case (int)3: {
HXLINE( 501)					item->set_y(this->_paddingTop);
HXLINE( 502)					item->set_height(((viewPortHeight - this->_paddingTop) - this->_paddingBottom));
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(HorizontalLayout_obj,applyVerticalAlign,(void))

void HorizontalLayout_obj::applyHorizontalAlign(::Array< ::Dynamic> items,Float contentWidth,Float viewPortWidth){
            	HX_GC_STACKFRAME(&_hx_pos_d038c4414a8a4fea_509_applyHorizontalAlign)
HXLINE( 510)		Float alignOffset = ((Float)0.0);
HXLINE( 511)		Float gapOffset = ((Float)0.0);
HXLINE( 512)		Float maxAlignmentWidth = ((viewPortWidth - this->_paddingLeft) - this->_paddingRight);
HXLINE( 513)		Float adjustedGap = this->_gap;
HXLINE( 514)		bool hasFlexGap = (this->_gap == ::hx::DivByZero(((Float)1.0)));
HXLINE( 515)		if (hasFlexGap) {
HXLINE( 516)			adjustedGap = this->_minGap;
HXLINE( 517)			bool _hx_tmp;
HXDLIN( 517)			if ((items->length > 1)) {
HXLINE( 517)				_hx_tmp = (maxAlignmentWidth > contentWidth);
            			}
            			else {
HXLINE( 517)				_hx_tmp = false;
            			}
HXDLIN( 517)			if (_hx_tmp) {
HXLINE( 518)				adjustedGap = (adjustedGap + ((maxAlignmentWidth - contentWidth) / ( (Float)((items->length - 1)) )));
            			}
HXLINE( 520)			gapOffset = (adjustedGap - this->_minGap);
            		}
            		else {
HXLINE( 522)			switch((int)(this->_horizontalAlign->_hx_getIndex())){
            				case (int)0: {
HXLINE( 523)					alignOffset = ((Float)0.0);
            				}
            				break;
            				case (int)1: {
HXLINE( 525)					alignOffset = ((maxAlignmentWidth - contentWidth) / ((Float)2.0));
            				}
            				break;
            				case (int)2: {
HXLINE( 524)					alignOffset = (maxAlignmentWidth - contentWidth);
            				}
            				break;
            				default:{
HXLINE( 527)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown( ::openfl::errors::ArgumentError_obj::__alloc( HX_CTX ,(HX_("Unknown horizontal align: ",65,90,55,27) + ::Std_obj::string(this->_horizontalAlign)))));
            				}
            			}
HXLINE( 529)			if ((alignOffset < ((Float)0.0))) {
HXLINE( 530)				alignOffset = ((Float)0.0);
            			}
            		}
HXLINE( 533)		bool _hx_tmp;
HXDLIN( 533)		if ((alignOffset == ((Float)0.0))) {
HXLINE( 533)			_hx_tmp = (gapOffset == ((Float)0.0));
            		}
            		else {
HXLINE( 533)			_hx_tmp = false;
            		}
HXDLIN( 533)		if (_hx_tmp) {
HXLINE( 534)			return;
            		}
HXLINE( 537)		Float totalOffset = alignOffset;
HXLINE( 538)		{
HXLINE( 538)			int _g = 0;
HXDLIN( 538)			while((_g < items->length)){
HXLINE( 538)				 ::openfl::display::DisplayObject item = items->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 538)				_g = (_g + 1);
HXLINE( 539)				::Dynamic layoutObject = null();
HXLINE( 540)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 541)					layoutObject =  ::hx::interface_check(item,0xf54ca718);
HXLINE( 542)					if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutObject))) {
HXLINE( 543)						continue;
            					}
            				}
HXLINE( 546)				Float _hx_tmp = this->_paddingLeft;
HXDLIN( 546)				item->set_x(::Math_obj::max(_hx_tmp,(item->get_x() + totalOffset)));
HXLINE( 547)				totalOffset = (totalOffset + gapOffset);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(HorizontalLayout_obj,applyHorizontalAlign,(void))

void HorizontalLayout_obj::applyPercentWidth(::Array< ::Dynamic> items, ::Dynamic explicitWidth, ::Dynamic explicitMinWidth, ::Dynamic explicitMaxWidth,Float adjustedGap){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_552_applyPercentWidth)
HXLINE( 553)		::Array< ::Dynamic> pendingItems = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 554)		Float totalMeasuredWidth = ((Float)0.0);
HXLINE( 555)		Float totalMinWidth = ((Float)0.0);
HXLINE( 556)		Float totalPercentWidth = ((Float)0.0);
HXLINE( 557)		{
HXLINE( 557)			int _g = 0;
HXDLIN( 557)			while((_g < items->length)){
HXLINE( 557)				 ::openfl::display::DisplayObject item = items->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 557)				_g = (_g + 1);
HXLINE( 558)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >())) {
HXLINE( 559)					::Dynamic layoutItem =  ::hx::interface_check(item,0xf54ca718);
HXLINE( 560)					if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutItem))) {
HXLINE( 561)						continue;
            					}
HXLINE( 563)					 ::feathers::layout::HorizontalLayoutData layoutData = ( ( ::feathers::layout::HorizontalLayoutData)(::Std_obj::downcast(::feathers::layout::ILayoutObject_obj::get_layoutData(layoutItem),::hx::ClassOf< ::feathers::layout::HorizontalLayoutData >())) );
HXLINE( 564)					if (::hx::IsNotNull( layoutData )) {
HXLINE( 565)						 ::Dynamic percentWidth = layoutData->get_percentWidth();
HXLINE( 566)						if (::hx::IsNotNull( percentWidth )) {
HXLINE( 567)							if (::hx::IsLess( percentWidth,((Float)0.0) )) {
HXLINE( 568)								percentWidth = ((Float)0.0);
            							}
HXLINE( 570)							if (::Std_obj::isOfType(layoutItem,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE( 571)								::Dynamic measureItem = layoutItem;
HXLINE( 572)								totalMinWidth = (totalMinWidth + ::feathers::core::IMeasureObject_obj::get_minWidth(measureItem));
            							}
HXLINE( 574)							totalPercentWidth = (totalPercentWidth + percentWidth);
HXLINE( 575)							totalMeasuredWidth = (totalMeasuredWidth + adjustedGap);
HXLINE( 576)							pendingItems->push(layoutItem);
HXLINE( 577)							continue;
            						}
            					}
            				}
HXLINE( 581)				totalMeasuredWidth = (totalMeasuredWidth + (item->get_width() + adjustedGap));
            			}
            		}
HXLINE( 583)		totalMeasuredWidth = (totalMeasuredWidth - adjustedGap);
HXLINE( 584)		totalMeasuredWidth = (totalMeasuredWidth + (this->_paddingLeft + this->_paddingRight));
HXLINE( 585)		if ((totalPercentWidth < ((Float)100.0))) {
HXLINE( 586)			totalPercentWidth = ((Float)100.0);
            		}
HXLINE( 588)		Float remainingWidth = ((Float)0.0);
HXLINE( 589)		if (::hx::IsNotNull( explicitWidth )) {
HXLINE( 590)			remainingWidth = ( (Float)(explicitWidth) );
            		}
            		else {
HXLINE( 592)			remainingWidth = (totalMeasuredWidth + totalMinWidth);
HXLINE( 593)			bool _hx_tmp;
HXDLIN( 593)			if (::hx::IsNotNull( explicitMinWidth )) {
HXLINE( 593)				_hx_tmp = ::hx::IsLess( remainingWidth,explicitMinWidth );
            			}
            			else {
HXLINE( 593)				_hx_tmp = false;
            			}
HXDLIN( 593)			if (_hx_tmp) {
HXLINE( 594)				remainingWidth = ( (Float)(explicitMinWidth) );
            			}
            			else {
HXLINE( 595)				bool _hx_tmp;
HXDLIN( 595)				if (::hx::IsNotNull( explicitMaxWidth )) {
HXLINE( 595)					_hx_tmp = ::hx::IsGreater( remainingWidth,explicitMaxWidth );
            				}
            				else {
HXLINE( 595)					_hx_tmp = false;
            				}
HXDLIN( 595)				if (_hx_tmp) {
HXLINE( 596)					remainingWidth = ( (Float)(explicitMaxWidth) );
            				}
            			}
            		}
HXLINE( 599)		remainingWidth = (remainingWidth - totalMeasuredWidth);
HXLINE( 600)		if ((remainingWidth < ((Float)0.0))) {
HXLINE( 601)			remainingWidth = ((Float)0.0);
            		}
HXLINE( 603)		bool needsAnotherPass = true;
HXLINE( 604)		while(needsAnotherPass){
HXLINE( 605)			needsAnotherPass = false;
HXLINE( 606)			Float percentToPixels = (remainingWidth / totalPercentWidth);
HXLINE( 607)			{
HXLINE( 607)				int _g = 0;
HXDLIN( 607)				while((_g < pendingItems->length)){
HXLINE( 607)					::Dynamic layoutItem = pendingItems->__get(_g);
HXDLIN( 607)					_g = (_g + 1);
HXLINE( 608)					 ::feathers::layout::HorizontalLayoutData layoutData = ::hx::TCast<  ::feathers::layout::HorizontalLayoutData >::cast(::feathers::layout::ILayoutObject_obj::get_layoutData(layoutItem));
HXLINE( 609)					 ::Dynamic percentWidth = layoutData->get_percentWidth();
HXLINE( 610)					if (::hx::IsLess( percentWidth,((Float)0.0) )) {
HXLINE( 611)						percentWidth = ((Float)0.0);
            					}
HXLINE( 613)					Float itemWidth = (percentToPixels * ( (Float)(percentWidth) ));
HXLINE( 614)					if (::Std_obj::isOfType(layoutItem,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE( 615)						::Dynamic measureItem = layoutItem;
HXLINE( 616)						 ::Dynamic itemMinWidth = ::feathers::core::IMeasureObject_obj::get_explicitMinWidth(measureItem);
HXLINE( 617)						bool _hx_tmp;
HXDLIN( 617)						if (::hx::IsNotNull( itemMinWidth )) {
HXLINE( 617)							_hx_tmp = ::hx::IsGreater( itemMinWidth,remainingWidth );
            						}
            						else {
HXLINE( 617)							_hx_tmp = false;
            						}
HXDLIN( 617)						if (_hx_tmp) {
HXLINE( 621)							itemMinWidth = remainingWidth;
            						}
HXLINE( 623)						if (::hx::IsLess( itemWidth,itemMinWidth )) {
HXLINE( 624)							itemWidth = ( (Float)(itemMinWidth) );
HXLINE( 625)							remainingWidth = (remainingWidth - itemWidth);
HXLINE( 626)							totalPercentWidth = (totalPercentWidth - ( (Float)(percentWidth) ));
HXLINE( 627)							pendingItems->remove(layoutItem);
HXLINE( 628)							needsAnotherPass = true;
            						}
            					}
HXLINE( 634)					::hx::TCast<  ::openfl::display::DisplayObject >::cast(layoutItem)->set_width(itemWidth);
HXLINE( 635)					if (::Std_obj::isOfType(layoutItem,::hx::ClassOf< ::feathers::core::IValidating >())) {
HXLINE( 639)						::feathers::core::IValidating_obj::validateNow(layoutItem);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(HorizontalLayout_obj,applyPercentWidth,(void))

void HorizontalLayout_obj::applyPercentHeight(::Array< ::Dynamic> items,Float viewPortHeight){
            	HX_STACKFRAME(&_hx_pos_d038c4414a8a4fea_645_applyPercentHeight)
HXLINE( 646)		Float availableHeight = ((viewPortHeight - this->_paddingTop) - this->_paddingBottom);
HXLINE( 647)		{
HXLINE( 647)			int _g = 0;
HXDLIN( 647)			while((_g < items->length)){
HXLINE( 647)				 ::openfl::display::DisplayObject item = items->__get(_g).StaticCast<  ::openfl::display::DisplayObject >();
HXDLIN( 647)				_g = (_g + 1);
HXLINE( 648)				if (!(::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::layout::ILayoutObject >()))) {
HXLINE( 649)					continue;
            				}
HXLINE( 651)				::Dynamic layoutItem =  ::hx::interface_check(item,0xf54ca718);
HXLINE( 652)				if (!(::feathers::layout::ILayoutObject_obj::get_includeInLayout(layoutItem))) {
HXLINE( 653)					continue;
            				}
HXLINE( 655)				 ::feathers::layout::HorizontalLayoutData layoutData = ( ( ::feathers::layout::HorizontalLayoutData)(::Std_obj::downcast(::feathers::layout::ILayoutObject_obj::get_layoutData(layoutItem),::hx::ClassOf< ::feathers::layout::HorizontalLayoutData >())) );
HXLINE( 656)				if (::hx::IsNull( layoutData )) {
HXLINE( 657)					continue;
            				}
HXLINE( 659)				 ::Dynamic percentHeight = layoutData->get_percentHeight();
HXLINE( 660)				if (::hx::IsNull( percentHeight )) {
HXLINE( 661)					continue;
            				}
HXLINE( 663)				if (::hx::IsLess( percentHeight,((Float)0.0) )) {
HXLINE( 664)					percentHeight = ((Float)0.0);
            				}
            				else {
HXLINE( 665)					if (::hx::IsGreater( percentHeight,((Float)100.0) )) {
HXLINE( 666)						percentHeight = ((Float)100.0);
            					}
            				}
HXLINE( 668)				Float itemHeight = ((availableHeight * ( (Float)(percentHeight) )) / ((Float)100.0));
HXLINE( 669)				if (::Std_obj::isOfType(item,::hx::ClassOf< ::feathers::core::IMeasureObject >())) {
HXLINE( 670)					::Dynamic measureItem =  ::hx::interface_check(item,0xcfc32883);
HXLINE( 671)					 ::Dynamic itemMinHeight = ::feathers::core::IMeasureObject_obj::get_explicitMinHeight(measureItem);
HXLINE( 672)					if (::hx::IsNotNull( itemMinHeight )) {
HXLINE( 675)						if (::hx::IsGreater( itemMinHeight,availableHeight )) {
HXLINE( 676)							itemMinHeight = availableHeight;
            						}
HXLINE( 678)						if (::hx::IsLess( itemHeight,itemMinHeight )) {
HXLINE( 679)							itemHeight = ( (Float)(itemMinHeight) );
            						}
            					}
HXLINE( 682)					 ::Dynamic itemMaxHeight = ::feathers::core::IMeasureObject_obj::get_explicitMaxHeight(measureItem);
HXLINE( 683)					bool _hx_tmp;
HXDLIN( 683)					if (::hx::IsNotNull( itemMaxHeight )) {
HXLINE( 683)						_hx_tmp = ::hx::IsGreater( itemHeight,itemMaxHeight );
            					}
            					else {
HXLINE( 683)						_hx_tmp = false;
            					}
HXDLIN( 683)					if (_hx_tmp) {
HXLINE( 684)						itemHeight = ( (Float)(itemMaxHeight) );
            					}
            				}
HXLINE( 687)				item->set_height(itemHeight);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(HorizontalLayout_obj,applyPercentHeight,(void))


::hx::ObjectPtr< HorizontalLayout_obj > HorizontalLayout_obj::__new() {
	::hx::ObjectPtr< HorizontalLayout_obj > __this = new HorizontalLayout_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HorizontalLayout_obj > HorizontalLayout_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HorizontalLayout_obj *__this = (HorizontalLayout_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HorizontalLayout_obj), true, "feathers.layout.HorizontalLayout"));
	*(void **)__this = HorizontalLayout_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HorizontalLayout_obj::HorizontalLayout_obj()
{
}

void HorizontalLayout_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HorizontalLayout);
	HX_MARK_MEMBER_NAME(_paddingTop,"_paddingTop");
	HX_MARK_MEMBER_NAME(_paddingRight,"_paddingRight");
	HX_MARK_MEMBER_NAME(_paddingBottom,"_paddingBottom");
	HX_MARK_MEMBER_NAME(_paddingLeft,"_paddingLeft");
	HX_MARK_MEMBER_NAME(_gap,"_gap");
	HX_MARK_MEMBER_NAME(_minGap,"_minGap");
	HX_MARK_MEMBER_NAME(_horizontalAlign,"_horizontalAlign");
	HX_MARK_MEMBER_NAME(_verticalAlign,"_verticalAlign");
	HX_MARK_MEMBER_NAME(_justifyResetEnabled,"_justifyResetEnabled");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HorizontalLayout_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_paddingTop,"_paddingTop");
	HX_VISIT_MEMBER_NAME(_paddingRight,"_paddingRight");
	HX_VISIT_MEMBER_NAME(_paddingBottom,"_paddingBottom");
	HX_VISIT_MEMBER_NAME(_paddingLeft,"_paddingLeft");
	HX_VISIT_MEMBER_NAME(_gap,"_gap");
	HX_VISIT_MEMBER_NAME(_minGap,"_minGap");
	HX_VISIT_MEMBER_NAME(_horizontalAlign,"_horizontalAlign");
	HX_VISIT_MEMBER_NAME(_verticalAlign,"_verticalAlign");
	HX_VISIT_MEMBER_NAME(_justifyResetEnabled,"_justifyResetEnabled");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val HorizontalLayout_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_gap() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_gap") ) { return ::hx::Val( _gap ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"minGap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minGap() ); }
		if (HX_FIELD_EQ(inName,"layout") ) { return ::hx::Val( layout_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_gap") ) { return ::hx::Val( get_gap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_gap") ) { return ::hx::Val( set_gap_dyn() ); }
		if (HX_FIELD_EQ(inName,"_minGap") ) { return ::hx::Val( _minGap ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"paddingTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingTop() ); }
		if (HX_FIELD_EQ(inName,"get_minGap") ) { return ::hx::Val( get_minGap_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_minGap") ) { return ::hx::Val( set_minGap_dyn() ); }
		if (HX_FIELD_EQ(inName,"setPadding") ) { return ::hx::Val( setPadding_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_paddingTop") ) { return ::hx::Val( _paddingTop ); }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingLeft() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"paddingRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingRight() ); }
		if (HX_FIELD_EQ(inName,"_paddingLeft") ) { return ::hx::Val( _paddingLeft ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_paddingRight") ) { return ::hx::Val( _paddingRight ); }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_paddingBottom() ); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_verticalAlign() ); }
		if (HX_FIELD_EQ(inName,"validateItems") ) { return ::hx::Val( validateItems_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_paddingTop") ) { return ::hx::Val( get_paddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingTop") ) { return ::hx::Val( set_paddingTop_dyn() ); }
		if (HX_FIELD_EQ(inName,"_paddingBottom") ) { return ::hx::Val( _paddingBottom ); }
		if (HX_FIELD_EQ(inName,"_verticalAlign") ) { return ::hx::Val( _verticalAlign ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_paddingLeft") ) { return ::hx::Val( get_paddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingLeft") ) { return ::hx::Val( set_paddingLeft_dyn() ); }
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_horizontalAlign() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_paddingRight") ) { return ::hx::Val( get_paddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingRight") ) { return ::hx::Val( set_paddingRight_dyn() ); }
		if (HX_FIELD_EQ(inName,"_horizontalAlign") ) { return ::hx::Val( _horizontalAlign ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_paddingBottom") ) { return ::hx::Val( get_paddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_paddingBottom") ) { return ::hx::Val( set_paddingBottom_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_verticalAlign") ) { return ::hx::Val( get_verticalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_verticalAlign") ) { return ::hx::Val( set_verticalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyPercentWidth") ) { return ::hx::Val( applyPercentWidth_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"applyVerticalAlign") ) { return ::hx::Val( applyVerticalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"applyPercentHeight") ) { return ::hx::Val( applyPercentHeight_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_horizontalAlign") ) { return ::hx::Val( get_horizontalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_horizontalAlign") ) { return ::hx::Val( set_horizontalAlign_dyn() ); }
		if (HX_FIELD_EQ(inName,"justifyResetEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_justifyResetEnabled() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_justifyResetEnabled") ) { return ::hx::Val( _justifyResetEnabled ); }
		if (HX_FIELD_EQ(inName,"applyHorizontalAlign") ) { return ::hx::Val( applyHorizontalAlign_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"get_justifyResetEnabled") ) { return ::hx::Val( get_justifyResetEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_justifyResetEnabled") ) { return ::hx::Val( set_justifyResetEnabled_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val HorizontalLayout_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_gap(inValue.Cast< Float >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_gap") ) { _gap=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"minGap") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_minGap(inValue.Cast< Float >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_minGap") ) { _minGap=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"paddingTop") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingTop(inValue.Cast< Float >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_paddingTop") ) { _paddingTop=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingLeft") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingLeft(inValue.Cast< Float >()) ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"paddingRight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingRight(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"_paddingLeft") ) { _paddingLeft=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_paddingRight") ) { _paddingRight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paddingBottom") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_paddingBottom(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"verticalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_verticalAlign(inValue.Cast<  ::feathers::layout::VerticalAlign >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_paddingBottom") ) { _paddingBottom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_verticalAlign") ) { _verticalAlign=inValue.Cast<  ::feathers::layout::VerticalAlign >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"horizontalAlign") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_horizontalAlign(inValue.Cast<  ::feathers::layout::HorizontalAlign >()) ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_horizontalAlign") ) { _horizontalAlign=inValue.Cast<  ::feathers::layout::HorizontalAlign >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"justifyResetEnabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_justifyResetEnabled(inValue.Cast< bool >()) ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_justifyResetEnabled") ) { _justifyResetEnabled=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HorizontalLayout_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_paddingTop",63,ca,8f,0c));
	outFields->push(HX_("paddingTop",44,fd,05,3a));
	outFields->push(HX_("_paddingRight",2a,7f,16,fd));
	outFields->push(HX_("paddingRight",4b,ec,a7,1a));
	outFields->push(HX_("_paddingBottom",dd,57,eb,8d));
	outFields->push(HX_("paddingBottom",9c,67,99,4f));
	outFields->push(HX_("_paddingLeft",79,f8,ef,eb));
	outFields->push(HX_("paddingLeft",78,4a,e6,85));
	outFields->push(HX_("_gap",17,c2,19,3f));
	outFields->push(HX_("gap",16,7d,4e,00));
	outFields->push(HX_("_minGap",43,fc,5b,c1));
	outFields->push(HX_("minGap",a4,ea,e4,52));
	outFields->push(HX_("_horizontalAlign",c2,d1,46,df));
	outFields->push(HX_("horizontalAlign",41,8f,67,f4));
	outFields->push(HX_("_verticalAlign",b0,0e,ce,22));
	outFields->push(HX_("verticalAlign",6f,1e,7c,e4));
	outFields->push(HX_("_justifyResetEnabled",e3,44,2a,f0));
	outFields->push(HX_("justifyResetEnabled",e2,2d,d1,f0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HorizontalLayout_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(HorizontalLayout_obj,_paddingTop),HX_("_paddingTop",63,ca,8f,0c)},
	{::hx::fsFloat,(int)offsetof(HorizontalLayout_obj,_paddingRight),HX_("_paddingRight",2a,7f,16,fd)},
	{::hx::fsFloat,(int)offsetof(HorizontalLayout_obj,_paddingBottom),HX_("_paddingBottom",dd,57,eb,8d)},
	{::hx::fsFloat,(int)offsetof(HorizontalLayout_obj,_paddingLeft),HX_("_paddingLeft",79,f8,ef,eb)},
	{::hx::fsFloat,(int)offsetof(HorizontalLayout_obj,_gap),HX_("_gap",17,c2,19,3f)},
	{::hx::fsFloat,(int)offsetof(HorizontalLayout_obj,_minGap),HX_("_minGap",43,fc,5b,c1)},
	{::hx::fsObject /*  ::feathers::layout::HorizontalAlign */ ,(int)offsetof(HorizontalLayout_obj,_horizontalAlign),HX_("_horizontalAlign",c2,d1,46,df)},
	{::hx::fsObject /*  ::feathers::layout::VerticalAlign */ ,(int)offsetof(HorizontalLayout_obj,_verticalAlign),HX_("_verticalAlign",b0,0e,ce,22)},
	{::hx::fsBool,(int)offsetof(HorizontalLayout_obj,_justifyResetEnabled),HX_("_justifyResetEnabled",e3,44,2a,f0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HorizontalLayout_obj_sStaticStorageInfo = 0;
#endif

static ::String HorizontalLayout_obj_sMemberFields[] = {
	HX_("_paddingTop",63,ca,8f,0c),
	HX_("get_paddingTop",8d,85,fb,af),
	HX_("set_paddingTop",01,6e,1b,d0),
	HX_("_paddingRight",2a,7f,16,fd),
	HX_("get_paddingRight",d4,d8,46,1f),
	HX_("set_paddingRight",48,c6,88,75),
	HX_("_paddingBottom",dd,57,eb,8d),
	HX_("get_paddingBottom",f3,72,09,56),
	HX_("set_paddingBottom",ff,4a,77,79),
	HX_("_paddingLeft",79,f8,ef,eb),
	HX_("get_paddingLeft",0f,02,c8,46),
	HX_("set_paddingLeft",1b,7f,93,42),
	HX_("_gap",17,c2,19,3f),
	HX_("get_gap",ad,45,c3,26),
	HX_("set_gap",b9,d6,c4,19),
	HX_("_minGap",43,fc,5b,c1),
	HX_("get_minGap",6d,5a,6c,43),
	HX_("set_minGap",e1,f8,e9,46),
	HX_("_horizontalAlign",c2,d1,46,df),
	HX_("get_horizontalAlign",58,5e,72,7f),
	HX_("set_horizontalAlign",64,51,0f,bc),
	HX_("_verticalAlign",b0,0e,ce,22),
	HX_("get_verticalAlign",c6,29,ec,ea),
	HX_("set_verticalAlign",d2,01,5a,0e),
	HX_("_justifyResetEnabled",e3,44,2a,f0),
	HX_("get_justifyResetEnabled",79,d4,26,f9),
	HX_("set_justifyResetEnabled",85,3d,88,fb),
	HX_("setPadding",4f,7e,5c,23),
	HX_("layout",aa,ae,b8,58),
	HX_("validateItems",8a,6b,0c,ee),
	HX_("applyVerticalAlign",21,9c,1b,72),
	HX_("applyHorizontalAlign",73,5d,27,c7),
	HX_("applyPercentWidth",8f,8f,d2,d0),
	HX_("applyPercentHeight",3e,86,ba,9d),
	::String(null()) };

::hx::Class HorizontalLayout_obj::__mClass;

void HorizontalLayout_obj::__register()
{
	HorizontalLayout_obj _hx_dummy;
	HorizontalLayout_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.layout.HorizontalLayout",94,17,e8,c5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HorizontalLayout_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HorizontalLayout_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HorizontalLayout_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HorizontalLayout_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace layout
