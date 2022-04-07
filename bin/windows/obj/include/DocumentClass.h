#ifndef INCLUDED_DocumentClass
#define INCLUDED_DocumentClass

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_TheApp
#include <TheApp.h>
#endif
HX_DECLARE_CLASS0(DocumentClass)
HX_DECLARE_CLASS0(TheApp)
HX_DECLARE_CLASS2(feathers,controls,Application)
HX_DECLARE_CLASS2(feathers,controls,LayoutGroup)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IVariantStyleObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)



class HXCPP_CLASS_ATTRIBUTES DocumentClass_obj : public  ::TheApp_obj
{
	public:
		typedef  ::TheApp_obj super;
		typedef DocumentClass_obj OBJ_;
		DocumentClass_obj();

	public:
		enum { _hx_ClassId = 0x1a4abc3d };

		void __construct( ::openfl::display::DisplayObjectContainer current);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="DocumentClass")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"DocumentClass"); }
		static ::hx::ObjectPtr< DocumentClass_obj > __new( ::openfl::display::DisplayObjectContainer current);
		static ::hx::ObjectPtr< DocumentClass_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObjectContainer current);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DocumentClass_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DocumentClass",fd,a6,03,3e); }

};


#endif /* INCLUDED_DocumentClass */ 
