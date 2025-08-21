#ifndef INCLUDED_VideoHandler
#define INCLUDED_VideoHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_vlc_VLCBitmap
#include <vlc/VLCBitmap.h>
#endif
HX_DECLARE_CLASS0(VideoHandler)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS1(vlc,VLCBitmap)



class HXCPP_CLASS_ATTRIBUTES VideoHandler_obj : public  ::vlc::VLCBitmap_obj
{
	public:
		typedef  ::vlc::VLCBitmap_obj super;
		typedef VideoHandler_obj OBJ_;
		VideoHandler_obj();

	public:
		enum { _hx_ClassId = 0x10c5b76f };

		void __construct(::hx::Null< int >  __o_IndexModifier);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="VideoHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"VideoHandler"); }
		static ::hx::ObjectPtr< VideoHandler_obj > __new(::hx::Null< int >  __o_IndexModifier);
		static ::hx::ObjectPtr< VideoHandler_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_IndexModifier);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VideoHandler_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VideoHandler",af,64,e4,27); }

		bool canSkip;
		bool canUseSound;
		bool canUseAutoResize;
		 ::Dynamic openingCallback;
		Dynamic openingCallback_dyn() { return openingCallback;}
		 ::Dynamic finishCallback;
		Dynamic finishCallback_dyn() { return finishCallback;}
		bool pauseMusic;
		void onVLCOpening();
		::Dynamic onVLCOpening_dyn();

		void onVLCEncounteredError();
		::Dynamic onVLCEncounteredError_dyn();

		void onVLCEndReached();
		::Dynamic onVLCEndReached_dyn();

		void playVideo(::String Path,::hx::Null< bool >  Loop,::hx::Null< bool >  PauseMusic);
		::Dynamic playVideo_dyn();

		void update( ::openfl::events::Event E);
		::Dynamic update_dyn();

		int calcSize(int Ind);
		::Dynamic calcSize_dyn();

};


#endif /* INCLUDED_VideoHandler */ 
