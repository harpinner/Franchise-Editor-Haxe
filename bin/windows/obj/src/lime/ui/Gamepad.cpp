#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_GamepadAxis_Float_Void
#include <lime/app/_Event_lime_ui_GamepadAxis_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_GamepadButton_Void
#include <lime/app/_Event_lime_ui_GamepadButton_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_Gamepad_Void
#include <lime/app/_Event_lime_ui_Gamepad_Void.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b33f1f9ffbdc366b_12_new,"lime.ui.Gamepad","new",0xd780a212,"lime.ui.Gamepad.new","lime/ui/Gamepad.hx",12,0x36bc843e)
HX_LOCAL_STACK_FRAME(_hx_pos_b33f1f9ffbdc366b_70_get_guid,"lime.ui.Gamepad","get_guid",0x2f6ca220,"lime.ui.Gamepad.get_guid","lime/ui/Gamepad.hx",70,0x36bc843e)
HX_LOCAL_STACK_FRAME(_hx_pos_b33f1f9ffbdc366b_86_get_name,"lime.ui.Gamepad","get_name",0x33fdf6e2,"lime.ui.Gamepad.get_name","lime/ui/Gamepad.hx",86,0x36bc843e)
HX_LOCAL_STACK_FRAME(_hx_pos_b33f1f9ffbdc366b_41_addMappings,"lime.ui.Gamepad","addMappings",0x7dce3c98,"lime.ui.Gamepad.addMappings","lime/ui/Gamepad.hx",41,0x36bc843e)
HX_LOCAL_STACK_FRAME(_hx_pos_b33f1f9ffbdc366b_47___connect,"lime.ui.Gamepad","__connect",0x06daaffc,"lime.ui.Gamepad.__connect","lime/ui/Gamepad.hx",47,0x36bc843e)
HX_LOCAL_STACK_FRAME(_hx_pos_b33f1f9ffbdc366b_56___disconnect,"lime.ui.Gamepad","__disconnect",0x04d0478a,"lime.ui.Gamepad.__disconnect","lime/ui/Gamepad.hx",56,0x36bc843e)
HX_LOCAL_STACK_FRAME(_hx_pos_b33f1f9ffbdc366b_14_boot,"lime.ui.Gamepad","boot",0xb1262e40,"lime.ui.Gamepad.boot","lime/ui/Gamepad.hx",14,0x36bc843e)
HX_LOCAL_STACK_FRAME(_hx_pos_b33f1f9ffbdc366b_15_boot,"lime.ui.Gamepad","boot",0xb1262e40,"lime.ui.Gamepad.boot","lime/ui/Gamepad.hx",15,0x36bc843e)
namespace lime{
namespace ui{

void Gamepad_obj::__construct(int id){
            	HX_GC_STACKFRAME(&_hx_pos_b33f1f9ffbdc366b_12_new)
HXLINE(  24)		this->onDisconnect =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  23)		this->onButtonUp =  ::lime::app::_Event_lime_ui_GamepadButton_Void_obj::__alloc( HX_CTX );
HXLINE(  22)		this->onButtonDown =  ::lime::app::_Event_lime_ui_GamepadButton_Void_obj::__alloc( HX_CTX );
HXLINE(  21)		this->onAxisMove =  ::lime::app::_Event_lime_ui_GamepadAxis_Float_Void_obj::__alloc( HX_CTX );
HXLINE(  28)		this->id = id;
HXLINE(  29)		this->connected = true;
            	}

Dynamic Gamepad_obj::__CreateEmpty() { return new Gamepad_obj; }

void *Gamepad_obj::_hx_vtable = 0;

Dynamic Gamepad_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Gamepad_obj > _hx_result = new Gamepad_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Gamepad_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0ce13738;
}

::String Gamepad_obj::get_guid(){
            	HX_STACKFRAME(&_hx_pos_b33f1f9ffbdc366b_70_get_guid)
HXDLIN(  70)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_gamepad_get_device_guid(this->id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,get_guid,return )

::String Gamepad_obj::get_name(){
            	HX_STACKFRAME(&_hx_pos_b33f1f9ffbdc366b_86_get_name)
HXDLIN(  86)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_gamepad_get_device_name(this->id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,get_name,return )

 ::haxe::ds::IntMap Gamepad_obj::devices;

 ::lime::app::_Event_lime_ui_Gamepad_Void Gamepad_obj::onConnect;

void Gamepad_obj::addMappings(::Array< ::String > mappings){
            	HX_STACKFRAME(&_hx_pos_b33f1f9ffbdc366b_41_addMappings)
HXDLIN(  41)		::lime::_internal::backend::native::NativeCFFI_obj::lime_gamepad_add_mappings(::hx::DynamicPtr(mappings));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,addMappings,(void))

void Gamepad_obj::_hx___connect(int id){
            	HX_GC_STACKFRAME(&_hx_pos_b33f1f9ffbdc366b_47___connect)
HXDLIN(  47)		if (!(::lime::ui::Gamepad_obj::devices->exists(id))) {
HXLINE(  49)			 ::lime::ui::Gamepad gamepad =  ::lime::ui::Gamepad_obj::__alloc( HX_CTX ,id);
HXLINE(  50)			::lime::ui::Gamepad_obj::devices->set(id,gamepad);
HXLINE(  51)			::lime::ui::Gamepad_obj::onConnect->dispatch(gamepad);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,_hx___connect,(void))

void Gamepad_obj::_hx___disconnect(int id){
            	HX_STACKFRAME(&_hx_pos_b33f1f9ffbdc366b_56___disconnect)
HXLINE(  57)		 ::lime::ui::Gamepad gamepad = ( ( ::lime::ui::Gamepad)(::lime::ui::Gamepad_obj::devices->get(id)) );
HXLINE(  58)		if (::hx::IsNotNull( gamepad )) {
HXLINE(  58)			gamepad->connected = false;
            		}
HXLINE(  59)		::lime::ui::Gamepad_obj::devices->remove(id);
HXLINE(  60)		if (::hx::IsNotNull( gamepad )) {
HXLINE(  60)			gamepad->onDisconnect->dispatch();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,_hx___disconnect,(void))


::hx::ObjectPtr< Gamepad_obj > Gamepad_obj::__new(int id) {
	::hx::ObjectPtr< Gamepad_obj > __this = new Gamepad_obj();
	__this->__construct(id);
	return __this;
}

::hx::ObjectPtr< Gamepad_obj > Gamepad_obj::__alloc(::hx::Ctx *_hx_ctx,int id) {
	Gamepad_obj *__this = (Gamepad_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Gamepad_obj), true, "lime.ui.Gamepad"));
	*(void **)__this = Gamepad_obj::_hx_vtable;
	__this->__construct(id);
	return __this;
}

Gamepad_obj::Gamepad_obj()
{
}

void Gamepad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Gamepad);
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(onAxisMove,"onAxisMove");
	HX_MARK_MEMBER_NAME(onButtonDown,"onButtonDown");
	HX_MARK_MEMBER_NAME(onButtonUp,"onButtonUp");
	HX_MARK_MEMBER_NAME(onDisconnect,"onDisconnect");
	HX_MARK_END_CLASS();
}

void Gamepad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(connected,"connected");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(onAxisMove,"onAxisMove");
	HX_VISIT_MEMBER_NAME(onButtonDown,"onButtonDown");
	HX_VISIT_MEMBER_NAME(onButtonUp,"onButtonUp");
	HX_VISIT_MEMBER_NAME(onDisconnect,"onDisconnect");
}

::hx::Val Gamepad_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"guid") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_guid() ); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_name() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_guid") ) { return ::hx::Val( get_guid_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return ::hx::Val( get_name_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return ::hx::Val( connected ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onAxisMove") ) { return ::hx::Val( onAxisMove ); }
		if (HX_FIELD_EQ(inName,"onButtonUp") ) { return ::hx::Val( onButtonUp ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onButtonDown") ) { return ::hx::Val( onButtonDown ); }
		if (HX_FIELD_EQ(inName,"onDisconnect") ) { return ::hx::Val( onDisconnect ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Gamepad_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { outValue = ( devices ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { outValue = ( onConnect ); return true; }
		if (HX_FIELD_EQ(inName,"__connect") ) { outValue = _hx___connect_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addMappings") ) { outValue = addMappings_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__disconnect") ) { outValue = _hx___disconnect_dyn(); return true; }
	}
	return false;
}

::hx::Val Gamepad_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onAxisMove") ) { onAxisMove=inValue.Cast<  ::lime::app::_Event_lime_ui_GamepadAxis_Float_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onButtonUp") ) { onButtonUp=inValue.Cast<  ::lime::app::_Event_lime_ui_GamepadButton_Void >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onButtonDown") ) { onButtonDown=inValue.Cast<  ::lime::app::_Event_lime_ui_GamepadButton_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDisconnect") ) { onDisconnect=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Gamepad_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { devices=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { onConnect=ioValue.Cast<  ::lime::app::_Event_lime_ui_Gamepad_Void >(); return true; }
	}
	return false;
}

void Gamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("connected",c9,e2,f6,a2));
	outFields->push(HX_("guid",89,1d,6e,44));
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("onAxisMove",91,64,ab,6d));
	outFields->push(HX_("onButtonDown",73,09,a8,84));
	outFields->push(HX_("onButtonUp",2c,61,e9,39));
	outFields->push(HX_("onDisconnect",5b,06,88,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Gamepad_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(Gamepad_obj,connected),HX_("connected",c9,e2,f6,a2)},
	{::hx::fsInt,(int)offsetof(Gamepad_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsObject /*  ::lime::app::_Event_lime_ui_GamepadAxis_Float_Void */ ,(int)offsetof(Gamepad_obj,onAxisMove),HX_("onAxisMove",91,64,ab,6d)},
	{::hx::fsObject /*  ::lime::app::_Event_lime_ui_GamepadButton_Void */ ,(int)offsetof(Gamepad_obj,onButtonDown),HX_("onButtonDown",73,09,a8,84)},
	{::hx::fsObject /*  ::lime::app::_Event_lime_ui_GamepadButton_Void */ ,(int)offsetof(Gamepad_obj,onButtonUp),HX_("onButtonUp",2c,61,e9,39)},
	{::hx::fsObject /*  ::lime::app::_Event_Void_Void */ ,(int)offsetof(Gamepad_obj,onDisconnect),HX_("onDisconnect",5b,06,88,41)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Gamepad_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &Gamepad_obj::devices,HX_("devices",1d,27,69,d7)},
	{::hx::fsObject /*  ::lime::app::_Event_lime_ui_Gamepad_Void */ ,(void *) &Gamepad_obj::onConnect,HX_("onConnect",8b,f4,2a,ed)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Gamepad_obj_sMemberFields[] = {
	HX_("connected",c9,e2,f6,a2),
	HX_("id",db,5b,00,00),
	HX_("onAxisMove",91,64,ab,6d),
	HX_("onButtonDown",73,09,a8,84),
	HX_("onButtonUp",2c,61,e9,39),
	HX_("onDisconnect",5b,06,88,41),
	HX_("get_guid",12,d9,28,c4),
	HX_("get_name",d4,2d,ba,c8),
	::String(null()) };

static void Gamepad_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gamepad_obj::devices,"devices");
	HX_MARK_MEMBER_NAME(Gamepad_obj::onConnect,"onConnect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Gamepad_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gamepad_obj::devices,"devices");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::onConnect,"onConnect");
};

#endif

::hx::Class Gamepad_obj::__mClass;

static ::String Gamepad_obj_sStaticFields[] = {
	HX_("devices",1d,27,69,d7),
	HX_("onConnect",8b,f4,2a,ed),
	HX_("addMappings",e6,68,0d,d8),
	HX_("__connect",ca,8c,ce,96),
	HX_("__disconnect",7c,df,d7,a1),
	::String(null())
};

void Gamepad_obj::__register()
{
	Gamepad_obj _hx_dummy;
	Gamepad_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.ui.Gamepad",20,f1,a5,83);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Gamepad_obj::__GetStatic;
	__mClass->mSetStaticField = &Gamepad_obj::__SetStatic;
	__mClass->mMarkFunc = Gamepad_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Gamepad_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Gamepad_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Gamepad_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Gamepad_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Gamepad_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Gamepad_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Gamepad_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_b33f1f9ffbdc366b_14_boot)
HXDLIN(  14)		devices =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_b33f1f9ffbdc366b_15_boot)
HXDLIN(  15)		onConnect =  ::lime::app::_Event_lime_ui_Gamepad_Void_obj::__alloc( HX_CTX );
            	}
}

} // end namespace lime
} // end namespace ui
