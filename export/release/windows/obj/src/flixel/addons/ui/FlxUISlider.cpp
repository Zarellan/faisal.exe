#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxSlider
#include <flixel/addons/ui/FlxSlider.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISlider
#include <flixel/addons/ui/FlxUISlider.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_643b3c313fbe6513_7_new,"flixel.addons.ui.FlxUISlider","new",0x340a3448,"flixel.addons.ui.FlxUISlider.new","flixel/addons/ui/FlxUISlider.hx",7,0xcc2fb5c9)
HX_LOCAL_STACK_FRAME(_hx_pos_643b3c313fbe6513_13_boot,"flixel.addons.ui.FlxUISlider","boot",0x4cfc8b4a,"flixel.addons.ui.FlxUISlider.boot","flixel/addons/ui/FlxUISlider.hx",13,0xcc2fb5c9)
namespace flixel{
namespace addons{
namespace ui{

void FlxUISlider_obj::__construct( ::Dynamic Object,::String VarString, ::Dynamic X, ::Dynamic Y, ::Dynamic MinValue, ::Dynamic MaxValue, ::Dynamic Width, ::Dynamic Height, ::Dynamic Thickness, ::Dynamic Color, ::Dynamic HandleColor){
            	HX_STACKFRAME(&_hx_pos_643b3c313fbe6513_7_new)
HXLINE(  11)		this->broadcastToFlxUI = true;
HXLINE(   7)		super::__construct(Object,VarString,X,Y,MinValue,MaxValue,Width,Height,Thickness,Color,HandleColor);
            	}

Dynamic FlxUISlider_obj::__CreateEmpty() { return new FlxUISlider_obj; }

void *FlxUISlider_obj::_hx_vtable = 0;

Dynamic FlxUISlider_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUISlider_obj > _hx_result = new FlxUISlider_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10]);
	return _hx_result;
}

bool FlxUISlider_obj::_hx_isInstanceOf(int inClassId) {
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
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x772fa9e4 || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7dab0655;
		}
	}
}

static ::flixel::IFlxSprite_obj _hx_flixel_addons_ui_FlxUISlider__hx_flixel_IFlxSprite= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISlider_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISlider_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISlider_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISlider_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISlider_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISlider_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISlider_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISlider_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISlider_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUISlider_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISlider_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISlider_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISlider_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISlider_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUISlider_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISlider_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISlider_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUISlider_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUISlider_obj::setPosition,
};

static ::flixel::IFlxBasic_obj _hx_flixel_addons_ui_FlxUISlider__hx_flixel_IFlxBasic= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISlider_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISlider_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISlider_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISlider_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISlider_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISlider_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISlider_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISlider_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISlider_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUISlider_obj::toString,
};

static ::flixel::addons::ui::interfaces::IFlxUIWidget_obj _hx_flixel_addons_ui_FlxUISlider__hx_flixel_addons_ui_interfaces_IFlxUIWidget= {
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISlider_obj::set_active,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISlider_obj::set_visible,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISlider_obj::set_alive,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISlider_obj::set_exists,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISlider_obj::draw,
	( void (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISlider_obj::update,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISlider_obj::destroy,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISlider_obj::kill,
	( void (::hx::Object::*)())&::flixel::addons::ui::FlxUISlider_obj::revive,
	( ::String (::hx::Object::*)())&::flixel::addons::ui::FlxUISlider_obj::toString,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISlider_obj::set_x,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISlider_obj::set_y,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISlider_obj::set_alpha,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISlider_obj::set_angle,
	( int (::hx::Object::*)(int))&::flixel::addons::ui::FlxUISlider_obj::set_facing,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISlider_obj::set_moves,
	( bool (::hx::Object::*)(bool))&::flixel::addons::ui::FlxUISlider_obj::set_immovable,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUISlider_obj::reset,
	( void (::hx::Object::*)(::hx::Null< Float > ,::hx::Null< Float > ))&::flixel::addons::ui::FlxUISlider_obj::setPosition,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUISlider_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISlider_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUISlider_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUISlider_obj::set_height,
};

void *FlxUISlider_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x897c83aa: return &_hx_flixel_addons_ui_FlxUISlider__hx_flixel_IFlxSprite;
		case (int)0x284cfea9: return &_hx_flixel_addons_ui_FlxUISlider__hx_flixel_IFlxBasic;
		case (int)0x998525de: return &_hx_flixel_addons_ui_FlxUISlider__hx_flixel_addons_ui_interfaces_IFlxUIWidget;
	}
	return super::_hx_getInterface(inHash);
}

::String FlxUISlider_obj::CHANGE_EVENT;


::hx::ObjectPtr< FlxUISlider_obj > FlxUISlider_obj::__new( ::Dynamic Object,::String VarString, ::Dynamic X, ::Dynamic Y, ::Dynamic MinValue, ::Dynamic MaxValue, ::Dynamic Width, ::Dynamic Height, ::Dynamic Thickness, ::Dynamic Color, ::Dynamic HandleColor) {
	::hx::ObjectPtr< FlxUISlider_obj > __this = new FlxUISlider_obj();
	__this->__construct(Object,VarString,X,Y,MinValue,MaxValue,Width,Height,Thickness,Color,HandleColor);
	return __this;
}

::hx::ObjectPtr< FlxUISlider_obj > FlxUISlider_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic Object,::String VarString, ::Dynamic X, ::Dynamic Y, ::Dynamic MinValue, ::Dynamic MaxValue, ::Dynamic Width, ::Dynamic Height, ::Dynamic Thickness, ::Dynamic Color, ::Dynamic HandleColor) {
	FlxUISlider_obj *__this = (FlxUISlider_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUISlider_obj), true, "flixel.addons.ui.FlxUISlider"));
	*(void **)__this = FlxUISlider_obj::_hx_vtable;
	__this->__construct(Object,VarString,X,Y,MinValue,MaxValue,Width,Height,Thickness,Color,HandleColor);
	return __this;
}

FlxUISlider_obj::FlxUISlider_obj()
{
}

void FlxUISlider_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUISlider);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	 ::flixel::addons::ui::FlxSlider_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUISlider_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	 ::flixel::addons::ui::FlxSlider_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxUISlider_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return ::hx::Val( broadcastToFlxUI ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUISlider_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUISlider_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("broadcastToFlxUI",ca,32,56,1a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUISlider_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FlxUISlider_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsBool,(int)offsetof(FlxUISlider_obj,broadcastToFlxUI),HX_("broadcastToFlxUI",ca,32,56,1a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxUISlider_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &FlxUISlider_obj::CHANGE_EVENT,HX_("CHANGE_EVENT",ab,38,ff,8d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxUISlider_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("broadcastToFlxUI",ca,32,56,1a),
	::String(null()) };

static void FlxUISlider_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUISlider_obj::CHANGE_EVENT,"CHANGE_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxUISlider_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUISlider_obj::CHANGE_EVENT,"CHANGE_EVENT");
};

#endif

::hx::Class FlxUISlider_obj::__mClass;

static ::String FlxUISlider_obj_sStaticFields[] = {
	HX_("CHANGE_EVENT",ab,38,ff,8d),
	::String(null())
};

void FlxUISlider_obj::__register()
{
	FlxUISlider_obj _hx_dummy;
	FlxUISlider_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUISlider",56,b0,c0,aa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxUISlider_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxUISlider_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUISlider_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUISlider_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxUISlider_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUISlider_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUISlider_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxUISlider_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_643b3c313fbe6513_13_boot)
HXDLIN(  13)		CHANGE_EVENT = HX_("change_slider",50,54,ff,71);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
