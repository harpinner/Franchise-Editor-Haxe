#include <hxcpp.h>

#ifndef INCLUDED_HaxeLow
#include <HaxeLow.h>
#endif
#ifndef INCLUDED_HaxeLowDisk
#include <HaxeLowDisk.h>
#endif
#ifndef INCLUDED_Person
#include <Person.h>
#endif
#ifndef INCLUDED_TheApp
#include <TheApp.h>
#endif
#ifndef INCLUDED_feathers_controls_Application
#include <feathers/controls/Application.h>
#endif
#ifndef INCLUDED_feathers_controls_Label
#include <feathers/controls/Label.h>
#endif
#ifndef INCLUDED_feathers_controls_LayoutGroup
#include <feathers/controls/LayoutGroup.h>
#endif
#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IDisplayObject
#include <feathers/core/IDisplayObject.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusManagerAware
#include <feathers/core/IFocusManagerAware.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_feathers_core_IHTMLTextControl
#include <feathers/core/IHTMLTextControl.h>
#endif
#ifndef INCLUDED_feathers_core_IMeasureObject
#include <feathers/core/IMeasureObject.h>
#endif
#ifndef INCLUDED_feathers_core_IStageFocusDelegate
#include <feathers/core/IStageFocusDelegate.h>
#endif
#ifndef INCLUDED_feathers_core_ITextControl
#include <feathers/core/ITextControl.h>
#endif
#ifndef INCLUDED_feathers_core_IUIControl
#include <feathers/core/IUIControl.h>
#endif
#ifndef INCLUDED_feathers_core_IValidating
#include <feathers/core/IValidating.h>
#endif
#ifndef INCLUDED_feathers_core_MeasureSprite
#include <feathers/core/MeasureSprite.h>
#endif
#ifndef INCLUDED_feathers_core_ValidatingSprite
#include <feathers/core/ValidatingSprite.h>
#endif
#ifndef INCLUDED_feathers_layout_ILayoutObject
#include <feathers/layout/ILayoutObject.h>
#endif
#ifndef INCLUDED_feathers_style_IStyleObject
#include <feathers/style/IStyleObject.h>
#endif
#ifndef INCLUDED_feathers_style_IVariantStyleObject
#include <feathers/style/IVariantStyleObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e41cbbb9531df62c_15_new,"TheApp","new",0x4df12dc2,"TheApp.new","TheApp.hx",15,0x9feb3fee)

void TheApp_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e41cbbb9531df62c_15_new)
HXLINE(  16)		super::__construct();
HXLINE(  18)		 ::feathers::controls::Label label =  ::feathers::controls::Label_obj::__alloc( HX_CTX ,null());
HXLINE(  19)		label->set_text(HX_("Hello World",84,f6,db,6f));
HXLINE(  20)		this->addChild(label);
HXLINE(  23)		 ::HaxeLow db =  ::HaxeLow_obj::__alloc( HX_CTX ,HX_("db.json",18,b1,32,30),null());
HXLINE(  26)		::Array< ::Dynamic> persons = db->col(::hx::ClassOf< ::Person >());
HXLINE(  30)		persons->push( ::Person_obj::__alloc( HX_CTX ,HX_("Test",72,f4,d2,37),1977));
HXLINE(  35)		db->save();
            	}

Dynamic TheApp_obj::__CreateEmpty() { return new TheApp_obj; }

void *TheApp_obj::_hx_vtable = 0;

Dynamic TheApp_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TheApp_obj > _hx_result = new TheApp_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool TheApp_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1be5a790) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x093ab78b) {
				if (inClassId<=(int)0x0330636f) {
					return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
				} else {
					return inClassId==(int)0x093ab78b;
				}
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			if (inClassId<=(int)0x128a091e) {
				return inClassId==(int)0x11a722e7 || inClassId==(int)0x128a091e;
			} else {
				return inClassId==(int)0x1be5a790;
			}
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			if (inClassId<=(int)0x4033f4be) {
				return inClassId==(int)0x1f4df417 || inClassId==(int)0x4033f4be;
			} else {
				return inClassId==(int)0x4af7dd8e;
			}
		} else {
			return inClassId==(int)0x58123034 || inClassId==(int)0x6b353933;
		}
	}
}


::hx::ObjectPtr< TheApp_obj > TheApp_obj::__new() {
	::hx::ObjectPtr< TheApp_obj > __this = new TheApp_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< TheApp_obj > TheApp_obj::__alloc(::hx::Ctx *_hx_ctx) {
	TheApp_obj *__this = (TheApp_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TheApp_obj), true, "TheApp"));
	*(void **)__this = TheApp_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

TheApp_obj::TheApp_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *TheApp_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *TheApp_obj_sStaticStorageInfo = 0;
#endif

::hx::Class TheApp_obj::__mClass;

void TheApp_obj::__register()
{
	TheApp_obj _hx_dummy;
	TheApp_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TheApp",d0,e4,9a,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< TheApp_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TheApp_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TheApp_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

