#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_AttachedText
#include <AttachedText.h>
#endif
#ifndef INCLUDED_CheckboxThingie
#include <CheckboxThingie.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_GameplayChangersSubstate
#include <GameplayChangersSubstate.h>
#endif
#ifndef INCLUDED_GameplayOption
#include <GameplayOption.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_96606cf9b666a443_30_new,"GameplayChangersSubstate","new",0x5f312efa,"GameplayChangersSubstate.new","GameplayChangersSubstate.hx",30,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_96606cf9b666a443_41_getOptions,"GameplayChangersSubstate","getOptions",0x0462c20e,"GameplayChangersSubstate.getOptions","GameplayChangersSubstate.hx",41,0xb1374db6)
static const ::String _hx_array_data_2403ea08_3[] = {
	HX_("multiplicative",96,7a,3f,fa),HX_("constant",64,c1,9d,a5),
};
HX_LOCAL_STACK_FRAME(_hx_pos_96606cf9b666a443_100_getOptionByName,"GameplayChangersSubstate","getOptionByName",0xf5352c67,"GameplayChangersSubstate.getOptionByName","GameplayChangersSubstate.hx",100,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_96606cf9b666a443_169_update,"GameplayChangersSubstate","update",0x9821c3af,"GameplayChangersSubstate.update","GameplayChangersSubstate.hx",169,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_96606cf9b666a443_331_updateTextFrom,"GameplayChangersSubstate","updateTextFrom",0x57933f86,"GameplayChangersSubstate.updateTextFrom","GameplayChangersSubstate.hx",331,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_96606cf9b666a443_340_clearHold,"GameplayChangersSubstate","clearHold",0x00f4ff86,"GameplayChangersSubstate.clearHold","GameplayChangersSubstate.hx",340,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_96606cf9b666a443_348_changeSelection,"GameplayChangersSubstate","changeSelection",0xa2f37656,"GameplayChangersSubstate.changeSelection","GameplayChangersSubstate.hx",348,0xb1374db6)
HX_LOCAL_STACK_FRAME(_hx_pos_96606cf9b666a443_377_reloadCheckboxes,"GameplayChangersSubstate","reloadCheckboxes",0xe10eeb50,"GameplayChangersSubstate.reloadCheckboxes","GameplayChangersSubstate.hx",377,0xb1374db6)

void GameplayChangersSubstate_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_96606cf9b666a443_30_new)
HXLINE( 167)		this->holdValue = ((Float)0);
HXLINE( 166)		this->holdTime = ((Float)0);
HXLINE( 165)		this->nextAccept = 5;
HXLINE(  34)		this->optionsArray = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  33)		this->curSelected = 0;
HXLINE(  32)		this->curOption = null();
HXLINE( 112)		super::__construct();
HXLINE( 114)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-16777216,null(),null());
HXLINE( 115)		bg->set_alpha(((Float)0.6));
HXLINE( 116)		this->add(bg);
HXLINE( 119)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 120)		this->add(this->grpOptions);
HXLINE( 122)		this->grpTexts =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 123)		this->add(this->grpTexts);
HXLINE( 125)		this->checkboxGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 126)		this->add(this->checkboxGroup);
HXLINE( 128)		this->getOptions();
HXLINE( 130)		{
HXLINE( 130)			int _g = 0;
HXDLIN( 130)			int _g1 = this->optionsArray->get_length();
HXDLIN( 130)			while((_g < _g1)){
HXLINE( 130)				_g = (_g + 1);
HXDLIN( 130)				int i = (_g - 1);
HXLINE( 132)				 ::Alphabet optionText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(200) ),( (Float)(360) ),( (::String)(this->optionsArray->__get(i)->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) ),true);
HXLINE( 133)				optionText->isMenuItem = true;
HXLINE( 134)				optionText->set_scaleX(((Float)0.8));
HXLINE( 135)				optionText->set_scaleY(((Float)0.8));
HXLINE( 136)				optionText->targetY = i;
HXLINE( 137)				this->grpOptions->add(optionText).StaticCast<  ::Alphabet >();
HXLINE( 139)				if (::hx::IsEq( this->optionsArray->__get(i)->__Field(HX_("type",ba,f2,08,4d),::hx::paccDynamic),HX_("bool",2a,84,1b,41) )) {
HXLINE( 140)					optionText->set_x((optionText->x + 110));
HXLINE( 141)					 ::flixel::math::FlxPoint fh = optionText->startPosition;
HXDLIN( 141)					fh->set_x((fh->x + 110));
HXLINE( 142)					optionText->snapToPosition();
HXLINE( 143)					Float checkbox = (optionText->x - ( (Float)(105) ));
HXDLIN( 143)					Float optionText1 = optionText->y;
HXDLIN( 143)					 ::CheckboxThingie checkbox1 =  ::CheckboxThingie_obj::__alloc( HX_CTX ,checkbox,optionText1,::hx::IsEq( this->optionsArray->__get(i)->__Field(HX_("getValue",fb,8e,8f,91),::hx::paccDynamic)(),true ));
HXLINE( 144)					checkbox1->sprTracker = optionText;
HXLINE( 145)					 ::CheckboxThingie checkbox2 = checkbox1;
HXDLIN( 145)					checkbox2->offsetX = (checkbox2->offsetX - ( (Float)(32) ));
HXLINE( 146)					checkbox1->offsetY = ( (Float)(-120) );
HXLINE( 147)					checkbox1->ID = i;
HXLINE( 148)					this->checkboxGroup->add(checkbox1).StaticCast<  ::CheckboxThingie >();
            				}
            				else {
HXLINE( 150)					optionText->snapToPosition();
HXLINE( 151)					::String valueText = ::Std_obj::string(this->optionsArray->__get(i)->__Field(HX_("getValue",fb,8e,8f,91),::hx::paccDynamic)());
HXDLIN( 151)					 ::AttachedText valueText1 =  ::AttachedText_obj::__alloc( HX_CTX ,valueText,optionText->get_width(),-72,true,((Float)0.8));
HXLINE( 152)					valueText1->sprTracker = optionText;
HXLINE( 153)					valueText1->copyAlpha = true;
HXLINE( 154)					valueText1->ID = i;
HXLINE( 155)					this->grpTexts->add(valueText1).StaticCast<  ::AttachedText >();
HXLINE( 156)					this->optionsArray->__get(i)->__Field(HX_("setChild",9a,12,ee,53),::hx::paccDynamic)(valueText1);
            				}
HXLINE( 158)				this->updateTextFrom(( ( ::GameplayOption)(this->optionsArray->__get(i)) ));
            			}
            		}
HXLINE( 161)		this->changeSelection(null());
HXLINE( 162)		this->reloadCheckboxes();
            	}

Dynamic GameplayChangersSubstate_obj::__CreateEmpty() { return new GameplayChangersSubstate_obj; }

void *GameplayChangersSubstate_obj::_hx_vtable = 0;

Dynamic GameplayChangersSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameplayChangersSubstate_obj > _hx_result = new GameplayChangersSubstate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GameplayChangersSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x52f65cc8) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x52f65cc8;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void GameplayChangersSubstate_obj::getOptions(){
            	HX_GC_STACKFRAME(&_hx_pos_96606cf9b666a443_41_getOptions)
HXLINE(  42)		 ::GameplayOption goption =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Scroll Type",ad,1f,97,3f),HX_("scrolltype",47,55,ef,1f),HX_("string",d1,28,30,11),HX_("multiplicative",96,7a,3f,fa),::Array_obj< ::String >::fromData( _hx_array_data_2403ea08_3,2));
HXLINE(  43)		this->optionsArray->push(goption);
HXLINE(  45)		 ::GameplayOption option =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Scroll Speed",34,bf,42,cb),HX_("scrollspeed",5a,70,19,38),HX_("float",9c,c5,96,02),1,null());
HXLINE(  46)		option->scrollSpeed = ((Float)2.0);
HXLINE(  47)		option->minValue = ((Float)0.35);
HXLINE(  48)		option->changeValue = ((Float)0.05);
HXLINE(  49)		option->decimals = 2;
HXLINE(  50)		if (::hx::IsNotEq( goption->getValue(),HX_("constant",64,c1,9d,a5) )) {
HXLINE(  52)			option->displayFormat = HX_("%vX",87,7a,1c,00);
HXLINE(  53)			option->maxValue = 3;
            		}
            		else {
HXLINE(  57)			option->displayFormat = HX_("%v",b1,20,00,00);
HXLINE(  58)			option->maxValue = 6;
            		}
HXLINE(  60)		this->optionsArray->push(option);
HXLINE(  63)		 ::GameplayOption option1 =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Playback Rate",05,cb,36,2d),HX_("songspeed",92,6f,b6,1d),HX_("float",9c,c5,96,02),1,null());
HXLINE(  64)		option1->scrollSpeed = ( (Float)(1) );
HXLINE(  65)		option1->minValue = ((Float)0.5);
HXLINE(  66)		option1->maxValue = ((Float)3.0);
HXLINE(  67)		option1->changeValue = ((Float)0.05);
HXLINE(  68)		option1->displayFormat = HX_("%vX",87,7a,1c,00);
HXLINE(  69)		option1->decimals = 2;
HXLINE(  70)		this->optionsArray->push(option1);
HXLINE(  73)		 ::GameplayOption option2 =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Health Gain Multiplier",1e,c6,e7,2f),HX_("healthgain",1b,97,1b,16),HX_("float",9c,c5,96,02),1,null());
HXLINE(  74)		option2->scrollSpeed = ((Float)2.5);
HXLINE(  75)		option2->minValue = 0;
HXLINE(  76)		option2->maxValue = 5;
HXLINE(  77)		option2->changeValue = ((Float)0.1);
HXLINE(  78)		option2->displayFormat = HX_("%vX",87,7a,1c,00);
HXLINE(  79)		this->optionsArray->push(option2);
HXLINE(  81)		 ::GameplayOption option3 =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Health Loss Multiplier",3a,7f,8e,c0),HX_("healthloss",7f,50,74,19),HX_("float",9c,c5,96,02),1,null());
HXLINE(  82)		option3->scrollSpeed = ((Float)2.5);
HXLINE(  83)		option3->minValue = ((Float)0.5);
HXLINE(  84)		option3->maxValue = 5;
HXLINE(  85)		option3->changeValue = ((Float)0.1);
HXLINE(  86)		option3->displayFormat = HX_("%vX",87,7a,1c,00);
HXLINE(  87)		this->optionsArray->push(option3);
HXLINE(  89)		 ::GameplayOption option4 =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Instakill on Miss",76,d5,a0,bc),HX_("instakill",f9,72,23,49),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  90)		this->optionsArray->push(option4);
HXLINE(  92)		 ::GameplayOption option5 =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Practice Mode",e8,58,72,66),HX_("practice",bb,00,e7,a0),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  93)		this->optionsArray->push(option5);
HXLINE(  95)		 ::GameplayOption option6 =  ::GameplayOption_obj::__alloc( HX_CTX ,HX_("Botplay",5b,23,fb,2e),HX_("botplay",7b,fb,a9,61),HX_("bool",2a,84,1b,41),false,null());
HXLINE(  96)		this->optionsArray->push(option6);
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayChangersSubstate_obj,getOptions,(void))

 ::GameplayOption GameplayChangersSubstate_obj::getOptionByName(::String name){
            	HX_STACKFRAME(&_hx_pos_96606cf9b666a443_100_getOptionByName)
HXLINE( 101)		{
HXLINE( 101)			int _g = 0;
HXDLIN( 101)			::cpp::VirtualArray _g1 = this->optionsArray;
HXDLIN( 101)			while((_g < _g1->get_length())){
HXLINE( 101)				 ::Dynamic i = _g1->__get(_g);
HXDLIN( 101)				_g = (_g + 1);
HXLINE( 103)				 ::GameplayOption opt = ( ( ::GameplayOption)(i) );
HXLINE( 104)				if ((opt->name == name)) {
HXLINE( 105)					return opt;
            				}
            			}
            		}
HXLINE( 107)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameplayChangersSubstate_obj,getOptionByName,return )

void GameplayChangersSubstate_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_96606cf9b666a443_169_update)
HXLINE( 170)		if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 172)			this->changeSelection(-1);
            		}
HXLINE( 174)		if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 176)			this->changeSelection(1);
            		}
HXLINE( 179)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 180)			this->close();
HXLINE( 181)			::ClientPrefs_obj::saveSettings();
HXLINE( 182)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 182)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 185)		if ((this->nextAccept <= 0)) {
HXLINE( 187)			bool usesCheckbox = true;
HXLINE( 188)			if ((this->curOption->get_type() != HX_("bool",2a,84,1b,41))) {
HXLINE( 190)				usesCheckbox = false;
            			}
HXLINE( 193)			if (usesCheckbox) {
HXLINE( 195)				if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 197)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 197)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 198)					 ::GameplayOption _hx_tmp1 = this->curOption;
HXDLIN( 198)					 ::Dynamic _hx_tmp2;
HXDLIN( 198)					if (::hx::IsEq( this->curOption->getValue(),true )) {
HXLINE( 198)						_hx_tmp2 = false;
            					}
            					else {
HXLINE( 198)						_hx_tmp2 = true;
            					}
HXDLIN( 198)					_hx_tmp1->setValue(_hx_tmp2);
HXLINE( 199)					this->curOption->change();
HXLINE( 200)					this->reloadCheckboxes();
            				}
            			}
            			else {
HXLINE( 203)				bool _hx_tmp;
HXDLIN( 203)				if (!(::PlayerSettings_obj::player1->controls->_ui_left->check())) {
HXLINE( 203)					_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_right->check();
            				}
            				else {
HXLINE( 203)					_hx_tmp = true;
            				}
HXDLIN( 203)				if (_hx_tmp) {
HXLINE( 204)					bool pressed;
HXDLIN( 204)					if (!(::PlayerSettings_obj::player1->controls->_ui_leftP->check())) {
HXLINE( 204)						pressed = ::PlayerSettings_obj::player1->controls->_ui_rightP->check();
            					}
            					else {
HXLINE( 204)						pressed = true;
            					}
HXLINE( 205)					bool _hx_tmp;
HXDLIN( 205)					if (!((this->holdTime > ((Float)0.5)))) {
HXLINE( 205)						_hx_tmp = pressed;
            					}
            					else {
HXLINE( 205)						_hx_tmp = true;
            					}
HXDLIN( 205)					if (_hx_tmp) {
HXLINE( 206)						if (pressed) {
HXLINE( 207)							 ::Dynamic add = null();
HXLINE( 208)							if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 209)								if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 209)									add = -(this->curOption->changeValue);
            								}
            								else {
HXLINE( 209)									add = this->curOption->changeValue;
            								}
            							}
HXLINE( 212)							::String _hx_switch_0 = this->curOption->get_type();
            							if (  (_hx_switch_0==HX_("float",9c,c5,96,02)) ||  (_hx_switch_0==HX_("int",ef,0c,50,00)) ||  (_hx_switch_0==HX_("percent",c5,aa,da,78)) ){
HXLINE( 215)								this->holdValue = ( (Float)((this->curOption->getValue() + add)) );
HXLINE( 216)								if (::hx::IsLess( this->holdValue,this->curOption->minValue )) {
HXLINE( 216)									this->holdValue = ( (Float)(this->curOption->minValue) );
            								}
            								else {
HXLINE( 217)									if (::hx::IsGreater( this->holdValue,this->curOption->maxValue )) {
HXLINE( 217)										this->holdValue = ( (Float)(this->curOption->maxValue) );
            									}
            								}
HXLINE( 219)								::String _hx_switch_1 = this->curOption->get_type();
            								if (  (_hx_switch_1==HX_("int",ef,0c,50,00)) ){
HXLINE( 222)									this->holdValue = ( (Float)(::Math_obj::round(this->holdValue)) );
HXLINE( 223)									this->curOption->setValue(this->holdValue);
HXLINE( 221)									goto _hx_goto_7;
            								}
            								if (  (_hx_switch_1==HX_("float",9c,c5,96,02)) ||  (_hx_switch_1==HX_("percent",c5,aa,da,78)) ){
HXLINE( 226)									this->holdValue = ::flixel::math::FlxMath_obj::roundDecimal(this->holdValue,this->curOption->decimals);
HXLINE( 227)									this->curOption->setValue(this->holdValue);
HXLINE( 225)									goto _hx_goto_7;
            								}
            								_hx_goto_7:;
HXLINE( 214)								goto _hx_goto_6;
            							}
            							if (  (_hx_switch_0==HX_("string",d1,28,30,11)) ){
HXLINE( 231)								int num = this->curOption->curOption;
HXLINE( 232)								if (::PlayerSettings_obj::player1->controls->_ui_leftP->check()) {
HXLINE( 232)									num = (num - 1);
            								}
            								else {
HXLINE( 233)									num = (num + 1);
            								}
HXLINE( 235)								if ((num < 0)) {
HXLINE( 236)									num = (this->curOption->options->length - 1);
            								}
            								else {
HXLINE( 237)									if ((num >= this->curOption->options->length)) {
HXLINE( 238)										num = 0;
            									}
            								}
HXLINE( 241)								this->curOption->curOption = num;
HXLINE( 242)								this->curOption->setValue(this->curOption->options->__get(num));
HXLINE( 244)								if ((this->curOption->name == HX_("Scroll Type",ad,1f,97,3f))) {
HXLINE( 246)									 ::GameplayOption oOption = this->getOptionByName(HX_("Scroll Speed",34,bf,42,cb));
HXLINE( 247)									if (::hx::IsNotNull( oOption )) {
HXLINE( 249)										if (::hx::IsEq( this->curOption->getValue(),HX_("constant",64,c1,9d,a5) )) {
HXLINE( 251)											oOption->displayFormat = HX_("%v",b1,20,00,00);
HXLINE( 252)											oOption->maxValue = 6;
            										}
            										else {
HXLINE( 256)											oOption->displayFormat = HX_("%vX",87,7a,1c,00);
HXLINE( 257)											oOption->maxValue = 3;
HXLINE( 258)											if (::hx::IsGreater( oOption->getValue(),3 )) {
HXLINE( 258)												oOption->setValue(3);
            											}
            										}
HXLINE( 260)										this->updateTextFrom(oOption);
            									}
            								}
HXLINE( 230)								goto _hx_goto_6;
            							}
            							_hx_goto_6:;
HXLINE( 265)							this->updateTextFrom(this->curOption);
HXLINE( 266)							this->curOption->change();
HXLINE( 267)							 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 267)							_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            						}
            						else {
HXLINE( 268)							if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 269)								 ::Dynamic _hx_tmp = this->curOption->minValue;
HXDLIN( 269)								 ::Dynamic _hx_tmp1 = this->curOption->maxValue;
HXDLIN( 269)								Float _hx_tmp2 = this->holdValue;
HXDLIN( 269)								Float _hx_tmp3 = (this->curOption->scrollSpeed * elapsed);
HXDLIN( 269)								int _hx_tmp4;
HXDLIN( 269)								if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 269)									_hx_tmp4 = -1;
            								}
            								else {
HXLINE( 269)									_hx_tmp4 = 1;
            								}
HXDLIN( 269)								this->holdValue = ::Math_obj::max(( (Float)(_hx_tmp) ),::Math_obj::min(( (Float)(_hx_tmp1) ),(_hx_tmp2 + (_hx_tmp3 * ( (Float)(_hx_tmp4) )))));
HXLINE( 271)								::String _hx_switch_2 = this->curOption->get_type();
            								if (  (_hx_switch_2==HX_("int",ef,0c,50,00)) ){
HXLINE( 274)									this->curOption->setValue(::Math_obj::round(this->holdValue));
HXDLIN( 274)									goto _hx_goto_8;
            								}
            								if (  (_hx_switch_2==HX_("float",9c,c5,96,02)) ||  (_hx_switch_2==HX_("percent",c5,aa,da,78)) ){
HXLINE( 277)									Float blah = ::Math_obj::max(( (Float)(this->curOption->minValue) ),::Math_obj::min(( (Float)(this->curOption->maxValue) ),(( (Float)((this->holdValue + this->curOption->changeValue)) ) - ::hx::Mod(this->holdValue,this->curOption->changeValue))));
HXLINE( 278)									 ::GameplayOption _hx_tmp = this->curOption;
HXDLIN( 278)									_hx_tmp->setValue(::flixel::math::FlxMath_obj::roundDecimal(blah,this->curOption->decimals));
HXLINE( 276)									goto _hx_goto_8;
            								}
            								_hx_goto_8:;
HXLINE( 280)								this->updateTextFrom(this->curOption);
HXLINE( 281)								this->curOption->change();
            							}
            						}
            					}
HXLINE( 285)					if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 286)						 ::GameplayChangersSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 286)						_hx_tmp->holdTime = (_hx_tmp->holdTime + elapsed);
            					}
            				}
            				else {
HXLINE( 288)					bool _hx_tmp;
HXDLIN( 288)					if (!(::PlayerSettings_obj::player1->controls->_ui_leftR->check())) {
HXLINE( 288)						_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightR->check();
            					}
            					else {
HXLINE( 288)						_hx_tmp = true;
            					}
HXDLIN( 288)					if (_hx_tmp) {
HXLINE( 289)						this->clearHold();
            					}
            				}
            			}
HXLINE( 293)			if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 295)				{
HXLINE( 295)					int _g = 0;
HXDLIN( 295)					int _g1 = this->optionsArray->get_length();
HXDLIN( 295)					while((_g < _g1)){
HXLINE( 295)						_g = (_g + 1);
HXDLIN( 295)						int i = (_g - 1);
HXLINE( 297)						 ::GameplayOption leOption = ( ( ::GameplayOption)(this->optionsArray->__get(i)) );
HXLINE( 298)						leOption->setValue(leOption->defaultValue);
HXLINE( 299)						if ((leOption->get_type() != HX_("bool",2a,84,1b,41))) {
HXLINE( 301)							if ((leOption->get_type() == HX_("string",d1,28,30,11))) {
HXLINE( 303)								::Array< ::String > leOption1 = leOption->options;
HXDLIN( 303)								leOption->curOption = leOption1->indexOf(leOption->getValue(),null());
            							}
HXLINE( 305)							this->updateTextFrom(leOption);
            						}
HXLINE( 308)						if ((leOption->name == HX_("Scroll Speed",34,bf,42,cb))) {
HXLINE( 310)							leOption->displayFormat = HX_("%vX",87,7a,1c,00);
HXLINE( 311)							leOption->maxValue = 3;
HXLINE( 312)							if (::hx::IsGreater( leOption->getValue(),3 )) {
HXLINE( 314)								leOption->setValue(3);
            							}
HXLINE( 316)							this->updateTextFrom(leOption);
            						}
HXLINE( 318)						leOption->change();
            					}
            				}
HXLINE( 320)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 320)				_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 321)				this->reloadCheckboxes();
            			}
            		}
HXLINE( 325)		if ((this->nextAccept > 0)) {
HXLINE( 326)			 ::GameplayChangersSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 326)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 328)		this->super::update(elapsed);
            	}


void GameplayChangersSubstate_obj::updateTextFrom( ::GameplayOption option){
            	HX_STACKFRAME(&_hx_pos_96606cf9b666a443_331_updateTextFrom)
HXLINE( 332)		::String text = option->displayFormat;
HXLINE( 333)		 ::Dynamic val = option->getValue();
HXLINE( 334)		if ((option->get_type() == HX_("percent",c5,aa,da,78))) {
HXLINE( 334)			val = (val * 100);
            		}
HXLINE( 335)		 ::Dynamic def = option->defaultValue;
HXLINE( 336)		option->set_text(::StringTools_obj::replace(::StringTools_obj::replace(text,HX_("%v",b1,20,00,00),( (::String)(val) )),HX_("%d",9f,20,00,00),( (::String)(def) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameplayChangersSubstate_obj,updateTextFrom,(void))

void GameplayChangersSubstate_obj::clearHold(){
            	HX_STACKFRAME(&_hx_pos_96606cf9b666a443_340_clearHold)
HXLINE( 341)		if ((this->holdTime > ((Float)0.5))) {
HXLINE( 342)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 342)			_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 344)		this->holdTime = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayChangersSubstate_obj,clearHold,(void))

void GameplayChangersSubstate_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_96606cf9b666a443_348_changeSelection)
HXLINE( 349)		 ::GameplayChangersSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 349)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 350)		if ((this->curSelected < 0)) {
HXLINE( 351)			this->curSelected = (this->optionsArray->get_length() - 1);
            		}
HXLINE( 352)		if ((this->curSelected >= this->optionsArray->get_length())) {
HXLINE( 353)			this->curSelected = 0;
            		}
HXLINE( 355)		int bullShit = 0;
HXLINE( 357)		{
HXLINE( 357)			int _g = 0;
HXDLIN( 357)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 357)			while((_g < _g1->length)){
HXLINE( 357)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 357)				_g = (_g + 1);
HXLINE( 358)				item->targetY = (bullShit - this->curSelected);
HXLINE( 359)				bullShit = (bullShit + 1);
HXLINE( 361)				item->set_alpha(((Float)0.6));
HXLINE( 362)				if ((item->targetY == 0)) {
HXLINE( 363)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 366)		{
HXLINE( 366)			 ::Dynamic filter = null();
HXDLIN( 366)			 ::flixel::group::FlxTypedGroupIterator text =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->grpTexts->members,filter);
HXDLIN( 366)			while(text->hasNext()){
HXLINE( 366)				 ::AttachedText text1 = text->next().StaticCast<  ::AttachedText >();
HXLINE( 367)				text1->set_alpha(((Float)0.6));
HXLINE( 368)				if ((text1->ID == this->curSelected)) {
HXLINE( 369)					text1->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 372)		this->curOption = ( ( ::GameplayOption)(this->optionsArray->__get(this->curSelected)) );
HXLINE( 373)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 373)		_hx_tmp1->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameplayChangersSubstate_obj,changeSelection,(void))

void GameplayChangersSubstate_obj::reloadCheckboxes(){
            	HX_GC_STACKFRAME(&_hx_pos_96606cf9b666a443_377_reloadCheckboxes)
HXDLIN( 377)		 ::Dynamic filter = null();
HXDLIN( 377)		 ::flixel::group::FlxTypedGroupIterator checkbox =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->checkboxGroup->members,filter);
HXDLIN( 377)		while(checkbox->hasNext()){
HXDLIN( 377)			 ::CheckboxThingie checkbox1 = checkbox->next().StaticCast<  ::CheckboxThingie >();
HXLINE( 378)			checkbox1->set_daValue(::hx::IsEq( this->optionsArray->__get(checkbox1->ID)->__Field(HX_("getValue",fb,8e,8f,91),::hx::paccDynamic)(),true ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameplayChangersSubstate_obj,reloadCheckboxes,(void))


::hx::ObjectPtr< GameplayChangersSubstate_obj > GameplayChangersSubstate_obj::__new() {
	::hx::ObjectPtr< GameplayChangersSubstate_obj > __this = new GameplayChangersSubstate_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GameplayChangersSubstate_obj > GameplayChangersSubstate_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GameplayChangersSubstate_obj *__this = (GameplayChangersSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameplayChangersSubstate_obj), true, "GameplayChangersSubstate"));
	*(void **)__this = GameplayChangersSubstate_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GameplayChangersSubstate_obj::GameplayChangersSubstate_obj()
{
}

void GameplayChangersSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameplayChangersSubstate);
	HX_MARK_MEMBER_NAME(curOption,"curOption");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(optionsArray,"optionsArray");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(checkboxGroup,"checkboxGroup");
	HX_MARK_MEMBER_NAME(grpTexts,"grpTexts");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(holdTime,"holdTime");
	HX_MARK_MEMBER_NAME(holdValue,"holdValue");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameplayChangersSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curOption,"curOption");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(optionsArray,"optionsArray");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(checkboxGroup,"checkboxGroup");
	HX_VISIT_MEMBER_NAME(grpTexts,"grpTexts");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(holdTime,"holdTime");
	HX_VISIT_MEMBER_NAME(holdValue,"holdValue");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GameplayChangersSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { return ::hx::Val( grpTexts ); }
		if (HX_FIELD_EQ(inName,"holdTime") ) { return ::hx::Val( holdTime ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { return ::hx::Val( curOption ); }
		if (HX_FIELD_EQ(inName,"holdValue") ) { return ::hx::Val( holdValue ); }
		if (HX_FIELD_EQ(inName,"clearHold") ) { return ::hx::Val( clearHold_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"getOptions") ) { return ::hx::Val( getOptions_dyn() ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"optionsArray") ) { return ::hx::Val( optionsArray ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkboxGroup") ) { return ::hx::Val( checkboxGroup ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateTextFrom") ) { return ::hx::Val( updateTextFrom_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getOptionByName") ) { return ::hx::Val( getOptionByName_dyn() ); }
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"reloadCheckboxes") ) { return ::hx::Val( reloadCheckboxes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GameplayChangersSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { grpTexts=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTime") ) { holdTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { curOption=inValue.Cast<  ::GameplayOption >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdValue") ) { holdValue=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"optionsArray") ) { optionsArray=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkboxGroup") ) { checkboxGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameplayChangersSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curOption",15,ed,07,9c));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("optionsArray",5b,b5,f1,e8));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("checkboxGroup",fc,3d,bc,23));
	outFields->push(HX_("grpTexts",01,f1,99,f0));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("holdTime",ec,cc,bf,3e));
	outFields->push(HX_("holdValue",b2,41,96,ca));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameplayChangersSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::GameplayOption */ ,(int)offsetof(GameplayChangersSubstate_obj,curOption),HX_("curOption",15,ed,07,9c)},
	{::hx::fsInt,(int)offsetof(GameplayChangersSubstate_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(GameplayChangersSubstate_obj,optionsArray),HX_("optionsArray",5b,b5,f1,e8)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GameplayChangersSubstate_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GameplayChangersSubstate_obj,checkboxGroup),HX_("checkboxGroup",fc,3d,bc,23)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(GameplayChangersSubstate_obj,grpTexts),HX_("grpTexts",01,f1,99,f0)},
	{::hx::fsInt,(int)offsetof(GameplayChangersSubstate_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsFloat,(int)offsetof(GameplayChangersSubstate_obj,holdTime),HX_("holdTime",ec,cc,bf,3e)},
	{::hx::fsFloat,(int)offsetof(GameplayChangersSubstate_obj,holdValue),HX_("holdValue",b2,41,96,ca)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GameplayChangersSubstate_obj_sStaticStorageInfo = 0;
#endif

static ::String GameplayChangersSubstate_obj_sMemberFields[] = {
	HX_("curOption",15,ed,07,9c),
	HX_("curSelected",fb,eb,ab,32),
	HX_("optionsArray",5b,b5,f1,e8),
	HX_("grpOptions",f9,45,d8,00),
	HX_("checkboxGroup",fc,3d,bc,23),
	HX_("grpTexts",01,f1,99,f0),
	HX_("getOptions",68,b9,5f,2f),
	HX_("getOptionByName",cd,4e,f7,9a),
	HX_("nextAccept",5b,44,38,c0),
	HX_("holdTime",ec,cc,bf,3e),
	HX_("holdValue",b2,41,96,ca),
	HX_("update",09,86,05,87),
	HX_("updateTextFrom",e0,eb,e7,7b),
	HX_("clearHold",6c,b1,d3,b8),
	HX_("changeSelection",bc,98,b5,48),
	HX_("reloadCheckboxes",2a,e2,2a,45),
	::String(null()) };

::hx::Class GameplayChangersSubstate_obj::__mClass;

void GameplayChangersSubstate_obj::__register()
{
	GameplayChangersSubstate_obj _hx_dummy;
	GameplayChangersSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GameplayChangersSubstate",08,ea,03,24);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameplayChangersSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameplayChangersSubstate_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameplayChangersSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameplayChangersSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

