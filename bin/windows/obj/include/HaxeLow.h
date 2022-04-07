#ifndef INCLUDED_HaxeLow
#define INCLUDED_HaxeLow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(HaxeLow)
HX_DECLARE_CLASS0(HaxeLowDisk)



class HXCPP_CLASS_ATTRIBUTES HaxeLow_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HaxeLow_obj OBJ_;
		HaxeLow_obj();

	public:
		enum { _hx_ClassId = 0x0a348d9e };

		void __construct(::String file,::Dynamic disk);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="HaxeLow")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"HaxeLow"); }
		static ::hx::ObjectPtr< HaxeLow_obj > __new(::String file,::Dynamic disk);
		static ::hx::ObjectPtr< HaxeLow_obj > __alloc(::hx::Ctx *_hx_ctx,::String file,::Dynamic disk);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HaxeLow_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HaxeLow",ee,9b,b9,d5); }

		static ::String uuid();
		static ::Dynamic uuid_dyn();

		::String file;
		 ::Dynamic db;
		::String checksum;
		::Dynamic disk;
		::String backup(::String file);
		::Dynamic backup_dyn();

		 ::HaxeLow restore(::String s);
		::Dynamic restore_dyn();

		 ::HaxeLow save();
		::Dynamic save_dyn();

		::cpp::VirtualArray col(::hx::Class cls);
		::Dynamic col_dyn();

		::cpp::VirtualArray keyCol(::hx::Class cls,::String keyField,::hx::Class keyType);
		::Dynamic keyCol_dyn();

		::cpp::VirtualArray idCol(::hx::Class cls,::hx::Class keyType);
		::Dynamic idCol_dyn();

		::cpp::VirtualArray _idCol(::hx::Class cls,::hx::Class keyType);
		::Dynamic _idCol_dyn();

};


#endif /* INCLUDED_HaxeLow */ 
