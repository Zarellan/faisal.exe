#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxSlider
#include <flixel/addons/ui/FlxSlider.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_904b05de766b1fa3_19_new,"flixel.addons.ui.FlxSlider","new",0xa675b6b4,"flixel.addons.ui.FlxSlider.new","flixel/addons/ui/FlxSlider.hx",19,0x927a0a9d)
HX_LOCAL_STACK_FRAME(_hx_pos_904b05de766b1fa3_224_createSlider,"flixel.addons.ui.FlxSlider","createSlider",0xa03ab569,"flixel.addons.ui.FlxSlider.createSlider","flixel/addons/ui/FlxSlider.hx",224,0x927a0a9d)
HX_LOCAL_STACK_FRAME(_hx_pos_904b05de766b1fa3_272_update,"flixel.addons.ui.FlxSlider","update",0xea1d4c35,"flixel.addons.ui.FlxSlider.update","flixel/addons/ui/FlxSlider.hx",272,0x927a0a9d)
HX_LOCAL_STACK_FRAME(_hx_pos_904b05de766b1fa3_347_updateValue,"flixel.addons.ui.FlxSlider","updateValue",0x61ff42fc,"flixel.addons.ui.FlxSlider.updateValue","flixel/addons/ui/FlxSlider.hx",347,0x927a0a9d)
HX_LOCAL_STACK_FRAME(_hx_pos_904b05de766b1fa3_371_setTexts,"flixel.addons.ui.FlxSlider","setTexts",0x49045d50,"flixel.addons.ui.FlxSlider.setTexts","flixel/addons/ui/FlxSlider.hx",371,0x927a0a9d)
HX_LOCAL_STACK_FRAME(_hx_pos_904b05de766b1fa3_421_destroy,"flixel.addons.ui.FlxSlider","destroy",0x763bcd4e,"flixel.addons.ui.FlxSlider.destroy","flixel/addons/ui/FlxSlider.hx",421,0x927a0a9d)
HX_LOCAL_STACK_FRAME(_hx_pos_904b05de766b1fa3_435_get_expectedPos,"flixel.addons.ui.FlxSlider","get_expectedPos",0x1d9d0de7,"flixel.addons.ui.FlxSlider.get_expectedPos","flixel/addons/ui/FlxSlider.hx",435,0x927a0a9d)
HX_LOCAL_STACK_FRAME(_hx_pos_904b05de766b1fa3_452_get_relativePos,"flixel.addons.ui.FlxSlider","get_relativePos",0x5a4b2c13,"flixel.addons.ui.FlxSlider.get_relativePos","flixel/addons/ui/FlxSlider.hx",452,0x927a0a9d)
HX_LOCAL_STACK_FRAME(_hx_pos_904b05de766b1fa3_465_set_varString,"flixel.addons.ui.FlxSlider","set_varString",0xced9704f,"flixel.addons.ui.FlxSlider.set_varString","flixel/addons/ui/FlxSlider.hx",465,0x927a0a9d)
HX_LOCAL_STACK_FRAME(_hx_pos_904b05de766b1fa3_481_set_x,"flixel.addons.ui.FlxSlider","set_x",0x5956beaf,"flixel.addons.ui.FlxSlider.set_x","flixel/addons/ui/FlxSlider.hx",481,0x927a0a9d)
HX_LOCAL_STACK_FRAME(_hx_pos_904b05de766b1fa3_488_set_y,"flixel.addons.ui.FlxSlider","set_y",0x5956beb0,"flixel.addons.ui.FlxSlider.set_y","flixel/addons/ui/FlxSlider.hx",488,0x927a0a9d)
HX_LOCAL_STACK_FRAME(_hx_pos_904b05de766b1fa3_496_updateBounds,"flixel.addons.ui.FlxSlider","updateBounds",0x73c1dc8a,"flixel.addons.ui.FlxSlider.updateBounds","flixel/addons/ui/FlxSlider.hx",496,0x927a0a9d)
namespace flixel{
namespace addons{
namespace ui{

void FlxSlider_obj::__construct( ::Dynamic Object,::String VarString,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_MinValue,::hx::Null< Float >  __o_MaxValue,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< int >  __o_Thickness,::hx::Null< int >  __o_Color,::hx::Null< int >  __o_HandleColor){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		Float MinValue = __o_MinValue.Default(0);
            		Float MaxValue = __o_MaxValue.Default(10);
            		int Width = __o_Width.Default(100);
            		int Height = __o_Height.Default(15);
            		int Thickness = __o_Thickness.Default(3);
            		int Color = __o_Color.Default(-16777216);
            		int HandleColor = __o_HandleColor.Default(-8224126);
            	HX_STACKFRAME(&_hx_pos_904b05de766b1fa3_19_new)
HXLINE( 165)		this->_justHovered = false;
HXLINE( 160)		this->_justClicked = false;
HXLINE(  96)		this->setVariable = true;
HXLINE(  91)		this->callback = null();
HXLINE(  85)		this->hoverAlpha = ((Float)0.5);
HXLINE(  70)		this->decimals = 0;
HXLINE( 185)		super::__construct(null(),null(),null());
HXLINE( 187)		this->set_x(X);
HXLINE( 188)		this->set_y(Y);
HXLINE( 190)		bool _hx_tmp = (MinValue == MaxValue);
HXLINE( 196)		this->decimals = ::flixel::math::FlxMath_obj::getDecimals(MinValue);
HXLINE( 198)		int _hx_tmp1 = ::flixel::math::FlxMath_obj::getDecimals(MaxValue);
HXDLIN( 198)		if ((_hx_tmp1 > this->decimals)) {
HXLINE( 200)			this->decimals = ::flixel::math::FlxMath_obj::getDecimals(MaxValue);
            		}
HXLINE( 203)		this->decimals++;
HXLINE( 206)		this->minValue = MinValue;
HXLINE( 207)		this->maxValue = MaxValue;
HXLINE( 208)		this->_object = Object;
HXLINE( 209)		this->set_varString(VarString);
HXLINE( 210)		this->_width = Width;
HXLINE( 211)		this->_height = Height;
HXLINE( 212)		this->_thickness = Thickness;
HXLINE( 213)		this->_color = Color;
HXLINE( 214)		this->_handleColor = HandleColor;
HXLINE( 217)		this->createSlider();
            	}

Dynamic FlxSlider_obj::__CreateEmpty() { return new FlxSlider_obj; }

void *FlxSlider_obj::_hx_vtable = 0;

Dynamic FlxSlider_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxSlider_obj > _hx_result = new FlxSlider_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10]);
	return _hx_result;
}

bool FlxSlider_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x520166d0) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x520166d0;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void FlxSlider_obj::createSlider(){
            	HX_GC_STACKFRAME(&_hx_pos_904b05de766b1fa3_224_createSlider)
HXLINE( 225)		this->offset->set(7,18);
HXLINE( 226)		Float X = (this->x + this->offset->x);
HXDLIN( 226)		Float Y = (this->y + this->offset->y);
HXDLIN( 226)		Float Width = ( (Float)(this->_width) );
HXDLIN( 226)		Float Height = ( (Float)(this->_height) );
HXDLIN( 226)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 226)		_this->x = X;
HXDLIN( 226)		_this->y = Y;
HXDLIN( 226)		_this->width = Width;
HXDLIN( 226)		_this->height = Height;
HXDLIN( 226)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 226)		rect->_inPool = false;
HXDLIN( 226)		this->_bounds = rect;
HXLINE( 229)		this->body =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->offset->x,this->offset->y,null());
HXLINE( 230)		::String colorKey = ((((HX_("slider:W=",3f,53,b7,60) + this->_width) + HX_("H=",f5,3e,00,00)) + this->_height) + HX_("C=",9a,3a,00,00));
HXDLIN( 230)		int this1 = this->_color;
HXDLIN( 230)		::String colorKey1 = HX_("0x",48,2a,00,00);
HXDLIN( 230)		::String colorKey2 = ::StringTools_obj::hex(((this1 >> 24) & 255),2);
HXDLIN( 230)		::String colorKey3 = ((colorKey1 + colorKey2) + ::StringTools_obj::hex(((this1 >> 16) & 255),2));
HXDLIN( 230)		::String colorKey4 = (colorKey3 + ::StringTools_obj::hex(((this1 >> 8) & 255),2));
HXDLIN( 230)		::String colorKey5 = ((colorKey + (colorKey4 + ::StringTools_obj::hex((this1 & 255),2))) + HX_("T=",69,49,00,00));
HXDLIN( 230)		::String colorKey6 = (colorKey5 + this->_thickness);
HXLINE( 231)		this->body->makeGraphic(this->_width,this->_height,0,false,colorKey6);
HXLINE( 232)		this->body->scrollFactor->set(null(),null());
HXLINE( 233)		::flixel::util::FlxSpriteUtil_obj::drawLine(this->body,( (Float)(0) ),(( (Float)(this->_height) ) / ( (Float)(2) )),( (Float)(this->_width) ),(( (Float)(this->_height) ) / ( (Float)(2) )), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("color",63,71,5c,4a),this->_color)
            			->setFixed(1,HX_("thickness",74,f1,66,5a),this->_thickness)),null());
HXLINE( 235)		this->handle =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,this->offset->x,this->offset->y,null());
HXLINE( 236)		this->handle->makeGraphic(this->_thickness,this->_height,this->_handleColor,null(),null());
HXLINE( 237)		this->handle->scrollFactor->set(null(),null());
HXLINE( 240)		this->nameLabel =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->offset->x,0,this->_width,this->varString,null(),null());
HXLINE( 241)		this->nameLabel->set_alignment(HX_("center",d5,25,db,05));
HXLINE( 242)		this->nameLabel->set_color(this->_color);
HXLINE( 243)		this->nameLabel->scrollFactor->set(null(),null());
HXLINE( 245)		Float textOffset = ((this->_height + this->offset->y) + 3);
HXLINE( 247)		this->valueLabel =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,this->offset->x,textOffset,this->_width,null(),null(),null());
HXLINE( 248)		this->valueLabel->set_alignment(HX_("center",d5,25,db,05));
HXLINE( 249)		this->valueLabel->set_color(this->_handleColor);
HXLINE( 250)		this->valueLabel->scrollFactor->set(null(),null());
HXLINE( 252)		Float _hx_tmp = (-50 + this->offset->x);
HXDLIN( 252)		this->minLabel =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,_hx_tmp,textOffset,100,::Std_obj::string(this->minValue),null(),null());
HXLINE( 253)		this->minLabel->set_alignment(HX_("center",d5,25,db,05));
HXLINE( 254)		this->minLabel->set_color(this->_color);
HXLINE( 255)		this->minLabel->scrollFactor->set(null(),null());
HXLINE( 257)		Float _hx_tmp1 = ((this->_width - 50) + this->offset->x);
HXDLIN( 257)		this->maxLabel =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,_hx_tmp1,textOffset,100,::Std_obj::string(this->maxValue),null(),null());
HXLINE( 258)		this->maxLabel->set_alignment(HX_("center",d5,25,db,05));
HXLINE( 259)		this->maxLabel->set_color(this->_color);
HXLINE( 260)		this->maxLabel->scrollFactor->set(null(),null());
HXLINE( 263)		this->add(this->body);
HXLINE( 264)		this->add(this->handle);
HXLINE( 265)		this->add(this->nameLabel);
HXLINE( 266)		this->add(this->valueLabel);
HXLINE( 267)		this->add(this->minLabel);
HXLINE( 268)		this->add(this->maxLabel);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSlider_obj,createSlider,(void))

void FlxSlider_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_904b05de766b1fa3_272_update)
HXLINE( 274)		if (::flixel::math::FlxMath_obj::mouseInFlxRect(false,this->_bounds)) {
HXLINE( 276)			if ((this->hoverAlpha != 1)) {
HXLINE( 278)				this->set_alpha(this->hoverAlpha);
            			}
HXLINE( 282)			bool _hx_tmp;
HXDLIN( 282)			if (::hx::IsNotNull( this->hoverSound )) {
HXLINE( 282)				_hx_tmp = !(this->_justHovered);
            			}
            			else {
HXLINE( 282)				_hx_tmp = false;
            			}
HXDLIN( 282)			if (_hx_tmp) {
HXLINE( 284)				::flixel::FlxG_obj::sound->play(this->hoverSound,null(),null(),null(),null(),null());
            			}
HXLINE( 288)			this->_justHovered = true;
HXLINE( 290)			 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN( 290)			bool _hx_tmp1;
HXDLIN( 290)			if ((_this->current != 1)) {
HXLINE( 290)				_hx_tmp1 = (_this->current == 2);
            			}
            			else {
HXLINE( 290)				_hx_tmp1 = true;
            			}
HXDLIN( 290)			if (_hx_tmp1) {
HXLINE( 292)				this->handle->set_x(( (Float)(::flixel::FlxG_obj::mouse->screenX) ));
HXLINE( 293)				this->updateValue();
HXLINE( 296)				bool _hx_tmp;
HXDLIN( 296)				if (::hx::IsNotNull( this->clickSound )) {
HXLINE( 296)					_hx_tmp = !(this->_justClicked);
            				}
            				else {
HXLINE( 296)					_hx_tmp = false;
            				}
HXDLIN( 296)				if (_hx_tmp) {
HXLINE( 298)					::flixel::FlxG_obj::sound->play(this->clickSound,null(),null(),null(),null(),null());
HXLINE( 299)					this->_justClicked = true;
            				}
            			}
HXLINE( 303)			 ::flixel::input::mouse::FlxMouseButton _this1 = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN( 303)			bool _hx_tmp2;
HXDLIN( 303)			if ((_this1->current != 1)) {
HXLINE( 303)				_hx_tmp2 = (_this1->current == 2);
            			}
            			else {
HXLINE( 303)				_hx_tmp2 = true;
            			}
HXDLIN( 303)			if (!(_hx_tmp2)) {
HXLINE( 305)				this->_justClicked = false;
            			}
            		}
            		else {
HXLINE( 310)			if ((this->hoverAlpha != 1)) {
HXLINE( 312)				this->set_alpha(( (Float)(1) ));
            			}
HXLINE( 315)			this->_justHovered = false;
            		}
HXLINE( 319)		bool _hx_tmp;
HXDLIN( 319)		 ::flixel::input::mouse::FlxMouseButton _this = ::flixel::FlxG_obj::mouse->_leftButton;
HXDLIN( 319)		bool _hx_tmp1;
HXDLIN( 319)		if ((_this->current != 1)) {
HXLINE( 319)			_hx_tmp1 = (_this->current == 2);
            		}
            		else {
HXLINE( 319)			_hx_tmp1 = true;
            		}
HXDLIN( 319)		if (_hx_tmp1) {
HXLINE( 319)			_hx_tmp = ::flixel::math::FlxMath_obj::mouseInFlxRect(false,this->_bounds);
            		}
            		else {
HXLINE( 319)			_hx_tmp = false;
            		}
HXDLIN( 319)		if (_hx_tmp) {
HXLINE( 321)			this->updateValue();
            		}
HXLINE( 325)		bool _hx_tmp2;
HXDLIN( 325)		if (::hx::IsNotNull( this->varString )) {
HXLINE( 325)			_hx_tmp2 = ::hx::IsNotNull( ::Reflect_obj::getProperty(this->_object,this->varString) );
            		}
            		else {
HXLINE( 325)			_hx_tmp2 = false;
            		}
HXDLIN( 325)		if (_hx_tmp2) {
HXLINE( 327)			this->value = ( (Float)(::Reflect_obj::getProperty(this->_object,this->varString)) );
            		}
HXLINE( 331)		Float _hx_tmp3 = this->handle->x;
HXDLIN( 331)		if ((_hx_tmp3 != this->get_expectedPos())) {
HXLINE( 333)			 ::flixel::FlxSprite _hx_tmp = this->handle;
HXDLIN( 333)			_hx_tmp->set_x(this->get_expectedPos());
            		}
HXLINE( 337)		 ::flixel::text::FlxText _hx_tmp4 = this->valueLabel;
HXDLIN( 337)		_hx_tmp4->set_text(::Std_obj::string(::flixel::math::FlxMath_obj::roundDecimal(this->value,this->decimals)));
HXLINE( 339)		this->super::update(elapsed);
            	}


void FlxSlider_obj::updateValue(){
            	HX_STACKFRAME(&_hx_pos_904b05de766b1fa3_347_updateValue)
HXDLIN( 347)		Float _hx_tmp = this->_lastPos;
HXDLIN( 347)		if ((_hx_tmp != this->get_relativePos())) {
HXLINE( 349)			bool _hx_tmp;
HXDLIN( 349)			if (this->setVariable) {
HXLINE( 349)				_hx_tmp = ::hx::IsNotNull( this->varString );
            			}
            			else {
HXLINE( 349)				_hx_tmp = false;
            			}
HXDLIN( 349)			if (_hx_tmp) {
HXLINE( 351)				 ::Dynamic _hx_tmp = this->_object;
HXDLIN( 351)				::String _hx_tmp1 = this->varString;
HXDLIN( 351)				Float _hx_tmp2 = this->get_relativePos();
HXDLIN( 351)				::Reflect_obj::setProperty(_hx_tmp,_hx_tmp1,((_hx_tmp2 * (this->maxValue - this->minValue)) + this->minValue));
            			}
HXLINE( 354)			this->_lastPos = this->get_relativePos();
HXLINE( 356)			if (::hx::IsNotNull( this->callback )) {
HXLINE( 357)				 ::Dynamic _hx_tmp = this->callback;
HXDLIN( 357)				_hx_tmp(this->get_relativePos());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSlider_obj,updateValue,(void))

void FlxSlider_obj::setTexts(::String Name,::hx::Null< bool >  __o_Value,::String Min,::String Max,::hx::Null< int >  __o_Size){
            		bool Value = __o_Value.Default(true);
            		int Size = __o_Size.Default(8);
            	HX_STACKFRAME(&_hx_pos_904b05de766b1fa3_371_setTexts)
HXLINE( 372)		if (::hx::IsNull( Name )) {
HXLINE( 374)			this->nameLabel->set_visible(false);
            		}
            		else {
HXLINE( 378)			this->nameLabel->set_text(Name);
HXLINE( 379)			this->nameLabel->set_visible(true);
            		}
HXLINE( 382)		if (::hx::IsNull( Min )) {
HXLINE( 384)			this->minLabel->set_visible(false);
            		}
            		else {
HXLINE( 388)			this->minLabel->set_text(Min);
HXLINE( 389)			this->minLabel->set_visible(true);
            		}
HXLINE( 392)		if (::hx::IsNull( Max )) {
HXLINE( 394)			this->maxLabel->set_visible(false);
            		}
            		else {
HXLINE( 398)			this->maxLabel->set_text(Max);
HXLINE( 399)			this->maxLabel->set_visible(true);
            		}
HXLINE( 402)		if (!(Value)) {
HXLINE( 404)			this->valueLabel->set_visible(false);
            		}
            		else {
HXLINE( 408)			this->valueLabel->set_visible(true);
            		}
HXLINE( 411)		this->nameLabel->set_size(Size);
HXLINE( 412)		this->valueLabel->set_size(Size);
HXLINE( 413)		this->minLabel->set_size(Size);
HXLINE( 414)		this->maxLabel->set_size(Size);
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxSlider_obj,setTexts,(void))

void FlxSlider_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_904b05de766b1fa3_421_destroy)
HXLINE( 422)		this->body = ( ( ::flixel::FlxSprite)(::flixel::util::FlxDestroyUtil_obj::destroy(this->body)) );
HXLINE( 423)		this->handle = ( ( ::flixel::FlxSprite)(::flixel::util::FlxDestroyUtil_obj::destroy(this->handle)) );
HXLINE( 424)		this->minLabel = ( ( ::flixel::text::FlxText)(::flixel::util::FlxDestroyUtil_obj::destroy(this->minLabel)) );
HXLINE( 425)		this->maxLabel = ( ( ::flixel::text::FlxText)(::flixel::util::FlxDestroyUtil_obj::destroy(this->maxLabel)) );
HXLINE( 426)		this->nameLabel = ( ( ::flixel::text::FlxText)(::flixel::util::FlxDestroyUtil_obj::destroy(this->nameLabel)) );
HXLINE( 427)		this->valueLabel = ( ( ::flixel::text::FlxText)(::flixel::util::FlxDestroyUtil_obj::destroy(this->valueLabel)) );
HXLINE( 429)		this->_bounds = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(this->_bounds)) );
HXLINE( 431)		this->super::destroy();
            	}


Float FlxSlider_obj::get_expectedPos(){
            	HX_STACKFRAME(&_hx_pos_904b05de766b1fa3_435_get_expectedPos)
HXLINE( 436)		Float pos = (this->x + this->offset->x);
HXDLIN( 436)		int pos1 = this->_width;
HXDLIN( 436)		Float pos2 = (( (Float)(pos1) ) - this->handle->get_width());
HXDLIN( 436)		Float pos3 = (pos + (pos2 * ((this->value - this->minValue) / (this->maxValue - this->minValue))));
HXLINE( 439)		if ((pos3 > ((this->x + this->_width) + this->offset->x))) {
HXLINE( 441)			pos3 = ((this->x + this->_width) + this->offset->x);
            		}
            		else {
HXLINE( 443)			if ((pos3 < (this->x + this->offset->x))) {
HXLINE( 445)				pos3 = (this->x + this->offset->x);
            			}
            		}
HXLINE( 448)		return pos3;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSlider_obj,get_expectedPos,return )

Float FlxSlider_obj::get_relativePos(){
            	HX_STACKFRAME(&_hx_pos_904b05de766b1fa3_452_get_relativePos)
HXLINE( 453)		Float pos = ((this->handle->x - this->x) - this->offset->x);
HXDLIN( 453)		int pos1 = this->_width;
HXDLIN( 453)		Float pos2 = (pos / (( (Float)(pos1) ) - this->handle->get_width()));
HXLINE( 456)		if ((pos2 > 1)) {
HXLINE( 458)			pos2 = ( (Float)(1) );
            		}
HXLINE( 461)		return pos2;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSlider_obj,get_relativePos,return )

::String FlxSlider_obj::set_varString(::String Value){
            	HX_STACKFRAME(&_hx_pos_904b05de766b1fa3_465_set_varString)
HXLINE( 466)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 468)			::Reflect_obj::getProperty(this->_object,Value);
HXLINE( 469)			this->varString = Value;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 471)				{
HXLINE( 471)					null();
            				}
HXLINE( 473)				{
HXLINE( 473)					 ::flixel::_hx_system::frontEnds::LogFrontEnd _this = ::flixel::FlxG_obj::log;
HXDLIN( 473)					 ::Dynamic Data = ((((HX_("Could not create FlxSlider - '",0f,42,71,c5) + Value) + HX_("' is not a valid field of '",71,fa,35,d8)) + ::Std_obj::string(this->_object)) + HX_("'",27,00,00,00));
            				}
HXLINE( 474)				this->varString = null();
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 477)		return Value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxSlider_obj,set_varString,return )

Float FlxSlider_obj::set_x(Float value){
            	HX_STACKFRAME(&_hx_pos_904b05de766b1fa3_481_set_x)
HXLINE( 482)		this->super::set_x(value);
HXLINE( 483)		if (::hx::IsNotNull( this->_bounds )) {
HXLINE( 483)			 ::flixel::math::FlxRect _this = this->_bounds;
HXDLIN( 483)			_this->x = (this->x + this->offset->x);
HXDLIN( 483)			_this->y = (this->y + this->offset->y);
HXDLIN( 483)			_this->width = ( (Float)(this->_width) );
HXDLIN( 483)			_this->height = ( (Float)(this->_height) );
            		}
HXLINE( 484)		return (this->x = value);
            	}


Float FlxSlider_obj::set_y(Float value){
            	HX_STACKFRAME(&_hx_pos_904b05de766b1fa3_488_set_y)
HXLINE( 489)		this->super::set_y(value);
HXLINE( 490)		if (::hx::IsNotNull( this->_bounds )) {
HXLINE( 490)			 ::flixel::math::FlxRect _this = this->_bounds;
HXDLIN( 490)			_this->x = (this->x + this->offset->x);
HXDLIN( 490)			_this->y = (this->y + this->offset->y);
HXDLIN( 490)			_this->width = ( (Float)(this->_width) );
HXDLIN( 490)			_this->height = ( (Float)(this->_height) );
            		}
HXLINE( 491)		return (this->y = value);
            	}


void FlxSlider_obj::updateBounds(){
            	HX_STACKFRAME(&_hx_pos_904b05de766b1fa3_496_updateBounds)
HXDLIN( 496)		if (::hx::IsNotNull( this->_bounds )) {
HXLINE( 497)			 ::flixel::math::FlxRect _this = this->_bounds;
HXDLIN( 497)			_this->x = (this->x + this->offset->x);
HXDLIN( 497)			_this->y = (this->y + this->offset->y);
HXDLIN( 497)			_this->width = ( (Float)(this->_width) );
HXDLIN( 497)			_this->height = ( (Float)(this->_height) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxSlider_obj,updateBounds,(void))


::hx::ObjectPtr< FlxSlider_obj > FlxSlider_obj::__new( ::Dynamic Object,::String VarString,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_MinValue,::hx::Null< Float >  __o_MaxValue,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< int >  __o_Thickness,::hx::Null< int >  __o_Color,::hx::Null< int >  __o_HandleColor) {
	::hx::ObjectPtr< FlxSlider_obj > __this = new FlxSlider_obj();
	__this->__construct(Object,VarString,__o_X,__o_Y,__o_MinValue,__o_MaxValue,__o_Width,__o_Height,__o_Thickness,__o_Color,__o_HandleColor);
	return __this;
}

::hx::ObjectPtr< FlxSlider_obj > FlxSlider_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic Object,::String VarString,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_MinValue,::hx::Null< Float >  __o_MaxValue,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< int >  __o_Thickness,::hx::Null< int >  __o_Color,::hx::Null< int >  __o_HandleColor) {
	FlxSlider_obj *__this = (FlxSlider_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxSlider_obj), true, "flixel.addons.ui.FlxSlider"));
	*(void **)__this = FlxSlider_obj::_hx_vtable;
	__this->__construct(Object,VarString,__o_X,__o_Y,__o_MinValue,__o_MaxValue,__o_Width,__o_Height,__o_Thickness,__o_Color,__o_HandleColor);
	return __this;
}

FlxSlider_obj::FlxSlider_obj()
{
}

void FlxSlider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSlider);
	HX_MARK_MEMBER_NAME(body,"body");
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(minLabel,"minLabel");
	HX_MARK_MEMBER_NAME(maxLabel,"maxLabel");
	HX_MARK_MEMBER_NAME(nameLabel,"nameLabel");
	HX_MARK_MEMBER_NAME(valueLabel,"valueLabel");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(minValue,"minValue");
	HX_MARK_MEMBER_NAME(maxValue,"maxValue");
	HX_MARK_MEMBER_NAME(decimals,"decimals");
	HX_MARK_MEMBER_NAME(clickSound,"clickSound");
	HX_MARK_MEMBER_NAME(hoverSound,"hoverSound");
	HX_MARK_MEMBER_NAME(hoverAlpha,"hoverAlpha");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(setVariable,"setVariable");
	HX_MARK_MEMBER_NAME(varString,"varString");
	HX_MARK_MEMBER_NAME(_bounds,"_bounds");
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_thickness,"_thickness");
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_handleColor,"_handleColor");
	HX_MARK_MEMBER_NAME(_object,"_object");
	HX_MARK_MEMBER_NAME(_lastPos,"_lastPos");
	HX_MARK_MEMBER_NAME(_justClicked,"_justClicked");
	HX_MARK_MEMBER_NAME(_justHovered,"_justHovered");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxSlider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(body,"body");
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(minLabel,"minLabel");
	HX_VISIT_MEMBER_NAME(maxLabel,"maxLabel");
	HX_VISIT_MEMBER_NAME(nameLabel,"nameLabel");
	HX_VISIT_MEMBER_NAME(valueLabel,"valueLabel");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(minValue,"minValue");
	HX_VISIT_MEMBER_NAME(maxValue,"maxValue");
	HX_VISIT_MEMBER_NAME(decimals,"decimals");
	HX_VISIT_MEMBER_NAME(clickSound,"clickSound");
	HX_VISIT_MEMBER_NAME(hoverSound,"hoverSound");
	HX_VISIT_MEMBER_NAME(hoverAlpha,"hoverAlpha");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(setVariable,"setVariable");
	HX_VISIT_MEMBER_NAME(varString,"varString");
	HX_VISIT_MEMBER_NAME(_bounds,"_bounds");
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_thickness,"_thickness");
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_handleColor,"_handleColor");
	HX_VISIT_MEMBER_NAME(_object,"_object");
	HX_VISIT_MEMBER_NAME(_lastPos,"_lastPos");
	HX_VISIT_MEMBER_NAME(_justClicked,"_justClicked");
	HX_VISIT_MEMBER_NAME(_justHovered,"_justHovered");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxSlider_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { return ::hx::Val( body ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return ::hx::Val( handle ); }
		if (HX_FIELD_EQ(inName,"_width") ) { return ::hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"_color") ) { return ::hx::Val( _color ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_bounds") ) { return ::hx::Val( _bounds ); }
		if (HX_FIELD_EQ(inName,"_height") ) { return ::hx::Val( _height ); }
		if (HX_FIELD_EQ(inName,"_object") ) { return ::hx::Val( _object ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minLabel") ) { return ::hx::Val( minLabel ); }
		if (HX_FIELD_EQ(inName,"maxLabel") ) { return ::hx::Val( maxLabel ); }
		if (HX_FIELD_EQ(inName,"minValue") ) { return ::hx::Val( minValue ); }
		if (HX_FIELD_EQ(inName,"maxValue") ) { return ::hx::Val( maxValue ); }
		if (HX_FIELD_EQ(inName,"decimals") ) { return ::hx::Val( decimals ); }
		if (HX_FIELD_EQ(inName,"callback") ) { return ::hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"_lastPos") ) { return ::hx::Val( _lastPos ); }
		if (HX_FIELD_EQ(inName,"setTexts") ) { return ::hx::Val( setTexts_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nameLabel") ) { return ::hx::Val( nameLabel ); }
		if (HX_FIELD_EQ(inName,"varString") ) { return ::hx::Val( varString ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"valueLabel") ) { return ::hx::Val( valueLabel ); }
		if (HX_FIELD_EQ(inName,"clickSound") ) { return ::hx::Val( clickSound ); }
		if (HX_FIELD_EQ(inName,"hoverSound") ) { return ::hx::Val( hoverSound ); }
		if (HX_FIELD_EQ(inName,"hoverAlpha") ) { return ::hx::Val( hoverAlpha ); }
		if (HX_FIELD_EQ(inName,"_thickness") ) { return ::hx::Val( _thickness ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setVariable") ) { return ::hx::Val( setVariable ); }
		if (HX_FIELD_EQ(inName,"expectedPos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_expectedPos() ); }
		if (HX_FIELD_EQ(inName,"relativePos") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_relativePos() ); }
		if (HX_FIELD_EQ(inName,"updateValue") ) { return ::hx::Val( updateValue_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_handleColor") ) { return ::hx::Val( _handleColor ); }
		if (HX_FIELD_EQ(inName,"_justClicked") ) { return ::hx::Val( _justClicked ); }
		if (HX_FIELD_EQ(inName,"_justHovered") ) { return ::hx::Val( _justHovered ); }
		if (HX_FIELD_EQ(inName,"createSlider") ) { return ::hx::Val( createSlider_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateBounds") ) { return ::hx::Val( updateBounds_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_varString") ) { return ::hx::Val( set_varString_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_expectedPos") ) { return ::hx::Val( get_expectedPos_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_relativePos") ) { return ::hx::Val( get_relativePos_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxSlider_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"body") ) { body=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_bounds") ) { _bounds=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"minLabel") ) { minLabel=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxLabel") ) { maxLabel=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minValue") ) { minValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxValue") ) { maxValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"decimals") ) { decimals=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_lastPos") ) { _lastPos=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nameLabel") ) { nameLabel=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"varString") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_varString(inValue.Cast< ::String >()) );varString=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"valueLabel") ) { valueLabel=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"clickSound") ) { clickSound=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hoverSound") ) { hoverSound=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hoverAlpha") ) { hoverAlpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_thickness") ) { _thickness=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setVariable") ) { setVariable=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_handleColor") ) { _handleColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_justClicked") ) { _justClicked=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_justHovered") ) { _justHovered=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSlider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("body",a2,7a,1b,41));
	outFields->push(HX_("handle",a8,83,fd,b7));
	outFields->push(HX_("minLabel",02,7b,e6,66));
	outFields->push(HX_("maxLabel",b0,60,cc,19));
	outFields->push(HX_("nameLabel",a9,db,63,69));
	outFields->push(HX_("valueLabel",c3,64,4b,17));
	outFields->push(HX_("value",71,7f,b8,31));
	outFields->push(HX_("minValue",7f,ec,ef,28));
	outFields->push(HX_("maxValue",2d,d2,d5,db));
	outFields->push(HX_("decimals",c2,4a,6a,12));
	outFields->push(HX_("clickSound",67,fb,4b,c1));
	outFields->push(HX_("hoverSound",73,cd,ce,02));
	outFields->push(HX_("hoverAlpha",02,e8,98,a3));
	outFields->push(HX_("setVariable",fe,db,6d,99));
	outFields->push(HX_("expectedPos",fc,41,2f,b5));
	outFields->push(HX_("relativePos",28,60,dd,f1));
	outFields->push(HX_("varString",18,23,b7,b1));
	outFields->push(HX_("_bounds",14,98,94,d4));
	outFields->push(HX_("_width",47,fd,49,c6));
	outFields->push(HX_("_height",86,19,c3,70));
	outFields->push(HX_("_thickness",35,6d,09,b6));
	outFields->push(HX_("_color",a4,b8,43,46));
	outFields->push(HX_("_handleColor",9c,ca,af,62));
	outFields->push(HX_("_object",5e,90,b6,83));
	outFields->push(HX_("_lastPos",5f,fe,62,11));
	outFields->push(HX_("_justClicked",dc,5f,f6,18));
	outFields->push(HX_("_justHovered",50,0e,81,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxSlider_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxSlider_obj,body),HX_("body",a2,7a,1b,41)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxSlider_obj,handle),HX_("handle",a8,83,fd,b7)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(FlxSlider_obj,minLabel),HX_("minLabel",02,7b,e6,66)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(FlxSlider_obj,maxLabel),HX_("maxLabel",b0,60,cc,19)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(FlxSlider_obj,nameLabel),HX_("nameLabel",a9,db,63,69)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(FlxSlider_obj,valueLabel),HX_("valueLabel",c3,64,4b,17)},
	{::hx::fsFloat,(int)offsetof(FlxSlider_obj,value),HX_("value",71,7f,b8,31)},
	{::hx::fsFloat,(int)offsetof(FlxSlider_obj,minValue),HX_("minValue",7f,ec,ef,28)},
	{::hx::fsFloat,(int)offsetof(FlxSlider_obj,maxValue),HX_("maxValue",2d,d2,d5,db)},
	{::hx::fsInt,(int)offsetof(FlxSlider_obj,decimals),HX_("decimals",c2,4a,6a,12)},
	{::hx::fsString,(int)offsetof(FlxSlider_obj,clickSound),HX_("clickSound",67,fb,4b,c1)},
	{::hx::fsString,(int)offsetof(FlxSlider_obj,hoverSound),HX_("hoverSound",73,cd,ce,02)},
	{::hx::fsFloat,(int)offsetof(FlxSlider_obj,hoverAlpha),HX_("hoverAlpha",02,e8,98,a3)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxSlider_obj,callback),HX_("callback",c5,99,06,7f)},
	{::hx::fsBool,(int)offsetof(FlxSlider_obj,setVariable),HX_("setVariable",fe,db,6d,99)},
	{::hx::fsString,(int)offsetof(FlxSlider_obj,varString),HX_("varString",18,23,b7,b1)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxSlider_obj,_bounds),HX_("_bounds",14,98,94,d4)},
	{::hx::fsInt,(int)offsetof(FlxSlider_obj,_width),HX_("_width",47,fd,49,c6)},
	{::hx::fsInt,(int)offsetof(FlxSlider_obj,_height),HX_("_height",86,19,c3,70)},
	{::hx::fsInt,(int)offsetof(FlxSlider_obj,_thickness),HX_("_thickness",35,6d,09,b6)},
	{::hx::fsInt,(int)offsetof(FlxSlider_obj,_color),HX_("_color",a4,b8,43,46)},
	{::hx::fsInt,(int)offsetof(FlxSlider_obj,_handleColor),HX_("_handleColor",9c,ca,af,62)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxSlider_obj,_object),HX_("_object",5e,90,b6,83)},
	{::hx::fsFloat,(int)offsetof(FlxSlider_obj,_lastPos),HX_("_lastPos",5f,fe,62,11)},
	{::hx::fsBool,(int)offsetof(FlxSlider_obj,_justClicked),HX_("_justClicked",dc,5f,f6,18)},
	{::hx::fsBool,(int)offsetof(FlxSlider_obj,_justHovered),HX_("_justHovered",50,0e,81,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxSlider_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxSlider_obj_sMemberFields[] = {
	HX_("body",a2,7a,1b,41),
	HX_("handle",a8,83,fd,b7),
	HX_("minLabel",02,7b,e6,66),
	HX_("maxLabel",b0,60,cc,19),
	HX_("nameLabel",a9,db,63,69),
	HX_("valueLabel",c3,64,4b,17),
	HX_("value",71,7f,b8,31),
	HX_("minValue",7f,ec,ef,28),
	HX_("maxValue",2d,d2,d5,db),
	HX_("decimals",c2,4a,6a,12),
	HX_("clickSound",67,fb,4b,c1),
	HX_("hoverSound",73,cd,ce,02),
	HX_("hoverAlpha",02,e8,98,a3),
	HX_("callback",c5,99,06,7f),
	HX_("setVariable",fe,db,6d,99),
	HX_("varString",18,23,b7,b1),
	HX_("_bounds",14,98,94,d4),
	HX_("_width",47,fd,49,c6),
	HX_("_height",86,19,c3,70),
	HX_("_thickness",35,6d,09,b6),
	HX_("_color",a4,b8,43,46),
	HX_("_handleColor",9c,ca,af,62),
	HX_("_object",5e,90,b6,83),
	HX_("_lastPos",5f,fe,62,11),
	HX_("_justClicked",dc,5f,f6,18),
	HX_("_justHovered",50,0e,81,99),
	HX_("createSlider",3d,06,5a,92),
	HX_("update",09,86,05,87),
	HX_("updateValue",a8,e8,50,17),
	HX_("setTexts",24,b4,cd,1b),
	HX_("destroy",fa,2c,86,24),
	HX_("get_expectedPos",93,f9,10,76),
	HX_("get_relativePos",bf,17,bf,b2),
	HX_("set_varString",fb,d8,20,b8),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("updateBounds",5e,2d,e1,65),
	::String(null()) };

::hx::Class FlxSlider_obj::__mClass;

void FlxSlider_obj::__register()
{
	FlxSlider_obj _hx_dummy;
	FlxSlider_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxSlider",c2,8c,47,0b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxSlider_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxSlider_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxSlider_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxSlider_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
