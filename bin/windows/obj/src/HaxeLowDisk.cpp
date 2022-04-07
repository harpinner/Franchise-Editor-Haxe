#include <hxcpp.h>

#ifndef INCLUDED_HaxeLowDisk
#include <HaxeLowDisk.h>
#endif



static ::String HaxeLowDisk_obj_sMemberFields[] = {
	HX_("readFileSync",6d,f0,d8,a0),
	HX_("writeFile",fb,c2,6f,4c),
	::String(null()) };

::hx::Class HaxeLowDisk_obj::__mClass;

void HaxeLowDisk_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HaxeLowDisk",6b,be,c3,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HaxeLowDisk_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0xf8c3be6b >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

