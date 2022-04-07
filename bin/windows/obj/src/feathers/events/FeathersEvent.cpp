#include <hxcpp.h>

#ifndef INCLUDED_feathers_events_FeathersEvent
#include <feathers/events/FeathersEvent.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool
#include <lime/utils/ObjectPool.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5ee54a09bf5e2741_184_new,"feathers.events.FeathersEvent","new",0x1561e785,"feathers.events.FeathersEvent.new","feathers/events/FeathersEvent.hx",184,0xbc7ce1ab)
HX_LOCAL_STACK_FRAME(_hx_pos_5ee54a09bf5e2741_188_clone,"feathers.events.FeathersEvent","clone",0x4e80fdc2,"feathers.events.FeathersEvent.clone","feathers/events/FeathersEvent.hx",188,0xbc7ce1ab)
HX_LOCAL_STACK_FRAME(_hx_pos_5ee54a09bf5e2741_161_dispatch,"feathers.events.FeathersEvent","dispatch",0xf716b175,"feathers.events.FeathersEvent.dispatch","feathers/events/FeathersEvent.hx",161,0xbc7ce1ab)
HX_LOCAL_STACK_FRAME(_hx_pos_5ee54a09bf5e2741_37_boot,"feathers.events.FeathersEvent","boot",0x9861ad6d,"feathers.events.FeathersEvent.boot","feathers/events/FeathersEvent.hx",37,0xbc7ce1ab)
HX_LOCAL_STACK_FRAME(_hx_pos_5ee54a09bf5e2741_49_boot,"feathers.events.FeathersEvent","boot",0x9861ad6d,"feathers.events.FeathersEvent.boot","feathers/events/FeathersEvent.hx",49,0xbc7ce1ab)
HX_LOCAL_STACK_FRAME(_hx_pos_5ee54a09bf5e2741_62_boot,"feathers.events.FeathersEvent","boot",0x9861ad6d,"feathers.events.FeathersEvent.boot","feathers/events/FeathersEvent.hx",62,0xbc7ce1ab)
HX_LOCAL_STACK_FRAME(_hx_pos_5ee54a09bf5e2741_74_boot,"feathers.events.FeathersEvent","boot",0x9861ad6d,"feathers.events.FeathersEvent.boot","feathers/events/FeathersEvent.hx",74,0xbc7ce1ab)
HX_LOCAL_STACK_FRAME(_hx_pos_5ee54a09bf5e2741_85_boot,"feathers.events.FeathersEvent","boot",0x9861ad6d,"feathers.events.FeathersEvent.boot","feathers/events/FeathersEvent.hx",85,0xbc7ce1ab)
HX_LOCAL_STACK_FRAME(_hx_pos_5ee54a09bf5e2741_96_boot,"feathers.events.FeathersEvent","boot",0x9861ad6d,"feathers.events.FeathersEvent.boot","feathers/events/FeathersEvent.hx",96,0xbc7ce1ab)
HX_LOCAL_STACK_FRAME(_hx_pos_5ee54a09bf5e2741_108_boot,"feathers.events.FeathersEvent","boot",0x9861ad6d,"feathers.events.FeathersEvent.boot","feathers/events/FeathersEvent.hx",108,0xbc7ce1ab)
HX_LOCAL_STACK_FRAME(_hx_pos_5ee54a09bf5e2741_116_boot,"feathers.events.FeathersEvent","boot",0x9861ad6d,"feathers.events.FeathersEvent.boot","feathers/events/FeathersEvent.hx",116,0xbc7ce1ab)
HX_LOCAL_STACK_FRAME(_hx_pos_5ee54a09bf5e2741_124_boot,"feathers.events.FeathersEvent","boot",0x9861ad6d,"feathers.events.FeathersEvent.boot","feathers/events/FeathersEvent.hx",124,0xbc7ce1ab)
HX_LOCAL_STACK_FRAME(_hx_pos_5ee54a09bf5e2741_132_boot,"feathers.events.FeathersEvent","boot",0x9861ad6d,"feathers.events.FeathersEvent.boot","feathers/events/FeathersEvent.hx",132,0xbc7ce1ab)
HX_LOCAL_STACK_FRAME(_hx_pos_5ee54a09bf5e2741_140_boot,"feathers.events.FeathersEvent","boot",0x9861ad6d,"feathers.events.FeathersEvent.boot","feathers/events/FeathersEvent.hx",140,0xbc7ce1ab)
HX_LOCAL_STACK_FRAME(_hx_pos_5ee54a09bf5e2741_143_boot,"feathers.events.FeathersEvent","boot",0x9861ad6d,"feathers.events.FeathersEvent.boot","feathers/events/FeathersEvent.hx",143,0xbc7ce1ab)
namespace feathers{
namespace events{

void FeathersEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ee54a09bf5e2741_184_new)
HXDLIN( 184)		super::__construct(type,bubbles,cancelable);
            	}

Dynamic FeathersEvent_obj::__CreateEmpty() { return new FeathersEvent_obj; }

void *FeathersEvent_obj::_hx_vtable = 0;

Dynamic FeathersEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FeathersEvent_obj > _hx_result = new FeathersEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FeathersEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x180141dd;
	}
}

 ::openfl::events::Event FeathersEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_5ee54a09bf5e2741_188_clone)
HXDLIN( 188)		return  ::feathers::events::FeathersEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable);
            	}


::String FeathersEvent_obj::INITIALIZE;

::String FeathersEvent_obj::CREATION_COMPLETE;

::String FeathersEvent_obj::LAYOUT_DATA_CHANGE;

::String FeathersEvent_obj::STATE_CHANGE;

::String FeathersEvent_obj::TRANSITION_START;

::String FeathersEvent_obj::TRANSITION_COMPLETE;

::String FeathersEvent_obj::TRANSITION_CANCEL;

::String FeathersEvent_obj::OPENING;

::String FeathersEvent_obj::CLOSING;

::String FeathersEvent_obj::ENABLE;

::String FeathersEvent_obj::DISABLE;

 ::lime::utils::ObjectPool FeathersEvent_obj::_pool;

bool FeathersEvent_obj::dispatch(::Dynamic dispatcher,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_5ee54a09bf5e2741_161_dispatch)
HXLINE( 166)		 ::feathers::events::FeathersEvent event = ::feathers::events::FeathersEvent_obj::_pool->get().StaticCast<  ::feathers::events::FeathersEvent >();
HXLINE( 167)		event->type = type;
HXLINE( 168)		event->bubbles = bubbles;
HXLINE( 169)		event->cancelable = cancelable;
HXLINE( 170)		bool result = ::openfl::events::IEventDispatcher_obj::dispatchEvent(dispatcher,event);
HXLINE( 171)		::feathers::events::FeathersEvent_obj::_pool->release(event);
HXLINE( 172)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FeathersEvent_obj,dispatch,return )


::hx::ObjectPtr< FeathersEvent_obj > FeathersEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	::hx::ObjectPtr< FeathersEvent_obj > __this = new FeathersEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable);
	return __this;
}

::hx::ObjectPtr< FeathersEvent_obj > FeathersEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable) {
	FeathersEvent_obj *__this = (FeathersEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FeathersEvent_obj), true, "feathers.events.FeathersEvent"));
	*(void **)__this = FeathersEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable);
	return __this;
}

FeathersEvent_obj::FeathersEvent_obj()
{
}

::hx::Val FeathersEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FeathersEvent_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { outValue = ( _pool ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dispatch") ) { outValue = dispatch_dyn(); return true; }
	}
	return false;
}

bool FeathersEvent_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_pool") ) { _pool=ioValue.Cast<  ::lime::utils::ObjectPool >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FeathersEvent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FeathersEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FeathersEvent_obj::INITIALIZE,HX_("INITIALIZE",50,a5,c4,de)},
	{::hx::fsString,(void *) &FeathersEvent_obj::CREATION_COMPLETE,HX_("CREATION_COMPLETE",19,f4,07,c8)},
	{::hx::fsString,(void *) &FeathersEvent_obj::LAYOUT_DATA_CHANGE,HX_("LAYOUT_DATA_CHANGE",d0,09,26,7f)},
	{::hx::fsString,(void *) &FeathersEvent_obj::STATE_CHANGE,HX_("STATE_CHANGE",3e,b1,2f,e7)},
	{::hx::fsString,(void *) &FeathersEvent_obj::TRANSITION_START,HX_("TRANSITION_START",d8,d2,ce,62)},
	{::hx::fsString,(void *) &FeathersEvent_obj::TRANSITION_COMPLETE,HX_("TRANSITION_COMPLETE",e3,2b,da,6c)},
	{::hx::fsString,(void *) &FeathersEvent_obj::TRANSITION_CANCEL,HX_("TRANSITION_CANCEL",24,36,63,c4)},
	{::hx::fsString,(void *) &FeathersEvent_obj::OPENING,HX_("OPENING",38,d7,18,c0)},
	{::hx::fsString,(void *) &FeathersEvent_obj::CLOSING,HX_("CLOSING",d5,b2,f9,f8)},
	{::hx::fsString,(void *) &FeathersEvent_obj::ENABLE,HX_("ENABLE",83,5a,0a,ab)},
	{::hx::fsString,(void *) &FeathersEvent_obj::DISABLE,HX_("DISABLE",c8,3d,2c,31)},
	{::hx::fsObject /*  ::lime::utils::ObjectPool */ ,(void *) &FeathersEvent_obj::_pool,HX_("_pool",bb,9c,6d,fd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FeathersEvent_obj_sMemberFields[] = {
	HX_("clone",5d,13,63,48),
	::String(null()) };

static void FeathersEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FeathersEvent_obj::INITIALIZE,"INITIALIZE");
	HX_MARK_MEMBER_NAME(FeathersEvent_obj::CREATION_COMPLETE,"CREATION_COMPLETE");
	HX_MARK_MEMBER_NAME(FeathersEvent_obj::LAYOUT_DATA_CHANGE,"LAYOUT_DATA_CHANGE");
	HX_MARK_MEMBER_NAME(FeathersEvent_obj::STATE_CHANGE,"STATE_CHANGE");
	HX_MARK_MEMBER_NAME(FeathersEvent_obj::TRANSITION_START,"TRANSITION_START");
	HX_MARK_MEMBER_NAME(FeathersEvent_obj::TRANSITION_COMPLETE,"TRANSITION_COMPLETE");
	HX_MARK_MEMBER_NAME(FeathersEvent_obj::TRANSITION_CANCEL,"TRANSITION_CANCEL");
	HX_MARK_MEMBER_NAME(FeathersEvent_obj::OPENING,"OPENING");
	HX_MARK_MEMBER_NAME(FeathersEvent_obj::CLOSING,"CLOSING");
	HX_MARK_MEMBER_NAME(FeathersEvent_obj::ENABLE,"ENABLE");
	HX_MARK_MEMBER_NAME(FeathersEvent_obj::DISABLE,"DISABLE");
	HX_MARK_MEMBER_NAME(FeathersEvent_obj::_pool,"_pool");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FeathersEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FeathersEvent_obj::INITIALIZE,"INITIALIZE");
	HX_VISIT_MEMBER_NAME(FeathersEvent_obj::CREATION_COMPLETE,"CREATION_COMPLETE");
	HX_VISIT_MEMBER_NAME(FeathersEvent_obj::LAYOUT_DATA_CHANGE,"LAYOUT_DATA_CHANGE");
	HX_VISIT_MEMBER_NAME(FeathersEvent_obj::STATE_CHANGE,"STATE_CHANGE");
	HX_VISIT_MEMBER_NAME(FeathersEvent_obj::TRANSITION_START,"TRANSITION_START");
	HX_VISIT_MEMBER_NAME(FeathersEvent_obj::TRANSITION_COMPLETE,"TRANSITION_COMPLETE");
	HX_VISIT_MEMBER_NAME(FeathersEvent_obj::TRANSITION_CANCEL,"TRANSITION_CANCEL");
	HX_VISIT_MEMBER_NAME(FeathersEvent_obj::OPENING,"OPENING");
	HX_VISIT_MEMBER_NAME(FeathersEvent_obj::CLOSING,"CLOSING");
	HX_VISIT_MEMBER_NAME(FeathersEvent_obj::ENABLE,"ENABLE");
	HX_VISIT_MEMBER_NAME(FeathersEvent_obj::DISABLE,"DISABLE");
	HX_VISIT_MEMBER_NAME(FeathersEvent_obj::_pool,"_pool");
};

#endif

::hx::Class FeathersEvent_obj::__mClass;

static ::String FeathersEvent_obj_sStaticFields[] = {
	HX_("INITIALIZE",50,a5,c4,de),
	HX_("CREATION_COMPLETE",19,f4,07,c8),
	HX_("LAYOUT_DATA_CHANGE",d0,09,26,7f),
	HX_("STATE_CHANGE",3e,b1,2f,e7),
	HX_("TRANSITION_START",d8,d2,ce,62),
	HX_("TRANSITION_COMPLETE",e3,2b,da,6c),
	HX_("TRANSITION_CANCEL",24,36,63,c4),
	HX_("OPENING",38,d7,18,c0),
	HX_("CLOSING",d5,b2,f9,f8),
	HX_("ENABLE",83,5a,0a,ab),
	HX_("DISABLE",c8,3d,2c,31),
	HX_("_pool",bb,9c,6d,fd),
	HX_("dispatch",ba,ce,63,1e),
	::String(null())
};

void FeathersEvent_obj::__register()
{
	FeathersEvent_obj _hx_dummy;
	FeathersEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("feathers.events.FeathersEvent",13,c1,14,16);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FeathersEvent_obj::__GetStatic;
	__mClass->mSetStaticField = &FeathersEvent_obj::__SetStatic;
	__mClass->mMarkFunc = FeathersEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FeathersEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FeathersEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FeathersEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FeathersEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FeathersEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FeathersEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FeathersEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5ee54a09bf5e2741_37_boot)
HXDLIN(  37)		INITIALIZE = HX_("initialize",50,31,bb,ec);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5ee54a09bf5e2741_49_boot)
HXDLIN(  49)		CREATION_COMPLETE = HX_("creationComplete",f8,fb,74,9f);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5ee54a09bf5e2741_62_boot)
HXDLIN(  62)		LAYOUT_DATA_CHANGE = HX_("layoutDataChange",84,c2,16,c9);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5ee54a09bf5e2741_74_boot)
HXDLIN(  74)		STATE_CHANGE = HX_("stateChange",61,de,fb,31);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5ee54a09bf5e2741_85_boot)
HXDLIN(  85)		TRANSITION_START = HX_("transitionStart",8d,fa,36,c9);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5ee54a09bf5e2741_96_boot)
HXDLIN(  96)		TRANSITION_COMPLETE = HX_("transitionComplete",6e,67,80,36);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5ee54a09bf5e2741_108_boot)
HXDLIN( 108)		TRANSITION_CANCEL = HX_("transitionCancel",ef,cc,1d,f9);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5ee54a09bf5e2741_116_boot)
HXDLIN( 116)		OPENING = HX_("opening",58,03,45,40);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5ee54a09bf5e2741_124_boot)
HXDLIN( 124)		CLOSING = HX_("closing",f5,de,25,79);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5ee54a09bf5e2741_132_boot)
HXDLIN( 132)		ENABLE = HX_("enable",83,ae,87,f8);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5ee54a09bf5e2741_140_boot)
HXDLIN( 140)		DISABLE = HX_("disable",e8,69,58,b1);
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::feathers::events::FeathersEvent _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_5ee54a09bf5e2741_143_boot)
HXDLIN( 143)			return  ::feathers::events::FeathersEvent_obj::__alloc( HX_CTX ,null(),false,false);
            		}
            		HX_END_LOCAL_FUNC0(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run( ::feathers::events::FeathersEvent event){
            			HX_STACKFRAME(&_hx_pos_5ee54a09bf5e2741_143_boot)
HXLINE( 144)			event->target = null();
HXLINE( 145)			event->currentTarget = null();
HXLINE( 146)			event->_hx___preventDefault = false;
HXLINE( 147)			event->_hx___isCanceled = false;
HXLINE( 148)			event->_hx___isCanceledNow = false;
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_5ee54a09bf5e2741_143_boot)
HXDLIN( 143)		_pool =  ::lime::utils::ObjectPool_obj::__alloc( HX_CTX , ::Dynamic(new _hx_Closure_0()), ::Dynamic(new _hx_Closure_1()),null());
            	}
}

} // end namespace feathers
} // end namespace events
