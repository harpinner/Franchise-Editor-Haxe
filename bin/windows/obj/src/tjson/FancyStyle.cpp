#include <hxcpp.h>

#ifndef INCLUDED_tjson_EncodeStyle
#include <tjson/EncodeStyle.h>
#endif
#ifndef INCLUDED_tjson_FancyStyle
#include <tjson/FancyStyle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6a710a44e91753fb_558_new,"tjson.FancyStyle","new",0xf1da60cc,"tjson.FancyStyle.new","tjson/TJSON.hx",558,0x85b8bad5)
static const ::String _hx_array_data_af574ada_1[] = {
	HX_("",00,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_6a710a44e91753fb_563_beginObject,"tjson.FancyStyle","beginObject",0x5fd43e34,"tjson.FancyStyle.beginObject","tjson/TJSON.hx",563,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_6a710a44e91753fb_566_endObject,"tjson.FancyStyle","endObject",0xcd027666,"tjson.FancyStyle.endObject","tjson/TJSON.hx",566,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_6a710a44e91753fb_569_beginArray,"tjson.FancyStyle","beginArray",0x080c13c4,"tjson.FancyStyle.beginArray","tjson/TJSON.hx",569,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_6a710a44e91753fb_572_endArray,"tjson.FancyStyle","endArray",0x7ec767d2,"tjson.FancyStyle.endArray","tjson/TJSON.hx",572,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_6a710a44e91753fb_575_firstEntry,"tjson.FancyStyle","firstEntry",0x1b185736,"tjson.FancyStyle.firstEntry","tjson/TJSON.hx",575,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_6a710a44e91753fb_578_entrySeperator,"tjson.FancyStyle","entrySeperator",0xbf794a23,"tjson.FancyStyle.entrySeperator","tjson/TJSON.hx",578,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_6a710a44e91753fb_581_keyValueSeperator,"tjson.FancyStyle","keyValueSeperator",0x3195479b,"tjson.FancyStyle.keyValueSeperator","tjson/TJSON.hx",581,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_6a710a44e91753fb_585_charTimesN,"tjson.FancyStyle","charTimesN",0xffa53a52,"tjson.FancyStyle.charTimesN","tjson/TJSON.hx",585,0x85b8bad5)
namespace tjson{

void FancyStyle_obj::__construct(::String __o_tab){
            		::String tab = __o_tab;
            		if (::hx::IsNull(__o_tab)) tab = HX_("    ",00,38,3f,15);
            	HX_STACKFRAME(&_hx_pos_6a710a44e91753fb_558_new)
HXLINE( 559)		this->tab = tab;
HXLINE( 560)		this->charTimesNCache = ::Array_obj< ::String >::fromData( _hx_array_data_af574ada_1,1);
            	}

Dynamic FancyStyle_obj::__CreateEmpty() { return new FancyStyle_obj; }

void *FancyStyle_obj::_hx_vtable = 0;

Dynamic FancyStyle_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FancyStyle_obj > _hx_result = new FancyStyle_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FancyStyle_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x297922e4;
}

static ::tjson::EncodeStyle_obj _hx_tjson_FancyStyle__hx_tjson_EncodeStyle= {
	( ::String (::hx::Object::*)(int))&::tjson::FancyStyle_obj::beginObject,
	( ::String (::hx::Object::*)(int))&::tjson::FancyStyle_obj::endObject,
	( ::String (::hx::Object::*)(int))&::tjson::FancyStyle_obj::beginArray,
	( ::String (::hx::Object::*)(int))&::tjson::FancyStyle_obj::endArray,
	( ::String (::hx::Object::*)(int))&::tjson::FancyStyle_obj::firstEntry,
	( ::String (::hx::Object::*)(int))&::tjson::FancyStyle_obj::entrySeperator,
	( ::String (::hx::Object::*)(int))&::tjson::FancyStyle_obj::keyValueSeperator,
};

void *FancyStyle_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x6f55723f: return &_hx_tjson_FancyStyle__hx_tjson_EncodeStyle;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::String FancyStyle_obj::beginObject(int depth){
            	HX_STACKFRAME(&_hx_pos_6a710a44e91753fb_563_beginObject)
HXDLIN( 563)		return HX_("{\n",2f,6b,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FancyStyle_obj,beginObject,return )

::String FancyStyle_obj::endObject(int depth){
            	HX_STACKFRAME(&_hx_pos_6a710a44e91753fb_566_endObject)
HXDLIN( 566)		return ((HX_("\n",0a,00,00,00) + this->charTimesN(depth)) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FancyStyle_obj,endObject,return )

::String FancyStyle_obj::beginArray(int depth){
            	HX_STACKFRAME(&_hx_pos_6a710a44e91753fb_569_beginArray)
HXDLIN( 569)		return HX_("[\n",4f,4f,00,00);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FancyStyle_obj,beginArray,return )

::String FancyStyle_obj::endArray(int depth){
            	HX_STACKFRAME(&_hx_pos_6a710a44e91753fb_572_endArray)
HXDLIN( 572)		return ((HX_("\n",0a,00,00,00) + this->charTimesN(depth)) + HX_("]",5d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FancyStyle_obj,endArray,return )

::String FancyStyle_obj::firstEntry(int depth){
            	HX_STACKFRAME(&_hx_pos_6a710a44e91753fb_575_firstEntry)
HXDLIN( 575)		return (this->charTimesN((depth + 1)) + HX_(" ",20,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FancyStyle_obj,firstEntry,return )

::String FancyStyle_obj::entrySeperator(int depth){
            	HX_STACKFRAME(&_hx_pos_6a710a44e91753fb_578_entrySeperator)
HXDLIN( 578)		return ((HX_("\n",0a,00,00,00) + this->charTimesN((depth + 1))) + HX_(",",2c,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FancyStyle_obj,entrySeperator,return )

::String FancyStyle_obj::keyValueSeperator(int depth){
            	HX_STACKFRAME(&_hx_pos_6a710a44e91753fb_581_keyValueSeperator)
HXDLIN( 581)		return HX_(" : ",c6,7a,18,00);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FancyStyle_obj,keyValueSeperator,return )

::String FancyStyle_obj::charTimesN(int n){
            	HX_STACKFRAME(&_hx_pos_6a710a44e91753fb_585_charTimesN)
HXDLIN( 585)		if ((n < this->charTimesNCache->length)) {
HXLINE( 586)			return this->charTimesNCache->__get(n);
            		}
            		else {
HXLINE( 588)			::String _hx_tmp = this->charTimesN((n - 1));
HXDLIN( 588)			return (this->charTimesNCache[n] = (_hx_tmp + this->tab));
            		}
HXLINE( 585)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FancyStyle_obj,charTimesN,return )


::hx::ObjectPtr< FancyStyle_obj > FancyStyle_obj::__new(::String __o_tab) {
	::hx::ObjectPtr< FancyStyle_obj > __this = new FancyStyle_obj();
	__this->__construct(__o_tab);
	return __this;
}

::hx::ObjectPtr< FancyStyle_obj > FancyStyle_obj::__alloc(::hx::Ctx *_hx_ctx,::String __o_tab) {
	FancyStyle_obj *__this = (FancyStyle_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FancyStyle_obj), true, "tjson.FancyStyle"));
	*(void **)__this = FancyStyle_obj::_hx_vtable;
	__this->__construct(__o_tab);
	return __this;
}

FancyStyle_obj::FancyStyle_obj()
{
}

void FancyStyle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FancyStyle);
	HX_MARK_MEMBER_NAME(tab,"tab");
	HX_MARK_MEMBER_NAME(charTimesNCache,"charTimesNCache");
	HX_MARK_END_CLASS();
}

void FancyStyle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tab,"tab");
	HX_VISIT_MEMBER_NAME(charTimesNCache,"charTimesNCache");
}

::hx::Val FancyStyle_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tab") ) { return ::hx::Val( tab ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endArray") ) { return ::hx::Val( endArray_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"endObject") ) { return ::hx::Val( endObject_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"beginArray") ) { return ::hx::Val( beginArray_dyn() ); }
		if (HX_FIELD_EQ(inName,"firstEntry") ) { return ::hx::Val( firstEntry_dyn() ); }
		if (HX_FIELD_EQ(inName,"charTimesN") ) { return ::hx::Val( charTimesN_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"beginObject") ) { return ::hx::Val( beginObject_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"entrySeperator") ) { return ::hx::Val( entrySeperator_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"charTimesNCache") ) { return ::hx::Val( charTimesNCache ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"keyValueSeperator") ) { return ::hx::Val( keyValueSeperator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FancyStyle_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"tab") ) { tab=inValue.Cast< ::String >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"charTimesNCache") ) { charTimesNCache=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FancyStyle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("tab",55,5a,58,00));
	outFields->push(HX_("charTimesNCache",24,a4,5a,a4));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FancyStyle_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FancyStyle_obj,tab),HX_("tab",55,5a,58,00)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(FancyStyle_obj,charTimesNCache),HX_("charTimesNCache",24,a4,5a,a4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FancyStyle_obj_sStaticStorageInfo = 0;
#endif

static ::String FancyStyle_obj_sMemberFields[] = {
	HX_("tab",55,5a,58,00),
	HX_("beginObject",c8,61,65,af),
	HX_("endObject",fa,cc,21,55),
	HX_("beginArray",b0,7e,58,9b),
	HX_("endArray",be,ff,8c,23),
	HX_("firstEntry",22,c2,64,ae),
	HX_("entrySeperator",0f,9b,d3,44),
	HX_("keyValueSeperator",2f,52,8b,7d),
	HX_("charTimesNCache",24,a4,5a,a4),
	HX_("charTimesN",3e,a5,f1,92),
	::String(null()) };

::hx::Class FancyStyle_obj::__mClass;

void FancyStyle_obj::__register()
{
	FancyStyle_obj _hx_dummy;
	FancyStyle_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tjson.FancyStyle",da,4a,57,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FancyStyle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FancyStyle_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FancyStyle_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FancyStyle_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tjson
