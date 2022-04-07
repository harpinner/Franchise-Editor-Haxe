#ifndef INCLUDED_tjson_TJSONParser
#define INCLUDED_tjson_TJSONParser

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS1(tjson,TJSONParser)

namespace tjson{


class HXCPP_CLASS_ATTRIBUTES TJSONParser_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TJSONParser_obj OBJ_;
		TJSONParser_obj();

	public:
		enum { _hx_ClassId = 0x0a32445f };

		void __construct(::String vjson,::String __o_vfileName, ::Dynamic stringProcessor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="tjson.TJSONParser")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"tjson.TJSONParser"); }
		static ::hx::ObjectPtr< TJSONParser_obj > __new(::String vjson,::String __o_vfileName, ::Dynamic stringProcessor);
		static ::hx::ObjectPtr< TJSONParser_obj > __alloc(::hx::Ctx *_hx_ctx,::String vjson,::String __o_vfileName, ::Dynamic stringProcessor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TJSONParser_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TJSONParser",7b,5a,ff,b6); }

		int pos;
		::String json;
		bool lastSymbolQuoted;
		::String fileName;
		int currentLine;
		::cpp::VirtualArray cache;
		 ::EReg floatRegex;
		 ::EReg intRegex;
		 ::Dynamic strProcessor;
		Dynamic strProcessor_dyn() { return strProcessor;}
		 ::Dynamic doParse();
		::Dynamic doParse_dyn();

		 ::Dynamic doObject();
		::Dynamic doObject_dyn();

		 ::Dynamic doArray();
		::Dynamic doArray_dyn();

		 ::Dynamic convertSymbolToProperType(::String symbol);
		::Dynamic convertSymbolToProperType_dyn();

		bool looksLikeFloat(::String s);
		::Dynamic looksLikeFloat_dyn();

		bool looksLikeInt(::String s);
		::Dynamic looksLikeInt_dyn();

		::String getNextSymbol();
		::Dynamic getNextSymbol_dyn();

		 ::Dynamic defaultStringProcessor(::String str);
		::Dynamic defaultStringProcessor_dyn();

};

} // end namespace tjson

#endif /* INCLUDED_tjson_TJSONParser */ 
