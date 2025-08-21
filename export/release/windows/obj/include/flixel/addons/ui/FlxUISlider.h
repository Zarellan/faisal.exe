#ifndef INCLUDED_flixel_addons_ui_FlxUISlider
#define INCLUDED_flixel_addons_ui_FlxUISlider

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxSlider
#include <flixel/addons/ui/FlxSlider.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxSlider)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISlider)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUISlider_obj : public  ::flixel::addons::ui::FlxSlider_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxSlider_obj super;
		typedef FlxUISlider_obj OBJ_;
		FlxUISlider_obj();

	public:
		enum { _hx_ClassId = 0x772fa9e4 };

		void __construct( ::Dynamic Object,::String VarString, ::Dynamic X, ::Dynamic Y, ::Dynamic MinValue, ::Dynamic MaxValue, ::Dynamic Width, ::Dynamic Height, ::Dynamic Thickness, ::Dynamic Color, ::Dynamic HandleColor);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUISlider")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUISlider"); }
		static ::hx::ObjectPtr< FlxUISlider_obj > __new( ::Dynamic Object,::String VarString, ::Dynamic X, ::Dynamic Y, ::Dynamic MinValue, ::Dynamic MaxValue, ::Dynamic Width, ::Dynamic Height, ::Dynamic Thickness, ::Dynamic Color, ::Dynamic HandleColor);
		static ::hx::ObjectPtr< FlxUISlider_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic Object,::String VarString, ::Dynamic X, ::Dynamic Y, ::Dynamic MinValue, ::Dynamic MaxValue, ::Dynamic Width, ::Dynamic Height, ::Dynamic Thickness, ::Dynamic Color, ::Dynamic HandleColor);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUISlider_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxUISlider",e7,19,5d,bb); }

		static void __boot();
		static ::String CHANGE_EVENT;
		::String name;
		bool broadcastToFlxUI;
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUISlider */ 
