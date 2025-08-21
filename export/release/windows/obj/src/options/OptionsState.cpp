#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
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
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
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
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
#ifndef INCLUDED_options_ControlsSubState
#include <options/ControlsSubState.h>
#endif
#ifndef INCLUDED_options_GameplaySettingsSubState
#include <options/GameplaySettingsSubState.h>
#endif
#ifndef INCLUDED_options_GraphicsSettingsSubState
#include <options/GraphicsSettingsSubState.h>
#endif
#ifndef INCLUDED_options_NoteOffsetState
#include <options/NoteOffsetState.h>
#endif
#ifndef INCLUDED_options_NotesSubState
#include <options/NotesSubState.h>
#endif
#ifndef INCLUDED_options_OptionsState
#include <options/OptionsState.h>
#endif
#ifndef INCLUDED_options_VisualsUISubState
#include <options/VisualsUISubState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bddb8806f8971119_30_new,"options.OptionsState","new",0xe72cff75,"options.OptionsState.new","options/OptionsState.hx",30,0xaa608eba)
static const ::String _hx_array_data_14992103_1[] = {
	HX_("Note Colors",1e,54,23,f8),HX_("Controls",96,42,6e,11),HX_("Adjust Delay and Combo",b7,c9,c3,05),HX_("Graphics",eb,b4,19,ec),HX_("Visuals and UI",ea,4a,1e,90),HX_("Gameplay",06,bf,58,a5),
};
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_40_openSelectedSubstate,"options.OptionsState","openSelectedSubstate",0x28c3b341,"options.OptionsState.openSelectedSubstate","options/OptionsState.hx",40,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_62_create,"options.OptionsState","create",0xc1bf1307,"options.OptionsState.create","options/OptionsState.hx",62,0xaa608eba)
static const int _hx_array_data_14992103_6[] = {
	(int)0,(int)1,(int)2,(int)3,(int)4,(int)5,(int)6,(int)7,(int)8,(int)9,(int)10,(int)11,(int)12,(int)13,(int)14,(int)15,
};
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_131_closeSubState,"options.OptionsState","closeSubState",0xbc3ad39e,"options.OptionsState.closeSubState","options/OptionsState.hx",131,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_136_update,"options.OptionsState","update",0xccb53214,"options.OptionsState.update","options/OptionsState.hx",136,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_157_changeSelection,"options.OptionsState","changeSelection",0xa0e39351,"options.OptionsState.changeSelection","options/OptionsState.hx",157,0xaa608eba)
HX_LOCAL_STACK_FRAME(_hx_pos_bddb8806f8971119_36_boot,"options.OptionsState","boot",0x584b877d,"options.OptionsState.boot","options/OptionsState.hx",36,0xaa608eba)
namespace options{

void OptionsState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_30_new)
HXLINE(  59)		this->danceLeft2 = false;
HXLINE(  34)		this->options = ::Array_obj< ::String >::fromData( _hx_array_data_14992103_1,6);
HXLINE(  30)		super::__construct(TransIn,TransOut);
            	}

Dynamic OptionsState_obj::__CreateEmpty() { return new OptionsState_obj; }

void *OptionsState_obj::_hx_vtable = 0;

Dynamic OptionsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OptionsState_obj > _hx_result = new OptionsState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool OptionsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3b1d59ed || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void OptionsState_obj::openSelectedSubstate(::String label){
            	HX_GC_STACKFRAME(&_hx_pos_bddb8806f8971119_40_openSelectedSubstate)
HXDLIN(  40)		::String _hx_switch_0 = label;
            		if (  (_hx_switch_0==HX_("Adjust Delay and Combo",b7,c9,c3,05)) ){
HXLINE(  52)			::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::options::NoteOffsetState_obj::__alloc( HX_CTX ,null(),null())) ),false));
HXDLIN(  52)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Controls",96,42,6e,11)) ){
HXLINE(  44)			this->openSubState( ::options::ControlsSubState_obj::__alloc( HX_CTX ));
HXDLIN(  44)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Gameplay",06,bf,58,a5)) ){
HXLINE(  50)			this->openSubState( ::options::GameplaySettingsSubState_obj::__alloc( HX_CTX ));
HXDLIN(  50)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Graphics",eb,b4,19,ec)) ){
HXLINE(  46)			this->openSubState( ::options::GraphicsSettingsSubState_obj::__alloc( HX_CTX ));
HXDLIN(  46)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Note Colors",1e,54,23,f8)) ){
HXLINE(  42)			this->openSubState( ::options::NotesSubState_obj::__alloc( HX_CTX ));
HXDLIN(  42)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("Visuals and UI",ea,4a,1e,90)) ){
HXLINE(  48)			this->openSubState( ::options::VisualsUISubState_obj::__alloc( HX_CTX ));
HXDLIN(  48)			goto _hx_goto_2;
            		}
            		_hx_goto_2:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsState_obj,openSelectedSubstate,(void))

void OptionsState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_bddb8806f8971119_62_create)
HXLINE(  65)		::DiscordClient_obj::changePresence(HX_("Options Menu",e1,25,4c,98),null(),null(),null(),null());
HXLINE(  68)		::haxe::Log_obj::trace(HX_("shit",c0,cf,52,4c),::hx::SourceInfo(HX_("source/options/OptionsState.hx",46,de,7e,78),68,HX_("options.OptionsState",03,21,99,14),HX_("create",fc,66,0f,7c)));
HXLINE(  70)		this->texto =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,750,80,0,HX_("press \"ESC\"\nwhen you are ready",c8,66,ad,71),32,null());
HXLINE(  71)		 ::flixel::text::FlxText _hx_tmp = this->texto;
HXDLIN(  71)		::String file = ::Paths_obj::modFolders((HX_("fonts/",eb,13,ef,fa) + HX_("vcr.ttf",9d,d2,a7,82)));
HXDLIN(  71)		::String _hx_tmp1;
HXDLIN(  71)		if (::sys::FileSystem_obj::exists(file)) {
HXLINE(  71)			_hx_tmp1 = file;
            		}
            		else {
HXLINE(  71)			_hx_tmp1 = (HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82));
            		}
HXDLIN(  71)		_hx_tmp->setFormat(_hx_tmp1,32,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE(  73)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  73)		::String library = null();
HXDLIN(  73)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("racism be like",a3,6f,b4,c1),library);
HXDLIN(  73)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE(  74)		bg1->set_color(-1412611);
HXLINE(  75)		bg1->updateHitbox();
HXLINE(  77)		{
HXLINE(  77)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  77)			bool _hx_tmp2;
HXDLIN(  77)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE(  77)					_hx_tmp2 = true;
            				}
            				break;
            				default:{
HXLINE(  77)					_hx_tmp2 = false;
            				}
            			}
HXDLIN(  77)			if (_hx_tmp2) {
HXLINE(  77)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  77)				bg1->set_x(((( (Float)(_hx_tmp) ) - bg1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN(  77)			bool _hx_tmp3;
HXDLIN(  77)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE(  77)					_hx_tmp3 = true;
            				}
            				break;
            				default:{
HXLINE(  77)					_hx_tmp3 = false;
            				}
            			}
HXDLIN(  77)			if (_hx_tmp3) {
HXLINE(  77)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  77)				bg1->set_y(((( (Float)(_hx_tmp) ) - bg1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE(  78)		bg1->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  79)		this->add(bg1);
HXLINE(  80)		this->add(this->texto);
HXLINE(  82)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  83)		this->add(this->grpOptions);
HXLINE(  85)		{
HXLINE(  85)			int _g = 0;
HXDLIN(  85)			int _g1 = this->options->length;
HXDLIN(  85)			while((_g < _g1)){
HXLINE(  85)				_g = (_g + 1);
HXDLIN(  85)				int i = (_g - 1);
HXLINE(  89)				 ::Alphabet optionText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(20) ),( (Float)(300) ),this->options->__get(i),true);
HXLINE(  91)				optionText->set_y((optionText->y + ((( (Float)(100) ) * (( (Float)(i) ) - (( (Float)(this->options->length) ) / ( (Float)(2) )))) + 50)));
HXLINE(  92)				this->grpOptions->add(optionText).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE(  96)		this->selectorLeft =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_(">",3e,00,00,00),true);
HXLINE(  97)		this->add(this->selectorLeft);
HXLINE(  98)		this->selectorRight =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("<",3c,00,00,00),true);
HXLINE(  99)		this->add(this->selectorRight);
HXLINE( 101)		this->changeSelection(null());
HXLINE( 102)		::ClientPrefs_obj::saveSettings();
HXLINE( 106)		this->gfDance2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,552,180,null());
HXLINE( 107)		this->gfDance2->scrollFactor->set(0,0);
HXLINE( 108)		 ::flixel::FlxSprite _hx_tmp4 = this->gfDance2;
HXDLIN( 108)		::String library1 = null();
HXDLIN( 108)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(HX_("Robotboy_Story_Mode_tiny_options",b4,e4,88,fd),null());
HXDLIN( 108)		bool xmlExists = false;
HXDLIN( 108)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("Robotboy_Story_Mode_tiny_options",b4,e4,88,fd)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 108)			xmlExists = true;
            		}
HXDLIN( 108)		 ::Dynamic _hx_tmp5;
HXDLIN( 108)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 108)			_hx_tmp5 = imageLoaded;
            		}
            		else {
HXLINE( 108)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("Robotboy_Story_Mode_tiny_options",b4,e4,88,fd),library1);
HXDLIN( 108)			_hx_tmp5 = returnAsset;
            		}
HXDLIN( 108)		::String _hx_tmp6;
HXDLIN( 108)		if (xmlExists) {
HXLINE( 108)			_hx_tmp6 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("Robotboy_Story_Mode_tiny_options",b4,e4,88,fd)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE( 108)			_hx_tmp6 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("Robotboy_Story_Mode_tiny_options",b4,e4,88,fd)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library1);
            		}
HXDLIN( 108)		_hx_tmp4->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp5,_hx_tmp6));
HXLINE( 109)		this->gfDance2->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 112)		this->gfDance2->animation->addByIndices(HX_("danceLeft2",18,72,99,1a),HX_("idle",14,a7,b3,45),::Array_obj< int >::fromData( _hx_array_data_14992103_6,16),HX_("",00,00,00,00),40,true,null(),null());
HXLINE( 117)		this->gfDance2->setGraphicSize(394,400);
HXLINE( 118)		if (::hx::IsNotNull( this->gfDance2 )) {
HXLINE( 120)			this->danceLeft2 = !(this->danceLeft2);
HXLINE( 122)			if (this->danceLeft2) {
HXLINE( 124)				this->gfDance2->animation->play(HX_("danceLeft2",18,72,99,1a),null(),null(),null());
            			}
            		}
HXLINE( 128)		this->super::create();
            	}


void OptionsState_obj::closeSubState(){
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_131_closeSubState)
HXLINE( 132)		this->super::closeSubState();
HXLINE( 133)		::ClientPrefs_obj::saveSettings();
            	}


void OptionsState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_bddb8806f8971119_136_update)
HXLINE( 137)		this->super::update(elapsed);
HXLINE( 139)		if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 140)			this->changeSelection(-1);
            		}
HXLINE( 142)		if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 143)			this->changeSelection(1);
            		}
HXLINE( 146)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 147)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 147)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 148)			::MusicBeatState_obj::switchState( ::StoryMenuState_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE( 151)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 152)			this->openSelectedSubstate(this->options->__get(::options::OptionsState_obj::curSelected));
            		}
            	}


void OptionsState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_157_changeSelection)
HXLINE( 158)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::options::OptionsState >();
HXDLIN( 158)		::options::OptionsState_obj::curSelected = (::options::OptionsState_obj::curSelected + change);
HXLINE( 159)		if ((::options::OptionsState_obj::curSelected < 0)) {
HXLINE( 160)			::options::OptionsState_obj::curSelected = (this->options->length - 1);
            		}
HXLINE( 161)		if ((::options::OptionsState_obj::curSelected >= this->options->length)) {
HXLINE( 162)			::options::OptionsState_obj::curSelected = 0;
            		}
HXLINE( 164)		int bullShit = 0;
HXLINE( 166)		{
HXLINE( 166)			int _g = 0;
HXDLIN( 166)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 166)			while((_g < _g1->length)){
HXLINE( 166)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 166)				_g = (_g + 1);
HXLINE( 167)				item->targetY = (bullShit - ::options::OptionsState_obj::curSelected);
HXLINE( 168)				bullShit = (bullShit + 1);
HXLINE( 170)				item->set_alpha(((Float)0.6));
HXLINE( 171)				if ((item->targetY == 0)) {
HXLINE( 172)					item->set_alpha(( (Float)(1) ));
HXLINE( 173)					this->selectorLeft->set_x((item->x - ( (Float)(200) )));
HXLINE( 174)					this->selectorLeft->set_y(item->y);
HXLINE( 175)					 ::Alphabet _hx_tmp = this->selectorRight;
HXDLIN( 175)					Float item1 = item->x;
HXDLIN( 175)					_hx_tmp->set_x(((item1 + item->get_width()) + 15));
HXLINE( 176)					this->selectorRight->set_y(item->y);
            				}
            			}
            		}
HXLINE( 179)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 179)		_hx_tmp1->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(OptionsState_obj,changeSelection,(void))

int OptionsState_obj::curSelected;

 ::flixel::FlxSprite OptionsState_obj::menuBG;


::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< OptionsState_obj > __this = new OptionsState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< OptionsState_obj > OptionsState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	OptionsState_obj *__this = (OptionsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OptionsState_obj), true, "options.OptionsState"));
	*(void **)__this = OptionsState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

OptionsState_obj::OptionsState_obj()
{
}

void OptionsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(OptionsState);
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(selectorLeft,"selectorLeft");
	HX_MARK_MEMBER_NAME(selectorRight,"selectorRight");
	HX_MARK_MEMBER_NAME(gfDance2,"gfDance2");
	HX_MARK_MEMBER_NAME(danceLeft2,"danceLeft2");
	HX_MARK_MEMBER_NAME(texto,"texto");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void OptionsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(selectorLeft,"selectorLeft");
	HX_VISIT_MEMBER_NAME(selectorRight,"selectorRight");
	HX_VISIT_MEMBER_NAME(gfDance2,"gfDance2");
	HX_VISIT_MEMBER_NAME(danceLeft2,"danceLeft2");
	HX_VISIT_MEMBER_NAME(texto,"texto");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val OptionsState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"texto") ) { return ::hx::Val( texto ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return ::hx::Val( options ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gfDance2") ) { return ::hx::Val( gfDance2 ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"danceLeft2") ) { return ::hx::Val( danceLeft2 ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectorLeft") ) { return ::hx::Val( selectorLeft ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectorRight") ) { return ::hx::Val( selectorRight ); }
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return ::hx::Val( closeSubState_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"openSelectedSubstate") ) { return ::hx::Val( openSelectedSubstate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool OptionsState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"menuBG") ) { outValue = ( menuBG ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
	}
	return false;
}

::hx::Val OptionsState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"texto") ) { texto=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gfDance2") ) { gfDance2=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"danceLeft2") ) { danceLeft2=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectorLeft") ) { selectorLeft=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"selectorRight") ) { selectorRight=inValue.Cast<  ::Alphabet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool OptionsState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"menuBG") ) { menuBG=ioValue.Cast<  ::flixel::FlxSprite >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void OptionsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("options",5e,33,fe,df));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("selectorLeft",c6,e2,77,e7));
	outFields->push(HX_("selectorRight",3d,98,7b,18));
	outFields->push(HX_("gfDance2",1e,f9,fc,e7));
	outFields->push(HX_("danceLeft2",18,72,99,1a));
	outFields->push(HX_("texto",22,4b,99,0d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OptionsState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(OptionsState_obj,options),HX_("options",5e,33,fe,df)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(OptionsState_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(OptionsState_obj,selectorLeft),HX_("selectorLeft",c6,e2,77,e7)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(OptionsState_obj,selectorRight),HX_("selectorRight",3d,98,7b,18)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(OptionsState_obj,gfDance2),HX_("gfDance2",1e,f9,fc,e7)},
	{::hx::fsBool,(int)offsetof(OptionsState_obj,danceLeft2),HX_("danceLeft2",18,72,99,1a)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(OptionsState_obj,texto),HX_("texto",22,4b,99,0d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo OptionsState_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &OptionsState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(void *) &OptionsState_obj::menuBG,HX_("menuBG",24,65,6d,05)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String OptionsState_obj_sMemberFields[] = {
	HX_("options",5e,33,fe,df),
	HX_("grpOptions",f9,45,d8,00),
	HX_("openSelectedSubstate",f6,29,af,78),
	HX_("selectorLeft",c6,e2,77,e7),
	HX_("selectorRight",3d,98,7b,18),
	HX_("gfDance2",1e,f9,fc,e7),
	HX_("danceLeft2",18,72,99,1a),
	HX_("texto",22,4b,99,0d),
	HX_("create",fc,66,0f,7c),
	HX_("closeSubState",49,18,32,04),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	::String(null()) };

static void OptionsState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OptionsState_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(OptionsState_obj::menuBG,"menuBG");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OptionsState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OptionsState_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(OptionsState_obj::menuBG,"menuBG");
};

#endif

::hx::Class OptionsState_obj::__mClass;

static ::String OptionsState_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("menuBG",24,65,6d,05),
	::String(null())
};

void OptionsState_obj::__register()
{
	OptionsState_obj _hx_dummy;
	OptionsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("options.OptionsState",03,21,99,14);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &OptionsState_obj::__GetStatic;
	__mClass->mSetStaticField = &OptionsState_obj::__SetStatic;
	__mClass->mMarkFunc = OptionsState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OptionsState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OptionsState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OptionsState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OptionsState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OptionsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OptionsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OptionsState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bddb8806f8971119_36_boot)
HXDLIN(  36)		curSelected = 0;
            	}
}

} // end namespace options
