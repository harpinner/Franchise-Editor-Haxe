#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFTFontFace_CairoFTFontFace_Impl_
#include <lime/graphics/cairo/_CairoFTFontFace/CairoFTFontFace_Impl_.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e6becfba65ad45cf_13__new,"lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_","_new",0x5b2d72e8,"lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_._new","lime/graphics/cairo/CairoFTFontFace.hx",13,0x9647c8cd)
HX_LOCAL_STACK_FRAME(_hx_pos_e6becfba65ad45cf_21_create,"lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_","create",0x7e957443,"lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_.create","lime/graphics/cairo/CairoFTFontFace.hx",21,0x9647c8cd)
HX_LOCAL_STACK_FRAME(_hx_pos_e6becfba65ad45cf_11_boot,"lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_","boot",0x5d29e1b9,"lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_.boot","lime/graphics/cairo/CairoFTFontFace.hx",11,0x9647c8cd)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFTFontFace{

void CairoFTFontFace_Impl__obj::__construct() { }

Dynamic CairoFTFontFace_Impl__obj::__CreateEmpty() { return new CairoFTFontFace_Impl__obj; }

void *CairoFTFontFace_Impl__obj::_hx_vtable = 0;

Dynamic CairoFTFontFace_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CairoFTFontFace_Impl__obj > _hx_result = new CairoFTFontFace_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoFTFontFace_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7cf1769f;
}

int CairoFTFontFace_Impl__obj::FT_LOAD_FORCE_AUTOHINT;

 ::Dynamic CairoFTFontFace_Impl__obj::_new(){
            	HX_STACKFRAME(&_hx_pos_e6becfba65ad45cf_13__new)
HXDLIN(  13)		 ::Dynamic this1 = 0;
HXDLIN(  13)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoFTFontFace_Impl__obj,_new,return )

 ::Dynamic CairoFTFontFace_Impl__obj::create( ::lime::text::Font face,int loadFlags){
            	HX_STACKFRAME(&_hx_pos_e6becfba65ad45cf_21_create)
HXDLIN(  21)		return ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_cairo_ft_font_face_create(::hx::DynamicPtr(face->src),loadFlags)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFTFontFace_Impl__obj,create,return )


CairoFTFontFace_Impl__obj::CairoFTFontFace_Impl__obj()
{
}

bool CairoFTFontFace_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CairoFTFontFace_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CairoFTFontFace_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &CairoFTFontFace_Impl__obj::FT_LOAD_FORCE_AUTOHINT,HX_("FT_LOAD_FORCE_AUTOHINT",32,dd,a6,d5)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CairoFTFontFace_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoFTFontFace_Impl__obj::FT_LOAD_FORCE_AUTOHINT,"FT_LOAD_FORCE_AUTOHINT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoFTFontFace_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoFTFontFace_Impl__obj::FT_LOAD_FORCE_AUTOHINT,"FT_LOAD_FORCE_AUTOHINT");
};

#endif

::hx::Class CairoFTFontFace_Impl__obj::__mClass;

static ::String CairoFTFontFace_Impl__obj_sStaticFields[] = {
	HX_("FT_LOAD_FORCE_AUTOHINT",32,dd,a6,d5),
	HX_("_new",61,15,1f,3f),
	HX_("create",fc,66,0f,7c),
	::String(null())
};

void CairoFTFontFace_Impl__obj::__register()
{
	CairoFTFontFace_Impl__obj _hx_dummy;
	CairoFTFontFace_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_",47,f0,50,48);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoFTFontFace_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CairoFTFontFace_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CairoFTFontFace_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CairoFTFontFace_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoFTFontFace_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoFTFontFace_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoFTFontFace_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoFTFontFace_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e6becfba65ad45cf_11_boot)
HXDLIN(  11)		FT_LOAD_FORCE_AUTOHINT = 32;
            	}
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFTFontFace
