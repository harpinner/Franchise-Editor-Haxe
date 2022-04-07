#ifndef INCLUDED_SysDisk
#define INCLUDED_SysDisk

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_HaxeLowDisk
#include <HaxeLowDisk.h>
#endif
HX_DECLARE_CLASS0(HaxeLowDisk)
HX_DECLARE_CLASS0(SysDisk)



class HXCPP_CLASS_ATTRIBUTES SysDisk_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SysDisk_obj OBJ_;
		SysDisk_obj();

	public:
		enum { _hx_ClassId = 0x011b182a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="SysDisk")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"SysDisk"); }
		static ::hx::ObjectPtr< SysDisk_obj > __new();
		static ::hx::ObjectPtr< SysDisk_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SysDisk_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("SysDisk",ea,72,fb,40); }

		::String readFileSync(::String file);
		::Dynamic readFileSync_dyn();

		void writeFile(::String file,::String data);
		::Dynamic writeFile_dyn();

};


#endif /* INCLUDED_SysDisk */ 
