#ifndef INCLUDED__HaxeLowCol_HaxeLowCol_Impl_
#define INCLUDED__HaxeLowCol_HaxeLowCol_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(_HaxeLowCol,HaxeLowCol_Impl_)

namespace _HaxeLowCol{


class HXCPP_CLASS_ATTRIBUTES HaxeLowCol_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HaxeLowCol_Impl__obj OBJ_;
		HaxeLowCol_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0504f563 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="_HaxeLowCol.HaxeLowCol_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"_HaxeLowCol.HaxeLowCol_Impl_"); }

		inline static ::hx::ObjectPtr< HaxeLowCol_Impl__obj > __new() {
			::hx::ObjectPtr< HaxeLowCol_Impl__obj > __this = new HaxeLowCol_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< HaxeLowCol_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			HaxeLowCol_Impl__obj *__this = (HaxeLowCol_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HaxeLowCol_Impl__obj), false, "_HaxeLowCol.HaxeLowCol_Impl_"));
			*(void **)__this = HaxeLowCol_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HaxeLowCol_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HaxeLowCol_Impl_",12,c3,9b,e0); }

		static ::cpp::VirtualArray _new(::cpp::VirtualArray array,::String keyField);
		static ::Dynamic _new_dyn();

		static  ::Dynamic idGet(::cpp::VirtualArray this1, ::Dynamic id);
		static ::Dynamic idGet_dyn();

		static bool idInsert(::cpp::VirtualArray this1, ::Dynamic obj);
		static ::Dynamic idInsert_dyn();

		static  ::Dynamic idUpdate(::cpp::VirtualArray this1, ::Dynamic id, ::Dynamic props);
		static ::Dynamic idUpdate_dyn();

		static bool idReplace(::cpp::VirtualArray this1, ::Dynamic obj);
		static ::Dynamic idReplace_dyn();

		static  ::Dynamic idRemove(::cpp::VirtualArray this1, ::Dynamic id);
		static ::Dynamic idRemove_dyn();

		static  ::Dynamic keyValue(::cpp::VirtualArray this1, ::Dynamic obj);
		static ::Dynamic keyValue_dyn();

};

} // end namespace _HaxeLowCol

#endif /* INCLUDED__HaxeLowCol_HaxeLowCol_Impl_ */ 
