#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_FlashingState
#include <FlashingState.h>
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
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_fe772f19f43355ce_14_new,"FlashingState","new",0x81ccd7d1,"FlashingState.new","FlashingState.hx",14,0xb3aaccbf)
HX_LOCAL_STACK_FRAME(_hx_pos_fe772f19f43355ce_20_create,"FlashingState","create",0x5765dc2b,"FlashingState.create","FlashingState.hx",20,0xb3aaccbf)
HX_LOCAL_STACK_FRAME(_hx_pos_fe772f19f43355ce_42_update,"FlashingState","update",0x625bfb38,"FlashingState.update","FlashingState.hx",42,0xb3aaccbf)
HX_LOCAL_STACK_FRAME(_hx_pos_fe772f19f43355ce_57_update,"FlashingState","update",0x625bfb38,"FlashingState.update","FlashingState.hx",57,0xb3aaccbf)
HX_LOCAL_STACK_FRAME(_hx_pos_fe772f19f43355ce_56_update,"FlashingState","update",0x625bfb38,"FlashingState.update","FlashingState.hx",56,0xb3aaccbf)
HX_LOCAL_STACK_FRAME(_hx_pos_fe772f19f43355ce_68_update,"FlashingState","update",0x625bfb38,"FlashingState.update","FlashingState.hx",68,0xb3aaccbf)
HX_LOCAL_STACK_FRAME(_hx_pos_fe772f19f43355ce_67_update,"FlashingState","update",0x625bfb38,"FlashingState.update","FlashingState.hx",67,0xb3aaccbf)
HX_LOCAL_STACK_FRAME(_hx_pos_fe772f19f43355ce_16_boot,"FlashingState","boot",0x0988ffa1,"FlashingState.boot","FlashingState.hx",16,0xb3aaccbf)

void FlashingState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_fe772f19f43355ce_14_new)
HXDLIN(  14)		super::__construct(TransIn,TransOut);
            	}

Dynamic FlashingState_obj::__CreateEmpty() { return new FlashingState_obj; }

void *FlashingState_obj::_hx_vtable = 0;

Dynamic FlashingState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlashingState_obj > _hx_result = new FlashingState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlashingState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2d5db09f) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2d5db09f;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void FlashingState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_fe772f19f43355ce_20_create)
HXLINE(  21)		this->super::create();
HXLINE(  23)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE(  24)		this->add(bg);
HXLINE(  26)		this->warnText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,HX_("Warning:\n\n\t\t\tbefore you play this mod \n\n\t\t\tif you are having seizure issue \n\n\t\t\twait until faisal.exe mod unseizure edition get released \n\n\t\t\tbecause I don't want to hurt you \n\n\t\t\tand I warned about this because this mod contains flash lights \n\n\t\t\tand something that probably will make you dizzy. \n\n\t\t\thave fun.",39,f4,24,55),32,null());
HXLINE(  36)		this->warnText->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-1,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  37)		{
HXLINE(  37)			 ::flixel::text::FlxText _this = this->warnText;
HXDLIN(  37)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::Y_dyn();
HXDLIN(  37)			if (::hx::IsNull( axes )) {
HXLINE(  37)				axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN(  37)			bool _hx_tmp;
HXDLIN(  37)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  37)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  37)					_hx_tmp = false;
            				}
            			}
HXDLIN(  37)			if (_hx_tmp) {
HXLINE(  37)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  37)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  37)			bool _hx_tmp1;
HXDLIN(  37)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  37)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  37)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  37)			if (_hx_tmp1) {
HXLINE(  37)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  37)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  38)		this->add(this->warnText);
            	}


void FlashingState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_fe772f19f43355ce_42_update)
HXLINE(  43)		if (!(::FlashingState_obj::leftState)) {
HXLINE(  44)			bool back = ::PlayerSettings_obj::player1->controls->_back->check();
HXLINE(  45)			bool _hx_tmp;
HXDLIN(  45)			if (!(::PlayerSettings_obj::player1->controls->_accept->check())) {
HXLINE(  45)				_hx_tmp = back;
            			}
            			else {
HXLINE(  45)				_hx_tmp = true;
            			}
HXDLIN(  45)			if (_hx_tmp) {
HXLINE(  46)				::FlashingState_obj::leftState = true;
HXLINE(  47)				::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransIn = true;
HXLINE(  48)				::flixel::addons::transition::FlxTransitionableState_obj::skipNextTransOut = true;
HXLINE(  49)				if (!(back)) {
            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            					void _hx_run( ::flixel::effects::FlxFlicker flk){
            						HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            						void _hx_run( ::flixel::util::FlxTimer tmr){
            							HX_GC_STACKFRAME(&_hx_pos_fe772f19f43355ce_57_update)
HXLINE(  57)							::MusicBeatState_obj::switchState( ::MuslimWarning_obj::__alloc( HX_CTX ,null(),null()));
            						}
            						HX_END_LOCAL_FUNC1((void))

            						HX_GC_STACKFRAME(&_hx_pos_fe772f19f43355ce_56_update)
HXLINE(  56)						 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.5), ::Dynamic(new _hx_Closure_0()),null());
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE(  50)					::ClientPrefs_obj::flashing = false;
HXLINE(  51)					::ClientPrefs_obj::saveSettings();
HXLINE(  52)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  52)					_hx_tmp->play(::Paths_obj::sound(HX_("faisal warning sound",fb,19,be,36),null()),null(),null(),null(),null(),null());
HXLINE(  53)					this->warnText->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-65536,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  54)					::flixel::FlxG_obj::camera->flash(-65536,2,null(),null());
HXLINE(  55)					::flixel::effects::FlxFlicker_obj::flicker(this->warnText,6,6,false,true, ::Dynamic(new _hx_Closure_1()),null());
            				}
            				else {
            					HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(1)
            					void _hx_run( ::flixel::effects::FlxFlicker flk){
            						HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            						void _hx_run( ::flixel::util::FlxTimer tmr){
            							HX_GC_STACKFRAME(&_hx_pos_fe772f19f43355ce_68_update)
HXLINE(  68)							::MusicBeatState_obj::switchState( ::MuslimWarning_obj::__alloc( HX_CTX ,null(),null()));
            						}
            						HX_END_LOCAL_FUNC1((void))

            						HX_GC_STACKFRAME(&_hx_pos_fe772f19f43355ce_67_update)
HXLINE(  67)						 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.5), ::Dynamic(new _hx_Closure_2()),null());
            					}
            					HX_END_LOCAL_FUNC1((void))

HXLINE(  61)					::ClientPrefs_obj::flashing = false;
HXLINE(  62)					::ClientPrefs_obj::saveSettings();
HXLINE(  63)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  63)					_hx_tmp->play(::Paths_obj::sound(HX_("faisal warning sound",fb,19,be,36),null()),null(),null(),null(),null(),null());
HXLINE(  64)					this->warnText->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,-65536,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  65)					::flixel::FlxG_obj::camera->flash(-65536,2,null(),null());
HXLINE(  66)					::flixel::effects::FlxFlicker_obj::flicker(this->warnText,6,6,false,true, ::Dynamic(new _hx_Closure_3()),null());
            				}
            			}
            		}
HXLINE(  74)		this->super::update(elapsed);
            	}


bool FlashingState_obj::leftState;


::hx::ObjectPtr< FlashingState_obj > FlashingState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< FlashingState_obj > __this = new FlashingState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< FlashingState_obj > FlashingState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	FlashingState_obj *__this = (FlashingState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlashingState_obj), true, "FlashingState"));
	*(void **)__this = FlashingState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

FlashingState_obj::FlashingState_obj()
{
}

void FlashingState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlashingState);
	HX_MARK_MEMBER_NAME(warnText,"warnText");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlashingState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(warnText,"warnText");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlashingState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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

bool FlashingState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"leftState") ) { outValue = ( leftState ); return true; }
	}
	return false;
}

::hx::Val FlashingState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"warnText") ) { warnText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlashingState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"leftState") ) { leftState=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

void FlashingState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("warnText",13,f6,aa,7a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlashingState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(FlashingState_obj,warnText),HX_("warnText",13,f6,aa,7a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlashingState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &FlashingState_obj::leftState,HX_("leftState",8a,64,eb,98)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlashingState_obj_sMemberFields[] = {
	HX_("warnText",13,f6,aa,7a),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

static void FlashingState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlashingState_obj::leftState,"leftState");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlashingState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlashingState_obj::leftState,"leftState");
};

#endif

::hx::Class FlashingState_obj::__mClass;

static ::String FlashingState_obj_sStaticFields[] = {
	HX_("leftState",8a,64,eb,98),
	::String(null())
};

void FlashingState_obj::__register()
{
	FlashingState_obj _hx_dummy;
	FlashingState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FlashingState",5f,9b,16,51);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlashingState_obj::__GetStatic;
	__mClass->mSetStaticField = &FlashingState_obj::__SetStatic;
	__mClass->mMarkFunc = FlashingState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlashingState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlashingState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlashingState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlashingState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlashingState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlashingState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlashingState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_fe772f19f43355ce_16_boot)
HXDLIN(  16)		leftState = false;
            	}
}

