#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_VideoHandler
#include <VideoHandler.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_vlc_VLCBitmap
#include <vlc/VLCBitmap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_13_new,"VideoHandler","new",0xddc18921,"VideoHandler.new","VideoHandler.hx",13,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_36_onVLCOpening,"VideoHandler","onVLCOpening",0x2b4bbf89,"VideoHandler.onVLCOpening","VideoHandler.hx",36,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_43_onVLCEncounteredError,"VideoHandler","onVLCEncounteredError",0xcda12745,"VideoHandler.onVLCEncounteredError","VideoHandler.hx",43,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_49_onVLCEndReached,"VideoHandler","onVLCEndReached",0x49945866,"VideoHandler.onVLCEndReached","VideoHandler.hx",49,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_81_playVideo,"VideoHandler","playVideo",0x4c168168,"VideoHandler.playVideo","VideoHandler.hx",81,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_104_update,"VideoHandler","update",0x2a8cfbe8,"VideoHandler.update","VideoHandler.hx",104,0x6bc1b56f)
HX_LOCAL_STACK_FRAME(_hx_pos_547ad3a3e0f52ceb_123_calcSize,"VideoHandler","calcSize",0x733f3f95,"VideoHandler.calcSize","VideoHandler.hx",123,0x6bc1b56f)

void VideoHandler_obj::__construct(::hx::Null< int >  __o_IndexModifier){
            		int IndexModifier = __o_IndexModifier.Default(0);
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_13_new)
HXLINE(  22)		this->pauseMusic = false;
HXLINE(  20)		this->finishCallback = null();
HXLINE(  19)		this->openingCallback = null();
HXLINE(  17)		this->canUseAutoResize = true;
HXLINE(  16)		this->canUseSound = true;
HXLINE(  15)		this->canSkip = true;
HXLINE(  26)		super::__construct();
HXLINE(  28)		this->onOpening = this->onVLCOpening_dyn();
HXLINE(  29)		this->onEndReached = this->onVLCEndReached_dyn();
HXLINE(  30)		this->onEncounteredError = this->onVLCEncounteredError_dyn();
HXLINE(  32)		::flixel::FlxG_obj::addChildBelowMouse(::hx::ObjectPtr<OBJ_>(this),IndexModifier);
            	}

Dynamic VideoHandler_obj::__CreateEmpty() { return new VideoHandler_obj; }

void *VideoHandler_obj::_hx_vtable = 0;

Dynamic VideoHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VideoHandler_obj > _hx_result = new VideoHandler_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool VideoHandler_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b217ccf) {
		if (inClassId<=(int)0x10c5b76f) {
			if (inClassId<=(int)0x0c89e854) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
			} else {
				return inClassId==(int)0x10c5b76f;
			}
		} else {
			return inClassId==(int)0x1b217ccf;
		}
	} else {
		return inClassId==(int)0x4cc42801 || inClassId==(int)0x6b353933;
	}
}

void VideoHandler_obj::onVLCOpening(){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_36_onVLCOpening)
HXLINE(  37)		::haxe::Log_obj::trace(HX_("the video is opening!",2b,22,61,82),::hx::SourceInfo(HX_("VideoHandler.hx",6f,b5,c1,6b),37,HX_("VideoHandler",af,64,e4,27),HX_("onVLCOpening",6a,18,0c,20)));
HXLINE(  38)		if (::hx::IsNotNull( this->openingCallback )) {
HXLINE(  39)			this->openingCallback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,onVLCOpening,(void))

void VideoHandler_obj::onVLCEncounteredError(){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_43_onVLCEncounteredError)
HXLINE(  44)		::openfl::Lib_obj::get_application()->_hx___window->alert(HX_("Error cannot be specified",58,2f,93,9b),HX_("VLC Error!",ec,1e,8f,e9));
HXLINE(  45)		this->onVLCEndReached();
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,onVLCEncounteredError,(void))

void VideoHandler_obj::onVLCEndReached(){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_49_onVLCEndReached)
HXLINE(  50)		bool _hx_tmp;
HXDLIN(  50)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE(  50)			_hx_tmp = this->pauseMusic;
            		}
            		else {
HXLINE(  50)			_hx_tmp = false;
            		}
HXDLIN(  50)		if (_hx_tmp) {
HXLINE(  51)			::flixel::FlxG_obj::sound->music->resume();
            		}
HXLINE(  53)		if (::openfl::Lib_obj::get_current()->stage->hasEventListener(HX_("enterFrame",f5,03,50,02))) {
HXLINE(  54)			::openfl::Lib_obj::get_current()->stage->removeEventListener(HX_("enterFrame",f5,03,50,02),this->update_dyn(),null());
            		}
HXLINE(  56)		if (::flixel::FlxG_obj::autoPause) {
HXLINE(  58)			if (::flixel::FlxG_obj::signals->focusGained->has(this->resume_dyn())) {
HXLINE(  59)				::flixel::FlxG_obj::signals->focusGained->remove(this->resume_dyn());
            			}
HXLINE(  61)			if (::flixel::FlxG_obj::signals->focusLost->has(this->pause_dyn())) {
HXLINE(  62)				::flixel::FlxG_obj::signals->focusLost->remove(this->pause_dyn());
            			}
            		}
HXLINE(  65)		this->dispose();
HXLINE(  67)		if (::flixel::FlxG_obj::game->contains(::hx::ObjectPtr<OBJ_>(this))) {
HXLINE(  67)			::flixel::FlxG_obj::game->removeChild(::hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE(  69)		if (::hx::IsNotNull( this->finishCallback )) {
HXLINE(  70)			this->finishCallback();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(VideoHandler_obj,onVLCEndReached,(void))

void VideoHandler_obj::playVideo(::String Path,::hx::Null< bool >  __o_Loop,::hx::Null< bool >  __o_PauseMusic){
            		bool Loop = __o_Loop.Default(false);
            		bool PauseMusic = __o_PauseMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_81_playVideo)
HXLINE(  82)		this->pauseMusic = PauseMusic;
HXLINE(  84)		bool _hx_tmp;
HXDLIN(  84)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music )) {
HXLINE(  84)			_hx_tmp = PauseMusic;
            		}
            		else {
HXLINE(  84)			_hx_tmp = false;
            		}
HXDLIN(  84)		if (_hx_tmp) {
HXLINE(  85)			::flixel::FlxG_obj::sound->music->pause();
            		}
HXLINE(  87)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("enterFrame",f5,03,50,02),this->update_dyn(),null(),null(),null());
HXLINE(  89)		if (::flixel::FlxG_obj::autoPause) {
HXLINE(  91)			::flixel::FlxG_obj::signals->focusGained->add(this->resume_dyn());
HXLINE(  92)			::flixel::FlxG_obj::signals->focusLost->add(this->pause_dyn());
            		}
HXLINE(  97)		if (::sys::FileSystem_obj::exists((::Sys_obj::getCwd() + Path))) {
HXLINE(  98)			this->play((::Sys_obj::getCwd() + Path),Loop);
            		}
            		else {
HXLINE( 100)			this->play(Path,Loop);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(VideoHandler_obj,playVideo,(void))

void VideoHandler_obj::update( ::openfl::events::Event E){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_104_update)
HXLINE( 106)		bool _hx_tmp;
HXDLIN( 106)		bool _hx_tmp1;
HXDLIN( 106)		if (this->canSkip) {
HXLINE( 106)			 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 106)			_hx_tmp1 = _this->keyManager->checkStatusUnsafe(32,_this->status);
            		}
            		else {
HXLINE( 106)			_hx_tmp1 = false;
            		}
HXDLIN( 106)		if (_hx_tmp1) {
HXLINE( 106)			if (this->get_isPlaying()) {
HXLINE( 106)				_hx_tmp = this->isDisplaying;
            			}
            			else {
HXLINE( 106)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 106)			_hx_tmp = false;
            		}
HXDLIN( 106)		if (_hx_tmp) {
HXLINE( 107)			this->onVLCEndReached();
            		}
HXLINE( 113)		bool _hx_tmp2;
HXDLIN( 113)		if (this->canUseAutoResize) {
HXLINE( 113)			if ((this->videoWidth > 0)) {
HXLINE( 113)				_hx_tmp2 = (this->videoHeight > 0);
            			}
            			else {
HXLINE( 113)				_hx_tmp2 = false;
            			}
            		}
            		else {
HXLINE( 113)			_hx_tmp2 = false;
            		}
HXDLIN( 113)		if (_hx_tmp2) {
HXLINE( 115)			this->set_width(( (Float)(this->calcSize(0)) ));
HXLINE( 116)			this->set_height(( (Float)(this->calcSize(1)) ));
            		}
HXLINE( 119)		int _hx_tmp3;
HXDLIN( 119)		bool _hx_tmp4;
HXDLIN( 119)		if (!(::flixel::FlxG_obj::sound->muted)) {
HXLINE( 119)			_hx_tmp4 = !(this->canUseSound);
            		}
            		else {
HXLINE( 119)			_hx_tmp4 = true;
            		}
HXDLIN( 119)		if (_hx_tmp4) {
HXLINE( 119)			_hx_tmp3 = 0;
            		}
            		else {
HXLINE( 119)			_hx_tmp3 = 1;
            		}
HXDLIN( 119)		this->set_volume(::Std_obj::_hx_int((( (Float)(_hx_tmp3) ) * (::flixel::FlxG_obj::sound->volume * ( (Float)(100) )))));
            	}


HX_DEFINE_DYNAMIC_FUNC1(VideoHandler_obj,update,(void))

int VideoHandler_obj::calcSize(int Ind){
            	HX_STACKFRAME(&_hx_pos_547ad3a3e0f52ceb_123_calcSize)
HXLINE( 124)		int appliedWidth = ::openfl::Lib_obj::get_current()->stage->stageHeight;
HXDLIN( 124)		Float appliedWidth1 = (( (Float)(appliedWidth) ) * (( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(::flixel::FlxG_obj::height) )));
HXLINE( 125)		int appliedHeight = ::openfl::Lib_obj::get_current()->stage->stageWidth;
HXDLIN( 125)		Float appliedHeight1 = (( (Float)(appliedHeight) ) * (( (Float)(::flixel::FlxG_obj::height) ) / ( (Float)(::flixel::FlxG_obj::width) )));
HXLINE( 127)		if ((appliedHeight1 > ::openfl::Lib_obj::get_current()->stage->stageHeight)) {
HXLINE( 128)			appliedHeight1 = ( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) );
            		}
HXLINE( 130)		if ((appliedWidth1 > ::openfl::Lib_obj::get_current()->stage->stageWidth)) {
HXLINE( 131)			appliedWidth1 = ( (Float)(::openfl::Lib_obj::get_current()->stage->stageWidth) );
            		}
HXLINE( 133)		switch((int)(Ind)){
            			case (int)0: {
HXLINE( 136)				return ::Std_obj::_hx_int(appliedWidth1);
            			}
            			break;
            			case (int)1: {
HXLINE( 138)				return ::Std_obj::_hx_int(appliedHeight1);
            			}
            			break;
            		}
HXLINE( 141)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(VideoHandler_obj,calcSize,return )


::hx::ObjectPtr< VideoHandler_obj > VideoHandler_obj::__new(::hx::Null< int >  __o_IndexModifier) {
	::hx::ObjectPtr< VideoHandler_obj > __this = new VideoHandler_obj();
	__this->__construct(__o_IndexModifier);
	return __this;
}

::hx::ObjectPtr< VideoHandler_obj > VideoHandler_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_IndexModifier) {
	VideoHandler_obj *__this = (VideoHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VideoHandler_obj), true, "VideoHandler"));
	*(void **)__this = VideoHandler_obj::_hx_vtable;
	__this->__construct(__o_IndexModifier);
	return __this;
}

VideoHandler_obj::VideoHandler_obj()
{
}

void VideoHandler_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VideoHandler);
	HX_MARK_MEMBER_NAME(canSkip,"canSkip");
	HX_MARK_MEMBER_NAME(canUseSound,"canUseSound");
	HX_MARK_MEMBER_NAME(canUseAutoResize,"canUseAutoResize");
	HX_MARK_MEMBER_NAME(openingCallback,"openingCallback");
	HX_MARK_MEMBER_NAME(finishCallback,"finishCallback");
	HX_MARK_MEMBER_NAME(pauseMusic,"pauseMusic");
	 ::vlc::VLCBitmap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VideoHandler_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(canSkip,"canSkip");
	HX_VISIT_MEMBER_NAME(canUseSound,"canUseSound");
	HX_VISIT_MEMBER_NAME(canUseAutoResize,"canUseAutoResize");
	HX_VISIT_MEMBER_NAME(openingCallback,"openingCallback");
	HX_VISIT_MEMBER_NAME(finishCallback,"finishCallback");
	HX_VISIT_MEMBER_NAME(pauseMusic,"pauseMusic");
	 ::vlc::VLCBitmap_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VideoHandler_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canSkip") ) { return ::hx::Val( canSkip ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"calcSize") ) { return ::hx::Val( calcSize_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playVideo") ) { return ::hx::Val( playVideo_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { return ::hx::Val( pauseMusic ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"canUseSound") ) { return ::hx::Val( canUseSound ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onVLCOpening") ) { return ::hx::Val( onVLCOpening_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { return ::hx::Val( finishCallback ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"openingCallback") ) { return ::hx::Val( openingCallback ); }
		if (HX_FIELD_EQ(inName,"onVLCEndReached") ) { return ::hx::Val( onVLCEndReached_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"canUseAutoResize") ) { return ::hx::Val( canUseAutoResize ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"onVLCEncounteredError") ) { return ::hx::Val( onVLCEncounteredError_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VideoHandler_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"canSkip") ) { canSkip=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { pauseMusic=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"canUseSound") ) { canUseSound=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"openingCallback") ) { openingCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"canUseAutoResize") ) { canUseAutoResize=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VideoHandler_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("canSkip",af,fe,ac,6a));
	outFields->push(HX_("canUseSound",38,af,df,77));
	outFields->push(HX_("canUseAutoResize",ba,eb,10,16));
	outFields->push(HX_("pauseMusic",cf,6d,d3,e5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VideoHandler_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,canSkip),HX_("canSkip",af,fe,ac,6a)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,canUseSound),HX_("canUseSound",38,af,df,77)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,canUseAutoResize),HX_("canUseAutoResize",ba,eb,10,16)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VideoHandler_obj,openingCallback),HX_("openingCallback",3d,71,34,3d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VideoHandler_obj,finishCallback),HX_("finishCallback",38,a1,bc,b4)},
	{::hx::fsBool,(int)offsetof(VideoHandler_obj,pauseMusic),HX_("pauseMusic",cf,6d,d3,e5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VideoHandler_obj_sStaticStorageInfo = 0;
#endif

static ::String VideoHandler_obj_sMemberFields[] = {
	HX_("canSkip",af,fe,ac,6a),
	HX_("canUseSound",38,af,df,77),
	HX_("canUseAutoResize",ba,eb,10,16),
	HX_("openingCallback",3d,71,34,3d),
	HX_("finishCallback",38,a1,bc,b4),
	HX_("pauseMusic",cf,6d,d3,e5),
	HX_("onVLCOpening",6a,18,0c,20),
	HX_("onVLCEncounteredError",44,2a,89,db),
	HX_("onVLCEndReached",25,02,54,8c),
	HX_("playVideo",e7,41,e0,57),
	HX_("update",09,86,05,87),
	HX_("calcSize",f6,53,87,46),
	::String(null()) };

::hx::Class VideoHandler_obj::__mClass;

void VideoHandler_obj::__register()
{
	VideoHandler_obj _hx_dummy;
	VideoHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("VideoHandler",af,64,e4,27);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VideoHandler_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VideoHandler_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VideoHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VideoHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

