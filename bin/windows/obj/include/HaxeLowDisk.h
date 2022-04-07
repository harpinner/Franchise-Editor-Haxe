#ifndef INCLUDED_HaxeLowDisk
#define INCLUDED_HaxeLowDisk

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(HaxeLowDisk)



class HXCPP_CLASS_ATTRIBUTES HaxeLowDisk_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		::String (::hx::Object :: *_hx_readFileSync)(::String file); 
		static inline ::String readFileSync( ::Dynamic _hx_,::String file) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::HaxeLowDisk_obj *>(_hx_.mPtr->_hx_getInterface(0xf8c3be6b)))->_hx_readFileSync)(file);
		}
		void (::hx::Object :: *_hx_writeFile)(::String file,::String data); 
		static inline void writeFile( ::Dynamic _hx_,::String file,::String data) {
			(_hx_.mPtr->*( ::hx::interface_cast< ::HaxeLowDisk_obj *>(_hx_.mPtr->_hx_getInterface(0xf8c3be6b)))->_hx_writeFile)(file,data);
		}
};


#endif /* INCLUDED_HaxeLowDisk */ 
