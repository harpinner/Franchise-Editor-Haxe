#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_145_new,"openfl.display.Sprite","new",0x3ff0c061,"openfl.display.Sprite.new","openfl/display/Sprite.hx",145,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_175_startDrag,"openfl.display.Sprite","startDrag",0x20ea0c37,"openfl.display.Sprite.startDrag","openfl/display/Sprite.hx",175,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_216_stopDrag,"openfl.display.Sprite","stopDrag",0x4d02dd75,"openfl.display.Sprite.stopDrag","openfl/display/Sprite.hx",216,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_237___getCursor,"openfl.display.Sprite","__getCursor",0x4a69b9ed,"openfl.display.Sprite.__getCursor","openfl/display/Sprite.hx",237,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_242___hitTest,"openfl.display.Sprite","__hitTest",0x895417e6,"openfl.display.Sprite.__hitTest","openfl/display/Sprite.hx",242,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_281___hitTestHitArea,"openfl.display.Sprite","__hitTestHitArea",0x980a9c3a,"openfl.display.Sprite.__hitTestHitArea","openfl/display/Sprite.hx",281,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_303___hitTestMask,"openfl.display.Sprite","__hitTestMask",0x9c046ff2,"openfl.display.Sprite.__hitTestMask","openfl/display/Sprite.hx",303,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_318_get_graphics,"openfl.display.Sprite","get_graphics",0x451134b3,"openfl.display.Sprite.get_graphics","openfl/display/Sprite.hx",318,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_329_get_tabEnabled,"openfl.display.Sprite","get_tabEnabled",0x5c66fc94,"openfl.display.Sprite.get_tabEnabled","openfl/display/Sprite.hx",329,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_334_get_buttonMode,"openfl.display.Sprite","get_buttonMode",0xceb5485d,"openfl.display.Sprite.get_buttonMode","openfl/display/Sprite.hx",334,0xd5438ced)
HX_LOCAL_STACK_FRAME(_hx_pos_781fdaae6ecb7a58_339_set_buttonMode,"openfl.display.Sprite","set_buttonMode",0xeed530d1,"openfl.display.Sprite.set_buttonMode","openfl/display/Sprite.hx",339,0xd5438ced)
namespace openfl{
namespace display{

void Sprite_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_145_new)
HXLINE( 146)		super::__construct();
HXLINE( 148)		this->_hx___drawableType = 4;
HXLINE( 149)		this->_hx___buttonMode = false;
HXLINE( 150)		this->useHandCursor = true;
            	}

Dynamic Sprite_obj::__CreateEmpty() { return new Sprite_obj; }

void *Sprite_obj::_hx_vtable = 0;

Dynamic Sprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Sprite_obj > _hx_result = new Sprite_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Sprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417;
		}
	} else {
		return inClassId==(int)0x4af7dd8e || inClassId==(int)0x6b353933;
	}
}

void Sprite_obj::startDrag(::hx::Null< bool >  __o_lockCenter, ::openfl::geom::Rectangle bounds){
            		bool lockCenter = __o_lockCenter.Default(false);
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_175_startDrag)
HXDLIN( 175)		if (::hx::IsNotNull( this->stage )) {
HXLINE( 177)			this->stage->_hx___startDrag(::hx::ObjectPtr<OBJ_>(this),lockCenter,bounds);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Sprite_obj,startDrag,(void))

void Sprite_obj::stopDrag(){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_216_stopDrag)
HXDLIN( 216)		if (::hx::IsNotNull( this->stage )) {
HXLINE( 218)			this->stage->_hx___stopDrag(::hx::ObjectPtr<OBJ_>(this));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,stopDrag,(void))

::String Sprite_obj::_hx___getCursor(){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_237___getCursor)
HXDLIN( 237)		bool _hx_tmp;
HXDLIN( 237)		if (this->_hx___buttonMode) {
HXDLIN( 237)			_hx_tmp = this->useHandCursor;
            		}
            		else {
HXDLIN( 237)			_hx_tmp = false;
            		}
HXDLIN( 237)		if (_hx_tmp) {
HXDLIN( 237)			return HX_("button",f2,61,e0,d9);
            		}
            		else {
HXDLIN( 237)			return null();
            		}
HXDLIN( 237)		return null();
            	}


bool Sprite_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_242___hitTest)
HXLINE( 243)		bool _hx_tmp;
HXDLIN( 243)		bool _hx_tmp1;
HXDLIN( 243)		if (interactiveOnly) {
HXLINE( 243)			_hx_tmp1 = !(this->mouseEnabled);
            		}
            		else {
HXLINE( 243)			_hx_tmp1 = false;
            		}
HXDLIN( 243)		if (_hx_tmp1) {
HXLINE( 243)			_hx_tmp = !(this->mouseChildren);
            		}
            		else {
HXLINE( 243)			_hx_tmp = false;
            		}
HXDLIN( 243)		if (_hx_tmp) {
HXLINE( 243)			return false;
            		}
HXLINE( 244)		bool _hx_tmp2;
HXDLIN( 244)		if (hitObject->get_visible()) {
HXLINE( 244)			_hx_tmp2 = this->_hx___isMask;
            		}
            		else {
HXLINE( 244)			_hx_tmp2 = true;
            		}
HXDLIN( 244)		if (_hx_tmp2) {
HXLINE( 244)			return this->_hx___hitTestHitArea(x,y,shapeFlag,stack,interactiveOnly,hitObject);
            		}
HXLINE( 245)		bool _hx_tmp3;
HXDLIN( 245)		if (::hx::IsNotNull( this->get_mask() )) {
HXLINE( 245)			_hx_tmp3 = !(this->get_mask()->_hx___hitTestMask(x,y));
            		}
            		else {
HXLINE( 245)			_hx_tmp3 = false;
            		}
HXDLIN( 245)		if (_hx_tmp3) {
HXLINE( 245)			return this->_hx___hitTestHitArea(x,y,shapeFlag,stack,interactiveOnly,hitObject);
            		}
HXLINE( 247)		if (::hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE( 249)			 ::openfl::geom::Point point = ::openfl::geom::Point_obj::_hx___pool->get().StaticCast<  ::openfl::geom::Point >();
HXLINE( 250)			point->setTo(x,y);
HXLINE( 251)			{
HXLINE( 251)				 ::openfl::geom::Matrix _this = this->_hx___getRenderTransform();
HXDLIN( 251)				Float norm = ((_this->a * _this->d) - (_this->b * _this->c));
HXDLIN( 251)				if ((norm == 0)) {
HXLINE( 251)					point->x = -(_this->tx);
HXDLIN( 251)					point->y = -(_this->ty);
            				}
            				else {
HXLINE( 251)					Float px = ((((Float)1.0) / norm) * ((_this->c * (_this->ty - point->y)) + (_this->d * (point->x - _this->tx))));
HXDLIN( 251)					point->y = ((((Float)1.0) / norm) * ((_this->a * (point->y - _this->ty)) + (_this->b * (_this->tx - point->x))));
HXDLIN( 251)					point->x = px;
            				}
            			}
HXLINE( 253)			if (!(this->_hx___scrollRect->containsPoint(point))) {
HXLINE( 255)				::openfl::geom::Point_obj::_hx___pool->release(point);
HXLINE( 256)				return this->_hx___hitTestHitArea(x,y,shapeFlag,stack,true,hitObject);
            			}
HXLINE( 259)			::openfl::geom::Point_obj::_hx___pool->release(point);
            		}
HXLINE( 262)		if (this->super::_hx___hitTest(x,y,shapeFlag,stack,interactiveOnly,hitObject)) {
HXLINE( 264)			if (::hx::IsNotNull( stack )) {
HXLINE( 264)				return interactiveOnly;
            			}
            			else {
HXLINE( 264)				return true;
            			}
            		}
            		else {
HXLINE( 266)			bool _hx_tmp;
HXDLIN( 266)			bool _hx_tmp1;
HXDLIN( 266)			if (::hx::IsNull( this->hitArea )) {
HXLINE( 266)				_hx_tmp1 = ::hx::IsNotNull( this->_hx___graphics );
            			}
            			else {
HXLINE( 266)				_hx_tmp1 = false;
            			}
HXDLIN( 266)			if (_hx_tmp1) {
HXLINE( 266)				 ::openfl::display::Graphics _hx_tmp1 = this->_hx___graphics;
HXDLIN( 266)				_hx_tmp = _hx_tmp1->_hx___hitTest(x,y,shapeFlag,this->_hx___getRenderTransform());
            			}
            			else {
HXLINE( 266)				_hx_tmp = false;
            			}
HXDLIN( 266)			if (_hx_tmp) {
HXLINE( 268)				bool _hx_tmp;
HXDLIN( 268)				if (::hx::IsNotNull( stack )) {
HXLINE( 268)					if (interactiveOnly) {
HXLINE( 268)						_hx_tmp = this->mouseEnabled;
            					}
            					else {
HXLINE( 268)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 268)					_hx_tmp = false;
            				}
HXDLIN( 268)				if (_hx_tmp) {
HXLINE( 270)					stack->push(hitObject);
            				}
HXLINE( 273)				return true;
            			}
            		}
HXLINE( 276)		return this->_hx___hitTestHitArea(x,y,shapeFlag,stack,interactiveOnly,hitObject);
            	}


bool Sprite_obj::_hx___hitTestHitArea(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_281___hitTestHitArea)
HXLINE( 282)		if (::hx::IsNotNull( this->hitArea )) {
HXLINE( 284)			if (!(this->hitArea->mouseEnabled)) {
HXLINE( 286)				this->hitArea->mouseEnabled = true;
HXLINE( 287)				bool hitTest = this->hitArea->_hx___hitTest(x,y,shapeFlag,null(),true,hitObject);
HXLINE( 288)				this->hitArea->mouseEnabled = false;
HXLINE( 290)				bool _hx_tmp;
HXDLIN( 290)				if (::hx::IsNotNull( stack )) {
HXLINE( 290)					_hx_tmp = hitTest;
            				}
            				else {
HXLINE( 290)					_hx_tmp = false;
            				}
HXDLIN( 290)				if (_hx_tmp) {
HXLINE( 292)					stack[stack->length] = hitObject;
            				}
HXLINE( 295)				return hitTest;
            			}
            		}
HXLINE( 299)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC6(Sprite_obj,_hx___hitTestHitArea,return )

bool Sprite_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_303___hitTestMask)
HXLINE( 304)		if (this->super::_hx___hitTestMask(x,y)) {
HXLINE( 306)			return true;
            		}
            		else {
HXLINE( 308)			bool _hx_tmp;
HXDLIN( 308)			if (::hx::IsNotNull( this->_hx___graphics )) {
HXLINE( 308)				 ::openfl::display::Graphics _hx_tmp1 = this->_hx___graphics;
HXDLIN( 308)				_hx_tmp = _hx_tmp1->_hx___hitTest(x,y,true,this->_hx___getRenderTransform());
            			}
            			else {
HXLINE( 308)				_hx_tmp = false;
            			}
HXDLIN( 308)			if (_hx_tmp) {
HXLINE( 310)				return true;
            			}
            		}
HXLINE( 313)		return false;
            	}


 ::openfl::display::Graphics Sprite_obj::get_graphics(){
            	HX_GC_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_318_get_graphics)
HXLINE( 319)		if (::hx::IsNull( this->_hx___graphics )) {
HXLINE( 321)			this->_hx___graphics =  ::openfl::display::Graphics_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 324)		return this->_hx___graphics;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,get_graphics,return )

bool Sprite_obj::get_tabEnabled(){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_329_get_tabEnabled)
HXDLIN( 329)		if (::hx::IsNull( this->_hx___tabEnabled )) {
HXDLIN( 329)			return this->_hx___buttonMode;
            		}
            		else {
HXDLIN( 329)			return ( (bool)(this->_hx___tabEnabled) );
            		}
HXDLIN( 329)		return false;
            	}


bool Sprite_obj::get_buttonMode(){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_334_get_buttonMode)
HXDLIN( 334)		return this->_hx___buttonMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sprite_obj,get_buttonMode,return )

bool Sprite_obj::set_buttonMode(bool value){
            	HX_STACKFRAME(&_hx_pos_781fdaae6ecb7a58_339_set_buttonMode)
HXDLIN( 339)		return (this->_hx___buttonMode = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Sprite_obj,set_buttonMode,return )


::hx::ObjectPtr< Sprite_obj > Sprite_obj::__new() {
	::hx::ObjectPtr< Sprite_obj > __this = new Sprite_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Sprite_obj > Sprite_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Sprite_obj *__this = (Sprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Sprite_obj), true, "openfl.display.Sprite"));
	*(void **)__this = Sprite_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Sprite_obj::Sprite_obj()
{
}

void Sprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sprite);
	HX_MARK_MEMBER_NAME(dropTarget,"dropTarget");
	HX_MARK_MEMBER_NAME(hitArea,"hitArea");
	HX_MARK_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_MARK_MEMBER_NAME(_hx___buttonMode,"__buttonMode");
	 ::openfl::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dropTarget,"dropTarget");
	HX_VISIT_MEMBER_NAME(hitArea,"hitArea");
	HX_VISIT_MEMBER_NAME(useHandCursor,"useHandCursor");
	HX_VISIT_MEMBER_NAME(_hx___buttonMode,"__buttonMode");
	 ::openfl::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Sprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"hitArea") ) { return ::hx::Val( hitArea ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"graphics") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_graphics() ); }
		if (HX_FIELD_EQ(inName,"stopDrag") ) { return ::hx::Val( stopDrag_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startDrag") ) { return ::hx::Val( startDrag_dyn() ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return ::hx::Val( _hx___hitTest_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_buttonMode() ); }
		if (HX_FIELD_EQ(inName,"dropTarget") ) { return ::hx::Val( dropTarget ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getCursor") ) { return ::hx::Val( _hx___getCursor_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__buttonMode") ) { return ::hx::Val( _hx___buttonMode ); }
		if (HX_FIELD_EQ(inName,"get_graphics") ) { return ::hx::Val( get_graphics_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { return ::hx::Val( useHandCursor ); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return ::hx::Val( _hx___hitTestMask_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_tabEnabled") ) { return ::hx::Val( get_tabEnabled_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_buttonMode") ) { return ::hx::Val( get_buttonMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_buttonMode") ) { return ::hx::Val( set_buttonMode_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__hitTestHitArea") ) { return ::hx::Val( _hx___hitTestHitArea_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Sprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"hitArea") ) { hitArea=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"buttonMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_buttonMode(inValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"dropTarget") ) { dropTarget=inValue.Cast<  ::openfl::display::DisplayObject >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__buttonMode") ) { _hx___buttonMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"useHandCursor") ) { useHandCursor=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Sprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buttonMode",75,42,57,b2));
	outFields->push(HX_("dropTarget",e0,6c,5c,c6));
	outFields->push(HX_("graphics",cb,f8,67,12));
	outFields->push(HX_("hitArea",80,23,fa,d5));
	outFields->push(HX_("useHandCursor",cc,da,ae,89));
	outFields->push(HX_("__buttonMode",95,bd,ea,ea));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Sprite_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::DisplayObject */ ,(int)offsetof(Sprite_obj,dropTarget),HX_("dropTarget",e0,6c,5c,c6)},
	{::hx::fsObject /*  ::openfl::display::Sprite */ ,(int)offsetof(Sprite_obj,hitArea),HX_("hitArea",80,23,fa,d5)},
	{::hx::fsBool,(int)offsetof(Sprite_obj,useHandCursor),HX_("useHandCursor",cc,da,ae,89)},
	{::hx::fsBool,(int)offsetof(Sprite_obj,_hx___buttonMode),HX_("__buttonMode",95,bd,ea,ea)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Sprite_obj_sStaticStorageInfo = 0;
#endif

static ::String Sprite_obj_sMemberFields[] = {
	HX_("dropTarget",e0,6c,5c,c6),
	HX_("hitArea",80,23,fa,d5),
	HX_("useHandCursor",cc,da,ae,89),
	HX_("__buttonMode",95,bd,ea,ea),
	HX_("startDrag",76,a5,63,fb),
	HX_("stopDrag",16,71,2a,95),
	HX_("__getCursor",ec,60,6b,e9),
	HX_("__hitTest",25,b1,cd,63),
	HX_("__hitTestHitArea",db,38,50,28),
	HX_("__hitTestMask",b1,14,fd,3b),
	HX_("get_graphics",d4,ac,81,c7),
	HX_("get_tabEnabled",f5,7e,fe,b5),
	HX_("get_buttonMode",be,ca,4c,28),
	HX_("set_buttonMode",32,b3,6c,48),
	::String(null()) };

::hx::Class Sprite_obj::__mClass;

void Sprite_obj::__register()
{
	Sprite_obj _hx_dummy;
	Sprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display.Sprite",ef,fb,d6,4d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Sprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Sprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display