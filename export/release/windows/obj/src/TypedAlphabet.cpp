#include <hxcpp.h>

#ifndef INCLUDED_AlphaCharacter
#include <AlphaCharacter.h>
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_TypedAlphabet
#include <TypedAlphabet.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d5b4b6ea44960341_14_new,"TypedAlphabet","new",0x1e1b668f,"TypedAlphabet.new","TypedAlphabet.hx",14,0xe92cdfc1)
HX_LOCAL_STACK_FRAME(_hx_pos_d5b4b6ea44960341_30_set_text,"TypedAlphabet","set_text",0x5ed0811b,"TypedAlphabet.set_text","TypedAlphabet.hx",30,0xe92cdfc1)
HX_LOCAL_STACK_FRAME(_hx_pos_d5b4b6ea44960341_40_update,"TypedAlphabet","update",0x44b0b73a,"TypedAlphabet.update","TypedAlphabet.hx",40,0xe92cdfc1)
HX_LOCAL_STACK_FRAME(_hx_pos_d5b4b6ea44960341_70_showCharacterUpTo,"TypedAlphabet","showCharacterUpTo",0x3b209831,"TypedAlphabet.showCharacterUpTo","TypedAlphabet.hx",70,0xe92cdfc1)
HX_LOCAL_STACK_FRAME(_hx_pos_d5b4b6ea44960341_82_resetDialogue,"TypedAlphabet","resetDialogue",0x9067e0f6,"TypedAlphabet.resetDialogue","TypedAlphabet.hx",82,0xe92cdfc1)
HX_LOCAL_STACK_FRAME(_hx_pos_d5b4b6ea44960341_93_finishText,"TypedAlphabet","finishText",0x216e7c51,"TypedAlphabet.finishText","TypedAlphabet.hx",93,0xe92cdfc1)

void TypedAlphabet_obj::__construct(Float x,Float y,::String __o_text, ::Dynamic __o_delay, ::Dynamic __o_bold){
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            		 ::Dynamic delay = __o_delay;
            		if (::hx::IsNull(__o_delay)) delay = ((Float)0.05);
            		 ::Dynamic bold = __o_bold;
            		if (::hx::IsNull(__o_bold)) bold = false;
            	HX_STACKFRAME(&_hx_pos_d5b4b6ea44960341_14_new)
HXLINE(  38)		this->_timeToUpdate = ((Float)0);
HXLINE(  37)		this->_curLetter = -1;
HXLINE(  20)		this->volume = ((Float)1);
HXLINE(  19)		this->sound = HX_("dialogue",18,2d,94,a7);
HXLINE(  18)		this->delay = ((Float)0.05);
HXLINE(  17)		this->finishedText = false;
HXLINE(  16)		this->onFinish = null();
HXLINE(  24)		super::__construct(x,y,text,bold);
HXLINE(  26)		this->delay = ( (Float)(delay) );
            	}

Dynamic TypedAlphabet_obj::__CreateEmpty() { return new TypedAlphabet_obj; }

void *TypedAlphabet_obj::_hx_vtable = 0;

Dynamic TypedAlphabet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TypedAlphabet_obj > _hx_result = new TypedAlphabet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool TypedAlphabet_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x567b2b93) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x567b2b93;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x72d2885d || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7dab0655;
		}
	}
}

::String TypedAlphabet_obj::set_text(::String newText){
            	HX_STACKFRAME(&_hx_pos_d5b4b6ea44960341_30_set_text)
HXLINE(  31)		this->super::set_text(newText);
HXLINE(  33)		this->resetDialogue();
HXLINE(  34)		return newText;
            	}


void TypedAlphabet_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_d5b4b6ea44960341_40_update)
HXLINE(  41)		if (!(this->finishedText)) {
HXLINE(  43)			bool playedSound = false;
HXLINE(  44)			 ::TypedAlphabet _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  44)			_hx_tmp->_timeToUpdate = (_hx_tmp->_timeToUpdate + elapsed);
HXLINE(  45)			while((this->_timeToUpdate >= this->delay)){
HXLINE(  47)				this->showCharacterUpTo((this->_curLetter + 1));
HXLINE(  48)				bool _hx_tmp;
HXDLIN(  48)				bool _hx_tmp1;
HXDLIN(  48)				if (!(playedSound)) {
HXLINE(  48)					_hx_tmp1 = (this->sound != HX_("",00,00,00,00));
            				}
            				else {
HXLINE(  48)					_hx_tmp1 = false;
            				}
HXDLIN(  48)				if (_hx_tmp1) {
HXLINE(  48)					if (!((this->delay > ((Float)0.025)))) {
HXLINE(  48)						_hx_tmp = (::hx::Mod(this->_curLetter,2) == 0);
            					}
            					else {
HXLINE(  48)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE(  48)					_hx_tmp = false;
            				}
HXDLIN(  48)				if (_hx_tmp) {
HXLINE(  50)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  50)					 ::openfl::media::Sound _hx_tmp1 = ::Paths_obj::sound(this->sound,null());
HXDLIN(  50)					_hx_tmp->play(_hx_tmp1,this->volume,null(),null(),null(),null());
            				}
HXLINE(  52)				playedSound = true;
HXLINE(  54)				this->_curLetter++;
HXLINE(  55)				if ((this->_curLetter >= (this->letters->length - 1))) {
HXLINE(  57)					this->finishedText = true;
HXLINE(  58)					if (::hx::IsNotNull( this->onFinish )) {
HXLINE(  58)						this->onFinish();
            					}
HXLINE(  59)					this->_timeToUpdate = ( (Float)(0) );
HXLINE(  60)					goto _hx_goto_2;
            				}
HXLINE(  62)				this->_timeToUpdate = ( (Float)(0) );
            			}
            			_hx_goto_2:;
            		}
HXLINE(  66)		this->super::update(elapsed);
            	}


void TypedAlphabet_obj::showCharacterUpTo(int upTo){
            	HX_STACKFRAME(&_hx_pos_d5b4b6ea44960341_70_showCharacterUpTo)
HXLINE(  71)		int start = this->_curLetter;
HXLINE(  72)		if ((start < 0)) {
HXLINE(  72)			start = 0;
            		}
HXLINE(  74)		{
HXLINE(  74)			int _g = start;
HXDLIN(  74)			int _g1 = (upTo + 1);
HXDLIN(  74)			while((_g < _g1)){
HXLINE(  74)				_g = (_g + 1);
HXDLIN(  74)				int i = (_g - 1);
HXLINE(  76)				if (::hx::IsNotNull( this->letters->__get(i).StaticCast<  ::AlphaCharacter >() )) {
HXLINE(  76)					this->letters->__get(i).StaticCast<  ::AlphaCharacter >()->set_visible(true);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TypedAlphabet_obj,showCharacterUpTo,(void))

void TypedAlphabet_obj::resetDialogue(){
            	HX_STACKFRAME(&_hx_pos_d5b4b6ea44960341_82_resetDialogue)
HXLINE(  83)		this->_curLetter = -1;
HXLINE(  84)		this->finishedText = false;
HXLINE(  85)		this->_timeToUpdate = ( (Float)(0) );
HXLINE(  86)		{
HXLINE(  86)			int _g = 0;
HXDLIN(  86)			::Array< ::Dynamic> _g1 = this->letters;
HXDLIN(  86)			while((_g < _g1->length)){
HXLINE(  86)				 ::AlphaCharacter letter = _g1->__get(_g).StaticCast<  ::AlphaCharacter >();
HXDLIN(  86)				_g = (_g + 1);
HXLINE(  88)				letter->set_visible(false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TypedAlphabet_obj,resetDialogue,(void))

void TypedAlphabet_obj::finishText(){
            	HX_STACKFRAME(&_hx_pos_d5b4b6ea44960341_93_finishText)
HXLINE(  94)		if (this->finishedText) {
HXLINE(  94)			return;
            		}
HXLINE(  96)		this->showCharacterUpTo((this->letters->length - 1));
HXLINE(  97)		if ((this->sound != HX_("",00,00,00,00))) {
HXLINE(  97)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  97)			 ::openfl::media::Sound _hx_tmp1 = ::Paths_obj::sound(this->sound,null());
HXDLIN(  97)			_hx_tmp->play(_hx_tmp1,this->volume,null(),null(),null(),null());
            		}
HXLINE(  98)		this->finishedText = true;
HXLINE( 100)		if (::hx::IsNotNull( this->onFinish )) {
HXLINE( 100)			this->onFinish();
            		}
HXLINE( 101)		this->_timeToUpdate = ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(TypedAlphabet_obj,finishText,(void))


::hx::ObjectPtr< TypedAlphabet_obj > TypedAlphabet_obj::__new(Float x,Float y,::String __o_text, ::Dynamic __o_delay, ::Dynamic __o_bold) {
	::hx::ObjectPtr< TypedAlphabet_obj > __this = new TypedAlphabet_obj();
	__this->__construct(x,y,__o_text,__o_delay,__o_bold);
	return __this;
}

::hx::ObjectPtr< TypedAlphabet_obj > TypedAlphabet_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_text, ::Dynamic __o_delay, ::Dynamic __o_bold) {
	TypedAlphabet_obj *__this = (TypedAlphabet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TypedAlphabet_obj), true, "TypedAlphabet"));
	*(void **)__this = TypedAlphabet_obj::_hx_vtable;
	__this->__construct(x,y,__o_text,__o_delay,__o_bold);
	return __this;
}

TypedAlphabet_obj::TypedAlphabet_obj()
{
}

void TypedAlphabet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TypedAlphabet);
	HX_MARK_MEMBER_NAME(onFinish,"onFinish");
	HX_MARK_MEMBER_NAME(finishedText,"finishedText");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(volume,"volume");
	HX_MARK_MEMBER_NAME(_curLetter,"_curLetter");
	HX_MARK_MEMBER_NAME(_timeToUpdate,"_timeToUpdate");
	 ::Alphabet_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TypedAlphabet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(onFinish,"onFinish");
	HX_VISIT_MEMBER_NAME(finishedText,"finishedText");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(volume,"volume");
	HX_VISIT_MEMBER_NAME(_curLetter,"_curLetter");
	HX_VISIT_MEMBER_NAME(_timeToUpdate,"_timeToUpdate");
	 ::Alphabet_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TypedAlphabet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		if (HX_FIELD_EQ(inName,"sound") ) { return ::hx::Val( sound ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { return ::hx::Val( volume ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onFinish") ) { return ::hx::Val( onFinish ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_curLetter") ) { return ::hx::Val( _curLetter ); }
		if (HX_FIELD_EQ(inName,"finishText") ) { return ::hx::Val( finishText_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"finishedText") ) { return ::hx::Val( finishedText ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_timeToUpdate") ) { return ::hx::Val( _timeToUpdate ); }
		if (HX_FIELD_EQ(inName,"resetDialogue") ) { return ::hx::Val( resetDialogue_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"showCharacterUpTo") ) { return ::hx::Val( showCharacterUpTo_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TypedAlphabet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"volume") ) { volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onFinish") ) { onFinish=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_curLetter") ) { _curLetter=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"finishedText") ) { finishedText=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_timeToUpdate") ) { _timeToUpdate=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TypedAlphabet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("finishedText",3f,2d,d5,f6));
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("sound",cf,8c,cc,80));
	outFields->push(HX_("volume",da,29,53,5f));
	outFields->push(HX_("_curLetter",47,42,38,6f));
	outFields->push(HX_("_timeToUpdate",f0,9d,4f,29));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TypedAlphabet_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(TypedAlphabet_obj,onFinish),HX_("onFinish",d2,36,2c,66)},
	{::hx::fsBool,(int)offsetof(TypedAlphabet_obj,finishedText),HX_("finishedText",3f,2d,d5,f6)},
	{::hx::fsFloat,(int)offsetof(TypedAlphabet_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsString,(int)offsetof(TypedAlphabet_obj,sound),HX_("sound",cf,8c,cc,80)},
	{::hx::fsFloat,(int)offsetof(TypedAlphabet_obj,volume),HX_("volume",da,29,53,5f)},
	{::hx::fsInt,(int)offsetof(TypedAlphabet_obj,_curLetter),HX_("_curLetter",47,42,38,6f)},
	{::hx::fsFloat,(int)offsetof(TypedAlphabet_obj,_timeToUpdate),HX_("_timeToUpdate",f0,9d,4f,29)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TypedAlphabet_obj_sStaticStorageInfo = 0;
#endif

static ::String TypedAlphabet_obj_sMemberFields[] = {
	HX_("onFinish",d2,36,2c,66),
	HX_("finishedText",3f,2d,d5,f6),
	HX_("delay",83,d7,26,d7),
	HX_("sound",cf,8c,cc,80),
	HX_("volume",da,29,53,5f),
	HX_("set_text",aa,e1,11,7b),
	HX_("_curLetter",47,42,38,6f),
	HX_("_timeToUpdate",f0,9d,4f,29),
	HX_("update",09,86,05,87),
	HX_("showCharacterUpTo",c2,2d,4c,65),
	HX_("resetDialogue",07,1a,33,d8),
	HX_("finishText",a0,5e,34,d9),
	::String(null()) };

::hx::Class TypedAlphabet_obj::__mClass;

void TypedAlphabet_obj::__register()
{
	TypedAlphabet_obj _hx_dummy;
	TypedAlphabet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TypedAlphabet",1d,73,8b,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TypedAlphabet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TypedAlphabet_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TypedAlphabet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TypedAlphabet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

