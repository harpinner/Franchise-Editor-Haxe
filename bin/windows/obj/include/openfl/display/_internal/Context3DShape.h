#ifndef INCLUDED_openfl_display__internal_Context3DShape
#define INCLUDED_openfl_display__internal_Context3DShape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,OpenGLRenderer)
HX_DECLARE_CLASS3(openfl,display,_internal,Context3DShape)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES Context3DShape_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Context3DShape_obj OBJ_;
		Context3DShape_obj();

	public:
		enum { _hx_ClassId = 0x20f2636b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.Context3DShape")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.Context3DShape"); }

		inline static ::hx::ObjectPtr< Context3DShape_obj > __new() {
			::hx::ObjectPtr< Context3DShape_obj > __this = new Context3DShape_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Context3DShape_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Context3DShape_obj *__this = (Context3DShape_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Context3DShape_obj), false, "openfl.display._internal.Context3DShape"));
			*(void **)__this = Context3DShape_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Context3DShape_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Context3DShape",c1,ae,98,08); }

		static void __boot();
		static  ::Dynamic __meta__;
		static void render( ::openfl::display::DisplayObject shape, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic render_dyn();

		static void renderMask( ::openfl::display::DisplayObject shape, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic renderMask_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_Context3DShape */ 
