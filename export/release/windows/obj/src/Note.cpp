#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_ColorSwap
#include <ColorSwap.h>
#endif
#ifndef INCLUDED_ColorSwapShader
#include <ColorSwapShader.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Note
#include <Note.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_editors_ChartingState
#include <editors/ChartingState.h>
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
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_20_new,"Note","new",0x1cc75604,"Note.new","Note.hx",20,0x1a8855ec)
static const int _hx_array_data_33e34412_1[] = {
	(int)0,(int)1,(int)2,(int)3,
};
static const ::String _hx_array_data_33e34412_2[] = {
	HX_("purple",3c,f6,89,71),HX_("blue",9a,42,19,41),HX_("green",c3,0e,ed,99),HX_("red",51,d9,56,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_98_set_multSpeed,"Note","set_multSpeed",0x62b509fe,"Note.set_multSpeed","Note.hx",98,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_107_resizeByRatio,"Note","resizeByRatio",0xd217f2c4,"Note.resizeByRatio","Note.hx",107,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_114_set_texture,"Note","set_texture",0x04eff9a2,"Note.set_texture","Note.hx",114,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_122_set_noteType,"Note","set_noteType",0x43779525,"Note.set_noteType","Note.hx",122,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_251_reloadNote,"Note","reloadNote",0x1599eec7,"Note.reloadNote","Note.hx",251,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_322_loadNoteAnims,"Note","loadNoteAnims",0x493f5f8e,"Note.loadNoteAnims","Note.hx",322,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_337_loadPixelNoteAnims,"Note","loadPixelNoteAnims",0xefd7042c,"Note.loadPixelNoteAnims","Note.hx",337,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_346_update,"Note","update",0xca3a1ee5,"Note.update","Note.hx",346,0x1a8855ec)
HX_LOCAL_STACK_FRAME(_hx_pos_3be6f1ff2d789e96_60_boot,"Note","boot",0x09bcee0e,"Note.boot","Note.hx",60,0x1a8855ec)

void Note_obj::__construct(Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote, ::Dynamic __o_inEditor){
            		 ::Dynamic sustainNote = __o_sustainNote;
            		if (::hx::IsNull(__o_sustainNote)) sustainNote = false;
            		 ::Dynamic inEditor = __o_inEditor;
            		if (::hx::IsNull(__o_inEditor)) inEditor = false;
            	HX_GC_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_20_new)
HXLINE( 250)		this->originalHeightForCalcs = ((Float)6);
HXLINE( 249)		this->lastNoteScaleToo = ((Float)1);
HXLINE( 248)		this->lastNoteOffsetXForPixelAutoAdjusting = ((Float)0);
HXLINE(  96)		this->hitsoundDisabled = false;
HXLINE(  94)		this->distance = ((Float)2000);
HXLINE(  93)		this->hitCausesMiss = false;
HXLINE(  92)		this->noMissAnimation = false;
HXLINE(  91)		this->noAnimation = false;
HXLINE(  89)		this->texture = null();
HXLINE(  87)		this->ratingDisabled = false;
HXLINE(  86)		this->ratingMod = ((Float)0);
HXLINE(  85)		this->rating = HX_("unknown",8a,23,7b,e1);
HXLINE(  84)		this->missHealth = ((Float)0.0475);
HXLINE(  83)		this->hitHealth = ((Float)0.023);
HXLINE(  81)		this->copyAlpha = true;
HXLINE(  80)		this->copyAngle = true;
HXLINE(  79)		this->copyY = true;
HXLINE(  78)		this->copyX = true;
HXLINE(  76)		this->multSpeed = ((Float)1);
HXLINE(  75)		this->multAlpha = ((Float)1);
HXLINE(  74)		this->offsetAngle = ((Float)0);
HXLINE(  73)		this->offsetY = ((Float)0);
HXLINE(  72)		this->offsetX = ((Float)0);
HXLINE(  70)		this->noteSplashBrt = ((Float)0);
HXLINE(  69)		this->noteSplashSat = ((Float)0);
HXLINE(  68)		this->noteSplashHue = ((Float)0);
HXLINE(  67)		this->noteSplashTexture = null();
HXLINE(  66)		this->noteSplashDisabled = false;
HXLINE(  63)		this->pixelInt = ::Array_obj< int >::fromData( _hx_array_data_33e34412_1,4);
HXLINE(  62)		this->colArray = ::Array_obj< ::String >::fromData( _hx_array_data_33e34412_2,4);
HXLINE(  58)		this->lowPriority = false;
HXLINE(  57)		this->lateHitMult = ((Float)1);
HXLINE(  56)		this->earlyHitMult = ((Float)0.5);
HXLINE(  55)		this->gfNote = false;
HXLINE(  54)		this->animSuffix = HX_("",00,00,00,00);
HXLINE(  52)		this->inEditor = false;
HXLINE(  49)		this->eventVal2 = HX_("",00,00,00,00);
HXLINE(  48)		this->eventVal1 = HX_("",00,00,00,00);
HXLINE(  47)		this->eventLength = 0;
HXLINE(  46)		this->eventName = HX_("",00,00,00,00);
HXLINE(  44)		this->noteType = null();
HXLINE(  43)		this->isSustainNote = false;
HXLINE(  42)		this->sustainLength = ((Float)0);
HXLINE(  40)		this->blockHit = false;
HXLINE(  38)		this->tail = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  36)		this->spawned = false;
HXLINE(  32)		this->noteWasHit = false;
HXLINE(  31)		this->hitByOpponent = false;
HXLINE(  30)		this->ignoreNote = false;
HXLINE(  29)		this->wasGoodHit = false;
HXLINE(  28)		this->tooLate = false;
HXLINE(  27)		this->canBeHit = false;
HXLINE(  26)		this->noteData = 0;
HXLINE(  25)		this->mustPress = false;
HXLINE(  24)		this->strumTime = ((Float)0);
HXLINE(  22)		this->extraData =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 166)		super::__construct(null(),null(),null());
HXLINE( 168)		if (::hx::IsNull( prevNote )) {
HXLINE( 169)			prevNote = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 171)		this->prevNote = prevNote;
HXLINE( 172)		this->isSustainNote = ( (bool)(sustainNote) );
HXLINE( 173)		this->inEditor = ( (bool)(inEditor) );
HXLINE( 175)		int _hx_tmp;
HXDLIN( 175)		if (::ClientPrefs_obj::middleScroll) {
HXLINE( 175)			_hx_tmp = ::PlayState_obj::STRUM_X_MIDDLESCROLL;
            		}
            		else {
HXLINE( 175)			_hx_tmp = ::PlayState_obj::STRUM_X;
            		}
HXDLIN( 175)		this->set_x((this->x + (_hx_tmp + 50)));
HXLINE( 177)		this->set_y((this->y - ( (Float)(2000) )));
HXLINE( 178)		this->strumTime = strumTime;
HXLINE( 179)		if (!(( (bool)(inEditor) ))) {
HXLINE( 179)			 ::Note _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 179)			_hx_tmp->strumTime = (_hx_tmp->strumTime + ::ClientPrefs_obj::noteOffset);
            		}
HXLINE( 181)		this->noteData = noteData;
HXLINE( 183)		if ((noteData > -1)) {
HXLINE( 184)			this->set_texture(HX_("",00,00,00,00));
HXLINE( 185)			this->colorSwap =  ::ColorSwap_obj::__alloc( HX_CTX );
HXLINE( 186)			this->shader = this->colorSwap->shader;
HXLINE( 188)			this->set_x((this->x + (::Note_obj::swagWidth * ( (Float)(noteData) ))));
HXLINE( 189)			bool _hx_tmp;
HXDLIN( 189)			bool _hx_tmp1;
HXDLIN( 189)			if (!(this->isSustainNote)) {
HXLINE( 189)				_hx_tmp1 = (noteData > -1);
            			}
            			else {
HXLINE( 189)				_hx_tmp1 = false;
            			}
HXDLIN( 189)			if (_hx_tmp1) {
HXLINE( 189)				_hx_tmp = (noteData < 4);
            			}
            			else {
HXLINE( 189)				_hx_tmp = false;
            			}
HXDLIN( 189)			if (_hx_tmp) {
HXLINE( 190)				::String animToPlay = HX_("",00,00,00,00);
HXLINE( 191)				animToPlay = this->colArray->__get(::hx::Mod(noteData,4));
HXLINE( 192)				this->animation->play((animToPlay + HX_("Scroll",2d,4c,f9,7b)),null(),null(),null());
            			}
            		}
HXLINE( 198)		if (::hx::IsNotNull( prevNote )) {
HXLINE( 199)			prevNote->nextNote = ::hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 201)		bool _hx_tmp1;
HXDLIN( 201)		if (this->isSustainNote) {
HXLINE( 201)			_hx_tmp1 = ::hx::IsNotNull( prevNote );
            		}
            		else {
HXLINE( 201)			_hx_tmp1 = false;
            		}
HXDLIN( 201)		if (_hx_tmp1) {
HXLINE( 203)			this->set_alpha(((Float)0.6));
HXLINE( 204)			this->multAlpha = ((Float)0.6);
HXLINE( 205)			this->hitsoundDisabled = true;
HXLINE( 206)			if (::ClientPrefs_obj::downScroll) {
HXLINE( 206)				this->set_flipY(true);
            			}
HXLINE( 208)			 ::Note _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 208)			Float _hx_tmp1 = _hx_tmp->offsetX;
HXDLIN( 208)			_hx_tmp->offsetX = (_hx_tmp1 + (this->get_width() / ( (Float)(2) )));
HXLINE( 209)			this->copyAngle = false;
HXLINE( 211)			this->animation->play((this->colArray->__get(::hx::Mod(noteData,4)) + HX_("holdend",fc,4b,02,b8)),null(),null(),null());
HXLINE( 213)			this->updateHitbox();
HXLINE( 215)			 ::Note _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 215)			Float _hx_tmp3 = _hx_tmp2->offsetX;
HXDLIN( 215)			_hx_tmp2->offsetX = (_hx_tmp3 - (this->get_width() / ( (Float)(2) )));
HXLINE( 217)			if (::PlayState_obj::isPixelStage) {
HXLINE( 218)				 ::Note _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 218)				_hx_tmp->offsetX = (_hx_tmp->offsetX + 30);
            			}
HXLINE( 220)			if (prevNote->isSustainNote) {
HXLINE( 222)				prevNote->animation->play((this->colArray->__get(::hx::Mod(prevNote->noteData,4)) + HX_("hold",3f,c9,12,45)),null(),null(),null());
HXLINE( 224)				 ::flixel::math::FlxPoint fh = prevNote->scale;
HXDLIN( 224)				fh->set_y((fh->y * ((::Conductor_obj::stepCrochet / ( (Float)(100) )) * ((Float)1.05))));
HXLINE( 225)				if (::hx::IsNotNull( ::PlayState_obj::instance )) {
HXLINE( 227)					 ::flixel::math::FlxPoint fh = prevNote->scale;
HXDLIN( 227)					fh->set_y((fh->y * ::PlayState_obj::instance->songSpeed));
            				}
HXLINE( 230)				if (::PlayState_obj::isPixelStage) {
HXLINE( 231)					 ::flixel::math::FlxPoint fh = prevNote->scale;
HXDLIN( 231)					fh->set_y((fh->y * ((Float)1.19)));
HXLINE( 232)					 ::flixel::math::FlxPoint fh1 = prevNote->scale;
HXDLIN( 232)					Float fh2 = fh1->y;
HXDLIN( 232)					fh1->set_y((fh2 * (( (Float)(6) ) / this->get_height())));
            				}
HXLINE( 234)				prevNote->updateHitbox();
            			}
HXLINE( 238)			if (::PlayState_obj::isPixelStage) {
HXLINE( 239)				 ::flixel::math::FlxPoint fh = this->scale;
HXDLIN( 239)				fh->set_y((fh->y * ::PlayState_obj::daPixelZoom));
HXLINE( 240)				this->updateHitbox();
            			}
            		}
            		else {
HXLINE( 242)			if (!(this->isSustainNote)) {
HXLINE( 243)				this->earlyHitMult = ( (Float)(1) );
            			}
            		}
HXLINE( 245)		this->set_x((this->x + this->offsetX));
            	}

Dynamic Note_obj::__CreateEmpty() { return new Note_obj; }

void *Note_obj::_hx_vtable = 0;

Dynamic Note_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Note_obj > _hx_result = new Note_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool Note_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x08363a36) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x08363a36;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

Float Note_obj::set_multSpeed(Float value){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_98_set_multSpeed)
HXLINE(  99)		this->resizeByRatio((value / this->multSpeed));
HXLINE( 100)		this->multSpeed = value;
HXLINE( 102)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Note_obj,set_multSpeed,return )

void Note_obj::resizeByRatio(Float ratio){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_107_resizeByRatio)
HXDLIN( 107)		bool _hx_tmp;
HXDLIN( 107)		if (this->isSustainNote) {
HXDLIN( 107)			_hx_tmp = !(::StringTools_obj::endsWith(this->animation->_curAnim->name,HX_("end",db,03,4d,00)));
            		}
            		else {
HXDLIN( 107)			_hx_tmp = false;
            		}
HXDLIN( 107)		if (_hx_tmp) {
HXLINE( 109)			 ::flixel::math::FlxPoint fh = this->scale;
HXDLIN( 109)			fh->set_y((fh->y * ratio));
HXLINE( 110)			this->updateHitbox();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Note_obj,resizeByRatio,(void))

::String Note_obj::set_texture(::String value){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_114_set_texture)
HXLINE( 115)		if ((this->texture != value)) {
HXLINE( 116)			this->reloadNote(HX_("",00,00,00,00),value,null());
            		}
HXLINE( 118)		this->texture = value;
HXLINE( 119)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Note_obj,set_texture,return )

::String Note_obj::set_noteType(::String value){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_122_set_noteType)
HXLINE( 123)		this->noteSplashTexture = ( (::String)(::PlayState_obj::SONG->__Field(HX_("splashSkin",84,03,e1,a1),::hx::paccDynamic)) );
HXLINE( 124)		bool _hx_tmp;
HXDLIN( 124)		if ((this->noteData > -1)) {
HXLINE( 124)			_hx_tmp = (this->noteData < ::ClientPrefs_obj::arrowHSV->length);
            		}
            		else {
HXLINE( 124)			_hx_tmp = false;
            		}
HXDLIN( 124)		if (_hx_tmp) {
HXLINE( 126)			this->colorSwap->set_hue((( (Float)(::ClientPrefs_obj::arrowHSV->__get(this->noteData).StaticCast< ::Array< int > >()->__get(0)) ) / ( (Float)(360) )));
HXLINE( 127)			this->colorSwap->set_saturation((( (Float)(::ClientPrefs_obj::arrowHSV->__get(this->noteData).StaticCast< ::Array< int > >()->__get(1)) ) / ( (Float)(100) )));
HXLINE( 128)			this->colorSwap->set_brightness((( (Float)(::ClientPrefs_obj::arrowHSV->__get(this->noteData).StaticCast< ::Array< int > >()->__get(2)) ) / ( (Float)(100) )));
            		}
HXLINE( 131)		bool _hx_tmp1;
HXDLIN( 131)		if ((this->noteData > -1)) {
HXLINE( 131)			_hx_tmp1 = (this->noteType != value);
            		}
            		else {
HXLINE( 131)			_hx_tmp1 = false;
            		}
HXDLIN( 131)		if (_hx_tmp1) {
HXLINE( 132)			::String _hx_switch_0 = value;
            			if (  (_hx_switch_0==HX_("Alt Animation",0d,81,c1,cd)) ){
HXLINE( 149)				this->animSuffix = HX_("-alt",1c,93,08,1e);
HXDLIN( 149)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("GF Sing",10,84,6e,29)) ){
HXLINE( 154)				this->gfNote = true;
HXDLIN( 154)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("Hurt Note",a3,41,9e,fe)) ){
HXLINE( 134)				this->ignoreNote = this->mustPress;
HXLINE( 135)				this->reloadNote(HX_("HURT",0f,24,d8,2f),null(),null());
HXLINE( 136)				this->noteSplashTexture = HX_("HURTnoteSplashes",36,d6,ee,48);
HXLINE( 137)				this->colorSwap->set_hue(( (Float)(0) ));
HXLINE( 138)				this->colorSwap->set_saturation(( (Float)(0) ));
HXLINE( 139)				this->colorSwap->set_brightness(( (Float)(0) ));
HXLINE( 140)				this->lowPriority = true;
HXLINE( 142)				if (this->isSustainNote) {
HXLINE( 143)					this->missHealth = ((Float)0.1);
            				}
            				else {
HXLINE( 145)					this->missHealth = ((Float)0.3);
            				}
HXLINE( 147)				this->hitCausesMiss = true;
HXLINE( 133)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("No Animation",65,b2,1a,df)) ){
HXLINE( 151)				this->noAnimation = true;
HXLINE( 152)				this->noMissAnimation = true;
HXLINE( 150)				goto _hx_goto_6;
            			}
            			_hx_goto_6:;
HXLINE( 156)			this->noteType = value;
            		}
HXLINE( 158)		this->noteSplashHue = this->colorSwap->hue;
HXLINE( 159)		this->noteSplashSat = this->colorSwap->saturation;
HXLINE( 160)		this->noteSplashBrt = this->colorSwap->brightness;
HXLINE( 161)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Note_obj,set_noteType,return )

void Note_obj::reloadNote(::String __o_prefix,::String __o_texture,::String __o_suffix){
            		::String prefix = __o_prefix;
            		if (::hx::IsNull(__o_prefix)) prefix = HX_("",00,00,00,00);
            		::String texture = __o_texture;
            		if (::hx::IsNull(__o_texture)) texture = HX_("",00,00,00,00);
            		::String suffix = __o_suffix;
            		if (::hx::IsNull(__o_suffix)) suffix = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_251_reloadNote)
HXLINE( 252)		if (::hx::IsNull( prefix )) {
HXLINE( 252)			prefix = HX_("",00,00,00,00);
            		}
HXLINE( 253)		if (::hx::IsNull( texture )) {
HXLINE( 253)			texture = HX_("",00,00,00,00);
            		}
HXLINE( 254)		if (::hx::IsNull( suffix )) {
HXLINE( 254)			suffix = HX_("",00,00,00,00);
            		}
HXLINE( 256)		::String skin = texture;
HXLINE( 257)		if ((texture.length < 1)) {
HXLINE( 258)			skin = ( (::String)(::PlayState_obj::SONG->__Field(HX_("arrowSkin",e6,d4,f8,07),::hx::paccDynamic)) );
HXLINE( 259)			bool _hx_tmp;
HXDLIN( 259)			if (::hx::IsNotNull( skin )) {
HXLINE( 259)				_hx_tmp = (skin.length < 1);
            			}
            			else {
HXLINE( 259)				_hx_tmp = true;
            			}
HXDLIN( 259)			if (_hx_tmp) {
HXLINE( 260)				skin = HX_("NOTE_assets",70,3c,09,f7);
            			}
            		}
HXLINE( 264)		::String animName = null();
HXLINE( 265)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 266)			animName = this->animation->_curAnim->name;
            		}
HXLINE( 269)		::Array< ::String > arraySkin = skin.split(HX_("/",2f,00,00,00));
HXLINE( 270)		arraySkin[(arraySkin->length - 1)] = ((prefix + arraySkin->__get((arraySkin->length - 1))) + suffix);
HXLINE( 272)		Float lastScaleY = this->scale->y;
HXLINE( 273)		::String blahblah = arraySkin->join(HX_("/",2f,00,00,00));
HXLINE( 274)		if (::PlayState_obj::isPixelStage) {
HXLINE( 275)			if (this->isSustainNote) {
HXLINE( 276)				::String library = null();
HXDLIN( 276)				 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(((HX_("pixelUI/",95,50,4f,7e) + blahblah) + HX_("ENDS",38,24,d7,2d)),library);
HXDLIN( 276)				this->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE( 277)				this->set_width((this->get_width() / ( (Float)(4) )));
HXLINE( 278)				this->set_height((this->get_height() / ( (Float)(2) )));
HXLINE( 279)				this->originalHeightForCalcs = this->get_height();
HXLINE( 280)				::String library1 = null();
HXDLIN( 280)				 ::flixel::graphics::FlxGraphic returnAsset1 = ::Paths_obj::returnGraphic(((HX_("pixelUI/",95,50,4f,7e) + blahblah) + HX_("ENDS",38,24,d7,2d)),library1);
HXDLIN( 280)				int _hx_tmp = ::Math_obj::floor(this->get_width());
HXDLIN( 280)				this->loadGraphic(returnAsset1,true,_hx_tmp,::Math_obj::floor(this->get_height()),null(),null());
            			}
            			else {
HXLINE( 282)				::String library = null();
HXDLIN( 282)				 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic((HX_("pixelUI/",95,50,4f,7e) + blahblah),library);
HXDLIN( 282)				this->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE( 283)				this->set_width((this->get_width() / ( (Float)(4) )));
HXLINE( 284)				this->set_height((this->get_height() / ( (Float)(5) )));
HXLINE( 285)				::String library1 = null();
HXDLIN( 285)				 ::flixel::graphics::FlxGraphic returnAsset1 = ::Paths_obj::returnGraphic((HX_("pixelUI/",95,50,4f,7e) + blahblah),library1);
HXDLIN( 285)				int _hx_tmp = ::Math_obj::floor(this->get_width());
HXDLIN( 285)				this->loadGraphic(returnAsset1,true,_hx_tmp,::Math_obj::floor(this->get_height()),null(),null());
            			}
HXLINE( 287)			Float _hx_tmp = this->get_width();
HXDLIN( 287)			this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp * ::PlayState_obj::daPixelZoom)),null());
HXLINE( 288)			this->loadPixelNoteAnims();
HXLINE( 289)			this->set_antialiasing(false);
HXLINE( 291)			if (this->isSustainNote) {
HXLINE( 292)				 ::Note _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 292)				_hx_tmp->offsetX = (_hx_tmp->offsetX + this->lastNoteOffsetXForPixelAutoAdjusting);
HXLINE( 293)				Float _hx_tmp1 = (this->get_width() - ( (Float)(7) ));
HXDLIN( 293)				this->lastNoteOffsetXForPixelAutoAdjusting = (_hx_tmp1 * (::PlayState_obj::daPixelZoom / ( (Float)(2) )));
HXLINE( 294)				 ::Note _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 294)				_hx_tmp2->offsetX = (_hx_tmp2->offsetX - this->lastNoteOffsetXForPixelAutoAdjusting);
            			}
            		}
            		else {
HXLINE( 304)			::String library = null();
HXDLIN( 304)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(blahblah,null());
HXDLIN( 304)			bool xmlExists = false;
HXDLIN( 304)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + blahblah) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 304)				xmlExists = true;
            			}
HXDLIN( 304)			 ::Dynamic _hx_tmp;
HXDLIN( 304)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 304)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE( 304)				 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(blahblah,library);
HXDLIN( 304)				_hx_tmp = returnAsset;
            			}
HXDLIN( 304)			::String _hx_tmp1;
HXDLIN( 304)			if (xmlExists) {
HXLINE( 304)				_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + blahblah) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE( 304)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + blahblah) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN( 304)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 305)			this->loadNoteAnims();
HXLINE( 306)			this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
            		}
HXLINE( 308)		if (this->isSustainNote) {
HXLINE( 309)			this->scale->set_y(lastScaleY);
            		}
HXLINE( 311)		this->updateHitbox();
HXLINE( 313)		if (::hx::IsNotNull( animName )) {
HXLINE( 314)			this->animation->play(animName,true,null(),null());
            		}
HXLINE( 316)		if (this->inEditor) {
HXLINE( 317)			this->setGraphicSize(::editors::ChartingState_obj::GRID_SIZE,::editors::ChartingState_obj::GRID_SIZE);
HXLINE( 318)			this->updateHitbox();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Note_obj,reloadNote,(void))

void Note_obj::loadNoteAnims(){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_322_loadNoteAnims)
HXLINE( 323)		this->animation->addByPrefix((this->colArray->__get(this->noteData) + HX_("Scroll",2d,4c,f9,7b)),(this->colArray->__get(this->noteData) + HX_("0",30,00,00,00)),null(),null(),null(),null());
HXLINE( 325)		if (this->isSustainNote) {
HXLINE( 327)			this->animation->addByPrefix(HX_("purpleholdend",40,d5,15,5b),HX_("pruple end hold",6e,7c,17,3a),null(),null(),null(),null());
HXLINE( 328)			this->animation->addByPrefix((this->colArray->__get(this->noteData) + HX_("holdend",fc,4b,02,b8)),(this->colArray->__get(this->noteData) + HX_(" hold end",9a,cc,8a,7a)),null(),null(),null(),null());
HXLINE( 329)			this->animation->addByPrefix((this->colArray->__get(this->noteData) + HX_("hold",3f,c9,12,45)),(this->colArray->__get(this->noteData) + HX_(" hold piece",6d,10,66,9e)),null(),null(),null(),null());
            		}
HXLINE( 332)		this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ((Float)0.7))),null());
HXLINE( 333)		this->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Note_obj,loadNoteAnims,(void))

void Note_obj::loadPixelNoteAnims(){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_337_loadPixelNoteAnims)
HXDLIN( 337)		if (this->isSustainNote) {
HXLINE( 338)			this->animation->add((this->colArray->__get(this->noteData) + HX_("holdend",fc,4b,02,b8)),::Array_obj< int >::__new(1)->init(0,(this->pixelInt->__get(this->noteData) + 4)),null(),null(),null(),null());
HXLINE( 339)			this->animation->add((this->colArray->__get(this->noteData) + HX_("hold",3f,c9,12,45)),::Array_obj< int >::__new(1)->init(0,this->pixelInt->__get(this->noteData)),null(),null(),null(),null());
            		}
            		else {
HXLINE( 341)			this->animation->add((this->colArray->__get(this->noteData) + HX_("Scroll",2d,4c,f9,7b)),::Array_obj< int >::__new(1)->init(0,(this->pixelInt->__get(this->noteData) + 4)),null(),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Note_obj,loadPixelNoteAnims,(void))

void Note_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_346_update)
HXLINE( 347)		this->super::update(elapsed);
HXLINE( 349)		if (this->mustPress) {
HXLINE( 352)			bool _hx_tmp;
HXDLIN( 352)			if ((this->strumTime > (::Conductor_obj::songPosition - (::Conductor_obj::safeZoneOffset * this->lateHitMult)))) {
HXLINE( 352)				_hx_tmp = (this->strumTime < (::Conductor_obj::songPosition + (::Conductor_obj::safeZoneOffset * this->earlyHitMult)));
            			}
            			else {
HXLINE( 352)				_hx_tmp = false;
            			}
HXDLIN( 352)			if (_hx_tmp) {
HXLINE( 354)				this->canBeHit = true;
            			}
            			else {
HXLINE( 356)				this->canBeHit = false;
            			}
HXLINE( 358)			bool _hx_tmp1;
HXDLIN( 358)			if ((this->strumTime < (::Conductor_obj::songPosition - ::Conductor_obj::safeZoneOffset))) {
HXLINE( 358)				_hx_tmp1 = !(this->wasGoodHit);
            			}
            			else {
HXLINE( 358)				_hx_tmp1 = false;
            			}
HXDLIN( 358)			if (_hx_tmp1) {
HXLINE( 359)				this->tooLate = true;
            			}
            		}
            		else {
HXLINE( 363)			this->canBeHit = false;
HXLINE( 365)			if ((this->strumTime < (::Conductor_obj::songPosition + (::Conductor_obj::safeZoneOffset * this->earlyHitMult)))) {
HXLINE( 367)				bool _hx_tmp;
HXDLIN( 367)				bool _hx_tmp1;
HXDLIN( 367)				if (this->isSustainNote) {
HXLINE( 367)					_hx_tmp1 = this->prevNote->wasGoodHit;
            				}
            				else {
HXLINE( 367)					_hx_tmp1 = false;
            				}
HXDLIN( 367)				if (!(_hx_tmp1)) {
HXLINE( 367)					_hx_tmp = (this->strumTime <= ::Conductor_obj::songPosition);
            				}
            				else {
HXLINE( 367)					_hx_tmp = true;
            				}
HXDLIN( 367)				if (_hx_tmp) {
HXLINE( 368)					this->wasGoodHit = true;
            				}
            			}
            		}
HXLINE( 372)		bool _hx_tmp;
HXDLIN( 372)		if (this->tooLate) {
HXLINE( 372)			_hx_tmp = !(this->inEditor);
            		}
            		else {
HXLINE( 372)			_hx_tmp = false;
            		}
HXDLIN( 372)		if (_hx_tmp) {
HXLINE( 374)			if ((this->alpha > ((Float)0.3))) {
HXLINE( 375)				this->set_alpha(((Float)0.3));
            			}
            		}
            	}


Float Note_obj::swagWidth;


::hx::ObjectPtr< Note_obj > Note_obj::__new(Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote, ::Dynamic __o_inEditor) {
	::hx::ObjectPtr< Note_obj > __this = new Note_obj();
	__this->__construct(strumTime,noteData,prevNote,__o_sustainNote,__o_inEditor);
	return __this;
}

::hx::ObjectPtr< Note_obj > Note_obj::__alloc(::hx::Ctx *_hx_ctx,Float strumTime,int noteData, ::Note prevNote, ::Dynamic __o_sustainNote, ::Dynamic __o_inEditor) {
	Note_obj *__this = (Note_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Note_obj), true, "Note"));
	*(void **)__this = Note_obj::_hx_vtable;
	__this->__construct(strumTime,noteData,prevNote,__o_sustainNote,__o_inEditor);
	return __this;
}

Note_obj::Note_obj()
{
}

void Note_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Note);
	HX_MARK_MEMBER_NAME(extraData,"extraData");
	HX_MARK_MEMBER_NAME(strumTime,"strumTime");
	HX_MARK_MEMBER_NAME(mustPress,"mustPress");
	HX_MARK_MEMBER_NAME(noteData,"noteData");
	HX_MARK_MEMBER_NAME(canBeHit,"canBeHit");
	HX_MARK_MEMBER_NAME(tooLate,"tooLate");
	HX_MARK_MEMBER_NAME(wasGoodHit,"wasGoodHit");
	HX_MARK_MEMBER_NAME(ignoreNote,"ignoreNote");
	HX_MARK_MEMBER_NAME(hitByOpponent,"hitByOpponent");
	HX_MARK_MEMBER_NAME(noteWasHit,"noteWasHit");
	HX_MARK_MEMBER_NAME(prevNote,"prevNote");
	HX_MARK_MEMBER_NAME(nextNote,"nextNote");
	HX_MARK_MEMBER_NAME(spawned,"spawned");
	HX_MARK_MEMBER_NAME(tail,"tail");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(blockHit,"blockHit");
	HX_MARK_MEMBER_NAME(sustainLength,"sustainLength");
	HX_MARK_MEMBER_NAME(isSustainNote,"isSustainNote");
	HX_MARK_MEMBER_NAME(noteType,"noteType");
	HX_MARK_MEMBER_NAME(eventName,"eventName");
	HX_MARK_MEMBER_NAME(eventLength,"eventLength");
	HX_MARK_MEMBER_NAME(eventVal1,"eventVal1");
	HX_MARK_MEMBER_NAME(eventVal2,"eventVal2");
	HX_MARK_MEMBER_NAME(colorSwap,"colorSwap");
	HX_MARK_MEMBER_NAME(inEditor,"inEditor");
	HX_MARK_MEMBER_NAME(animSuffix,"animSuffix");
	HX_MARK_MEMBER_NAME(gfNote,"gfNote");
	HX_MARK_MEMBER_NAME(earlyHitMult,"earlyHitMult");
	HX_MARK_MEMBER_NAME(lateHitMult,"lateHitMult");
	HX_MARK_MEMBER_NAME(lowPriority,"lowPriority");
	HX_MARK_MEMBER_NAME(colArray,"colArray");
	HX_MARK_MEMBER_NAME(pixelInt,"pixelInt");
	HX_MARK_MEMBER_NAME(noteSplashDisabled,"noteSplashDisabled");
	HX_MARK_MEMBER_NAME(noteSplashTexture,"noteSplashTexture");
	HX_MARK_MEMBER_NAME(noteSplashHue,"noteSplashHue");
	HX_MARK_MEMBER_NAME(noteSplashSat,"noteSplashSat");
	HX_MARK_MEMBER_NAME(noteSplashBrt,"noteSplashBrt");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(offsetAngle,"offsetAngle");
	HX_MARK_MEMBER_NAME(multAlpha,"multAlpha");
	HX_MARK_MEMBER_NAME(multSpeed,"multSpeed");
	HX_MARK_MEMBER_NAME(copyX,"copyX");
	HX_MARK_MEMBER_NAME(copyY,"copyY");
	HX_MARK_MEMBER_NAME(copyAngle,"copyAngle");
	HX_MARK_MEMBER_NAME(copyAlpha,"copyAlpha");
	HX_MARK_MEMBER_NAME(hitHealth,"hitHealth");
	HX_MARK_MEMBER_NAME(missHealth,"missHealth");
	HX_MARK_MEMBER_NAME(rating,"rating");
	HX_MARK_MEMBER_NAME(ratingMod,"ratingMod");
	HX_MARK_MEMBER_NAME(ratingDisabled,"ratingDisabled");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_MEMBER_NAME(noAnimation,"noAnimation");
	HX_MARK_MEMBER_NAME(noMissAnimation,"noMissAnimation");
	HX_MARK_MEMBER_NAME(hitCausesMiss,"hitCausesMiss");
	HX_MARK_MEMBER_NAME(distance,"distance");
	HX_MARK_MEMBER_NAME(hitsoundDisabled,"hitsoundDisabled");
	HX_MARK_MEMBER_NAME(lastNoteOffsetXForPixelAutoAdjusting,"lastNoteOffsetXForPixelAutoAdjusting");
	HX_MARK_MEMBER_NAME(lastNoteScaleToo,"lastNoteScaleToo");
	HX_MARK_MEMBER_NAME(originalHeightForCalcs,"originalHeightForCalcs");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Note_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(extraData,"extraData");
	HX_VISIT_MEMBER_NAME(strumTime,"strumTime");
	HX_VISIT_MEMBER_NAME(mustPress,"mustPress");
	HX_VISIT_MEMBER_NAME(noteData,"noteData");
	HX_VISIT_MEMBER_NAME(canBeHit,"canBeHit");
	HX_VISIT_MEMBER_NAME(tooLate,"tooLate");
	HX_VISIT_MEMBER_NAME(wasGoodHit,"wasGoodHit");
	HX_VISIT_MEMBER_NAME(ignoreNote,"ignoreNote");
	HX_VISIT_MEMBER_NAME(hitByOpponent,"hitByOpponent");
	HX_VISIT_MEMBER_NAME(noteWasHit,"noteWasHit");
	HX_VISIT_MEMBER_NAME(prevNote,"prevNote");
	HX_VISIT_MEMBER_NAME(nextNote,"nextNote");
	HX_VISIT_MEMBER_NAME(spawned,"spawned");
	HX_VISIT_MEMBER_NAME(tail,"tail");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(blockHit,"blockHit");
	HX_VISIT_MEMBER_NAME(sustainLength,"sustainLength");
	HX_VISIT_MEMBER_NAME(isSustainNote,"isSustainNote");
	HX_VISIT_MEMBER_NAME(noteType,"noteType");
	HX_VISIT_MEMBER_NAME(eventName,"eventName");
	HX_VISIT_MEMBER_NAME(eventLength,"eventLength");
	HX_VISIT_MEMBER_NAME(eventVal1,"eventVal1");
	HX_VISIT_MEMBER_NAME(eventVal2,"eventVal2");
	HX_VISIT_MEMBER_NAME(colorSwap,"colorSwap");
	HX_VISIT_MEMBER_NAME(inEditor,"inEditor");
	HX_VISIT_MEMBER_NAME(animSuffix,"animSuffix");
	HX_VISIT_MEMBER_NAME(gfNote,"gfNote");
	HX_VISIT_MEMBER_NAME(earlyHitMult,"earlyHitMult");
	HX_VISIT_MEMBER_NAME(lateHitMult,"lateHitMult");
	HX_VISIT_MEMBER_NAME(lowPriority,"lowPriority");
	HX_VISIT_MEMBER_NAME(colArray,"colArray");
	HX_VISIT_MEMBER_NAME(pixelInt,"pixelInt");
	HX_VISIT_MEMBER_NAME(noteSplashDisabled,"noteSplashDisabled");
	HX_VISIT_MEMBER_NAME(noteSplashTexture,"noteSplashTexture");
	HX_VISIT_MEMBER_NAME(noteSplashHue,"noteSplashHue");
	HX_VISIT_MEMBER_NAME(noteSplashSat,"noteSplashSat");
	HX_VISIT_MEMBER_NAME(noteSplashBrt,"noteSplashBrt");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(offsetAngle,"offsetAngle");
	HX_VISIT_MEMBER_NAME(multAlpha,"multAlpha");
	HX_VISIT_MEMBER_NAME(multSpeed,"multSpeed");
	HX_VISIT_MEMBER_NAME(copyX,"copyX");
	HX_VISIT_MEMBER_NAME(copyY,"copyY");
	HX_VISIT_MEMBER_NAME(copyAngle,"copyAngle");
	HX_VISIT_MEMBER_NAME(copyAlpha,"copyAlpha");
	HX_VISIT_MEMBER_NAME(hitHealth,"hitHealth");
	HX_VISIT_MEMBER_NAME(missHealth,"missHealth");
	HX_VISIT_MEMBER_NAME(rating,"rating");
	HX_VISIT_MEMBER_NAME(ratingMod,"ratingMod");
	HX_VISIT_MEMBER_NAME(ratingDisabled,"ratingDisabled");
	HX_VISIT_MEMBER_NAME(texture,"texture");
	HX_VISIT_MEMBER_NAME(noAnimation,"noAnimation");
	HX_VISIT_MEMBER_NAME(noMissAnimation,"noMissAnimation");
	HX_VISIT_MEMBER_NAME(hitCausesMiss,"hitCausesMiss");
	HX_VISIT_MEMBER_NAME(distance,"distance");
	HX_VISIT_MEMBER_NAME(hitsoundDisabled,"hitsoundDisabled");
	HX_VISIT_MEMBER_NAME(lastNoteOffsetXForPixelAutoAdjusting,"lastNoteOffsetXForPixelAutoAdjusting");
	HX_VISIT_MEMBER_NAME(lastNoteScaleToo,"lastNoteScaleToo");
	HX_VISIT_MEMBER_NAME(originalHeightForCalcs,"originalHeightForCalcs");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Note_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tail") ) { return ::hx::Val( tail ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"copyX") ) { return ::hx::Val( copyX ); }
		if (HX_FIELD_EQ(inName,"copyY") ) { return ::hx::Val( copyY ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"gfNote") ) { return ::hx::Val( gfNote ); }
		if (HX_FIELD_EQ(inName,"rating") ) { return ::hx::Val( rating ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tooLate") ) { return ::hx::Val( tooLate ); }
		if (HX_FIELD_EQ(inName,"spawned") ) { return ::hx::Val( spawned ); }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return ::hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return ::hx::Val( offsetY ); }
		if (HX_FIELD_EQ(inName,"texture") ) { return ::hx::Val( texture ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { return ::hx::Val( noteData ); }
		if (HX_FIELD_EQ(inName,"canBeHit") ) { return ::hx::Val( canBeHit ); }
		if (HX_FIELD_EQ(inName,"prevNote") ) { return ::hx::Val( prevNote ); }
		if (HX_FIELD_EQ(inName,"nextNote") ) { return ::hx::Val( nextNote ); }
		if (HX_FIELD_EQ(inName,"blockHit") ) { return ::hx::Val( blockHit ); }
		if (HX_FIELD_EQ(inName,"noteType") ) { return ::hx::Val( noteType ); }
		if (HX_FIELD_EQ(inName,"inEditor") ) { return ::hx::Val( inEditor ); }
		if (HX_FIELD_EQ(inName,"colArray") ) { return ::hx::Val( colArray ); }
		if (HX_FIELD_EQ(inName,"pixelInt") ) { return ::hx::Val( pixelInt ); }
		if (HX_FIELD_EQ(inName,"distance") ) { return ::hx::Val( distance ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"extraData") ) { return ::hx::Val( extraData ); }
		if (HX_FIELD_EQ(inName,"strumTime") ) { return ::hx::Val( strumTime ); }
		if (HX_FIELD_EQ(inName,"mustPress") ) { return ::hx::Val( mustPress ); }
		if (HX_FIELD_EQ(inName,"eventName") ) { return ::hx::Val( eventName ); }
		if (HX_FIELD_EQ(inName,"eventVal1") ) { return ::hx::Val( eventVal1 ); }
		if (HX_FIELD_EQ(inName,"eventVal2") ) { return ::hx::Val( eventVal2 ); }
		if (HX_FIELD_EQ(inName,"colorSwap") ) { return ::hx::Val( colorSwap ); }
		if (HX_FIELD_EQ(inName,"multAlpha") ) { return ::hx::Val( multAlpha ); }
		if (HX_FIELD_EQ(inName,"multSpeed") ) { return ::hx::Val( multSpeed ); }
		if (HX_FIELD_EQ(inName,"copyAngle") ) { return ::hx::Val( copyAngle ); }
		if (HX_FIELD_EQ(inName,"copyAlpha") ) { return ::hx::Val( copyAlpha ); }
		if (HX_FIELD_EQ(inName,"hitHealth") ) { return ::hx::Val( hitHealth ); }
		if (HX_FIELD_EQ(inName,"ratingMod") ) { return ::hx::Val( ratingMod ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wasGoodHit") ) { return ::hx::Val( wasGoodHit ); }
		if (HX_FIELD_EQ(inName,"ignoreNote") ) { return ::hx::Val( ignoreNote ); }
		if (HX_FIELD_EQ(inName,"noteWasHit") ) { return ::hx::Val( noteWasHit ); }
		if (HX_FIELD_EQ(inName,"animSuffix") ) { return ::hx::Val( animSuffix ); }
		if (HX_FIELD_EQ(inName,"missHealth") ) { return ::hx::Val( missHealth ); }
		if (HX_FIELD_EQ(inName,"reloadNote") ) { return ::hx::Val( reloadNote_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventLength") ) { return ::hx::Val( eventLength ); }
		if (HX_FIELD_EQ(inName,"lateHitMult") ) { return ::hx::Val( lateHitMult ); }
		if (HX_FIELD_EQ(inName,"lowPriority") ) { return ::hx::Val( lowPriority ); }
		if (HX_FIELD_EQ(inName,"offsetAngle") ) { return ::hx::Val( offsetAngle ); }
		if (HX_FIELD_EQ(inName,"noAnimation") ) { return ::hx::Val( noAnimation ); }
		if (HX_FIELD_EQ(inName,"set_texture") ) { return ::hx::Val( set_texture_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"earlyHitMult") ) { return ::hx::Val( earlyHitMult ); }
		if (HX_FIELD_EQ(inName,"set_noteType") ) { return ::hx::Val( set_noteType_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hitByOpponent") ) { return ::hx::Val( hitByOpponent ); }
		if (HX_FIELD_EQ(inName,"sustainLength") ) { return ::hx::Val( sustainLength ); }
		if (HX_FIELD_EQ(inName,"isSustainNote") ) { return ::hx::Val( isSustainNote ); }
		if (HX_FIELD_EQ(inName,"noteSplashHue") ) { return ::hx::Val( noteSplashHue ); }
		if (HX_FIELD_EQ(inName,"noteSplashSat") ) { return ::hx::Val( noteSplashSat ); }
		if (HX_FIELD_EQ(inName,"noteSplashBrt") ) { return ::hx::Val( noteSplashBrt ); }
		if (HX_FIELD_EQ(inName,"hitCausesMiss") ) { return ::hx::Val( hitCausesMiss ); }
		if (HX_FIELD_EQ(inName,"set_multSpeed") ) { return ::hx::Val( set_multSpeed_dyn() ); }
		if (HX_FIELD_EQ(inName,"resizeByRatio") ) { return ::hx::Val( resizeByRatio_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadNoteAnims") ) { return ::hx::Val( loadNoteAnims_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ratingDisabled") ) { return ::hx::Val( ratingDisabled ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"noMissAnimation") ) { return ::hx::Val( noMissAnimation ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hitsoundDisabled") ) { return ::hx::Val( hitsoundDisabled ); }
		if (HX_FIELD_EQ(inName,"lastNoteScaleToo") ) { return ::hx::Val( lastNoteScaleToo ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"noteSplashTexture") ) { return ::hx::Val( noteSplashTexture ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"noteSplashDisabled") ) { return ::hx::Val( noteSplashDisabled ); }
		if (HX_FIELD_EQ(inName,"loadPixelNoteAnims") ) { return ::hx::Val( loadPixelNoteAnims_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"originalHeightForCalcs") ) { return ::hx::Val( originalHeightForCalcs ); }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lastNoteOffsetXForPixelAutoAdjusting") ) { return ::hx::Val( lastNoteOffsetXForPixelAutoAdjusting ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Note_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"swagWidth") ) { outValue = ( swagWidth ); return true; }
	}
	return false;
}

::hx::Val Note_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tail") ) { tail=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"copyX") ) { copyX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"copyY") ) { copyY=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::Note >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gfNote") ) { gfNote=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rating") ) { rating=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tooLate") ) { tooLate=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spawned") ) { spawned=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"texture") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_texture(inValue.Cast< ::String >()) );texture=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { noteData=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"canBeHit") ) { canBeHit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"prevNote") ) { prevNote=inValue.Cast<  ::Note >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextNote") ) { nextNote=inValue.Cast<  ::Note >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blockHit") ) { blockHit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteType") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_noteType(inValue.Cast< ::String >()) );noteType=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"inEditor") ) { inEditor=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colArray") ) { colArray=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pixelInt") ) { pixelInt=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"distance") ) { distance=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"extraData") ) { extraData=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"strumTime") ) { strumTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mustPress") ) { mustPress=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventName") ) { eventName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventVal1") ) { eventVal1=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"eventVal2") ) { eventVal2=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorSwap") ) { colorSwap=inValue.Cast<  ::ColorSwap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multAlpha") ) { multAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"multSpeed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_multSpeed(inValue.Cast< Float >()) );multSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"copyAngle") ) { copyAngle=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"copyAlpha") ) { copyAlpha=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hitHealth") ) { hitHealth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ratingMod") ) { ratingMod=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wasGoodHit") ) { wasGoodHit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ignoreNote") ) { ignoreNote=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteWasHit") ) { noteWasHit=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animSuffix") ) { animSuffix=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"missHealth") ) { missHealth=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"eventLength") ) { eventLength=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lateHitMult") ) { lateHitMult=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lowPriority") ) { lowPriority=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetAngle") ) { offsetAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noAnimation") ) { noAnimation=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"earlyHitMult") ) { earlyHitMult=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"hitByOpponent") ) { hitByOpponent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sustainLength") ) { sustainLength=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isSustainNote") ) { isSustainNote=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteSplashHue") ) { noteSplashHue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteSplashSat") ) { noteSplashSat=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noteSplashBrt") ) { noteSplashBrt=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hitCausesMiss") ) { hitCausesMiss=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ratingDisabled") ) { ratingDisabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"noMissAnimation") ) { noMissAnimation=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"hitsoundDisabled") ) { hitsoundDisabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastNoteScaleToo") ) { lastNoteScaleToo=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"noteSplashTexture") ) { noteSplashTexture=inValue.Cast< ::String >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"noteSplashDisabled") ) { noteSplashDisabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"originalHeightForCalcs") ) { originalHeightForCalcs=inValue.Cast< Float >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lastNoteOffsetXForPixelAutoAdjusting") ) { lastNoteOffsetXForPixelAutoAdjusting=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Note_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"swagWidth") ) { swagWidth=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void Note_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("extraData",da,a4,67,7c));
	outFields->push(HX_("strumTime",f6,2d,21,f4));
	outFields->push(HX_("mustPress",ba,d4,17,60));
	outFields->push(HX_("noteData",3c,7b,96,51));
	outFields->push(HX_("canBeHit",20,a6,d1,1e));
	outFields->push(HX_("tooLate",da,77,57,55));
	outFields->push(HX_("wasGoodHit",ed,7a,9b,17));
	outFields->push(HX_("ignoreNote",24,ee,32,49));
	outFields->push(HX_("hitByOpponent",c7,8a,37,cc));
	outFields->push(HX_("noteWasHit",3c,ca,a4,58));
	outFields->push(HX_("prevNote",85,f8,d7,11));
	outFields->push(HX_("nextNote",85,be,d6,f4));
	outFields->push(HX_("spawned",5a,3b,f7,9e));
	outFields->push(HX_("tail",90,b6,f6,4c));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("blockHit",06,17,97,19));
	outFields->push(HX_("sustainLength",e9,a1,9c,7c));
	outFields->push(HX_("isSustainNote",6b,1e,77,c3));
	outFields->push(HX_("noteType",cc,17,3c,5c));
	outFields->push(HX_("eventName",85,7b,0c,f8));
	outFields->push(HX_("eventLength",a0,e0,54,f2));
	outFields->push(HX_("eventVal1",6a,2f,56,fd));
	outFields->push(HX_("eventVal2",6b,2f,56,fd));
	outFields->push(HX_("colorSwap",96,b5,cb,27));
	outFields->push(HX_("inEditor",72,8b,5b,c4));
	outFields->push(HX_("animSuffix",c2,3f,81,7b));
	outFields->push(HX_("gfNote",b1,99,84,1d));
	outFields->push(HX_("earlyHitMult",80,a9,e2,17));
	outFields->push(HX_("lateHitMult",5d,6d,93,0b));
	outFields->push(HX_("lowPriority",18,40,47,61));
	outFields->push(HX_("colArray",39,75,98,0d));
	outFields->push(HX_("pixelInt",09,56,46,7e));
	outFields->push(HX_("noteSplashDisabled",95,ad,6f,54));
	outFields->push(HX_("noteSplashTexture",e2,22,64,f9));
	outFields->push(HX_("noteSplashHue",3f,5b,ed,f6));
	outFields->push(HX_("noteSplashSat",ad,a2,f5,f6));
	outFields->push(HX_("noteSplashBrt",2b,cb,e8,f6));
	outFields->push(HX_("offsetX",65,09,65,d7));
	outFields->push(HX_("offsetY",66,09,65,d7));
	outFields->push(HX_("offsetAngle",40,c7,62,bb));
	outFields->push(HX_("multAlpha",4e,e9,0f,96));
	outFields->push(HX_("multSpeed",77,d9,e2,f5));
	outFields->push(HX_("copyX",03,83,5f,4a));
	outFields->push(HX_("copyY",04,83,5f,4a));
	outFields->push(HX_("copyAngle",de,67,dd,a8));
	outFields->push(HX_("copyAlpha",69,cb,91,a7));
	outFields->push(HX_("hitHealth",4f,e3,17,31));
	outFields->push(HX_("missHealth",b8,54,21,f6));
	outFields->push(HX_("rating",1d,34,8a,bb));
	outFields->push(HX_("ratingMod",a5,4a,34,09));
	outFields->push(HX_("ratingDisabled",b9,16,ed,99));
	outFields->push(HX_("texture",db,c8,e0,9e));
	outFields->push(HX_("noAnimation",83,de,e3,ac));
	outFields->push(HX_("noMissAnimation",67,57,15,92));
	outFields->push(HX_("hitCausesMiss",39,dc,fd,91));
	outFields->push(HX_("distance",35,93,f9,6b));
	outFields->push(HX_("hitsoundDisabled",38,73,71,56));
	outFields->push(HX_("lastNoteOffsetXForPixelAutoAdjusting",2a,95,91,c2));
	outFields->push(HX_("lastNoteScaleToo",b2,17,8e,a9));
	outFields->push(HX_("originalHeightForCalcs",ad,c9,e0,c5));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Note_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(Note_obj,extraData),HX_("extraData",da,a4,67,7c)},
	{::hx::fsFloat,(int)offsetof(Note_obj,strumTime),HX_("strumTime",f6,2d,21,f4)},
	{::hx::fsBool,(int)offsetof(Note_obj,mustPress),HX_("mustPress",ba,d4,17,60)},
	{::hx::fsInt,(int)offsetof(Note_obj,noteData),HX_("noteData",3c,7b,96,51)},
	{::hx::fsBool,(int)offsetof(Note_obj,canBeHit),HX_("canBeHit",20,a6,d1,1e)},
	{::hx::fsBool,(int)offsetof(Note_obj,tooLate),HX_("tooLate",da,77,57,55)},
	{::hx::fsBool,(int)offsetof(Note_obj,wasGoodHit),HX_("wasGoodHit",ed,7a,9b,17)},
	{::hx::fsBool,(int)offsetof(Note_obj,ignoreNote),HX_("ignoreNote",24,ee,32,49)},
	{::hx::fsBool,(int)offsetof(Note_obj,hitByOpponent),HX_("hitByOpponent",c7,8a,37,cc)},
	{::hx::fsBool,(int)offsetof(Note_obj,noteWasHit),HX_("noteWasHit",3c,ca,a4,58)},
	{::hx::fsObject /*  ::Note */ ,(int)offsetof(Note_obj,prevNote),HX_("prevNote",85,f8,d7,11)},
	{::hx::fsObject /*  ::Note */ ,(int)offsetof(Note_obj,nextNote),HX_("nextNote",85,be,d6,f4)},
	{::hx::fsBool,(int)offsetof(Note_obj,spawned),HX_("spawned",5a,3b,f7,9e)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Note_obj,tail),HX_("tail",90,b6,f6,4c)},
	{::hx::fsObject /*  ::Note */ ,(int)offsetof(Note_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsBool,(int)offsetof(Note_obj,blockHit),HX_("blockHit",06,17,97,19)},
	{::hx::fsFloat,(int)offsetof(Note_obj,sustainLength),HX_("sustainLength",e9,a1,9c,7c)},
	{::hx::fsBool,(int)offsetof(Note_obj,isSustainNote),HX_("isSustainNote",6b,1e,77,c3)},
	{::hx::fsString,(int)offsetof(Note_obj,noteType),HX_("noteType",cc,17,3c,5c)},
	{::hx::fsString,(int)offsetof(Note_obj,eventName),HX_("eventName",85,7b,0c,f8)},
	{::hx::fsInt,(int)offsetof(Note_obj,eventLength),HX_("eventLength",a0,e0,54,f2)},
	{::hx::fsString,(int)offsetof(Note_obj,eventVal1),HX_("eventVal1",6a,2f,56,fd)},
	{::hx::fsString,(int)offsetof(Note_obj,eventVal2),HX_("eventVal2",6b,2f,56,fd)},
	{::hx::fsObject /*  ::ColorSwap */ ,(int)offsetof(Note_obj,colorSwap),HX_("colorSwap",96,b5,cb,27)},
	{::hx::fsBool,(int)offsetof(Note_obj,inEditor),HX_("inEditor",72,8b,5b,c4)},
	{::hx::fsString,(int)offsetof(Note_obj,animSuffix),HX_("animSuffix",c2,3f,81,7b)},
	{::hx::fsBool,(int)offsetof(Note_obj,gfNote),HX_("gfNote",b1,99,84,1d)},
	{::hx::fsFloat,(int)offsetof(Note_obj,earlyHitMult),HX_("earlyHitMult",80,a9,e2,17)},
	{::hx::fsFloat,(int)offsetof(Note_obj,lateHitMult),HX_("lateHitMult",5d,6d,93,0b)},
	{::hx::fsBool,(int)offsetof(Note_obj,lowPriority),HX_("lowPriority",18,40,47,61)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Note_obj,colArray),HX_("colArray",39,75,98,0d)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Note_obj,pixelInt),HX_("pixelInt",09,56,46,7e)},
	{::hx::fsBool,(int)offsetof(Note_obj,noteSplashDisabled),HX_("noteSplashDisabled",95,ad,6f,54)},
	{::hx::fsString,(int)offsetof(Note_obj,noteSplashTexture),HX_("noteSplashTexture",e2,22,64,f9)},
	{::hx::fsFloat,(int)offsetof(Note_obj,noteSplashHue),HX_("noteSplashHue",3f,5b,ed,f6)},
	{::hx::fsFloat,(int)offsetof(Note_obj,noteSplashSat),HX_("noteSplashSat",ad,a2,f5,f6)},
	{::hx::fsFloat,(int)offsetof(Note_obj,noteSplashBrt),HX_("noteSplashBrt",2b,cb,e8,f6)},
	{::hx::fsFloat,(int)offsetof(Note_obj,offsetX),HX_("offsetX",65,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(Note_obj,offsetY),HX_("offsetY",66,09,65,d7)},
	{::hx::fsFloat,(int)offsetof(Note_obj,offsetAngle),HX_("offsetAngle",40,c7,62,bb)},
	{::hx::fsFloat,(int)offsetof(Note_obj,multAlpha),HX_("multAlpha",4e,e9,0f,96)},
	{::hx::fsFloat,(int)offsetof(Note_obj,multSpeed),HX_("multSpeed",77,d9,e2,f5)},
	{::hx::fsBool,(int)offsetof(Note_obj,copyX),HX_("copyX",03,83,5f,4a)},
	{::hx::fsBool,(int)offsetof(Note_obj,copyY),HX_("copyY",04,83,5f,4a)},
	{::hx::fsBool,(int)offsetof(Note_obj,copyAngle),HX_("copyAngle",de,67,dd,a8)},
	{::hx::fsBool,(int)offsetof(Note_obj,copyAlpha),HX_("copyAlpha",69,cb,91,a7)},
	{::hx::fsFloat,(int)offsetof(Note_obj,hitHealth),HX_("hitHealth",4f,e3,17,31)},
	{::hx::fsFloat,(int)offsetof(Note_obj,missHealth),HX_("missHealth",b8,54,21,f6)},
	{::hx::fsString,(int)offsetof(Note_obj,rating),HX_("rating",1d,34,8a,bb)},
	{::hx::fsFloat,(int)offsetof(Note_obj,ratingMod),HX_("ratingMod",a5,4a,34,09)},
	{::hx::fsBool,(int)offsetof(Note_obj,ratingDisabled),HX_("ratingDisabled",b9,16,ed,99)},
	{::hx::fsString,(int)offsetof(Note_obj,texture),HX_("texture",db,c8,e0,9e)},
	{::hx::fsBool,(int)offsetof(Note_obj,noAnimation),HX_("noAnimation",83,de,e3,ac)},
	{::hx::fsBool,(int)offsetof(Note_obj,noMissAnimation),HX_("noMissAnimation",67,57,15,92)},
	{::hx::fsBool,(int)offsetof(Note_obj,hitCausesMiss),HX_("hitCausesMiss",39,dc,fd,91)},
	{::hx::fsFloat,(int)offsetof(Note_obj,distance),HX_("distance",35,93,f9,6b)},
	{::hx::fsBool,(int)offsetof(Note_obj,hitsoundDisabled),HX_("hitsoundDisabled",38,73,71,56)},
	{::hx::fsFloat,(int)offsetof(Note_obj,lastNoteOffsetXForPixelAutoAdjusting),HX_("lastNoteOffsetXForPixelAutoAdjusting",2a,95,91,c2)},
	{::hx::fsFloat,(int)offsetof(Note_obj,lastNoteScaleToo),HX_("lastNoteScaleToo",b2,17,8e,a9)},
	{::hx::fsFloat,(int)offsetof(Note_obj,originalHeightForCalcs),HX_("originalHeightForCalcs",ad,c9,e0,c5)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Note_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Note_obj::swagWidth,HX_("swagWidth",1c,87,d9,a6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Note_obj_sMemberFields[] = {
	HX_("extraData",da,a4,67,7c),
	HX_("strumTime",f6,2d,21,f4),
	HX_("mustPress",ba,d4,17,60),
	HX_("noteData",3c,7b,96,51),
	HX_("canBeHit",20,a6,d1,1e),
	HX_("tooLate",da,77,57,55),
	HX_("wasGoodHit",ed,7a,9b,17),
	HX_("ignoreNote",24,ee,32,49),
	HX_("hitByOpponent",c7,8a,37,cc),
	HX_("noteWasHit",3c,ca,a4,58),
	HX_("prevNote",85,f8,d7,11),
	HX_("nextNote",85,be,d6,f4),
	HX_("spawned",5a,3b,f7,9e),
	HX_("tail",90,b6,f6,4c),
	HX_("parent",2a,05,7e,ed),
	HX_("blockHit",06,17,97,19),
	HX_("sustainLength",e9,a1,9c,7c),
	HX_("isSustainNote",6b,1e,77,c3),
	HX_("noteType",cc,17,3c,5c),
	HX_("eventName",85,7b,0c,f8),
	HX_("eventLength",a0,e0,54,f2),
	HX_("eventVal1",6a,2f,56,fd),
	HX_("eventVal2",6b,2f,56,fd),
	HX_("colorSwap",96,b5,cb,27),
	HX_("inEditor",72,8b,5b,c4),
	HX_("animSuffix",c2,3f,81,7b),
	HX_("gfNote",b1,99,84,1d),
	HX_("earlyHitMult",80,a9,e2,17),
	HX_("lateHitMult",5d,6d,93,0b),
	HX_("lowPriority",18,40,47,61),
	HX_("colArray",39,75,98,0d),
	HX_("pixelInt",09,56,46,7e),
	HX_("noteSplashDisabled",95,ad,6f,54),
	HX_("noteSplashTexture",e2,22,64,f9),
	HX_("noteSplashHue",3f,5b,ed,f6),
	HX_("noteSplashSat",ad,a2,f5,f6),
	HX_("noteSplashBrt",2b,cb,e8,f6),
	HX_("offsetX",65,09,65,d7),
	HX_("offsetY",66,09,65,d7),
	HX_("offsetAngle",40,c7,62,bb),
	HX_("multAlpha",4e,e9,0f,96),
	HX_("multSpeed",77,d9,e2,f5),
	HX_("copyX",03,83,5f,4a),
	HX_("copyY",04,83,5f,4a),
	HX_("copyAngle",de,67,dd,a8),
	HX_("copyAlpha",69,cb,91,a7),
	HX_("hitHealth",4f,e3,17,31),
	HX_("missHealth",b8,54,21,f6),
	HX_("rating",1d,34,8a,bb),
	HX_("ratingMod",a5,4a,34,09),
	HX_("ratingDisabled",b9,16,ed,99),
	HX_("texture",db,c8,e0,9e),
	HX_("noAnimation",83,de,e3,ac),
	HX_("noMissAnimation",67,57,15,92),
	HX_("hitCausesMiss",39,dc,fd,91),
	HX_("distance",35,93,f9,6b),
	HX_("hitsoundDisabled",38,73,71,56),
	HX_("set_multSpeed",5a,8f,4c,fc),
	HX_("resizeByRatio",20,78,af,6b),
	HX_("set_texture",fe,2f,48,2f),
	HX_("set_noteType",49,ef,4e,26),
	HX_("lastNoteOffsetXForPixelAutoAdjusting",2a,95,91,c2),
	HX_("lastNoteScaleToo",b2,17,8e,a9),
	HX_("originalHeightForCalcs",ad,c9,e0,c5),
	HX_("reloadNote",eb,b7,11,94),
	HX_("loadNoteAnims",ea,e4,d6,e2),
	HX_("loadPixelNoteAnims",50,91,b2,72),
	HX_("update",09,86,05,87),
	::String(null()) };

static void Note_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Note_obj::swagWidth,"swagWidth");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Note_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Note_obj::swagWidth,"swagWidth");
};

#endif

::hx::Class Note_obj::__mClass;

static ::String Note_obj_sStaticFields[] = {
	HX_("swagWidth",1c,87,d9,a6),
	::String(null())
};

void Note_obj::__register()
{
	Note_obj _hx_dummy;
	Note_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Note",12,44,e3,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Note_obj::__GetStatic;
	__mClass->mSetStaticField = &Note_obj::__SetStatic;
	__mClass->mMarkFunc = Note_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Note_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Note_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Note_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Note_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Note_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Note_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Note_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3be6f1ff2d789e96_60_boot)
HXDLIN(  60)		swagWidth = ((Float)112.);
            	}
}

