#include <hxcpp.h>

#ifndef INCLUDED_VideoHandler
#include <VideoHandler.h>
#endif
#ifndef INCLUDED_VideoSprite
#include <VideoSprite.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
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
#ifndef INCLUDED_vlc_VLCBitmap
#include <vlc/VLCBitmap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ab0e21c679ac5afd_26_new,"VideoSprite","new",0xc5e80bb2,"VideoSprite.new","VideoSprite.hx",26,0xe0be6ffe)
HX_DEFINE_STACK_FRAME(_hx_pos_ab0e21c679ac5afd_30_new,"VideoSprite","new",0xc5e80bb2,"VideoSprite.new","VideoSprite.hx",30,0xe0be6ffe)
HX_DEFINE_STACK_FRAME(_hx_pos_ab0e21c679ac5afd_9_new,"VideoSprite","new",0xc5e80bb2,"VideoSprite.new","VideoSprite.hx",9,0xe0be6ffe)
HX_LOCAL_STACK_FRAME(_hx_pos_ab0e21c679ac5afd_39_update,"VideoSprite","update",0xabbba9f7,"VideoSprite.update","VideoSprite.hx",39,0xe0be6ffe)
HX_LOCAL_STACK_FRAME(_hx_pos_ab0e21c679ac5afd_53_playVideo,"VideoSprite","playVideo",0x48b2c6b9,"VideoSprite.playVideo","VideoSprite.hx",53,0xe0be6ffe)

void VideoSprite_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::VideoSprite,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_ab0e21c679ac5afd_26_new)
HXLINE(  26)			if (::hx::IsNotNull( _gthis->openingCallback )) {
HXLINE(  27)				_gthis->openingCallback();
            			}
            		}
            		HX_END_LOCAL_FUNC0((void))

            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::VideoSprite,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_ab0e21c679ac5afd_30_new)
HXLINE(  31)			if (::hx::IsNotNull( _gthis->finishCallback )) {
HXLINE(  32)				_gthis->finishCallback();
            			}
HXLINE(  34)			_gthis->kill();
            		}
            		HX_END_LOCAL_FUNC0((void))

            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_ab0e21c679ac5afd_9_new)
HXLINE(  13)		this->finishCallback = null();
HXLINE(  12)		this->openingCallback = null();
HXLINE(  16)		 ::VideoSprite _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  17)		super::__construct(X,Y,null());
HXLINE(  19)		this->makeGraphic(1,1,0,null(),null());
HXLINE(  21)		this->bitmap =  ::VideoHandler_obj::__alloc( HX_CTX ,null());
HXLINE(  22)		this->bitmap->canUseAutoResize = false;
HXLINE(  23)		this->bitmap->set_alpha(( (Float)(0) ));
HXLINE(  24)		this->bitmap->openingCallback =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE(  29)		this->bitmap->finishCallback =  ::Dynamic(new _hx_Closure_1(_gthis));
            	}

Dynamic VideoSprite_obj::__CreateEmpty() { return new VideoSprite_obj; }

void *VideoSprite_obj::_hx_vtable = 0;

Dynamic VideoSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< VideoSprite_obj > _hx_result = new VideoSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool VideoSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x023d9470) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x023d9470;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void VideoSprite_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_ab0e21c679ac5afd_39_update)
HXLINE(  40)		this->super::update(elapsed);
HXLINE(  42)		bool _hx_tmp;
HXDLIN(  42)		bool _hx_tmp1;
HXDLIN(  42)		if (this->bitmap->get_isPlaying()) {
HXLINE(  42)			_hx_tmp1 = this->bitmap->isDisplaying;
            		}
            		else {
HXLINE(  42)			_hx_tmp1 = false;
            		}
HXDLIN(  42)		if (_hx_tmp1) {
HXLINE(  42)			_hx_tmp = ::hx::IsNotNull( this->bitmap->get_bitmapData() );
            		}
            		else {
HXLINE(  42)			_hx_tmp = false;
            		}
HXDLIN(  42)		if (_hx_tmp) {
HXLINE(  43)			this->set_pixels(this->bitmap->get_bitmapData());
            		}
            	}


void VideoSprite_obj::playVideo(::String Path,::hx::Null< bool >  __o_Loop,::hx::Null< bool >  __o_PauseMusic){
            		bool Loop = __o_Loop.Default(false);
            		bool PauseMusic = __o_PauseMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_ab0e21c679ac5afd_53_playVideo)
HXDLIN(  53)		this->bitmap->playVideo(Path,Loop,PauseMusic);
            	}


HX_DEFINE_DYNAMIC_FUNC3(VideoSprite_obj,playVideo,(void))


::hx::ObjectPtr< VideoSprite_obj > VideoSprite_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y) {
	::hx::ObjectPtr< VideoSprite_obj > __this = new VideoSprite_obj();
	__this->__construct(__o_X,__o_Y);
	return __this;
}

::hx::ObjectPtr< VideoSprite_obj > VideoSprite_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y) {
	VideoSprite_obj *__this = (VideoSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(VideoSprite_obj), true, "VideoSprite"));
	*(void **)__this = VideoSprite_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y);
	return __this;
}

VideoSprite_obj::VideoSprite_obj()
{
}

void VideoSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VideoSprite);
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(openingCallback,"openingCallback");
	HX_MARK_MEMBER_NAME(finishCallback,"finishCallback");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VideoSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(openingCallback,"openingCallback");
	HX_VISIT_MEMBER_NAME(finishCallback,"finishCallback");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val VideoSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return ::hx::Val( bitmap ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"playVideo") ) { return ::hx::Val( playVideo_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { return ::hx::Val( finishCallback ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"openingCallback") ) { return ::hx::Val( openingCallback ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val VideoSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast<  ::VideoHandler >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"openingCallback") ) { openingCallback=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VideoSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bitmap",ef,0f,0c,f1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo VideoSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::VideoHandler */ ,(int)offsetof(VideoSprite_obj,bitmap),HX_("bitmap",ef,0f,0c,f1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VideoSprite_obj,openingCallback),HX_("openingCallback",3d,71,34,3d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(VideoSprite_obj,finishCallback),HX_("finishCallback",38,a1,bc,b4)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *VideoSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String VideoSprite_obj_sMemberFields[] = {
	HX_("bitmap",ef,0f,0c,f1),
	HX_("openingCallback",3d,71,34,3d),
	HX_("finishCallback",38,a1,bc,b4),
	HX_("update",09,86,05,87),
	HX_("playVideo",e7,41,e0,57),
	::String(null()) };

::hx::Class VideoSprite_obj::__mClass;

void VideoSprite_obj::__register()
{
	VideoSprite_obj _hx_dummy;
	VideoSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("VideoSprite",c0,0a,70,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(VideoSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< VideoSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = VideoSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = VideoSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

