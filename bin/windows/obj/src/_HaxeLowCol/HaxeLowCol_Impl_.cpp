#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED__HaxeLowCol_HaxeLowCol_Impl_
#include <_HaxeLowCol/HaxeLowCol_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6b72278924c0a614_5__new,"_HaxeLowCol.HaxeLowCol_Impl_","_new",0x13b0e420,"_HaxeLowCol.HaxeLowCol_Impl_._new","HaxeLowCol.hx",5,0x893e210c)
HX_LOCAL_STACK_FRAME(_hx_pos_6b72278924c0a614_11_idGet,"_HaxeLowCol.HaxeLowCol_Impl_","idGet",0xe2658fdc,"_HaxeLowCol.HaxeLowCol_Impl_.idGet","HaxeLowCol.hx",11,0x893e210c)
HX_LOCAL_STACK_FRAME(_hx_pos_6b72278924c0a614_17_idInsert,"_HaxeLowCol.HaxeLowCol_Impl_","idInsert",0xfc9e83b3,"_HaxeLowCol.HaxeLowCol_Impl_.idInsert","HaxeLowCol.hx",17,0x893e210c)
HX_LOCAL_STACK_FRAME(_hx_pos_6b72278924c0a614_26_idUpdate,"_HaxeLowCol.HaxeLowCol_Impl_","idUpdate",0xe5c6c683,"_HaxeLowCol.HaxeLowCol_Impl_.idUpdate","HaxeLowCol.hx",26,0x893e210c)
HX_LOCAL_STACK_FRAME(_hx_pos_6b72278924c0a614_40_idReplace,"_HaxeLowCol.HaxeLowCol_Impl_","idReplace",0x357f727a,"_HaxeLowCol.HaxeLowCol_Impl_.idReplace","HaxeLowCol.hx",40,0x893e210c)
HX_LOCAL_STACK_FRAME(_hx_pos_6b72278924c0a614_51_idRemove,"_HaxeLowCol.HaxeLowCol_Impl_","idRemove",0x6349dcbe,"_HaxeLowCol.HaxeLowCol_Impl_.idRemove","HaxeLowCol.hx",51,0x893e210c)
HX_LOCAL_STACK_FRAME(_hx_pos_6b72278924c0a614_58_keyValue,"_HaxeLowCol.HaxeLowCol_Impl_","keyValue",0xec3bbf91,"_HaxeLowCol.HaxeLowCol_Impl_.keyValue","HaxeLowCol.hx",58,0x893e210c)
namespace _HaxeLowCol{

void HaxeLowCol_Impl__obj::__construct() { }

Dynamic HaxeLowCol_Impl__obj::__CreateEmpty() { return new HaxeLowCol_Impl__obj; }

void *HaxeLowCol_Impl__obj::_hx_vtable = 0;

Dynamic HaxeLowCol_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HaxeLowCol_Impl__obj > _hx_result = new HaxeLowCol_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HaxeLowCol_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0504f563;
}

::cpp::VirtualArray HaxeLowCol_Impl__obj::_new(::cpp::VirtualArray array,::String keyField){
            	HX_STACKFRAME(&_hx_pos_6b72278924c0a614_5__new)
HXDLIN(   5)		::cpp::VirtualArray this1 = array;
HXLINE(   7)		if (::hx::IsNotNull( keyField )) {
HXLINE(   7)			::Reflect_obj::setField(this1,HX_("__haxeLowId",69,9c,a4,78),keyField);
            		}
HXLINE(   5)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HaxeLowCol_Impl__obj,_new,return )

 ::Dynamic HaxeLowCol_Impl__obj::idGet(::cpp::VirtualArray this1, ::Dynamic id){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,id,::cpp::VirtualArray,this1) HXARGC(1)
            		bool _hx_run( ::Dynamic o){
            			HX_STACKFRAME(&_hx_pos_6b72278924c0a614_11_idGet)
HXDLIN(  11)			 ::Dynamic _hx_tmp = ::Reflect_obj::field(o,( (::String)(::Reflect_obj::field(this1,HX_("__haxeLowId",69,9c,a4,78))) ));
HXDLIN(  11)			return ::hx::IsEq( _hx_tmp,id );
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_6b72278924c0a614_11_idGet)
HXDLIN(  11)		return ::Lambda_obj::find(this1, ::Dynamic(new _hx_Closure_0(id,this1)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HaxeLowCol_Impl__obj,idGet,return )

bool HaxeLowCol_Impl__obj::idInsert(::cpp::VirtualArray this1, ::Dynamic obj){
            	HX_STACKFRAME(&_hx_pos_6b72278924c0a614_17_idInsert)
HXLINE(  18)		if (::hx::IsNull( ::_HaxeLowCol::HaxeLowCol_Impl__obj::idGet(this1,::Reflect_obj::field(obj,( (::String)(::Reflect_obj::field(this1,HX_("__haxeLowId",69,9c,a4,78))) ))) )) {
HXLINE(  19)			this1->push(obj);
HXLINE(  20)			return true;
            		}
HXLINE(  23)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HaxeLowCol_Impl__obj,idInsert,return )

 ::Dynamic HaxeLowCol_Impl__obj::idUpdate(::cpp::VirtualArray this1, ::Dynamic id, ::Dynamic props){
            	HX_STACKFRAME(&_hx_pos_6b72278924c0a614_26_idUpdate)
HXLINE(  27)		 ::Dynamic exists = ::_HaxeLowCol::HaxeLowCol_Impl__obj::idGet(this1,id);
HXLINE(  28)		if (::hx::IsNull( exists )) {
HXLINE(  28)			return null();
            		}
HXLINE(  30)		{
HXLINE(  30)			int _g = 0;
HXDLIN(  30)			::Array< ::String > _g1 = ::Type_obj::getInstanceFields(::Type_obj::getClass(exists));
HXDLIN(  30)			while((_g < _g1->length)){
HXLINE(  30)				::String field = _g1->__get(_g);
HXDLIN(  30)				_g = (_g + 1);
HXLINE(  31)				if (::Reflect_obj::hasField(props,field)) {
HXLINE(  32)					::Reflect_obj::setProperty(exists,field,::Reflect_obj::field(props,field));
            				}
            			}
            		}
HXLINE(  34)		return exists;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HaxeLowCol_Impl__obj,idUpdate,return )

bool HaxeLowCol_Impl__obj::idReplace(::cpp::VirtualArray this1, ::Dynamic obj){
            	HX_STACKFRAME(&_hx_pos_6b72278924c0a614_40_idReplace)
HXLINE(  41)		 ::Dynamic exists = ::_HaxeLowCol::HaxeLowCol_Impl__obj::idGet(this1,::Reflect_obj::field(obj,( (::String)(::Reflect_obj::field(this1,HX_("__haxeLowId",69,9c,a4,78))) )));
HXLINE(  42)		if (::hx::IsNotNull( exists )) {
HXLINE(  43)			if (::hx::IsEq( exists,obj )) {
HXLINE(  43)				return false;
            			}
HXLINE(  44)			this1->remove(exists);
            		}
HXLINE(  47)		this1->push(obj);
HXLINE(  48)		return ::hx::IsNotNull( exists );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HaxeLowCol_Impl__obj,idReplace,return )

 ::Dynamic HaxeLowCol_Impl__obj::idRemove(::cpp::VirtualArray this1, ::Dynamic id){
            	HX_STACKFRAME(&_hx_pos_6b72278924c0a614_51_idRemove)
HXLINE(  52)		 ::Dynamic exists = ::_HaxeLowCol::HaxeLowCol_Impl__obj::idGet(this1,id);
HXLINE(  53)		if (::hx::IsNull( exists )) {
HXLINE(  53)			return null();
            		}
HXLINE(  54)		this1->remove(exists);
HXLINE(  55)		return exists;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HaxeLowCol_Impl__obj,idRemove,return )

 ::Dynamic HaxeLowCol_Impl__obj::keyValue(::cpp::VirtualArray this1, ::Dynamic obj){
            	HX_STACKFRAME(&_hx_pos_6b72278924c0a614_58_keyValue)
HXDLIN(  58)		return ::Reflect_obj::field(obj,( (::String)(::Reflect_obj::field(this1,HX_("__haxeLowId",69,9c,a4,78))) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HaxeLowCol_Impl__obj,keyValue,return )


HaxeLowCol_Impl__obj::HaxeLowCol_Impl__obj()
{
}

bool HaxeLowCol_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"idGet") ) { outValue = idGet_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"idInsert") ) { outValue = idInsert_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"idUpdate") ) { outValue = idUpdate_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"idRemove") ) { outValue = idRemove_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"keyValue") ) { outValue = keyValue_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"idReplace") ) { outValue = idReplace_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HaxeLowCol_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HaxeLowCol_Impl__obj_sStaticStorageInfo = 0;
#endif

::hx::Class HaxeLowCol_Impl__obj::__mClass;

static ::String HaxeLowCol_Impl__obj_sStaticFields[] = {
	HX_("_new",61,15,1f,3f),
	HX_("idGet",7b,77,62,b7),
	HX_("idInsert",74,e9,84,86),
	HX_("idUpdate",44,2c,ad,6f),
	HX_("idReplace",99,15,32,55),
	HX_("idRemove",7f,42,30,ed),
	HX_("keyValue",52,25,22,76),
	::String(null())
};

void HaxeLowCol_Impl__obj::__register()
{
	HaxeLowCol_Impl__obj _hx_dummy;
	HaxeLowCol_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("_HaxeLowCol.HaxeLowCol_Impl_",0f,0a,f3,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HaxeLowCol_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HaxeLowCol_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HaxeLowCol_Impl__obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HaxeLowCol_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HaxeLowCol_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace _HaxeLowCol
