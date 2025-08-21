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
#ifndef INCLUDED_Character
#include <Character.h>
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
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
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
#ifndef INCLUDED_options_BaseOptionsMenu
#include <options/BaseOptionsMenu.h>
#endif
#ifndef INCLUDED_options_Option
#include <options/Option.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_11861b212311743c_30_new,"options.BaseOptionsMenu","new",0x99505d4e,"options.BaseOptionsMenu.new","options/BaseOptionsMenu.hx",30,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_130_addOption,"options.BaseOptionsMenu","addOption",0xc780fbe4,"options.BaseOptionsMenu.addOption","options/BaseOptionsMenu.hx",130,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_139_update,"options.BaseOptionsMenu","update",0xdab941db,"options.BaseOptionsMenu.update","options/BaseOptionsMenu.hx",139,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_275_updateTextFrom,"options.BaseOptionsMenu","updateTextFrom",0x9c56c9b2,"options.BaseOptionsMenu.updateTextFrom","options/BaseOptionsMenu.hx",275,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_284_clearHold,"options.BaseOptionsMenu","clearHold",0x9cb5a4da,"options.BaseOptionsMenu.clearHold","options/BaseOptionsMenu.hx",284,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_292_changeSelection,"options.BaseOptionsMenu","changeSelection",0x8948d2aa,"options.BaseOptionsMenu.changeSelection","options/BaseOptionsMenu.hx",292,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_334_reloadBoyfriend,"options.BaseOptionsMenu","reloadBoyfriend",0xd0203cbf,"options.BaseOptionsMenu.reloadBoyfriend","options/BaseOptionsMenu.hx",334,0x82de5a23)
HX_LOCAL_STACK_FRAME(_hx_pos_11861b212311743c_352_reloadCheckboxes,"options.BaseOptionsMenu","reloadCheckboxes",0x856a587c,"options.BaseOptionsMenu.reloadCheckboxes","options/BaseOptionsMenu.hx",352,0x82de5a23)
namespace options{

void BaseOptionsMenu_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_11861b212311743c_30_new)
HXLINE( 137)		this->holdValue = ((Float)0);
HXLINE( 136)		this->holdTime = ((Float)0);
HXLINE( 135)		this->nextAccept = 5;
HXLINE(  40)		this->boyfriend = null();
HXLINE(  33)		this->curSelected = 0;
HXLINE(  32)		this->curOption = null();
HXLINE(  49)		super::__construct();
HXLINE(  53)		if (::hx::IsNull( this->title )) {
HXLINE(  53)			this->title = HX_("Options",3e,5b,4f,ad);
            		}
HXLINE(  54)		if (::hx::IsNull( this->rpcTitle )) {
HXLINE(  54)			this->rpcTitle = HX_("Options Menu",e1,25,4c,98);
            		}
HXLINE(  57)		::DiscordClient_obj::changePresence(this->rpcTitle,null(),null(),null(),null());
HXLINE(  60)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  60)		::String library = null();
HXDLIN(  60)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("menuBGMagenta",65,29,40,00),library);
HXDLIN(  60)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE(  61)		bg1->set_color(-1412611);
HXLINE(  62)		{
HXLINE(  62)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  62)			bool _hx_tmp;
HXDLIN(  62)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  62)					_hx_tmp = true;
            				}
            				break;
            				default:{
HXLINE(  62)					_hx_tmp = false;
            				}
            			}
HXDLIN(  62)			if (_hx_tmp) {
HXLINE(  62)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  62)				bg1->set_x(((( (Float)(_hx_tmp) ) - bg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  62)			bool _hx_tmp1;
HXDLIN(  62)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  62)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE(  62)					_hx_tmp1 = false;
            				}
            			}
HXDLIN(  62)			if (_hx_tmp1) {
HXLINE(  62)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  62)				bg1->set_y(((( (Float)(_hx_tmp) ) - bg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  63)		bg1->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  64)		this->add(bg1);
HXLINE(  67)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  68)		this->add(this->grpOptions);
HXLINE(  70)		this->grpTexts =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  71)		this->add(this->grpTexts);
HXLINE(  73)		this->checkboxGroup =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  74)		this->add(this->checkboxGroup);
HXLINE(  76)		this->descBox =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(1,1,-16777216,null(),null());
HXLINE(  77)		this->descBox->set_alpha(((Float)0.6));
HXLINE(  78)		this->add(this->descBox);
HXLINE(  80)		 ::Alphabet titleText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(75) ),( (Float)(40) ),this->title,true);
HXLINE(  81)		titleText->set_scaleX(((Float)0.6));
HXLINE(  82)		titleText->set_scaleY(((Float)0.6));
HXLINE(  83)		titleText->set_alpha(((Float)0.4));
HXLINE(  84)		this->add(titleText);
HXLINE(  86)		this->descText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,50,600,1180,HX_("",00,00,00,00),32,null());
HXLINE(  87)		 ::flixel::text::FlxText _hx_tmp2 = this->descText;
HXDLIN(  87)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  87)		::String _hx_tmp3;
HXDLIN(  87)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  87)			_hx_tmp3 = file;
            		}
            		else {
HXLINE(  87)			_hx_tmp3 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  87)		_hx_tmp2->setFormat(_hx_tmp3,32,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  88)		this->descText->scrollFactor->set(null(),null());
HXLINE(  89)		this->descText->set_borderSize(((Float)2.4));
HXLINE(  90)		this->add(this->descText);
HXLINE(  92)		{
HXLINE(  92)			int _g = 0;
HXDLIN(  92)			int _g1 = this->optionsArray->length;
HXDLIN(  92)			while((_g < _g1)){
HXLINE(  92)				_g = (_g + 1);
HXDLIN(  92)				int i = (_g - 1);
HXLINE(  94)				 ::Alphabet optionText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(290) ),( (Float)(260) ),this->optionsArray->__get(i).StaticCast<  ::options::Option >()->name,false);
HXLINE(  95)				optionText->isMenuItem = true;
HXLINE(  98)				optionText->targetY = i;
HXLINE(  99)				this->grpOptions->add(optionText).StaticCast<  ::Alphabet >();
HXLINE( 101)				if ((this->optionsArray->__get(i).StaticCast<  ::options::Option >()->get_type() == HX_("bool",2a,84,1b,41))) {
HXLINE( 102)					Float checkbox = (optionText->x - ( (Float)(105) ));
HXDLIN( 102)					Float optionText1 = optionText->y;
HXDLIN( 102)					 ::CheckboxThingie checkbox1 =  ::CheckboxThingie_obj::__alloc( HX_CTX ,checkbox,optionText1,::hx::IsEq( this->optionsArray->__get(i).StaticCast<  ::options::Option >()->getValue(),true ));
HXLINE( 103)					checkbox1->sprTracker = optionText;
HXLINE( 104)					checkbox1->ID = i;
HXLINE( 105)					this->checkboxGroup->add(checkbox1).StaticCast<  ::CheckboxThingie >();
            				}
            				else {
HXLINE( 107)					optionText->set_x((optionText->x - ( (Float)(80) )));
HXLINE( 108)					 ::flixel::math::FlxPoint fh = optionText->startPosition;
HXDLIN( 108)					fh->set_x((fh->x - ( (Float)(80) )));
HXLINE( 110)					::String valueText = (HX_("",00,00,00,00) + ::Std_obj::string(this->optionsArray->__get(i).StaticCast<  ::options::Option >()->getValue()));
HXDLIN( 110)					 ::AttachedText valueText1 =  ::AttachedText_obj::__alloc( HX_CTX ,valueText,(optionText->get_width() + 80),null(),null(),null());
HXLINE( 111)					valueText1->sprTracker = optionText;
HXLINE( 112)					valueText1->copyAlpha = true;
HXLINE( 113)					valueText1->ID = i;
HXLINE( 114)					this->grpTexts->add(valueText1).StaticCast<  ::AttachedText >();
HXLINE( 115)					this->optionsArray->__get(i).StaticCast<  ::options::Option >()->setChild(valueText1);
            				}
HXLINE( 119)				bool _hx_tmp;
HXDLIN( 119)				if (this->optionsArray->__get(i).StaticCast<  ::options::Option >()->showBoyfriend) {
HXLINE( 119)					_hx_tmp = ::hx::IsNull( this->boyfriend );
            				}
            				else {
HXLINE( 119)					_hx_tmp = false;
            				}
HXDLIN( 119)				if (_hx_tmp) {
HXLINE( 121)					this->reloadBoyfriend();
            				}
HXLINE( 123)				this->updateTextFrom(this->optionsArray->__get(i).StaticCast<  ::options::Option >());
            			}
            		}
HXLINE( 126)		this->changeSelection(null());
HXLINE( 127)		this->reloadCheckboxes();
            	}

Dynamic BaseOptionsMenu_obj::__CreateEmpty() { return new BaseOptionsMenu_obj; }

void *BaseOptionsMenu_obj::_hx_vtable = 0;

Dynamic BaseOptionsMenu_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BaseOptionsMenu_obj > _hx_result = new BaseOptionsMenu_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BaseOptionsMenu_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x0cc50116) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0cc50116;
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

void BaseOptionsMenu_obj::addOption( ::options::Option option){
            	HX_STACKFRAME(&_hx_pos_11861b212311743c_130_addOption)
HXLINE( 131)		bool _hx_tmp;
HXDLIN( 131)		if (::hx::IsNotNull( this->optionsArray )) {
HXLINE( 131)			_hx_tmp = (this->optionsArray->length < 1);
            		}
            		else {
HXLINE( 131)			_hx_tmp = true;
            		}
HXDLIN( 131)		if (_hx_tmp) {
HXLINE( 131)			this->optionsArray = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 132)		this->optionsArray->push(option);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseOptionsMenu_obj,addOption,(void))

void BaseOptionsMenu_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_11861b212311743c_139_update)
HXLINE( 140)		if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 142)			this->changeSelection(-1);
            		}
HXLINE( 144)		if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 146)			this->changeSelection(1);
            		}
HXLINE( 150)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 151)			this->close();
HXLINE( 152)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 152)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 155)		if ((this->nextAccept <= 0)) {
HXLINE( 157)			bool usesCheckbox = true;
HXLINE( 158)			if ((this->curOption->get_type() != HX_("bool",2a,84,1b,41))) {
HXLINE( 160)				usesCheckbox = false;
            			}
HXLINE( 163)			if (usesCheckbox) {
HXLINE( 165)				if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 167)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 167)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 168)					 ::options::Option _hx_tmp1 = this->curOption;
HXDLIN( 168)					 ::Dynamic _hx_tmp2;
HXDLIN( 168)					if (::hx::IsEq( this->curOption->getValue(),true )) {
HXLINE( 168)						_hx_tmp2 = false;
            					}
            					else {
HXLINE( 168)						_hx_tmp2 = true;
            					}
HXDLIN( 168)					_hx_tmp1->setValue(_hx_tmp2);
HXLINE( 169)					this->curOption->change();
HXLINE( 170)					this->reloadCheckboxes();
            				}
            			}
            			else {
HXLINE( 173)				bool _hx_tmp;
HXDLIN( 173)				if (!(::PlayerSettings_obj::player1->controls->_ui_left->check())) {
HXLINE( 173)					_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_right->check();
            				}
            				else {
HXLINE( 173)					_hx_tmp = true;
            				}
HXDLIN( 173)				if (_hx_tmp) {
HXLINE( 174)					bool pressed;
HXDLIN( 174)					if (!(::PlayerSettings_obj::player1->controls->_ui_leftP->check())) {
HXLINE( 174)						pressed = ::PlayerSettings_obj::player1->controls->_ui_rightP->check();
            					}
            					else {
HXLINE( 174)						pressed = true;
            					}
HXLINE( 175)					bool _hx_tmp;
HXDLIN( 175)					if (!((this->holdTime > ((Float)0.5)))) {
HXLINE( 175)						_hx_tmp = pressed;
            					}
            					else {
HXLINE( 175)						_hx_tmp = true;
            					}
HXDLIN( 175)					if (_hx_tmp) {
HXLINE( 176)						if (pressed) {
HXLINE( 177)							 ::Dynamic add = null();
HXLINE( 178)							if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 179)								if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 179)									add = -(this->curOption->changeValue);
            								}
            								else {
HXLINE( 179)									add = this->curOption->changeValue;
            								}
            							}
HXLINE( 182)							::String _hx_switch_0 = this->curOption->get_type();
            							if (  (_hx_switch_0==HX_("float",9c,c5,96,02)) ||  (_hx_switch_0==HX_("int",ef,0c,50,00)) ||  (_hx_switch_0==HX_("percent",c5,aa,da,78)) ){
HXLINE( 185)								this->holdValue = ( (Float)((this->curOption->getValue() + add)) );
HXLINE( 186)								if (::hx::IsLess( this->holdValue,this->curOption->minValue )) {
HXLINE( 186)									this->holdValue = ( (Float)(this->curOption->minValue) );
            								}
            								else {
HXLINE( 187)									if (::hx::IsGreater( this->holdValue,this->curOption->maxValue )) {
HXLINE( 187)										this->holdValue = ( (Float)(this->curOption->maxValue) );
            									}
            								}
HXLINE( 189)								::String _hx_switch_1 = this->curOption->get_type();
            								if (  (_hx_switch_1==HX_("int",ef,0c,50,00)) ){
HXLINE( 192)									this->holdValue = ( (Float)(::Math_obj::round(this->holdValue)) );
HXLINE( 193)									this->curOption->setValue(this->holdValue);
HXLINE( 191)									goto _hx_goto_4;
            								}
            								if (  (_hx_switch_1==HX_("float",9c,c5,96,02)) ||  (_hx_switch_1==HX_("percent",c5,aa,da,78)) ){
HXLINE( 196)									this->holdValue = ::flixel::math::FlxMath_obj::roundDecimal(this->holdValue,this->curOption->decimals);
HXLINE( 197)									this->curOption->setValue(this->holdValue);
HXLINE( 195)									goto _hx_goto_4;
            								}
            								_hx_goto_4:;
HXLINE( 184)								goto _hx_goto_3;
            							}
            							if (  (_hx_switch_0==HX_("string",d1,28,30,11)) ){
HXLINE( 201)								int num = this->curOption->curOption;
HXLINE( 202)								if (::PlayerSettings_obj::player1->controls->_ui_leftP->check()) {
HXLINE( 202)									num = (num - 1);
            								}
            								else {
HXLINE( 203)									num = (num + 1);
            								}
HXLINE( 205)								if ((num < 0)) {
HXLINE( 206)									num = (this->curOption->options->length - 1);
            								}
            								else {
HXLINE( 207)									if ((num >= this->curOption->options->length)) {
HXLINE( 208)										num = 0;
            									}
            								}
HXLINE( 211)								this->curOption->curOption = num;
HXLINE( 212)								this->curOption->setValue(this->curOption->options->__get(num));
HXLINE( 200)								goto _hx_goto_3;
            							}
            							_hx_goto_3:;
HXLINE( 215)							this->updateTextFrom(this->curOption);
HXLINE( 216)							this->curOption->change();
HXLINE( 217)							 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 217)							_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            						}
            						else {
HXLINE( 218)							if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 219)								 ::options::BaseOptionsMenu _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 219)								Float _hx_tmp1 = _hx_tmp->holdValue;
HXDLIN( 219)								Float _hx_tmp2 = (this->curOption->scrollSpeed * elapsed);
HXDLIN( 219)								int _hx_tmp3;
HXDLIN( 219)								if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 219)									_hx_tmp3 = -1;
            								}
            								else {
HXLINE( 219)									_hx_tmp3 = 1;
            								}
HXDLIN( 219)								_hx_tmp->holdValue = (_hx_tmp1 + (_hx_tmp2 * ( (Float)(_hx_tmp3) )));
HXLINE( 220)								if (::hx::IsLess( this->holdValue,this->curOption->minValue )) {
HXLINE( 220)									this->holdValue = ( (Float)(this->curOption->minValue) );
            								}
            								else {
HXLINE( 221)									if (::hx::IsGreater( this->holdValue,this->curOption->maxValue )) {
HXLINE( 221)										this->holdValue = ( (Float)(this->curOption->maxValue) );
            									}
            								}
HXLINE( 223)								::String _hx_switch_2 = this->curOption->get_type();
            								if (  (_hx_switch_2==HX_("int",ef,0c,50,00)) ){
HXLINE( 226)									this->curOption->setValue(::Math_obj::round(this->holdValue));
HXDLIN( 226)									goto _hx_goto_5;
            								}
            								if (  (_hx_switch_2==HX_("float",9c,c5,96,02)) ||  (_hx_switch_2==HX_("percent",c5,aa,da,78)) ){
HXLINE( 229)									 ::options::Option _hx_tmp = this->curOption;
HXDLIN( 229)									_hx_tmp->setValue(::flixel::math::FlxMath_obj::roundDecimal(this->holdValue,this->curOption->decimals));
HXDLIN( 229)									goto _hx_goto_5;
            								}
            								_hx_goto_5:;
HXLINE( 231)								this->updateTextFrom(this->curOption);
HXLINE( 232)								this->curOption->change();
            							}
            						}
            					}
HXLINE( 236)					if ((this->curOption->get_type() != HX_("string",d1,28,30,11))) {
HXLINE( 237)						 ::options::BaseOptionsMenu _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 237)						_hx_tmp->holdTime = (_hx_tmp->holdTime + elapsed);
            					}
            				}
            				else {
HXLINE( 239)					bool _hx_tmp;
HXDLIN( 239)					if (!(::PlayerSettings_obj::player1->controls->_ui_leftR->check())) {
HXLINE( 239)						_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightR->check();
            					}
            					else {
HXLINE( 239)						_hx_tmp = true;
            					}
HXDLIN( 239)					if (_hx_tmp) {
HXLINE( 240)						this->clearHold();
            					}
            				}
            			}
HXLINE( 244)			if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 246)				{
HXLINE( 246)					int _g = 0;
HXDLIN( 246)					int _g1 = this->optionsArray->length;
HXDLIN( 246)					while((_g < _g1)){
HXLINE( 246)						_g = (_g + 1);
HXDLIN( 246)						int i = (_g - 1);
HXLINE( 248)						 ::options::Option leOption = this->optionsArray->__get(i).StaticCast<  ::options::Option >();
HXLINE( 249)						leOption->setValue(leOption->defaultValue);
HXLINE( 250)						if ((leOption->get_type() != HX_("bool",2a,84,1b,41))) {
HXLINE( 252)							if ((leOption->get_type() == HX_("string",d1,28,30,11))) {
HXLINE( 254)								::Array< ::String > leOption1 = leOption->options;
HXDLIN( 254)								leOption->curOption = leOption1->indexOf(leOption->getValue(),null());
            							}
HXLINE( 256)							this->updateTextFrom(leOption);
            						}
HXLINE( 258)						leOption->change();
            					}
            				}
HXLINE( 260)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 260)				_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 261)				this->reloadCheckboxes();
            			}
            		}
HXLINE( 265)		bool _hx_tmp;
HXDLIN( 265)		if (::hx::IsNotNull( this->boyfriend )) {
HXLINE( 265)			_hx_tmp = this->boyfriend->animation->_curAnim->finished;
            		}
            		else {
HXLINE( 265)			_hx_tmp = false;
            		}
HXDLIN( 265)		if (_hx_tmp) {
HXLINE( 266)			this->boyfriend->dance();
            		}
HXLINE( 269)		if ((this->nextAccept > 0)) {
HXLINE( 270)			 ::options::BaseOptionsMenu _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 270)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 272)		this->super::update(elapsed);
            	}


void BaseOptionsMenu_obj::updateTextFrom( ::options::Option option){
            	HX_STACKFRAME(&_hx_pos_11861b212311743c_275_updateTextFrom)
HXLINE( 276)		::String text = option->displayFormat;
HXLINE( 277)		 ::Dynamic val = option->getValue();
HXLINE( 278)		if ((option->get_type() == HX_("percent",c5,aa,da,78))) {
HXLINE( 278)			val = (val * 100);
            		}
HXLINE( 279)		 ::Dynamic def = option->defaultValue;
HXLINE( 280)		option->set_text(::StringTools_obj::replace(::StringTools_obj::replace(text,HX_("%v",b1,20,00,00),( (::String)(val) )),HX_("%d",9f,20,00,00),( (::String)(def) )));
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseOptionsMenu_obj,updateTextFrom,(void))

void BaseOptionsMenu_obj::clearHold(){
            	HX_STACKFRAME(&_hx_pos_11861b212311743c_284_clearHold)
HXLINE( 285)		if ((this->holdTime > ((Float)0.5))) {
HXLINE( 286)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 286)			_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 288)		this->holdTime = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseOptionsMenu_obj,clearHold,(void))

void BaseOptionsMenu_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_11861b212311743c_292_changeSelection)
HXLINE( 293)		 ::options::BaseOptionsMenu _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 293)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 294)		if ((this->curSelected < 0)) {
HXLINE( 295)			this->curSelected = (this->optionsArray->length - 1);
            		}
HXLINE( 296)		if ((this->curSelected >= this->optionsArray->length)) {
HXLINE( 297)			this->curSelected = 0;
            		}
HXLINE( 299)		this->descText->set_text(this->optionsArray->__get(this->curSelected).StaticCast<  ::options::Option >()->description);
HXLINE( 300)		{
HXLINE( 300)			 ::flixel::text::FlxText _this = this->descText;
HXDLIN( 300)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::Y_dyn();
HXDLIN( 300)			if (::hx::IsNull( axes )) {
HXLINE( 300)				axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN( 300)			bool _hx_tmp1;
HXDLIN( 300)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE( 300)					_hx_tmp1 = true;
            				}
            				break;
            				default:{
HXLINE( 300)					_hx_tmp1 = false;
            				}
            			}
HXDLIN( 300)			if (_hx_tmp1) {
HXLINE( 300)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 300)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 300)			bool _hx_tmp2;
HXDLIN( 300)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE( 300)					_hx_tmp2 = true;
            				}
            				break;
            				default:{
HXLINE( 300)					_hx_tmp2 = false;
            				}
            			}
HXDLIN( 300)			if (_hx_tmp2) {
HXLINE( 300)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 300)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 301)		 ::flixel::text::FlxText fh = this->descText;
HXDLIN( 301)		fh->set_y((fh->y + 270));
HXLINE( 303)		int bullShit = 0;
HXLINE( 305)		{
HXLINE( 305)			int _g = 0;
HXDLIN( 305)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 305)			while((_g < _g1->length)){
HXLINE( 305)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 305)				_g = (_g + 1);
HXLINE( 306)				item->targetY = (bullShit - this->curSelected);
HXLINE( 307)				bullShit = (bullShit + 1);
HXLINE( 309)				item->set_alpha(((Float)0.6));
HXLINE( 310)				if ((item->targetY == 0)) {
HXLINE( 311)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 314)		{
HXLINE( 314)			 ::Dynamic filter = null();
HXDLIN( 314)			 ::flixel::group::FlxTypedGroupIterator text =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->grpTexts->members,filter);
HXDLIN( 314)			while(text->hasNext()){
HXLINE( 314)				 ::AttachedText text1 = text->next().StaticCast<  ::AttachedText >();
HXLINE( 315)				text1->set_alpha(((Float)0.6));
HXLINE( 316)				if ((text1->ID == this->curSelected)) {
HXLINE( 317)					text1->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 321)		this->descBox->setPosition((this->descText->x - ( (Float)(10) )),(this->descText->y - ( (Float)(10) )));
HXLINE( 322)		 ::flixel::FlxSprite _hx_tmp3 = this->descBox;
HXDLIN( 322)		int _hx_tmp4 = ::Std_obj::_hx_int((this->descText->get_width() + 20));
HXDLIN( 322)		_hx_tmp3->setGraphicSize(_hx_tmp4,::Std_obj::_hx_int((this->descText->get_height() + 25)));
HXLINE( 323)		this->descBox->updateHitbox();
HXLINE( 325)		if (::hx::IsNotNull( this->boyfriend )) {
HXLINE( 327)			this->boyfriend->set_visible(this->optionsArray->__get(this->curSelected).StaticCast<  ::options::Option >()->showBoyfriend);
            		}
HXLINE( 329)		this->curOption = this->optionsArray->__get(this->curSelected).StaticCast<  ::options::Option >();
HXLINE( 330)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp5 = ::flixel::FlxG_obj::sound;
HXDLIN( 330)		_hx_tmp5->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(BaseOptionsMenu_obj,changeSelection,(void))

void BaseOptionsMenu_obj::reloadBoyfriend(){
            	HX_GC_STACKFRAME(&_hx_pos_11861b212311743c_334_reloadBoyfriend)
HXLINE( 335)		bool wasVisible = false;
HXLINE( 336)		if (::hx::IsNotNull( this->boyfriend )) {
HXLINE( 337)			wasVisible = this->boyfriend->visible;
HXLINE( 338)			this->boyfriend->kill();
HXLINE( 339)			this->remove(this->boyfriend,null());
HXLINE( 340)			this->boyfriend->destroy();
            		}
HXLINE( 343)		this->boyfriend =  ::Character_obj::__alloc( HX_CTX ,( (Float)(840) ),( (Float)(170) ),HX_("bf-car",cb,95,e2,07),true);
HXLINE( 344)		 ::Character _hx_tmp = this->boyfriend;
HXDLIN( 344)		_hx_tmp->setGraphicSize(::Std_obj::_hx_int((this->boyfriend->get_width() * ((Float)0.75))),null());
HXLINE( 345)		this->boyfriend->updateHitbox();
HXLINE( 346)		this->boyfriend->dance();
HXLINE( 347)		this->insert(1,this->boyfriend);
HXLINE( 348)		this->boyfriend->set_visible(wasVisible);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseOptionsMenu_obj,reloadBoyfriend,(void))

void BaseOptionsMenu_obj::reloadCheckboxes(){
            	HX_GC_STACKFRAME(&_hx_pos_11861b212311743c_352_reloadCheckboxes)
HXDLIN( 352)		 ::Dynamic filter = null();
HXDLIN( 352)		 ::flixel::group::FlxTypedGroupIterator checkbox =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->checkboxGroup->members,filter);
HXDLIN( 352)		while(checkbox->hasNext()){
HXDLIN( 352)			 ::CheckboxThingie checkbox1 = checkbox->next().StaticCast<  ::CheckboxThingie >();
HXLINE( 353)			checkbox1->set_daValue(::hx::IsEq( this->optionsArray->__get(checkbox1->ID).StaticCast<  ::options::Option >()->getValue(),true ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BaseOptionsMenu_obj,reloadCheckboxes,(void))


::hx::ObjectPtr< BaseOptionsMenu_obj > BaseOptionsMenu_obj::__new() {
	::hx::ObjectPtr< BaseOptionsMenu_obj > __this = new BaseOptionsMenu_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BaseOptionsMenu_obj > BaseOptionsMenu_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BaseOptionsMenu_obj *__this = (BaseOptionsMenu_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BaseOptionsMenu_obj), true, "options.BaseOptionsMenu"));
	*(void **)__this = BaseOptionsMenu_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BaseOptionsMenu_obj::BaseOptionsMenu_obj()
{
}

void BaseOptionsMenu_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BaseOptionsMenu);
	HX_MARK_MEMBER_NAME(curOption,"curOption");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(optionsArray,"optionsArray");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(checkboxGroup,"checkboxGroup");
	HX_MARK_MEMBER_NAME(grpTexts,"grpTexts");
	HX_MARK_MEMBER_NAME(boyfriend,"boyfriend");
	HX_MARK_MEMBER_NAME(descBox,"descBox");
	HX_MARK_MEMBER_NAME(descText,"descText");
	HX_MARK_MEMBER_NAME(title,"title");
	HX_MARK_MEMBER_NAME(rpcTitle,"rpcTitle");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(holdTime,"holdTime");
	HX_MARK_MEMBER_NAME(holdValue,"holdValue");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BaseOptionsMenu_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curOption,"curOption");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(optionsArray,"optionsArray");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(checkboxGroup,"checkboxGroup");
	HX_VISIT_MEMBER_NAME(grpTexts,"grpTexts");
	HX_VISIT_MEMBER_NAME(boyfriend,"boyfriend");
	HX_VISIT_MEMBER_NAME(descBox,"descBox");
	HX_VISIT_MEMBER_NAME(descText,"descText");
	HX_VISIT_MEMBER_NAME(title,"title");
	HX_VISIT_MEMBER_NAME(rpcTitle,"rpcTitle");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(holdTime,"holdTime");
	HX_VISIT_MEMBER_NAME(holdValue,"holdValue");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val BaseOptionsMenu_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { return ::hx::Val( title ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descBox") ) { return ::hx::Val( descBox ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { return ::hx::Val( grpTexts ); }
		if (HX_FIELD_EQ(inName,"descText") ) { return ::hx::Val( descText ); }
		if (HX_FIELD_EQ(inName,"rpcTitle") ) { return ::hx::Val( rpcTitle ); }
		if (HX_FIELD_EQ(inName,"holdTime") ) { return ::hx::Val( holdTime ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { return ::hx::Val( curOption ); }
		if (HX_FIELD_EQ(inName,"boyfriend") ) { return ::hx::Val( boyfriend ); }
		if (HX_FIELD_EQ(inName,"addOption") ) { return ::hx::Val( addOption_dyn() ); }
		if (HX_FIELD_EQ(inName,"holdValue") ) { return ::hx::Val( holdValue ); }
		if (HX_FIELD_EQ(inName,"clearHold") ) { return ::hx::Val( clearHold_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
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
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		if (HX_FIELD_EQ(inName,"reloadBoyfriend") ) { return ::hx::Val( reloadBoyfriend_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"reloadCheckboxes") ) { return ::hx::Val( reloadCheckboxes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val BaseOptionsMenu_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"title") ) { title=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"descBox") ) { descBox=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { grpTexts=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"descText") ) { descText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rpcTitle") ) { rpcTitle=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTime") ) { holdTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"curOption") ) { curOption=inValue.Cast<  ::options::Option >(); return inValue; }
		if (HX_FIELD_EQ(inName,"boyfriend") ) { boyfriend=inValue.Cast<  ::Character >(); return inValue; }
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
		if (HX_FIELD_EQ(inName,"optionsArray") ) { optionsArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkboxGroup") ) { checkboxGroup=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BaseOptionsMenu_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curOption",15,ed,07,9c));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("optionsArray",5b,b5,f1,e8));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("checkboxGroup",fc,3d,bc,23));
	outFields->push(HX_("grpTexts",01,f1,99,f0));
	outFields->push(HX_("boyfriend",6a,29,b8,e6));
	outFields->push(HX_("descBox",3a,20,25,19));
	outFields->push(HX_("descText",9e,53,35,f3));
	outFields->push(HX_("title",98,15,3b,10));
	outFields->push(HX_("rpcTitle",73,04,98,e2));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("holdTime",ec,cc,bf,3e));
	outFields->push(HX_("holdValue",b2,41,96,ca));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BaseOptionsMenu_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::options::Option */ ,(int)offsetof(BaseOptionsMenu_obj,curOption),HX_("curOption",15,ed,07,9c)},
	{::hx::fsInt,(int)offsetof(BaseOptionsMenu_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(BaseOptionsMenu_obj,optionsArray),HX_("optionsArray",5b,b5,f1,e8)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(BaseOptionsMenu_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(BaseOptionsMenu_obj,checkboxGroup),HX_("checkboxGroup",fc,3d,bc,23)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(BaseOptionsMenu_obj,grpTexts),HX_("grpTexts",01,f1,99,f0)},
	{::hx::fsObject /*  ::Character */ ,(int)offsetof(BaseOptionsMenu_obj,boyfriend),HX_("boyfriend",6a,29,b8,e6)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(BaseOptionsMenu_obj,descBox),HX_("descBox",3a,20,25,19)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(BaseOptionsMenu_obj,descText),HX_("descText",9e,53,35,f3)},
	{::hx::fsString,(int)offsetof(BaseOptionsMenu_obj,title),HX_("title",98,15,3b,10)},
	{::hx::fsString,(int)offsetof(BaseOptionsMenu_obj,rpcTitle),HX_("rpcTitle",73,04,98,e2)},
	{::hx::fsInt,(int)offsetof(BaseOptionsMenu_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsFloat,(int)offsetof(BaseOptionsMenu_obj,holdTime),HX_("holdTime",ec,cc,bf,3e)},
	{::hx::fsFloat,(int)offsetof(BaseOptionsMenu_obj,holdValue),HX_("holdValue",b2,41,96,ca)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BaseOptionsMenu_obj_sStaticStorageInfo = 0;
#endif

static ::String BaseOptionsMenu_obj_sMemberFields[] = {
	HX_("curOption",15,ed,07,9c),
	HX_("curSelected",fb,eb,ab,32),
	HX_("optionsArray",5b,b5,f1,e8),
	HX_("grpOptions",f9,45,d8,00),
	HX_("checkboxGroup",fc,3d,bc,23),
	HX_("grpTexts",01,f1,99,f0),
	HX_("boyfriend",6a,29,b8,e6),
	HX_("descBox",3a,20,25,19),
	HX_("descText",9e,53,35,f3),
	HX_("title",98,15,3b,10),
	HX_("rpcTitle",73,04,98,e2),
	HX_("addOption",76,08,9f,e3),
	HX_("nextAccept",5b,44,38,c0),
	HX_("holdTime",ec,cc,bf,3e),
	HX_("holdValue",b2,41,96,ca),
	HX_("update",09,86,05,87),
	HX_("updateTextFrom",e0,eb,e7,7b),
	HX_("clearHold",6c,b1,d3,b8),
	HX_("changeSelection",bc,98,b5,48),
	HX_("reloadBoyfriend",d1,02,8d,8f),
	HX_("reloadCheckboxes",2a,e2,2a,45),
	::String(null()) };

::hx::Class BaseOptionsMenu_obj::__mClass;

void BaseOptionsMenu_obj::__register()
{
	BaseOptionsMenu_obj _hx_dummy;
	BaseOptionsMenu_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.BaseOptionsMenu",5c,5e,30,7f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BaseOptionsMenu_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BaseOptionsMenu_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BaseOptionsMenu_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BaseOptionsMenu_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace options
