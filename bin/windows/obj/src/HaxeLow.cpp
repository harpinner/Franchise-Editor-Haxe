#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_HaxeLow
#include <HaxeLow.h>
#endif
#ifndef INCLUDED_HaxeLowDisk
#include <HaxeLowDisk.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_SysDisk
#include <SysDisk.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_tjson_TJSON
#include <tjson/TJSON.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bb93d6542e99be07_104_new,"HaxeLow","new",0xea3ccbe0,"HaxeLow.new","HaxeLow.hx",104,0xd56d4f90)
HX_LOCAL_STACK_FRAME(_hx_pos_bb93d6542e99be07_128_backup,"HaxeLow","backup",0xbeda8cc2,"HaxeLow.backup","HaxeLow.hx",128,0xd56d4f90)
HX_LOCAL_STACK_FRAME(_hx_pos_bb93d6542e99be07_134_restore,"HaxeLow","restore",0xaf7d22ce,"HaxeLow.restore","HaxeLow.hx",134,0xd56d4f90)
HX_LOCAL_STACK_FRAME(_hx_pos_bb93d6542e99be07_147_save,"HaxeLow","save",0x0e409fbd,"HaxeLow.save","HaxeLow.hx",147,0xd56d4f90)
HX_LOCAL_STACK_FRAME(_hx_pos_bb93d6542e99be07_159_col,"HaxeLow","col",0xea347bc0,"HaxeLow.col","HaxeLow.hx",159,0xd56d4f90)
HX_LOCAL_STACK_FRAME(_hx_pos_bb93d6542e99be07_170_keyCol,"HaxeLow","keyCol",0xb4177061,"HaxeLow.keyCol","HaxeLow.hx",170,0xd56d4f90)
HX_LOCAL_STACK_FRAME(_hx_pos_bb93d6542e99be07_173_idCol,"HaxeLow","idCol",0xaa1e52a5,"HaxeLow.idCol","HaxeLow.hx",173,0xd56d4f90)
HX_LOCAL_STACK_FRAME(_hx_pos_bb93d6542e99be07_176__idCol,"HaxeLow","_idCol",0x2787f2e6,"HaxeLow._idCol","HaxeLow.hx",176,0xd56d4f90)
HX_LOCAL_STACK_FRAME(_hx_pos_bb93d6542e99be07_85_uuid,"HaxeLow","uuid",0x0fa22ebb,"HaxeLow.uuid","HaxeLow.hx",85,0xd56d4f90)

void HaxeLow_obj::__construct(::String file,::Dynamic disk){
            	HX_GC_STACKFRAME(&_hx_pos_bb93d6542e99be07_104_new)
HXLINE( 105)		this->file = file;
HXLINE( 106)		this->disk = disk;
HXLINE( 107)		this->db =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE( 109)		bool _hx_tmp;
HXDLIN( 109)		if (::hx::IsNull( disk )) {
HXLINE( 109)			_hx_tmp = ::hx::IsNotNull( file );
            		}
            		else {
HXLINE( 109)			_hx_tmp = false;
            		}
HXDLIN( 109)		if (_hx_tmp) {
HXLINE( 110)			this->disk =  ::SysDisk_obj::__alloc( HX_CTX );
            		}
HXLINE( 120)		if (::hx::IsNotNull( this->file )) {
HXLINE( 121)			if (::hx::IsNull( this->disk )) {
HXLINE( 121)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("HaxeLow: no disk storage set.",69,e8,57,60)));
            			}
HXLINE( 123)			this->checksum = ::HaxeLowDisk_obj::readFileSync(this->disk,this->file);
HXLINE( 124)			if (::hx::IsNotNull( this->checksum )) {
HXLINE( 124)				this->restore(this->checksum);
            			}
            		}
            	}

Dynamic HaxeLow_obj::__CreateEmpty() { return new HaxeLow_obj; }

void *HaxeLow_obj::_hx_vtable = 0;

Dynamic HaxeLow_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HaxeLow_obj > _hx_result = new HaxeLow_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool HaxeLow_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a348d9e;
}

::String HaxeLow_obj::backup(::String file){
            	HX_STACKFRAME(&_hx_pos_bb93d6542e99be07_128_backup)
HXLINE( 129)		::String backup = ::tjson::TJSON_obj::encode(this->db,HX_("fancy",49,ac,50,fb),null());
HXLINE( 130)		if (::hx::IsNotNull( file )) {
HXLINE( 130)			::HaxeLowDisk_obj::writeFile(this->disk,file,backup);
            		}
HXLINE( 131)		return backup;
            	}


HX_DEFINE_DYNAMIC_FUNC1(HaxeLow_obj,backup,return )

 ::HaxeLow HaxeLow_obj::restore(::String s){
            	HX_STACKFRAME(&_hx_pos_bb93d6542e99be07_134_restore)
HXLINE( 135)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 136)			this->db = ::tjson::TJSON_obj::parse(s,null(),null());
HXLINE( 139)			this->checksum = null();
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 140)				{
HXLINE( 140)					null();
            				}
HXDLIN( 140)				 ::Dynamic e = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 141)				::String _hx_tmp = ((HX_("HaxeLow: JSON parsing failed: file \"",b5,16,7a,db) + this->file) + HX_("\" is corrupt. ",47,f0,8c,99));
HXDLIN( 141)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((_hx_tmp + ::Std_obj::string(e))));
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 144)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(HaxeLow_obj,restore,return )

 ::HaxeLow HaxeLow_obj::save(){
            	HX_STACKFRAME(&_hx_pos_bb93d6542e99be07_147_save)
HXLINE( 148)		if (::hx::IsNull( this->file )) {
HXLINE( 148)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 150)		::String data = this->backup(null());
HXLINE( 151)		if ((data == this->checksum)) {
HXLINE( 151)			return ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 153)		this->checksum = data;
HXLINE( 154)		::HaxeLowDisk_obj::writeFile(this->disk,this->file,data);
HXLINE( 156)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(HaxeLow_obj,save,return )

::cpp::VirtualArray HaxeLow_obj::col(::hx::Class cls){
            	HX_STACKFRAME(&_hx_pos_bb93d6542e99be07_159_col)
HXLINE( 160)		::String name = ::Type_obj::getClassName(cls);
HXLINE( 161)		if (!(::Reflect_obj::hasField(this->db,name))) {
HXLINE( 162)			 ::Dynamic _hx_tmp = this->db;
HXDLIN( 162)			::Reflect_obj::setField(_hx_tmp,name,::cpp::VirtualArray_obj::__new());
HXLINE( 163)			this->save();
            		}
HXLINE( 166)		return ( (::cpp::VirtualArray)(::Reflect_obj::field(this->db,name)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(HaxeLow_obj,col,return )

::cpp::VirtualArray HaxeLow_obj::keyCol(::hx::Class cls,::String keyField,::hx::Class keyType){
            	HX_STACKFRAME(&_hx_pos_bb93d6542e99be07_170_keyCol)
HXDLIN( 170)		::cpp::VirtualArray this1 = this->col(cls);
HXDLIN( 170)		if (::hx::IsNotNull( keyField )) {
HXDLIN( 170)			::Reflect_obj::setField(this1,HX_("__haxeLowId",69,9c,a4,78),keyField);
            		}
HXDLIN( 170)		return this1;
            	}


HX_DEFINE_DYNAMIC_FUNC3(HaxeLow_obj,keyCol,return )

::cpp::VirtualArray HaxeLow_obj::idCol(::hx::Class cls,::hx::Class keyType){
            	HX_STACKFRAME(&_hx_pos_bb93d6542e99be07_173_idCol)
HXDLIN( 173)		return this->keyCol(cls,HX_("id",db,5b,00,00),keyType);
            	}


HX_DEFINE_DYNAMIC_FUNC2(HaxeLow_obj,idCol,return )

::cpp::VirtualArray HaxeLow_obj::_idCol(::hx::Class cls,::hx::Class keyType){
            	HX_STACKFRAME(&_hx_pos_bb93d6542e99be07_176__idCol)
HXDLIN( 176)		return this->keyCol(cls,HX_("_id",fa,71,48,00),keyType);
            	}


HX_DEFINE_DYNAMIC_FUNC2(HaxeLow_obj,_idCol,return )

::String HaxeLow_obj::uuid(){
            	HX_GC_STACKFRAME(&_hx_pos_bb93d6542e99be07_85_uuid)
HXLINE(  87)		 ::StringBuf uid =  ::StringBuf_obj::__alloc( HX_CTX );
HXDLIN(  87)		int a = 8;
HXLINE(  88)		{
HXLINE(  88)			::String x = ::StringTools_obj::hex(::Std_obj::_hx_int(::Date_obj::now()->getTime()),8);
HXDLIN(  88)			if (::hx::IsNotNull( uid->charBuf )) {
HXLINE(  88)				uid->flush();
            			}
HXDLIN(  88)			if (::hx::IsNull( uid->b )) {
HXLINE(  88)				uid->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE(  88)				::Array< ::String > uid1 = uid->b;
HXDLIN(  88)				uid1->push(::Std_obj::string(x));
            			}
            		}
HXLINE(  89)		while(true){
HXLINE(  89)			a = (a + 1);
HXDLIN(  89)			if (!(((a - 1) < 36))) {
HXLINE(  89)				goto _hx_goto_8;
            			}
HXLINE(  90)			::String x;
HXDLIN(  90)			if ((((a * 51) & 52) != 0)) {
HXLINE(  91)				int x1;
HXDLIN(  91)				if (((a ^ 15) != 0)) {
HXLINE(  91)					int x;
HXDLIN(  91)					if (((a ^ 20) != 0)) {
HXLINE(  91)						x = 16;
            					}
            					else {
HXLINE(  91)						x = 4;
            					}
HXDLIN(  91)					x1 = (8 ^ ::Std_obj::_hx_int((::Math_obj::random() * ( (Float)(x) ))));
            				}
            				else {
HXLINE(  91)					x1 = 4;
            				}
HXLINE(  90)				x = ::StringTools_obj::hex(x1,null());
            			}
            			else {
HXLINE(  90)				x = HX_("-",2d,00,00,00);
            			}
HXDLIN(  90)			if (::hx::IsNotNull( uid->charBuf )) {
HXLINE(  90)				uid->flush();
            			}
HXDLIN(  90)			if (::hx::IsNull( uid->b )) {
HXLINE(  90)				uid->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE(  90)				::Array< ::String > uid1 = uid->b;
HXDLIN(  90)				uid1->push(::Std_obj::string(x));
            			}
            		}
            		_hx_goto_8:;
HXLINE(  95)		return uid->toString().toLowerCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HaxeLow_obj,uuid,return )


::hx::ObjectPtr< HaxeLow_obj > HaxeLow_obj::__new(::String file,::Dynamic disk) {
	::hx::ObjectPtr< HaxeLow_obj > __this = new HaxeLow_obj();
	__this->__construct(file,disk);
	return __this;
}

::hx::ObjectPtr< HaxeLow_obj > HaxeLow_obj::__alloc(::hx::Ctx *_hx_ctx,::String file,::Dynamic disk) {
	HaxeLow_obj *__this = (HaxeLow_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HaxeLow_obj), true, "HaxeLow"));
	*(void **)__this = HaxeLow_obj::_hx_vtable;
	__this->__construct(file,disk);
	return __this;
}

HaxeLow_obj::HaxeLow_obj()
{
}

void HaxeLow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HaxeLow);
	HX_MARK_MEMBER_NAME(file,"file");
	HX_MARK_MEMBER_NAME(db,"db");
	HX_MARK_MEMBER_NAME(checksum,"checksum");
	HX_MARK_MEMBER_NAME(disk,"disk");
	HX_MARK_END_CLASS();
}

void HaxeLow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(file,"file");
	HX_VISIT_MEMBER_NAME(db,"db");
	HX_VISIT_MEMBER_NAME(checksum,"checksum");
	HX_VISIT_MEMBER_NAME(disk,"disk");
}

::hx::Val HaxeLow_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"db") ) { return ::hx::Val( db ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"col") ) { return ::hx::Val( col_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return ::hx::Val( file ); }
		if (HX_FIELD_EQ(inName,"disk") ) { return ::hx::Val( disk ); }
		if (HX_FIELD_EQ(inName,"save") ) { return ::hx::Val( save_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"idCol") ) { return ::hx::Val( idCol_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"backup") ) { return ::hx::Val( backup_dyn() ); }
		if (HX_FIELD_EQ(inName,"keyCol") ) { return ::hx::Val( keyCol_dyn() ); }
		if (HX_FIELD_EQ(inName,"_idCol") ) { return ::hx::Val( _idCol_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"restore") ) { return ::hx::Val( restore_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"checksum") ) { return ::hx::Val( checksum ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HaxeLow_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"uuid") ) { outValue = uuid_dyn(); return true; }
	}
	return false;
}

::hx::Val HaxeLow_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"db") ) { db=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"disk") ) { disk=inValue.Cast< ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"checksum") ) { checksum=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HaxeLow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("file",7c,ce,bb,43));
	outFields->push(HX_("db",7e,57,00,00));
	outFields->push(HX_("checksum",c3,bd,02,ad));
	outFields->push(HX_("disk",5d,67,69,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HaxeLow_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(HaxeLow_obj,file),HX_("file",7c,ce,bb,43)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(HaxeLow_obj,db),HX_("db",7e,57,00,00)},
	{::hx::fsString,(int)offsetof(HaxeLow_obj,checksum),HX_("checksum",c3,bd,02,ad)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(HaxeLow_obj,disk),HX_("disk",5d,67,69,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *HaxeLow_obj_sStaticStorageInfo = 0;
#endif

static ::String HaxeLow_obj_sMemberFields[] = {
	HX_("file",7c,ce,bb,43),
	HX_("db",7e,57,00,00),
	HX_("checksum",c3,bd,02,ad),
	HX_("disk",5d,67,69,42),
	HX_("backup",42,58,99,4a),
	HX_("restore",4e,67,b0,6a),
	HX_("save",3d,8b,4d,4c),
	HX_("col",40,80,4b,00),
	HX_("keyCol",e1,3b,d6,3f),
	HX_("idCol",25,77,5f,b7),
	HX_("_idCol",66,be,46,b3),
	::String(null()) };

::hx::Class HaxeLow_obj::__mClass;

static ::String HaxeLow_obj_sStaticFields[] = {
	HX_("uuid",3b,1a,af,4d),
	::String(null())
};

void HaxeLow_obj::__register()
{
	HaxeLow_obj _hx_dummy;
	HaxeLow_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HaxeLow",ee,9b,b9,d5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HaxeLow_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HaxeLow_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HaxeLow_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HaxeLow_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HaxeLow_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HaxeLow_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

