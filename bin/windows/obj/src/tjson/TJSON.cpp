#include <hxcpp.h>

#ifndef INCLUDED_tjson_TJSON
#include <tjson/TJSON.h>
#endif
#ifndef INCLUDED_tjson_TJSONEncoder
#include <tjson/TJSONEncoder.h>
#endif
#ifndef INCLUDED_tjson_TJSONParser
#include <tjson/TJSONParser.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_fc4fa60cf34761f2_12_parse,"tjson.TJSON","parse",0xa65a2bef,"tjson.TJSON.parse","tjson/TJSON.hx",12,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_fc4fa60cf34761f2_22_encode,"tjson.TJSON","encode",0xf4e79ada,"tjson.TJSON.encode","tjson/TJSON.hx",22,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_fc4fa60cf34761f2_6_boot,"tjson.TJSON","boot",0x6ca0b3f6,"tjson.TJSON.boot","tjson/TJSON.hx",6,0x85b8bad5)
namespace tjson{

void TJSON_obj::__construct() { }

Dynamic TJSON_obj::__CreateEmpty() { return new TJSON_obj; }

void *TJSON_obj::_hx_vtable = 0;

Dynamic TJSON_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TJSON_obj > _hx_result = new TJSON_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TJSON_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b7b3a28;
}

::String TJSON_obj::OBJECT_REFERENCE_PREFIX;

 ::Dynamic TJSON_obj::parse(::String json,::String __o_fileName, ::Dynamic stringProcessor){
            		::String fileName = __o_fileName;
            		if (::hx::IsNull(__o_fileName)) fileName = HX_("JSON Data",42,37,28,24);
            	HX_GC_STACKFRAME(&_hx_pos_fc4fa60cf34761f2_12_parse)
HXLINE(  13)		 ::tjson::TJSONParser t =  ::tjson::TJSONParser_obj::__alloc( HX_CTX ,json,fileName,stringProcessor);
HXLINE(  14)		return t->doParse();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TJSON_obj,parse,return )

::String TJSON_obj::encode( ::Dynamic obj, ::Dynamic style,::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_fc4fa60cf34761f2_22_encode)
HXLINE(  23)		 ::tjson::TJSONEncoder t =  ::tjson::TJSONEncoder_obj::__alloc( HX_CTX ,useCache);
HXLINE(  24)		return t->doEncode(obj,style);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TJSON_obj,encode,return )


TJSON_obj::TJSON_obj()
{
}

bool TJSON_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"OBJECT_REFERENCE_PREFIX") ) { outValue = ( OBJECT_REFERENCE_PREFIX ); return true; }
	}
	return false;
}

bool TJSON_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 23:
		if (HX_FIELD_EQ(inName,"OBJECT_REFERENCE_PREFIX") ) { OBJECT_REFERENCE_PREFIX=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TJSON_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo TJSON_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &TJSON_obj::OBJECT_REFERENCE_PREFIX,HX_("OBJECT_REFERENCE_PREFIX",a6,f7,2a,e3)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void TJSON_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TJSON_obj::OBJECT_REFERENCE_PREFIX,"OBJECT_REFERENCE_PREFIX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TJSON_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TJSON_obj::OBJECT_REFERENCE_PREFIX,"OBJECT_REFERENCE_PREFIX");
};

#endif

::hx::Class TJSON_obj::__mClass;

static ::String TJSON_obj_sStaticFields[] = {
	HX_("OBJECT_REFERENCE_PREFIX",a6,f7,2a,e3),
	HX_("parse",33,90,55,bd),
	HX_("encode",16,f2,e3,f9),
	::String(null())
};

void TJSON_obj::__register()
{
	TJSON_obj _hx_dummy;
	TJSON_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tjson.TJSON",2a,47,65,64);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TJSON_obj::__GetStatic;
	__mClass->mSetStaticField = &TJSON_obj::__SetStatic;
	__mClass->mMarkFunc = TJSON_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TJSON_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TJSON_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TJSON_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TJSON_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TJSON_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TJSON_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fc4fa60cf34761f2_6_boot)
HXDLIN(   6)		OBJECT_REFERENCE_PREFIX = HX_("@~obRef#",e1,5c,8f,c9);
            	}
}

} // end namespace tjson
