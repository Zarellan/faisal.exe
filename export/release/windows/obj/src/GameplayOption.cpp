#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_GameplayOption
#include <GameplayOption.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5355c1500aa58f96_383_new,"GameplayOption","new",0x2ac2d98d,"GameplayOption.new","GameplayChangersSubstate.hx",383,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_5355c1500aa58f96_460_change,"GameplayOption","change",0x8d0dc263,"GameplayOption.change","GameplayChangersSubstate.hx",460,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_5355c1500aa58f96_467_getValue,"GameplayOption","getValue",0x690f22ae,"GameplayOption.getValue","GameplayChangersSubstate.hx",467,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_5355c1500aa58f96_471_setValue,"GameplayOption","setValue",0x176c7c22,"GameplayOption.setValue","GameplayChangersSubstate.hx",471,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_5355c1500aa58f96_476_setChild,"GameplayOption","setChild",0x2b6da64d,"GameplayOption.setChild","GameplayChangersSubstate.hx",476,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_5355c1500aa58f96_480_get_text,"GameplayOption","get_text",0xa4341be9,"GameplayOption.get_text","GameplayChangersSubstate.hx",480,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_5355c1500aa58f96_487_set_text,"GameplayOption","set_text",0x5291755d,"GameplayOption.set_text","GameplayChangersSubstate.hx",487,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_5355c1500aa58f96_495_get_type,"GameplayOption","get_type",0xa44341f6,"GameplayOption.get_type","GameplayChangersSubstate.hx",495,0xb1374db6)

void GameplayOption_obj::__construct(::String name,::String variable,::String __o_type, ::Dynamic __o_defaultValue,::Array< ::String > options){
            		::String type = __o_type;
            		if (::hx::IsNull(__o_type)) type = HX_("bool",2a,84,1b,41);
            		 ::Dynamic defaultValue = __o_defaultValue;
            		if (::hx::IsNull(__o_defaultValue)) defaultValue = HX_("null variable value",06,3c,3f,e9);
            	HX_STACKFRAME(&_hx_pos_5355c1500aa58f96_383_new)
HXLINE( 407)		this->name = HX_("Unknown",6a,4b,cc,ae);
HXLINE( 406)		this->displayFormat = HX_("%v",b1,20,00,00);
HXLINE( 404)		this->decimals = 1;
HXLINE( 403)		this->maxValue = null();
HXLINE( 402)		this->minValue = null();
HXLINE( 401)		this->changeValue = 1;
HXLINE( 400)		this->options = null();
HXLINE( 399)		this->curOption = 0;
HXLINE( 397)		this->defaultValue = null();
HXLINE( 396)		this->variable = null();
HXLINE( 394)		this->scrollSpeed = ((Float)50);
HXLINE( 393)		this->showBoyfriend = false;
HXLINE( 389)		this->type = HX_("bool",2a,84,1b,41);
HXLINE( 387)		this->onChange = null();
HXLINE( 411)		this->name = name;
HXLINE( 412)		this->variable = variable;
HXLINE( 413)		this->type = type;
HXLINE( 414)		this->defaultValue = defaultValue;
HXLINE( 415)		this->options = options;
HXLINE( 417)		if (::hx::IsEq( defaultValue,HX_("null variable value",06,3c,3f,e9) )) {
HXLINE( 419)			::String _hx_switch_0 = type;
            			if (  (_hx_switch_0==HX_("bool",2a,84,1b,41)) ){
HXLINE( 422)				defaultValue = false;
HXDLIN( 422)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==HX_("float",9c,c5,96,02)) ||  (_hx_switch_0==HX_("int",ef,0c,50,00)) ){
HXLINE( 424)				defaultValue = 0;
HXDLIN( 424)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==HX_("percent",c5,aa,da,78)) ){
HXLINE( 426)				defaultValue = 1;
HXDLIN( 426)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==HX_("string",d1,28,30,11)) ){
HXLINE( 428)				defaultValue = HX_("",00,00,00,00);
HXLINE( 429)				if ((options->length > 0)) {
HXLINE( 430)					defaultValue = options->__get(0);
            				}
HXLINE( 427)				goto _hx_goto_0;
            			}
            			_hx_goto_0:;
            		}
HXLINE( 435)		if (::hx::IsNull( this->getValue() )) {
HXLINE( 436)			this->setValue(defaultValue);
            		}
HXLINE( 439)		::String _hx_switch_1 = type;
            		if (  (_hx_switch_1==HX_("percent",c5,aa,da,78)) ){
HXLINE( 448)			this->displayFormat = HX_("%v%",54,7a,1c,00);
HXLINE( 449)			this->changeValue = ((Float)0.01);
HXLINE( 450)			this->minValue = 0;
HXLINE( 451)			this->maxValue = 1;
HXLINE( 452)			this->scrollSpeed = ((Float)0.5);
HXLINE( 453)			this->decimals = 2;
HXLINE( 447)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("string",d1,28,30,11)) ){
HXLINE( 442)			int num = options->indexOf(this->getValue(),null());
HXLINE( 443)			if ((num > -1)) {
HXLINE( 444)				this->curOption = num;
            			}
HXLINE( 441)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
            	}

Dynamic GameplayOption_obj::__CreateEmpty() { return new GameplayOption_obj; }

void *GameplayOption_obj::_hx_vtable = 0;

Dynamic GameplayOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameplayOption_obj > _hx_result = new GameplayOption_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool GameplayOption_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1dab9a3f;
}

void GameplayOption_obj::change(){
            	HX_STACKFRAME(&_hx_pos_5355c1500aa58f96_460_change)
HXDLIN( 460)		if (::hx::IsNotNull( this->onChange )) {
HXLINE( 461)			this->onChange();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayOption_obj,change,(void))

 ::Dynamic GameplayOption_obj::getValue(){
            	HX_STACKFRAME(&_hx_pos_5355c1500aa58f96_467_getValue)
HXDLIN( 467)		return ::ClientPrefs_obj::gameplaySettings->get(this->variable);
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayOption_obj,getValue,return )

void GameplayOption_obj::setValue( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_5355c1500aa58f96_471_setValue)
HXDLIN( 471)		::ClientPrefs_obj::gameplaySettings->set(this->variable,value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameplayOption_obj,setValue,(void))

void GameplayOption_obj::setChild( ::Alphabet child){
            	HX_STACKFRAME(&_hx_pos_5355c1500aa58f96_476_setChild)
HXDLIN( 476)		this->child = child;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameplayOption_obj,setChild,(void))

::String GameplayOption_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_5355c1500aa58f96_480_get_text)
HXLINE( 481)		if (::hx::IsNotNull( this->child )) {
HXLINE( 482)			return this->child->text;
            		}
HXLINE( 484)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayOption_obj,get_text,return )

::String GameplayOption_obj::set_text(::String __o_newValue){
            		::String newValue = __o_newValue;
            		if (::hx::IsNull(__o_newValue)) newValue = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_5355c1500aa58f96_487_set_text)
HXLINE( 488)		if (::hx::IsNotNull( this->child )) {
HXLINE( 489)			this->child->set_text(newValue);
            		}
HXLINE( 491)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameplayOption_obj,set_text,return )

::String GameplayOption_obj::get_type(){
            	HX_STACKFRAME(&_hx_pos_5355c1500aa58f96_495_get_type)
HXLINE( 496)		::String newValue = HX_("bool",2a,84,1b,41);
HXLINE( 497)		::String _hx_switch_0 = ::StringTools_obj::trim(this->type.toLowerCase());
            		if (  (_hx_switch_0==HX_("fl",46,59,00,00)) ){
HXLINE( 502)			newValue = HX_("float",9c,c5,96,02);
HXDLIN( 502)			goto _hx_goto_9;
            		}
            		if (  (_hx_switch_0==HX_("integer",be,bd,1b,17)) ){
HXLINE( 500)			newValue = HX_("int",ef,0c,50,00);
HXDLIN( 500)			goto _hx_goto_9;
            		}
            		if (  (_hx_switch_0==HX_("float",9c,c5,96,02)) ||  (_hx_switch_0==HX_("int",ef,0c,50,00)) ||  (_hx_switch_0==HX_("percent",c5,aa,da,78)) ||  (_hx_switch_0==HX_("string",d1,28,30,11)) ){
HXLINE( 499)			newValue = this->type;
HXDLIN( 499)			goto _hx_goto_9;
            		}
            		if (  (_hx_switch_0==HX_("str",b1,a8,57,00)) ){
HXLINE( 501)			newValue = HX_("string",d1,28,30,11);
HXDLIN( 501)			goto _hx_goto_9;
            		}
            		_hx_goto_9:;
HXLINE( 504)		this->type = newValue;
HXLINE( 505)		return this->type;
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayOption_obj,get_type,return )


::hx::ObjectPtr< GameplayOption_obj > GameplayOption_obj::__new(::String name,::String variable,::String __o_type, ::Dynamic __o_defaultValue,::Array< ::String > options) {
	::hx::ObjectPtr< GameplayOption_obj > __this = new GameplayOption_obj();
	__this->__construct(name,variable,__o_type,__o_defaultValue,options);
	return __this;
}

::hx::ObjectPtr< GameplayOption_obj > GameplayOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String name,::String variable,::String __o_type, ::Dynamic __o_defaultValue,::Array< ::String > options) {
	GameplayOption_obj *__this = (GameplayOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameplayOption_obj), true, "GameplayOption"));
	*(void **)__this = GameplayOption_obj::_hx_vtable;
	__this->__construct(name,variable,__o_type,__o_defaultValue,options);
	return __this;
}

GameplayOption_obj::GameplayOption_obj()
{
}

void GameplayOption_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameplayOption);
	HX_MARK_MEMBER_NAME(child,"child");
	HX_MARK_MEMBER_NAME(onChange,"onChange");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(showBoyfriend,"showBoyfriend");
	HX_MARK_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_MARK_MEMBER_NAME(variable,"variable");
	HX_MARK_MEMBER_NAME(defaultValue,"defaultValue");
	HX_MARK_MEMBER_NAME(curOption,"curOption");
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(changeValue,"changeValue");
	HX_MARK_MEMBER_NAME(minValue,"minValue");
	HX_MARK_MEMBER_NAME(maxValue,"maxValue");
	HX_MARK_MEMBER_NAME(decimals,"decimals");
	HX_MARK_MEMBER_NAME(displayFormat,"displayFormat");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void GameplayOption_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(child,"child");
	HX_VISIT_MEMBER_NAME(onChange,"onChange");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(showBoyfriend,"showBoyfriend");
	HX_VISIT_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_VISIT_MEMBER_NAME(variable,"variable");
	HX_VISIT_MEMBER_NAME(defaultValue,"defaultValue");
	HX_VISIT_MEMBER_NAME(curOption,"curOption");
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(changeValue,"changeValue");
	HX_VISIT_MEMBER_NAME(minValue,"minValue");
	HX_VISIT_MEMBER_NAME(maxValue,"maxValue");
	HX_VISIT_MEMBER_NAME(decimals,"decimals");
	HX_VISIT_MEMBER_NAME(displayFormat,"displayFormat");
	HX_VISIT_MEMBER_NAME(name,"name");
}

::hx::Val GameplayOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_text() ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_type() : type ); }
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"child") ) { return ::hx::Val( child ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"change") ) { return ::hx::Val( change_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { return ::hx::Val( onChange ); }
		if (HX_FIELD_EQ(inName,"variable") ) { return ::hx::Val( variable ); }
		if (HX_FIELD_EQ(inName,"minValue") ) { return ::hx::Val( minValue ); }
		if (HX_FIELD_EQ(inName,"maxValue") ) { return ::hx::Val( maxValue ); }
		if (HX_FIELD_EQ(inName,"decimals") ) { return ::hx::Val( decimals ); }
		if (HX_FIELD_EQ(inName,"getValue") ) { return ::hx::Val( getValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"setValue") ) { return ::hx::Val( setValue_dyn() ); }
		if (HX_FIELD_EQ(inName,"setChild") ) { return ::hx::Val( setChild_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return ::hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return ::hx::Val( get_type_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { return ::hx::Val( curOption ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { return ::hx::Val( scrollSpeed ); }
		if (HX_FIELD_EQ(inName,"changeValue") ) { return ::hx::Val( changeValue ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultValue") ) { return ::hx::Val( defaultValue ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"showBoyfriend") ) { return ::hx::Val( showBoyfriend ); }
		if (HX_FIELD_EQ(inName,"displayFormat") ) { return ::hx::Val( displayFormat ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GameplayOption_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) ); }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"child") ) { child=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onChange") ) { onChange=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"variable") ) { variable=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minValue") ) { minValue=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxValue") ) { maxValue=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"decimals") ) { decimals=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { curOption=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { scrollSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"changeValue") ) { changeValue=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"defaultValue") ) { defaultValue=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"showBoyfriend") ) { showBoyfriend=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayFormat") ) { displayFormat=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameplayOption_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("child",9c,a9,b9,45));
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("showBoyfriend",ad,2c,d6,d6));
	outFields->push(HX_("scrollSpeed",3a,e0,46,cb));
	outFields->push(HX_("variable",3c,12,0d,69));
	outFields->push(HX_("defaultValue",f0,ba,13,e7));
	outFields->push(HX_("curOption",15,ed,07,9c));
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("changeValue",e1,27,7e,57));
	outFields->push(HX_("minValue",7f,ec,ef,28));
	outFields->push(HX_("maxValue",2d,d2,d5,db));
	outFields->push(HX_("decimals",c2,4a,6a,12));
	outFields->push(HX_("displayFormat",19,4b,f1,be));
	outFields->push(HX_("name",4b,72,ff,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameplayOption_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(GameplayOption_obj,child),HX_("child",9c,a9,b9,45)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GameplayOption_obj,onChange),HX_("onChange",ef,87,1f,97)},
	{::hx::fsString,(int)offsetof(GameplayOption_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsBool,(int)offsetof(GameplayOption_obj,showBoyfriend),HX_("showBoyfriend",ad,2c,d6,d6)},
	{::hx::fsFloat,(int)offsetof(GameplayOption_obj,scrollSpeed),HX_("scrollSpeed",3a,e0,46,cb)},
	{::hx::fsString,(int)offsetof(GameplayOption_obj,variable),HX_("variable",3c,12,0d,69)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GameplayOption_obj,defaultValue),HX_("defaultValue",f0,ba,13,e7)},
	{::hx::fsInt,(int)offsetof(GameplayOption_obj,curOption),HX_("curOption",15,ed,07,9c)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(GameplayOption_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GameplayOption_obj,changeValue),HX_("changeValue",e1,27,7e,57)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GameplayOption_obj,minValue),HX_("minValue",7f,ec,ef,28)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(GameplayOption_obj,maxValue),HX_("maxValue",2d,d2,d5,db)},
	{::hx::fsInt,(int)offsetof(GameplayOption_obj,decimals),HX_("decimals",c2,4a,6a,12)},
	{::hx::fsString,(int)offsetof(GameplayOption_obj,displayFormat),HX_("displayFormat",19,4b,f1,be)},
	{::hx::fsString,(int)offsetof(GameplayOption_obj,name),HX_("name",4b,72,ff,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GameplayOption_obj_sStaticStorageInfo = 0;
#endif

static ::String GameplayOption_obj_sMemberFields[] = {
	HX_("child",9c,a9,b9,45),
	HX_("onChange",ef,87,1f,97),
	HX_("type",ba,f2,08,4d),
	HX_("showBoyfriend",ad,2c,d6,d6),
	HX_("scrollSpeed",3a,e0,46,cb),
	HX_("variable",3c,12,0d,69),
	HX_("defaultValue",f0,ba,13,e7),
	HX_("curOption",15,ed,07,9c),
	HX_("options",5e,33,fe,df),
	HX_("changeValue",e1,27,7e,57),
	HX_("minValue",7f,ec,ef,28),
	HX_("maxValue",2d,d2,d5,db),
	HX_("decimals",c2,4a,6a,12),
	HX_("displayFormat",19,4b,f1,be),
	HX_("name",4b,72,ff,48),
	HX_("change",70,91,72,b7),
	HX_("getValue",fb,8e,8f,91),
	HX_("setValue",6f,e8,ec,3f),
	HX_("setChild",9a,12,ee,53),
	HX_("get_text",36,88,b4,cc),
	HX_("set_text",aa,e1,11,7b),
	HX_("get_type",43,ae,c3,cc),
	::String(null()) };

::hx::Class GameplayOption_obj::__mClass;

void GameplayOption_obj::__register()
{
	GameplayOption_obj _hx_dummy;
	GameplayOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GameplayOption",1b,0f,82,14);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameplayOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameplayOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameplayOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameplayOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

