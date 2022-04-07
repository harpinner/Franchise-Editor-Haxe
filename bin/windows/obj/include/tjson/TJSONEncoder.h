#ifndef INCLUDED_tjson_TJSONEncoder
#define INCLUDED_tjson_TJSONEncoder

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(tjson,EncodeStyle)
HX_DECLARE_CLASS1(tjson,TJSONEncoder)

namespace tjson{


class HXCPP_CLASS_ATTRIBUTES TJSONEncoder_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TJSONEncoder_obj OBJ_;
		TJSONEncoder_obj();

	public:
		enum { _hx_ClassId = 0x53edd738 };

		void __construct(::hx::Null< bool >  __o_useCache);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tjson.TJSONEncoder")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tjson.TJSONEncoder"); }
		static ::hx::ObjectPtr< TJSONEncoder_obj > __new(::hx::Null< bool >  __o_useCache);
		static ::hx::ObjectPtr< TJSONEncoder_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_useCache);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TJSONEncoder_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TJSONEncoder",80,0c,ff,2b); }

		::cpp::VirtualArray cache;
		bool uCache;
		::String doEncode( ::Dynamic obj, ::Dynamic style);
		::Dynamic doEncode_dyn();

		::String encodeObject( ::Dynamic obj,::Dynamic style,int depth);
		::Dynamic encodeObject_dyn();

		::String encodeMap( ::haxe::ds::StringMap obj,::Dynamic style,int depth);
		::Dynamic encodeMap_dyn();

		::String encodeIterable( ::Dynamic obj,::Dynamic style,int depth);
		::Dynamic encodeIterable_dyn();

		::String cacheEncode( ::Dynamic value);
		::Dynamic cacheEncode_dyn();

		::String encodeValue( ::Dynamic value,::Dynamic style,int depth);
		::Dynamic encodeValue_dyn();

};

} // end namespace tjson

#endif /* INCLUDED_tjson_TJSONEncoder */ 
