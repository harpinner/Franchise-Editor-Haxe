#ifndef INCLUDED_Person
#define INCLUDED_Person

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e701c424f2637eb0_6_new)
HX_DECLARE_CLASS0(Person)



class HXCPP_CLASS_ATTRIBUTES Person_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Person_obj OBJ_;
		Person_obj();

	public:
		enum { _hx_ClassId = 0x374f32d9 };

		void __construct(::String name,int birth);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Person")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Person"); }

		inline static ::hx::ObjectPtr< Person_obj > __new(::String name,int birth) {
			::hx::ObjectPtr< Person_obj > __this = new Person_obj();
			__this->__construct(name,birth);
			return __this;
		}

		inline static ::hx::ObjectPtr< Person_obj > __alloc(::hx::Ctx *_hx_ctx,::String name,int birth) {
			Person_obj *__this = (Person_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Person_obj), true, "Person"));
			*(void **)__this = Person_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_e701c424f2637eb0_6_new)
HXLINE(   7)		( ( ::Person)(__this) )->name = name;
HXDLIN(   7)		( ( ::Person)(__this) )->birth = birth;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Person_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Person",b5,6b,b7,6f); }

		::String name;
		int birth;
};


#endif /* INCLUDED_Person */ 
