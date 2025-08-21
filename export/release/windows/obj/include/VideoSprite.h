#ifndef INCLUDED_VideoSprite
#define INCLUDED_VideoSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(VideoHandler)
HX_DECLARE_CLASS0(VideoSprite)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(vlc,VLCBitmap)



class HXCPP_CLASS_ATTRIBUTES VideoSprite_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef VideoSprite_obj OBJ_;
		VideoSprite_obj();

	public:
		enum { _hx_ClassId = 0x023d9470 };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="VideoSprite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"VideoSprite"); }
		static ::hx::ObjectPtr< VideoSprite_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y);
		static ::hx::ObjectPtr< VideoSprite_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VideoSprite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VideoSprite",c0,0a,70,20); }

		 ::VideoHandler bitmap;
		 ::Dynamic openingCallback;
		Dynamic openingCallback_dyn() { return openingCallback;}
		 ::Dynamic finishCallback;
		Dynamic finishCallback_dyn() { return finishCallback;}
		void update(Float elapsed);

		void playVideo(::String Path,::hx::Null< bool >  Loop,::hx::Null< bool >  PauseMusic);
		::Dynamic playVideo_dyn();

};


#endif /* INCLUDED_VideoSprite */ 
