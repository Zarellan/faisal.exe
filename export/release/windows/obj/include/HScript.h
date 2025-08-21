#ifndef INCLUDED_HScript
#define INCLUDED_HScript

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(HScript)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(hscript,Interp)
HX_DECLARE_CLASS1(hscript,Parser)



class HXCPP_CLASS_ATTRIBUTES HScript_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HScript_obj OBJ_;
		HScript_obj();

	public:
		enum { _hx_ClassId = 0x0b34a0cf };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="HScript")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"HScript"); }
		static ::hx::ObjectPtr< HScript_obj > __new();
		static ::hx::ObjectPtr< HScript_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HScript_obj();

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
		::String __ToString() const { return HX_("HScript",73,28,fe,2d); }

		static void __boot();
		static  ::hscript::Parser parser;
		 ::hscript::Interp interp;
		 ::haxe::ds::StringMap get_variables();
		::Dynamic get_variables_dyn();

		 ::Dynamic execute(::String codeToRun);
		::Dynamic execute_dyn();

};


#endif /* INCLUDED_HScript */ 
