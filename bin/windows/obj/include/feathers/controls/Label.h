#ifndef INCLUDED_feathers_controls_Label
#define INCLUDED_feathers_controls_Label

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_feathers_core_FeathersControl
#include <feathers/core/FeathersControl.h>
#endif
#ifndef INCLUDED_feathers_core_IStageFocusDelegate
#include <feathers/core/IStageFocusDelegate.h>
#endif
#ifndef INCLUDED_feathers_core_IFocusObject
#include <feathers/core/IFocusObject.h>
#endif
#ifndef INCLUDED_feathers_core_IHTMLTextControl
#include <feathers/core/IHTMLTextControl.h>
#endif
#ifndef INCLUDED_feathers_core_ITextControl
#include <feathers/core/ITextControl.h>
#endif
HX_DECLARE_CLASS2(feathers,controls,Label)
HX_DECLARE_CLASS2(feathers,core,FeathersControl)
HX_DECLARE_CLASS2(feathers,core,IDisplayObject)
HX_DECLARE_CLASS2(feathers,core,IFocusManagerAware)
HX_DECLARE_CLASS2(feathers,core,IFocusObject)
HX_DECLARE_CLASS2(feathers,core,IHTMLTextControl)
HX_DECLARE_CLASS2(feathers,core,IMeasureObject)
HX_DECLARE_CLASS2(feathers,core,IStageFocusDelegate)
HX_DECLARE_CLASS2(feathers,core,ITextControl)
HX_DECLARE_CLASS2(feathers,core,IUIControl)
HX_DECLARE_CLASS2(feathers,core,IValidating)
HX_DECLARE_CLASS2(feathers,core,MeasureSprite)
HX_DECLARE_CLASS2(feathers,core,ValidatingSprite)
HX_DECLARE_CLASS2(feathers,layout,ILayoutObject)
HX_DECLARE_CLASS2(feathers,layout,Measurements)
HX_DECLARE_CLASS2(feathers,layout,VerticalAlign)
HX_DECLARE_CLASS2(feathers,style,IStyleObject)
HX_DECLARE_CLASS2(feathers,style,IVariantStyleObject)
HX_DECLARE_CLASS2(feathers,text,TextFormat)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,FocusEvent)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)
HX_DECLARE_CLASS2(openfl,text,TextFormat)

namespace feathers{
namespace controls{


class HXCPP_CLASS_ATTRIBUTES Label_obj : public  ::feathers::core::FeathersControl_obj
{
	public:
		typedef  ::feathers::core::FeathersControl_obj super;
		typedef Label_obj OBJ_;
		Label_obj();

	public:
		enum { _hx_ClassId = 0x26e7690a };

		void __construct(::String __o_text);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="feathers.controls.Label")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"feathers.controls.Label"); }
		static ::hx::ObjectPtr< Label_obj > __new(::String __o_text);
		static ::hx::ObjectPtr< Label_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_text);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Label_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("Label",d4,7d,dc,02); }

		static void __boot();
		static  ::Dynamic __meta__;
		static ::String VARIANT_HEADING;
		static ::String VARIANT_DETAIL;
		 ::openfl::text::TextField textField;
		::String _previousText;
		::String _previousHTMLText;
		 ::feathers::text::TextFormat _previousTextFormat;
		 ::openfl::text::TextFormat _previousSimpleTextFormat;
		bool _updatedTextStyles;
		Float _textMeasuredWidth;
		Float _textMeasuredHeight;
		bool _wrappedOnMeasure;
		::String _text;
		::String get_text();
		::Dynamic get_text_dyn();

		::String set_text(::String value);
		::Dynamic set_text_dyn();

		Float get_baseline();
		::Dynamic get_baseline_dyn();

		::String _htmlText;
		::String get_htmlText();
		::Dynamic get_htmlText_dyn();

		::String set_htmlText(::String value);
		::Dynamic set_htmlText_dyn();

		bool _selectable;
		bool get_selectable();
		::Dynamic get_selectable_dyn();

		bool set_selectable(bool value);
		::Dynamic set_selectable_dyn();

		bool get_tabEnabled();

		 ::openfl::display::InteractiveObject get_stageFocusTarget();
		::Dynamic get_stageFocusTarget_dyn();

		int get_selectionBeginIndex();
		::Dynamic get_selectionBeginIndex_dyn();

		int get_selectionEndIndex();
		::Dynamic get_selectionEndIndex_dyn();

		 ::openfl::display::DisplayObject _currentBackgroundSkin;
		 ::feathers::layout::Measurements _backgroundSkinMeasurements;
		void setPadding(Float value);
		::Dynamic setPadding_dyn();

		void initializeLabelTheme();
		::Dynamic initializeLabelTheme_dyn();

		void initialize();

		void update();

		bool measure();
		::Dynamic measure_dyn();

		void refreshTextStyles();
		::Dynamic refreshTextStyles_dyn();

		void refreshText(bool forceMeasurement);
		::Dynamic refreshText_dyn();

		 ::Dynamic calculateExplicitWidthForTextMeasurement();
		::Dynamic calculateExplicitWidthForTextMeasurement_dyn();

		void refreshSelection();
		::Dynamic refreshSelection_dyn();

		 ::feathers::text::TextFormat getCurrentTextFormat();
		::Dynamic getCurrentTextFormat_dyn();

		void refreshBackgroundSkin();
		::Dynamic refreshBackgroundSkin_dyn();

		 ::openfl::display::DisplayObject getCurrentBackgroundSkin();
		::Dynamic getCurrentBackgroundSkin_dyn();

		void addCurrentBackgroundSkin( ::openfl::display::DisplayObject skin);
		::Dynamic addCurrentBackgroundSkin_dyn();

		void removeCurrentBackgroundSkin( ::openfl::display::DisplayObject skin);
		::Dynamic removeCurrentBackgroundSkin_dyn();

		void layoutContent();
		::Dynamic layoutContent_dyn();

		void layoutBackgroundSkin();
		::Dynamic layoutBackgroundSkin_dyn();

		void label_focusInHandler( ::openfl::events::FocusEvent event);
		::Dynamic label_focusInHandler_dyn();

		void label_textFormat_changeHandler( ::openfl::events::Event event);
		::Dynamic label_textFormat_changeHandler_dyn();

		 ::feathers::text::TextFormat _hx___textFormat;
		 ::feathers::text::TextFormat get_textFormat();
		::Dynamic get_textFormat_dyn();

		 ::feathers::text::TextFormat set_textFormat( ::feathers::text::TextFormat value);
		::Dynamic set_textFormat_dyn();

		 ::feathers::text::TextFormat clearStyle_textFormat();
		::Dynamic clearStyle_textFormat_dyn();

		bool _hx___embedFonts;
		bool get_embedFonts();
		::Dynamic get_embedFonts_dyn();

		bool set_embedFonts(bool value);
		::Dynamic set_embedFonts_dyn();

		bool clearStyle_embedFonts();
		::Dynamic clearStyle_embedFonts_dyn();

		 ::feathers::text::TextFormat _hx___disabledTextFormat;
		 ::feathers::text::TextFormat get_disabledTextFormat();
		::Dynamic get_disabledTextFormat_dyn();

		 ::feathers::text::TextFormat set_disabledTextFormat( ::feathers::text::TextFormat value);
		::Dynamic set_disabledTextFormat_dyn();

		 ::feathers::text::TextFormat clearStyle_disabledTextFormat();
		::Dynamic clearStyle_disabledTextFormat_dyn();

		Float _hx___paddingTop;
		Float get_paddingTop();
		::Dynamic get_paddingTop_dyn();

		Float set_paddingTop(Float value);
		::Dynamic set_paddingTop_dyn();

		Float clearStyle_paddingTop();
		::Dynamic clearStyle_paddingTop_dyn();

		Float _hx___paddingRight;
		Float get_paddingRight();
		::Dynamic get_paddingRight_dyn();

		Float set_paddingRight(Float value);
		::Dynamic set_paddingRight_dyn();

		Float clearStyle_paddingRight();
		::Dynamic clearStyle_paddingRight_dyn();

		Float _hx___paddingBottom;
		Float get_paddingBottom();
		::Dynamic get_paddingBottom_dyn();

		Float set_paddingBottom(Float value);
		::Dynamic set_paddingBottom_dyn();

		Float clearStyle_paddingBottom();
		::Dynamic clearStyle_paddingBottom_dyn();

		Float _hx___paddingLeft;
		Float get_paddingLeft();
		::Dynamic get_paddingLeft_dyn();

		Float set_paddingLeft(Float value);
		::Dynamic set_paddingLeft_dyn();

		Float clearStyle_paddingLeft();
		::Dynamic clearStyle_paddingLeft_dyn();

		 ::feathers::layout::VerticalAlign _hx___verticalAlign;
		 ::feathers::layout::VerticalAlign get_verticalAlign();
		::Dynamic get_verticalAlign_dyn();

		 ::feathers::layout::VerticalAlign set_verticalAlign( ::feathers::layout::VerticalAlign value);
		::Dynamic set_verticalAlign_dyn();

		 ::feathers::layout::VerticalAlign clearStyle_verticalAlign();
		::Dynamic clearStyle_verticalAlign_dyn();

		bool _hx___wordWrap;
		bool get_wordWrap();
		::Dynamic get_wordWrap_dyn();

		bool set_wordWrap(bool value);
		::Dynamic set_wordWrap_dyn();

		bool clearStyle_wordWrap();
		::Dynamic clearStyle_wordWrap_dyn();

		 ::openfl::display::DisplayObject _hx___backgroundSkin;
		 ::openfl::display::DisplayObject get_backgroundSkin();
		::Dynamic get_backgroundSkin_dyn();

		 ::openfl::display::DisplayObject set_backgroundSkin( ::openfl::display::DisplayObject value);
		::Dynamic set_backgroundSkin_dyn();

		 ::openfl::display::DisplayObject clearStyle_backgroundSkin();
		::Dynamic clearStyle_backgroundSkin_dyn();

		 ::openfl::display::DisplayObject _hx___disabledBackgroundSkin;
		 ::openfl::display::DisplayObject get_disabledBackgroundSkin();
		::Dynamic get_disabledBackgroundSkin_dyn();

		 ::openfl::display::DisplayObject set_disabledBackgroundSkin( ::openfl::display::DisplayObject value);
		::Dynamic set_disabledBackgroundSkin_dyn();

		 ::openfl::display::DisplayObject clearStyle_disabledBackgroundSkin();
		::Dynamic clearStyle_disabledBackgroundSkin_dyn();

		::hx::Class get_styleContext();

};

} // end namespace feathers
} // end namespace controls

#endif /* INCLUDED_feathers_controls_Label */ 
