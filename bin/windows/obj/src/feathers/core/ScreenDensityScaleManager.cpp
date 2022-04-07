#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_feathers_core_IScaleManager
#include <feathers/core/IScaleManager.h>
#endif
#ifndef INCLUDED_feathers_core_ScreenDensityScaleManager
#include <feathers/core/ScreenDensityScaleManager.h>
#endif
#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_feathers_utils_MathUtil
#include <feathers/utils/MathUtil.h>
#endif
#ifndef INCLUDED_feathers_utils_ScreenDensityScaleCalculator
#include <feathers/utils/ScreenDensityScaleCalculator.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
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
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_46c206bc133d7389_35_new,"feathers.core.ScreenDensityScaleManager","new",0x3e7098c0,"feathers.core.ScreenDensityScaleManager.new","feathers/core/ScreenDensityScaleManager.hx",35,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_48_get_target,"feathers.core.ScreenDensityScaleManager","get_target",0x50eb66ba,"feathers.core.ScreenDensityScaleManager.get_target","feathers/core/ScreenDensityScaleManager.hx",48,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_51_set_target,"feathers.core.ScreenDensityScaleManager","set_target",0x5469052e,"feathers.core.ScreenDensityScaleManager.set_target","feathers/core/ScreenDensityScaleManager.hx",51,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_75_getScale,"feathers.core.ScreenDensityScaleManager","getScale",0xb776b9b4,"feathers.core.ScreenDensityScaleManager.getScale","feathers/core/ScreenDensityScaleManager.hx",75,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_107_getBounds,"feathers.core.ScreenDensityScaleManager","getBounds",0xfa63600b,"feathers.core.ScreenDensityScaleManager.getBounds","feathers/core/ScreenDensityScaleManager.hx",107,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_130_addTargetStageListeners,"feathers.core.ScreenDensityScaleManager","addTargetStageListeners",0x100ab333,"feathers.core.ScreenDensityScaleManager.addTargetStageListeners","feathers/core/ScreenDensityScaleManager.hx",130,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_137_removeTargetStageListeners,"feathers.core.ScreenDensityScaleManager","removeTargetStageListeners",0xb2a26c16,"feathers.core.ScreenDensityScaleManager.removeTargetStageListeners","feathers/core/ScreenDensityScaleManager.hx",137,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_145_screenDensityScaleManager_target_addedToStageHandler,"feathers.core.ScreenDensityScaleManager","screenDensityScaleManager_target_addedToStageHandler",0xbdb3d299,"feathers.core.ScreenDensityScaleManager.screenDensityScaleManager_target_addedToStageHandler","feathers/core/ScreenDensityScaleManager.hx",145,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_149_screenDensityScaleManager_target_removedFromStageHandler,"feathers.core.ScreenDensityScaleManager","screenDensityScaleManager_target_removedFromStageHandler",0x495b20e8,"feathers.core.ScreenDensityScaleManager.screenDensityScaleManager_target_removedFromStageHandler","feathers/core/ScreenDensityScaleManager.hx",149,0xf525eb10)
HX_LOCAL_STACK_FRAME(_hx_pos_46c206bc133d7389_153_screenDensityScaleManager_stage_resizeHandler,"feathers.core.ScreenDensityScaleManager","screenDensityScaleManager_stage_resizeHandler",0x89530995,"feathers.core.ScreenDensityScaleManager.screenDensityScaleManager_stage_resizeHandler","feathers/core/ScreenDensityScaleManager.hx",153,0xf525eb10)
namespace feathers{
namespace core{

void ScreenDensityScaleManager_obj::__construct( ::feathers::utils::ScreenDensityScaleCalculator scaler){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_35_new)
HXLINE(  36)		super::__construct(null());
HXLINE(  37)		this->_scaler = scaler;
            	}

Dynamic ScreenDensityScaleManager_obj::__CreateEmpty() { return new ScreenDensityScaleManager_obj; }

void *ScreenDensityScaleManager_obj::_hx_vtable = 0;

Dynamic ScreenDensityScaleManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScreenDensityScaleManager_obj > _hx_result = new ScreenDensityScaleManager_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScreenDensityScaleManager_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
	} else {
		return inClassId==(int)0x4a0f5acc;
	}
}

static ::openfl::events::IEventDispatcher_obj _hx_feathers_core_ScreenDensityScaleManager__hx_openfl_events_IEventDispatcher= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::core::ScreenDensityScaleManager_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::core::ScreenDensityScaleManager_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::core::ScreenDensityScaleManager_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::core::ScreenDensityScaleManager_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::core::ScreenDensityScaleManager_obj::willTrigger,
};

static ::feathers::core::IScaleManager_obj _hx_feathers_core_ScreenDensityScaleManager__hx_feathers_core_IScaleManager= {
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ,::hx::Null< int > ,::hx::Null< bool > ))&::feathers::core::ScreenDensityScaleManager_obj::addEventListener,
	( bool (::hx::Object::*)( ::openfl::events::Event))&::feathers::core::ScreenDensityScaleManager_obj::dispatchEvent,
	( bool (::hx::Object::*)(::String))&::feathers::core::ScreenDensityScaleManager_obj::hasEventListener,
	( void (::hx::Object::*)(::String, ::Dynamic,::hx::Null< bool > ))&::feathers::core::ScreenDensityScaleManager_obj::removeEventListener,
	( bool (::hx::Object::*)(::String))&::feathers::core::ScreenDensityScaleManager_obj::willTrigger,
	(  ::openfl::display::DisplayObject (::hx::Object::*)())&::feathers::core::ScreenDensityScaleManager_obj::get_target,
	(  ::openfl::display::DisplayObject (::hx::Object::*)( ::openfl::display::DisplayObject))&::feathers::core::ScreenDensityScaleManager_obj::set_target,
	( Float (::hx::Object::*)())&::feathers::core::ScreenDensityScaleManager_obj::getScale,
	(  ::openfl::geom::Rectangle (::hx::Object::*)())&::feathers::core::ScreenDensityScaleManager_obj::getBounds,
};

void *ScreenDensityScaleManager_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x87530281: return &_hx_feathers_core_ScreenDensityScaleManager__hx_openfl_events_IEventDispatcher;
		case (int)0x75896bfd: return &_hx_feathers_core_ScreenDensityScaleManager__hx_feathers_core_IScaleManager;
	}
	return super::_hx_getInterface(inHash);
}

 ::openfl::display::DisplayObject ScreenDensityScaleManager_obj::get_target(){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_48_get_target)
HXDLIN(  48)		return this->_target;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenDensityScaleManager_obj,get_target,return )

 ::openfl::display::DisplayObject ScreenDensityScaleManager_obj::set_target( ::openfl::display::DisplayObject value){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_51_set_target)
HXLINE(  52)		if (::hx::IsInstanceEq( this->_target,value )) {
HXLINE(  53)			return this->_target;
            		}
HXLINE(  55)		if (::hx::IsNotNull( this->_target )) {
HXLINE(  56)			this->removeTargetStageListeners();
HXLINE(  57)			this->_target->removeEventListener(HX_("addedToStage",63,22,55,0c),this->screenDensityScaleManager_target_addedToStageHandler_dyn(),null());
HXLINE(  58)			this->_target->removeEventListener(HX_("removedFromStage",34,21,76,ba),this->screenDensityScaleManager_target_removedFromStageHandler_dyn(),null());
            		}
HXLINE(  60)		this->_target = value;
HXLINE(  61)		if (::hx::IsNotNull( this->_target )) {
HXLINE(  62)			this->_target->addEventListener(HX_("addedToStage",63,22,55,0c),this->screenDensityScaleManager_target_addedToStageHandler_dyn(),false,0,true);
HXLINE(  63)			this->_target->addEventListener(HX_("removedFromStage",34,21,76,ba),this->screenDensityScaleManager_target_removedFromStageHandler_dyn(),false,0,true);
HXLINE(  64)			this->addTargetStageListeners();
            		}
HXLINE(  66)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
HXLINE(  67)		return this->_target;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenDensityScaleManager_obj,set_target,return )

Float ScreenDensityScaleManager_obj::getScale(){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_75_getScale)
HXLINE(  76)		Float result = ((Float)1.0);
HXLINE(  77)		if (::hx::IsNull( this->_target )) {
HXLINE(  78)			return result;
            		}
HXLINE(  81)		result = this->_target->stage->window->_hx___scale;
HXLINE( 101)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenDensityScaleManager_obj,getScale,return )

 ::openfl::geom::Rectangle ScreenDensityScaleManager_obj::getBounds(){
            	HX_GC_STACKFRAME(&_hx_pos_46c206bc133d7389_107_getBounds)
HXLINE( 108)		 ::openfl::geom::Rectangle bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 109)		if (::hx::IsNull( this->_target )) {
HXLINE( 110)			return bounds;
            		}
HXLINE( 112)		 ::openfl::display::Stage stage = this->_target->stage;
HXLINE( 113)		if (::hx::IsNull( stage )) {
HXLINE( 114)			return bounds;
            		}
HXLINE( 116)		Float needsToBeDivisibleByTwo = ::Math_obj::ffloor(this->_target->get_scaleX());
HXDLIN( 116)		bool needsToBeDivisibleByTwo1 = (needsToBeDivisibleByTwo != this->_target->get_scaleX());
HXLINE( 117)		Float appWidth = ::Math_obj::ffloor(( (Float)(stage->stageWidth) ));
HXLINE( 118)		if (needsToBeDivisibleByTwo1) {
HXLINE( 119)			appWidth = ::feathers::utils::MathUtil_obj::roundDownToNearest(appWidth,2);
            		}
HXLINE( 121)		bounds->width = appWidth;
HXLINE( 122)		Float appHeight = ::Math_obj::ffloor(( (Float)(stage->stageHeight) ));
HXLINE( 123)		if (needsToBeDivisibleByTwo1) {
HXLINE( 124)			appHeight = ::feathers::utils::MathUtil_obj::roundDownToNearest(appHeight,2);
            		}
HXLINE( 126)		bounds->height = appHeight;
HXLINE( 127)		return bounds;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenDensityScaleManager_obj,getBounds,return )

void ScreenDensityScaleManager_obj::addTargetStageListeners(){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_130_addTargetStageListeners)
HXLINE( 131)		bool _hx_tmp;
HXDLIN( 131)		if (::hx::IsNotNull( this->_target )) {
HXLINE( 131)			_hx_tmp = ::hx::IsNull( this->_target->stage );
            		}
            		else {
HXLINE( 131)			_hx_tmp = true;
            		}
HXDLIN( 131)		if (_hx_tmp) {
HXLINE( 132)			return;
            		}
HXLINE( 134)		this->_target->stage->addEventListener(HX_("resize",f4,59,7b,08),this->screenDensityScaleManager_stage_resizeHandler_dyn(),false,0,true);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenDensityScaleManager_obj,addTargetStageListeners,(void))

void ScreenDensityScaleManager_obj::removeTargetStageListeners(){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_137_removeTargetStageListeners)
HXLINE( 138)		bool _hx_tmp;
HXDLIN( 138)		if (::hx::IsNotNull( this->_target )) {
HXLINE( 138)			_hx_tmp = ::hx::IsNull( this->_target->stage );
            		}
            		else {
HXLINE( 138)			_hx_tmp = true;
            		}
HXDLIN( 138)		if (_hx_tmp) {
HXLINE( 139)			return;
            		}
HXLINE( 141)		this->_target->stage->removeEventListener(HX_("resize",f4,59,7b,08),this->screenDensityScaleManager_stage_resizeHandler_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ScreenDensityScaleManager_obj,removeTargetStageListeners,(void))

void ScreenDensityScaleManager_obj::screenDensityScaleManager_target_addedToStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_145_screenDensityScaleManager_target_addedToStageHandler)
HXDLIN( 145)		this->addTargetStageListeners();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenDensityScaleManager_obj,screenDensityScaleManager_target_addedToStageHandler,(void))

void ScreenDensityScaleManager_obj::screenDensityScaleManager_target_removedFromStageHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_149_screenDensityScaleManager_target_removedFromStageHandler)
HXDLIN( 149)		this->removeTargetStageListeners();
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenDensityScaleManager_obj,screenDensityScaleManager_target_removedFromStageHandler,(void))

void ScreenDensityScaleManager_obj::screenDensityScaleManager_stage_resizeHandler( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_46c206bc133d7389_153_screenDensityScaleManager_stage_resizeHandler)
HXDLIN( 153)		::feathers::events::FeathersEvent_obj::dispatch(::hx::ObjectPtr<OBJ_>(this),HX_("change",70,91,72,b7),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ScreenDensityScaleManager_obj,screenDensityScaleManager_stage_resizeHandler,(void))


::hx::ObjectPtr< ScreenDensityScaleManager_obj > ScreenDensityScaleManager_obj::__new( ::feathers::utils::ScreenDensityScaleCalculator scaler) {
	::hx::ObjectPtr< ScreenDensityScaleManager_obj > __this = new ScreenDensityScaleManager_obj();
	__this->__construct(scaler);
	return __this;
}

::hx::ObjectPtr< ScreenDensityScaleManager_obj > ScreenDensityScaleManager_obj::__alloc(::hx::Ctx *_hx_ctx, ::feathers::utils::ScreenDensityScaleCalculator scaler) {
	ScreenDensityScaleManager_obj *__this = (ScreenDensityScaleManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScreenDensityScaleManager_obj), true, "feathers.core.ScreenDensityScaleManager"));
	*(void **)__this = ScreenDensityScaleManager_obj::_hx_vtable;
	__this->__construct(scaler);
	return __this;
}

ScreenDensityScaleManager_obj::ScreenDensityScaleManager_obj()
{
}

void ScreenDensityScaleManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScreenDensityScaleManager);
	HX_MARK_MEMBER_NAME(_target,"_target");
	HX_MARK_MEMBER_NAME(_scaler,"_scaler");
	 ::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScreenDensityScaleManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_target,"_target");
	HX_VISIT_MEMBER_NAME(_scaler,"_scaler");
	 ::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ScreenDensityScaleManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_target() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { return ::hx::Val( _target ); }
		if (HX_FIELD_EQ(inName,"_scaler") ) { return ::hx::Val( _scaler ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getScale") ) { return ::hx::Val( getScale_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBounds") ) { return ::hx::Val( getBounds_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_target") ) { return ::hx::Val( get_target_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_target") ) { return ::hx::Val( set_target_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"addTargetStageListeners") ) { return ::hx::Val( addTargetStageListeners_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"removeTargetStageListeners") ) { return ::hx::Val( removeTargetStageListeners_dyn() ); }
		break;
	case 45:
		if (HX_FIELD_EQ(inName,"screenDensityScaleManager_stage_resizeHandler") ) { return ::hx::Val( screenDensityScaleManager_stage_resizeHandler_dyn() ); }
		break;
	case 52:
		if (HX_FIELD_EQ(inName,"screenDensityScaleManager_target_addedToStageHandler") ) { return ::hx::Val( screenDensityScaleManager_target_addedToStageHandler_dyn() ); }
		break;
	case 56:
		if (HX_FIELD_EQ(inName,"screenDensityScaleManager_target_removedFromStageHandler") ) { return ::hx::Val( screenDensityScaleManager_target_removedFromStageHandler_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ScreenDensityScaleManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_target(inValue.Cast<  ::openfl::display::DisplayObject >()) ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scaler") ) { _scaler=inValue.Cast<  ::feathers::utils::ScreenDensityScaleCalculator >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenDensityScaleManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_target",f0,04,64,f5));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("_scaler",47,fc,9c,aa));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ScreenDensityScaleManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(ScreenDensityScaleManager_obj,_target),HX_("_target",f0,04,64,f5)},
	{::hx::fsObject /*  ::feathers::utils::ScreenDensityScaleCalculator */ ,(int)offsetof(ScreenDensityScaleManager_obj,_scaler),HX_("_scaler",47,fc,9c,aa)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ScreenDensityScaleManager_obj_sStaticStorageInfo = 0;
#endif

static ::String ScreenDensityScaleManager_obj_sMemberFields[] = {
	HX_("_target",f0,04,64,f5),
	HX_("get_target",1a,63,74,77),
	HX_("set_target",8e,01,f2,7a),
	HX_("_scaler",47,fc,9c,aa),
	HX_("getScale",14,de,a5,d8),
	HX_("getBounds",ab,0f,74,e2),
	HX_("addTargetStageListeners",d3,7a,93,13),
	HX_("removeTargetStageListeners",76,28,52,87),
	HX_("screenDensityScaleManager_target_addedToStageHandler",f9,86,e5,60),
	HX_("screenDensityScaleManager_target_removedFromStageHandler",48,85,ee,3f),
	HX_("screenDensityScaleManager_stage_resizeHandler",35,89,a6,0c),
	::String(null()) };

::hx::Class ScreenDensityScaleManager_obj::__mClass;

void ScreenDensityScaleManager_obj::__register()
{
	ScreenDensityScaleManager_obj _hx_dummy;
	ScreenDensityScaleManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.core.ScreenDensityScaleManager",ce,78,0d,63);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScreenDensityScaleManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScreenDensityScaleManager_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScreenDensityScaleManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScreenDensityScaleManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace feathers
} // end namespace core
