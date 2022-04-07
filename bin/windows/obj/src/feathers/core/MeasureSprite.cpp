#include <hxcpp.h>

#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
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
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_313139a37d0571ce_29_new,"feathers.core.MeasureSprite","new",0x11628d44,"feathers.core.MeasureSprite.new","feathers/core/MeasureSprite.hx",29,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_54_get_width,"feathers.core.MeasureSprite","get_width",0x29ed9241,"feathers.core.MeasureSprite.get_width","feathers/core/MeasureSprite.hx",54,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_58_set_width,"feathers.core.MeasureSprite","set_width",0x0d3e7e4d,"feathers.core.MeasureSprite.set_width","feathers/core/MeasureSprite.hx",58,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_71_get_height,"feathers.core.MeasureSprite","get_height",0x3c41df4c,"feathers.core.MeasureSprite.get_height","feathers/core/MeasureSprite.hx",71,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_75_set_height,"feathers.core.MeasureSprite","set_height",0x3fbf7dc0,"feathers.core.MeasureSprite.set_height","feathers/core/MeasureSprite.hx",75,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_87_set_scaleX,"feathers.core.MeasureSprite","set_scaleX",0x79996067,"feathers.core.MeasureSprite.set_scaleX","feathers/core/MeasureSprite.hx",87,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_97_set_scaleY,"feathers.core.MeasureSprite","set_scaleY",0x79996068,"feathers.core.MeasureSprite.set_scaleY","feathers/core/MeasureSprite.hx",97,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_114_get_explicitWidth,"feathers.core.MeasureSprite","get_explicitWidth",0x559a5dad,"feathers.core.MeasureSprite.get_explicitWidth","feathers/core/MeasureSprite.hx",114,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_117_set_explicitWidth,"feathers.core.MeasureSprite","set_explicitWidth",0x790835b9,"feathers.core.MeasureSprite.set_explicitWidth","feathers/core/MeasureSprite.hx",117,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_145_get_explicitHeight,"feathers.core.MeasureSprite","get_explicitHeight",0x47c71260,"feathers.core.MeasureSprite.get_explicitHeight","feathers/core/MeasureSprite.hx",145,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_148_set_explicitHeight,"feathers.core.MeasureSprite","set_explicitHeight",0x247644d4,"feathers.core.MeasureSprite.set_explicitHeight","feathers/core/MeasureSprite.hx",148,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_176_get_explicitMinWidth,"feathers.core.MeasureSprite","get_explicitMinWidth",0xa3c77dcd,"feathers.core.MeasureSprite.get_explicitMinWidth","feathers/core/MeasureSprite.hx",176,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_179_set_explicitMinWidth,"feathers.core.MeasureSprite","set_explicitMinWidth",0x707f3541,"feathers.core.MeasureSprite.set_explicitMinWidth","feathers/core/MeasureSprite.hx",179,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_211_get_explicitMinHeight,"feathers.core.MeasureSprite","get_explicitMinHeight",0x61160e40,"feathers.core.MeasureSprite.get_explicitMinHeight","feathers/core/MeasureSprite.hx",211,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_214_set_explicitMinHeight,"feathers.core.MeasureSprite","set_explicitMinHeight",0xb51edc4c,"feathers.core.MeasureSprite.set_explicitMinHeight","feathers/core/MeasureSprite.hx",214,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_244_get_minWidth,"feathers.core.MeasureSprite","get_minWidth",0xc6405db9,"feathers.core.MeasureSprite.get_minWidth","feathers/core/MeasureSprite.hx",244,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_247_set_minWidth,"feathers.core.MeasureSprite","set_minWidth",0xdb39812d,"feathers.core.MeasureSprite.set_minWidth","feathers/core/MeasureSprite.hx",247,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_262_get_minHeight,"feathers.core.MeasureSprite","get_minHeight",0x68611cd4,"feathers.core.MeasureSprite.get_minHeight","feathers/core/MeasureSprite.hx",262,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_265_set_minHeight,"feathers.core.MeasureSprite","set_minHeight",0xad66fee0,"feathers.core.MeasureSprite.set_minHeight","feathers/core/MeasureSprite.hx",265,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_282_get_explicitMaxWidth,"feathers.core.MeasureSprite","get_explicitMaxWidth",0x56ad637b,"feathers.core.MeasureSprite.get_explicitMaxWidth","feathers/core/MeasureSprite.hx",282,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_285_set_explicitMaxWidth,"feathers.core.MeasureSprite","set_explicitMaxWidth",0x23651aef,"feathers.core.MeasureSprite.set_explicitMaxWidth","feathers/core/MeasureSprite.hx",285,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_317_get_explicitMaxHeight,"feathers.core.MeasureSprite","get_explicitMaxHeight",0x375920d2,"feathers.core.MeasureSprite.get_explicitMaxHeight","feathers/core/MeasureSprite.hx",317,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_320_set_explicitMaxHeight,"feathers.core.MeasureSprite","set_explicitMaxHeight",0x8b61eede,"feathers.core.MeasureSprite.set_explicitMaxHeight","feathers/core/MeasureSprite.hx",320,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_350_get_maxWidth,"feathers.core.MeasureSprite","get_maxWidth",0x79264367,"feathers.core.MeasureSprite.get_maxWidth","feathers/core/MeasureSprite.hx",350,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_353_set_maxWidth,"feathers.core.MeasureSprite","set_maxWidth",0x8e1f66db,"feathers.core.MeasureSprite.set_maxWidth","feathers/core/MeasureSprite.hx",353,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_368_get_maxHeight,"feathers.core.MeasureSprite","get_maxHeight",0x3ea42f66,"feathers.core.MeasureSprite.get_maxHeight","feathers/core/MeasureSprite.hx",368,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_371_set_maxHeight,"feathers.core.MeasureSprite","set_maxHeight",0x83aa1172,"feathers.core.MeasureSprite.set_maxHeight","feathers/core/MeasureSprite.hx",371,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_385_resetWidth,"feathers.core.MeasureSprite","resetWidth",0xfc6d5553,"feathers.core.MeasureSprite.resetWidth","feathers/core/MeasureSprite.hx",385,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_393_resetHeight,"feathers.core.MeasureSprite","resetHeight",0x998ccbfa,"feathers.core.MeasureSprite.resetHeight","feathers/core/MeasureSprite.hx",393,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_401_resetMinWidth,"feathers.core.MeasureSprite","resetMinWidth",0x3da251e7,"feathers.core.MeasureSprite.resetMinWidth","feathers/core/MeasureSprite.hx",401,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_409_resetMinHeight,"feathers.core.MeasureSprite","resetMinHeight",0x66b4d0e6,"feathers.core.MeasureSprite.resetMinHeight","feathers/core/MeasureSprite.hx",409,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_417_resetMaxWidth,"feathers.core.MeasureSprite","resetMaxWidth",0xf0883795,"feathers.core.MeasureSprite.resetMaxWidth","feathers/core/MeasureSprite.hx",417,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_425_resetMaxHeight,"feathers.core.MeasureSprite","resetMaxHeight",0x3cf7e378,"feathers.core.MeasureSprite.resetMaxHeight","feathers/core/MeasureSprite.hx",425,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_431_getBounds,"feathers.core.MeasureSprite","getBounds",0xfe558f8f,"feathers.core.MeasureSprite.getBounds","feathers/core/MeasureSprite.hx",431,0x17b1e30c)
HX_LOCAL_STACK_FRAME(_hx_pos_313139a37d0571ce_492_saveMeasurements,"feathers.core.MeasureSprite","saveMeasurements",0x0603f870,"feathers.core.MeasureSprite.saveMeasurements","feathers/core/MeasureSprite.hx",492,0x17b1e30c)
namespace feathers{
namespace core{

void MeasureSprite_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_29_new)
HXLINE( 309)		this->_explicitMaxHeight = null();
HXLINE( 274)		this->_explicitMaxWidth = null();
HXLINE( 203)		this->_explicitMinHeight = null();
HXLINE( 168)		this->_explicitMinWidth = null();
HXLINE( 137)		this->_explicitHeight = null();
HXLINE( 106)		this->_explicitWidth = null();
HXLINE(  41)		this->scaledActualMaxHeight = ::hx::DivByZero(((Float)1.0));
HXLINE(  40)		this->scaledActualMaxWidth = ::hx::DivByZero(((Float)1.0));
HXLINE(  39)		this->scaledActualMinHeight = ((Float)0.0);
HXLINE(  38)		this->scaledActualMinWidth = ((Float)0.0);
HXLINE(  37)		this->scaledActualHeight = ((Float)0.0);
HXLINE(  36)		this->scaledActualWidth = ((Float)0.0);
HXLINE(  35)		this->actualMaxHeight = ::hx::DivByZero(((Float)1.0));
HXLINE(  34)		this->actualMaxWidth = ::hx::DivByZero(((Float)1.0));
HXLINE(  33)		this->actualMinHeight = ((Float)0.0);
HXLINE(  32)		this->actualMinWidth = ((Float)0.0);
HXLINE(  31)		this->actualHeight = ((Float)0.0);
HXLINE(  30)		this->actualWidth = ((Float)0.0);
HXLINE(  49)		super::__construct();
            	}

Dynamic MeasureSprite_obj::__CreateEmpty() { return new MeasureSprite_obj; }

void *MeasureSprite_obj::_hx_vtable = 0;

Dynamic MeasureSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MeasureSprite_obj > _hx_result = new MeasureSprite_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MeasureSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x093ab78b) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x093ab78b;
			}
		} else {
			return inClassId==(int)0x0c89e854 || inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x58123034) {
			return inClassId==(int)0x4af7dd8e || inClassId==(int)0x58123034;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_feathers_core_MeasureSprite__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::core::MeasureSprite_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::core::MeasureSprite_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::core::MeasureSprite_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::core::MeasureSprite_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::core::MeasureSprite_obj::willTrigger,
};

static ::feathers::core::IMeasureObject_obj _hx_feathers_core_MeasureSprite__hx_feathers_core_IMeasureObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::core::MeasureSprite_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::core::MeasureSprite_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::core::MeasureSprite_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::core::MeasureSprite_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::core::MeasureSprite_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::core::MeasureSprite_obj::set_visible,
	(  ::Dynamic (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_explicitWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_explicitHeight,
	(  ::Dynamic (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_explicitMinWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_explicitMinHeight,
	(  ::Dynamic (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_explicitMaxWidth,
	(  ::Dynamic (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_explicitMaxHeight,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_minWidth,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_minWidth,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_minHeight,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_minHeight,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_maxWidth,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_maxWidth,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_maxHeight,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_maxHeight,
	( void (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::resetWidth,
	( void (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::resetHeight,
	( void (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::resetMinWidth,
	( void (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::resetMinHeight,
	( void (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::resetMaxWidth,
	( void (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::resetMaxHeight,
};

static ::feathers::core::IDisplayObject_obj _hx_feathers_core_MeasureSprite__hx_feathers_core_IDisplayObject= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::core::MeasureSprite_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::core::MeasureSprite_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::core::MeasureSprite_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::core::MeasureSprite_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::core::MeasureSprite_obj::willTrigger,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_x,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_x,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_y,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_y,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_width,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_width,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_height,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_height,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_scaleX,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_scaleX,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_scaleY,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_scaleY,
	( Float (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_alpha,
	( Float (::hx::Object::*)(Float))&::feathers::core::MeasureSprite_obj::set_alpha,
	( bool (::hx::Object::*)())&::feathers::core::MeasureSprite_obj::get_visible,
	( bool (::hx::Object::*)(bool))&::feathers::core::MeasureSprite_obj::set_visible,
};

void *MeasureSprite_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_feathers_core_MeasureSprite__hx_openfl_events_IEventDispatcher;
		case (int)0xcfc32883: return &_hx_feathers_core_MeasureSprite__hx_feathers_core_IMeasureObject;
		case (int)0x3a979a67: return &_hx_feathers_core_MeasureSprite__hx_feathers_core_IDisplayObject;
	}
	return super::_hx_getInterface(inHash);
}

Float MeasureSprite_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_54_get_width)
HXDLIN(  54)		return this->scaledActualWidth;
            	}


Float MeasureSprite_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_58_set_width)
HXLINE(  59)		if ((this->get_scaleX() != ((Float)1.0))) {
HXLINE(  60)			value = (value / this->get_scaleX());
            		}
HXLINE(  63)		this->set_explicitWidth(value);
HXLINE(  65)		return this->scaledActualWidth;
            	}


Float MeasureSprite_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_71_get_height)
HXDLIN(  71)		return this->scaledActualHeight;
            	}


Float MeasureSprite_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_75_set_height)
HXLINE(  76)		if ((this->get_scaleY() != ((Float)1.0))) {
HXLINE(  77)			value = (value / this->get_scaleY());
            		}
HXLINE(  80)		this->set_explicitHeight(value);
HXLINE(  82)		return this->scaledActualHeight;
            	}


Float MeasureSprite_obj::set_scaleX(Float value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_87_set_scaleX)
HXLINE(  88)		this->super::set_scaleX(value);
HXLINE(  89)		this->saveMeasurements(this->actualWidth,this->actualHeight,this->actualMinWidth,this->actualMinHeight,this->actualMaxWidth,this->actualMaxHeight);
HXLINE(  92)		return this->get_scaleX();
            	}


Float MeasureSprite_obj::set_scaleY(Float value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_97_set_scaleY)
HXLINE(  98)		this->super::set_scaleY(value);
HXLINE(  99)		this->saveMeasurements(this->actualWidth,this->actualHeight,this->actualMinWidth,this->actualMinHeight,this->actualMaxWidth,this->actualMaxHeight);
HXLINE( 102)		return this->get_scaleY();
            	}


 ::Dynamic MeasureSprite_obj::get_explicitWidth(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_114_get_explicitWidth)
HXDLIN( 114)		return this->_explicitWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_explicitWidth,return )

 ::Dynamic MeasureSprite_obj::set_explicitWidth( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_117_set_explicitWidth)
HXLINE( 118)		if (::hx::IsEq( this->_explicitWidth,value )) {
HXLINE( 119)			return this->_explicitWidth;
            		}
HXLINE( 121)		this->_explicitWidth = value;
HXLINE( 122)		if (::hx::IsNull( value )) {
HXLINE( 123)			if ((this->actualWidth != ((Float)0.0))) {
HXLINE( 124)				this->actualWidth = ((Float)0.0);
HXLINE( 125)				this->scaledActualWidth = ((Float)0.0);
HXLINE( 126)				this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            			}
            		}
            		else {
HXLINE( 129)			bool result = this->saveMeasurements(( (Float)(value) ),this->actualHeight,this->actualMinWidth,this->actualMinHeight,this->actualMaxWidth,this->actualMaxHeight);
HXLINE( 130)			if (result) {
HXLINE( 131)				this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            			}
            		}
HXLINE( 134)		return this->_explicitWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_explicitWidth,return )

 ::Dynamic MeasureSprite_obj::get_explicitHeight(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_145_get_explicitHeight)
HXDLIN( 145)		return this->_explicitHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_explicitHeight,return )

 ::Dynamic MeasureSprite_obj::set_explicitHeight( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_148_set_explicitHeight)
HXLINE( 149)		if (::hx::IsEq( this->_explicitHeight,value )) {
HXLINE( 150)			return this->_explicitHeight;
            		}
HXLINE( 152)		this->_explicitHeight = value;
HXLINE( 153)		if (::hx::IsNull( value )) {
HXLINE( 154)			if ((this->actualHeight != ((Float)0.0))) {
HXLINE( 155)				this->actualHeight = ((Float)0.0);
HXLINE( 156)				this->scaledActualHeight = ((Float)0.0);
HXLINE( 157)				this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            			}
            		}
            		else {
HXLINE( 160)			bool result = this->saveMeasurements(this->actualWidth,( (Float)(value) ),this->actualMinWidth,this->actualMinHeight,this->actualMaxWidth,this->actualMaxHeight);
HXLINE( 161)			if (result) {
HXLINE( 162)				this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            			}
            		}
HXLINE( 165)		return this->_explicitHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_explicitHeight,return )

 ::Dynamic MeasureSprite_obj::get_explicitMinWidth(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_176_get_explicitMinWidth)
HXDLIN( 176)		return this->_explicitMinWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_explicitMinWidth,return )

 ::Dynamic MeasureSprite_obj::set_explicitMinWidth( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_179_set_explicitMinWidth)
HXLINE( 180)		if (::hx::IsEq( this->_explicitMinWidth,value )) {
HXLINE( 181)			return this->_explicitMinWidth;
            		}
HXLINE( 183)		 ::Dynamic oldValue = this->_explicitMinWidth;
HXLINE( 184)		this->_explicitMinWidth = value;
HXLINE( 185)		if (::hx::IsNull( value )) {
HXLINE( 186)			this->actualMinWidth = ((Float)0.0);
HXLINE( 187)			this->scaledActualMinWidth = ((Float)0.0);
HXLINE( 188)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            		}
            		else {
HXLINE( 192)			Float actualWidth = this->actualWidth;
HXLINE( 193)			this->saveMeasurements(this->actualWidth,this->actualHeight,value,this->actualMinHeight,this->actualMaxWidth,this->actualMaxHeight);
HXLINE( 194)			bool _hx_tmp;
HXDLIN( 194)			if (::hx::IsNull( this->_explicitWidth )) {
HXLINE( 194)				if (!(::hx::IsLess( actualWidth,value ))) {
HXLINE( 194)					_hx_tmp = ::hx::IsEq( actualWidth,oldValue );
            				}
            				else {
HXLINE( 194)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 194)				_hx_tmp = false;
            			}
HXDLIN( 194)			if (_hx_tmp) {
HXLINE( 197)				this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            			}
            		}
HXLINE( 200)		return this->_explicitMinWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_explicitMinWidth,return )

 ::Dynamic MeasureSprite_obj::get_explicitMinHeight(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_211_get_explicitMinHeight)
HXDLIN( 211)		return this->_explicitMinHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_explicitMinHeight,return )

 ::Dynamic MeasureSprite_obj::set_explicitMinHeight( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_214_set_explicitMinHeight)
HXLINE( 215)		if (::hx::IsEq( this->_explicitMinHeight,value )) {
HXLINE( 216)			return this->_explicitMinHeight;
            		}
HXLINE( 218)		 ::Dynamic oldValue = this->_explicitMinHeight;
HXLINE( 219)		this->_explicitMinHeight = value;
HXLINE( 220)		if (::hx::IsNull( value )) {
HXLINE( 221)			this->actualMinHeight = ((Float)0.0);
HXLINE( 222)			this->scaledActualMinHeight = ((Float)0.0);
HXLINE( 223)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            		}
            		else {
HXLINE( 227)			Float actualHeight = this->actualHeight;
HXLINE( 228)			this->saveMeasurements(this->actualWidth,this->actualHeight,this->actualMinWidth,value,this->actualMaxWidth,this->actualMaxHeight);
HXLINE( 229)			bool _hx_tmp;
HXDLIN( 229)			if (::hx::IsNull( this->_explicitHeight )) {
HXLINE( 229)				if (!(::hx::IsLess( actualHeight,value ))) {
HXLINE( 229)					_hx_tmp = ::hx::IsEq( actualHeight,oldValue );
            				}
            				else {
HXLINE( 229)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 229)				_hx_tmp = false;
            			}
HXDLIN( 229)			if (_hx_tmp) {
HXLINE( 232)				this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            			}
            		}
HXLINE( 235)		return this->_explicitMinHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_explicitMinHeight,return )

Float MeasureSprite_obj::get_minWidth(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_244_get_minWidth)
HXDLIN( 244)		return this->scaledActualMinWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_minWidth,return )

Float MeasureSprite_obj::set_minWidth(Float value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_247_set_minWidth)
HXLINE( 248)		if ((this->get_scaleX() != 1)) {
HXLINE( 249)			value = (value / this->get_scaleX());
            		}
HXLINE( 252)		this->set_explicitMinWidth(value);
HXLINE( 253)		return this->scaledActualMinWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_minWidth,return )

Float MeasureSprite_obj::get_minHeight(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_262_get_minHeight)
HXDLIN( 262)		return this->scaledActualMinHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_minHeight,return )

Float MeasureSprite_obj::set_minHeight(Float value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_265_set_minHeight)
HXLINE( 266)		if ((this->get_scaleY() != 1)) {
HXLINE( 267)			value = (value / this->get_scaleY());
            		}
HXLINE( 270)		this->set_explicitMinHeight(value);
HXLINE( 271)		return this->scaledActualMinHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_minHeight,return )

 ::Dynamic MeasureSprite_obj::get_explicitMaxWidth(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_282_get_explicitMaxWidth)
HXDLIN( 282)		return this->_explicitMaxWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_explicitMaxWidth,return )

 ::Dynamic MeasureSprite_obj::set_explicitMaxWidth( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_285_set_explicitMaxWidth)
HXLINE( 286)		if (::hx::IsEq( this->_explicitMaxWidth,value )) {
HXLINE( 287)			return this->_explicitMaxWidth;
            		}
HXLINE( 289)		 ::Dynamic oldValue = this->_explicitMaxWidth;
HXLINE( 290)		this->_explicitMaxWidth = value;
HXLINE( 291)		if (::hx::IsNull( value )) {
HXLINE( 292)			this->actualMaxWidth = ::hx::DivByZero(((Float)1.0));
HXLINE( 293)			this->scaledActualMaxWidth = ::hx::DivByZero(((Float)1.0));
HXLINE( 294)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            		}
            		else {
HXLINE( 298)			Float actualWidth = this->actualWidth;
HXLINE( 299)			this->saveMeasurements(this->actualWidth,this->actualHeight,this->actualMinWidth,this->actualMinHeight,value,this->actualMaxHeight);
HXLINE( 300)			bool _hx_tmp;
HXDLIN( 300)			if (::hx::IsNull( this->_explicitWidth )) {
HXLINE( 300)				if (!(::hx::IsGreater( actualWidth,value ))) {
HXLINE( 300)					_hx_tmp = ::hx::IsEq( actualWidth,oldValue );
            				}
            				else {
HXLINE( 300)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 300)				_hx_tmp = false;
            			}
HXDLIN( 300)			if (_hx_tmp) {
HXLINE( 303)				this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            			}
            		}
HXLINE( 306)		return this->_explicitMaxWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_explicitMaxWidth,return )

 ::Dynamic MeasureSprite_obj::get_explicitMaxHeight(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_317_get_explicitMaxHeight)
HXDLIN( 317)		return this->_explicitMaxHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_explicitMaxHeight,return )

 ::Dynamic MeasureSprite_obj::set_explicitMaxHeight( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_320_set_explicitMaxHeight)
HXLINE( 321)		if (::hx::IsEq( this->_explicitMaxHeight,value )) {
HXLINE( 322)			return this->_explicitMaxHeight;
            		}
HXLINE( 324)		 ::Dynamic oldValue = this->_explicitMaxHeight;
HXLINE( 325)		this->_explicitMaxHeight = value;
HXLINE( 326)		if (::hx::IsNull( value )) {
HXLINE( 327)			this->actualMaxHeight = ::hx::DivByZero(((Float)1.0));
HXLINE( 328)			this->scaledActualMaxHeight = ::hx::DivByZero(((Float)1.0));
HXLINE( 329)			this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            		}
            		else {
HXLINE( 333)			Float actualHeight = this->actualHeight;
HXLINE( 334)			this->saveMeasurements(this->actualWidth,this->actualHeight,this->actualMinWidth,this->actualMinHeight,this->actualMaxWidth,value);
HXLINE( 335)			bool _hx_tmp;
HXDLIN( 335)			if (::hx::IsNull( this->_explicitHeight )) {
HXLINE( 335)				if (!(::hx::IsGreater( actualHeight,value ))) {
HXLINE( 335)					_hx_tmp = ::hx::IsEq( actualHeight,oldValue );
            				}
            				else {
HXLINE( 335)					_hx_tmp = true;
            				}
            			}
            			else {
HXLINE( 335)				_hx_tmp = false;
            			}
HXDLIN( 335)			if (_hx_tmp) {
HXLINE( 338)				this->setInvalid(::feathers::core::InvalidationFlag_obj::SIZE_dyn());
            			}
            		}
HXLINE( 341)		return this->_explicitMaxHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_explicitMaxHeight,return )

Float MeasureSprite_obj::get_maxWidth(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_350_get_maxWidth)
HXDLIN( 350)		return this->scaledActualMaxWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_maxWidth,return )

Float MeasureSprite_obj::set_maxWidth(Float value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_353_set_maxWidth)
HXLINE( 354)		if ((this->get_scaleX() != 1)) {
HXLINE( 355)			value = (value / this->get_scaleX());
            		}
HXLINE( 358)		this->set_explicitMaxWidth(value);
HXLINE( 359)		return this->scaledActualMaxWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_maxWidth,return )

Float MeasureSprite_obj::get_maxHeight(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_368_get_maxHeight)
HXDLIN( 368)		return this->scaledActualMaxHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,get_maxHeight,return )

Float MeasureSprite_obj::set_maxHeight(Float value){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_371_set_maxHeight)
HXLINE( 372)		if ((this->get_scaleY() != 1)) {
HXLINE( 373)			value = (value / this->get_scaleY());
            		}
HXLINE( 376)		this->set_explicitMaxHeight(value);
HXLINE( 377)		return this->scaledActualMaxHeight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MeasureSprite_obj,set_maxHeight,return )

void MeasureSprite_obj::resetWidth(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_385_resetWidth)
HXDLIN( 385)		this->set_explicitWidth(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,resetWidth,(void))

void MeasureSprite_obj::resetHeight(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_393_resetHeight)
HXDLIN( 393)		this->set_explicitHeight(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,resetHeight,(void))

void MeasureSprite_obj::resetMinWidth(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_401_resetMinWidth)
HXDLIN( 401)		this->set_explicitMinWidth(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,resetMinWidth,(void))

void MeasureSprite_obj::resetMinHeight(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_409_resetMinHeight)
HXDLIN( 409)		this->set_explicitMinHeight(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,resetMinHeight,(void))

void MeasureSprite_obj::resetMaxWidth(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_417_resetMaxWidth)
HXDLIN( 417)		this->set_explicitMaxWidth(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,resetMaxWidth,(void))

void MeasureSprite_obj::resetMaxHeight(){
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_425_resetMaxHeight)
HXDLIN( 425)		this->set_explicitMaxHeight(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(MeasureSprite_obj,resetMaxHeight,(void))

 ::openfl::geom::Rectangle MeasureSprite_obj::getBounds( ::openfl::display::DisplayObject targetCoordinateSpace){
            	HX_GC_STACKFRAME(&_hx_pos_313139a37d0571ce_431_getBounds)
HXLINE( 432)		if (::hx::IsNull( this->_hx___getBoundsHelperMatrix1 )) {
HXLINE( 433)			this->_hx___getBoundsHelperMatrix1 =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            		}
            		else {
HXLINE( 435)			this->_hx___getBoundsHelperMatrix1->identity();
            		}
HXLINE( 438)		bool _hx_tmp;
HXDLIN( 438)		if (::hx::IsNotNull( targetCoordinateSpace )) {
HXLINE( 438)			_hx_tmp = ::hx::IsInstanceNotEq( targetCoordinateSpace,::hx::ObjectPtr<OBJ_>(this) );
            		}
            		else {
HXLINE( 438)			_hx_tmp = false;
            		}
HXDLIN( 438)		if (_hx_tmp) {
HXLINE( 439)			if (::hx::IsNull( this->_hx___getBoundsHelperMatrix2 )) {
HXLINE( 440)				this->_hx___getBoundsHelperMatrix2 =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            			}
HXLINE( 445)			 ::openfl::geom::Matrix worldTransform1 = this->_hx___getWorldTransform();
HXLINE( 446)			this->_hx___getBoundsHelperMatrix1->copyFrom(worldTransform1);
HXLINE( 459)			 ::openfl::geom::Matrix worldTransform2 = targetCoordinateSpace->_hx___getWorldTransform();
HXLINE( 461)			this->_hx___getBoundsHelperMatrix2->copyFrom(worldTransform2);
HXLINE( 462)			this->_hx___getBoundsHelperMatrix2->invert();
HXLINE( 464)			this->_hx___getBoundsHelperMatrix1->concat(this->_hx___getBoundsHelperMatrix2);
HXLINE( 466)			this->_hx___getBoundsHelperMatrix2->identity();
            		}
HXLINE( 469)		Float x = this->_hx___getBoundsHelperMatrix1->tx;
HXLINE( 470)		Float y = this->_hx___getBoundsHelperMatrix1->ty;
HXLINE( 471)		Float w = ((((this->actualWidth * this->_hx___getBoundsHelperMatrix1->a) + (this->actualHeight * this->_hx___getBoundsHelperMatrix1->c)) + this->_hx___getBoundsHelperMatrix1->tx) - x);
HXLINE( 475)		Float h = ((((this->actualWidth * this->_hx___getBoundsHelperMatrix1->b) + (this->actualHeight * this->_hx___getBoundsHelperMatrix1->d)) + this->_hx___getBoundsHelperMatrix1->ty) - y);
HXLINE( 480)		this->_hx___getBoundsHelperMatrix1->identity();
HXLINE( 481)		return  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,x,y,w,h);
            	}


bool MeasureSprite_obj::saveMeasurements(Float width,Float height,::hx::Null< Float >  __o_minWidth,::hx::Null< Float >  __o_minHeight, ::Dynamic maxWidth, ::Dynamic maxHeight){
            		Float minWidth = __o_minWidth.Default(((Float)0.0));
            		Float minHeight = __o_minHeight.Default(((Float)0.0));
            	HX_STACKFRAME(&_hx_pos_313139a37d0571ce_492_saveMeasurements)
HXLINE( 493)		if (::hx::IsNull( maxWidth )) {
HXLINE( 494)			maxWidth = ::hx::DivByZero(((Float)1.0));
            		}
HXLINE( 496)		if (::hx::IsNull( maxHeight )) {
HXLINE( 497)			maxHeight = ::hx::DivByZero(((Float)1.0));
            		}
HXLINE( 501)		if (::hx::IsNotNull( this->_explicitMinWidth )) {
HXLINE( 502)			minWidth = ( (Float)(this->_explicitMinWidth) );
            		}
HXLINE( 504)		if (::hx::IsNotNull( this->_explicitMinHeight )) {
HXLINE( 505)			minHeight = ( (Float)(this->_explicitMinHeight) );
            		}
HXLINE( 507)		if (::hx::IsNotNull( this->_explicitMaxWidth )) {
HXLINE( 508)			maxWidth = this->_explicitMaxWidth;
            		}
            		else {
HXLINE( 509)			if (::hx::IsNull( maxWidth )) {
HXLINE( 511)				maxWidth = ::hx::DivByZero(((Float)1.0));
            			}
            		}
HXLINE( 513)		if (::hx::IsNotNull( this->_explicitMaxHeight )) {
HXLINE( 514)			maxHeight = this->_explicitMaxHeight;
            		}
            		else {
HXLINE( 515)			if (::hx::IsNull( maxHeight )) {
HXLINE( 517)				maxHeight = ::hx::DivByZero(((Float)1.0));
            			}
            		}
HXLINE( 524)		bool _hx_tmp;
HXDLIN( 524)		if (::hx::IsNull( this->_explicitMaxWidth )) {
HXLINE( 524)			_hx_tmp = ::hx::IsLess( maxWidth,minWidth );
            		}
            		else {
HXLINE( 524)			_hx_tmp = false;
            		}
HXDLIN( 524)		if (_hx_tmp) {
HXLINE( 525)			maxWidth = minWidth;
            		}
HXLINE( 527)		bool _hx_tmp1;
HXDLIN( 527)		if (::hx::IsNull( this->_explicitMinWidth )) {
HXLINE( 527)			_hx_tmp1 = ::hx::IsGreater( minWidth,maxWidth );
            		}
            		else {
HXLINE( 527)			_hx_tmp1 = false;
            		}
HXDLIN( 527)		if (_hx_tmp1) {
HXLINE( 528)			minWidth = ( (Float)(maxWidth) );
            		}
HXLINE( 530)		bool _hx_tmp2;
HXDLIN( 530)		if (::hx::IsNull( this->_explicitMaxHeight )) {
HXLINE( 530)			_hx_tmp2 = ::hx::IsLess( maxHeight,minHeight );
            		}
            		else {
HXLINE( 530)			_hx_tmp2 = false;
            		}
HXDLIN( 530)		if (_hx_tmp2) {
HXLINE( 531)			maxHeight = minHeight;
            		}
HXLINE( 533)		bool _hx_tmp3;
HXDLIN( 533)		if (::hx::IsNull( this->_explicitMinHeight )) {
HXLINE( 533)			_hx_tmp3 = ::hx::IsGreater( minHeight,maxHeight );
            		}
            		else {
HXLINE( 533)			_hx_tmp3 = false;
            		}
HXDLIN( 533)		if (_hx_tmp3) {
HXLINE( 534)			minHeight = ( (Float)(maxHeight) );
            		}
HXLINE( 539)		if (::hx::IsNotNull( this->_explicitWidth )) {
HXLINE( 540)			width = ( (Float)(this->_explicitWidth) );
            		}
            		else {
HXLINE( 542)			if ((width < minWidth)) {
HXLINE( 543)				width = minWidth;
            			}
            			else {
HXLINE( 544)				if (::hx::IsGreater( width,maxWidth )) {
HXLINE( 545)					width = ( (Float)(maxWidth) );
            				}
            			}
            		}
HXLINE( 548)		if (::hx::IsNotNull( this->_explicitHeight )) {
HXLINE( 549)			height = ( (Float)(this->_explicitHeight) );
            		}
            		else {
HXLINE( 551)			if ((height < minHeight)) {
HXLINE( 552)				height = minHeight;
            			}
            			else {
HXLINE( 553)				if (::hx::IsGreater( height,maxHeight )) {
HXLINE( 554)					height = ( (Float)(maxHeight) );
            				}
            			}
            		}
HXLINE( 558)		Float scaleX = this->get_scaleX();
HXLINE( 559)		if ((scaleX < ((Float)0.0))) {
HXLINE( 560)			scaleX = -(scaleX);
            		}
HXLINE( 562)		Float scaleY = this->get_scaleY();
HXLINE( 563)		if ((scaleY < ((Float)0.0))) {
HXLINE( 564)			scaleY = -(scaleY);
            		}
HXLINE( 567)		bool resized = false;
HXLINE( 568)		if ((this->actualWidth != width)) {
HXLINE( 569)			this->actualWidth = width;
HXLINE( 570)			resized = true;
            		}
HXLINE( 572)		if ((this->actualHeight != height)) {
HXLINE( 573)			this->actualHeight = height;
HXLINE( 574)			resized = true;
            		}
HXLINE( 576)		if ((this->actualMinWidth != minWidth)) {
HXLINE( 577)			this->actualMinWidth = minWidth;
HXLINE( 578)			resized = true;
            		}
HXLINE( 580)		if ((this->actualMinHeight != minHeight)) {
HXLINE( 581)			this->actualMinHeight = minHeight;
HXLINE( 582)			resized = true;
            		}
HXLINE( 584)		if (::hx::IsNotEq( this->actualMaxWidth,maxWidth )) {
HXLINE( 585)			this->actualMaxWidth = ( (Float)(maxWidth) );
HXLINE( 586)			resized = true;
            		}
HXLINE( 588)		if (::hx::IsNotEq( this->actualMaxHeight,maxHeight )) {
HXLINE( 589)			this->actualMaxHeight = ( (Float)(maxHeight) );
HXLINE( 590)			resized = true;
            		}
HXLINE( 593)		width = this->scaledActualWidth;
HXLINE( 594)		height = this->scaledActualHeight;
HXLINE( 595)		this->scaledActualWidth = (this->actualWidth * scaleX);
HXLINE( 596)		this->scaledActualHeight = (this->actualHeight * scaleY);
HXLINE( 597)		this->scaledActualMinWidth = (this->actualMinWidth * scaleX);
HXLINE( 598)		this->scaledActualMinHeight = (this->actualMinHeight * scaleY);
HXLINE( 599)		this->scaledActualMaxWidth = (this->actualMaxWidth * scaleX);
HXLINE( 600)		this->scaledActualMaxHeight = (this->actualMaxHeight * scaleY);
HXLINE( 601)		bool _hx_tmp4;
HXDLIN( 601)		if ((width == this->scaledActualWidth)) {
HXLINE( 601)			_hx_tmp4 = (height != this->scaledActualHeight);
            		}
            		else {
HXLINE( 601)			_hx_tmp4 = true;
            		}
HXDLIN( 601)		if (_hx_tmp4) {
HXLINE( 602)			resized = true;
HXLINE( 603)			::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("resize",f4,59,7b,08),null(),null());
            		}
HXLINE( 605)		return resized;
            	}


HX_DEFINE_DYNAMIC_FUNC6(MeasureSprite_obj,saveMeasurements,return )


::hx::ObjectPtr< MeasureSprite_obj > MeasureSprite_obj::__new() {
	::hx::ObjectPtr< MeasureSprite_obj > __this = new MeasureSprite_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MeasureSprite_obj > MeasureSprite_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MeasureSprite_obj *__this = (MeasureSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MeasureSprite_obj), true, "feathers.core.MeasureSprite"));
	*(void **)__this = MeasureSprite_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MeasureSprite_obj::MeasureSprite_obj()
{
}

void MeasureSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MeasureSprite);
	HX_MARK_MEMBER_NAME(actualWidth,"actualWidth");
	HX_MARK_MEMBER_NAME(actualHeight,"actualHeight");
	HX_MARK_MEMBER_NAME(actualMinWidth,"actualMinWidth");
	HX_MARK_MEMBER_NAME(actualMinHeight,"actualMinHeight");
	HX_MARK_MEMBER_NAME(actualMaxWidth,"actualMaxWidth");
	HX_MARK_MEMBER_NAME(actualMaxHeight,"actualMaxHeight");
	HX_MARK_MEMBER_NAME(scaledActualWidth,"scaledActualWidth");
	HX_MARK_MEMBER_NAME(scaledActualHeight,"scaledActualHeight");
	HX_MARK_MEMBER_NAME(scaledActualMinWidth,"scaledActualMinWidth");
	HX_MARK_MEMBER_NAME(scaledActualMinHeight,"scaledActualMinHeight");
	HX_MARK_MEMBER_NAME(scaledActualMaxWidth,"scaledActualMaxWidth");
	HX_MARK_MEMBER_NAME(scaledActualMaxHeight,"scaledActualMaxHeight");
	HX_MARK_MEMBER_NAME(_explicitWidth,"_explicitWidth");
	HX_MARK_MEMBER_NAME(_explicitHeight,"_explicitHeight");
	HX_MARK_MEMBER_NAME(_explicitMinWidth,"_explicitMinWidth");
	HX_MARK_MEMBER_NAME(_explicitMinHeight,"_explicitMinHeight");
	HX_MARK_MEMBER_NAME(_explicitMaxWidth,"_explicitMaxWidth");
	HX_MARK_MEMBER_NAME(_explicitMaxHeight,"_explicitMaxHeight");
	HX_MARK_MEMBER_NAME(_hx___getBoundsHelperMatrix1,"__getBoundsHelperMatrix1");
	HX_MARK_MEMBER_NAME(_hx___getBoundsHelperMatrix2,"__getBoundsHelperMatrix2");
	 ::feathers::core::ValidatingSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MeasureSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(actualWidth,"actualWidth");
	HX_VISIT_MEMBER_NAME(actualHeight,"actualHeight");
	HX_VISIT_MEMBER_NAME(actualMinWidth,"actualMinWidth");
	HX_VISIT_MEMBER_NAME(actualMinHeight,"actualMinHeight");
	HX_VISIT_MEMBER_NAME(actualMaxWidth,"actualMaxWidth");
	HX_VISIT_MEMBER_NAME(actualMaxHeight,"actualMaxHeight");
	HX_VISIT_MEMBER_NAME(scaledActualWidth,"scaledActualWidth");
	HX_VISIT_MEMBER_NAME(scaledActualHeight,"scaledActualHeight");
	HX_VISIT_MEMBER_NAME(scaledActualMinWidth,"scaledActualMinWidth");
	HX_VISIT_MEMBER_NAME(scaledActualMinHeight,"scaledActualMinHeight");
	HX_VISIT_MEMBER_NAME(scaledActualMaxWidth,"scaledActualMaxWidth");
	HX_VISIT_MEMBER_NAME(scaledActualMaxHeight,"scaledActualMaxHeight");
	HX_VISIT_MEMBER_NAME(_explicitWidth,"_explicitWidth");
	HX_VISIT_MEMBER_NAME(_explicitHeight,"_explicitHeight");
	HX_VISIT_MEMBER_NAME(_explicitMinWidth,"_explicitMinWidth");
	HX_VISIT_MEMBER_NAME(_explicitMinHeight,"_explicitMinHeight");
	HX_VISIT_MEMBER_NAME(_explicitMaxWidth,"_explicitMaxWidth");
	HX_VISIT_MEMBER_NAME(_explicitMaxHeight,"_explicitMaxHeight");
	HX_VISIT_MEMBER_NAME(_hx___getBoundsHelperMatrix1,"__getBoundsHelperMatrix1");
	HX_VISIT_MEMBER_NAME(_hx___getBoundsHelperMatrix2,"__getBoundsHelperMatrix2");
	 ::feathers::core::ValidatingSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MeasureSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"minWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minWidth() ); }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxWidth() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return ::hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return ::hx::Val( set_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"minHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_minHeight() ); }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_maxHeight() ); }
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return ::hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return ::hx::Val( set_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return ::hx::Val( set_scaleX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return ::hx::Val( set_scaleY_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetWidth") ) { return ::hx::Val( resetWidth_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"actualWidth") ) { return ::hx::Val( actualWidth ); }
		if (HX_FIELD_EQ(inName,"resetHeight") ) { return ::hx::Val( resetHeight_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"actualHeight") ) { return ::hx::Val( actualHeight ); }
		if (HX_FIELD_EQ(inName,"get_minWidth") ) { return ::hx::Val( get_minWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_minWidth") ) { return ::hx::Val( set_minWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxWidth") ) { return ::hx::Val( get_maxWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxWidth") ) { return ::hx::Val( set_maxWidth_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"explicitWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_explicitWidth() ); }
		if (HX_FIELD_EQ(inName,"get_minHeight") ) { return ::hx::Val( get_minHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_minHeight") ) { return ::hx::Val( set_minHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_maxHeight") ) { return ::hx::Val( get_maxHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxHeight") ) { return ::hx::Val( set_maxHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetMinWidth") ) { return ::hx::Val( resetMinWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetMaxWidth") ) { return ::hx::Val( resetMaxWidth_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"actualMinWidth") ) { return ::hx::Val( actualMinWidth ); }
		if (HX_FIELD_EQ(inName,"actualMaxWidth") ) { return ::hx::Val( actualMaxWidth ); }
		if (HX_FIELD_EQ(inName,"_explicitWidth") ) { return ::hx::Val( _explicitWidth ); }
		if (HX_FIELD_EQ(inName,"explicitHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_explicitHeight() ); }
		if (HX_FIELD_EQ(inName,"resetMinHeight") ) { return ::hx::Val( resetMinHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetMaxHeight") ) { return ::hx::Val( resetMaxHeight_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"actualMinHeight") ) { return ::hx::Val( actualMinHeight ); }
		if (HX_FIELD_EQ(inName,"actualMaxHeight") ) { return ::hx::Val( actualMaxHeight ); }
		if (HX_FIELD_EQ(inName,"_explicitHeight") ) { return ::hx::Val( _explicitHeight ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"explicitMinWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_explicitMinWidth() ); }
		if (HX_FIELD_EQ(inName,"explicitMaxWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_explicitMaxWidth() ); }
		if (HX_FIELD_EQ(inName,"saveMeasurements") ) { return ::hx::Val( saveMeasurements_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"scaledActualWidth") ) { return ::hx::Val( scaledActualWidth ); }
		if (HX_FIELD_EQ(inName,"get_explicitWidth") ) { return ::hx::Val( get_explicitWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_explicitWidth") ) { return ::hx::Val( set_explicitWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"_explicitMinWidth") ) { return ::hx::Val( _explicitMinWidth ); }
		if (HX_FIELD_EQ(inName,"explicitMinHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_explicitMinHeight() ); }
		if (HX_FIELD_EQ(inName,"_explicitMaxWidth") ) { return ::hx::Val( _explicitMaxWidth ); }
		if (HX_FIELD_EQ(inName,"explicitMaxHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_explicitMaxHeight() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"scaledActualHeight") ) { return ::hx::Val( scaledActualHeight ); }
		if (HX_FIELD_EQ(inName,"get_explicitHeight") ) { return ::hx::Val( get_explicitHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_explicitHeight") ) { return ::hx::Val( set_explicitHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"_explicitMinHeight") ) { return ::hx::Val( _explicitMinHeight ); }
		if (HX_FIELD_EQ(inName,"_explicitMaxHeight") ) { return ::hx::Val( _explicitMaxHeight ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"scaledActualMinWidth") ) { return ::hx::Val( scaledActualMinWidth ); }
		if (HX_FIELD_EQ(inName,"scaledActualMaxWidth") ) { return ::hx::Val( scaledActualMaxWidth ); }
		if (HX_FIELD_EQ(inName,"get_explicitMinWidth") ) { return ::hx::Val( get_explicitMinWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_explicitMinWidth") ) { return ::hx::Val( set_explicitMinWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_explicitMaxWidth") ) { return ::hx::Val( get_explicitMaxWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_explicitMaxWidth") ) { return ::hx::Val( set_explicitMaxWidth_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"scaledActualMinHeight") ) { return ::hx::Val( scaledActualMinHeight ); }
		if (HX_FIELD_EQ(inName,"scaledActualMaxHeight") ) { return ::hx::Val( scaledActualMaxHeight ); }
		if (HX_FIELD_EQ(inName,"get_explicitMinHeight") ) { return ::hx::Val( get_explicitMinHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_explicitMinHeight") ) { return ::hx::Val( set_explicitMinHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_explicitMaxHeight") ) { return ::hx::Val( get_explicitMaxHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_explicitMaxHeight") ) { return ::hx::Val( set_explicitMaxHeight_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__getBoundsHelperMatrix1") ) { return ::hx::Val( _hx___getBoundsHelperMatrix1 ); }
		if (HX_FIELD_EQ(inName,"__getBoundsHelperMatrix2") ) { return ::hx::Val( _hx___getBoundsHelperMatrix2 ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MeasureSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"minWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_minWidth(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"maxWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxWidth(inValue.Cast< Float >()) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"minHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_minHeight(inValue.Cast< Float >()) ); }
		if (HX_FIELD_EQ(inName,"maxHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxHeight(inValue.Cast< Float >()) ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"actualWidth") ) { actualWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"actualHeight") ) { actualHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"explicitWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_explicitWidth(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"actualMinWidth") ) { actualMinWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actualMaxWidth") ) { actualMaxWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explicitWidth") ) { _explicitWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"explicitHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_explicitHeight(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"actualMinHeight") ) { actualMinHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actualMaxHeight") ) { actualMaxHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explicitHeight") ) { _explicitHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"explicitMinWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_explicitMinWidth(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"explicitMaxWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_explicitMaxWidth(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"scaledActualWidth") ) { scaledActualWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explicitMinWidth") ) { _explicitMinWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"explicitMinHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_explicitMinHeight(inValue.Cast<  ::Dynamic >()) ); }
		if (HX_FIELD_EQ(inName,"_explicitMaxWidth") ) { _explicitMaxWidth=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"explicitMaxHeight") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_explicitMaxHeight(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"scaledActualHeight") ) { scaledActualHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explicitMinHeight") ) { _explicitMinHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explicitMaxHeight") ) { _explicitMaxHeight=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"scaledActualMinWidth") ) { scaledActualMinWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaledActualMaxWidth") ) { scaledActualMaxWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"scaledActualMinHeight") ) { scaledActualMinHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaledActualMaxHeight") ) { scaledActualMaxHeight=inValue.Cast< Float >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__getBoundsHelperMatrix1") ) { _hx___getBoundsHelperMatrix1=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__getBoundsHelperMatrix2") ) { _hx___getBoundsHelperMatrix2=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MeasureSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("actualWidth",98,d8,41,38));
	outFields->push(HX_("actualHeight",15,25,ab,b7));
	outFields->push(HX_("actualMinWidth",c2,67,dd,e2));
	outFields->push(HX_("actualMinHeight",ab,da,2c,55));
	outFields->push(HX_("actualMaxWidth",70,4d,c3,95));
	outFields->push(HX_("actualMaxHeight",3d,ed,6f,2b));
	outFields->push(HX_("scaledActualWidth",1e,b8,ca,bf));
	outFields->push(HX_("scaledActualHeight",cf,da,e5,c7));
	outFields->push(HX_("scaledActualMinWidth",fc,7f,7c,7f));
	outFields->push(HX_("scaledActualMinHeight",31,f5,c2,c3));
	outFields->push(HX_("scaledActualMaxWidth",aa,65,62,32));
	outFields->push(HX_("scaledActualMaxHeight",c3,07,06,9a));
	outFields->push(HX_("_explicitWidth",b3,3e,82,86));
	outFields->push(HX_("explicitWidth",72,4e,30,48));
	outFields->push(HX_("_explicitHeight",9a,16,c4,e1));
	outFields->push(HX_("explicitHeight",fb,cd,63,98));
	outFields->push(HX_("_explicitMinWidth",87,84,39,7a));
	outFields->push(HX_("explicitMinWidth",28,96,be,e1));
	outFields->push(HX_("_explicitMinHeight",46,ea,69,2e));
	outFields->push(HX_("explicitMinHeight",85,45,54,5b));
	outFields->push(HX_("minWidth",14,23,9a,c1));
	outFields->push(HX_("minHeight",19,07,94,5b));
	outFields->push(HX_("_explicitMaxWidth",35,6a,1f,2d));
	outFields->push(HX_("explicitMaxWidth",d6,7b,a4,94));
	outFields->push(HX_("_explicitMaxHeight",d8,fc,ac,04));
	outFields->push(HX_("explicitMaxHeight",17,58,97,31));
	outFields->push(HX_("maxWidth",c2,08,80,74));
	outFields->push(HX_("maxHeight",ab,19,d7,31));
	outFields->push(HX_("__getBoundsHelperMatrix1",77,d3,a5,73));
	outFields->push(HX_("__getBoundsHelperMatrix2",78,d3,a5,73));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MeasureSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,actualWidth),HX_("actualWidth",98,d8,41,38)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,actualHeight),HX_("actualHeight",15,25,ab,b7)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,actualMinWidth),HX_("actualMinWidth",c2,67,dd,e2)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,actualMinHeight),HX_("actualMinHeight",ab,da,2c,55)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,actualMaxWidth),HX_("actualMaxWidth",70,4d,c3,95)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,actualMaxHeight),HX_("actualMaxHeight",3d,ed,6f,2b)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,scaledActualWidth),HX_("scaledActualWidth",1e,b8,ca,bf)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,scaledActualHeight),HX_("scaledActualHeight",cf,da,e5,c7)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,scaledActualMinWidth),HX_("scaledActualMinWidth",fc,7f,7c,7f)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,scaledActualMinHeight),HX_("scaledActualMinHeight",31,f5,c2,c3)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,scaledActualMaxWidth),HX_("scaledActualMaxWidth",aa,65,62,32)},
	{::hx::fsFloat,(int)offsetof(MeasureSprite_obj,scaledActualMaxHeight),HX_("scaledActualMaxHeight",c3,07,06,9a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MeasureSprite_obj,_explicitWidth),HX_("_explicitWidth",b3,3e,82,86)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MeasureSprite_obj,_explicitHeight),HX_("_explicitHeight",9a,16,c4,e1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MeasureSprite_obj,_explicitMinWidth),HX_("_explicitMinWidth",87,84,39,7a)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MeasureSprite_obj,_explicitMinHeight),HX_("_explicitMinHeight",46,ea,69,2e)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MeasureSprite_obj,_explicitMaxWidth),HX_("_explicitMaxWidth",35,6a,1f,2d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MeasureSprite_obj,_explicitMaxHeight),HX_("_explicitMaxHeight",d8,fc,ac,04)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(MeasureSprite_obj,_hx___getBoundsHelperMatrix1),HX_("__getBoundsHelperMatrix1",77,d3,a5,73)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(MeasureSprite_obj,_hx___getBoundsHelperMatrix2),HX_("__getBoundsHelperMatrix2",78,d3,a5,73)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MeasureSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String MeasureSprite_obj_sMemberFields[] = {
	HX_("actualWidth",98,d8,41,38),
	HX_("actualHeight",15,25,ab,b7),
	HX_("actualMinWidth",c2,67,dd,e2),
	HX_("actualMinHeight",ab,da,2c,55),
	HX_("actualMaxWidth",70,4d,c3,95),
	HX_("actualMaxHeight",3d,ed,6f,2b),
	HX_("scaledActualWidth",1e,b8,ca,bf),
	HX_("scaledActualHeight",cf,da,e5,c7),
	HX_("scaledActualMinWidth",fc,7f,7c,7f),
	HX_("scaledActualMinHeight",31,f5,c2,c3),
	HX_("scaledActualMaxWidth",aa,65,62,32),
	HX_("scaledActualMaxHeight",c3,07,06,9a),
	HX_("get_width",5d,12,0c,0e),
	HX_("set_width",69,fe,5c,f1),
	HX_("get_height",b0,77,d3,f2),
	HX_("set_height",24,16,51,f6),
	HX_("set_scaleX",cb,f8,2a,30),
	HX_("set_scaleY",cc,f8,2a,30),
	HX_("_explicitWidth",b3,3e,82,86),
	HX_("get_explicitWidth",c9,59,a0,4e),
	HX_("set_explicitWidth",d5,31,0e,72),
	HX_("_explicitHeight",9a,16,c4,e1),
	HX_("get_explicitHeight",c4,ae,fd,33),
	HX_("set_explicitHeight",38,e1,ac,10),
	HX_("_explicitMinWidth",87,84,39,7a),
	HX_("get_explicitMinWidth",31,fb,28,00),
	HX_("set_explicitMinWidth",a5,b2,e0,cc),
	HX_("_explicitMinHeight",46,ea,69,2e),
	HX_("get_explicitMinHeight",5c,48,02,da),
	HX_("set_explicitMinHeight",68,16,0b,2e),
	HX_("get_minWidth",1d,d7,b3,76),
	HX_("set_minWidth",91,fa,ac,8b),
	HX_("get_minHeight",f0,da,f7,1c),
	HX_("set_minHeight",fc,bc,fd,61),
	HX_("_explicitMaxWidth",35,6a,1f,2d),
	HX_("get_explicitMaxWidth",df,e0,0e,b3),
	HX_("set_explicitMaxWidth",53,98,c6,7f),
	HX_("_explicitMaxHeight",d8,fc,ac,04),
	HX_("get_explicitMaxHeight",ee,5a,45,b0),
	HX_("set_explicitMaxHeight",fa,28,4e,04),
	HX_("get_maxWidth",cb,bc,99,29),
	HX_("set_maxWidth",3f,e0,92,3e),
	HX_("get_maxHeight",82,ed,3a,f3),
	HX_("set_maxHeight",8e,cf,40,38),
	HX_("resetWidth",b7,ed,fe,b2),
	HX_("resetHeight",16,8b,60,a2),
	HX_("resetMinWidth",03,10,39,f2),
	HX_("resetMinHeight",4a,6b,04,b6),
	HX_("resetMaxWidth",b1,f5,1e,a5),
	HX_("resetMaxHeight",dc,7d,47,8c),
	HX_("__getBoundsHelperMatrix1",77,d3,a5,73),
	HX_("__getBoundsHelperMatrix2",78,d3,a5,73),
	HX_("getBounds",ab,0f,74,e2),
	HX_("saveMeasurements",d4,f3,39,7c),
	::String(null()) };

::hx::Class MeasureSprite_obj::__mClass;

void MeasureSprite_obj::__register()
{
	MeasureSprite_obj _hx_dummy;
	MeasureSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.MeasureSprite",52,db,41,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MeasureSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MeasureSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MeasureSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MeasureSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
