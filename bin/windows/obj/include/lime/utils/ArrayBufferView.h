#ifndef INCLUDED_lime_utils_ArrayBufferView
#define INCLUDED_lime_utils_ArrayBufferView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace lime{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES ArrayBufferView_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ArrayBufferView_obj OBJ_;
		ArrayBufferView_obj();

	public:
		enum { _hx_ClassId = 0x24c8740e };

		void __construct( ::Dynamic elements,int in_type);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.utils.ArrayBufferView")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.utils.ArrayBufferView"); }
		static ::hx::ObjectPtr< ArrayBufferView_obj > __new( ::Dynamic elements,int in_type);
		static ::hx::ObjectPtr< ArrayBufferView_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic elements,int in_type);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ArrayBufferView_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ArrayBufferView",5e,6e,84,fd); }

		 ::lime::utils::ArrayBufferView subarray_lime_utils_UInt32Array(int begin, ::Dynamic end);
		::Dynamic subarray_lime_utils_UInt32Array_dyn();

		 ::lime::utils::ArrayBufferView subarray_lime_utils_Int32Array(int begin, ::Dynamic end);
		::Dynamic subarray_lime_utils_Int32Array_dyn();

		 ::lime::utils::ArrayBufferView subarray_lime_utils_Float32Array(int begin, ::Dynamic end);
		::Dynamic subarray_lime_utils_Float32Array_dyn();

		 ::lime::utils::ArrayBufferView subarray_lime_utils_Float64Array(int begin, ::Dynamic end);
		::Dynamic subarray_lime_utils_Float64Array_dyn();

		 ::lime::utils::ArrayBufferView subarray_lime_utils_Int16Array(int begin, ::Dynamic end);
		::Dynamic subarray_lime_utils_Int16Array_dyn();

		 ::lime::utils::ArrayBufferView subarray_lime_utils_Int8Array(int begin, ::Dynamic end);
		::Dynamic subarray_lime_utils_Int8Array_dyn();

		 ::lime::utils::ArrayBufferView subarray_lime_utils_UInt8ClampedArray(int begin, ::Dynamic end);
		::Dynamic subarray_lime_utils_UInt8ClampedArray_dyn();

		 ::lime::utils::ArrayBufferView subarray_lime_utils_UInt16Array(int begin, ::Dynamic end);
		::Dynamic subarray_lime_utils_UInt16Array_dyn();

		 ::lime::utils::ArrayBufferView subarray_lime_utils_UInt8Array(int begin, ::Dynamic end);
		::Dynamic subarray_lime_utils_UInt8Array_dyn();

		int type;
		 ::haxe::io::Bytes buffer;
		int byteOffset;
		int byteLength;
		int length;
		int bytesPerElement;
		 ::lime::utils::ArrayBufferView initTypedArray( ::lime::utils::ArrayBufferView view);
		::Dynamic initTypedArray_dyn();

		 ::lime::utils::ArrayBufferView initBuffer( ::haxe::io::Bytes in_buffer,::hx::Null< int >  in_byteOffset, ::Dynamic len);
		::Dynamic initBuffer_dyn();

		 ::lime::utils::ArrayBufferView initArray(::cpp::VirtualArray array);
		::Dynamic initArray_dyn();

		void set( ::lime::utils::ArrayBufferView view,::cpp::VirtualArray array,::hx::Null< int >  offset);
		::Dynamic set_dyn();

		void cloneBuffer( ::haxe::io::Bytes src,::hx::Null< int >  srcByteOffset);
		::Dynamic cloneBuffer_dyn();

		int bytesForType(int type);
		::Dynamic bytesForType_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		int toByteLength(int elemCount);
		::Dynamic toByteLength_dyn();

		void copyFromArray(::Array< Float > array,::hx::Null< int >  offset);
		::Dynamic copyFromArray_dyn();

};

} // end namespace lime
} // end namespace utils

#endif /* INCLUDED_lime_utils_ArrayBufferView */ 
