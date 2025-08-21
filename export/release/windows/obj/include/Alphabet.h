#ifndef INCLUDED_Alphabet
#define INCLUDED_Alphabet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
HX_DECLARE_CLASS0(Alignment)
HX_DECLARE_CLASS0(AlphaCharacter)
HX_DECLARE_CLASS0(Alphabet)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)



class HXCPP_CLASS_ATTRIBUTES Alphabet_obj : public  ::flixel::group::FlxTypedSpriteGroup_obj
{
	public:
		typedef  ::flixel::group::FlxTypedSpriteGroup_obj super;
		typedef Alphabet_obj OBJ_;
		Alphabet_obj();

	public:
		enum { _hx_ClassId = 0x567b2b93 };

		void __construct(Float x,Float y,::String __o_text, ::Dynamic __o_bold);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="Alphabet")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"Alphabet"); }
		static ::hx::ObjectPtr< Alphabet_obj > __new(Float x,Float y,::String __o_text, ::Dynamic __o_bold);
		static ::hx::ObjectPtr< Alphabet_obj > __alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String __o_text, ::Dynamic __o_bold);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Alphabet_obj();

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
		::String __ToString() const { return HX_("Alphabet",d3,38,ea,fa); }

		static void __boot();
		static Float Y_PER_ROW;
		::String text;
		bool bold;
		::Array< ::Dynamic> letters;
		bool isMenuItem;
		int targetY;
		bool changeX;
		bool changeY;
		 ::Alignment alignment;
		Float scaleX;
		Float scaleY;
		int rows;
		 ::flixel::math::FlxPoint distancePerItem;
		 ::flixel::math::FlxPoint startPosition;
		void setAlignmentFromString(::String align);
		::Dynamic setAlignmentFromString_dyn();

		 ::Alignment set_alignment( ::Alignment align);
		::Dynamic set_alignment_dyn();

		void updateAlignment();
		::Dynamic updateAlignment_dyn();

		virtual ::String set_text(::String newText);
		::Dynamic set_text_dyn();

		void clearLetters();
		::Dynamic clearLetters_dyn();

		Float set_scaleX(Float value);
		::Dynamic set_scaleX_dyn();

		Float set_scaleY(Float value);
		::Dynamic set_scaleY_dyn();

		virtual void update(Float elapsed);

		void snapToPosition();
		::Dynamic snapToPosition_dyn();

		void createLetters(::String newText);
		::Dynamic createLetters_dyn();

};


#endif /* INCLUDED_Alphabet */ 
