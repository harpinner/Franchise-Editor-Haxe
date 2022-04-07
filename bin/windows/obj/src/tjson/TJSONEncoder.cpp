#include <hxcpp.h>

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
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_tjson_EncodeStyle
#include <tjson/EncodeStyle.h>
#endif
#ifndef INCLUDED_tjson_FancyStyle
#include <tjson/FancyStyle.h>
#endif
#ifndef INCLUDED_tjson_SimpleStyle
#include <tjson/SimpleStyle.h>
#endif
#ifndef INCLUDED_tjson_TJSON
#include <tjson/TJSON.h>
#endif
#ifndef INCLUDED_tjson_TJSONEncoder
#include <tjson/TJSONEncoder.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6541b35aed1f76b2_358_new,"tjson.TJSONEncoder","new",0x5b8f2d84,"tjson.TJSONEncoder.new","tjson/TJSON.hx",358,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_6541b35aed1f76b2_363_doEncode,"tjson.TJSONEncoder","doEncode",0x3247f85d,"tjson.TJSONEncoder.doEncode","tjson/TJSON.hx",363,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_6541b35aed1f76b2_388_encodeObject,"tjson.TJSONEncoder","encodeObject",0x2a7b77d1,"tjson.TJSONEncoder.encodeObject","tjson/TJSON.hx",388,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_6541b35aed1f76b2_434_encodeMap,"tjson.TJSONEncoder","encodeMap",0x3908924a,"tjson.TJSONEncoder.encodeMap","tjson/TJSON.hx",434,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_6541b35aed1f76b2_450_encodeIterable,"tjson.TJSONEncoder","encodeIterable",0x6a868044,"tjson.TJSONEncoder.encodeIterable","tjson/TJSON.hx",450,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_6541b35aed1f76b2_464_cacheEncode,"tjson.TJSONEncoder","cacheEncode",0x03d83f1c,"tjson.TJSONEncoder.cacheEncode","tjson/TJSON.hx",464,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_6541b35aed1f76b2_477_encodeValue,"tjson.TJSONEncoder","encodeValue",0x28a1ce9f,"tjson.TJSONEncoder.encodeValue","tjson/TJSON.hx",477,0x85b8bad5)
namespace tjson{

void TJSONEncoder_obj::__construct(::hx::Null< bool >  __o_useCache){
            		bool useCache = __o_useCache.Default(true);
            	HX_STACKFRAME(&_hx_pos_6541b35aed1f76b2_358_new)
HXLINE( 359)		this->uCache = useCache;
HXLINE( 360)		if (this->uCache) {
HXLINE( 360)			this->cache = ::cpp::VirtualArray_obj::__new();
            		}
            	}

Dynamic TJSONEncoder_obj::__CreateEmpty() { return new TJSONEncoder_obj; }

void *TJSONEncoder_obj::_hx_vtable = 0;

Dynamic TJSONEncoder_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TJSONEncoder_obj > _hx_result = new TJSONEncoder_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool TJSONEncoder_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x53edd738;
}

::String TJSONEncoder_obj::doEncode( ::Dynamic obj, ::Dynamic style){
            	HX_GC_STACKFRAME(&_hx_pos_6541b35aed1f76b2_363_doEncode)
HXLINE( 364)		if (!(::Reflect_obj::isObject(obj))) {
HXLINE( 365)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Provided object is not an object.",9b,ce,cc,4a)));
            		}
HXLINE( 367)		::Dynamic st;
HXLINE( 368)		if (::Std_obj::isOfType(style,( ( ::Dynamic)(::hx::ClassOf< ::tjson::EncodeStyle >()) ))) {
HXLINE( 369)			st = style;
            		}
            		else {
HXLINE( 371)			if (::hx::IsEq( style,HX_("fancy",49,ac,50,fb) )) {
HXLINE( 372)				st =  ::tjson::FancyStyle_obj::__alloc( HX_CTX ,null());
            			}
            			else {
HXLINE( 374)				st =  ::tjson::SimpleStyle_obj::__alloc( HX_CTX );
            			}
            		}
HXLINE( 375)		 ::StringBuf buffer =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 376)		bool _hx_tmp;
HXDLIN( 376)		if (!(::Std_obj::isOfType(obj,( ( ::Dynamic)(::hx::ArrayBase::__mClass) )))) {
HXLINE( 376)			_hx_tmp = ::Std_obj::isOfType(obj,( ( ::Dynamic)(::hx::ClassOf< ::haxe::ds::List >()) ));
            		}
            		else {
HXLINE( 376)			_hx_tmp = true;
            		}
HXDLIN( 376)		if (_hx_tmp) {
HXLINE( 377)			::String x = this->encodeIterable(obj,st,0);
HXDLIN( 377)			if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 377)				buffer->flush();
            			}
HXDLIN( 377)			if (::hx::IsNull( buffer->b )) {
HXLINE( 377)				buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE( 377)				::Array< ::String > buffer1 = buffer->b;
HXDLIN( 377)				buffer1->push(::Std_obj::string(x));
            			}
            		}
            		else {
HXLINE( 379)			if (::Std_obj::isOfType(obj,( ( ::Dynamic)(::hx::ClassOf< ::haxe::ds::StringMap >()) ))) {
HXLINE( 380)				::String x = this->encodeMap(( ( ::haxe::ds::StringMap)(obj) ),st,0);
HXDLIN( 380)				if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 380)					buffer->flush();
            				}
HXDLIN( 380)				if (::hx::IsNull( buffer->b )) {
HXLINE( 380)					buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            				}
            				else {
HXLINE( 380)					::Array< ::String > buffer1 = buffer->b;
HXDLIN( 380)					buffer1->push(::Std_obj::string(x));
            				}
            			}
            			else {
HXLINE( 382)				this->cacheEncode(obj);
HXLINE( 383)				{
HXLINE( 383)					::String x = this->encodeObject(obj,st,0);
HXDLIN( 383)					if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 383)						buffer->flush();
            					}
HXDLIN( 383)					if (::hx::IsNull( buffer->b )) {
HXLINE( 383)						buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE( 383)						::Array< ::String > buffer1 = buffer->b;
HXDLIN( 383)						buffer1->push(::Std_obj::string(x));
            					}
            				}
            			}
            		}
HXLINE( 385)		return buffer->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC2(TJSONEncoder_obj,doEncode,return )

::String TJSONEncoder_obj::encodeObject( ::Dynamic obj,::Dynamic style,int depth){
            	HX_GC_STACKFRAME(&_hx_pos_6541b35aed1f76b2_388_encodeObject)
HXLINE( 389)		 ::StringBuf buffer =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 390)		{
HXLINE( 390)			::String x = ::tjson::EncodeStyle_obj::beginObject(style,depth);
HXDLIN( 390)			if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 390)				buffer->flush();
            			}
HXDLIN( 390)			if (::hx::IsNull( buffer->b )) {
HXLINE( 390)				buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE( 390)				::Array< ::String > buffer1 = buffer->b;
HXDLIN( 390)				buffer1->push(::Std_obj::string(x));
            			}
            		}
HXLINE( 391)		int fieldCount = 0;
HXLINE( 392)		::Array< ::String > fields;
HXLINE( 393)		::Array< ::String > dontEncodeFields = null();
HXLINE( 394)		::hx::Class cls = ::Type_obj::getClass(obj);
HXLINE( 395)		if (::hx::IsNotNull( cls )) {
HXLINE( 396)			fields = ::Type_obj::getInstanceFields(cls);
            		}
            		else {
HXLINE( 398)			fields = ::Reflect_obj::fields(obj);
            		}
HXLINE( 402)		{
HXLINE( 402)			 ::ValueType _g = ::Type_obj::_hx_typeof(obj);
HXDLIN( 402)			if ((_g->_hx_getIndex() == 6)) {
HXLINE( 403)				::hx::Class c = _g->_hx_getObject(0).StaticCast< ::hx::Class >();
HXDLIN( 403)				{
HXLINE( 404)					fieldCount = (fieldCount + 1);
HXDLIN( 404)					if (((fieldCount - 1) > 0)) {
HXLINE( 404)						::String x = ::tjson::EncodeStyle_obj::entrySeperator(style,depth);
HXDLIN( 404)						if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 404)							buffer->flush();
            						}
HXDLIN( 404)						if (::hx::IsNull( buffer->b )) {
HXLINE( 404)							buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 404)							::Array< ::String > buffer1 = buffer->b;
HXDLIN( 404)							buffer1->push(::Std_obj::string(x));
            						}
            					}
            					else {
HXLINE( 405)						::String x = ::tjson::EncodeStyle_obj::firstEntry(style,depth);
HXDLIN( 405)						if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 405)							buffer->flush();
            						}
HXDLIN( 405)						if (::hx::IsNull( buffer->b )) {
HXLINE( 405)							buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 405)							::Array< ::String > buffer1 = buffer->b;
HXDLIN( 405)							buffer1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 406)					{
HXLINE( 406)						::String x = (HX_("\"_hxcls\"",05,d4,1f,f6) + ::tjson::EncodeStyle_obj::keyValueSeperator(style,depth));
HXDLIN( 406)						if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 406)							buffer->flush();
            						}
HXDLIN( 406)						if (::hx::IsNull( buffer->b )) {
HXLINE( 406)							buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 406)							::Array< ::String > buffer1 = buffer->b;
HXDLIN( 406)							buffer1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 407)					{
HXLINE( 407)						::String x1 = this->encodeValue(::Type_obj::getClassName(c),style,depth);
HXDLIN( 407)						if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 407)							buffer->flush();
            						}
HXDLIN( 407)						if (::hx::IsNull( buffer->b )) {
HXLINE( 407)							buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            						}
            						else {
HXLINE( 407)							::Array< ::String > buffer1 = buffer->b;
HXDLIN( 407)							buffer1->push(::Std_obj::string(x1));
            						}
            					}
HXLINE( 409)					if (::hx::IsNotNull( obj->__Field(HX_("TJ_noEncode",60,bc,0b,f0),::hx::paccDynamic) )) {
HXLINE( 410)						dontEncodeFields = ( (::Array< ::String >)(obj->__Field(HX_("TJ_noEncode",60,bc,0b,f0),::hx::paccDynamic)()) );
            					}
            				}
            			}
            		}
HXLINE( 415)		{
HXLINE( 415)			int _g1 = 0;
HXDLIN( 415)			while((_g1 < fields->length)){
HXLINE( 415)				::String field = fields->__get(_g1);
HXDLIN( 415)				_g1 = (_g1 + 1);
HXLINE( 416)				bool _hx_tmp;
HXDLIN( 416)				if (::hx::IsNotNull( dontEncodeFields )) {
HXLINE( 416)					_hx_tmp = (dontEncodeFields->indexOf(field,null()) >= 0);
            				}
            				else {
HXLINE( 416)					_hx_tmp = false;
            				}
HXDLIN( 416)				if (_hx_tmp) {
HXLINE( 416)					continue;
            				}
HXLINE( 417)				 ::Dynamic value = ::Reflect_obj::field(obj,field);
HXLINE( 418)				::String vStr = this->encodeValue(value,style,depth);
HXLINE( 419)				if (::hx::IsNotNull( vStr )) {
HXLINE( 420)					fieldCount = (fieldCount + 1);
HXDLIN( 420)					if (((fieldCount - 1) > 0)) {
HXLINE( 420)						::String x = ::tjson::EncodeStyle_obj::entrySeperator(style,depth);
HXDLIN( 420)						if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 420)							buffer->flush();
            						}
HXDLIN( 420)						if (::hx::IsNull( buffer->b )) {
HXLINE( 420)							buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 420)							::Array< ::String > buffer1 = buffer->b;
HXDLIN( 420)							buffer1->push(::Std_obj::string(x));
            						}
            					}
            					else {
HXLINE( 421)						::String x = ::tjson::EncodeStyle_obj::firstEntry(style,depth);
HXDLIN( 421)						if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 421)							buffer->flush();
            						}
HXDLIN( 421)						if (::hx::IsNull( buffer->b )) {
HXLINE( 421)							buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 421)							::Array< ::String > buffer1 = buffer->b;
HXDLIN( 421)							buffer1->push(::Std_obj::string(x));
            						}
            					}
HXLINE( 422)					{
HXLINE( 422)						::String x = ((((HX_("\"",22,00,00,00) + field) + HX_("\"",22,00,00,00)) + ::tjson::EncodeStyle_obj::keyValueSeperator(style,depth)) + vStr);
HXDLIN( 422)						if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 422)							buffer->flush();
            						}
HXDLIN( 422)						if (::hx::IsNull( buffer->b )) {
HXLINE( 422)							buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            						}
            						else {
HXLINE( 422)							::Array< ::String > buffer1 = buffer->b;
HXDLIN( 422)							buffer1->push(::Std_obj::string(x));
            						}
            					}
            				}
            			}
            		}
HXLINE( 429)		{
HXLINE( 429)			::String x1 = ::tjson::EncodeStyle_obj::endObject(style,depth);
HXDLIN( 429)			if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 429)				buffer->flush();
            			}
HXDLIN( 429)			if (::hx::IsNull( buffer->b )) {
HXLINE( 429)				buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            			}
            			else {
HXLINE( 429)				::Array< ::String > buffer1 = buffer->b;
HXDLIN( 429)				buffer1->push(::Std_obj::string(x1));
            			}
            		}
HXLINE( 430)		return buffer->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC3(TJSONEncoder_obj,encodeObject,return )

::String TJSONEncoder_obj::encodeMap( ::haxe::ds::StringMap obj,::Dynamic style,int depth){
            	HX_GC_STACKFRAME(&_hx_pos_6541b35aed1f76b2_434_encodeMap)
HXLINE( 435)		 ::StringBuf buffer =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 436)		{
HXLINE( 436)			::String x = ::tjson::EncodeStyle_obj::beginObject(style,depth);
HXDLIN( 436)			if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 436)				buffer->flush();
            			}
HXDLIN( 436)			if (::hx::IsNull( buffer->b )) {
HXLINE( 436)				buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE( 436)				::Array< ::String > buffer1 = buffer->b;
HXDLIN( 436)				buffer1->push(::Std_obj::string(x));
            			}
            		}
HXLINE( 437)		int fieldCount = 0;
HXLINE( 438)		{
HXLINE( 438)			 ::Dynamic field = obj->keys();
HXDLIN( 438)			while(( (bool)(field->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 438)				::String field1 = ( (::String)(field->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 439)				fieldCount = (fieldCount + 1);
HXDLIN( 439)				if (((fieldCount - 1) > 0)) {
HXLINE( 439)					::String x = ::tjson::EncodeStyle_obj::entrySeperator(style,depth);
HXDLIN( 439)					if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 439)						buffer->flush();
            					}
HXDLIN( 439)					if (::hx::IsNull( buffer->b )) {
HXLINE( 439)						buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE( 439)						::Array< ::String > buffer1 = buffer->b;
HXDLIN( 439)						buffer1->push(::Std_obj::string(x));
            					}
            				}
            				else {
HXLINE( 440)					::String x = ::tjson::EncodeStyle_obj::firstEntry(style,depth);
HXDLIN( 440)					if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 440)						buffer->flush();
            					}
HXDLIN( 440)					if (::hx::IsNull( buffer->b )) {
HXLINE( 440)						buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE( 440)						::Array< ::String > buffer1 = buffer->b;
HXDLIN( 440)						buffer1->push(::Std_obj::string(x));
            					}
            				}
HXLINE( 441)				 ::Dynamic value = obj->get(field1);
HXLINE( 442)				{
HXLINE( 442)					::String x = (((HX_("\"",22,00,00,00) + field1) + HX_("\"",22,00,00,00)) + ::tjson::EncodeStyle_obj::keyValueSeperator(style,depth));
HXDLIN( 442)					if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 442)						buffer->flush();
            					}
HXDLIN( 442)					if (::hx::IsNull( buffer->b )) {
HXLINE( 442)						buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE( 442)						::Array< ::String > buffer1 = buffer->b;
HXDLIN( 442)						buffer1->push(::Std_obj::string(x));
            					}
            				}
HXLINE( 443)				{
HXLINE( 443)					::String x1 = this->encodeValue(value,style,depth);
HXDLIN( 443)					if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 443)						buffer->flush();
            					}
HXDLIN( 443)					if (::hx::IsNull( buffer->b )) {
HXLINE( 443)						buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            					}
            					else {
HXLINE( 443)						::Array< ::String > buffer1 = buffer->b;
HXDLIN( 443)						buffer1->push(::Std_obj::string(x1));
            					}
            				}
            			}
            		}
HXLINE( 445)		{
HXLINE( 445)			::String x1 = ::tjson::EncodeStyle_obj::endObject(style,depth);
HXDLIN( 445)			if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 445)				buffer->flush();
            			}
HXDLIN( 445)			if (::hx::IsNull( buffer->b )) {
HXLINE( 445)				buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            			}
            			else {
HXLINE( 445)				::Array< ::String > buffer1 = buffer->b;
HXDLIN( 445)				buffer1->push(::Std_obj::string(x1));
            			}
            		}
HXLINE( 446)		return buffer->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC3(TJSONEncoder_obj,encodeMap,return )

::String TJSONEncoder_obj::encodeIterable( ::Dynamic obj,::Dynamic style,int depth){
            	HX_GC_STACKFRAME(&_hx_pos_6541b35aed1f76b2_450_encodeIterable)
HXLINE( 451)		 ::StringBuf buffer =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 452)		{
HXLINE( 452)			::String x = ::tjson::EncodeStyle_obj::beginArray(style,depth);
HXDLIN( 452)			if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 452)				buffer->flush();
            			}
HXDLIN( 452)			if (::hx::IsNull( buffer->b )) {
HXLINE( 452)				buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE( 452)				::Array< ::String > buffer1 = buffer->b;
HXDLIN( 452)				buffer1->push(::Std_obj::string(x));
            			}
            		}
HXLINE( 453)		int fieldCount = 0;
HXLINE( 454)		{
HXLINE( 454)			 ::Dynamic value = obj->__Field(HX_("iterator",ee,49,9a,93),::hx::paccDynamic)();
HXDLIN( 454)			while(( (bool)(value->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 454)				 ::Dynamic value1 = value->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 455)				fieldCount = (fieldCount + 1);
HXDLIN( 455)				if (((fieldCount - 1) > 0)) {
HXLINE( 455)					::String x = ::tjson::EncodeStyle_obj::entrySeperator(style,depth);
HXDLIN( 455)					if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 455)						buffer->flush();
            					}
HXDLIN( 455)					if (::hx::IsNull( buffer->b )) {
HXLINE( 455)						buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE( 455)						::Array< ::String > buffer1 = buffer->b;
HXDLIN( 455)						buffer1->push(::Std_obj::string(x));
            					}
            				}
            				else {
HXLINE( 456)					::String x = ::tjson::EncodeStyle_obj::firstEntry(style,depth);
HXDLIN( 456)					if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 456)						buffer->flush();
            					}
HXDLIN( 456)					if (::hx::IsNull( buffer->b )) {
HXLINE( 456)						buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE( 456)						::Array< ::String > buffer1 = buffer->b;
HXDLIN( 456)						buffer1->push(::Std_obj::string(x));
            					}
            				}
HXLINE( 457)				{
HXLINE( 457)					::String x = this->encodeValue(value1,style,depth);
HXDLIN( 457)					if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 457)						buffer->flush();
            					}
HXDLIN( 457)					if (::hx::IsNull( buffer->b )) {
HXLINE( 457)						buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE( 457)						::Array< ::String > buffer1 = buffer->b;
HXDLIN( 457)						buffer1->push(::Std_obj::string(x));
            					}
            				}
            			}
            		}
HXLINE( 460)		{
HXLINE( 460)			::String x1 = ::tjson::EncodeStyle_obj::endArray(style,depth);
HXDLIN( 460)			if (::hx::IsNotNull( buffer->charBuf )) {
HXLINE( 460)				buffer->flush();
            			}
HXDLIN( 460)			if (::hx::IsNull( buffer->b )) {
HXLINE( 460)				buffer->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            			}
            			else {
HXLINE( 460)				::Array< ::String > buffer1 = buffer->b;
HXDLIN( 460)				buffer1->push(::Std_obj::string(x1));
            			}
            		}
HXLINE( 461)		return buffer->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC3(TJSONEncoder_obj,encodeIterable,return )

::String TJSONEncoder_obj::cacheEncode( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_6541b35aed1f76b2_464_cacheEncode)
HXLINE( 465)		if (!(this->uCache)) {
HXLINE( 465)			return null();
            		}
HXLINE( 467)		{
HXLINE( 467)			int _g = 0;
HXDLIN( 467)			int _g1 = this->cache->get_length();
HXDLIN( 467)			while((_g < _g1)){
HXLINE( 467)				_g = (_g + 1);
HXDLIN( 467)				int c = (_g - 1);
HXLINE( 468)				if (::hx::IsEq( this->cache->__get(c),value )) {
HXLINE( 469)					return (((HX_("\"",22,00,00,00) + ::tjson::TJSON_obj::OBJECT_REFERENCE_PREFIX) + c) + HX_("\"",22,00,00,00));
            				}
            			}
            		}
HXLINE( 472)		this->cache->push(value);
HXLINE( 473)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(TJSONEncoder_obj,cacheEncode,return )

::String TJSONEncoder_obj::encodeValue( ::Dynamic value,::Dynamic style,int depth){
            	HX_STACKFRAME(&_hx_pos_6541b35aed1f76b2_477_encodeValue)
HXDLIN( 477)		bool _hx_tmp;
HXDLIN( 477)		if (!(::Std_obj::isOfType(value,( ( ::Dynamic)(::hx::ClassOf< int >()) )))) {
HXDLIN( 477)			_hx_tmp = ::Std_obj::isOfType(value,( ( ::Dynamic)(::hx::ClassOf< ::Float >()) ));
            		}
            		else {
HXDLIN( 477)			_hx_tmp = true;
            		}
HXDLIN( 477)		if (_hx_tmp) {
HXLINE( 478)			return ( (::String)(value) );
            		}
            		else {
HXLINE( 480)			bool _hx_tmp;
HXDLIN( 480)			if (!(::Std_obj::isOfType(value,( ( ::Dynamic)(::hx::ArrayBase::__mClass) )))) {
HXLINE( 480)				_hx_tmp = ::Std_obj::isOfType(value,( ( ::Dynamic)(::hx::ClassOf< ::haxe::ds::List >()) ));
            			}
            			else {
HXLINE( 480)				_hx_tmp = true;
            			}
HXDLIN( 480)			if (_hx_tmp) {
HXLINE( 481)				::cpp::VirtualArray v = ( (::cpp::VirtualArray)(value) );
HXLINE( 482)				return this->encodeIterable(v,style,(depth + 1));
            			}
            			else {
HXLINE( 484)				if (::Std_obj::isOfType(value,( ( ::Dynamic)(::hx::ClassOf< ::haxe::ds::List >()) ))) {
HXLINE( 485)					 ::haxe::ds::List v = ( ( ::haxe::ds::List)(value) );
HXLINE( 486)					return this->encodeIterable(v,style,(depth + 1));
            				}
            				else {
HXLINE( 489)					if (::Std_obj::isOfType(value,( ( ::Dynamic)(::hx::ClassOf< ::haxe::ds::StringMap >()) ))) {
HXLINE( 490)						return this->encodeMap(( ( ::haxe::ds::StringMap)(value) ),style,(depth + 1));
            					}
            					else {
HXLINE( 493)						if (::Std_obj::isOfType(value,( ( ::Dynamic)(::hx::ClassOf< ::String >()) ))) {
HXLINE( 494)							return ((HX_("\"",22,00,00,00) + ::StringTools_obj::replace(::StringTools_obj::replace(::StringTools_obj::replace(::StringTools_obj::replace(::Std_obj::string(value),HX_("\\",5c,00,00,00),HX_("\\\\",80,50,00,00)),HX_("\n",0a,00,00,00),HX_("\\n",92,50,00,00)),HX_("\r",0d,00,00,00),HX_("\\r",96,50,00,00)),HX_("\"",22,00,00,00),HX_("\\\"",46,50,00,00))) + HX_("\"",22,00,00,00));
            						}
            						else {
HXLINE( 496)							if (::Std_obj::isOfType(value,( ( ::Dynamic)(::hx::ClassOf< bool >()) ))) {
HXLINE( 497)								return ( (::String)(value) );
            							}
            							else {
HXLINE( 499)								if (::Reflect_obj::isObject(value)) {
HXLINE( 500)									::String ret = this->cacheEncode(value);
HXLINE( 501)									if (::hx::IsNotNull( ret )) {
HXLINE( 501)										return ret;
            									}
HXLINE( 502)									return this->encodeObject(value,style,(depth + 1));
            								}
            								else {
HXLINE( 504)									if (::hx::IsNull( value )) {
HXLINE( 505)										return HX_("null",87,9e,0e,49);
            									}
            									else {
HXLINE( 508)										return null();
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 477)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(TJSONEncoder_obj,encodeValue,return )


::hx::ObjectPtr< TJSONEncoder_obj > TJSONEncoder_obj::__new(::hx::Null< bool >  __o_useCache) {
	::hx::ObjectPtr< TJSONEncoder_obj > __this = new TJSONEncoder_obj();
	__this->__construct(__o_useCache);
	return __this;
}

::hx::ObjectPtr< TJSONEncoder_obj > TJSONEncoder_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_useCache) {
	TJSONEncoder_obj *__this = (TJSONEncoder_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TJSONEncoder_obj), true, "tjson.TJSONEncoder"));
	*(void **)__this = TJSONEncoder_obj::_hx_vtable;
	__this->__construct(__o_useCache);
	return __this;
}

TJSONEncoder_obj::TJSONEncoder_obj()
{
}

void TJSONEncoder_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TJSONEncoder);
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_MEMBER_NAME(uCache,"uCache");
	HX_MARK_END_CLASS();
}

void TJSONEncoder_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cache,"cache");
	HX_VISIT_MEMBER_NAME(uCache,"uCache");
}

::hx::Val TJSONEncoder_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return ::hx::Val( cache ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"uCache") ) { return ::hx::Val( uCache ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"doEncode") ) { return ::hx::Val( doEncode_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"encodeMap") ) { return ::hx::Val( encodeMap_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cacheEncode") ) { return ::hx::Val( cacheEncode_dyn() ); }
		if (HX_FIELD_EQ(inName,"encodeValue") ) { return ::hx::Val( encodeValue_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"encodeObject") ) { return ::hx::Val( encodeObject_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"encodeIterable") ) { return ::hx::Val( encodeIterable_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TJSONEncoder_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"uCache") ) { uCache=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TJSONEncoder_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("cache",42,9a,14,41));
	outFields->push(HX_("uCache",8d,41,03,9c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TJSONEncoder_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(TJSONEncoder_obj,cache),HX_("cache",42,9a,14,41)},
	{::hx::fsBool,(int)offsetof(TJSONEncoder_obj,uCache),HX_("uCache",8d,41,03,9c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TJSONEncoder_obj_sStaticStorageInfo = 0;
#endif

static ::String TJSONEncoder_obj_sMemberFields[] = {
	HX_("cache",42,9a,14,41),
	HX_("uCache",8d,41,03,9c),
	HX_("doEncode",01,78,fb,8d),
	HX_("encodeObject",75,99,11,2d),
	HX_("encodeMap",26,c2,64,1a),
	HX_("encodeIterable",e8,52,23,d8),
	HX_("cacheEncode",f8,1d,85,18),
	HX_("encodeValue",7b,ad,4e,3d),
	::String(null()) };

::hx::Class TJSONEncoder_obj::__mClass;

void TJSONEncoder_obj::__register()
{
	TJSONEncoder_obj _hx_dummy;
	TJSONEncoder_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tjson.TJSONEncoder",92,5b,09,fd);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TJSONEncoder_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TJSONEncoder_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TJSONEncoder_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TJSONEncoder_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tjson
