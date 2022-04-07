#include <hxcpp.h>

#ifndef INCLUDED_HaxeLowDisk
#include <HaxeLowDisk.h>
#endif
#ifndef INCLUDED_SysDisk
#include <SysDisk.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2bd673f4dcb9f1ac_68_new,"SysDisk","new",0x631bd0dc,"SysDisk.new","HaxeLow.hx",68,0xd56d4f90)
HX_LOCAL_STACK_FRAME(_hx_pos_2bd673f4dcb9f1ac_71_readFileSync,"SysDisk","readFileSync",0xc9230071,"SysDisk.readFileSync","HaxeLow.hx",71,0xd56d4f90)
HX_LOCAL_STACK_FRAME(_hx_pos_2bd673f4dcb9f1ac_75_writeFile,"SysDisk","writeFile",0x199d4877,"SysDisk.writeFile","HaxeLow.hx",75,0xd56d4f90)

void SysDisk_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2bd673f4dcb9f1ac_68_new)
            	}

Dynamic SysDisk_obj::__CreateEmpty() { return new SysDisk_obj; }

void *SysDisk_obj::_hx_vtable = 0;

Dynamic SysDisk_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SysDisk_obj > _hx_result = new SysDisk_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SysDisk_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x011b182a;
}

static ::HaxeLowDisk_obj _hx_SysDisk__hx_HaxeLowDisk= {
	( ::String (::hx::Object::*)(::String))&::SysDisk_obj::readFileSync,
	( void (::hx::Object::*)(::String,::String))&::SysDisk_obj::writeFile,
};

void *SysDisk_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xf8c3be6b: return &_hx_SysDisk__hx_HaxeLowDisk;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

::String SysDisk_obj::readFileSync(::String file){
            	HX_STACKFRAME(&_hx_pos_2bd673f4dcb9f1ac_71_readFileSync)
HXDLIN(  71)		if (::sys::FileSystem_obj::exists(file)) {
HXDLIN(  71)			return ::sys::io::File_obj::getContent(file);
            		}
            		else {
HXDLIN(  71)			return null();
            		}
HXDLIN(  71)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(SysDisk_obj,readFileSync,return )

void SysDisk_obj::writeFile(::String file,::String data){
            	HX_STACKFRAME(&_hx_pos_2bd673f4dcb9f1ac_75_writeFile)
HXDLIN(  75)		::sys::io::File_obj::saveContent(file,data);
            	}


HX_DEFINE_DYNAMIC_FUNC2(SysDisk_obj,writeFile,(void))


::hx::ObjectPtr< SysDisk_obj > SysDisk_obj::__new() {
	::hx::ObjectPtr< SysDisk_obj > __this = new SysDisk_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SysDisk_obj > SysDisk_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SysDisk_obj *__this = (SysDisk_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SysDisk_obj), false, "SysDisk"));
	*(void **)__this = SysDisk_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SysDisk_obj::SysDisk_obj()
{
}

::hx::Val SysDisk_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"writeFile") ) { return ::hx::Val( writeFile_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"readFileSync") ) { return ::hx::Val( readFileSync_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SysDisk_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SysDisk_obj_sStaticStorageInfo = 0;
#endif

static ::String SysDisk_obj_sMemberFields[] = {
	HX_("readFileSync",6d,f0,d8,a0),
	HX_("writeFile",fb,c2,6f,4c),
	::String(null()) };

::hx::Class SysDisk_obj::__mClass;

void SysDisk_obj::__register()
{
	SysDisk_obj _hx_dummy;
	SysDisk_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("SysDisk",ea,72,fb,40);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SysDisk_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SysDisk_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SysDisk_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SysDisk_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

