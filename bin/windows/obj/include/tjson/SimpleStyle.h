#ifndef INCLUDED_tjson_SimpleStyle
#define INCLUDED_tjson_SimpleStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tjson_EncodeStyle
#include <tjson/EncodeStyle.h>
#endif
HX_DECLARE_CLASS1(tjson,EncodeStyle)
HX_DECLARE_CLASS1(tjson,SimpleStyle)

namespace tjson{


class HXCPP_CLASS_ATTRIBUTES SimpleStyle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SimpleStyle_obj OBJ_;
		SimpleStyle_obj();

	public:
		enum { _hx_ClassId = 0x3c0f27c7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="tjson.SimpleStyle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"tjson.SimpleStyle"); }
		static ::hx::ObjectPtr< SimpleStyle_obj > __new();
		static ::hx::ObjectPtr< SimpleStyle_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SimpleStyle_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("SimpleStyle",7f,33,e8,81); }

		::String beginObject(int depth);
		::Dynamic beginObject_dyn();

		::String endObject(int depth);
		::Dynamic endObject_dyn();

		::String beginArray(int depth);
		::Dynamic beginArray_dyn();

		::String endArray(int depth);
		::Dynamic endArray_dyn();

		::String firstEntry(int depth);
		::Dynamic firstEntry_dyn();

		::String entrySeperator(int depth);
		::Dynamic entrySeperator_dyn();

		::String keyValueSeperator(int depth);
		::Dynamic keyValueSeperator_dyn();

};

} // end namespace tjson

#endif /* INCLUDED_tjson_SimpleStyle */ 
