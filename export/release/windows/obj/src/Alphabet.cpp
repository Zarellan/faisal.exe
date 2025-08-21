#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Alignment
#include <Alignment.h>
#endif
#ifndef INCLUDED_AlphaCharacter
#include <AlphaCharacter.h>
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_4c95a0630eaf1443_22_new,"Alphabet","new",0xc4ae3f45,"Alphabet.new","Alphabet.hx",22,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_54_setAlignmentFromString,"Alphabet","setAlignmentFromString",0x61f72c57,"Alphabet.setAlignmentFromString","Alphabet.hx",54,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_66_set_alignment,"Alphabet","set_alignment",0x428d77eb,"Alphabet.set_alignment","Alphabet.hx",66,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_74_updateAlignment,"Alphabet","updateAlignment",0x384065ff,"Alphabet.updateAlignment","Alphabet.hx",74,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_94_set_text,"Alphabet","set_text",0x81e254a5,"Alphabet.set_text","Alphabet.hx",94,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_104_clearLetters,"Alphabet","clearLetters",0xc2925b3b,"Alphabet.clearLetters","Alphabet.hx",104,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_122_set_scaleX,"Alphabet","set_scaleX",0xe23a6086,"Alphabet.set_scaleX","Alphabet.hx",122,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_141_set_scaleY,"Alphabet","set_scaleY",0xe23a6087,"Alphabet.set_scaleY","Alphabet.hx",141,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_160_update,"Alphabet","update",0xc3c1b444,"Alphabet.update","Alphabet.hx",160,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_174_snapToPosition,"Alphabet","snapToPosition",0x426f7169,"Alphabet.snapToPosition","Alphabet.hx",174,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_186_createLetters,"Alphabet","createLetters",0x3eb75456,"Alphabet.createLetters","Alphabet.hx",186,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_4c95a0630eaf1443_183_boot,"Alphabet","boot",0x4be21dad,"Alphabet.boot","Alphabet.hx",183,0xc2e40fcb)

void Alphabet_obj::__construct(Float x,Float y,::String __o_text, ::Dynamic __o_bold){
            		::String text = __o_text;
            		if (::hx::IsNull(__o_text)) text = HX_("",00,00,00,00);
            		 ::Dynamic bold = __o_bold;
            		if (::hx::IsNull(__o_bold)) bold = true;
            	HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_22_new)
HXLINE(  40)		this->startPosition =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,0,0);
HXLINE(  39)		this->distancePerItem =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,20,120);
HXLINE(  37)		this->rows = 0;
HXLINE(  36)		this->scaleY = ((Float)1);
HXLINE(  35)		this->scaleX = ((Float)1);
HXLINE(  34)		this->alignment = ::Alignment_obj::LEFT_dyn();
HXLINE(  32)		this->changeY = true;
HXLINE(  31)		this->changeX = true;
HXLINE(  30)		this->targetY = 0;
HXLINE(  29)		this->isMenuItem = false;
HXLINE(  27)		this->letters = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  26)		this->bold = false;
HXLINE(  44)		super::__construct(x,y,null());
HXLINE(  46)		this->startPosition->set_x(x);
HXLINE(  47)		this->startPosition->set_y(y);
HXLINE(  48)		this->bold = ( (bool)(bold) );
HXLINE(  49)		this->set_text(text);
            	}

Dynamic Alphabet_obj::__CreateEmpty() { return new Alphabet_obj; }

void *Alphabet_obj::_hx_vtable = 0;

Dynamic Alphabet_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Alphabet_obj > _hx_result = new Alphabet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Alphabet_obj::_hx_isInstanceOf(int inClassId) {
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
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void Alphabet_obj::setAlignmentFromString(::String align){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_54_setAlignmentFromString)
HXDLIN(  54)		::String _hx_switch_0 = ::StringTools_obj::trim(align.toLowerCase());
            		if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ||  (_hx_switch_0==HX_("centered",74,5d,50,8f)) ){
HXLINE(  59)			this->set_alignment(::Alignment_obj::CENTERED_dyn());
HXDLIN(  59)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE(  57)			this->set_alignment(::Alignment_obj::RIGHT_dyn());
HXDLIN(  57)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  61)			this->set_alignment(::Alignment_obj::LEFT_dyn());
            		}
            		_hx_goto_1:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,setAlignmentFromString,(void))

 ::Alignment Alphabet_obj::set_alignment( ::Alignment align){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_66_set_alignment)
HXLINE(  67)		this->alignment = align;
HXLINE(  68)		this->updateAlignment();
HXLINE(  69)		return align;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,set_alignment,return )

void Alphabet_obj::updateAlignment(){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_74_updateAlignment)
HXDLIN(  74)		int _g = 0;
HXDLIN(  74)		::Array< ::Dynamic> _g1 = this->letters;
HXDLIN(  74)		while((_g < _g1->length)){
HXDLIN(  74)			 ::AlphaCharacter letter = _g1->__get(_g).StaticCast<  ::AlphaCharacter >();
HXDLIN(  74)			_g = (_g + 1);
HXLINE(  76)			Float newOffset = ( (Float)(0) );
HXLINE(  77)			switch((int)(this->alignment->_hx_getIndex())){
            				case (int)1: {
HXLINE(  80)					newOffset = (letter->rowWidth / ( (Float)(2) ));
            				}
            				break;
            				case (int)2: {
HXLINE(  82)					newOffset = letter->rowWidth;
            				}
            				break;
            				default:{
HXLINE(  84)					newOffset = ( (Float)(0) );
            				}
            			}
HXLINE(  87)			 ::flixel::math::FlxPoint fh = letter->offset;
HXDLIN(  87)			fh->set_x((fh->x - letter->alignOffset));
HXLINE(  88)			 ::flixel::math::FlxPoint fh1 = letter->offset;
HXDLIN(  88)			fh1->set_x((fh1->x + newOffset));
HXLINE(  89)			letter->alignOffset = newOffset;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,updateAlignment,(void))

::String Alphabet_obj::set_text(::String newText){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_94_set_text)
HXLINE(  95)		newText = ::StringTools_obj::replace(newText,HX_("\\n",92,50,00,00),HX_("\n",0a,00,00,00));
HXLINE(  96)		this->clearLetters();
HXLINE(  97)		this->createLetters(newText);
HXLINE(  98)		this->updateAlignment();
HXLINE(  99)		this->text = newText;
HXLINE( 100)		return newText;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,set_text,return )

void Alphabet_obj::clearLetters(){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_104_clearLetters)
HXLINE( 105)		int i = this->letters->length;
HXLINE( 106)		while((i > 0)){
HXLINE( 108)			i = (i - 1);
HXLINE( 109)			 ::AlphaCharacter letter = this->letters->__get(i).StaticCast<  ::AlphaCharacter >();
HXLINE( 110)			if (::hx::IsNotNull( letter )) {
HXLINE( 112)				letter->kill();
HXLINE( 113)				this->letters->remove(letter);
HXLINE( 114)				letter->destroy();
            			}
            		}
HXLINE( 117)		this->letters = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 118)		this->rows = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,clearLetters,(void))

Float Alphabet_obj::set_scaleX(Float value){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_122_set_scaleX)
HXLINE( 123)		if ((value == this->scaleX)) {
HXLINE( 123)			return value;
            		}
HXLINE( 125)		this->scale->set_x(value);
HXLINE( 126)		{
HXLINE( 126)			int _g = 0;
HXDLIN( 126)			::Array< ::Dynamic> _g1 = this->letters;
HXDLIN( 126)			while((_g < _g1->length)){
HXLINE( 126)				 ::AlphaCharacter letter = _g1->__get(_g).StaticCast<  ::AlphaCharacter >();
HXDLIN( 126)				_g = (_g + 1);
HXLINE( 128)				if (::hx::IsNotNull( letter )) {
HXLINE( 130)					letter->updateHitbox();
HXLINE( 132)					Float ratio = (value / letter->spawnScale->x);
HXLINE( 133)					letter->set_x((letter->spawnPos->x * ratio));
            				}
            			}
            		}
HXLINE( 136)		this->scaleX = value;
HXLINE( 137)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,set_scaleX,return )

Float Alphabet_obj::set_scaleY(Float value){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_141_set_scaleY)
HXLINE( 142)		if ((value == this->scaleY)) {
HXLINE( 142)			return value;
            		}
HXLINE( 144)		this->scale->set_y(value);
HXLINE( 145)		{
HXLINE( 145)			int _g = 0;
HXDLIN( 145)			::Array< ::Dynamic> _g1 = this->letters;
HXDLIN( 145)			while((_g < _g1->length)){
HXLINE( 145)				 ::AlphaCharacter letter = _g1->__get(_g).StaticCast<  ::AlphaCharacter >();
HXDLIN( 145)				_g = (_g + 1);
HXLINE( 147)				if (::hx::IsNotNull( letter )) {
HXLINE( 149)					letter->updateHitbox();
HXLINE( 150)					letter->updateLetterOffset();
HXLINE( 151)					Float ratio = (value / letter->spawnScale->y);
HXLINE( 152)					letter->set_y((letter->spawnPos->y * ratio));
            				}
            			}
            		}
HXLINE( 155)		this->scaleY = value;
HXLINE( 156)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,set_scaleY,return )

void Alphabet_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_160_update)
HXLINE( 161)		if (this->isMenuItem) {
HXLINE( 163)			Float lerpVal = ::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(elapsed * ((Float)9.6))));
HXLINE( 164)			if (this->changeX) {
HXLINE( 165)				Float a = this->x;
HXDLIN( 165)				this->set_x((a + (lerpVal * (((( (Float)(this->targetY) ) * this->distancePerItem->x) + this->startPosition->x) - a))));
            			}
HXLINE( 166)			if (this->changeY) {
HXLINE( 167)				Float a = this->y;
HXDLIN( 167)				this->set_y((a + (lerpVal * ((((( (Float)(this->targetY) ) * ((Float)1.3)) * this->distancePerItem->y) + this->startPosition->y) - a))));
            			}
            		}
HXLINE( 169)		this->super::update(elapsed);
            	}


void Alphabet_obj::snapToPosition(){
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_174_snapToPosition)
HXDLIN( 174)		if (this->isMenuItem) {
HXLINE( 176)			if (this->changeX) {
HXLINE( 177)				this->set_x(((( (Float)(this->targetY) ) * this->distancePerItem->x) + this->startPosition->x));
            			}
HXLINE( 178)			if (this->changeY) {
HXLINE( 179)				this->set_y((((( (Float)(this->targetY) ) * ((Float)1.3)) * this->distancePerItem->y) + this->startPosition->y));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Alphabet_obj,snapToPosition,(void))

void Alphabet_obj::createLetters(::String newText){
            	HX_GC_STACKFRAME(&_hx_pos_4c95a0630eaf1443_186_createLetters)
HXLINE( 187)		int consecutiveSpaces = 0;
HXLINE( 189)		Float xPos = ( (Float)(0) );
HXLINE( 190)		::Array< Float > rowData = ::Array_obj< Float >::__new(0);
HXLINE( 191)		this->rows = 0;
HXLINE( 192)		{
HXLINE( 192)			int _g = 0;
HXDLIN( 192)			::Array< ::String > _g1 = newText.split(HX_("",00,00,00,00));
HXDLIN( 192)			while((_g < _g1->length)){
HXLINE( 192)				::String character = _g1->__get(_g);
HXDLIN( 192)				_g = (_g + 1);
HXLINE( 195)				if ((character != HX_("\n",0a,00,00,00))) {
HXLINE( 197)					bool spaceChar;
HXDLIN( 197)					if ((character != HX_(" ",20,00,00,00))) {
HXLINE( 197)						if (this->bold) {
HXLINE( 197)							spaceChar = (character == HX_("_",5f,00,00,00));
            						}
            						else {
HXLINE( 197)							spaceChar = false;
            						}
            					}
            					else {
HXLINE( 197)						spaceChar = true;
            					}
HXLINE( 198)					if (spaceChar) {
HXLINE( 198)						consecutiveSpaces = (consecutiveSpaces + 1);
            					}
HXLINE( 200)					bool isAlphabet = ::AlphaCharacter_obj::isTypeAlphabet(character.toLowerCase());
HXLINE( 201)					bool _hx_tmp;
HXDLIN( 201)					::Dynamic this1 = ::AlphaCharacter_obj::allLetters;
HXDLIN( 201)					if (( ( ::haxe::ds::StringMap)(this1) )->exists(character.toLowerCase())) {
HXLINE( 201)						if (this->bold) {
HXLINE( 201)							_hx_tmp = !(spaceChar);
            						}
            						else {
HXLINE( 201)							_hx_tmp = true;
            						}
            					}
            					else {
HXLINE( 201)						_hx_tmp = false;
            					}
HXDLIN( 201)					if (_hx_tmp) {
HXLINE( 203)						if ((consecutiveSpaces > 0)) {
HXLINE( 205)							xPos = (xPos + (( (Float)((28 * consecutiveSpaces)) ) * this->scaleX));
HXLINE( 206)							bool _hx_tmp;
HXDLIN( 206)							if (!(this->bold)) {
HXLINE( 206)								_hx_tmp = (xPos >= (( (Float)(::flixel::FlxG_obj::width) ) * ((Float)0.65)));
            							}
            							else {
HXLINE( 206)								_hx_tmp = false;
            							}
HXDLIN( 206)							if (_hx_tmp) {
HXLINE( 208)								xPos = ( (Float)(0) );
HXLINE( 209)								this->rows++;
            							}
            						}
HXLINE( 212)						consecutiveSpaces = 0;
HXLINE( 214)						 ::AlphaCharacter letter =  ::AlphaCharacter_obj::__alloc( HX_CTX ,xPos,((( (Float)(this->rows) ) * ::Alphabet_obj::Y_PER_ROW) * this->scaleY),character,this->bold,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 215)						letter->set_x((letter->x + (letter->letterOffset->__get(0) * this->scaleX)));
HXLINE( 216)						letter->set_y((letter->y - (letter->letterOffset->__get(1) * this->scaleY)));
HXLINE( 217)						letter->row = this->rows;
HXLINE( 219)						Float off = ( (Float)(0) );
HXLINE( 220)						if (!(this->bold)) {
HXLINE( 220)							off = ( (Float)(2) );
            						}
HXLINE( 221)						Float xPos1 = letter->get_width();
HXDLIN( 221)						xPos = (xPos + (xPos1 + ((letter->letterOffset->__get(0) + off) * this->scaleX)));
HXLINE( 222)						rowData[this->rows] = xPos;
HXLINE( 224)						this->add(letter);
HXLINE( 225)						this->letters->push(letter);
            					}
            				}
            				else {
HXLINE( 230)					xPos = ( (Float)(0) );
HXLINE( 231)					this->rows++;
            				}
            			}
            		}
HXLINE( 235)		{
HXLINE( 235)			int _g2 = 0;
HXDLIN( 235)			::Array< ::Dynamic> _g3 = this->letters;
HXDLIN( 235)			while((_g2 < _g3->length)){
HXLINE( 235)				 ::AlphaCharacter letter = _g3->__get(_g2).StaticCast<  ::AlphaCharacter >();
HXDLIN( 235)				_g2 = (_g2 + 1);
HXLINE( 237)				letter->spawnPos->set(letter->x,letter->y);
HXLINE( 238)				letter->spawnScale->set(this->scaleX,this->scaleY);
HXLINE( 239)				letter->rowWidth = rowData->__get(letter->row);
            			}
            		}
HXLINE( 242)		if ((this->letters->length > 0)) {
HXLINE( 242)			this->rows++;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Alphabet_obj,createLetters,(void))

Float Alphabet_obj::Y_PER_ROW;


::hx::ObjectPtr< Alphabet_obj > Alphabet_obj::__new(Float x,Float y,::String __o_text, ::Dynamic __o_bold) {
	::hx::ObjectPtr< Alphabet_obj > __this = new Alphabet_obj();
	__this->__construct(x,y,__o_text,__o_bold);
	return __this;
}

::hx::ObjectPtr< Alphabet_obj > Alphabet_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_text, ::Dynamic __o_bold) {
	Alphabet_obj *__this = (Alphabet_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Alphabet_obj), true, "Alphabet"));
	*(void **)__this = Alphabet_obj::_hx_vtable;
	__this->__construct(x,y,__o_text,__o_bold);
	return __this;
}

Alphabet_obj::Alphabet_obj()
{
}

void Alphabet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Alphabet);
	HX_MARK_MEMBER_NAME(text,"text");
	HX_MARK_MEMBER_NAME(bold,"bold");
	HX_MARK_MEMBER_NAME(letters,"letters");
	HX_MARK_MEMBER_NAME(isMenuItem,"isMenuItem");
	HX_MARK_MEMBER_NAME(targetY,"targetY");
	HX_MARK_MEMBER_NAME(changeX,"changeX");
	HX_MARK_MEMBER_NAME(changeY,"changeY");
	HX_MARK_MEMBER_NAME(alignment,"alignment");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(distancePerItem,"distancePerItem");
	HX_MARK_MEMBER_NAME(startPosition,"startPosition");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Alphabet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(text,"text");
	HX_VISIT_MEMBER_NAME(bold,"bold");
	HX_VISIT_MEMBER_NAME(letters,"letters");
	HX_VISIT_MEMBER_NAME(isMenuItem,"isMenuItem");
	HX_VISIT_MEMBER_NAME(targetY,"targetY");
	HX_VISIT_MEMBER_NAME(changeX,"changeX");
	HX_VISIT_MEMBER_NAME(changeY,"changeY");
	HX_VISIT_MEMBER_NAME(alignment,"alignment");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(distancePerItem,"distancePerItem");
	HX_VISIT_MEMBER_NAME(startPosition,"startPosition");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Alphabet_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return ::hx::Val( text ); }
		if (HX_FIELD_EQ(inName,"bold") ) { return ::hx::Val( bold ); }
		if (HX_FIELD_EQ(inName,"rows") ) { return ::hx::Val( rows ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { return ::hx::Val( scaleX ); }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return ::hx::Val( scaleY ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"letters") ) { return ::hx::Val( letters ); }
		if (HX_FIELD_EQ(inName,"targetY") ) { return ::hx::Val( targetY ); }
		if (HX_FIELD_EQ(inName,"changeX") ) { return ::hx::Val( changeX ); }
		if (HX_FIELD_EQ(inName,"changeY") ) { return ::hx::Val( changeY ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { return ::hx::Val( alignment ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isMenuItem") ) { return ::hx::Val( isMenuItem ); }
		if (HX_FIELD_EQ(inName,"set_scaleX") ) { return ::hx::Val( set_scaleX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_scaleY") ) { return ::hx::Val( set_scaleY_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clearLetters") ) { return ::hx::Val( clearLetters_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { return ::hx::Val( startPosition ); }
		if (HX_FIELD_EQ(inName,"set_alignment") ) { return ::hx::Val( set_alignment_dyn() ); }
		if (HX_FIELD_EQ(inName,"createLetters") ) { return ::hx::Val( createLetters_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"snapToPosition") ) { return ::hx::Val( snapToPosition_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distancePerItem") ) { return ::hx::Val( distancePerItem ); }
		if (HX_FIELD_EQ(inName,"updateAlignment") ) { return ::hx::Val( updateAlignment_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"setAlignmentFromString") ) { return ::hx::Val( setAlignmentFromString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Alphabet_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"Y_PER_ROW") ) { outValue = ( Y_PER_ROW ); return true; }
	}
	return false;
}

::hx::Val Alphabet_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_text(inValue.Cast< ::String >()) );text=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bold") ) { bold=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleX(inValue.Cast< Float >()) );scaleX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_scaleY(inValue.Cast< Float >()) );scaleY=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"letters") ) { letters=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"targetY") ) { targetY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"changeX") ) { changeX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"changeY") ) { changeY=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alignment") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_alignment(inValue.Cast<  ::Alignment >()) );alignment=inValue.Cast<  ::Alignment >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isMenuItem") ) { isMenuItem=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { startPosition=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distancePerItem") ) { distancePerItem=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Alphabet_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"Y_PER_ROW") ) { Y_PER_ROW=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void Alphabet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("text",ad,cc,f9,4c));
	outFields->push(HX_("bold",85,81,1b,41));
	outFields->push(HX_("letters",cd,9c,8e,04));
	outFields->push(HX_("isMenuItem",5c,04,de,c6));
	outFields->push(HX_("targetY",e8,f3,67,88));
	outFields->push(HX_("changeX",e8,b0,cc,cc));
	outFields->push(HX_("changeY",e9,b0,cc,cc));
	outFields->push(HX_("alignment",e3,e2,3d,ea));
	outFields->push(HX_("scaleX",8e,ea,25,3c));
	outFields->push(HX_("scaleY",8f,ea,25,3c));
	outFields->push(HX_("rows",19,f5,ae,4b));
	outFields->push(HX_("distancePerItem",db,0d,28,f9));
	outFields->push(HX_("startPosition",2b,03,b6,cf));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Alphabet_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Alphabet_obj,text),HX_("text",ad,cc,f9,4c)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,bold),HX_("bold",85,81,1b,41)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Alphabet_obj,letters),HX_("letters",cd,9c,8e,04)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,isMenuItem),HX_("isMenuItem",5c,04,de,c6)},
	{::hx::fsInt,(int)offsetof(Alphabet_obj,targetY),HX_("targetY",e8,f3,67,88)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,changeX),HX_("changeX",e8,b0,cc,cc)},
	{::hx::fsBool,(int)offsetof(Alphabet_obj,changeY),HX_("changeY",e9,b0,cc,cc)},
	{::hx::fsObject /*  ::Alignment */ ,(int)offsetof(Alphabet_obj,alignment),HX_("alignment",e3,e2,3d,ea)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,scaleX),HX_("scaleX",8e,ea,25,3c)},
	{::hx::fsFloat,(int)offsetof(Alphabet_obj,scaleY),HX_("scaleY",8f,ea,25,3c)},
	{::hx::fsInt,(int)offsetof(Alphabet_obj,rows),HX_("rows",19,f5,ae,4b)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(Alphabet_obj,distancePerItem),HX_("distancePerItem",db,0d,28,f9)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(Alphabet_obj,startPosition),HX_("startPosition",2b,03,b6,cf)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo Alphabet_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &Alphabet_obj::Y_PER_ROW,HX_("Y_PER_ROW",12,31,e0,9a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String Alphabet_obj_sMemberFields[] = {
	HX_("text",ad,cc,f9,4c),
	HX_("bold",85,81,1b,41),
	HX_("letters",cd,9c,8e,04),
	HX_("isMenuItem",5c,04,de,c6),
	HX_("targetY",e8,f3,67,88),
	HX_("changeX",e8,b0,cc,cc),
	HX_("changeY",e9,b0,cc,cc),
	HX_("alignment",e3,e2,3d,ea),
	HX_("scaleX",8e,ea,25,3c),
	HX_("scaleY",8f,ea,25,3c),
	HX_("rows",19,f5,ae,4b),
	HX_("distancePerItem",db,0d,28,f9),
	HX_("startPosition",2b,03,b6,cf),
	HX_("setAlignmentFromString",1c,98,4d,ef),
	HX_("set_alignment",c6,98,a7,f0),
	HX_("updateAlignment",9a,b3,c8,39),
	HX_("set_text",aa,e1,11,7b),
	HX_("clearLetters",c0,4e,0d,e0),
	HX_("set_scaleX",cb,f8,2a,30),
	HX_("set_scaleY",cc,f8,2a,30),
	HX_("update",09,86,05,87),
	HX_("snapToPosition",2e,10,32,eb),
	HX_("createLetters",31,75,d1,ec),
	::String(null()) };

static void Alphabet_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Alphabet_obj::Y_PER_ROW,"Y_PER_ROW");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Alphabet_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Alphabet_obj::Y_PER_ROW,"Y_PER_ROW");
};

#endif

::hx::Class Alphabet_obj::__mClass;

static ::String Alphabet_obj_sStaticFields[] = {
	HX_("Y_PER_ROW",12,31,e0,9a),
	::String(null())
};

void Alphabet_obj::__register()
{
	Alphabet_obj _hx_dummy;
	Alphabet_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Alphabet",d3,38,ea,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Alphabet_obj::__GetStatic;
	__mClass->mSetStaticField = &Alphabet_obj::__SetStatic;
	__mClass->mMarkFunc = Alphabet_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Alphabet_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Alphabet_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Alphabet_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Alphabet_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Alphabet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Alphabet_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Alphabet_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4c95a0630eaf1443_183_boot)
HXDLIN( 183)		Y_PER_ROW = ((Float)85);
            	}
}

