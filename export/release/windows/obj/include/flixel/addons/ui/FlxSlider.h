#ifndef INCLUDED_flixel_addons_ui_FlxSlider
#define INCLUDED_flixel_addons_ui_FlxSlider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxSlider)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxSlider_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef FlxSlider_obj OBJ_;
		FlxSlider_obj();

	public:
		enum { _hx_ClassId = 0x520166d0 };

		void __construct( ::Dynamic Object,::String VarString,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_MinValue,::hx::Null< Float >  __o_MaxValue,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< int >  __o_Thickness,::hx::Null< int >  __o_Color,::hx::Null< int >  __o_HandleColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxSlider")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxSlider"); }
		static ::hx::ObjectPtr< FlxSlider_obj > __new( ::Dynamic Object,::String VarString,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_MinValue,::hx::Null< Float >  __o_MaxValue,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< int >  __o_Thickness,::hx::Null< int >  __o_Color,::hx::Null< int >  __o_HandleColor);
		static ::hx::ObjectPtr< FlxSlider_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic Object,::String VarString,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::hx::Null< Float >  __o_MinValue,::hx::Null< Float >  __o_MaxValue,::hx::Null< int >  __o_Width,::hx::Null< int >  __o_Height,::hx::Null< int >  __o_Thickness,::hx::Null< int >  __o_Color,::hx::Null< int >  __o_HandleColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxSlider_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxSlider",13,c0,f3,f1); }

		 ::flixel::FlxSprite body;
		 ::flixel::FlxSprite handle;
		 ::flixel::text::FlxText minLabel;
		 ::flixel::text::FlxText maxLabel;
		 ::flixel::text::FlxText nameLabel;
		 ::flixel::text::FlxText valueLabel;
		Float value;
		Float minValue;
		Float maxValue;
		int decimals;
		::String clickSound;
		::String hoverSound;
		Float hoverAlpha;
		 ::Dynamic callback;
		Dynamic callback_dyn() { return callback;}
		bool setVariable;
		::String varString;
		 ::flixel::math::FlxRect _bounds;
		int _width;
		int _height;
		int _thickness;
		int _color;
		int _handleColor;
		 ::Dynamic _object;
		Float _lastPos;
		bool _justClicked;
		bool _justHovered;
		void createSlider();
		::Dynamic createSlider_dyn();

		void update(Float elapsed);

		void updateValue();
		::Dynamic updateValue_dyn();

		void setTexts(::String Name,::hx::Null< bool >  Value,::String Min,::String Max,::hx::Null< int >  Size);
		::Dynamic setTexts_dyn();

		void destroy();

		Float get_expectedPos();
		::Dynamic get_expectedPos_dyn();

		Float get_relativePos();
		::Dynamic get_relativePos_dyn();

		::String set_varString(::String Value);
		::Dynamic set_varString_dyn();

		Float set_x(Float value);

		Float set_y(Float value);

		void updateBounds();
		::Dynamic updateBounds_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxSlider */ 
