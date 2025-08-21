#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxInputText
#include <flixel/addons/ui/FlxInputText.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextAlign_Impl_
#include <flixel/text/_FlxText/FlxTextAlign_Impl_.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
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
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_system_Clipboard
#include <lime/system/Clipboard.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_KeyboardEvent
#include <openfl/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif
#ifndef INCLUDED_openfl_text_TextFormat
#include <openfl/text/TextFormat.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_75fddae7e64ce41a_32_new,"flixel.addons.ui.FlxInputText","new",0xf37b21c8,"flixel.addons.ui.FlxInputText.new","flixel/addons/ui/FlxInputText.hx",32,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_59_set_customFilterPattern,"flixel.addons.ui.FlxInputText","set_customFilterPattern",0x8ca18812,"flixel.addons.ui.FlxInputText.set_customFilterPattern","flixel/addons/ui/FlxInputText.hx",59,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_81_set_caretColor,"flixel.addons.ui.FlxInputText","set_caretColor",0xe765d535,"flixel.addons.ui.FlxInputText.set_caretColor","flixel/addons/ui/FlxInputText.hx",81,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_90_set_caretWidth,"flixel.addons.ui.FlxInputText","set_caretWidth",0x676c19d8,"flixel.addons.ui.FlxInputText.set_caretWidth","flixel/addons/ui/FlxInputText.hx",90,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_248_destroy,"flixel.addons.ui.FlxInputText","destroy",0x8dd65262,"flixel.addons.ui.FlxInputText.destroy","flixel/addons/ui/FlxInputText.hx",248,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_273_draw,"flixel.addons.ui.FlxInputText","draw",0x11b0159c,"flixel.addons.ui.FlxInputText.draw","flixel/addons/ui/FlxInputText.hx",273,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_294_drawSprite,"flixel.addons.ui.FlxInputText","drawSprite",0x07ac82c1,"flixel.addons.ui.FlxInputText.drawSprite","flixel/addons/ui/FlxInputText.hx",294,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_306_update,"flixel.addons.ui.FlxInputText","update",0x954505a1,"flixel.addons.ui.FlxInputText.update","flixel/addons/ui/FlxInputText.hx",306,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_332_mouseOverlapping,"flixel.addons.ui.FlxInputText","mouseOverlapping",0xa9a60cec,"flixel.addons.ui.FlxInputText.mouseOverlapping","flixel/addons/ui/FlxInputText.hx",332,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_347_onKeyDown,"flixel.addons.ui.FlxInputText","onKeyDown",0xeda471aa,"flixel.addons.ui.FlxInputText.onKeyDown","flixel/addons/ui/FlxInputText.hx",347,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_486_onChange,"flixel.addons.ui.FlxInputText","onChange",0x53f01d87,"flixel.addons.ui.FlxInputText.onChange","flixel/addons/ui/FlxInputText.hx",486,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_501_insertSubstring,"flixel.addons.ui.FlxInputText","insertSubstring",0xe0c1ad40,"flixel.addons.ui.FlxInputText.insertSubstring","flixel/addons/ui/FlxInputText.hx",501,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_519_getCaretIndex,"flixel.addons.ui.FlxInputText","getCaretIndex",0xfe00362d,"flixel.addons.ui.FlxInputText.getCaretIndex","flixel/addons/ui/FlxInputText.hx",519,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_529_getCharBoundaries,"flixel.addons.ui.FlxInputText","getCharBoundaries",0x38cd7cdc,"flixel.addons.ui.FlxInputText.getCharBoundaries","flixel/addons/ui/FlxInputText.hx",529,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_547_set_text,"flixel.addons.ui.FlxInputText","set_text",0x37e27742,"flixel.addons.ui.FlxInputText.set_text","flixel/addons/ui/FlxInputText.hx",547,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_594_getCharIndexAtPoint,"flixel.addons.ui.FlxInputText","getCharIndexAtPoint",0xf4438f7f,"flixel.addons.ui.FlxInputText.getCharIndexAtPoint","flixel/addons/ui/FlxInputText.hx",594,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_645_prepareCharBoundaries,"flixel.addons.ui.FlxInputText","prepareCharBoundaries",0x33edc58d,"flixel.addons.ui.FlxInputText.prepareCharBoundaries","flixel/addons/ui/FlxInputText.hx",645,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_673_onSetTextCheck,"flixel.addons.ui.FlxInputText","onSetTextCheck",0x14902030,"flixel.addons.ui.FlxInputText.onSetTextCheck","flixel/addons/ui/FlxInputText.hx",673,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_717_calcFrame,"flixel.addons.ui.FlxInputText","calcFrame",0x733ee2c0,"flixel.addons.ui.FlxInputText.calcFrame","flixel/addons/ui/FlxInputText.hx",717,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_803_toggleCaret,"flixel.addons.ui.FlxInputText","toggleCaret",0x6f59aab7,"flixel.addons.ui.FlxInputText.toggleCaret","flixel/addons/ui/FlxInputText.hx",803,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_811_filter,"flixel.addons.ui.FlxInputText","filter",0x93749f50,"flixel.addons.ui.FlxInputText.filter","flixel/addons/ui/FlxInputText.hx",811,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_843_set_params,"flixel.addons.ui.FlxInputText","set_params",0xe3d3351b,"flixel.addons.ui.FlxInputText.set_params","flixel/addons/ui/FlxInputText.hx",843,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_855_set_x,"flixel.addons.ui.FlxInputText","set_x",0x02dc16c3,"flixel.addons.ui.FlxInputText.set_x","flixel/addons/ui/FlxInputText.hx",855,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_868_set_y,"flixel.addons.ui.FlxInputText","set_y",0x02dc16c4,"flixel.addons.ui.FlxInputText.set_y","flixel/addons/ui/FlxInputText.hx",868,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_881_set_hasFocus,"flixel.addons.ui.FlxInputText","set_hasFocus",0xf91bc333,"flixel.addons.ui.FlxInputText.set_hasFocus","flixel/addons/ui/FlxInputText.hx",881,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_909_getAlignStr,"flixel.addons.ui.FlxInputText","getAlignStr",0xf6458f0a,"flixel.addons.ui.FlxInputText.getAlignStr","flixel/addons/ui/FlxInputText.hx",909,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_919_set_caretIndex,"flixel.addons.ui.FlxInputText","set_caretIndex",0x5b1dfee4,"flixel.addons.ui.FlxInputText.set_caretIndex","flixel/addons/ui/FlxInputText.hx",919,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_998_set_forceCase,"flixel.addons.ui.FlxInputText","set_forceCase",0x119aa786,"flixel.addons.ui.FlxInputText.set_forceCase","flixel/addons/ui/FlxInputText.hx",998,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1005_set_size,"flixel.addons.ui.FlxInputText","set_size",0x373c4b56,"flixel.addons.ui.FlxInputText.set_size","flixel/addons/ui/FlxInputText.hx",1005,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1012_set_maxLength,"flixel.addons.ui.FlxInputText","set_maxLength",0x992e7ff5,"flixel.addons.ui.FlxInputText.set_maxLength","flixel/addons/ui/FlxInputText.hx",1012,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1022_set_lines,"flixel.addons.ui.FlxInputText","set_lines",0x15ae75ca,"flixel.addons.ui.FlxInputText.set_lines","flixel/addons/ui/FlxInputText.hx",1022,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1044_get_passwordMode,"flixel.addons.ui.FlxInputText","get_passwordMode",0x890c263f,"flixel.addons.ui.FlxInputText.get_passwordMode","flixel/addons/ui/FlxInputText.hx",1044,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1048_set_passwordMode,"flixel.addons.ui.FlxInputText","set_passwordMode",0xdf4e13b3,"flixel.addons.ui.FlxInputText.set_passwordMode","flixel/addons/ui/FlxInputText.hx",1048,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1055_set_filterMode,"flixel.addons.ui.FlxInputText","set_filterMode",0xd267a390,"flixel.addons.ui.FlxInputText.set_filterMode","flixel/addons/ui/FlxInputText.hx",1055,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1062_set_fieldBorderColor,"flixel.addons.ui.FlxInputText","set_fieldBorderColor",0x31131c52,"flixel.addons.ui.FlxInputText.set_fieldBorderColor","flixel/addons/ui/FlxInputText.hx",1062,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1069_set_fieldBorderThickness,"flixel.addons.ui.FlxInputText","set_fieldBorderThickness",0x8f7f3fe3,"flixel.addons.ui.FlxInputText.set_fieldBorderThickness","flixel/addons/ui/FlxInputText.hx",1069,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_1076_set_backgroundColor,"flixel.addons.ui.FlxInputText","set_backgroundColor",0x1e95b220,"flixel.addons.ui.FlxInputText.set_backgroundColor","flixel/addons/ui/FlxInputText.hx",1076,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_34_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",34,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_35_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",35,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_36_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",36,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_37_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",37,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_38_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",38,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_40_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",40,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_41_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",41,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_42_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",42,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_44_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",44,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_45_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",45,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_46_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",46,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_47_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",47,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_48_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",48,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_49_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",49,0x19fbd1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_75fddae7e64ce41a_50_boot,"flixel.addons.ui.FlxInputText","boot",0x105b6dca,"flixel.addons.ui.FlxInputText.boot","flixel/addons/ui/FlxInputText.hx",50,0x19fbd1e7)
namespace flixel{
namespace addons{
namespace ui{

void FlxInputText_obj::__construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Width,::String Text,::hx::Null< int >  __o_size,::hx::Null< int >  __o_TextColor,::hx::Null< int >  __o_BackgroundColor,::hx::Null< bool >  __o_EmbeddedFont){
            		Float X = __o_X.Default(0);
            		Float Y = __o_Y.Default(0);
            		int Width = __o_Width.Default(150);
            		int size = __o_size.Default(8);
            		int TextColor = __o_TextColor.Default(-16777216);
            		int BackgroundColor = __o_BackgroundColor.Default(-1);
            		bool EmbeddedFont = __o_EmbeddedFont.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_75fddae7e64ce41a_32_new)
HXLINE( 185)		this->_scrollBoundIndeces =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("right",dc,0b,64,e9),0)
            			->setFixed(1,HX_("left",07,08,b0,47),0));
HXLINE( 160)		this->backgroundColor = -1;
HXLINE( 155)		this->fieldBorderThickness = 1;
HXLINE( 150)		this->fieldBorderColor = -16777216;
HXLINE( 145)		this->filterMode = 0;
HXLINE( 134)		this->maxLength = 0;
HXLINE( 128)		this->forceCase = 0;
HXLINE( 111)		this->caretIndex = 0;
HXLINE( 106)		this->hasFocus = false;
HXLINE(  87)		this->caretWidth = 1;
HXLINE(  73)		this->background = false;
HXLINE( 208)		super::__construct(X,Y,Width,Text,size,EmbeddedFont);
HXLINE( 209)		this->set_backgroundColor(BackgroundColor);
HXLINE( 211)		if ((BackgroundColor != 0)) {
HXLINE( 213)			this->background = true;
            		}
HXLINE( 216)		this->set_color(TextColor);
HXLINE( 217)		this->set_caretColor(TextColor);
HXLINE( 219)		this->caret =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 220)		 ::flixel::FlxSprite _hx_tmp = this->caret;
HXDLIN( 220)		int _hx_tmp1 = this->caretWidth;
HXDLIN( 220)		_hx_tmp->makeGraphic(_hx_tmp1,::Std_obj::_hx_int(( (Float)((size + 2)) )),null(),null(),null());
HXLINE( 221)		this->_caretTimer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null());
HXLINE( 223)		this->set_caretIndex(0);
HXLINE( 224)		this->set_hasFocus(false);
HXLINE( 225)		if (this->background) {
HXLINE( 227)			this->fieldBorderSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,X,Y,null());
HXLINE( 228)			this->backgroundSprite =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,X,Y,null());
            		}
HXLINE( 231)		this->set_lines(1);
HXLINE( 232)		::openfl::Lib_obj::get_current()->stage->addEventListener(HX_("keyDown",a1,69,47,9c),this->onKeyDown_dyn(),null(),null(),null());
HXLINE( 234)		if (::hx::IsNull( Text )) {
HXLINE( 236)			Text = HX_("",00,00,00,00);
            		}
HXLINE( 239)		this->set_text(Text);
HXLINE( 241)		this->calcFrame(null());
            	}

Dynamic FlxInputText_obj::__CreateEmpty() { return new FlxInputText_obj; }

void *FlxInputText_obj::_hx_vtable = 0;

Dynamic FlxInputText_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxInputText_obj > _hx_result = new FlxInputText_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool FlxInputText_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x752f90b6) {
		if (inClassId<=(int)0x2e702350) {
			if (inClassId<=(int)0x2c01639b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
			} else {
				return inClassId==(int)0x2e702350;
			}
		} else {
			return inClassId==(int)0x752f90b6;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

 ::EReg FlxInputText_obj::set_customFilterPattern( ::EReg cfp){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_59_set_customFilterPattern)
HXLINE(  60)		this->customFilterPattern = cfp;
HXLINE(  61)		this->set_filterMode(4);
HXLINE(  62)		return this->customFilterPattern;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_customFilterPattern,return )

int FlxInputText_obj::set_caretColor(int i){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_81_set_caretColor)
HXLINE(  82)		this->caretColor = i;
HXLINE(  83)		this->dirty = true;
HXLINE(  84)		return this->caretColor;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_caretColor,return )

int FlxInputText_obj::set_caretWidth(int i){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_90_set_caretWidth)
HXLINE(  91)		this->caretWidth = i;
HXLINE(  92)		this->dirty = true;
HXLINE(  93)		return this->caretWidth;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_caretWidth,return )

void FlxInputText_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_248_destroy)
HXLINE( 249)		::openfl::Lib_obj::get_current()->stage->removeEventListener(HX_("keyDown",a1,69,47,9c),this->onKeyDown_dyn(),null());
HXLINE( 251)		this->backgroundSprite = ( ( ::flixel::FlxSprite)(::flixel::util::FlxDestroyUtil_obj::destroy(this->backgroundSprite)) );
HXLINE( 252)		this->fieldBorderSprite = ( ( ::flixel::FlxSprite)(::flixel::util::FlxDestroyUtil_obj::destroy(this->fieldBorderSprite)) );
HXLINE( 253)		this->callback = null();
HXLINE( 256)		if (::hx::IsNotNull( this->_charBoundaries )) {
HXLINE( 258)			while((this->_charBoundaries->length > 0)){
HXLINE( 260)				this->_charBoundaries->pop().StaticCast<  ::flixel::math::FlxRect >();
            			}
HXLINE( 262)			this->_charBoundaries = null();
            		}
HXLINE( 266)		this->super::destroy();
            	}


void FlxInputText_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_273_draw)
HXLINE( 274)		this->drawSprite(this->fieldBorderSprite);
HXLINE( 275)		this->drawSprite(this->backgroundSprite);
HXLINE( 277)		this->super::draw();
HXLINE( 280)		bool _hx_tmp;
HXDLIN( 280)		if ((this->caretColor == this->caret->color)) {
HXLINE( 280)			Float _hx_tmp1 = this->caret->get_height();
HXDLIN( 280)			_hx_tmp = (_hx_tmp1 != (::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) )) + 2));
            		}
            		else {
HXLINE( 280)			_hx_tmp = true;
            		}
HXDLIN( 280)		if (_hx_tmp) {
HXLINE( 282)			this->caret->set_color(this->caretColor);
            		}
HXLINE( 285)		this->drawSprite(this->caret);
            	}


void FlxInputText_obj::drawSprite( ::flixel::FlxSprite Sprite){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_294_drawSprite)
HXDLIN( 294)		bool _hx_tmp;
HXDLIN( 294)		if (::hx::IsNotNull( Sprite )) {
HXDLIN( 294)			_hx_tmp = Sprite->visible;
            		}
            		else {
HXDLIN( 294)			_hx_tmp = false;
            		}
HXDLIN( 294)		if (_hx_tmp) {
HXLINE( 296)			Sprite->scrollFactor = this->scrollFactor;
HXLINE( 297)			Sprite->set_cameras(this->get_cameras());
HXLINE( 298)			Sprite->draw();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,drawSprite,(void))

void FlxInputText_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_306_update)
HXLINE( 307)		this->super::update(elapsed);
HXLINE( 311)		if ((::flixel::FlxG_obj::mouse->_leftButton->current == 2)) {
HXLINE( 313)			bool hadFocus = this->hasFocus;
HXLINE( 314)			if (this->mouseOverlapping()) {
HXLINE( 316)				this->set_caretIndex(this->getCaretIndex());
HXLINE( 317)				this->set_hasFocus(true);
HXLINE( 318)				bool _hx_tmp;
HXDLIN( 318)				if (!(hadFocus)) {
HXLINE( 318)					_hx_tmp = ::hx::IsNotNull( this->focusGained );
            				}
            				else {
HXLINE( 318)					_hx_tmp = false;
            				}
HXDLIN( 318)				if (_hx_tmp) {
HXLINE( 319)					this->focusGained();
            				}
            			}
            			else {
HXLINE( 323)				this->set_hasFocus(false);
HXLINE( 324)				bool _hx_tmp;
HXDLIN( 324)				if (hadFocus) {
HXLINE( 324)					_hx_tmp = ::hx::IsNotNull( this->focusLost );
            				}
            				else {
HXLINE( 324)					_hx_tmp = false;
            				}
HXDLIN( 324)				if (_hx_tmp) {
HXLINE( 325)					this->focusLost();
            				}
            			}
            		}
            	}


bool FlxInputText_obj::mouseOverlapping(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_332_mouseOverlapping)
HXLINE( 333)		 ::flixel::input::mouse::FlxMouse mousePoint = ::flixel::FlxG_obj::mouse;
HXDLIN( 333)		 ::flixel::math::FlxPoint mousePoint1 = mousePoint->getScreenPosition(this->get_camera(),null());
HXLINE( 334)		 ::flixel::math::FlxPoint objPoint = this->getScreenPosition(null(),this->get_camera());
HXLINE( 335)		bool _hx_tmp;
HXDLIN( 335)		bool _hx_tmp1;
HXDLIN( 335)		bool _hx_tmp2;
HXDLIN( 335)		if ((mousePoint1->x >= objPoint->x)) {
HXLINE( 335)			_hx_tmp2 = (mousePoint1->y >= objPoint->y);
            		}
            		else {
HXLINE( 335)			_hx_tmp2 = false;
            		}
HXDLIN( 335)		if (_hx_tmp2) {
HXLINE( 336)			Float mousePoint = mousePoint1->x;
HXDLIN( 336)			Float objPoint1 = objPoint->x;
HXLINE( 335)			_hx_tmp1 = (mousePoint < (objPoint1 + this->get_width()));
            		}
            		else {
HXLINE( 335)			_hx_tmp1 = false;
            		}
HXDLIN( 335)		if (_hx_tmp1) {
HXLINE( 336)			Float mousePoint = mousePoint1->y;
HXDLIN( 336)			Float objPoint1 = objPoint->y;
HXLINE( 335)			_hx_tmp = (mousePoint < (objPoint1 + this->get_height()));
            		}
            		else {
HXLINE( 335)			_hx_tmp = false;
            		}
HXDLIN( 335)		if (_hx_tmp) {
HXLINE( 338)			return true;
            		}
HXLINE( 340)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputText_obj,mouseOverlapping,return )

void FlxInputText_obj::onKeyDown( ::openfl::events::KeyboardEvent e){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_347_onKeyDown)
HXLINE( 348)		int key = e->keyCode;
HXLINE( 350)		if (this->hasFocus) {
HXLINE( 359)			bool _hx_tmp;
HXDLIN( 359)			if ((key == 67)) {
HXLINE( 359)				_hx_tmp = e->ctrlKey;
            			}
            			else {
HXLINE( 359)				_hx_tmp = false;
            			}
HXDLIN( 359)			if (_hx_tmp) {
HXLINE( 361)				::lime::_hx_system::Clipboard_obj::set_text(this->text);
HXLINE( 363)				this->onChange(HX_("copy",b5,bb,c4,41));
HXLINE( 366)				return;
            			}
HXLINE( 373)			bool _hx_tmp1;
HXDLIN( 373)			if ((key == 86)) {
HXLINE( 373)				_hx_tmp1 = e->ctrlKey;
            			}
            			else {
HXLINE( 373)				_hx_tmp1 = false;
            			}
HXDLIN( 373)			if (_hx_tmp1) {
HXLINE( 375)				::String newText = this->filter(::lime::_hx_system::Clipboard_obj::get_text());
HXLINE( 377)				bool _hx_tmp;
HXDLIN( 377)				if ((newText.length > 0)) {
HXLINE( 377)					if ((this->maxLength != 0)) {
HXLINE( 377)						_hx_tmp = ((this->text.length + newText.length) < this->maxLength);
            					}
            					else {
HXLINE( 377)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 377)					_hx_tmp = false;
            				}
HXDLIN( 377)				if (_hx_tmp) {
HXLINE( 378)					this->set_text(this->insertSubstring(this->text,newText,this->caretIndex));
HXLINE( 379)					this->set_caretIndex((this->caretIndex + newText.length));
HXLINE( 380)					this->onChange(HX_("input",0a,c4,1d,be));
HXLINE( 381)					this->onChange(HX_("paste",53,53,56,bd));
            				}
HXLINE( 385)				return;
            			}
HXLINE( 393)			bool _hx_tmp2;
HXDLIN( 393)			if ((key == 88)) {
HXLINE( 393)				_hx_tmp2 = e->ctrlKey;
            			}
            			else {
HXLINE( 393)				_hx_tmp2 = false;
            			}
HXDLIN( 393)			if (_hx_tmp2) {
HXLINE( 395)				::lime::_hx_system::Clipboard_obj::set_text(this->text);
HXLINE( 396)				this->set_text(HX_("",00,00,00,00));
HXLINE( 397)				this->set_caretIndex(0);
HXLINE( 399)				this->onChange(HX_("input",0a,c4,1d,be));
HXLINE( 400)				this->onChange(HX_("cut",82,85,4b,00));
HXLINE( 403)				return;
            			}
HXLINE( 407)			bool _hx_tmp3;
HXDLIN( 407)			bool _hx_tmp4;
HXDLIN( 407)			bool _hx_tmp5;
HXDLIN( 407)			if ((key != 16)) {
HXLINE( 407)				_hx_tmp5 = (key == 17);
            			}
            			else {
HXLINE( 407)				_hx_tmp5 = true;
            			}
HXDLIN( 407)			if (!(_hx_tmp5)) {
HXLINE( 407)				_hx_tmp4 = (key == 220);
            			}
            			else {
HXLINE( 407)				_hx_tmp4 = true;
            			}
HXDLIN( 407)			if (!(_hx_tmp4)) {
HXLINE( 407)				_hx_tmp3 = (key == 27);
            			}
            			else {
HXLINE( 407)				_hx_tmp3 = true;
            			}
HXDLIN( 407)			if (_hx_tmp3) {
HXLINE( 409)				return;
            			}
            			else {
HXLINE( 412)				if ((key == 37)) {
HXLINE( 414)					if ((this->caretIndex > 0)) {
HXLINE( 416)						this->set_caretIndex((this->caretIndex - 1));
HXLINE( 417)						this->set_text(this->text);
            					}
            				}
            				else {
HXLINE( 421)					if ((key == 39)) {
HXLINE( 423)						if ((this->caretIndex < this->text.length)) {
HXLINE( 425)							this->set_caretIndex((this->caretIndex + 1));
HXLINE( 426)							this->set_text(this->text);
            						}
            					}
            					else {
HXLINE( 430)						if ((key == 35)) {
HXLINE( 432)							this->set_caretIndex(this->text.length);
HXLINE( 433)							this->set_text(this->text);
            						}
            						else {
HXLINE( 436)							if ((key == 36)) {
HXLINE( 438)								this->set_caretIndex(0);
HXLINE( 439)								this->set_text(this->text);
            							}
            							else {
HXLINE( 442)								if ((key == 8)) {
HXLINE( 444)									if ((this->caretIndex > 0)) {
HXLINE( 446)										this->set_caretIndex((this->caretIndex - 1));
HXLINE( 447)										::String _hx_tmp = this->text.substring(0,this->caretIndex);
HXDLIN( 447)										this->set_text((_hx_tmp + this->text.substring((this->caretIndex + 1),null())));
HXLINE( 448)										this->onChange(HX_("backspace",3f,85,ea,ca));
            									}
            								}
            								else {
HXLINE( 452)									if ((key == 46)) {
HXLINE( 454)										bool _hx_tmp;
HXDLIN( 454)										if ((this->text.length > 0)) {
HXLINE( 454)											_hx_tmp = (this->caretIndex < this->text.length);
            										}
            										else {
HXLINE( 454)											_hx_tmp = false;
            										}
HXDLIN( 454)										if (_hx_tmp) {
HXLINE( 456)											::String _hx_tmp = this->text.substring(0,this->caretIndex);
HXDLIN( 456)											this->set_text((_hx_tmp + this->text.substring((this->caretIndex + 1),null())));
HXLINE( 457)											this->onChange(HX_("delete",2b,c0,d8,6a));
            										}
            									}
            									else {
HXLINE( 461)										if ((key == 13)) {
HXLINE( 463)											this->onChange(HX_("enter",18,6d,86,70));
            										}
            										else {
HXLINE( 468)											if ((e->charCode == 0)) {
HXLINE( 470)												return;
            											}
HXLINE( 472)											::String newText = this->filter(::String::fromCharCode(e->charCode));
HXLINE( 474)											bool _hx_tmp;
HXDLIN( 474)											if ((newText.length > 0)) {
HXLINE( 474)												if ((this->maxLength != 0)) {
HXLINE( 474)													_hx_tmp = ((this->text.length + newText.length) < this->maxLength);
            												}
            												else {
HXLINE( 474)													_hx_tmp = true;
            												}
            											}
            											else {
HXLINE( 474)												_hx_tmp = false;
            											}
HXDLIN( 474)											if (_hx_tmp) {
HXLINE( 476)												this->set_text(this->insertSubstring(this->text,newText,this->caretIndex));
HXLINE( 477)												this->set_caretIndex((this->caretIndex + 1));
HXLINE( 478)												this->onChange(HX_("input",0a,c4,1d,be));
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,onKeyDown,(void))

void FlxInputText_obj::onChange(::String action){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_486_onChange)
HXDLIN( 486)		if (::hx::IsNotNull( this->callback )) {
HXLINE( 488)			this->callback(this->text,action);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,onChange,(void))

::String FlxInputText_obj::insertSubstring(::String Original,::String Insert,int Index){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_501_insertSubstring)
HXLINE( 502)		if ((Index != Original.length)) {
HXLINE( 504)			::String Original1 = (Original.substring(0,Index) + Insert);
HXDLIN( 504)			Original = (Original1 + Original.substring(Index,null()));
            		}
            		else {
HXLINE( 508)			Original = (Original + Insert);
            		}
HXLINE( 510)		return Original;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxInputText_obj,insertSubstring,return )

int FlxInputText_obj::getCaretIndex(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_519_getCaretIndex)
HXLINE( 521)		Float X = (( (Float)(::flixel::FlxG_obj::mouse->x) ) - this->x);
HXDLIN( 521)		Float Y = (( (Float)(::flixel::FlxG_obj::mouse->y) ) - this->y);
HXDLIN( 521)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);
HXDLIN( 521)		point->_inPool = false;
HXDLIN( 521)		 ::flixel::math::FlxPoint hit = point;
HXLINE( 522)		return this->getCharIndexAtPoint(hit->x,hit->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputText_obj,getCaretIndex,return )

 ::openfl::geom::Rectangle FlxInputText_obj::getCharBoundaries(int charIndex){
            	HX_GC_STACKFRAME(&_hx_pos_75fddae7e64ce41a_529_getCharBoundaries)
HXLINE( 530)		bool _hx_tmp;
HXDLIN( 530)		bool _hx_tmp1;
HXDLIN( 530)		if (::hx::IsNotNull( this->_charBoundaries )) {
HXLINE( 530)			_hx_tmp1 = (charIndex >= 0);
            		}
            		else {
HXLINE( 530)			_hx_tmp1 = false;
            		}
HXDLIN( 530)		if (_hx_tmp1) {
HXLINE( 530)			_hx_tmp = (this->_charBoundaries->length > 0);
            		}
            		else {
HXLINE( 530)			_hx_tmp = false;
            		}
HXDLIN( 530)		if (_hx_tmp) {
HXLINE( 532)			 ::openfl::geom::Rectangle r =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE( 533)			if ((charIndex >= this->_charBoundaries->length)) {
HXLINE( 535)				 ::flixel::math::FlxRect _this = this->_charBoundaries->__get((this->_charBoundaries->length - 1)).StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 535)				 ::openfl::geom::Rectangle FlashRect = r;
HXDLIN( 535)				if (::hx::IsNull( FlashRect )) {
HXLINE( 535)					FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            				}
HXDLIN( 535)				FlashRect->x = _this->x;
HXDLIN( 535)				FlashRect->y = _this->y;
HXDLIN( 535)				FlashRect->width = _this->width;
HXDLIN( 535)				FlashRect->height = _this->height;
            			}
            			else {
HXLINE( 539)				 ::flixel::math::FlxRect _this = this->_charBoundaries->__get(charIndex).StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 539)				 ::openfl::geom::Rectangle FlashRect = r;
HXDLIN( 539)				if (::hx::IsNull( FlashRect )) {
HXLINE( 539)					FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            				}
HXDLIN( 539)				FlashRect->x = _this->x;
HXDLIN( 539)				FlashRect->y = _this->y;
HXDLIN( 539)				FlashRect->width = _this->width;
HXDLIN( 539)				FlashRect->height = _this->height;
            			}
HXLINE( 541)			return r;
            		}
HXLINE( 543)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,getCharBoundaries,return )

::String FlxInputText_obj::set_text(::String Text){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_547_set_text)
HXLINE( 549)		if (::hx::IsNotNull( this->textField )) {
HXLINE( 551)			this->lastScroll = this->textField->get_scrollH();
            		}
HXLINE( 554)		::String return_text = this->super::set_text(Text);
HXLINE( 556)		if (::hx::IsNull( this->textField )) {
HXLINE( 558)			return return_text;
            		}
HXLINE( 561)		int numChars = Text.length;
HXLINE( 562)		this->prepareCharBoundaries(numChars);
HXLINE( 563)		this->textField->set_text(HX_("",00,00,00,00));
HXLINE( 564)		Float textH = ( (Float)(0) );
HXLINE( 565)		Float textW = ( (Float)(0) );
HXLINE( 566)		Float lastW = ( (Float)(0) );
HXLINE( 571)		Float magicX = ( (Float)(2) );
HXLINE( 572)		Float magicY = ( (Float)(2) );
HXLINE( 574)		{
HXLINE( 574)			int _g = 0;
HXDLIN( 574)			int _g1 = numChars;
HXDLIN( 574)			while((_g < _g1)){
HXLINE( 574)				_g = (_g + 1);
HXDLIN( 574)				int i = (_g - 1);
HXLINE( 576)				 ::openfl::text::TextField _hx_tmp = this->textField;
HXDLIN( 576)				_hx_tmp->appendText(Text.substr(i,1));
HXLINE( 577)				textW = this->textField->get_textWidth();
HXLINE( 578)				if ((i == 0)) {
HXLINE( 580)					textH = this->textField->get_textHeight();
            				}
HXLINE( 582)				this->_charBoundaries->__get(i).StaticCast<  ::flixel::math::FlxRect >()->x = (magicX + lastW);
HXLINE( 583)				this->_charBoundaries->__get(i).StaticCast<  ::flixel::math::FlxRect >()->y = magicY;
HXLINE( 584)				this->_charBoundaries->__get(i).StaticCast<  ::flixel::math::FlxRect >()->width = (textW - lastW);
HXLINE( 585)				this->_charBoundaries->__get(i).StaticCast<  ::flixel::math::FlxRect >()->height = textH;
HXLINE( 586)				lastW = textW;
            			}
            		}
HXLINE( 588)		this->textField->set_text(Text);
HXLINE( 589)		this->onSetTextCheck();
HXLINE( 590)		return return_text;
            	}


int FlxInputText_obj::getCharIndexAtPoint(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_594_getCharIndexAtPoint)
HXLINE( 595)		int i = 0;
HXLINE( 597)		X = (X + (this->textField->get_scrollH() + 2));
HXLINE( 601)		bool _hx_tmp;
HXDLIN( 601)		if (::hx::IsNotNull( this->_charBoundaries )) {
HXLINE( 601)			_hx_tmp = (this->_charBoundaries->length > 0);
            		}
            		else {
HXLINE( 601)			_hx_tmp = false;
            		}
HXDLIN( 601)		if (_hx_tmp) {
HXLINE( 603)			Float _hx_tmp = this->textField->get_textWidth();
HXDLIN( 603)			if ((_hx_tmp <= this->textField->get_width())) {
HXLINE( 605)				::String _hx_switch_0 = this->getAlignStr();
            				if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 611)					Float X1 = (X - (this->textField->get_width() / ( (Float)(2) )));
HXDLIN( 611)					X = (X1 + (this->textField->get_textWidth() / ( (Float)(2) )));
HXDLIN( 611)					goto _hx_goto_17;
            				}
            				if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 608)					Float X1 = (X - this->textField->get_width());
HXDLIN( 608)					X = (X1 + this->textField->get_textWidth());
HXDLIN( 608)					goto _hx_goto_17;
            				}
            				/* default */{
            				}
            				_hx_goto_17:;
            			}
            		}
HXLINE( 619)		if (::hx::IsNotNull( this->_charBoundaries )) {
HXLINE( 621)			int _g = 0;
HXDLIN( 621)			::Array< ::Dynamic> _g1 = this->_charBoundaries;
HXDLIN( 621)			while((_g < _g1->length)){
HXLINE( 621)				 ::flixel::math::FlxRect r = _g1->__get(_g).StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 621)				_g = (_g + 1);
HXLINE( 623)				bool _hx_tmp;
HXDLIN( 623)				if ((X >= r->x)) {
HXLINE( 623)					_hx_tmp = (X <= (r->x + r->width));
            				}
            				else {
HXLINE( 623)					_hx_tmp = false;
            				}
HXDLIN( 623)				if (_hx_tmp) {
HXLINE( 625)					return i;
            				}
HXLINE( 627)				i = (i + 1);
            			}
            		}
HXLINE( 632)		bool _hx_tmp1;
HXDLIN( 632)		if (::hx::IsNotNull( this->_charBoundaries )) {
HXLINE( 632)			_hx_tmp1 = (this->_charBoundaries->length > 0);
            		}
            		else {
HXLINE( 632)			_hx_tmp1 = false;
            		}
HXDLIN( 632)		if (_hx_tmp1) {
HXLINE( 634)			if ((X > this->textField->get_textWidth())) {
HXLINE( 636)				return this->_charBoundaries->length;
            			}
            		}
HXLINE( 641)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxInputText_obj,getCharIndexAtPoint,return )

void FlxInputText_obj::prepareCharBoundaries(int numChars){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_645_prepareCharBoundaries)
HXLINE( 646)		if (::hx::IsNull( this->_charBoundaries )) {
HXLINE( 648)			this->_charBoundaries = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 651)		if ((this->_charBoundaries->length > numChars)) {
HXLINE( 653)			int diff = (this->_charBoundaries->length - numChars);
HXLINE( 654)			{
HXLINE( 654)				int _g = 0;
HXDLIN( 654)				int _g1 = diff;
HXDLIN( 654)				while((_g < _g1)){
HXLINE( 654)					_g = (_g + 1);
HXDLIN( 654)					int i = (_g - 1);
HXLINE( 656)					this->_charBoundaries->pop().StaticCast<  ::flixel::math::FlxRect >();
            				}
            			}
            		}
HXLINE( 660)		{
HXLINE( 660)			int _g = 0;
HXDLIN( 660)			int _g1 = numChars;
HXDLIN( 660)			while((_g < _g1)){
HXLINE( 660)				_g = (_g + 1);
HXDLIN( 660)				int i = (_g - 1);
HXLINE( 662)				if (((this->_charBoundaries->length - 1) < i)) {
HXLINE( 664)					::Array< ::Dynamic> _hx_tmp = this->_charBoundaries;
HXDLIN( 664)					 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 664)					_this->x = ( (Float)(0) );
HXDLIN( 664)					_this->y = ( (Float)(0) );
HXDLIN( 664)					_this->width = ( (Float)(0) );
HXDLIN( 664)					_this->height = ( (Float)(0) );
HXDLIN( 664)					 ::flixel::math::FlxRect rect = _this;
HXDLIN( 664)					rect->_inPool = false;
HXDLIN( 664)					_hx_tmp->push(rect);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,prepareCharBoundaries,(void))

void FlxInputText_obj::onSetTextCheck(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_673_onSetTextCheck)
HXLINE( 675)		 ::openfl::geom::Rectangle boundary = null();
HXLINE( 676)		if ((this->caretIndex == -1)) {
HXLINE( 678)			boundary = this->getCharBoundaries((this->text.length - 1));
            		}
            		else {
HXLINE( 682)			boundary = this->getCharBoundaries(this->caretIndex);
            		}
HXLINE( 685)		if (::hx::IsNotNull( boundary )) {
HXLINE( 689)			int diffW = 0;
HXLINE( 690)			Float _hx_tmp = boundary->get_right();
HXDLIN( 690)			int _hx_tmp1 = this->lastScroll;
HXDLIN( 690)			if ((_hx_tmp > ((_hx_tmp1 + this->textField->get_width()) - ( (Float)(2) )))) {
HXLINE( 692)				Float diffW1 = (this->textField->get_width() - ( (Float)(2) ));
HXDLIN( 692)				diffW = -(::Std_obj::_hx_int((diffW1 - boundary->get_right())));
            			}
            			else {
HXLINE( 694)				Float _hx_tmp = boundary->get_left();
HXDLIN( 694)				if ((_hx_tmp < this->lastScroll)) {
HXLINE( 696)					diffW = (::Std_obj::_hx_int(boundary->get_left()) - 2);
            				}
            				else {
HXLINE( 700)					diffW = this->lastScroll;
            				}
            			}
HXLINE( 704)			this->textField->set_scrollH(diffW);
HXLINE( 706)			this->calcFrame(null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputText_obj,onSetTextCheck,(void))

void FlxInputText_obj::calcFrame(::hx::Null< bool >  __o_RunOnCpp){
            		bool RunOnCpp = __o_RunOnCpp.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_75fddae7e64ce41a_717_calcFrame)
HXLINE( 718)		this->super::calcFrame(RunOnCpp);
HXLINE( 720)		if (::hx::IsNotNull( this->fieldBorderSprite )) {
HXLINE( 722)			if ((this->fieldBorderThickness > 0)) {
HXLINE( 724)				 ::flixel::FlxSprite _hx_tmp = this->fieldBorderSprite;
HXDLIN( 724)				Float _hx_tmp1 = this->get_width();
HXDLIN( 724)				int _hx_tmp2 = ::Std_obj::_hx_int((_hx_tmp1 + (this->fieldBorderThickness * 2)));
HXDLIN( 724)				Float _hx_tmp3 = this->get_height();
HXDLIN( 724)				int _hx_tmp4 = ::Std_obj::_hx_int((_hx_tmp3 + (this->fieldBorderThickness * 2)));
HXDLIN( 724)				_hx_tmp->makeGraphic(_hx_tmp2,_hx_tmp4,this->fieldBorderColor,null(),null());
HXLINE( 725)				this->fieldBorderSprite->set_x((this->x - ( (Float)(this->fieldBorderThickness) )));
HXLINE( 726)				this->fieldBorderSprite->set_y((this->y - ( (Float)(this->fieldBorderThickness) )));
            			}
            			else {
HXLINE( 728)				if ((this->fieldBorderThickness == 0)) {
HXLINE( 730)					this->fieldBorderSprite->set_visible(false);
            				}
            			}
            		}
HXLINE( 734)		if (::hx::IsNotNull( this->backgroundSprite )) {
HXLINE( 736)			if (this->background) {
HXLINE( 738)				 ::flixel::FlxSprite _hx_tmp = this->backgroundSprite;
HXDLIN( 738)				int _hx_tmp1 = ::Std_obj::_hx_int(this->get_width());
HXDLIN( 738)				int _hx_tmp2 = ::Std_obj::_hx_int(this->get_height());
HXDLIN( 738)				_hx_tmp->makeGraphic(_hx_tmp1,_hx_tmp2,this->backgroundColor,null(),null());
HXLINE( 739)				this->backgroundSprite->set_x(this->x);
HXLINE( 740)				this->backgroundSprite->set_y(this->y);
            			}
            			else {
HXLINE( 744)				this->backgroundSprite->set_visible(false);
            			}
            		}
HXLINE( 748)		if (::hx::IsNotNull( this->caret )) {
HXLINE( 753)			int cw = this->caretWidth;
HXLINE( 754)			int ch = ::Std_obj::_hx_int(( (Float)((::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) )) + 2)) ));
HXLINE( 757)			int borderC = (-16777216 | (this->borderColor & 16777215));
HXLINE( 758)			int caretC = (-16777216 | (this->caretColor & 16777215));
HXLINE( 761)			::String caretKey = ((((((((HX_("caret",83,f9,1f,41) + cw) + HX_("x",78,00,00,00)) + ch) + HX_("c:",77,56,00,00)) + caretC) + HX_("b:",98,55,00,00)) + ::Std_obj::string(this->borderStyle)) + HX_(",",2c,00,00,00));
HXDLIN( 761)			::String caretKey1 = (((caretKey + this->borderSize) + HX_(",",2c,00,00,00)) + borderC);
HXLINE( 762)			switch((int)(this->borderStyle->_hx_getIndex())){
            				case (int)0: {
HXLINE( 766)					this->caret->makeGraphic(cw,ch,caretC,false,caretKey1);
HXLINE( 767)					 ::flixel::math::FlxPoint _hx_tmp = this->caret->offset;
HXDLIN( 767)					_hx_tmp->set_x(this->caret->offset->set_y(( (Float)(0) )));
            				}
            				break;
            				case (int)1: {
HXLINE( 771)					cw = (cw + ::Std_obj::_hx_int(this->borderSize));
HXLINE( 772)					ch = (ch + ::Std_obj::_hx_int(this->borderSize));
HXLINE( 773)					this->caret->makeGraphic(cw,ch,0,false,caretKey1);
HXLINE( 774)					Float r = this->borderSize;
HXDLIN( 774)					Float r1 = this->borderSize;
HXDLIN( 774)					int r2 = this->caretWidth;
HXDLIN( 774)					 ::openfl::geom::Rectangle r3 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,r,r1,r2,::Std_obj::_hx_int(( (Float)((::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) )) + 2)) )));
HXLINE( 775)					this->caret->get_pixels()->fillRect(r3,borderC);
HXLINE( 776)					r3->x = (r3->y = ( (Float)(0) ));
HXLINE( 777)					this->caret->get_pixels()->fillRect(r3,caretC);
HXLINE( 778)					 ::flixel::math::FlxPoint _hx_tmp = this->caret->offset;
HXDLIN( 778)					_hx_tmp->set_x(this->caret->offset->set_y(( (Float)(0) )));
            				}
            				break;
            				case (int)2: case (int)3: {
HXLINE( 782)					cw = (cw + ::Std_obj::_hx_int((this->borderSize * ( (Float)(2) ))));
HXLINE( 783)					ch = (ch + ::Std_obj::_hx_int((this->borderSize * ( (Float)(2) ))));
HXLINE( 784)					this->caret->makeGraphic(cw,ch,borderC,false,caretKey1);
HXLINE( 785)					Float r = this->borderSize;
HXDLIN( 785)					Float r1 = this->borderSize;
HXDLIN( 785)					int r2 = this->caretWidth;
HXDLIN( 785)					 ::openfl::geom::Rectangle r3 =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,r,r1,r2,::Std_obj::_hx_int(( (Float)((::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) )) + 2)) )));
HXLINE( 786)					this->caret->get_pixels()->fillRect(r3,caretC);
HXLINE( 788)					 ::flixel::math::FlxPoint _hx_tmp = this->caret->offset;
HXDLIN( 788)					_hx_tmp->set_x(this->caret->offset->set_y(this->borderSize));
            				}
            				break;
            			}
HXLINE( 791)			this->caret->set_width(( (Float)(cw) ));
HXLINE( 792)			this->caret->set_height(( (Float)(ch) ));
HXLINE( 794)			this->set_caretIndex(this->caretIndex);
            		}
            	}


void FlxInputText_obj::toggleCaret( ::flixel::util::FlxTimer timer){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_803_toggleCaret)
HXDLIN( 803)		this->caret->set_visible(!(this->caret->visible));
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,toggleCaret,(void))

::String FlxInputText_obj::filter(::String text){
            	HX_GC_STACKFRAME(&_hx_pos_75fddae7e64ce41a_811_filter)
HXLINE( 812)		if ((this->forceCase == 1)) {
HXLINE( 814)			text = text.toUpperCase();
            		}
            		else {
HXLINE( 816)			if ((this->forceCase == 2)) {
HXLINE( 818)				text = text.toLowerCase();
            			}
            		}
HXLINE( 821)		if ((this->filterMode != 0)) {
HXLINE( 823)			 ::EReg pattern;
HXLINE( 824)			switch((int)(this->filterMode)){
            				case (int)1: {
HXLINE( 827)					pattern =  ::EReg_obj::__alloc( HX_CTX ,HX_("[^a-zA-Z]*",50,38,19,1d),HX_("g",67,00,00,00));
            				}
            				break;
            				case (int)2: {
HXLINE( 829)					pattern =  ::EReg_obj::__alloc( HX_CTX ,HX_("[^0-9]*",46,25,d3,1e),HX_("g",67,00,00,00));
            				}
            				break;
            				case (int)3: {
HXLINE( 831)					pattern =  ::EReg_obj::__alloc( HX_CTX ,HX_("[^a-zA-Z0-9]*",86,f4,79,aa),HX_("g",67,00,00,00));
            				}
            				break;
            				case (int)4: {
HXLINE( 833)					pattern = this->customFilterPattern;
            				}
            				break;
            				default:{
HXLINE( 835)					HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,((HX_("FlxInputText: Unknown filterMode (",04,c7,17,56) + this->filterMode) + HX_(")",29,00,00,00)),null()));
            				}
            			}
HXLINE( 837)			text = pattern->replace(text,HX_("",00,00,00,00));
            		}
HXLINE( 839)		return text;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,filter,return )

::cpp::VirtualArray FlxInputText_obj::set_params(::cpp::VirtualArray p){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_843_set_params)
HXLINE( 844)		this->params = p;
HXLINE( 845)		if (::hx::IsNull( this->params )) {
HXLINE( 847)			this->params = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE( 849)		 ::Dynamic namedValue =  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("value",71,7f,b8,31),this->text)
            			->setFixed(1,HX_("name",4b,72,ff,48),HX_("value",71,7f,b8,31)));
HXLINE( 850)		this->params->push(namedValue);
HXLINE( 851)		return p;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_params,return )

Float FlxInputText_obj::set_x(Float X){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_855_set_x)
HXLINE( 856)		bool _hx_tmp;
HXDLIN( 856)		if (::hx::IsNotNull( this->fieldBorderSprite )) {
HXLINE( 856)			_hx_tmp = (this->fieldBorderThickness > 0);
            		}
            		else {
HXLINE( 856)			_hx_tmp = false;
            		}
HXDLIN( 856)		if (_hx_tmp) {
HXLINE( 858)			this->fieldBorderSprite->set_x((X - ( (Float)(this->fieldBorderThickness) )));
            		}
HXLINE( 860)		bool _hx_tmp1;
HXDLIN( 860)		if (::hx::IsNotNull( this->backgroundSprite )) {
HXLINE( 860)			_hx_tmp1 = this->background;
            		}
            		else {
HXLINE( 860)			_hx_tmp1 = false;
            		}
HXDLIN( 860)		if (_hx_tmp1) {
HXLINE( 862)			this->backgroundSprite->set_x(X);
            		}
HXLINE( 864)		return this->super::set_x(X);
            	}


Float FlxInputText_obj::set_y(Float Y){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_868_set_y)
HXLINE( 869)		bool _hx_tmp;
HXDLIN( 869)		if (::hx::IsNotNull( this->fieldBorderSprite )) {
HXLINE( 869)			_hx_tmp = (this->fieldBorderThickness > 0);
            		}
            		else {
HXLINE( 869)			_hx_tmp = false;
            		}
HXDLIN( 869)		if (_hx_tmp) {
HXLINE( 871)			this->fieldBorderSprite->set_y((Y - ( (Float)(this->fieldBorderThickness) )));
            		}
HXLINE( 873)		bool _hx_tmp1;
HXDLIN( 873)		if (::hx::IsNotNull( this->backgroundSprite )) {
HXLINE( 873)			_hx_tmp1 = this->background;
            		}
            		else {
HXLINE( 873)			_hx_tmp1 = false;
            		}
HXDLIN( 873)		if (_hx_tmp1) {
HXLINE( 875)			this->backgroundSprite->set_y(Y);
            		}
HXLINE( 877)		return this->super::set_y(Y);
            	}


bool FlxInputText_obj::set_hasFocus(bool newFocus){
            	HX_GC_STACKFRAME(&_hx_pos_75fddae7e64ce41a_881_set_hasFocus)
HXLINE( 882)		if (newFocus) {
HXLINE( 884)			if ((this->hasFocus != newFocus)) {
HXLINE( 886)				this->_caretTimer =  ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.5),this->toggleCaret_dyn(),0);
HXLINE( 887)				this->caret->set_visible(true);
HXLINE( 888)				this->set_caretIndex(this->text.length);
            			}
            		}
            		else {
HXLINE( 894)			this->caret->set_visible(false);
HXLINE( 895)			if (::hx::IsNotNull( this->_caretTimer )) {
HXLINE( 897)				this->_caretTimer->cancel();
            			}
            		}
HXLINE( 901)		if ((newFocus != this->hasFocus)) {
HXLINE( 903)			this->calcFrame(null());
            		}
HXLINE( 905)		return (this->hasFocus = newFocus);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_hasFocus,return )

::String FlxInputText_obj::getAlignStr(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_909_getAlignStr)
HXLINE( 910)		::String alignStr = HX_("left",07,08,b0,47);
HXLINE( 911)		bool _hx_tmp;
HXDLIN( 911)		if (::hx::IsNotNull( this->_defaultFormat )) {
HXLINE( 911)			_hx_tmp = ::hx::IsNotNull( this->_defaultFormat->align );
            		}
            		else {
HXLINE( 911)			_hx_tmp = false;
            		}
HXDLIN( 911)		if (_hx_tmp) {
HXLINE( 913)			alignStr = ::flixel::text::_FlxText::FlxTextAlign_Impl__obj::fromOpenFL(this->_defaultFormat->align);
            		}
HXLINE( 915)		return alignStr;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputText_obj,getAlignStr,return )

int FlxInputText_obj::set_caretIndex(int newCaretIndex){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_919_set_caretIndex)
HXLINE( 920)		Float offx = ( (Float)(0) );
HXLINE( 922)		::String alignStr = this->getAlignStr();
HXLINE( 924)		::String _hx_switch_0 = alignStr;
            		if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 933)			Float offx1 = (this->textField->get_width() - ( (Float)(2) ));
HXDLIN( 933)			Float offx2 = ((offx1 - this->textField->get_textWidth()) / ( (Float)(2) ));
HXDLIN( 933)			offx = (offx2 + (( (Float)(this->textField->get_scrollH()) ) / ( (Float)(2) )));
HXLINE( 935)			if ((offx <= 1)) {
HXLINE( 936)				offx = ( (Float)(0) );
            			}
HXLINE( 931)			goto _hx_goto_32;
            		}
            		if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 927)			Float offx1 = (this->textField->get_width() - ( (Float)(2) ));
HXDLIN( 927)			offx = ((offx1 - this->textField->get_textWidth()) - ( (Float)(2) ));
HXLINE( 928)			if ((offx < 0)) {
HXLINE( 929)				offx = ( (Float)(0) );
            			}
HXLINE( 926)			goto _hx_goto_32;
            		}
            		/* default */{
HXLINE( 939)			offx = ( (Float)(0) );
            		}
            		_hx_goto_32:;
HXLINE( 942)		this->caretIndex = newCaretIndex;
HXLINE( 945)		if ((this->caretIndex > (this->text.length + 1))) {
HXLINE( 947)			this->caretIndex = -1;
            		}
HXLINE( 951)		if ((this->caretIndex != -1)) {
HXLINE( 953)			 ::openfl::geom::Rectangle boundaries = null();
HXLINE( 956)			if ((this->caretIndex < this->text.length)) {
HXLINE( 958)				boundaries = this->getCharBoundaries(this->caretIndex);
HXLINE( 959)				if (::hx::IsNotNull( boundaries )) {
HXLINE( 961)					 ::flixel::FlxSprite _hx_tmp = this->caret;
HXDLIN( 961)					Float _hx_tmp1 = (offx + boundaries->get_left());
HXDLIN( 961)					_hx_tmp->set_x((_hx_tmp1 + this->x));
HXLINE( 962)					 ::flixel::FlxSprite _hx_tmp2 = this->caret;
HXDLIN( 962)					Float _hx_tmp3 = boundaries->get_top();
HXDLIN( 962)					_hx_tmp2->set_y((_hx_tmp3 + this->y));
            				}
            			}
            			else {
HXLINE( 968)				boundaries = this->getCharBoundaries((this->caretIndex - 1));
HXLINE( 969)				if (::hx::IsNotNull( boundaries )) {
HXLINE( 971)					 ::flixel::FlxSprite _hx_tmp = this->caret;
HXDLIN( 971)					Float _hx_tmp1 = (offx + boundaries->get_right());
HXDLIN( 971)					_hx_tmp->set_x((_hx_tmp1 + this->x));
HXLINE( 972)					 ::flixel::FlxSprite _hx_tmp2 = this->caret;
HXDLIN( 972)					Float _hx_tmp3 = boundaries->get_top();
HXDLIN( 972)					_hx_tmp2->set_y((_hx_tmp3 + this->y));
            				}
            				else {
HXLINE( 975)					if ((this->text.length == 0)) {
HXLINE( 978)						this->caret->set_x(((this->x + offx) + 2));
HXLINE( 979)						this->caret->set_y((this->y + 2));
            					}
            				}
            			}
            		}
HXLINE( 985)		 ::flixel::FlxSprite fh = this->caret;
HXDLIN( 985)		Float fh1 = fh->x;
HXDLIN( 985)		fh->set_x((fh1 - ( (Float)(this->textField->get_scrollH()) )));
HXLINE( 989)		bool _hx_tmp;
HXDLIN( 989)		if ((this->lines == 1)) {
HXLINE( 989)			Float _hx_tmp1 = this->caret->x;
HXDLIN( 989)			Float _hx_tmp2 = (_hx_tmp1 + this->caret->get_width());
HXDLIN( 989)			Float _hx_tmp3 = this->x;
HXDLIN( 989)			_hx_tmp = (_hx_tmp2 > (_hx_tmp3 + this->get_width()));
            		}
            		else {
HXLINE( 989)			_hx_tmp = false;
            		}
HXDLIN( 989)		if (_hx_tmp) {
HXLINE( 991)			 ::flixel::FlxSprite _hx_tmp = this->caret;
HXDLIN( 991)			Float _hx_tmp1 = this->x;
HXDLIN( 991)			_hx_tmp->set_x(((_hx_tmp1 + this->get_width()) - ( (Float)(2) )));
            		}
HXLINE( 994)		return this->caretIndex;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_caretIndex,return )

int FlxInputText_obj::set_forceCase(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_998_set_forceCase)
HXLINE( 999)		this->forceCase = Value;
HXLINE(1000)		this->set_text(this->filter(this->text));
HXLINE(1001)		return this->forceCase;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_forceCase,return )

int FlxInputText_obj::set_size(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1005_set_size)
HXLINE(1006)		this->super::set_size(Value);
HXLINE(1007)		 ::flixel::FlxSprite _hx_tmp = this->caret;
HXDLIN(1007)		_hx_tmp->makeGraphic(1,::Std_obj::_hx_int(( (Float)((::Std_obj::_hx_int(( (Float)(this->_defaultFormat->size) )) + 2)) )),null(),null(),null());
HXLINE(1008)		return Value;
            	}


int FlxInputText_obj::set_maxLength(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1012_set_maxLength)
HXLINE(1013)		this->maxLength = Value;
HXLINE(1014)		if ((this->text.length > this->maxLength)) {
HXLINE(1016)			this->set_text(this->text.substring(0,this->maxLength));
            		}
HXLINE(1018)		return this->maxLength;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_maxLength,return )

int FlxInputText_obj::set_lines(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1022_set_lines)
HXLINE(1023)		if ((Value == 0)) {
HXLINE(1024)			return 0;
            		}
HXLINE(1026)		if ((Value > 1)) {
HXLINE(1028)			this->textField->set_wordWrap(true);
HXLINE(1029)			this->textField->set_multiline(true);
            		}
            		else {
HXLINE(1033)			this->textField->set_wordWrap(false);
HXLINE(1034)			this->textField->set_multiline(false);
            		}
HXLINE(1037)		this->lines = Value;
HXLINE(1038)		this->calcFrame(null());
HXLINE(1039)		return this->lines;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_lines,return )

bool FlxInputText_obj::get_passwordMode(){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1044_get_passwordMode)
HXDLIN(1044)		return this->textField->get_displayAsPassword();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxInputText_obj,get_passwordMode,return )

bool FlxInputText_obj::set_passwordMode(bool value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1048_set_passwordMode)
HXLINE(1049)		this->textField->set_displayAsPassword(value);
HXLINE(1050)		this->calcFrame(null());
HXLINE(1051)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_passwordMode,return )

int FlxInputText_obj::set_filterMode(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1055_set_filterMode)
HXLINE(1056)		this->filterMode = Value;
HXLINE(1057)		this->set_text(this->filter(this->text));
HXLINE(1058)		return this->filterMode;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_filterMode,return )

int FlxInputText_obj::set_fieldBorderColor(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1062_set_fieldBorderColor)
HXLINE(1063)		this->fieldBorderColor = Value;
HXLINE(1064)		this->calcFrame(null());
HXLINE(1065)		return this->fieldBorderColor;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_fieldBorderColor,return )

int FlxInputText_obj::set_fieldBorderThickness(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1069_set_fieldBorderThickness)
HXLINE(1070)		this->fieldBorderThickness = Value;
HXLINE(1071)		this->calcFrame(null());
HXLINE(1072)		return this->fieldBorderThickness;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_fieldBorderThickness,return )

int FlxInputText_obj::set_backgroundColor(int Value){
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_1076_set_backgroundColor)
HXLINE(1077)		this->backgroundColor = Value;
HXLINE(1078)		this->calcFrame(null());
HXLINE(1079)		return this->backgroundColor;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxInputText_obj,set_backgroundColor,return )

int FlxInputText_obj::NO_FILTER;

int FlxInputText_obj::ONLY_ALPHA;

int FlxInputText_obj::ONLY_NUMERIC;

int FlxInputText_obj::ONLY_ALPHANUMERIC;

int FlxInputText_obj::CUSTOM_FILTER;

int FlxInputText_obj::ALL_CASES;

int FlxInputText_obj::UPPER_CASE;

int FlxInputText_obj::LOWER_CASE;

::String FlxInputText_obj::BACKSPACE_ACTION;

::String FlxInputText_obj::DELETE_ACTION;

::String FlxInputText_obj::ENTER_ACTION;

::String FlxInputText_obj::INPUT_ACTION;

::String FlxInputText_obj::PASTE_ACTION;

::String FlxInputText_obj::COPY_ACTION;

::String FlxInputText_obj::CUT_ACTION;


::hx::ObjectPtr< FlxInputText_obj > FlxInputText_obj::__new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Width,::String Text,::hx::Null< int >  __o_size,::hx::Null< int >  __o_TextColor,::hx::Null< int >  __o_BackgroundColor,::hx::Null< bool >  __o_EmbeddedFont) {
	::hx::ObjectPtr< FlxInputText_obj > __this = new FlxInputText_obj();
	__this->__construct(__o_X,__o_Y,__o_Width,Text,__o_size,__o_TextColor,__o_BackgroundColor,__o_EmbeddedFont);
	return __this;
}

::hx::ObjectPtr< FlxInputText_obj > FlxInputText_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< int >  __o_Width,::String Text,::hx::Null< int >  __o_size,::hx::Null< int >  __o_TextColor,::hx::Null< int >  __o_BackgroundColor,::hx::Null< bool >  __o_EmbeddedFont) {
	FlxInputText_obj *__this = (FlxInputText_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxInputText_obj), true, "flixel.addons.ui.FlxInputText"));
	*(void **)__this = FlxInputText_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_Width,Text,__o_size,__o_TextColor,__o_BackgroundColor,__o_EmbeddedFont);
	return __this;
}

FlxInputText_obj::FlxInputText_obj()
{
}

void FlxInputText_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxInputText);
	HX_MARK_MEMBER_NAME(customFilterPattern,"customFilterPattern");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(background,"background");
	HX_MARK_MEMBER_NAME(caretColor,"caretColor");
	HX_MARK_MEMBER_NAME(caretWidth,"caretWidth");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(hasFocus,"hasFocus");
	HX_MARK_MEMBER_NAME(caretIndex,"caretIndex");
	HX_MARK_MEMBER_NAME(focusGained,"focusGained");
	HX_MARK_MEMBER_NAME(focusLost,"focusLost");
	HX_MARK_MEMBER_NAME(forceCase,"forceCase");
	HX_MARK_MEMBER_NAME(maxLength,"maxLength");
	HX_MARK_MEMBER_NAME(lines,"lines");
	HX_MARK_MEMBER_NAME(filterMode,"filterMode");
	HX_MARK_MEMBER_NAME(fieldBorderColor,"fieldBorderColor");
	HX_MARK_MEMBER_NAME(fieldBorderThickness,"fieldBorderThickness");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(backgroundSprite,"backgroundSprite");
	HX_MARK_MEMBER_NAME(_caretTimer,"_caretTimer");
	HX_MARK_MEMBER_NAME(caret,"caret");
	HX_MARK_MEMBER_NAME(fieldBorderSprite,"fieldBorderSprite");
	HX_MARK_MEMBER_NAME(_scrollBoundIndeces,"_scrollBoundIndeces");
	HX_MARK_MEMBER_NAME(_charBoundaries,"_charBoundaries");
	HX_MARK_MEMBER_NAME(lastScroll,"lastScroll");
	 ::flixel::text::FlxText_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxInputText_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(customFilterPattern,"customFilterPattern");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(background,"background");
	HX_VISIT_MEMBER_NAME(caretColor,"caretColor");
	HX_VISIT_MEMBER_NAME(caretWidth,"caretWidth");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(hasFocus,"hasFocus");
	HX_VISIT_MEMBER_NAME(caretIndex,"caretIndex");
	HX_VISIT_MEMBER_NAME(focusGained,"focusGained");
	HX_VISIT_MEMBER_NAME(focusLost,"focusLost");
	HX_VISIT_MEMBER_NAME(forceCase,"forceCase");
	HX_VISIT_MEMBER_NAME(maxLength,"maxLength");
	HX_VISIT_MEMBER_NAME(lines,"lines");
	HX_VISIT_MEMBER_NAME(filterMode,"filterMode");
	HX_VISIT_MEMBER_NAME(fieldBorderColor,"fieldBorderColor");
	HX_VISIT_MEMBER_NAME(fieldBorderThickness,"fieldBorderThickness");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(backgroundSprite,"backgroundSprite");
	HX_VISIT_MEMBER_NAME(_caretTimer,"_caretTimer");
	HX_VISIT_MEMBER_NAME(caret,"caret");
	HX_VISIT_MEMBER_NAME(fieldBorderSprite,"fieldBorderSprite");
	HX_VISIT_MEMBER_NAME(_scrollBoundIndeces,"_scrollBoundIndeces");
	HX_VISIT_MEMBER_NAME(_charBoundaries,"_charBoundaries");
	HX_VISIT_MEMBER_NAME(lastScroll,"lastScroll");
	 ::flixel::text::FlxText_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxInputText_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { return ::hx::Val( lines ); }
		if (HX_FIELD_EQ(inName,"caret") ) { return ::hx::Val( caret ); }
		if (HX_FIELD_EQ(inName,"set_x") ) { return ::hx::Val( set_x_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return ::hx::Val( set_y_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { return ::hx::Val( params ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"filter") ) { return ::hx::Val( filter_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return ::hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"hasFocus") ) { return ::hx::Val( hasFocus ); }
		if (HX_FIELD_EQ(inName,"onChange") ) { return ::hx::Val( onChange_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return ::hx::Val( set_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_size") ) { return ::hx::Val( set_size_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusLost") ) { return ::hx::Val( focusLost ); }
		if (HX_FIELD_EQ(inName,"forceCase") ) { return ::hx::Val( forceCase ); }
		if (HX_FIELD_EQ(inName,"maxLength") ) { return ::hx::Val( maxLength ); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return ::hx::Val( onKeyDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"calcFrame") ) { return ::hx::Val( calcFrame_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_lines") ) { return ::hx::Val( set_lines_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { return ::hx::Val( background ); }
		if (HX_FIELD_EQ(inName,"caretColor") ) { return ::hx::Val( caretColor ); }
		if (HX_FIELD_EQ(inName,"caretWidth") ) { return ::hx::Val( caretWidth ); }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { return ::hx::Val( caretIndex ); }
		if (HX_FIELD_EQ(inName,"filterMode") ) { return ::hx::Val( filterMode ); }
		if (HX_FIELD_EQ(inName,"lastScroll") ) { return ::hx::Val( lastScroll ); }
		if (HX_FIELD_EQ(inName,"drawSprite") ) { return ::hx::Val( drawSprite_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_params") ) { return ::hx::Val( set_params_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"focusGained") ) { return ::hx::Val( focusGained ); }
		if (HX_FIELD_EQ(inName,"_caretTimer") ) { return ::hx::Val( _caretTimer ); }
		if (HX_FIELD_EQ(inName,"toggleCaret") ) { return ::hx::Val( toggleCaret_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAlignStr") ) { return ::hx::Val( getAlignStr_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"passwordMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_passwordMode() ); }
		if (HX_FIELD_EQ(inName,"set_hasFocus") ) { return ::hx::Val( set_hasFocus_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getCaretIndex") ) { return ::hx::Val( getCaretIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_forceCase") ) { return ::hx::Val( set_forceCase_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxLength") ) { return ::hx::Val( set_maxLength_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_caretColor") ) { return ::hx::Val( set_caretColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_caretWidth") ) { return ::hx::Val( set_caretWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"onSetTextCheck") ) { return ::hx::Val( onSetTextCheck_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_caretIndex") ) { return ::hx::Val( set_caretIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_filterMode") ) { return ::hx::Val( set_filterMode_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return ::hx::Val( backgroundColor ); }
		if (HX_FIELD_EQ(inName,"_charBoundaries") ) { return ::hx::Val( _charBoundaries ); }
		if (HX_FIELD_EQ(inName,"insertSubstring") ) { return ::hx::Val( insertSubstring_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fieldBorderColor") ) { return ::hx::Val( fieldBorderColor ); }
		if (HX_FIELD_EQ(inName,"backgroundSprite") ) { return ::hx::Val( backgroundSprite ); }
		if (HX_FIELD_EQ(inName,"mouseOverlapping") ) { return ::hx::Val( mouseOverlapping_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_passwordMode") ) { return ::hx::Val( get_passwordMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_passwordMode") ) { return ::hx::Val( set_passwordMode_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fieldBorderSprite") ) { return ::hx::Val( fieldBorderSprite ); }
		if (HX_FIELD_EQ(inName,"getCharBoundaries") ) { return ::hx::Val( getCharBoundaries_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"customFilterPattern") ) { return ::hx::Val( customFilterPattern ); }
		if (HX_FIELD_EQ(inName,"_scrollBoundIndeces") ) { return ::hx::Val( _scrollBoundIndeces ); }
		if (HX_FIELD_EQ(inName,"getCharIndexAtPoint") ) { return ::hx::Val( getCharIndexAtPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_backgroundColor") ) { return ::hx::Val( set_backgroundColor_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fieldBorderThickness") ) { return ::hx::Val( fieldBorderThickness ); }
		if (HX_FIELD_EQ(inName,"set_fieldBorderColor") ) { return ::hx::Val( set_fieldBorderColor_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"prepareCharBoundaries") ) { return ::hx::Val( prepareCharBoundaries_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"set_customFilterPattern") ) { return ::hx::Val( set_customFilterPattern_dyn() ); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"set_fieldBorderThickness") ) { return ::hx::Val( set_fieldBorderThickness_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxInputText_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lines") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_lines(inValue.Cast< int >()) );lines=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caret") ) { caret=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_params(inValue.Cast< ::cpp::VirtualArray >()) );params=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasFocus") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_hasFocus(inValue.Cast< bool >()) );hasFocus=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"focusLost") ) { focusLost=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"forceCase") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_forceCase(inValue.Cast< int >()) );forceCase=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxLength") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxLength(inValue.Cast< int >()) );maxLength=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"background") ) { background=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_caretColor(inValue.Cast< int >()) );caretColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretWidth") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_caretWidth(inValue.Cast< int >()) );caretWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"caretIndex") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_caretIndex(inValue.Cast< int >()) );caretIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filterMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_filterMode(inValue.Cast< int >()) );filterMode=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastScroll") ) { lastScroll=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"focusGained") ) { focusGained=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_caretTimer") ) { _caretTimer=inValue.Cast<  ::flixel::util::FlxTimer >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"passwordMode") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_passwordMode(inValue.Cast< bool >()) ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_backgroundColor(inValue.Cast< int >()) );backgroundColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_charBoundaries") ) { _charBoundaries=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fieldBorderColor") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fieldBorderColor(inValue.Cast< int >()) );fieldBorderColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backgroundSprite") ) { backgroundSprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fieldBorderSprite") ) { fieldBorderSprite=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"customFilterPattern") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_customFilterPattern(inValue.Cast<  ::EReg >()) );customFilterPattern=inValue.Cast<  ::EReg >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scrollBoundIndeces") ) { _scrollBoundIndeces=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"fieldBorderThickness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_fieldBorderThickness(inValue.Cast< int >()) );fieldBorderThickness=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxInputText_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("customFilterPattern",07,03,33,08));
	outFields->push(HX_("background",ee,93,1d,26));
	outFields->push(HX_("caretColor",e0,8c,a3,69));
	outFields->push(HX_("caretWidth",83,d1,a9,e9));
	outFields->push(HX_("params",46,fb,7a,ed));
	outFields->push(HX_("passwordMode",1e,4c,29,b6));
	outFields->push(HX_("hasFocus",1e,aa,e1,90));
	outFields->push(HX_("caretIndex",8f,b6,5b,dd));
	outFields->push(HX_("forceCase",3b,ce,fe,46));
	outFields->push(HX_("maxLength",aa,a6,92,ce));
	outFields->push(HX_("lines",ff,dd,01,75));
	outFields->push(HX_("filterMode",3b,5b,a5,54));
	outFields->push(HX_("fieldBorderColor",3d,66,ca,1d));
	outFields->push(HX_("fieldBorderThickness",4e,5b,39,33));
	outFields->push(HX_("backgroundColor",95,4e,47,0d));
	outFields->push(HX_("backgroundSprite",93,8a,2c,8e));
	outFields->push(HX_("_caretTimer",61,a8,06,02));
	outFields->push(HX_("caret",83,f9,1f,41));
	outFields->push(HX_("fieldBorderSprite",eb,25,5e,f0));
	outFields->push(HX_("_scrollBoundIndeces",d9,8f,2d,01));
	outFields->push(HX_("_charBoundaries",dd,1e,8e,62));
	outFields->push(HX_("lastScroll",03,bb,3f,12));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxInputText_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::EReg */ ,(int)offsetof(FlxInputText_obj,customFilterPattern),HX_("customFilterPattern",07,03,33,08)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxInputText_obj,callback),HX_("callback",c5,99,06,7f)},
	{::hx::fsBool,(int)offsetof(FlxInputText_obj,background),HX_("background",ee,93,1d,26)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,caretColor),HX_("caretColor",e0,8c,a3,69)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,caretWidth),HX_("caretWidth",83,d1,a9,e9)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxInputText_obj,params),HX_("params",46,fb,7a,ed)},
	{::hx::fsBool,(int)offsetof(FlxInputText_obj,hasFocus),HX_("hasFocus",1e,aa,e1,90)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,caretIndex),HX_("caretIndex",8f,b6,5b,dd)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxInputText_obj,focusGained),HX_("focusGained",96,ec,66,a1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxInputText_obj,focusLost),HX_("focusLost",dc,01,43,1f)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,forceCase),HX_("forceCase",3b,ce,fe,46)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,maxLength),HX_("maxLength",aa,a6,92,ce)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,lines),HX_("lines",ff,dd,01,75)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,filterMode),HX_("filterMode",3b,5b,a5,54)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,fieldBorderColor),HX_("fieldBorderColor",3d,66,ca,1d)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,fieldBorderThickness),HX_("fieldBorderThickness",4e,5b,39,33)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,backgroundColor),HX_("backgroundColor",95,4e,47,0d)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxInputText_obj,backgroundSprite),HX_("backgroundSprite",93,8a,2c,8e)},
	{::hx::fsObject /*  ::flixel::util::FlxTimer */ ,(int)offsetof(FlxInputText_obj,_caretTimer),HX_("_caretTimer",61,a8,06,02)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxInputText_obj,caret),HX_("caret",83,f9,1f,41)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(FlxInputText_obj,fieldBorderSprite),HX_("fieldBorderSprite",eb,25,5e,f0)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxInputText_obj,_scrollBoundIndeces),HX_("_scrollBoundIndeces",d9,8f,2d,01)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxInputText_obj,_charBoundaries),HX_("_charBoundaries",dd,1e,8e,62)},
	{::hx::fsInt,(int)offsetof(FlxInputText_obj,lastScroll),HX_("lastScroll",03,bb,3f,12)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxInputText_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FlxInputText_obj::NO_FILTER,HX_("NO_FILTER",36,13,4e,92)},
	{::hx::fsInt,(void *) &FlxInputText_obj::ONLY_ALPHA,HX_("ONLY_ALPHA",eb,4c,e5,a7)},
	{::hx::fsInt,(void *) &FlxInputText_obj::ONLY_NUMERIC,HX_("ONLY_NUMERIC",9a,a9,2d,5f)},
	{::hx::fsInt,(void *) &FlxInputText_obj::ONLY_ALPHANUMERIC,HX_("ONLY_ALPHANUMERIC",22,ad,7f,f5)},
	{::hx::fsInt,(void *) &FlxInputText_obj::CUSTOM_FILTER,HX_("CUSTOM_FILTER",c6,f1,56,e9)},
	{::hx::fsInt,(void *) &FlxInputText_obj::ALL_CASES,HX_("ALL_CASES",a5,06,9b,9d)},
	{::hx::fsInt,(void *) &FlxInputText_obj::UPPER_CASE,HX_("UPPER_CASE",0d,e2,06,82)},
	{::hx::fsInt,(void *) &FlxInputText_obj::LOWER_CASE,HX_("LOWER_CASE",0e,61,d8,7c)},
	{::hx::fsString,(void *) &FlxInputText_obj::BACKSPACE_ACTION,HX_("BACKSPACE_ACTION",16,76,91,d1)},
	{::hx::fsString,(void *) &FlxInputText_obj::DELETE_ACTION,HX_("DELETE_ACTION",8a,38,e3,2e)},
	{::hx::fsString,(void *) &FlxInputText_obj::ENTER_ACTION,HX_("ENTER_ACTION",5d,63,46,79)},
	{::hx::fsString,(void *) &FlxInputText_obj::INPUT_ACTION,HX_("INPUT_ACTION",ab,ae,95,20)},
	{::hx::fsString,(void *) &FlxInputText_obj::PASTE_ACTION,HX_("PASTE_ACTION",82,8a,7f,75)},
	{::hx::fsString,(void *) &FlxInputText_obj::COPY_ACTION,HX_("COPY_ACTION",40,86,6b,16)},
	{::hx::fsString,(void *) &FlxInputText_obj::CUT_ACTION,HX_("CUT_ACTION",33,a8,72,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxInputText_obj_sMemberFields[] = {
	HX_("customFilterPattern",07,03,33,08),
	HX_("set_customFilterPattern",aa,12,ea,12),
	HX_("callback",c5,99,06,7f),
	HX_("background",ee,93,1d,26),
	HX_("caretColor",e0,8c,a3,69),
	HX_("set_caretColor",9d,fd,b8,ff),
	HX_("caretWidth",83,d1,a9,e9),
	HX_("set_caretWidth",40,42,bf,7f),
	HX_("params",46,fb,7a,ed),
	HX_("hasFocus",1e,aa,e1,90),
	HX_("caretIndex",8f,b6,5b,dd),
	HX_("focusGained",96,ec,66,a1),
	HX_("focusLost",dc,01,43,1f),
	HX_("forceCase",3b,ce,fe,46),
	HX_("maxLength",aa,a6,92,ce),
	HX_("lines",ff,dd,01,75),
	HX_("filterMode",3b,5b,a5,54),
	HX_("fieldBorderColor",3d,66,ca,1d),
	HX_("fieldBorderThickness",4e,5b,39,33),
	HX_("backgroundColor",95,4e,47,0d),
	HX_("backgroundSprite",93,8a,2c,8e),
	HX_("_caretTimer",61,a8,06,02),
	HX_("caret",83,f9,1f,41),
	HX_("fieldBorderSprite",eb,25,5e,f0),
	HX_("_scrollBoundIndeces",d9,8f,2d,01),
	HX_("_charBoundaries",dd,1e,8e,62),
	HX_("lastScroll",03,bb,3f,12),
	HX_("destroy",fa,2c,86,24),
	HX_("draw",04,2c,70,42),
	HX_("drawSprite",29,57,59,05),
	HX_("update",09,86,05,87),
	HX_("mouseOverlapping",54,1f,62,db),
	HX_("onKeyDown",42,22,f2,73),
	HX_("onChange",ef,87,1f,97),
	HX_("insertSubstring",d8,df,31,11),
	HX_("getCaretIndex",c5,12,ce,39),
	HX_("getCharBoundaries",74,85,a1,8b),
	HX_("set_text",aa,e1,11,7b),
	HX_("getCharIndexAtPoint",17,ee,9c,aa),
	HX_("prepareCharBoundaries",25,fa,4d,3a),
	HX_("onSetTextCheck",98,48,e3,2c),
	HX_("calcFrame",58,93,8c,f9),
	HX_("toggleCaret",4f,b1,e6,68),
	HX_("filter",b8,1f,35,85),
	HX_("set_params",83,09,80,e1),
	HX_("set_x",5b,9b,2f,7a),
	HX_("set_y",5c,9b,2f,7a),
	HX_("set_hasFocus",9b,81,f4,5a),
	HX_("getAlignStr",a2,95,d2,ef),
	HX_("set_caretIndex",4c,27,71,73),
	HX_("set_forceCase",1e,84,68,4d),
	HX_("set_size",be,b5,6b,7a),
	HX_("set_maxLength",8d,5c,fc,d4),
	HX_("set_lines",62,26,fc,9b),
	HX_("get_passwordMode",a7,38,c8,ba),
	HX_("set_passwordMode",1b,26,0a,11),
	HX_("set_filterMode",f8,cb,ba,ea),
	HX_("set_fieldBorderColor",ba,82,ec,08),
	HX_("set_fieldBorderThickness",4b,fa,af,88),
	HX_("set_backgroundColor",b8,10,ef,d4),
	::String(null()) };

static void FlxInputText_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxInputText_obj::NO_FILTER,"NO_FILTER");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHA,"ONLY_ALPHA");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ONLY_NUMERIC,"ONLY_NUMERIC");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHANUMERIC,"ONLY_ALPHANUMERIC");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::CUSTOM_FILTER,"CUSTOM_FILTER");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ALL_CASES,"ALL_CASES");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::UPPER_CASE,"UPPER_CASE");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::LOWER_CASE,"LOWER_CASE");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::BACKSPACE_ACTION,"BACKSPACE_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::DELETE_ACTION,"DELETE_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::ENTER_ACTION,"ENTER_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::INPUT_ACTION,"INPUT_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::PASTE_ACTION,"PASTE_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::COPY_ACTION,"COPY_ACTION");
	HX_MARK_MEMBER_NAME(FlxInputText_obj::CUT_ACTION,"CUT_ACTION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxInputText_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::NO_FILTER,"NO_FILTER");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHA,"ONLY_ALPHA");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ONLY_NUMERIC,"ONLY_NUMERIC");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ONLY_ALPHANUMERIC,"ONLY_ALPHANUMERIC");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::CUSTOM_FILTER,"CUSTOM_FILTER");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ALL_CASES,"ALL_CASES");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::UPPER_CASE,"UPPER_CASE");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::LOWER_CASE,"LOWER_CASE");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::BACKSPACE_ACTION,"BACKSPACE_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::DELETE_ACTION,"DELETE_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::ENTER_ACTION,"ENTER_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::INPUT_ACTION,"INPUT_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::PASTE_ACTION,"PASTE_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::COPY_ACTION,"COPY_ACTION");
	HX_VISIT_MEMBER_NAME(FlxInputText_obj::CUT_ACTION,"CUT_ACTION");
};

#endif

::hx::Class FlxInputText_obj::__mClass;

static ::String FlxInputText_obj_sStaticFields[] = {
	HX_("NO_FILTER",36,13,4e,92),
	HX_("ONLY_ALPHA",eb,4c,e5,a7),
	HX_("ONLY_NUMERIC",9a,a9,2d,5f),
	HX_("ONLY_ALPHANUMERIC",22,ad,7f,f5),
	HX_("CUSTOM_FILTER",c6,f1,56,e9),
	HX_("ALL_CASES",a5,06,9b,9d),
	HX_("UPPER_CASE",0d,e2,06,82),
	HX_("LOWER_CASE",0e,61,d8,7c),
	HX_("BACKSPACE_ACTION",16,76,91,d1),
	HX_("DELETE_ACTION",8a,38,e3,2e),
	HX_("ENTER_ACTION",5d,63,46,79),
	HX_("INPUT_ACTION",ab,ae,95,20),
	HX_("PASTE_ACTION",82,8a,7f,75),
	HX_("COPY_ACTION",40,86,6b,16),
	HX_("CUT_ACTION",33,a8,72,59),
	::String(null())
};

void FlxInputText_obj::__register()
{
	FlxInputText_obj _hx_dummy;
	FlxInputText_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxInputText",d6,dd,cc,b8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxInputText_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxInputText_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxInputText_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxInputText_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxInputText_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxInputText_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxInputText_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxInputText_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_34_boot)
HXDLIN(  34)		NO_FILTER = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_35_boot)
HXDLIN(  35)		ONLY_ALPHA = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_36_boot)
HXDLIN(  36)		ONLY_NUMERIC = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_37_boot)
HXDLIN(  37)		ONLY_ALPHANUMERIC = 3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_38_boot)
HXDLIN(  38)		CUSTOM_FILTER = 4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_40_boot)
HXDLIN(  40)		ALL_CASES = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_41_boot)
HXDLIN(  41)		UPPER_CASE = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_42_boot)
HXDLIN(  42)		LOWER_CASE = 2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_44_boot)
HXDLIN(  44)		BACKSPACE_ACTION = HX_("backspace",3f,85,ea,ca);
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_45_boot)
HXDLIN(  45)		DELETE_ACTION = HX_("delete",2b,c0,d8,6a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_46_boot)
HXDLIN(  46)		ENTER_ACTION = HX_("enter",18,6d,86,70);
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_47_boot)
HXDLIN(  47)		INPUT_ACTION = HX_("input",0a,c4,1d,be);
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_48_boot)
HXDLIN(  48)		PASTE_ACTION = HX_("paste",53,53,56,bd);
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_49_boot)
HXDLIN(  49)		COPY_ACTION = HX_("copy",b5,bb,c4,41);
            	}
{
            	HX_STACKFRAME(&_hx_pos_75fddae7e64ce41a_50_boot)
HXDLIN(  50)		CUT_ACTION = HX_("cut",82,85,4b,00);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
