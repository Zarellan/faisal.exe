#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MuslimWarning
#include <MuslimWarning.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
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
#ifndef INCLUDED_flixel_effects_FlxFlicker
#include <flixel/effects/FlxFlicker.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_af7ff30b5ef351b7_14_new,"MuslimWarning","new",0xb6827d09,"MuslimWarning.new","MuslimWarning.hx",14,0xeb01b687)
HX_LOCAL_STACK_FRAME(_hx_pos_af7ff30b5ef351b7_20_create,"MuslimWarning","create",0x770949f3,"MuslimWarning.create","MuslimWarning.hx",20,0xeb01b687)
HX_LOCAL_STACK_FRAME(_hx_pos_af7ff30b5ef351b7_45_update,"MuslimWarning","update",0x81ff6900,"MuslimWarning.update","MuslimWarning.hx",45,0xeb01b687)
HX_LOCAL_STACK_FRAME(_hx_pos_af7ff30b5ef351b7_58_update,"MuslimWarning","update",0x81ff6900,"MuslimWarning.update","MuslimWarning.hx",58,0xeb01b687)
HX_LOCAL_STACK_FRAME(_hx_pos_af7ff30b5ef351b7_57_update,"MuslimWarning","update",0x81ff6900,"MuslimWarning.update","MuslimWarning.hx",57,0xeb01b687)
HX_LOCAL_STACK_FRAME(_hx_pos_af7ff30b5ef351b7_67_update,"MuslimWarning","update",0x81ff6900,"MuslimWarning.update","MuslimWarning.hx",67,0xeb01b687)
HX_LOCAL_STACK_FRAME(_hx_pos_af7ff30b5ef351b7_66_update,"MuslimWarning","update",0x81ff6900,"MuslimWarning.update","MuslimWarning.hx",66,0xeb01b687)
HX_LOCAL_STACK_FRAME(_hx_pos_af7ff30b5ef351b7_16_boot,"MuslimWarning","boot",0xf3c3eb69,"MuslimWarning.boot","MuslimWarning.hx",16,0xeb01b687)

void MuslimWarning_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_af7ff30b5ef351b7_14_new)
HXDLIN(  14)		super::__construct(TransIn,TransOut);
            	}

Dynamic MuslimWarning_obj::__CreateEmpty() { return new MuslimWarning_obj; }

void *MuslimWarning_obj::_hx_vtable = 0;

Dynamic MuslimWarning_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MuslimWarning_obj > _hx_result = new MuslimWarning_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MuslimWarning_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x6c6a69f3 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void MuslimWarning_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_af7ff30b5ef351b7_20_create)
HXLINE(  21)		this->super::create();
HXLINE(  23)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  24)		this->add(bg);
HXLINE(  26)		this->warnText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,HX_W(u"if you don\'t understand arabic just press enter (or esc) \n\n\t\t\tif you are arabian please read the note down below \n\n\t\t\t: \ufee6\ufef4\ufee4\ufee0\ufeb4\ufee4\ufee0\ufedf \ufe94\ufee4\ufeec\ufee3 \u064b\u0627\ufeaa\ufe9f \ufe94\ufedf\ufe8e\ufeb3\ufead\n\t\t\t\u062f\ufeee\ufee4\ufedf\ufe8d \u0627\ufeab \ufe90\ufecc\ufee0\ufe97 \ufefb \ufede\ufe92\ufed7\n \t\t\t\u062f\ufeee\ufee4\ufedf\ufe8d \u0627\ufeab \ufe90\ufecc\ufedf\ufe8d \ufee6\ufef3\ufeaa\ufecc\ufe91\ufeed \ufeda\ufe97\ufe8d\ufeee\ufee0\ufebb \ufede\ufedb \ufef2\ufee0\ufebb \u062d\ufeed\ufead\n\t\t\t(\ufec2\ufed8\ufed3 \ufe94\ufecc\ufe98\ufee4\ufee0\ufedf \u0647\ufe8e\ufee8\ufee4\ufee4\ufebb \u0644\ufe8e\ufe91) \u0629\ufea9\ufe8e\ufe92\ufecc\ufedf\ufe8d \u0648\ufe8d \u0629\ufefc\ufebc\ufedf\ufe8d \ufee6\ufecb \ufef2\ufeec\ufee0\ufedf \u0647\ufe8e\ufee8\ufee4\ufee4\ufebb \ufe8e\ufee3 \u062f\ufeee\ufee4\ufedf\ufe8d \u0627\ufeab \u0646\ufef7\n\t\t\t(\ufeea\ufee0\ufedf\ufe8d \ufefb\ufe87 \ufeea\ufedf\ufe87 \ufefb) \ufeea\ufedf\ufe87 \ufeae\ufe92\ufe98\ufecc\ufef3 \ufe8e\ufee3 \u062f\ufeee\ufee4\ufedf\ufe8d \u0627\ufeab \ufef2\ufed3 \ufede\ufebc\ufef4\ufed3\ufeed\n\t\t\t\ufec2\ufed8\ufed3 \ufeb6\ufea3\ufeed \ufeae\ufe92\ufe98\ufecc\ufef3 \u0644\ufe8e\ufe91\n\t\t\t\u062f\ufeee\ufee4\ufedf\ufe8d \u0627\ufeac\ufe91 \ufeda\ufe92\ufecc\ufedf \ufef2\ufed3 \ufef2\ufeec\ufe98\ufee8\ufe97 \ufe8e\ufee3 \ufeaa\ufecc\ufe91\ufeed\n\t\t\t\u0646\ufe81\ufeae\ufed7 \u0623\ufeae\ufed7\ufe8d \u062d\ufeed\ufead\n\t\t\t(\u062f\ufeee\ufee4\ufedf\ufe8d \ufee6\ufee3 \ufef2\ufeec\ufe98\ufee8\ufe97 \ufe8e\ufee3 \ufeaa\ufecc\ufe91 \u0646\ufe81\ufeae\ufed7 \u0623\ufeae\ufed7\ufe8d:\ufeae\ufedb\ufeac\ufe97\ufeed) \u062f\ufeee\ufee4\ufedf\ufe8e\ufe91 \ufeca\ufe98\ufee4\ufe98\ufeb3\ufe8d \ufeb2\ufe91\ufeed",560a,def8),32,null());
HXLINE(  39)		this->warnText->setFormat(HX_("Cairo ExtraLight",fe,70,fd,10),32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  40)		{
HXLINE(  40)			 ::flixel::text::FlxText _this = this->warnText;
HXDLIN(  40)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::Y_dyn();
HXDLIN(  40)			if (::hx::IsNull( axes )) {
HXLINE(  40)				axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN(  40)			bool _hx_tmp;
HXDLIN(  40)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  40)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  40)					_hx_tmp = false;
            				}
            			}
HXDLIN(  40)			if (_hx_tmp) {
HXLINE(  40)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  40)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  40)			bool _hx_tmp1;
HXDLIN(  40)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  40)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  40)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  40)			if (_hx_tmp1) {
HXLINE(  40)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  40)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  41)		this->add(this->warnText);
            	}


void MuslimWarning_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_af7ff30b5ef351b7_45_update)
HXLINE(  46)		if (!(::MuslimWarning_obj::leftState)) {
HXLINE(  47)			bool back = ::PlayerSettings_obj::player1->controls->_back->check();
HXLINE(  48)			bool _hx_tmp;
HXDLIN(  48)			if (!(::PlayerSettings_obj::player1->controls->_accept->check())) {
HXLINE(  48)				_hx_tmp = back;
            			}
            			else {
HXLINE(  48)				_hx_tmp = true;
            			}
HXDLIN(  48)			if (_hx_tmp) {
HXLINE(  49)				::MuslimWarning_obj::leftState = true;
HXLINE(  50)				::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn = true;
HXLINE(  51)				::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut = true;
HXLINE(  52)				if (!(back)) {
            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            					void _hx_run( ::flixel::effects::FlxFlicker flk){
            						HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            						void _hx_run( ::flixel::util::FlxTimer tmr){
            							HX_GC_STACKFRAME(&_hx_pos_af7ff30b5ef351b7_58_update)
HXLINE(  58)							::MusicBeatState_obj::switchState( ::TitleState_obj::__alloc( HX_CTX ,null(),null()));
            						}
            						HX_END_LOCAL_FUNC1((void))

            						HX_GC_STACKFRAME(&_hx_pos_af7ff30b5ef351b7_57_update)
HXLINE(  57)						 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.5), ::Dynamic(new _hx_Closure_0()),null());
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE(  53)					::ClientPrefs_obj::flashing = false;
HXLINE(  54)					::ClientPrefs_obj::saveSettings();
HXLINE(  55)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  55)					_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE(  56)					::flixel::effects::FlxFlicker_obj::flicker(this->warnText,2,((Float)0.1),false,true, ::Dynamic(new _hx_Closure_1()),null());
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(1)
            					void _hx_run( ::flixel::effects::FlxFlicker flk){
            						HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            						void _hx_run( ::flixel::util::FlxTimer tmr){
            							HX_GC_STACKFRAME(&_hx_pos_af7ff30b5ef351b7_67_update)
HXLINE(  67)							::MusicBeatState_obj::switchState( ::TitleState_obj::__alloc( HX_CTX ,null(),null()));
            						}
            						HX_END_LOCAL_FUNC1((void))

            						HX_GC_STACKFRAME(&_hx_pos_af7ff30b5ef351b7_66_update)
HXLINE(  66)						 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.5), ::Dynamic(new _hx_Closure_2()),null());
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE(  62)					::ClientPrefs_obj::flashing = false;
HXLINE(  63)					::ClientPrefs_obj::saveSettings();
HXLINE(  64)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  64)					_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE(  65)					::flixel::effects::FlxFlicker_obj::flicker(this->warnText,2,((Float)0.1),false,true, ::Dynamic(new _hx_Closure_3()),null());
            				}
            			}
            		}
HXLINE(  73)		this->super::update(elapsed);
            	}


bool MuslimWarning_obj::leftState;


::hx::ObjectPtr< MuslimWarning_obj > MuslimWarning_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MuslimWarning_obj > __this = new MuslimWarning_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MuslimWarning_obj > MuslimWarning_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MuslimWarning_obj *__this = (MuslimWarning_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MuslimWarning_obj), true, "MuslimWarning"));
	*(void **)__this = MuslimWarning_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MuslimWarning_obj::MuslimWarning_obj()
{
}

void MuslimWarning_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MuslimWarning);
	HX_MARK_MEMBER_NAME(warnText,"warnText");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MuslimWarning_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(warnText,"warnText");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MuslimWarning_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"warnText") ) { return ::hx::Val( warnText ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MuslimWarning_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"leftState") ) { outValue = ( leftState ); return true; }
	}
	return false;
}

::hx::Val MuslimWarning_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"warnText") ) { warnText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MuslimWarning_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"leftState") ) { leftState=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void MuslimWarning_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("warnText",13,f6,aa,7a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MuslimWarning_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(MuslimWarning_obj,warnText),HX_("warnText",13,f6,aa,7a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MuslimWarning_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &MuslimWarning_obj::leftState,HX_("leftState",8a,64,eb,98)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MuslimWarning_obj_sMemberFields[] = {
	HX_("warnText",13,f6,aa,7a),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

static void MuslimWarning_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MuslimWarning_obj::leftState,"leftState");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MuslimWarning_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MuslimWarning_obj::leftState,"leftState");
};

#endif

::hx::Class MuslimWarning_obj::__mClass;

static ::String MuslimWarning_obj_sStaticFields[] = {
	HX_("leftState",8a,64,eb,98),
	::String(null())
};

void MuslimWarning_obj::__register()
{
	MuslimWarning_obj _hx_dummy;
	MuslimWarning_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MuslimWarning",97,44,53,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MuslimWarning_obj::__GetStatic;
	__mClass->mSetStaticField = &MuslimWarning_obj::__SetStatic;
	__mClass->mMarkFunc = MuslimWarning_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MuslimWarning_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MuslimWarning_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MuslimWarning_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MuslimWarning_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MuslimWarning_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MuslimWarning_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MuslimWarning_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_af7ff30b5ef351b7_16_boot)
HXDLIN(  16)		leftState = false;
            	}
}

