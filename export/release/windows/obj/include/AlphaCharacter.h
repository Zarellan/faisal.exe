#ifndef INCLUDED_AlphaCharacter
#define INCLUDED_AlphaCharacter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(AlphaCharacter)
HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)



class HXCPP_CLASS_ATTRIBUTES AlphaCharacter_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef AlphaCharacter_obj OBJ_;
		AlphaCharacter_obj();

	public:
		enum { _hx_ClassId = 0x10d46877 };

		void __construct(Float x,Float y,::String character,bool bold, ::Alphabet parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="AlphaCharacter")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"AlphaCharacter"); }
		static ::hx::ObjectPtr< AlphaCharacter_obj > __new(Float x,Float y,::String character,bool bold, ::Alphabet parent);
		static ::hx::ObjectPtr< AlphaCharacter_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String character,bool bold, ::Alphabet parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AlphaCharacter_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AlphaCharacter",8b,cc,2e,b9); }

		static void __boot();
		static  ::haxe::ds::StringMap allLetters;
		static bool isTypeAlphabet(::String c);
		static ::Dynamic isTypeAlphabet_dyn();

		::String image;
		 ::Alphabet parent;
		Float alignOffset;
		::Array< Float > letterOffset;
		 ::flixel::math::FlxPoint spawnPos;
		 ::flixel::math::FlxPoint spawnScale;
		int row;
		Float rowWidth;
		::String set_image(::String name);
		::Dynamic set_image_dyn();

		void updateLetterOffset();
		::Dynamic updateLetterOffset_dyn();

};


#endif /* INCLUDED_AlphaCharacter */ 
