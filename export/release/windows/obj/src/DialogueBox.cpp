#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_DialogueBox
#include <DialogueBox.h>
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
#ifndef INCLUDED_flixel_addons_text_FlxTypeText
#include <flixel/addons/text/FlxTypeText.h>
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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
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
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_58_new,"DialogueBox","new",0x1f391625,"DialogueBox.new","DialogueBox.hx",58,0x0149b4eb)
HX_DEFINE_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_15_new,"DialogueBox","new",0x1f391625,"DialogueBox.new","DialogueBox.hx",15,0x0149b4eb)
static const int _hx_array_data_ffc81fb3_4[] = {
	(int)4,
};
static const int _hx_array_data_ffc81fb3_5[] = {
	(int)4,
};
static const int _hx_array_data_ffc81fb3_6[] = {
	(int)11,
};
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_153_update,"DialogueBox","update",0x23306964,"DialogueBox.update","DialogueBox.hx",153,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_196_update,"DialogueBox","update",0x23306964,"DialogueBox.update","DialogueBox.hx",196,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_207_update,"DialogueBox","update",0x23306964,"DialogueBox.update","DialogueBox.hx",207,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_246_startDialogue,"DialogueBox","startDialogue",0x59859d9f,"DialogueBox.startDialogue","DialogueBox.hx",246,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_237_startDialogue,"DialogueBox","startDialogue",0x59859d9f,"DialogueBox.startDialogue","DialogueBox.hx",237,0x0149b4eb)
HX_LOCAL_STACK_FRAME(_hx_pos_abff9fa8c13cc7a0_276_cleanDialog,"DialogueBox","cleanDialog",0x0fc249f6,"DialogueBox.cleanDialog","DialogueBox.hx",276,0x0149b4eb)

void DialogueBox_obj::__construct(::hx::Null< bool >  __o_talkingRight,::Array< ::String > dialogueList){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::DialogueBox,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::util::FlxTimer tmr){
            			HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_58_new)
HXLINE(  59)			 ::flixel::FlxSprite fh = _gthis->bgFade;
HXDLIN(  59)			fh->set_alpha((fh->alpha + ((Float)0.13999999999999999)));
HXLINE(  60)			if ((_gthis->bgFade->alpha > ((Float)0.7))) {
HXLINE(  61)				_gthis->bgFade->set_alpha(((Float)0.7));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		bool talkingRight = __o_talkingRight.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_15_new)
HXLINE( 234)		this->isEnding = false;
HXLINE( 150)		this->dialogueEnded = false;
HXLINE( 149)		this->dialogueStarted = false;
HXLINE( 148)		this->dialogueOpened = false;
HXLINE(  30)		this->skipDialogueThing = null();
HXLINE(  29)		this->nextDialogueThing = null();
HXLINE(  21)		this->dialogueList = ::Array_obj< ::String >::__new(0);
HXLINE(  19)		this->curCharacter = HX_("",00,00,00,00);
HXLINE(  39)		 ::DialogueBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  40)		super::__construct(null(),null(),null());
HXLINE(  42)		::String _hx_switch_0 = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase();
            		if (  (_hx_switch_0==HX_("senpai",3c,df,8d,6b)) ){
HXLINE(  45)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  45)			::String library = null();
HXDLIN(  45)			 ::openfl::media::Sound file = ::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("Lunchbox",c1,34,3f,3d),library);
HXDLIN(  45)			_hx_tmp->playMusic(file,0,null(),null());
HXLINE(  46)			{
HXLINE(  46)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  46)				 ::Dynamic onComplete = null();
HXDLIN(  46)				if (::hx::IsNull( _this->_channel )) {
HXLINE(  46)					_this->play(null(),null(),null());
            				}
HXDLIN(  46)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  46)					_this->fadeTween->cancel();
            				}
HXDLIN(  46)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.8),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE(  44)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("thorns",9c,bf,c7,8c)) ){
HXLINE(  48)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  48)			::String library = null();
HXDLIN(  48)			 ::openfl::media::Sound file = ::Paths_obj::returnSound(HX_("music",a5,d0,5a,10),HX_("LunchboxScary",57,33,01,24),library);
HXDLIN(  48)			_hx_tmp->playMusic(file,0,null(),null());
HXLINE(  49)			{
HXLINE(  49)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  49)				 ::Dynamic onComplete = null();
HXDLIN(  49)				if (::hx::IsNull( _this->_channel )) {
HXLINE(  49)					_this->play(null(),null(),null());
            				}
HXDLIN(  49)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE(  49)					_this->fadeTween->cancel();
            				}
HXDLIN(  49)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),((Float)0.8),1, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
HXLINE(  47)			goto _hx_goto_0;
            		}
            		_hx_goto_0:;
HXLINE(  52)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-200,-200,null());
HXDLIN(  52)		int _hx_tmp1 = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)1.3)));
HXDLIN(  52)		this->bgFade = _hx_tmp->makeGraphic(_hx_tmp1,::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::height) ) * ((Float)1.3))),-4988968,null(),null());
HXLINE(  53)		this->bgFade->scrollFactor->set(null(),null());
HXLINE(  54)		this->bgFade->set_alpha(( (Float)(0) ));
HXLINE(  55)		this->add(this->bgFade);
HXLINE(  57)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.83), ::Dynamic(new _hx_Closure_0(_gthis)),5);
HXLINE(  64)		this->box =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-20,45,null());
HXLINE(  66)		bool hasDialog = false;
HXLINE(  67)		::String _hx_switch_1 = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase();
            		if (  (_hx_switch_1==HX_("roses",04,6c,64,ed)) ){
HXLINE(  75)			hasDialog = true;
HXLINE(  76)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  76)			_hx_tmp->play(::Paths_obj::sound(HX_("ANGRY_TEXT_BOX",57,5c,5c,19),null()),null(),null(),null(),null(),null());
HXLINE(  78)			 ::flixel::FlxSprite _hx_tmp1 = this->box;
HXDLIN(  78)			::String library = null();
HXDLIN(  78)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(HX_("weeb/pixelUI/dialogueBox-senpaiMad",61,55,ee,84),null());
HXDLIN(  78)			bool xmlExists = false;
HXDLIN(  78)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-senpaiMad",61,55,ee,84)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  78)				xmlExists = true;
            			}
HXDLIN(  78)			 ::Dynamic _hx_tmp2;
HXDLIN(  78)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  78)				_hx_tmp2 = imageLoaded;
            			}
            			else {
HXLINE(  78)				 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("weeb/pixelUI/dialogueBox-senpaiMad",61,55,ee,84),library);
HXDLIN(  78)				_hx_tmp2 = returnAsset;
            			}
HXDLIN(  78)			::String _hx_tmp3;
HXDLIN(  78)			if (xmlExists) {
HXLINE(  78)				_hx_tmp3 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-senpaiMad",61,55,ee,84)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  78)				_hx_tmp3 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-senpaiMad",61,55,ee,84)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  78)			_hx_tmp1->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp2,_hx_tmp3));
HXLINE(  79)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("SENPAI ANGRY IMPACT SPEECH",f9,17,39,87),24,false,null(),null());
HXLINE(  80)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("SENPAI ANGRY IMPACT SPEECH instance 1",ad,5b,57,ef),::Array_obj< int >::fromData( _hx_array_data_ffc81fb3_4,1),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  74)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("senpai",3c,df,8d,6b)) ){
HXLINE(  70)			hasDialog = true;
HXLINE(  71)			 ::flixel::FlxSprite _hx_tmp = this->box;
HXDLIN(  71)			::String library = null();
HXDLIN(  71)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(HX_("weeb/pixelUI/dialogueBox-pixel",b3,f0,21,da),null());
HXDLIN(  71)			bool xmlExists = false;
HXDLIN(  71)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-pixel",b3,f0,21,da)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  71)				xmlExists = true;
            			}
HXDLIN(  71)			 ::Dynamic _hx_tmp1;
HXDLIN(  71)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  71)				_hx_tmp1 = imageLoaded;
            			}
            			else {
HXLINE(  71)				 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("weeb/pixelUI/dialogueBox-pixel",b3,f0,21,da),library);
HXDLIN(  71)				_hx_tmp1 = returnAsset;
            			}
HXDLIN(  71)			::String _hx_tmp2;
HXDLIN(  71)			if (xmlExists) {
HXLINE(  71)				_hx_tmp2 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-pixel",b3,f0,21,da)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  71)				_hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-pixel",b3,f0,21,da)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  71)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,_hx_tmp2));
HXLINE(  72)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Text Box Appear",bd,48,54,1a),24,false,null(),null());
HXLINE(  73)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("Text Box Appear instance 1",69,19,3a,07),::Array_obj< int >::fromData( _hx_array_data_ffc81fb3_5,1),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  69)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_1==HX_("thorns",9c,bf,c7,8c)) ){
HXLINE(  83)			hasDialog = true;
HXLINE(  84)			 ::flixel::FlxSprite _hx_tmp = this->box;
HXDLIN(  84)			::String library = null();
HXDLIN(  84)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(HX_("weeb/pixelUI/dialogueBox-evil",07,6d,f9,cc),null());
HXDLIN(  84)			bool xmlExists = false;
HXDLIN(  84)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-evil",07,6d,f9,cc)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  84)				xmlExists = true;
            			}
HXDLIN(  84)			 ::Dynamic _hx_tmp1;
HXDLIN(  84)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  84)				_hx_tmp1 = imageLoaded;
            			}
            			else {
HXLINE(  84)				 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("weeb/pixelUI/dialogueBox-evil",07,6d,f9,cc),library);
HXDLIN(  84)				_hx_tmp1 = returnAsset;
            			}
HXDLIN(  84)			::String _hx_tmp2;
HXDLIN(  84)			if (xmlExists) {
HXLINE(  84)				_hx_tmp2 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-evil",07,6d,f9,cc)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  84)				_hx_tmp2 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/pixelUI/dialogueBox-evil",07,6d,f9,cc)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  84)			_hx_tmp->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp1,_hx_tmp2));
HXLINE(  85)			this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Spirit Textbox spawn",ea,ee,35,84),24,false,null(),null());
HXLINE(  86)			this->box->animation->addByIndices(HX_("normal",27,72,69,30),HX_("Spirit Textbox spawn instance 1",5c,78,b4,46),::Array_obj< int >::fromData( _hx_array_data_ffc81fb3_6,1),HX_("",00,00,00,00),24,null(),null(),null());
HXLINE(  88)			 ::flixel::FlxSprite face =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,320,170,null());
HXDLIN(  88)			::String library1 = null();
HXDLIN(  88)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("weeb/spiritFaceForward",93,1c,29,2a),library1);
HXDLIN(  88)			 ::flixel::FlxSprite face1 = face->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE(  89)			face1->setGraphicSize(::Std_obj::_hx_int((face1->get_width() * ( (Float)(6) ))),null());
HXLINE(  90)			this->add(face1);
HXLINE(  82)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
HXLINE(  93)		this->dialogueList = dialogueList;
HXLINE(  95)		if (!(hasDialog)) {
HXLINE(  96)			return;
            		}
HXLINE(  98)		this->portraitLeft =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-20,40,null());
HXLINE(  99)		 ::flixel::FlxSprite _hx_tmp2 = this->portraitLeft;
HXDLIN(  99)		::String library = null();
HXDLIN(  99)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(HX_("weeb/senpaiPortrait",9b,ed,4f,6d),null());
HXDLIN(  99)		bool xmlExists = false;
HXDLIN(  99)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/senpaiPortrait",9b,ed,4f,6d)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  99)			xmlExists = true;
            		}
HXDLIN(  99)		 ::Dynamic _hx_tmp3;
HXDLIN(  99)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  99)			_hx_tmp3 = imageLoaded;
            		}
            		else {
HXLINE(  99)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("weeb/senpaiPortrait",9b,ed,4f,6d),library);
HXDLIN(  99)			_hx_tmp3 = returnAsset;
            		}
HXDLIN(  99)		::String _hx_tmp4;
HXDLIN(  99)		if (xmlExists) {
HXLINE(  99)			_hx_tmp4 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/senpaiPortrait",9b,ed,4f,6d)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE(  99)			_hx_tmp4 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/senpaiPortrait",9b,ed,4f,6d)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN(  99)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,_hx_tmp4));
HXLINE( 100)		this->portraitLeft->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Senpai Portrait Enter",d7,e0,09,14),24,false,null(),null());
HXLINE( 101)		 ::flixel::FlxSprite _hx_tmp5 = this->portraitLeft;
HXDLIN( 101)		Float _hx_tmp6 = this->portraitLeft->get_width();
HXDLIN( 101)		_hx_tmp5->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp6 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 102)		this->portraitLeft->updateHitbox();
HXLINE( 103)		this->portraitLeft->scrollFactor->set(null(),null());
HXLINE( 104)		this->add(this->portraitLeft);
HXLINE( 105)		this->portraitLeft->set_visible(false);
HXLINE( 107)		this->portraitRight =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,40,null());
HXLINE( 108)		 ::flixel::FlxSprite _hx_tmp7 = this->portraitRight;
HXDLIN( 108)		::String library1 = null();
HXDLIN( 108)		 ::flixel::graphics::FlxGraphic imageLoaded1 = ::Paths_obj::returnGraphic(HX_("weeb/bfPortrait",23,ea,7a,a3),null());
HXDLIN( 108)		bool xmlExists1 = false;
HXDLIN( 108)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPortrait",23,ea,7a,a3)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 108)			xmlExists1 = true;
            		}
HXDLIN( 108)		 ::Dynamic _hx_tmp8;
HXDLIN( 108)		if (::hx::IsNotNull( imageLoaded1 )) {
HXLINE( 108)			_hx_tmp8 = imageLoaded1;
            		}
            		else {
HXLINE( 108)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("weeb/bfPortrait",23,ea,7a,a3),library1);
HXDLIN( 108)			_hx_tmp8 = returnAsset;
            		}
HXDLIN( 108)		::String _hx_tmp9;
HXDLIN( 108)		if (xmlExists1) {
HXLINE( 108)			_hx_tmp9 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPortrait",23,ea,7a,a3)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE( 108)			_hx_tmp9 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("weeb/bfPortrait",23,ea,7a,a3)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library1);
            		}
HXDLIN( 108)		_hx_tmp7->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp8,_hx_tmp9));
HXLINE( 109)		this->portraitRight->animation->addByPrefix(HX_("enter",18,6d,86,70),HX_("Boyfriend portrait enter",a9,02,f8,de),24,false,null(),null());
HXLINE( 110)		 ::flixel::FlxSprite _hx_tmp10 = this->portraitRight;
HXDLIN( 110)		Float _hx_tmp11 = this->portraitRight->get_width();
HXDLIN( 110)		_hx_tmp10->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp11 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 111)		this->portraitRight->updateHitbox();
HXLINE( 112)		this->portraitRight->scrollFactor->set(null(),null());
HXLINE( 113)		this->add(this->portraitRight);
HXLINE( 114)		this->portraitRight->set_visible(false);
HXLINE( 116)		this->box->animation->play(HX_("normalOpen",91,41,38,70),null(),null(),null());
HXLINE( 117)		 ::flixel::FlxSprite _hx_tmp12 = this->box;
HXDLIN( 117)		Float _hx_tmp13 = this->box->get_width();
HXDLIN( 117)		_hx_tmp12->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp13 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 118)		this->box->updateHitbox();
HXLINE( 119)		this->add(this->box);
HXLINE( 121)		{
HXLINE( 121)			 ::flixel::FlxSprite _this = this->box;
HXDLIN( 121)			 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN( 121)			if (::hx::IsNull( axes )) {
HXLINE( 121)				axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN( 121)			bool _hx_tmp14;
HXDLIN( 121)			switch((int)(axes->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE( 121)					_hx_tmp14 = true;
            				}
            				break;
            				default:{
HXLINE( 121)					_hx_tmp14 = false;
            				}
            			}
HXDLIN( 121)			if (_hx_tmp14) {
HXLINE( 121)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 121)				_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 121)			bool _hx_tmp15;
HXDLIN( 121)			switch((int)(axes->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE( 121)					_hx_tmp15 = true;
            				}
            				break;
            				default:{
HXLINE( 121)					_hx_tmp15 = false;
            				}
            			}
HXDLIN( 121)			if (_hx_tmp15) {
HXLINE( 121)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 121)				_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 122)		{
HXLINE( 122)			 ::flixel::FlxSprite _this1 = this->portraitLeft;
HXDLIN( 122)			 ::flixel::util::FlxAxes axes1 = ::flixel::util::FlxAxes_obj::X_dyn();
HXDLIN( 122)			if (::hx::IsNull( axes1 )) {
HXLINE( 122)				axes1 = ::flixel::util::FlxAxes_obj::XY_dyn();
            			}
HXDLIN( 122)			bool _hx_tmp16;
HXDLIN( 122)			switch((int)(axes1->_hx_getIndex())){
            				case (int)0: case (int)2: {
HXLINE( 122)					_hx_tmp16 = true;
            				}
            				break;
            				default:{
HXLINE( 122)					_hx_tmp16 = false;
            				}
            			}
HXDLIN( 122)			if (_hx_tmp16) {
HXLINE( 122)				int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN( 122)				_this1->set_x(((( (Float)(_hx_tmp) ) - _this1->get_width()) / ( (Float)(2) )));
            			}
HXDLIN( 122)			bool _hx_tmp17;
HXDLIN( 122)			switch((int)(axes1->_hx_getIndex())){
            				case (int)1: case (int)2: {
HXLINE( 122)					_hx_tmp17 = true;
            				}
            				break;
            				default:{
HXLINE( 122)					_hx_tmp17 = false;
            				}
            			}
HXDLIN( 122)			if (_hx_tmp17) {
HXLINE( 122)				int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN( 122)				_this1->set_y(((( (Float)(_hx_tmp) ) - _this1->get_height()) / ( (Float)(2) )));
            			}
            		}
HXLINE( 124)		 ::flixel::FlxSprite _hx_tmp18 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,1042,590,null());
HXDLIN( 124)		::String library2 = null();
HXDLIN( 124)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("weeb/pixelUI/hand_textbox",67,1b,cd,60),library2);
HXDLIN( 124)		this->handSelect = _hx_tmp18->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE( 125)		 ::flixel::FlxSprite _hx_tmp19 = this->handSelect;
HXDLIN( 125)		Float _hx_tmp20 = this->handSelect->get_width();
HXDLIN( 125)		_hx_tmp19->setGraphicSize(::Std_obj::_hx_int(((_hx_tmp20 * ::PlayState_obj::daPixelZoom) * ((Float)0.9))),null());
HXLINE( 126)		this->handSelect->updateHitbox();
HXLINE( 127)		this->handSelect->set_visible(false);
HXLINE( 128)		this->add(this->handSelect);
HXLINE( 131)		bool _hx_tmp21 = !(talkingRight);
HXLINE( 136)		this->dropText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,242,502,::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.6))),HX_("",00,00,00,00),32,null());
HXLINE( 137)		this->dropText->set_font(HX_("Pixel Arial 11 Bold",ae,17,c6,45));
HXLINE( 138)		this->dropText->set_color(-2583404);
HXLINE( 139)		this->add(this->dropText);
HXLINE( 141)		this->swagDialogue =  ::flixel::addons::text::FlxTypeText_obj::__alloc( HX_CTX ,( (Float)(240) ),( (Float)(500) ),::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.6))),HX_("",00,00,00,00),32,null());
HXLINE( 142)		this->swagDialogue->set_font(HX_("Pixel Arial 11 Bold",ae,17,c6,45));
HXLINE( 143)		this->swagDialogue->set_color(-12640223);
HXLINE( 144)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp22 = ::flixel::FlxG_obj::sound;
HXDLIN( 144)		 ::flixel::_hx_system::FlxSound _hx_tmp23 = _hx_tmp22->load(::Paths_obj::sound(HX_("pixelText",53,7a,83,06),null()),((Float)0.6),null(),null(),null(),null(),null(),null(),null());
HXDLIN( 144)		this->swagDialogue->sounds = ::Array_obj< ::Dynamic>::__new(1)->init(0,_hx_tmp23);
HXLINE( 145)		this->add(this->swagDialogue);
            	}

Dynamic DialogueBox_obj::__CreateEmpty() { return new DialogueBox_obj; }

void *DialogueBox_obj::_hx_vtable = 0;

Dynamic DialogueBox_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DialogueBox_obj > _hx_result = new DialogueBox_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DialogueBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x288ce903) {
			if (inClassId<=(int)0x04b35cb7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x04b35cb7;
			} else {
				return inClassId==(int)0x288ce903;
			}
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void DialogueBox_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_153_update)
HXDLIN( 153)		 ::DialogueBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 155)		if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("roses",04,6c,64,ed))) {
HXLINE( 156)			this->portraitLeft->set_visible(false);
            		}
HXLINE( 157)		if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("thorns",9c,bf,c7,8c))) {
HXLINE( 159)			this->portraitLeft->set_visible(false);
HXLINE( 160)			this->swagDialogue->set_color(-1);
HXLINE( 161)			this->dropText->set_color(-16777216);
            		}
HXLINE( 164)		this->dropText->set_text(this->swagDialogue->text);
HXLINE( 166)		if (::hx::IsNotNull( this->box->animation->_curAnim )) {
HXLINE( 168)			bool _hx_tmp;
HXDLIN( 168)			if ((this->box->animation->_curAnim->name == HX_("normalOpen",91,41,38,70))) {
HXLINE( 168)				_hx_tmp = this->box->animation->_curAnim->finished;
            			}
            			else {
HXLINE( 168)				_hx_tmp = false;
            			}
HXDLIN( 168)			if (_hx_tmp) {
HXLINE( 170)				this->box->animation->play(HX_("normal",27,72,69,30),null(),null(),null());
HXLINE( 171)				this->dialogueOpened = true;
            			}
            		}
HXLINE( 175)		bool _hx_tmp;
HXDLIN( 175)		if (this->dialogueOpened) {
HXLINE( 175)			_hx_tmp = !(this->dialogueStarted);
            		}
            		else {
HXLINE( 175)			_hx_tmp = false;
            		}
HXDLIN( 175)		if (_hx_tmp) {
HXLINE( 177)			this->startDialogue();
HXLINE( 178)			this->dialogueStarted = true;
            		}
HXLINE( 181)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 183)			if (this->dialogueEnded) {
HXLINE( 185)				bool _hx_tmp;
HXDLIN( 185)				if (::hx::IsNull( this->dialogueList->__get(1) )) {
HXLINE( 185)					_hx_tmp = ::hx::IsNotNull( this->dialogueList->__get(0) );
            				}
            				else {
HXLINE( 185)					_hx_tmp = false;
            				}
HXDLIN( 185)				if (_hx_tmp) {
HXLINE( 187)					if (!(this->isEnding)) {
            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::DialogueBox,_gthis) HXARGC(1)
            						void _hx_run( ::flixel::util::FlxTimer tmr){
            							HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_196_update)
HXLINE( 197)							 ::flixel::FlxSprite fh = _gthis->box;
HXDLIN( 197)							fh->set_alpha((fh->alpha - ((Float)0.2)));
HXLINE( 198)							 ::flixel::FlxSprite fh1 = _gthis->bgFade;
HXDLIN( 198)							fh1->set_alpha((fh1->alpha - ((Float)0.13999999999999999)));
HXLINE( 199)							_gthis->portraitLeft->set_visible(false);
HXLINE( 200)							_gthis->portraitRight->set_visible(false);
HXLINE( 201)							 ::flixel::addons::text::FlxTypeText fh2 = _gthis->swagDialogue;
HXDLIN( 201)							fh2->set_alpha((fh2->alpha - ((Float)0.2)));
HXLINE( 202)							 ::flixel::FlxSprite fh3 = _gthis->handSelect;
HXDLIN( 202)							fh3->set_alpha((fh3->alpha - ((Float)0.2)));
HXLINE( 203)							_gthis->dropText->set_alpha(_gthis->swagDialogue->alpha);
            						}
            						HX_END_LOCAL_FUNC1((void))

            						HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::DialogueBox,_gthis) HXARGC(1)
            						void _hx_run( ::flixel::util::FlxTimer tmr){
            							HX_GC_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_207_update)
HXLINE( 208)							_gthis->finishThing();
HXLINE( 209)							_gthis->kill();
            						}
            						HX_END_LOCAL_FUNC1((void))

HXLINE( 189)						this->isEnding = true;
HXLINE( 190)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 190)						_hx_tmp->play(::Paths_obj::sound(HX_("clickText",15,39,f9,2b),null()),((Float)0.8),null(),null(),null(),null());
HXLINE( 192)						bool _hx_tmp1;
HXDLIN( 192)						if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() != HX_("senpai",3c,df,8d,6b))) {
HXLINE( 192)							_hx_tmp1 = (( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("thorns",9c,bf,c7,8c));
            						}
            						else {
HXLINE( 192)							_hx_tmp1 = true;
            						}
HXDLIN( 192)						if (_hx_tmp1) {
HXLINE( 193)							 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 193)							 ::Dynamic To = 0;
HXDLIN( 193)							 ::Dynamic onComplete = null();
HXDLIN( 193)							if (::hx::IsNull( To )) {
HXLINE( 193)								To = 0;
            							}
HXDLIN( 193)							if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 193)								_this->fadeTween->cancel();
            							}
HXDLIN( 193)							_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(To) ),((Float)1.5), ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            						}
HXLINE( 195)						 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.2), ::Dynamic(new _hx_Closure_0(_gthis)),5);
HXLINE( 206)						 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)1.5), ::Dynamic(new _hx_Closure_1(_gthis)),null());
            					}
            				}
            				else {
HXLINE( 215)					this->dialogueList->remove(this->dialogueList->__get(0));
HXLINE( 216)					this->startDialogue();
HXLINE( 217)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 217)					_hx_tmp->play(::Paths_obj::sound(HX_("clickText",15,39,f9,2b),null()),((Float)0.8),null(),null(),null(),null());
            				}
            			}
            			else {
HXLINE( 220)				if (this->dialogueStarted) {
HXLINE( 222)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 222)					_hx_tmp->play(::Paths_obj::sound(HX_("clickText",15,39,f9,2b),null()),((Float)0.8),null(),null(),null(),null());
HXLINE( 223)					this->swagDialogue->skip();
HXLINE( 225)					if (::hx::IsNotNull( this->skipDialogueThing )) {
HXLINE( 226)						this->skipDialogueThing();
            					}
            				}
            			}
            		}
HXLINE( 231)		this->super::update(elapsed);
            	}


void DialogueBox_obj::startDialogue(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::DialogueBox,_gthis) HXARGC(0)
            		void _hx_run(){
            			HX_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_246_startDialogue)
HXLINE( 247)			_gthis->handSelect->set_visible(true);
HXLINE( 248)			_gthis->dialogueEnded = true;
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_237_startDialogue)
HXDLIN( 237)		 ::DialogueBox _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 238)		this->cleanDialog();
HXLINE( 244)		this->swagDialogue->resetText(this->dialogueList->__get(0));
HXLINE( 245)		this->swagDialogue->start(((Float)0.04),true,null(),null(),null());
HXLINE( 246)		this->swagDialogue->completeCallback =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE( 251)		this->handSelect->set_visible(false);
HXLINE( 252)		this->dialogueEnded = false;
HXLINE( 253)		::String _hx_switch_0 = this->curCharacter;
            		if (  (_hx_switch_0==HX_("bf",c4,55,00,00)) ){
HXLINE( 263)			this->portraitLeft->set_visible(false);
HXLINE( 264)			if (!(this->portraitRight->visible)) {
HXLINE( 266)				this->portraitRight->set_visible(true);
HXLINE( 267)				this->portraitRight->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            			}
HXLINE( 262)			goto _hx_goto_10;
            		}
            		if (  (_hx_switch_0==HX_("dad",47,36,4c,00)) ){
HXLINE( 256)			this->portraitRight->set_visible(false);
HXLINE( 257)			if (!(this->portraitLeft->visible)) {
HXLINE( 259)				if ((( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() == HX_("senpai",3c,df,8d,6b))) {
HXLINE( 259)					this->portraitLeft->set_visible(true);
            				}
HXLINE( 260)				this->portraitLeft->animation->play(HX_("enter",18,6d,86,70),null(),null(),null());
            			}
HXLINE( 255)			goto _hx_goto_10;
            		}
            		_hx_goto_10:;
HXLINE( 270)		if (::hx::IsNotNull( this->nextDialogueThing )) {
HXLINE( 271)			this->nextDialogueThing();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBox_obj,startDialogue,(void))

void DialogueBox_obj::cleanDialog(){
            	HX_STACKFRAME(&_hx_pos_abff9fa8c13cc7a0_276_cleanDialog)
HXLINE( 277)		::Array< ::String > splitName = this->dialogueList->__get(0).split(HX_(":",3a,00,00,00));
HXLINE( 278)		this->curCharacter = splitName->__get(1);
HXLINE( 279)		this->dialogueList[0] = ::StringTools_obj::trim(this->dialogueList->__get(0).substr((splitName->__get(1).length + 2),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBox_obj,cleanDialog,(void))


::hx::ObjectPtr< DialogueBox_obj > DialogueBox_obj::__new(::hx::Null< bool >  __o_talkingRight,::Array< ::String > dialogueList) {
	::hx::ObjectPtr< DialogueBox_obj > __this = new DialogueBox_obj();
	__this->__construct(__o_talkingRight,dialogueList);
	return __this;
}

::hx::ObjectPtr< DialogueBox_obj > DialogueBox_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_talkingRight,::Array< ::String > dialogueList) {
	DialogueBox_obj *__this = (DialogueBox_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DialogueBox_obj), true, "DialogueBox"));
	*(void **)__this = DialogueBox_obj::_hx_vtable;
	__this->__construct(__o_talkingRight,dialogueList);
	return __this;
}

DialogueBox_obj::DialogueBox_obj()
{
}

void DialogueBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogueBox);
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(curCharacter,"curCharacter");
	HX_MARK_MEMBER_NAME(dialogueList,"dialogueList");
	HX_MARK_MEMBER_NAME(swagDialogue,"swagDialogue");
	HX_MARK_MEMBER_NAME(dropText,"dropText");
	HX_MARK_MEMBER_NAME(finishThing,"finishThing");
	HX_MARK_MEMBER_NAME(nextDialogueThing,"nextDialogueThing");
	HX_MARK_MEMBER_NAME(skipDialogueThing,"skipDialogueThing");
	HX_MARK_MEMBER_NAME(portraitLeft,"portraitLeft");
	HX_MARK_MEMBER_NAME(portraitRight,"portraitRight");
	HX_MARK_MEMBER_NAME(handSelect,"handSelect");
	HX_MARK_MEMBER_NAME(bgFade,"bgFade");
	HX_MARK_MEMBER_NAME(dialogueOpened,"dialogueOpened");
	HX_MARK_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_MARK_MEMBER_NAME(dialogueEnded,"dialogueEnded");
	HX_MARK_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DialogueBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(curCharacter,"curCharacter");
	HX_VISIT_MEMBER_NAME(dialogueList,"dialogueList");
	HX_VISIT_MEMBER_NAME(swagDialogue,"swagDialogue");
	HX_VISIT_MEMBER_NAME(dropText,"dropText");
	HX_VISIT_MEMBER_NAME(finishThing,"finishThing");
	HX_VISIT_MEMBER_NAME(nextDialogueThing,"nextDialogueThing");
	HX_VISIT_MEMBER_NAME(skipDialogueThing,"skipDialogueThing");
	HX_VISIT_MEMBER_NAME(portraitLeft,"portraitLeft");
	HX_VISIT_MEMBER_NAME(portraitRight,"portraitRight");
	HX_VISIT_MEMBER_NAME(handSelect,"handSelect");
	HX_VISIT_MEMBER_NAME(bgFade,"bgFade");
	HX_VISIT_MEMBER_NAME(dialogueOpened,"dialogueOpened");
	HX_VISIT_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_VISIT_MEMBER_NAME(dialogueEnded,"dialogueEnded");
	HX_VISIT_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DialogueBox_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return ::hx::Val( box ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { return ::hx::Val( bgFade ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dropText") ) { return ::hx::Val( dropText ); }
		if (HX_FIELD_EQ(inName,"isEnding") ) { return ::hx::Val( isEnding ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"handSelect") ) { return ::hx::Val( handSelect ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { return ::hx::Val( finishThing ); }
		if (HX_FIELD_EQ(inName,"cleanDialog") ) { return ::hx::Val( cleanDialog_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { return ::hx::Val( curCharacter ); }
		if (HX_FIELD_EQ(inName,"dialogueList") ) { return ::hx::Val( dialogueList ); }
		if (HX_FIELD_EQ(inName,"swagDialogue") ) { return ::hx::Val( swagDialogue ); }
		if (HX_FIELD_EQ(inName,"portraitLeft") ) { return ::hx::Val( portraitLeft ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"portraitRight") ) { return ::hx::Val( portraitRight ); }
		if (HX_FIELD_EQ(inName,"dialogueEnded") ) { return ::hx::Val( dialogueEnded ); }
		if (HX_FIELD_EQ(inName,"startDialogue") ) { return ::hx::Val( startDialogue_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dialogueOpened") ) { return ::hx::Val( dialogueOpened ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { return ::hx::Val( dialogueStarted ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextDialogueThing") ) { return ::hx::Val( nextDialogueThing ); }
		if (HX_FIELD_EQ(inName,"skipDialogueThing") ) { return ::hx::Val( skipDialogueThing ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DialogueBox_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { bgFade=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dropText") ) { dropText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isEnding") ) { isEnding=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"handSelect") ) { handSelect=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { finishThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"curCharacter") ) { curCharacter=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogueList") ) { dialogueList=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"swagDialogue") ) { swagDialogue=inValue.Cast<  ::flixel::addons::text::FlxTypeText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"portraitLeft") ) { portraitLeft=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"portraitRight") ) { portraitRight=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogueEnded") ) { dialogueEnded=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"dialogueOpened") ) { dialogueOpened=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { dialogueStarted=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"nextDialogueThing") ) { nextDialogueThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"skipDialogueThing") ) { skipDialogueThing=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DialogueBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("box",0b,be,4a,00));
	outFields->push(HX_("curCharacter",09,86,7c,d7));
	outFields->push(HX_("dialogueList",96,e1,d8,0d));
	outFields->push(HX_("swagDialogue",c2,ad,00,ad));
	outFields->push(HX_("dropText",7c,74,94,f2));
	outFields->push(HX_("portraitLeft",02,9f,53,0d));
	outFields->push(HX_("portraitRight",81,90,e4,12));
	outFields->push(HX_("handSelect",cb,77,90,7c));
	outFields->push(HX_("bgFade",e1,fd,cd,ab));
	outFields->push(HX_("dialogueOpened",e1,e5,9f,10));
	outFields->push(HX_("dialogueStarted",09,77,22,70));
	outFields->push(HX_("dialogueEnded",c2,14,61,0b));
	outFields->push(HX_("isEnding",71,3f,f2,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DialogueBox_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,box),HX_("box",0b,be,4a,00)},
	{::hx::fsString,(int)offsetof(DialogueBox_obj,curCharacter),HX_("curCharacter",09,86,7c,d7)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DialogueBox_obj,dialogueList),HX_("dialogueList",96,e1,d8,0d)},
	{::hx::fsObject /*  ::flixel::addons::text::FlxTypeText */ ,(int)offsetof(DialogueBox_obj,swagDialogue),HX_("swagDialogue",c2,ad,00,ad)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(DialogueBox_obj,dropText),HX_("dropText",7c,74,94,f2)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBox_obj,finishThing),HX_("finishThing",9b,aa,8e,36)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBox_obj,nextDialogueThing),HX_("nextDialogueThing",c3,c2,a1,d9)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBox_obj,skipDialogueThing),HX_("skipDialogueThing",b7,29,12,4e)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,portraitLeft),HX_("portraitLeft",02,9f,53,0d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,portraitRight),HX_("portraitRight",81,90,e4,12)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,handSelect),HX_("handSelect",cb,77,90,7c)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBox_obj,bgFade),HX_("bgFade",e1,fd,cd,ab)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,dialogueOpened),HX_("dialogueOpened",e1,e5,9f,10)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,dialogueStarted),HX_("dialogueStarted",09,77,22,70)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,dialogueEnded),HX_("dialogueEnded",c2,14,61,0b)},
	{::hx::fsBool,(int)offsetof(DialogueBox_obj,isEnding),HX_("isEnding",71,3f,f2,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DialogueBox_obj_sStaticStorageInfo = 0;
#endif

static ::String DialogueBox_obj_sMemberFields[] = {
	HX_("box",0b,be,4a,00),
	HX_("curCharacter",09,86,7c,d7),
	HX_("dialogueList",96,e1,d8,0d),
	HX_("swagDialogue",c2,ad,00,ad),
	HX_("dropText",7c,74,94,f2),
	HX_("finishThing",9b,aa,8e,36),
	HX_("nextDialogueThing",c3,c2,a1,d9),
	HX_("skipDialogueThing",b7,29,12,4e),
	HX_("portraitLeft",02,9f,53,0d),
	HX_("portraitRight",81,90,e4,12),
	HX_("handSelect",cb,77,90,7c),
	HX_("bgFade",e1,fd,cd,ab),
	HX_("dialogueOpened",e1,e5,9f,10),
	HX_("dialogueStarted",09,77,22,70),
	HX_("dialogueEnded",c2,14,61,0b),
	HX_("update",09,86,05,87),
	HX_("isEnding",71,3f,f2,52),
	HX_("startDialogue",9a,8f,4f,ac),
	HX_("cleanDialog",31,37,ca,9e),
	::String(null()) };

::hx::Class DialogueBox_obj::__mClass;

void DialogueBox_obj::__register()
{
	DialogueBox_obj _hx_dummy;
	DialogueBox_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DialogueBox",b3,1f,c8,ff);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DialogueBox_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DialogueBox_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogueBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogueBox_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

