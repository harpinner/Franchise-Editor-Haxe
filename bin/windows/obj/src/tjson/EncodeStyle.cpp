#include <hxcpp.h>

#ifndef INCLUDED_tjson_EncodeStyle
#include <tjson/EncodeStyle.h>
#endif

namespace tjson{


static ::String EncodeStyle_obj_sMemberFields[] = {
	HX_("beginObject",c8,61,65,af),
	HX_("endObject",fa,cc,21,55),
	HX_("beginArray",b0,7e,58,9b),
	HX_("endArray",be,ff,8c,23),
	HX_("firstEntry",22,c2,64,ae),
	HX_("entrySeperator",0f,9b,d3,44),
	HX_("keyValueSeperator",2f,52,8b,7d),
	::String(null()) };

::hx::Class EncodeStyle_obj::__mClass;

void EncodeStyle_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tjson.EncodeStyle",49,24,9e,63);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EncodeStyle_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x6f55723f >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tjson
