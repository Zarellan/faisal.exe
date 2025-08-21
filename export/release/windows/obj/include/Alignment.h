#ifndef INCLUDED_Alignment
#define INCLUDED_Alignment

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Alignment)


class Alignment_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Alignment_obj OBJ_;

	public:
		Alignment_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("Alignment",c3,c2,10,8c); }
		::String __ToString() const { return HX_("Alignment.",0b,a8,99,02) + _hx_tag; }

		static ::Alignment CENTERED;
		static inline ::Alignment CENTERED_dyn() { return CENTERED; }
		static ::Alignment LEFT;
		static inline ::Alignment LEFT_dyn() { return LEFT; }
		static ::Alignment RIGHT;
		static inline ::Alignment RIGHT_dyn() { return RIGHT; }
};


#endif /* INCLUDED_Alignment */ 
