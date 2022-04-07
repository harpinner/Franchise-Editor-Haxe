#include <hxcpp.h>

#ifndef INCLUDED_Person
#include <Person.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e701c424f2637eb0_6_new,"Person","new",0x4d8b8b27,"Person.new","TheApp.hx",6,0x9feb3fee)

void Person_obj::__construct(::String name,int birth){
            	HX_STACKFRAME(&_hx_pos_e701c424f2637eb0_6_new)
HXLINE(   7)		this->name = name;
HXDLIN(   7)		this->birth = birth;
            	}

Dynamic Person_obj::__CreateEmpty() { return new Person_obj; }

void *Person_obj::_hx_vtable = 0;

Dynamic Person_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Person_obj > _hx_result = new Person_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Person_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x374f32d9;
}


Person_obj::Person_obj()
{
}

void Person_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Person);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(birth,"birth");
	HX_MARK_END_CLASS();
}

void Person_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(birth,"birth");
}

::hx::Val Person_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"birth") ) { return ::hx::Val( birth ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Person_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"birth") ) { birth=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Person_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("birth",ff,26,03,b3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Person_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Person_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsInt,(int)offsetof(Person_obj,birth),HX_("birth",ff,26,03,b3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Person_obj_sStaticStorageInfo = 0;
#endif

static ::String Person_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("birth",ff,26,03,b3),
	::String(null()) };

::hx::Class Person_obj::__mClass;

void Person_obj::__register()
{
	Person_obj _hx_dummy;
	Person_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Person",b5,6b,b7,6f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Person_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Person_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Person_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Person_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

