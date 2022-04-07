#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif
#ifndef INCLUDED_tjson_TJSON
#include <tjson/TJSON.h>
#endif
#ifndef INCLUDED_tjson_TJSONParser
#include <tjson/TJSONParser.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8c4c64da12ad2c24_43_new,"tjson.TJSONParser","new",0xd8b03d1b,"tjson.TJSONParser.new","tjson/TJSON.hx",43,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_8c4c64da12ad2c24_56_doParse,"tjson.TJSONParser","doParse",0x197356e3,"tjson.TJSONParser.doParse","tjson/TJSON.hx",56,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_8c4c64da12ad2c24_68_doObject,"tjson.TJSONParser","doObject",0x532f920f,"tjson.TJSONParser.doObject","tjson/TJSON.hx",68,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_8c4c64da12ad2c24_116_doArray,"tjson.TJSONParser","doArray",0x81ad3449,"tjson.TJSONParser.doArray","tjson/TJSON.hx",116,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_8c4c64da12ad2c24_139_convertSymbolToProperType,"tjson.TJSONParser","convertSymbolToProperType",0x8858d24b,"tjson.TJSONParser.convertSymbolToProperType","tjson/TJSON.hx",139,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_8c4c64da12ad2c24_170_looksLikeFloat,"tjson.TJSONParser","looksLikeFloat",0xe4dd3816,"tjson.TJSONParser.looksLikeFloat","tjson/TJSON.hx",170,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_8c4c64da12ad2c24_182_looksLikeInt,"tjson.TJSONParser","looksLikeInt",0x29db0ce9,"tjson.TJSONParser.looksLikeInt","tjson/TJSON.hx",182,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_8c4c64da12ad2c24_185_getNextSymbol,"tjson.TJSONParser","getNextSymbol",0x5b95815c,"tjson.TJSONParser.getNextSymbol","tjson/TJSON.hx",185,0x85b8bad5)
HX_LOCAL_STACK_FRAME(_hx_pos_8c4c64da12ad2c24_348_defaultStringProcessor,"tjson.TJSONParser","defaultStringProcessor",0x357ad6a5,"tjson.TJSONParser.defaultStringProcessor","tjson/TJSON.hx",348,0x85b8bad5)
namespace tjson{

void TJSONParser_obj::__construct(::String vjson,::String __o_vfileName, ::Dynamic stringProcessor){
            		::String vfileName = __o_vfileName;
            		if (::hx::IsNull(__o_vfileName)) vfileName = HX_("JSON Data",42,37,28,24);
            	HX_GC_STACKFRAME(&_hx_pos_8c4c64da12ad2c24_43_new)
HXLINE(  44)		this->json = vjson;
HXLINE(  45)		this->fileName = vfileName;
HXLINE(  46)		this->currentLine = 1;
HXLINE(  47)		this->lastSymbolQuoted = false;
HXLINE(  48)		this->pos = 0;
HXLINE(  49)		this->floatRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("^-?[0-9]*\\.[0-9]+$",05,05,e4,a1),HX_("",00,00,00,00));
HXLINE(  50)		this->intRegex =  ::EReg_obj::__alloc( HX_CTX ,HX_("^-?[0-9]+$",65,12,70,cb),HX_("",00,00,00,00));
HXLINE(  51)		 ::Dynamic _hx_tmp;
HXDLIN(  51)		if (::hx::IsNull( stringProcessor )) {
HXLINE(  51)			_hx_tmp = this->defaultStringProcessor_dyn();
            		}
            		else {
HXLINE(  51)			_hx_tmp = stringProcessor;
            		}
HXDLIN(  51)		this->strProcessor = _hx_tmp;
HXLINE(  52)		this->cache = ::cpp::VirtualArray_obj::__new();
            	}

Dynamic TJSONParser_obj::__CreateEmpty() { return new TJSONParser_obj; }

void *TJSONParser_obj::_hx_vtable = 0;

Dynamic TJSONParser_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TJSONParser_obj > _hx_result = new TJSONParser_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TJSONParser_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a32445f;
}

 ::Dynamic TJSONParser_obj::doParse(){
            	HX_STACKFRAME(&_hx_pos_8c4c64da12ad2c24_56_doParse)
HXDLIN(  56)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  58)			::String _g = this->getNextSymbol();
HXDLIN(  58)			::String _hx_switch_0 = _g;
            			if (  (_hx_switch_0==HX_("[",5b,00,00,00)) ){
HXLINE(  60)				return this->doArray();
HXDLIN(  60)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_0==HX_("{",7b,00,00,00)) ){
HXLINE(  59)				return this->doObject();
HXDLIN(  59)				goto _hx_goto_1;
            			}
            			/* default */{
HXLINE(  61)				::String s = _g;
HXDLIN(  61)				return this->convertSymbolToProperType(s);
            			}
            			_hx_goto_1:;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(  63)				{
HXLINE(  63)					null();
            				}
HXDLIN(  63)				 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE(  56)				if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::String >())) {
HXLINE(  63)					::String e = ( (::String)(_g1) );
HXLINE(  64)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((this->fileName + HX_(" on line ",0b,0c,b3,49)) + this->currentLine) + HX_(": ",a6,32,00,00)) + e)));
            				}
            				else {
HXDLIN(  56)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXDLIN(  56)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TJSONParser_obj,doParse,return )

 ::Dynamic TJSONParser_obj::doObject(){
            	HX_STACKFRAME(&_hx_pos_8c4c64da12ad2c24_68_doObject)
HXLINE(  69)		 ::Dynamic o =  ::Dynamic(::hx::Anon_obj::Create(0));
HXLINE(  70)		 ::Dynamic val = HX_("",00,00,00,00);
HXLINE(  71)		::String key;
HXLINE(  72)		bool isClassOb = false;
HXLINE(  73)		this->cache->push(o);
HXLINE(  74)		while((this->pos < this->json.length)){
HXLINE(  75)			key = this->getNextSymbol();
HXLINE(  76)			bool _hx_tmp;
HXDLIN(  76)			if ((key == HX_(",",2c,00,00,00))) {
HXLINE(  76)				_hx_tmp = !(this->lastSymbolQuoted);
            			}
            			else {
HXLINE(  76)				_hx_tmp = false;
            			}
HXDLIN(  76)			if (_hx_tmp) {
HXLINE(  76)				continue;
            			}
HXLINE(  77)			bool _hx_tmp1;
HXDLIN(  77)			if ((key == HX_("}",7d,00,00,00))) {
HXLINE(  77)				_hx_tmp1 = !(this->lastSymbolQuoted);
            			}
            			else {
HXLINE(  77)				_hx_tmp1 = false;
            			}
HXDLIN(  77)			if (_hx_tmp1) {
HXLINE(  79)				bool _hx_tmp;
HXDLIN(  79)				if (isClassOb) {
HXLINE(  79)					_hx_tmp = ::hx::IsNotNull( o->__Field(HX_("TJ_unserialize",de,34,26,eb),::hx::paccDynamic) );
            				}
            				else {
HXLINE(  79)					_hx_tmp = false;
            				}
HXDLIN(  79)				if (_hx_tmp) {
HXLINE(  80)					o->__Field(HX_("TJ_unserialize",de,34,26,eb),::hx::paccDynamic)();
            				}
HXLINE(  82)				return o;
            			}
HXLINE(  85)			::String seperator = this->getNextSymbol();
HXLINE(  86)			if ((seperator != HX_(":",3a,00,00,00))) {
HXLINE(  87)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Expected ':' but got '",20,3e,36,5d) + seperator) + HX_("' instead.",85,80,01,06))));
            			}
HXLINE(  90)			::String v = this->getNextSymbol();
HXLINE(  92)			if ((key == HX_("_hxcls",db,b3,30,2d))) {
HXLINE(  93)				::hx::Class cls = ::Type_obj::resolveClass(v);
HXLINE(  94)				if (::hx::IsNull( cls )) {
HXLINE(  94)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Invalid class name - ",17,0b,a3,6f) + v)));
            				}
HXLINE(  95)				o = ::Type_obj::createEmptyInstance(cls);
HXLINE(  96)				this->cache->pop();
HXLINE(  97)				this->cache->push(o);
HXLINE(  98)				isClassOb = true;
HXLINE(  99)				continue;
            			}
HXLINE( 103)			bool _hx_tmp2;
HXDLIN( 103)			if ((v == HX_("{",7b,00,00,00))) {
HXLINE( 103)				_hx_tmp2 = !(this->lastSymbolQuoted);
            			}
            			else {
HXLINE( 103)				_hx_tmp2 = false;
            			}
HXDLIN( 103)			if (_hx_tmp2) {
HXLINE( 104)				val = this->doObject();
            			}
            			else {
HXLINE( 105)				bool _hx_tmp;
HXDLIN( 105)				if ((v == HX_("[",5b,00,00,00))) {
HXLINE( 105)					_hx_tmp = !(this->lastSymbolQuoted);
            				}
            				else {
HXLINE( 105)					_hx_tmp = false;
            				}
HXDLIN( 105)				if (_hx_tmp) {
HXLINE( 106)					val = this->doArray();
            				}
            				else {
HXLINE( 108)					val = this->convertSymbolToProperType(v);
            				}
            			}
HXLINE( 110)			::Reflect_obj::setField(o,key,val);
            		}
HXLINE( 112)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unexpected end of file. Expected '}'",8c,66,05,48)));
HXDLIN( 112)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TJSONParser_obj,doObject,return )

 ::Dynamic TJSONParser_obj::doArray(){
            	HX_STACKFRAME(&_hx_pos_8c4c64da12ad2c24_116_doArray)
HXLINE( 117)		::cpp::VirtualArray a = ::cpp::VirtualArray_obj::__new();
HXLINE( 118)		 ::Dynamic val;
HXLINE( 119)		while((this->pos < this->json.length)){
HXLINE( 120)			val = this->getNextSymbol();
HXLINE( 121)			bool _hx_tmp;
HXDLIN( 121)			if (::hx::IsEq( val,HX_(",",2c,00,00,00) )) {
HXLINE( 121)				_hx_tmp = !(this->lastSymbolQuoted);
            			}
            			else {
HXLINE( 121)				_hx_tmp = false;
            			}
HXDLIN( 121)			if (_hx_tmp) {
HXLINE( 122)				continue;
            			}
            			else {
HXLINE( 124)				bool _hx_tmp;
HXDLIN( 124)				if (::hx::IsEq( val,HX_("]",5d,00,00,00) )) {
HXLINE( 124)					_hx_tmp = !(this->lastSymbolQuoted);
            				}
            				else {
HXLINE( 124)					_hx_tmp = false;
            				}
HXDLIN( 124)				if (_hx_tmp) {
HXLINE( 125)					return a;
            				}
            				else {
HXLINE( 127)					bool _hx_tmp;
HXDLIN( 127)					if (::hx::IsEq( val,HX_("{",7b,00,00,00) )) {
HXLINE( 127)						_hx_tmp = !(this->lastSymbolQuoted);
            					}
            					else {
HXLINE( 127)						_hx_tmp = false;
            					}
HXDLIN( 127)					if (_hx_tmp) {
HXLINE( 128)						val = this->doObject();
            					}
            					else {
HXLINE( 129)						bool _hx_tmp;
HXDLIN( 129)						if (::hx::IsEq( val,HX_("[",5b,00,00,00) )) {
HXLINE( 129)							_hx_tmp = !(this->lastSymbolQuoted);
            						}
            						else {
HXLINE( 129)							_hx_tmp = false;
            						}
HXDLIN( 129)						if (_hx_tmp) {
HXLINE( 130)							val = this->doArray();
            						}
            						else {
HXLINE( 132)							val = this->convertSymbolToProperType(( (::String)(val) ));
            						}
            					}
            				}
            			}
HXLINE( 134)			a->push(val);
            		}
HXLINE( 136)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unexpected end of file. Expected ']'",ac,4a,05,48)));
HXDLIN( 136)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TJSONParser_obj,doArray,return )

 ::Dynamic TJSONParser_obj::convertSymbolToProperType(::String symbol){
            	HX_STACKFRAME(&_hx_pos_8c4c64da12ad2c24_139_convertSymbolToProperType)
HXLINE( 140)		if (this->lastSymbolQuoted) {
HXLINE( 143)			if (::StringTools_obj::startsWith(symbol,::tjson::TJSON_obj::OBJECT_REFERENCE_PREFIX)) {
HXLINE( 144)				int idx = ( (int)(::Std_obj::parseInt(symbol.substr(::tjson::TJSON_obj::OBJECT_REFERENCE_PREFIX.length,null()))) );
HXLINE( 145)				return this->cache->__get(idx);
            			}
HXLINE( 147)			return symbol;
            		}
HXLINE( 149)		if (this->looksLikeFloat(symbol)) {
HXLINE( 150)			return ::Std_obj::parseFloat(symbol);
            		}
HXLINE( 152)		if (this->looksLikeInt(symbol)) {
HXLINE( 153)			return ::Std_obj::parseInt(symbol);
            		}
HXLINE( 155)		if ((symbol.toLowerCase() == HX_("true",4e,a7,03,4d))) {
HXLINE( 156)			return true;
            		}
HXLINE( 158)		if ((symbol.toLowerCase() == HX_("false",a3,35,4f,fb))) {
HXLINE( 159)			return false;
            		}
HXLINE( 161)		if ((symbol.toLowerCase() == HX_("null",87,9e,0e,49))) {
HXLINE( 162)			return null();
            		}
HXLINE( 165)		return symbol;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TJSONParser_obj,convertSymbolToProperType,return )

bool TJSONParser_obj::looksLikeFloat(::String s){
            	HX_STACKFRAME(&_hx_pos_8c4c64da12ad2c24_170_looksLikeFloat)
HXDLIN( 170)		if (!(this->floatRegex->match(s))) {
HXDLIN( 170)			if (this->intRegex->match(s)) {
HXLINE( 172)				::String intStr = this->intRegex->matched(0);
HXLINE( 173)				if (::hx::IsEq( intStr.charCodeAt(0),45 )) {
HXLINE( 174)					return (intStr > HX_("-2147483648",5a,57,13,4e));
            				}
            				else {
HXLINE( 176)					return (intStr > HX_("2147483647",ec,7c,fa,a6));
            				}
            			}
            			else {
HXDLIN( 170)				return false;
            			}
            		}
            		else {
HXDLIN( 170)			return true;
            		}
HXDLIN( 170)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TJSONParser_obj,looksLikeFloat,return )

bool TJSONParser_obj::looksLikeInt(::String s){
            	HX_STACKFRAME(&_hx_pos_8c4c64da12ad2c24_182_looksLikeInt)
HXDLIN( 182)		return this->intRegex->match(s);
            	}


HX_DEFINE_DYNAMIC_FUNC1(TJSONParser_obj,looksLikeInt,return )

::String TJSONParser_obj::getNextSymbol(){
            	HX_GC_STACKFRAME(&_hx_pos_8c4c64da12ad2c24_185_getNextSymbol)
HXLINE( 186)		this->lastSymbolQuoted = false;
HXLINE( 187)		::String c = HX_("",00,00,00,00);
HXLINE( 188)		bool inQuote = false;
HXLINE( 189)		::String quoteType = HX_("",00,00,00,00);
HXLINE( 190)		::String symbol = HX_("",00,00,00,00);
HXLINE( 191)		bool inEscape = false;
HXLINE( 192)		bool inSymbol = false;
HXLINE( 193)		bool inLineComment = false;
HXLINE( 194)		bool inBlockComment = false;
HXLINE( 196)		while((this->pos < this->json.length)){
HXLINE( 197)			c = this->json.charAt(this->pos++);
HXLINE( 198)			bool _hx_tmp;
HXDLIN( 198)			if ((c == HX_("\n",0a,00,00,00))) {
HXLINE( 198)				_hx_tmp = !(inSymbol);
            			}
            			else {
HXLINE( 198)				_hx_tmp = false;
            			}
HXDLIN( 198)			if (_hx_tmp) {
HXLINE( 199)				this->currentLine++;
            			}
HXLINE( 200)			if (inLineComment) {
HXLINE( 201)				bool _hx_tmp;
HXDLIN( 201)				if ((c != HX_("\n",0a,00,00,00))) {
HXLINE( 201)					_hx_tmp = (c == HX_("\r",0d,00,00,00));
            				}
            				else {
HXLINE( 201)					_hx_tmp = true;
            				}
HXDLIN( 201)				if (_hx_tmp) {
HXLINE( 202)					inLineComment = false;
HXLINE( 203)					this->pos++;
            				}
HXLINE( 205)				continue;
            			}
HXLINE( 208)			if (inBlockComment) {
HXLINE( 209)				bool _hx_tmp;
HXDLIN( 209)				if ((c == HX_("*",2a,00,00,00))) {
HXLINE( 209)					_hx_tmp = (this->json.charAt(this->pos) == HX_("/",2f,00,00,00));
            				}
            				else {
HXLINE( 209)					_hx_tmp = false;
            				}
HXDLIN( 209)				if (_hx_tmp) {
HXLINE( 210)					inBlockComment = false;
HXLINE( 211)					this->pos++;
            				}
HXLINE( 213)				continue;
            			}
HXLINE( 216)			if (inQuote) {
HXLINE( 217)				if (inEscape) {
HXLINE( 218)					inEscape = false;
HXLINE( 219)					bool _hx_tmp;
HXDLIN( 219)					if ((c != HX_("'",27,00,00,00))) {
HXLINE( 219)						_hx_tmp = (c == HX_("\"",22,00,00,00));
            					}
            					else {
HXLINE( 219)						_hx_tmp = true;
            					}
HXDLIN( 219)					if (_hx_tmp) {
HXLINE( 220)						symbol = (symbol + c);
HXLINE( 221)						continue;
            					}
HXLINE( 223)					if ((c == HX_("t",74,00,00,00))) {
HXLINE( 224)						symbol = (symbol + HX_("\t",09,00,00,00));
HXLINE( 225)						continue;
            					}
HXLINE( 227)					if ((c == HX_("n",6e,00,00,00))) {
HXLINE( 228)						symbol = (symbol + HX_("\n",0a,00,00,00));
HXLINE( 229)						continue;
            					}
HXLINE( 231)					if ((c == HX_("\\",5c,00,00,00))) {
HXLINE( 232)						symbol = (symbol + HX_("\\",5c,00,00,00));
HXLINE( 233)						continue;
            					}
HXLINE( 235)					if ((c == HX_("r",72,00,00,00))) {
HXLINE( 236)						symbol = (symbol + HX_("\r",0d,00,00,00));
HXLINE( 237)						continue;
            					}
HXLINE( 239)					if ((c == HX_("/",2f,00,00,00))) {
HXLINE( 240)						symbol = (symbol + HX_("/",2f,00,00,00));
HXLINE( 241)						continue;
            					}
HXLINE( 244)					if ((c == HX_("u",75,00,00,00))) {
HXLINE( 245)						int hexValue = 0;
HXLINE( 247)						{
HXLINE( 247)							int _g = 0;
HXDLIN( 247)							while((_g < 4)){
HXLINE( 247)								_g = (_g + 1);
HXDLIN( 247)								int i = (_g - 1);
HXLINE( 248)								if ((this->pos >= this->json.length)) {
HXLINE( 249)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Unfinished UTF8 character",af,1d,9a,43)));
            								}
HXLINE( 250)								 ::Dynamic nc = this->json.charCodeAt(this->pos++);
HXLINE( 251)								hexValue = (hexValue << 4);
HXLINE( 252)								bool _hx_tmp;
HXDLIN( 252)								if (::hx::IsGreaterEq( nc,48 )) {
HXLINE( 252)									_hx_tmp = ::hx::IsLessEq( nc,57 );
            								}
            								else {
HXLINE( 252)									_hx_tmp = false;
            								}
HXDLIN( 252)								if (_hx_tmp) {
HXLINE( 253)									hexValue = (hexValue + (( (int)(nc) ) - 48));
            								}
            								else {
HXLINE( 254)									bool _hx_tmp;
HXDLIN( 254)									if (::hx::IsGreaterEq( nc,65 )) {
HXLINE( 254)										_hx_tmp = ::hx::IsLessEq( nc,70 );
            									}
            									else {
HXLINE( 254)										_hx_tmp = false;
            									}
HXDLIN( 254)									if (_hx_tmp) {
HXLINE( 255)										hexValue = (hexValue + ((10 + nc) - 65));
            									}
            									else {
HXLINE( 256)										bool _hx_tmp;
HXDLIN( 256)										if (::hx::IsGreaterEq( nc,97 )) {
HXLINE( 256)											_hx_tmp = ::hx::IsLessEq( nc,102 );
            										}
            										else {
HXLINE( 256)											_hx_tmp = false;
            										}
HXDLIN( 256)										if (_hx_tmp) {
HXLINE( 257)											hexValue = (hexValue + ((10 + nc) - 95));
            										}
            										else {
HXLINE( 258)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not a hex digit",7c,d7,ca,e4)));
            										}
            									}
            								}
            							}
            						}
HXLINE( 261)						 ::haxe::Utf8 utf =  ::haxe::Utf8_obj::__alloc( HX_CTX ,null());
HXLINE( 262)						utf->addChar(hexValue);
HXLINE( 263)						symbol = (symbol + utf->toString());
HXLINE( 265)						continue;
            					}
HXLINE( 269)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Invalid escape sequence '\\",5e,a7,c1,e5) + c) + HX_("'",27,00,00,00))));
            				}
            				else {
HXLINE( 271)					if ((c == HX_("\\",5c,00,00,00))) {
HXLINE( 272)						inEscape = true;
HXLINE( 273)						continue;
            					}
HXLINE( 275)					if ((c == quoteType)) {
HXLINE( 276)						return symbol;
            					}
HXLINE( 278)					symbol = (symbol + c);
HXLINE( 279)					continue;
            				}
            			}
            			else {
HXLINE( 285)				if ((c == HX_("/",2f,00,00,00))) {
HXLINE( 286)					::String c2 = this->json.charAt(this->pos);
HXLINE( 289)					if ((c2 == HX_("/",2f,00,00,00))) {
HXLINE( 290)						inLineComment = true;
HXLINE( 291)						this->pos++;
HXLINE( 292)						continue;
            					}
            					else {
HXLINE( 296)						if ((c2 == HX_("*",2a,00,00,00))) {
HXLINE( 297)							inBlockComment = true;
HXLINE( 298)							this->pos++;
HXLINE( 299)							continue;
            						}
            					}
            				}
            			}
HXLINE( 305)			if (inSymbol) {
HXLINE( 306)				bool _hx_tmp;
HXDLIN( 306)				bool _hx_tmp1;
HXDLIN( 306)				bool _hx_tmp2;
HXDLIN( 306)				bool _hx_tmp3;
HXDLIN( 306)				bool _hx_tmp4;
HXDLIN( 306)				bool _hx_tmp5;
HXDLIN( 306)				bool _hx_tmp6;
HXDLIN( 306)				if ((c != HX_(" ",20,00,00,00))) {
HXLINE( 306)					_hx_tmp6 = (c == HX_("\n",0a,00,00,00));
            				}
            				else {
HXLINE( 306)					_hx_tmp6 = true;
            				}
HXDLIN( 306)				if (!(_hx_tmp6)) {
HXLINE( 306)					_hx_tmp5 = (c == HX_("\r",0d,00,00,00));
            				}
            				else {
HXLINE( 306)					_hx_tmp5 = true;
            				}
HXDLIN( 306)				if (!(_hx_tmp5)) {
HXLINE( 306)					_hx_tmp4 = (c == HX_("\t",09,00,00,00));
            				}
            				else {
HXLINE( 306)					_hx_tmp4 = true;
            				}
HXDLIN( 306)				if (!(_hx_tmp4)) {
HXLINE( 306)					_hx_tmp3 = (c == HX_(",",2c,00,00,00));
            				}
            				else {
HXLINE( 306)					_hx_tmp3 = true;
            				}
HXDLIN( 306)				if (!(_hx_tmp3)) {
HXLINE( 306)					_hx_tmp2 = (c == HX_(":",3a,00,00,00));
            				}
            				else {
HXLINE( 306)					_hx_tmp2 = true;
            				}
HXDLIN( 306)				if (!(_hx_tmp2)) {
HXLINE( 306)					_hx_tmp1 = (c == HX_("}",7d,00,00,00));
            				}
            				else {
HXLINE( 306)					_hx_tmp1 = true;
            				}
HXDLIN( 306)				if (!(_hx_tmp1)) {
HXLINE( 306)					_hx_tmp = (c == HX_("]",5d,00,00,00));
            				}
            				else {
HXLINE( 306)					_hx_tmp = true;
            				}
HXDLIN( 306)				if (_hx_tmp) {
HXLINE( 307)					this->pos--;
HXLINE( 308)					return symbol;
            				}
            				else {
HXLINE( 310)					symbol = (symbol + c);
HXLINE( 311)					continue;
            				}
            			}
            			else {
HXLINE( 316)				bool _hx_tmp;
HXDLIN( 316)				bool _hx_tmp1;
HXDLIN( 316)				bool _hx_tmp2;
HXDLIN( 316)				if ((c != HX_(" ",20,00,00,00))) {
HXLINE( 316)					_hx_tmp2 = (c == HX_("\t",09,00,00,00));
            				}
            				else {
HXLINE( 316)					_hx_tmp2 = true;
            				}
HXDLIN( 316)				if (!(_hx_tmp2)) {
HXLINE( 316)					_hx_tmp1 = (c == HX_("\n",0a,00,00,00));
            				}
            				else {
HXLINE( 316)					_hx_tmp1 = true;
            				}
HXDLIN( 316)				if (!(_hx_tmp1)) {
HXLINE( 316)					_hx_tmp = (c == HX_("\r",0d,00,00,00));
            				}
            				else {
HXLINE( 316)					_hx_tmp = true;
            				}
HXDLIN( 316)				if (_hx_tmp) {
HXLINE( 317)					continue;
            				}
HXLINE( 320)				bool _hx_tmp3;
HXDLIN( 320)				bool _hx_tmp4;
HXDLIN( 320)				bool _hx_tmp5;
HXDLIN( 320)				bool _hx_tmp6;
HXDLIN( 320)				bool _hx_tmp7;
HXDLIN( 320)				if ((c != HX_("{",7b,00,00,00))) {
HXLINE( 320)					_hx_tmp7 = (c == HX_("}",7d,00,00,00));
            				}
            				else {
HXLINE( 320)					_hx_tmp7 = true;
            				}
HXDLIN( 320)				if (!(_hx_tmp7)) {
HXLINE( 320)					_hx_tmp6 = (c == HX_("[",5b,00,00,00));
            				}
            				else {
HXLINE( 320)					_hx_tmp6 = true;
            				}
HXDLIN( 320)				if (!(_hx_tmp6)) {
HXLINE( 320)					_hx_tmp5 = (c == HX_("]",5d,00,00,00));
            				}
            				else {
HXLINE( 320)					_hx_tmp5 = true;
            				}
HXDLIN( 320)				if (!(_hx_tmp5)) {
HXLINE( 320)					_hx_tmp4 = (c == HX_(",",2c,00,00,00));
            				}
            				else {
HXLINE( 320)					_hx_tmp4 = true;
            				}
HXDLIN( 320)				if (!(_hx_tmp4)) {
HXLINE( 320)					_hx_tmp3 = (c == HX_(":",3a,00,00,00));
            				}
            				else {
HXLINE( 320)					_hx_tmp3 = true;
            				}
HXDLIN( 320)				if (_hx_tmp3) {
HXLINE( 321)					return c;
            				}
HXLINE( 326)				bool _hx_tmp8;
HXDLIN( 326)				if ((c != HX_("'",27,00,00,00))) {
HXLINE( 326)					_hx_tmp8 = (c == HX_("\"",22,00,00,00));
            				}
            				else {
HXLINE( 326)					_hx_tmp8 = true;
            				}
HXDLIN( 326)				if (_hx_tmp8) {
HXLINE( 327)					inQuote = true;
HXLINE( 328)					quoteType = c;
HXLINE( 329)					this->lastSymbolQuoted = true;
HXLINE( 330)					continue;
            				}
            				else {
HXLINE( 332)					inSymbol = true;
HXLINE( 333)					symbol = c;
HXLINE( 334)					continue;
            				}
            			}
            		}
HXLINE( 340)		if (inQuote) {
HXLINE( 341)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Unexpected end of data. Expected ( ",4f,f1,a0,3b) + quoteType) + HX_(" )",09,1c,00,00))));
            		}
HXLINE( 343)		return symbol;
            	}


HX_DEFINE_DYNAMIC_FUNC0(TJSONParser_obj,getNextSymbol,return )

 ::Dynamic TJSONParser_obj::defaultStringProcessor(::String str){
            	HX_STACKFRAME(&_hx_pos_8c4c64da12ad2c24_348_defaultStringProcessor)
HXDLIN( 348)		return str;
            	}


HX_DEFINE_DYNAMIC_FUNC1(TJSONParser_obj,defaultStringProcessor,return )


::hx::ObjectPtr< TJSONParser_obj > TJSONParser_obj::__new(::String vjson,::String __o_vfileName, ::Dynamic stringProcessor) {
	::hx::ObjectPtr< TJSONParser_obj > __this = new TJSONParser_obj();
	__this->__construct(vjson,__o_vfileName,stringProcessor);
	return __this;
}

::hx::ObjectPtr< TJSONParser_obj > TJSONParser_obj::__alloc(::hx::Ctx *_hx_ctx,::String vjson,::String __o_vfileName, ::Dynamic stringProcessor) {
	TJSONParser_obj *__this = (TJSONParser_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TJSONParser_obj), true, "tjson.TJSONParser"));
	*(void **)__this = TJSONParser_obj::_hx_vtable;
	__this->__construct(vjson,__o_vfileName,stringProcessor);
	return __this;
}

TJSONParser_obj::TJSONParser_obj()
{
}

void TJSONParser_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TJSONParser);
	HX_MARK_MEMBER_NAME(pos,"pos");
	HX_MARK_MEMBER_NAME(json,"json");
	HX_MARK_MEMBER_NAME(lastSymbolQuoted,"lastSymbolQuoted");
	HX_MARK_MEMBER_NAME(fileName,"fileName");
	HX_MARK_MEMBER_NAME(currentLine,"currentLine");
	HX_MARK_MEMBER_NAME(cache,"cache");
	HX_MARK_MEMBER_NAME(floatRegex,"floatRegex");
	HX_MARK_MEMBER_NAME(intRegex,"intRegex");
	HX_MARK_MEMBER_NAME(strProcessor,"strProcessor");
	HX_MARK_END_CLASS();
}

void TJSONParser_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pos,"pos");
	HX_VISIT_MEMBER_NAME(json,"json");
	HX_VISIT_MEMBER_NAME(lastSymbolQuoted,"lastSymbolQuoted");
	HX_VISIT_MEMBER_NAME(fileName,"fileName");
	HX_VISIT_MEMBER_NAME(currentLine,"currentLine");
	HX_VISIT_MEMBER_NAME(cache,"cache");
	HX_VISIT_MEMBER_NAME(floatRegex,"floatRegex");
	HX_VISIT_MEMBER_NAME(intRegex,"intRegex");
	HX_VISIT_MEMBER_NAME(strProcessor,"strProcessor");
}

::hx::Val TJSONParser_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { return ::hx::Val( pos ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"json") ) { return ::hx::Val( json ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { return ::hx::Val( cache ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"doParse") ) { return ::hx::Val( doParse_dyn() ); }
		if (HX_FIELD_EQ(inName,"doArray") ) { return ::hx::Val( doArray_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fileName") ) { return ::hx::Val( fileName ); }
		if (HX_FIELD_EQ(inName,"intRegex") ) { return ::hx::Val( intRegex ); }
		if (HX_FIELD_EQ(inName,"doObject") ) { return ::hx::Val( doObject_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"floatRegex") ) { return ::hx::Val( floatRegex ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentLine") ) { return ::hx::Val( currentLine ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"strProcessor") ) { return ::hx::Val( strProcessor ); }
		if (HX_FIELD_EQ(inName,"looksLikeInt") ) { return ::hx::Val( looksLikeInt_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getNextSymbol") ) { return ::hx::Val( getNextSymbol_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"looksLikeFloat") ) { return ::hx::Val( looksLikeFloat_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lastSymbolQuoted") ) { return ::hx::Val( lastSymbolQuoted ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"defaultStringProcessor") ) { return ::hx::Val( defaultStringProcessor_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"convertSymbolToProperType") ) { return ::hx::Val( convertSymbolToProperType_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TJSONParser_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pos") ) { pos=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"json") ) { json=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"cache") ) { cache=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fileName") ) { fileName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"intRegex") ) { intRegex=inValue.Cast<  ::EReg >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"floatRegex") ) { floatRegex=inValue.Cast<  ::EReg >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentLine") ) { currentLine=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"strProcessor") ) { strProcessor=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"lastSymbolQuoted") ) { lastSymbolQuoted=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TJSONParser_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pos",94,5d,55,00));
	outFields->push(HX_("json",28,42,68,46));
	outFields->push(HX_("lastSymbolQuoted",96,66,7d,c7));
	outFields->push(HX_("fileName",e7,5a,43,62));
	outFields->push(HX_("currentLine",cd,f0,44,80));
	outFields->push(HX_("cache",42,9a,14,41));
	outFields->push(HX_("floatRegex",8b,03,58,05));
	outFields->push(HX_("intRegex",58,4f,3c,2f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TJSONParser_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(TJSONParser_obj,pos),HX_("pos",94,5d,55,00)},
	{::hx::fsString,(int)offsetof(TJSONParser_obj,json),HX_("json",28,42,68,46)},
	{::hx::fsBool,(int)offsetof(TJSONParser_obj,lastSymbolQuoted),HX_("lastSymbolQuoted",96,66,7d,c7)},
	{::hx::fsString,(int)offsetof(TJSONParser_obj,fileName),HX_("fileName",e7,5a,43,62)},
	{::hx::fsInt,(int)offsetof(TJSONParser_obj,currentLine),HX_("currentLine",cd,f0,44,80)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(TJSONParser_obj,cache),HX_("cache",42,9a,14,41)},
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(TJSONParser_obj,floatRegex),HX_("floatRegex",8b,03,58,05)},
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(TJSONParser_obj,intRegex),HX_("intRegex",58,4f,3c,2f)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TJSONParser_obj,strProcessor),HX_("strProcessor",61,d6,ce,03)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TJSONParser_obj_sStaticStorageInfo = 0;
#endif

static ::String TJSONParser_obj_sMemberFields[] = {
	HX_("pos",94,5d,55,00),
	HX_("json",28,42,68,46),
	HX_("lastSymbolQuoted",96,66,7d,c7),
	HX_("fileName",e7,5a,43,62),
	HX_("currentLine",cd,f0,44,80),
	HX_("cache",42,9a,14,41),
	HX_("floatRegex",8b,03,58,05),
	HX_("intRegex",58,4f,3c,2f),
	HX_("strProcessor",61,d6,ce,03),
	HX_("doParse",a8,70,82,f0),
	HX_("doObject",aa,04,57,a9),
	HX_("doArray",0e,4e,bc,58),
	HX_("convertSymbolToProperType",50,c1,32,79),
	HX_("looksLikeFloat",f1,10,a5,8e),
	HX_("looksLikeInt",04,69,bf,0c),
	HX_("getNextSymbol",e1,bc,81,00),
	HX_("defaultStringProcessor",80,82,5f,a3),
	::String(null()) };

::hx::Class TJSONParser_obj::__mClass;

void TJSONParser_obj::__register()
{
	TJSONParser_obj _hx_dummy;
	TJSONParser_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("tjson.TJSONParser",a9,13,b7,a6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TJSONParser_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TJSONParser_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TJSONParser_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TJSONParser_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace tjson
