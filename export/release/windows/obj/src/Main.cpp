#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_haxe__CallStack_CallStack_Impl_
#include <haxe/_CallStack/CallStack_Impl_.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FPS
#include <openfl/display/FPS.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display__StageAlign_StageAlign_Impl_
#include <openfl/display/_StageAlign/StageAlign_Impl_.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvent
#include <openfl/events/UncaughtErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_UncaughtErrorEvents
#include <openfl/events/UncaughtErrorEvents.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e47a9afac0942eb9_31_new,"Main","new",0x6616a5cb,"Main.new","Main.hx",31,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_67_init,"Main","init",0xea732345,"Main.init","Main.hx",67,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_77_setupGame,"Main","setupGame",0x7f7688ba,"Main.setupGame","Main.hx",77,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_116_setupGame,"Main","setupGame",0x7f7688ba,"Main.setupGame","Main.hx",116,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_126_onCrash,"Main","onCrash",0x46bec533,"Main.onCrash","Main.hx",126,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_49_main,"Main","main",0xed0e206e,"Main.main","Main.hx",49,0x087e5c05)

void Main_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_31_new)
HXLINE(  33)		this->game =  ::Dynamic(::hx::Anon_obj::Create(7)
            			->setFixed(0,HX_("width",06,b6,62,ca),1280)
            			->setFixed(1,HX_("height",e7,07,4c,02),720)
            			->setFixed(2,HX_("skipSplash",46,75,9c,27),true)
            			->setFixed(3,HX_("startFullscreen",3d,c1,ee,2d),false)
            			->setFixed(4,HX_("initialState",ed,76,1b,48),::hx::ClassOf< ::TitleState >())
            			->setFixed(5,HX_("framerate",8d,e5,4b,4e),60)
            			->setFixed(6,HX_("zoom",13,a3,f8,50),((Float)-1.0)));
HXLINE(  54)		super::__construct();
HXLINE(  56)		if (::hx::IsNotNull( this->stage )) {
HXLINE(  58)			this->init(null());
            		}
            		else {
HXLINE(  62)			this->addEventListener(HX_("addedToStage",63,22,55,0c),this->init_dyn(),null(),null(),null());
            		}
            	}

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x07825a7d) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x07825a7d;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void Main_obj::init( ::openfl::events::Event E){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_67_init)
HXLINE(  68)		if (this->hasEventListener(HX_("addedToStage",63,22,55,0c))) {
HXLINE(  70)			this->removeEventListener(HX_("addedToStage",63,22,55,0c),this->init_dyn(),null());
            		}
HXLINE(  73)		this->setupGame();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,init,(void))

void Main_obj::setupGame(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_77_setupGame)
HXLINE(  78)		int stageWidth = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXLINE(  79)		int stageHeight = ::openfl::Lib_obj::get_current()->stage->stageHeight;
HXLINE(  81)		if (::hx::IsEq( this->game->__Field(HX_("zoom",13,a3,f8,50),::hx::paccDynamic),((Float)-1.0) )) {
HXLINE(  83)			Float ratioX = (( (Float)(stageWidth) ) / ( (Float)(this->game->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ));
HXLINE(  84)			Float ratioY = (( (Float)(stageHeight) ) / ( (Float)(this->game->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ));
HXLINE(  85)			this->game->__SetField(HX_("zoom",13,a3,f8,50),::Math_obj::min(ratioX,ratioY),::hx::paccDynamic);
HXLINE(  86)			this->game->__SetField(HX_("width",06,b6,62,ca),::Math_obj::ceil((( (Float)(stageWidth) ) / ( (Float)(this->game->__Field(HX_("zoom",13,a3,f8,50),::hx::paccDynamic)) ))),::hx::paccDynamic);
HXLINE(  87)			this->game->__SetField(HX_("height",e7,07,4c,02),::Math_obj::ceil((( (Float)(stageHeight) ) / ( (Float)(this->game->__Field(HX_("zoom",13,a3,f8,50),::hx::paccDynamic)) ))),::hx::paccDynamic);
            		}
HXLINE(  90)		::ClientPrefs_obj::loadDefaultKeys();
HXLINE(  91)		this->addChild( ::flixel::FlxGame_obj::__alloc( HX_CTX ,this->game->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic),this->game->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic),this->game->__Field(HX_("initialState",ed,76,1b,48),::hx::paccDynamic),this->game->__Field(HX_("zoom",13,a3,f8,50),::hx::paccDynamic),this->game->__Field(HX_("framerate",8d,e5,4b,4e),::hx::paccDynamic),this->game->__Field(HX_("framerate",8d,e5,4b,4e),::hx::paccDynamic),this->game->__Field(HX_("skipSplash",46,75,9c,27),::hx::paccDynamic),this->game->__Field(HX_("startFullscreen",3d,c1,ee,2d),::hx::paccDynamic)));
HXLINE(  94)		::Main_obj::fpsVar =  ::openfl::display::FPS_obj::__alloc( HX_CTX ,10,3,16777215);
HXLINE(  95)		this->addChild(::Main_obj::fpsVar);
HXLINE(  96)		::openfl::Lib_obj::get_current()->stage->align = ::openfl::display::_StageAlign::StageAlign_Impl__obj::fromString(HX_("tl",78,65,00,00));
HXLINE(  97)		::openfl::Lib_obj::get_current()->stage->set_scaleMode(2);
HXLINE(  98)		if (::hx::IsNotNull( ::Main_obj::fpsVar )) {
HXLINE(  99)			::Main_obj::fpsVar->set_visible(::ClientPrefs_obj::showFPS);
            		}
HXLINE( 109)		::openfl::Lib_obj::get_current()->get_loaderInfo()->uncaughtErrorEvents->addEventListener(HX_("uncaughtError",f3,98,8b,8b),this->onCrash_dyn(),null(),null(),null());
HXLINE( 113)		if (!(::DiscordClient_obj::isInitialized)) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            			void _hx_run(){
            				HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_116_setupGame)
HXLINE( 116)				::DiscordClient_obj::shutdown();
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 114)			::DiscordClient_obj::initialize();
HXLINE( 115)			::lime::app::Application_obj::current->_hx___window->onClose->add( ::Dynamic(new _hx_Closure_0()),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,setupGame,(void))

void Main_obj::onCrash( ::openfl::events::UncaughtErrorEvent e){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_126_onCrash)
HXLINE( 127)		::String errMsg = HX_("",00,00,00,00);
HXLINE( 129)		::Array< ::Dynamic> callStack = ::haxe::_CallStack::CallStack_Impl__obj::exceptionStack(true);
HXLINE( 130)		::String dateNow = ::Date_obj::now()->toString();
HXLINE( 132)		dateNow = ::StringTools_obj::replace(dateNow,HX_(" ",20,00,00,00),HX_("_",5f,00,00,00));
HXLINE( 133)		dateNow = ::StringTools_obj::replace(dateNow,HX_(":",3a,00,00,00),HX_("'",27,00,00,00));
HXLINE( 128)		::String path = (((HX_("./crash/",69,79,f9,62) + HX_("PsychEngine_",82,ba,54,e7)) + dateNow) + HX_(".txt",02,3f,c0,1e));
HXLINE( 137)		{
HXLINE( 137)			int _g = 0;
HXDLIN( 137)			while((_g < callStack->length)){
HXLINE( 137)				 ::haxe::StackItem stackItem = callStack->__get(_g).StaticCast<  ::haxe::StackItem >();
HXDLIN( 137)				_g = (_g + 1);
HXLINE( 139)				if ((stackItem->_hx_getIndex() == 2)) {
HXLINE( 141)					 ::haxe::StackItem s = stackItem->_hx_getObject(0).StaticCast<  ::haxe::StackItem >();
HXDLIN( 141)					::String file = stackItem->_hx_getString(1);
HXDLIN( 141)					int line = stackItem->_hx_getInt(2);
HXDLIN( 141)					 ::Dynamic column = stackItem->_hx_getObject(3);
HXLINE( 142)					errMsg = (errMsg + (((file + HX_(" (line ",a4,24,f7,a5)) + line) + HX_(")\n",c1,23,00,00)));
            				}
            				else {
HXLINE( 144)					::Sys_obj::println(stackItem);
            				}
            			}
            		}
HXLINE( 148)		errMsg = (errMsg + ((HX_("\nUncaught Error: ",ed,bf,e1,72) + ::Std_obj::string(e->error)) + HX_("\nPlease report this error to the GitHub page: https://github.com/ShadowMario/FNF-PsychEngine\n\n> Crash Handler written by: sqirra-rng",3c,20,3f,85)));
HXLINE( 150)		if (!(::sys::FileSystem_obj::exists(HX_("./crash/",69,79,f9,62)))) {
HXLINE( 151)			::sys::FileSystem_obj::createDirectory(HX_("./crash/",69,79,f9,62));
            		}
HXLINE( 153)		::sys::io::File_obj::saveContent(path,(errMsg + HX_("\n",0a,00,00,00)));
HXLINE( 155)		::Sys_obj::println(errMsg);
HXLINE( 156)		::Sys_obj::println((HX_("Crash dump saved in ",cf,9c,69,5d) + ::haxe::io::Path_obj::normalize(path)));
HXLINE( 158)		::lime::app::Application_obj::current->_hx___window->alert(errMsg,HX_("Error!",79,f7,fc,85));
HXLINE( 159)		::DiscordClient_obj::shutdown();
HXLINE( 160)		::Sys_obj::exit(1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,onCrash,(void))

 ::openfl::display::FPS Main_obj::fpsVar;

void Main_obj::main(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_49_main)
HXDLIN(  49)		 ::openfl::display::MovieClip _hx_tmp = ::openfl::Lib_obj::get_current();
HXDLIN(  49)		_hx_tmp->addChild( ::Main_obj::__alloc( HX_CTX ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


::hx::ObjectPtr< Main_obj > Main_obj::__new() {
	::hx::ObjectPtr< Main_obj > __this = new Main_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Main_obj > Main_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Main_obj *__this = (Main_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Main_obj), true, "Main"));
	*(void **)__this = Main_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(game,"game");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(game,"game");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Main_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { return ::hx::Val( game ); }
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onCrash") ) { return ::hx::Val( onCrash_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setupGame") ) { return ::hx::Val( setupGame_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"fpsVar") ) { outValue = ( fpsVar ); return true; }
	}
	return false;
}

::hx::Val Main_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"game") ) { game=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"fpsVar") ) { fpsVar=ioValue.Cast<  ::openfl::display::FPS >(); return true; }
	}
	return false;
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("game",f2,f3,5e,44));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Main_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Main_obj,game),HX_("game",f2,f3,5e,44)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Main_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::FPS */ ,(void *) &Main_obj::fpsVar,HX_("fpsVar",7e,e6,8c,91)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Main_obj_sMemberFields[] = {
	HX_("game",f2,f3,5e,44),
	HX_("init",10,3b,bb,45),
	HX_("setupGame",0f,51,ed,9e),
	HX_("onCrash",48,5e,8d,e2),
	::String(null()) };

static void Main_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::fpsVar,"fpsVar");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Main_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::fpsVar,"fpsVar");
};

#endif

::hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_("fpsVar",7e,e6,8c,91),
	HX_("main",39,38,56,48),
	::String(null())
};

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = Main_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Main_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Main_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Main_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

