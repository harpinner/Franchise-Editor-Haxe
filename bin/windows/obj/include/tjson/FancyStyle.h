#ifndef INCLUDED_tjson_FancyStyle
#define INCLUDED_tjson_FancyStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_tjson_EncodeStyle
#include <tjson/EncodeStyle.h>
#endif
HX_DECLARE_CLASS1(tjson,EncodeStyle)
HX_DECLARE_CLASS1(tjson,FancyStyle)

namespace tjson{


class HXCPP_CLASS_ATTRIBUTES FancyStyle_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FancyStyle_obj OBJ_;
		FancyStyle_obj();

	public:
		enum { _hx_ClassId = 0x297922e4 };

		void __construct(::String __o_tab);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tjson.FancyStyle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tjson.FancyStyle"); }
		static ::hx::ObjectPtr< FancyStyle_obj > __new(::String __o_tab);
		static ::hx::ObjectPtr< FancyStyle_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_tab);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FancyStyle_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FancyStyle",48,44,c9,a2); }

		::String tab;
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

		::Array< ::String > charTimesNCache;
		::String charTimesN(int n);
		::Dynamic charTimesN_dyn();

};

} // end namespace tjson

#endif /* INCLUDED_tjson_FancyStyle */ 
