#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_30_quantize,"CoolUtil","quantize",0xdfda4df4,"CoolUtil.quantize","CoolUtil.hx",30,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_38_getDifficultyFilePath,"CoolUtil","getDifficultyFilePath",0x5ba9beaf,"CoolUtil.getDifficultyFilePath","CoolUtil.hx",38,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_55_difficultyString,"CoolUtil","difficultyString",0x7da345af,"CoolUtil.difficultyString","CoolUtil.hx",55,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_59_boundTo,"CoolUtil","boundTo",0xe1951d76,"CoolUtil.boundTo","CoolUtil.hx",59,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_63_coolTextFile,"CoolUtil","coolTextFile",0xa6086875,"CoolUtil.coolTextFile","CoolUtil.hx",63,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_79_listFromString,"CoolUtil","listFromString",0x632b855c,"CoolUtil.listFromString","CoolUtil.hx",79,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_90_dominantColor,"CoolUtil","dominantColor",0xd61f0ec0,"CoolUtil.dominantColor","CoolUtil.hx",90,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_117_numberArray,"CoolUtil","numberArray",0x9e0008ad,"CoolUtil.numberArray","CoolUtil.hx",117,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_128_precacheSound,"CoolUtil","precacheSound",0x516888ed,"CoolUtil.precacheSound","CoolUtil.hx",128,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_132_precacheMusic,"CoolUtil","precacheMusic",0xe0f6ccc3,"CoolUtil.precacheMusic","CoolUtil.hx",132,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_139_browserLoad,"CoolUtil","browserLoad",0xdac4a08b,"CoolUtil.browserLoad","CoolUtil.hx",139,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_150_getSavePath,"CoolUtil","getSavePath",0x14e72cd5,"CoolUtil.getSavePath","CoolUtil.hx",150,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_21_boot,"CoolUtil","boot",0xb2a2e7f5,"CoolUtil.boot","CoolUtil.hx",21,0x9f143813)
static const ::String _hx_array_data_c96d938b_19[] = {
	HX_("Easy",22,b8,e5,2d),HX_("Normal",47,e6,fd,64),HX_("Hard",0b,5b,e1,2f),
};
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_26_boot,"CoolUtil","boot",0xb2a2e7f5,"CoolUtil.boot","CoolUtil.hx",26,0x9f143813)
HX_LOCAL_STACK_FRAME(_hx_pos_d6b1695b4ccb37a6_28_boot,"CoolUtil","boot",0xb2a2e7f5,"CoolUtil.boot","CoolUtil.hx",28,0x9f143813)

void CoolUtil_obj::__construct() { }

Dynamic CoolUtil_obj::__CreateEmpty() { return new CoolUtil_obj; }

void *CoolUtil_obj::_hx_vtable = 0;

Dynamic CoolUtil_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CoolUtil_obj > _hx_result = new CoolUtil_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CoolUtil_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x24fe864b;
}

::Array< ::String > CoolUtil_obj::defaultDifficulties;

::String CoolUtil_obj::defaultDifficulty;

::Array< ::String > CoolUtil_obj::difficulties;

Float CoolUtil_obj::quantize(Float f,Float snap){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_30_quantize)
HXLINE(  32)		Float m = ::Math_obj::fround((f * snap));
HXLINE(  33)		::haxe::Log_obj::trace(snap,::hx::SourceInfo(HX_("source/CoolUtil.hx",9f,65,de,ea),33,HX_("CoolUtil",8b,93,6d,c9),HX_("quantize",b1,4c,42,ac)));
HXLINE(  34)		return (m / snap);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,quantize,return )

::String CoolUtil_obj::getDifficultyFilePath( ::Dynamic num){
            	HX_GC_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_38_getDifficultyFilePath)
HXLINE(  39)		if (::hx::IsNull( num )) {
HXLINE(  39)			num = ::PlayState_obj::storyDifficulty;
            		}
HXLINE(  41)		::String fileSuffix = ::CoolUtil_obj::difficulties->__get(( (int)(num) ));
HXLINE(  42)		if ((fileSuffix != ::CoolUtil_obj::defaultDifficulty)) {
HXLINE(  44)			fileSuffix = (HX_("-",2d,00,00,00) + fileSuffix);
            		}
            		else {
HXLINE(  48)			fileSuffix = HX_("",00,00,00,00);
            		}
HXLINE(  50)		 ::EReg invalidChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[~&\\\\;:<>#]",7e,4d,88,67),HX_("",00,00,00,00));
HXDLIN(  50)		 ::EReg hideChars =  ::EReg_obj::__alloc( HX_CTX ,HX_("[.,'\"%?!]",ca,d9,c0,ac),HX_("",00,00,00,00));
HXDLIN(  50)		::String path = invalidChars->split(::StringTools_obj::replace(fileSuffix,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)))->join(HX_("-",2d,00,00,00));
HXDLIN(  50)		return hideChars->split(path)->join(HX_("",00,00,00,00)).toLowerCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,getDifficultyFilePath,return )

::String CoolUtil_obj::difficultyString(){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_55_difficultyString)
HXDLIN(  55)		return ::CoolUtil_obj::difficulties->__get(::PlayState_obj::storyDifficulty).toUpperCase();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CoolUtil_obj,difficultyString,return )

Float CoolUtil_obj::boundTo(Float value,Float min,Float max){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_59_boundTo)
HXDLIN(  59)		return ::Math_obj::max(min,::Math_obj::min(max,value));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(CoolUtil_obj,boundTo,return )

::Array< ::String > CoolUtil_obj::coolTextFile(::String path){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_63_coolTextFile)
HXLINE(  64)		::Array< ::String > daList = ::Array_obj< ::String >::__new(0);
HXLINE(  66)		if (::sys::FileSystem_obj::exists(path)) {
HXLINE(  66)			daList = ::StringTools_obj::trim(::sys::io::File_obj::getContent(path)).split(HX_("\n",0a,00,00,00));
            		}
HXLINE(  71)		{
HXLINE(  71)			int _g = 0;
HXDLIN(  71)			int _g1 = daList->length;
HXDLIN(  71)			while((_g < _g1)){
HXLINE(  71)				_g = (_g + 1);
HXDLIN(  71)				int i = (_g - 1);
HXLINE(  73)				daList[i] = ::StringTools_obj::trim(daList->__get(i));
            			}
            		}
HXLINE(  76)		return daList;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,coolTextFile,return )

::Array< ::String > CoolUtil_obj::listFromString(::String string){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_79_listFromString)
HXLINE(  80)		::Array< ::String > daList = ::Array_obj< ::String >::__new(0);
HXLINE(  81)		daList = ::StringTools_obj::trim(string).split(HX_("\n",0a,00,00,00));
HXLINE(  83)		{
HXLINE(  83)			int _g = 0;
HXDLIN(  83)			int _g1 = daList->length;
HXDLIN(  83)			while((_g < _g1)){
HXLINE(  83)				_g = (_g + 1);
HXDLIN(  83)				int i = (_g - 1);
HXLINE(  85)				daList[i] = ::StringTools_obj::trim(daList->__get(i));
            			}
            		}
HXLINE(  88)		return daList;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,listFromString,return )

int CoolUtil_obj::dominantColor( ::flixel::FlxSprite sprite){
            	HX_GC_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_90_dominantColor)
HXLINE(  91)		 ::haxe::ds::IntMap countByColor =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
HXLINE(  92)		{
HXLINE(  92)			int _g = 0;
HXDLIN(  92)			int _g1 = sprite->frameWidth;
HXDLIN(  92)			while((_g < _g1)){
HXLINE(  92)				_g = (_g + 1);
HXDLIN(  92)				int col = (_g - 1);
HXLINE(  93)				{
HXLINE(  93)					int _g1 = 0;
HXDLIN(  93)					int _g2 = sprite->frameHeight;
HXDLIN(  93)					while((_g1 < _g2)){
HXLINE(  93)						_g1 = (_g1 + 1);
HXDLIN(  93)						int row = (_g1 - 1);
HXLINE(  94)						int colorOfThisPixel = sprite->get_pixels()->getPixel32(col,row);
HXLINE(  95)						if ((colorOfThisPixel != 0)) {
HXLINE(  96)							if (countByColor->exists(colorOfThisPixel)) {
HXLINE(  97)								int v = (countByColor->get(colorOfThisPixel) + 1);
HXDLIN(  97)								countByColor->set(colorOfThisPixel,v);
            							}
            							else {
HXLINE(  98)								if (::hx::IsNotEq( countByColor->get(colorOfThisPixel),-13520687 )) {
HXLINE(  99)									countByColor->set(colorOfThisPixel,1);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 104)		int maxCount = 0;
HXLINE( 105)		int maxKey = 0;
HXLINE( 106)		countByColor->set(-16777216,0);
HXLINE( 107)		{
HXLINE( 107)			 ::Dynamic key = countByColor->keys();
HXDLIN( 107)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 107)				int key1 = ( (int)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 108)				if (::hx::IsGreaterEq( countByColor->get(key1),maxCount )) {
HXLINE( 109)					maxCount = ( (int)(countByColor->get(key1)) );
HXLINE( 110)					maxKey = key1;
            				}
            			}
            		}
HXLINE( 113)		return maxKey;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,dominantColor,return )

::Array< int > CoolUtil_obj::numberArray(int max, ::Dynamic __o_min){
            		 ::Dynamic min = __o_min;
            		if (::hx::IsNull(__o_min)) min = 0;
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_117_numberArray)
HXLINE( 118)		::Array< int > dumbArray = ::Array_obj< int >::__new(0);
HXLINE( 119)		{
HXLINE( 119)			int _g = ( (int)(min) );
HXDLIN( 119)			int _g1 = max;
HXDLIN( 119)			while((_g < _g1)){
HXLINE( 119)				_g = (_g + 1);
HXDLIN( 119)				int i = (_g - 1);
HXLINE( 121)				dumbArray->push(i);
            			}
            		}
HXLINE( 123)		return dumbArray;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,numberArray,return )

void CoolUtil_obj::precacheSound(::String sound,::String library){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_128_precacheSound)
HXDLIN( 128)		::Paths_obj::sound(sound,library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,precacheSound,(void))

void CoolUtil_obj::precacheMusic(::String sound,::String library){
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_132_precacheMusic)
HXDLIN( 132)		 ::openfl::media::Sound file = ::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),sound,library);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CoolUtil_obj,precacheMusic,(void))

void CoolUtil_obj::browserLoad(::String site){
            	HX_GC_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_139_browserLoad)
HXDLIN( 139)		::String prefix = HX_("",00,00,00,00);
HXDLIN( 139)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^https?://",48,ee,dd,38),HX_("",00,00,00,00))->match(site))) {
HXDLIN( 139)			prefix = HX_("http://",52,75,cd,5a);
            		}
HXDLIN( 139)		::openfl::Lib_obj::getURL( ::openfl::net::URLRequest_obj::__alloc( HX_CTX ,(prefix + site)),HX_("_blank",95,26,d9,b0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,browserLoad,(void))

::String CoolUtil_obj::getSavePath(::String __o_folder){
            		::String folder = __o_folder;
            		if (::hx::IsNull(__o_folder)) folder = HX_("ShadowMario",e4,7d,20,5e);
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_150_getSavePath)
HXDLIN( 150)		return folder;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CoolUtil_obj,getSavePath,return )


CoolUtil_obj::CoolUtil_obj()
{
}

bool CoolUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"boundTo") ) { outValue = boundTo_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"quantize") ) { outValue = quantize_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numberArray") ) { outValue = numberArray_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"browserLoad") ) { outValue = browserLoad_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getSavePath") ) { outValue = getSavePath_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"difficulties") ) { outValue = ( difficulties ); return true; }
		if (HX_FIELD_EQ(inName,"coolTextFile") ) { outValue = coolTextFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"dominantColor") ) { outValue = dominantColor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"precacheSound") ) { outValue = precacheSound_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"precacheMusic") ) { outValue = precacheMusic_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"listFromString") ) { outValue = listFromString_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"difficultyString") ) { outValue = difficultyString_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultDifficulty") ) { outValue = ( defaultDifficulty ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"defaultDifficulties") ) { outValue = ( defaultDifficulties ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getDifficultyFilePath") ) { outValue = getDifficultyFilePath_dyn(); return true; }
	}
	return false;
}

bool CoolUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"difficulties") ) { difficulties=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"defaultDifficulty") ) { defaultDifficulty=ioValue.Cast< ::String >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"defaultDifficulties") ) { defaultDifficulties=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CoolUtil_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CoolUtil_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &CoolUtil_obj::defaultDifficulties,HX_("defaultDifficulties",ba,89,b7,7e)},
	{::hx::fsString,(void *) &CoolUtil_obj::defaultDifficulty,HX_("defaultDifficulty",5c,06,f0,1d)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &CoolUtil_obj::difficulties,HX_("difficulties",59,c7,5e,02)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void CoolUtil_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CoolUtil_obj::defaultDifficulties,"defaultDifficulties");
	HX_MARK_MEMBER_NAME(CoolUtil_obj::defaultDifficulty,"defaultDifficulty");
	HX_MARK_MEMBER_NAME(CoolUtil_obj::difficulties,"difficulties");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CoolUtil_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CoolUtil_obj::defaultDifficulties,"defaultDifficulties");
	HX_VISIT_MEMBER_NAME(CoolUtil_obj::defaultDifficulty,"defaultDifficulty");
	HX_VISIT_MEMBER_NAME(CoolUtil_obj::difficulties,"difficulties");
};

#endif

::hx::Class CoolUtil_obj::__mClass;

static ::String CoolUtil_obj_sStaticFields[] = {
	HX_("defaultDifficulties",ba,89,b7,7e),
	HX_("defaultDifficulty",5c,06,f0,1d),
	HX_("difficulties",59,c7,5e,02),
	HX_("quantize",b1,4c,42,ac),
	HX_("getDifficultyFilePath",d2,8d,91,4d),
	HX_("difficultyString",6c,c9,73,cb),
	HX_("boundTo",59,05,b8,f3),
	HX_("coolTextFile",b2,09,03,cc),
	HX_("listFromString",d9,af,fe,f5),
	HX_("dominantColor",e3,82,71,eb),
	HX_("numberArray",10,1e,18,ad),
	HX_("precacheSound",10,fd,ba,66),
	HX_("precacheMusic",e6,40,49,f6),
	HX_("browserLoad",ee,b5,dc,e9),
	HX_("getSavePath",38,42,ff,23),
	::String(null())
};

void CoolUtil_obj::__register()
{
	CoolUtil_obj _hx_dummy;
	CoolUtil_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CoolUtil",8b,93,6d,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CoolUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &CoolUtil_obj::__SetStatic;
	__mClass->mMarkFunc = CoolUtil_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CoolUtil_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CoolUtil_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CoolUtil_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CoolUtil_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CoolUtil_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CoolUtil_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_21_boot)
HXDLIN(  21)		defaultDifficulties = ::Array_obj< ::String >::fromData( _hx_array_data_c96d938b_19,3);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_26_boot)
HXDLIN(  26)		defaultDifficulty = HX_("Normal",47,e6,fd,64);
            	}
{
            	HX_STACKFRAME(&_hx_pos_d6b1695b4ccb37a6_28_boot)
HXDLIN(  28)		difficulties = ::Array_obj< ::String >::__new(0);
            	}
}

