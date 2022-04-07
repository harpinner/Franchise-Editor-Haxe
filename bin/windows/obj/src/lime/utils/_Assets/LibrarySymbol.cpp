#include <hxcpp.h>

#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_lime_utils__Assets_LibrarySymbol
#include <lime/utils/_Assets/LibrarySymbol.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_281fad3e86f1efa8_591_new,"lime.utils._Assets.LibrarySymbol","new",0x85584603,"lime.utils._Assets.LibrarySymbol.new","lime/utils/Assets.hx",591,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_281fad3e86f1efa8_599_isLocal,"lime.utils._Assets.LibrarySymbol","isLocal",0x28a9f044,"lime.utils._Assets.LibrarySymbol.isLocal","lime/utils/Assets.hx",599,0x95055f23)
HX_LOCAL_STACK_FRAME(_hx_pos_281fad3e86f1efa8_602_exists,"lime.utils._Assets.LibrarySymbol","exists",0xf7109019,"lime.utils._Assets.LibrarySymbol.exists","lime/utils/Assets.hx",602,0x95055f23)
namespace lime{
namespace utils{
namespace _Assets{

void LibrarySymbol_obj::__construct(::String id){
            	HX_STACKFRAME(&_hx_pos_281fad3e86f1efa8_591_new)
HXLINE( 592)		int colonIndex = id.indexOf(HX_(":",3a,00,00,00),null());
HXLINE( 593)		this->libraryName = id.substring(0,colonIndex);
HXLINE( 594)		this->symbolName = id.substring((colonIndex + 1),null());
HXLINE( 595)		this->library = ::lime::utils::Assets_obj::getLibrary(this->libraryName);
            	}

Dynamic LibrarySymbol_obj::__CreateEmpty() { return new LibrarySymbol_obj; }

void *LibrarySymbol_obj::_hx_vtable = 0;

Dynamic LibrarySymbol_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LibrarySymbol_obj > _hx_result = new LibrarySymbol_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LibrarySymbol_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7de02acd;
}

bool LibrarySymbol_obj::isLocal(::String type){
            	HX_STACKFRAME(&_hx_pos_281fad3e86f1efa8_599_isLocal)
HXDLIN( 599)		return this->library->isLocal(this->symbolName,type);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LibrarySymbol_obj,isLocal,return )

bool LibrarySymbol_obj::exists(::String type){
            	HX_STACKFRAME(&_hx_pos_281fad3e86f1efa8_602_exists)
HXDLIN( 602)		return this->library->exists(this->symbolName,type);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LibrarySymbol_obj,exists,return )


::hx::ObjectPtr< LibrarySymbol_obj > LibrarySymbol_obj::__new(::String id) {
	::hx::ObjectPtr< LibrarySymbol_obj > __this = new LibrarySymbol_obj();
	__this->__construct(id);
	return __this;
}

::hx::ObjectPtr< LibrarySymbol_obj > LibrarySymbol_obj::__alloc(::hx::Ctx *_hx_ctx,::String id) {
	LibrarySymbol_obj *__this = (LibrarySymbol_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LibrarySymbol_obj), true, "lime.utils._Assets.LibrarySymbol"));
	*(void **)__this = LibrarySymbol_obj::_hx_vtable;
	__this->__construct(id);
	return __this;
}

LibrarySymbol_obj::LibrarySymbol_obj()
{
}

void LibrarySymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LibrarySymbol);
	HX_MARK_MEMBER_NAME(library,"library");
	HX_MARK_MEMBER_NAME(libraryName,"libraryName");
	HX_MARK_MEMBER_NAME(symbolName,"symbolName");
	HX_MARK_END_CLASS();
}

void LibrarySymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(library,"library");
	HX_VISIT_MEMBER_NAME(libraryName,"libraryName");
	HX_VISIT_MEMBER_NAME(symbolName,"symbolName");
}

::hx::Val LibrarySymbol_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { return ::hx::Val( library ); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return ::hx::Val( isLocal_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"symbolName") ) { return ::hx::Val( symbolName ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"libraryName") ) { return ::hx::Val( libraryName ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LibrarySymbol_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { library=inValue.Cast<  ::lime::utils::AssetLibrary >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"symbolName") ) { symbolName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"libraryName") ) { libraryName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LibrarySymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("library",fb,26,70,3f));
	outFields->push(HX_("libraryName",e6,5e,e7,aa));
	outFields->push(HX_("symbolName",c3,d9,fc,1f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LibrarySymbol_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::lime::utils::AssetLibrary */ ,(int)offsetof(LibrarySymbol_obj,library),HX_("library",fb,26,70,3f)},
	{::hx::fsString,(int)offsetof(LibrarySymbol_obj,libraryName),HX_("libraryName",e6,5e,e7,aa)},
	{::hx::fsString,(int)offsetof(LibrarySymbol_obj,symbolName),HX_("symbolName",c3,d9,fc,1f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LibrarySymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String LibrarySymbol_obj_sMemberFields[] = {
	HX_("library",fb,26,70,3f),
	HX_("libraryName",e6,5e,e7,aa),
	HX_("symbolName",c3,d9,fc,1f),
	HX_("isLocal",21,6d,76,15),
	HX_("exists",dc,1d,e0,bf),
	::String(null()) };

::hx::Class LibrarySymbol_obj::__mClass;

void LibrarySymbol_obj::__register()
{
	LibrarySymbol_obj _hx_dummy;
	LibrarySymbol_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.utils._Assets.LibrarySymbol",91,88,9e,43);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LibrarySymbol_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LibrarySymbol_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LibrarySymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LibrarySymbol_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace utils
} // end namespace _Assets