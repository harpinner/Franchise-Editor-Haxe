#ifndef INCLUDED_tjson_TJSON
#define INCLUDED_tjson_TJSON

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tjson,TJSON)

namespace tjson{


class HXCPP_CLASS_ATTRIBUTES TJSON_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TJSON_obj OBJ_;
		TJSON_obj();

	public:
		enum { _hx_ClassId = 0x0b7b3a28 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tjson.TJSON")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tjson.TJSON"); }

		inline static ::hx::ObjectPtr< TJSON_obj > __new() {
			::hx::ObjectPtr< TJSON_obj > __this = new TJSON_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< TJSON_obj > __alloc(::hx::Ctx *_hx_ctx) {
			TJSON_obj *__this = (TJSON_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TJSON_obj), false, "tjson.TJSON"));
			*(void **)__this = TJSON_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TJSON_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TJSON",7c,c4,d1,8e); }

		static void __boot();
		static ::String OBJECT_REFERENCE_PREFIX;
		static  ::Dynamic parse(::String json,::String fileName, ::Dynamic stringProcessor);
		static ::Dynamic parse_dyn();

		static ::String encode( ::Dynamic obj, ::Dynamic style,::hx::Null< bool >  useCache);
		static ::Dynamic encode_dyn();

};

} // end namespace tjson

#endif /* INCLUDED_tjson_TJSON */ 
