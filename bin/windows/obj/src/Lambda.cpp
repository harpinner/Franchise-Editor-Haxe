#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_0b9bdf593913b01a_45_array,"Lambda","array",0x9c8b0512,"Lambda.array","C:\\HaxeToolkit\\haxe\\std/Lambda.hx",45,0x9e372efe)
HX_LOCAL_STACK_FRAME(_hx_pos_0b9bdf593913b01a_255_find,"Lambda","find",0x9b838ae0,"Lambda.find","C:\\HaxeToolkit\\haxe\\std/Lambda.hx",255,0x9e372efe)

void Lambda_obj::__construct() { }

Dynamic Lambda_obj::__CreateEmpty() { return new Lambda_obj; }

void *Lambda_obj::_hx_vtable = 0;

Dynamic Lambda_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Lambda_obj > _hx_result = new Lambda_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Lambda_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4cec6e4b;
}

::cpp::VirtualArray Lambda_obj::array( ::Dynamic it){
            	HX_STACKFRAME(&_hx_pos_0b9bdf593913b01a_45_array)
HXLINE(  46)		::cpp::VirtualArray a = ::cpp::VirtualArray_obj::__new();
HXLINE(  47)		{
HXLINE(  47)			 ::Dynamic i = it->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN(  47)			while(( (bool)(i->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE(  47)				 ::Dynamic i1 = i->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE(  48)				a->push(i1);
            			}
            		}
HXLINE(  49)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lambda_obj,array,return )

 ::Dynamic Lambda_obj::find( ::Dynamic it, ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_0b9bdf593913b01a_255_find)
HXLINE( 256)		{
HXLINE( 256)			 ::Dynamic v = it->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 256)			while(( (bool)(v->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 256)				 ::Dynamic v1 = v->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 257)				if (( (bool)(f(v1)) )) {
HXLINE( 258)					return v1;
            				}
            			}
            		}
HXLINE( 260)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lambda_obj,find,return )


Lambda_obj::Lambda_obj()
{
}

bool Lambda_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"find") ) { outValue = find_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"array") ) { outValue = array_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Lambda_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Lambda_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Lambda_obj::__mClass;

static ::String Lambda_obj_sStaticFields[] = {
	HX_("array",99,6d,8f,25),
	HX_("find",39,d0,bb,43),
	::String(null())
};

void Lambda_obj::__register()
{
	Lambda_obj _hx_dummy;
	Lambda_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Lambda",27,a7,54,85);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lambda_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Lambda_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Lambda_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Lambda_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Lambda_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

