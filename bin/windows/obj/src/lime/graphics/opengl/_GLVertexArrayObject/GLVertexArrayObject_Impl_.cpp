#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLVertexArrayObject_GLVertexArrayObject_Impl_
#include <lime/graphics/opengl/_GLVertexArrayObject/GLVertexArrayObject_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_7e0f8c2e5e5d29bc_12_fromInt,"lime.graphics.opengl._GLVertexArrayObject.GLVertexArrayObject_Impl_","fromInt",0xdded5f3d,"lime.graphics.opengl._GLVertexArrayObject.GLVertexArrayObject_Impl_.fromInt","lime/graphics/opengl/GLVertexArrayObject.hx",12,0x5a893a25)
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLVertexArrayObject{

void GLVertexArrayObject_Impl__obj::__construct() { }

Dynamic GLVertexArrayObject_Impl__obj::__CreateEmpty() { return new GLVertexArrayObject_Impl__obj; }

void *GLVertexArrayObject_Impl__obj::_hx_vtable = 0;

Dynamic GLVertexArrayObject_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GLVertexArrayObject_Impl__obj > _hx_result = new GLVertexArrayObject_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLVertexArrayObject_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4fa2d9b0;
}

 ::lime::graphics::opengl::GLObject GLVertexArrayObject_Impl__obj::fromInt(int id){
            	HX_STACKFRAME(&_hx_pos_7e0f8c2e5e5d29bc_12_fromInt)
HXDLIN(  12)		return ::lime::graphics::opengl::GLObject_obj::fromInt(7,id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLVertexArrayObject_Impl__obj,fromInt,return )


GLVertexArrayObject_Impl__obj::GLVertexArrayObject_Impl__obj()
{
}

bool GLVertexArrayObject_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GLVertexArrayObject_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *GLVertexArrayObject_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class GLVertexArrayObject_Impl__obj::__mClass;

static ::String GLVertexArrayObject_Impl__obj_sStaticFields[] = {
	HX_("fromInt",a5,dd,fa,57),
	::String(null())
};

void GLVertexArrayObject_Impl__obj::__register()
{
	GLVertexArrayObject_Impl__obj _hx_dummy;
	GLVertexArrayObject_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl._GLVertexArrayObject.GLVertexArrayObject_Impl_",06,8a,9f,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLVertexArrayObject_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GLVertexArrayObject_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GLVertexArrayObject_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLVertexArrayObject_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLVertexArrayObject_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLVertexArrayObject
