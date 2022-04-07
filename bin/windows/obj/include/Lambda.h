#ifndef INCLUDED_Lambda
#define INCLUDED_Lambda

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Lambda)



class HXCPP_CLASS_ATTRIBUTES Lambda_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Lambda_obj OBJ_;
		Lambda_obj();

	public:
		enum { _hx_ClassId = 0x4cec6e4b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="Lambda")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"Lambda"); }

		inline static ::hx::ObjectPtr< Lambda_obj > __new() {
			::hx::ObjectPtr< Lambda_obj > __this = new Lambda_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Lambda_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Lambda_obj *__this = (Lambda_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Lambda_obj), false, "Lambda"));
			*(void **)__this = Lambda_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Lambda_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Lambda",27,a7,54,85); }

		static ::cpp::VirtualArray array( ::Dynamic it);
		static ::Dynamic array_dyn();

		static  ::Dynamic find( ::Dynamic it, ::Dynamic f);
		static ::Dynamic find_dyn();

};


#endif /* INCLUDED_Lambda */ 
