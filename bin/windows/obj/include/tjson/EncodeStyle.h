#ifndef INCLUDED_tjson_EncodeStyle
#define INCLUDED_tjson_EncodeStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tjson,EncodeStyle)

namespace tjson{


class HXCPP_CLASS_ATTRIBUTES EncodeStyle_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		::String (::hx::Object :: *_hx_beginObject)(int depth); 
		static inline ::String beginObject( ::Dynamic _hx_,int depth) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tjson::EncodeStyle_obj *>(_hx_.mPtr->_hx_getInterface(0x6f55723f)))->_hx_beginObject)(depth);
		}
		::String (::hx::Object :: *_hx_endObject)(int depth); 
		static inline ::String endObject( ::Dynamic _hx_,int depth) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tjson::EncodeStyle_obj *>(_hx_.mPtr->_hx_getInterface(0x6f55723f)))->_hx_endObject)(depth);
		}
		::String (::hx::Object :: *_hx_beginArray)(int depth); 
		static inline ::String beginArray( ::Dynamic _hx_,int depth) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tjson::EncodeStyle_obj *>(_hx_.mPtr->_hx_getInterface(0x6f55723f)))->_hx_beginArray)(depth);
		}
		::String (::hx::Object :: *_hx_endArray)(int depth); 
		static inline ::String endArray( ::Dynamic _hx_,int depth) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tjson::EncodeStyle_obj *>(_hx_.mPtr->_hx_getInterface(0x6f55723f)))->_hx_endArray)(depth);
		}
		::String (::hx::Object :: *_hx_firstEntry)(int depth); 
		static inline ::String firstEntry( ::Dynamic _hx_,int depth) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tjson::EncodeStyle_obj *>(_hx_.mPtr->_hx_getInterface(0x6f55723f)))->_hx_firstEntry)(depth);
		}
		::String (::hx::Object :: *_hx_entrySeperator)(int depth); 
		static inline ::String entrySeperator( ::Dynamic _hx_,int depth) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tjson::EncodeStyle_obj *>(_hx_.mPtr->_hx_getInterface(0x6f55723f)))->_hx_entrySeperator)(depth);
		}
		::String (::hx::Object :: *_hx_keyValueSeperator)(int depth); 
		static inline ::String keyValueSeperator( ::Dynamic _hx_,int depth) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::tjson::EncodeStyle_obj *>(_hx_.mPtr->_hx_getInterface(0x6f55723f)))->_hx_keyValueSeperator)(depth);
		}
};

} // end namespace tjson

#endif /* INCLUDED_tjson_EncodeStyle */ 
