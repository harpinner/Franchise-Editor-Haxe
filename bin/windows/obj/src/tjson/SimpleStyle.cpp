#include <hxcpp.h>

#ifndef INCLUDED_tjson_EncodeStyle
#include <tjson/EncodeStyle.h>
#endif
#ifndef INCLUDED_tjson_SimpleStyle
#include <tjson/SimpleStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3c49286e486c0a4f_528_new,"tjson.SimpleStyle","new",0x7913e81f,"tjson.SimpleStyle.new","tjson/TJSON.hx",528,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_3c49286e486c0a4f_532_beginObject,"tjson.SimpleStyle","beginObject",0xfab1d087,"tjson.SimpleStyle.beginObject","tjson/TJSON.hx",532,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_3c49286e486c0a4f_535_endObject,"tjson.SimpleStyle","endObject",0x5210bdf9,"tjson.SimpleStyle.endObject","tjson/TJSON.hx",535,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_3c49286e486c0a4f_538_beginArray,"tjson.SimpleStyle","beginArray",0xef7c6cd1,"tjson.SimpleStyle.beginArray","tjson/TJSON.hx",538,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_3c49286e486c0a4f_541_endArray,"tjson.SimpleStyle","endArray",0x8643739f,"tjson.SimpleStyle.endArray","tjson/TJSON.hx",541,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_3c49286e486c0a4f_544_firstEntry,"tjson.SimpleStyle","firstEntry",0x0288b043,"tjson.SimpleStyle.firstEntry","tjson/TJSON.hx",544,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_3c49286e486c0a4f_547_entrySeperator,"tjson.SimpleStyle","entrySeperator",0x44bfadb0,"tjson.SimpleStyle.entrySeperator","tjson/TJSON.hx",547,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_3c49286e486c0a4f_550_keyValueSeperator,"tjson.SimpleStyle","keyValueSeperator",0x8961da2e,"tjson.SimpleStyle.keyValueSeperator","tjson/TJSON.hx",550,0x85b8bad5)
namespace tjson{

void SimpleStyle_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3c49286e486c0a4f_528_new)
            	}

Dynamic SimpleStyle_obj::__CreateEmpty() { return new SimpleStyle_obj; }

void *SimpleStyle_obj::_hx_vtable = 0;

Dynamic SimpleStyle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SimpleStyle_obj > _hx_result = new SimpleStyle_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SimpleStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3c0f27c7;
}

static ::tjson::EncodeStyle_obj _hx_tjson_SimpleStyle__hx_tjson_EncodeStyle= {
	( ::String (::hx::Object::*)(int))&::tjson::SimpleStyle_obj::beginObject,
	( ::String (::hx::Object::*)(int))&::tjson::SimpleStyle_obj::endObject,
	( ::String (::hx::Object::*)(int))&::tjson::SimpleStyle_obj::beginArray,
	( ::String (::hx::Object::*)(int))&::tjson::SimpleStyle_obj::endArray,
	( ::String (::hx::Object::*)(int))&::tjson::SimpleStyle_obj::firstEntry,
	( ::String (::hx::Object::*)(int))&::tjson::SimpleStyle_obj::entrySeperator,
	( ::String (::hx::Object::*)(int))&::tjson::SimpleStyle_obj::keyValueSeperator,
};

void *SimpleStyle_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x6f55723f: return &_hx_tjson_SimpleStyle__hx_tjson_EncodeStyle;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::String SimpleStyle_obj::beginObject(int depth){
            	HX_STACKFRAME(&_hx_pos_3c49286e486c0a4f_532_beginObject)
HXDLIN( 532)		return HX_("{",7b,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleStyle_obj,beginObject,return )

::String SimpleStyle_obj::endObject(int depth){
            	HX_STACKFRAME(&_hx_pos_3c49286e486c0a4f_535_endObject)
HXDLIN( 535)		return HX_("}",7d,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleStyle_obj,endObject,return )

::String SimpleStyle_obj::beginArray(int depth){
            	HX_STACKFRAME(&_hx_pos_3c49286e486c0a4f_538_beginArray)
HXDLIN( 538)		return HX_("[",5b,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleStyle_obj,beginArray,return )

::String SimpleStyle_obj::endArray(int depth){
            	HX_STACKFRAME(&_hx_pos_3c49286e486c0a4f_541_endArray)
HXDLIN( 541)		return HX_("]",5d,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleStyle_obj,endArray,return )

::String SimpleStyle_obj::firstEntry(int depth){
            	HX_STACKFRAME(&_hx_pos_3c49286e486c0a4f_544_firstEntry)
HXDLIN( 544)		return HX_("",00,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleStyle_obj,firstEntry,return )

::String SimpleStyle_obj::entrySeperator(int depth){
            	HX_STACKFRAME(&_hx_pos_3c49286e486c0a4f_547_entrySeperator)
HXDLIN( 547)		return HX_(",",2c,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleStyle_obj,entrySeperator,return )

::String SimpleStyle_obj::keyValueSeperator(int depth){
            	HX_STACKFRAME(&_hx_pos_3c49286e486c0a4f_550_keyValueSeperator)
HXDLIN( 550)		return HX_(":",3a,00,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC1(SimpleStyle_obj,keyValueSeperator,return )


::hx::ObjectPtr< SimpleStyle_obj > SimpleStyle_obj::__new() {
	::hx::ObjectPtr< SimpleStyle_obj > __this = new SimpleStyle_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SimpleStyle_obj > SimpleStyle_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SimpleStyle_obj *__this = (SimpleStyle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SimpleStyle_obj), false, "tjson.SimpleStyle"));
	*(void **)__this = SimpleStyle_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SimpleStyle_obj::SimpleStyle_obj()
{
}

::hx::Val SimpleStyle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"endArray") ) { return ::hx::Val( endArray_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"endObject") ) { return ::hx::Val( endObject_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"beginArray") ) { return ::hx::Val( beginArray_dyn() ); }
		if (HX_FIELD_EQ(inName,"firstEntry") ) { return ::hx::Val( firstEntry_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"beginObject") ) { return ::hx::Val( beginObject_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"entrySeperator") ) { return ::hx::Val( entrySeperator_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"keyValueSeperator") ) { return ::hx::Val( keyValueSeperator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SimpleStyle_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SimpleStyle_obj_sStaticStorageInfo = 0;
#endif

static ::String SimpleStyle_obj_sMemberFields[] = {
	HX_("beginObject",c8,61,65,af),
	HX_("endObject",fa,cc,21,55),
	HX_("beginArray",b0,7e,58,9b),
	HX_("endArray",be,ff,8c,23),
	HX_("firstEntry",22,c2,64,ae),
	HX_("entrySeperator",0f,9b,d3,44),
	HX_("keyValueSeperator",2f,52,8b,7d),
	::String(null()) };

::hx::Class SimpleStyle_obj::__mClass;

void SimpleStyle_obj::__register()
{
	SimpleStyle_obj _hx_dummy;
	SimpleStyle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tjson.SimpleStyle",ad,ec,9f,71);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SimpleStyle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SimpleStyle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SimpleStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SimpleStyle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tjson
