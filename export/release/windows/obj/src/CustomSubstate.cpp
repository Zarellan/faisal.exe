#include <hxcpp.h>

#ifndef INCLUDED_CustomSubstate
#include <CustomSubstate.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8557063211c1ebb8_3330_new,"CustomSubstate","new",0xac1d5774,"CustomSubstate.new","FunkinLua.hx",3330,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_8557063211c1ebb8_3321_create,"CustomSubstate","create",0xdcec8468,"CustomSubstate.create","FunkinLua.hx",3321,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_8557063211c1ebb8_3337_update,"CustomSubstate","update",0xe7e2a375,"CustomSubstate.update","FunkinLua.hx",3337,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_8557063211c1ebb8_3344_destroy,"CustomSubstate","destroy",0x8522ce0e,"CustomSubstate.destroy","FunkinLua.hx",3344,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_8557063211c1ebb8_3317_boot,"CustomSubstate","boot",0xe5a82e9e,"CustomSubstate.boot","FunkinLua.hx",3317,0x00117937)

void CustomSubstate_obj::__construct(::String name){
            	HX_STACKFRAME(&_hx_pos_8557063211c1ebb8_3330_new)
HXLINE(3331)		::CustomSubstate_obj::name = name;
HXLINE(3332)		super::__construct();
HXLINE(3333)		this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
            	}

Dynamic CustomSubstate_obj::__CreateEmpty() { return new CustomSubstate_obj; }

void *CustomSubstate_obj::_hx_vtable = 0;

Dynamic CustomSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CustomSubstate_obj > _hx_result = new CustomSubstate_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool CustomSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x14cb5042) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x14cb5042;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void CustomSubstate_obj::create(){
            	HX_STACKFRAME(&_hx_pos_8557063211c1ebb8_3321_create)
HXLINE(3322)		::CustomSubstate_obj::instance = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(3324)		::PlayState_obj::instance->callOnLuas(HX_("onCustomSubstateCreate",bd,00,5a,98),::cpp::VirtualArray_obj::__new(1)->init(0,::CustomSubstate_obj::name),null(),null(),null());
HXLINE(3325)		this->super::create();
HXLINE(3326)		::PlayState_obj::instance->callOnLuas(HX_("onCustomSubstateCreatePost",bd,53,4b,d5),::cpp::VirtualArray_obj::__new(1)->init(0,::CustomSubstate_obj::name),null(),null(),null());
            	}


void CustomSubstate_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_8557063211c1ebb8_3337_update)
HXLINE(3338)		::PlayState_obj::instance->callOnLuas(HX_("onCustomSubstateUpdate",ca,1f,50,a3),::cpp::VirtualArray_obj::__new(2)->init(0,::CustomSubstate_obj::name)->init(1,elapsed),null(),null(),null());
HXLINE(3339)		this->super::update(elapsed);
HXLINE(3340)		::PlayState_obj::instance->callOnLuas(HX_("onCustomSubstateUpdatePost",4a,7d,72,7b),::cpp::VirtualArray_obj::__new(2)->init(0,::CustomSubstate_obj::name)->init(1,elapsed),null(),null(),null());
            	}


void CustomSubstate_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_8557063211c1ebb8_3344_destroy)
HXLINE(3345)		::PlayState_obj::instance->callOnLuas(HX_("onCustomSubstateDestroy",19,1c,82,c9),::cpp::VirtualArray_obj::__new(1)->init(0,::CustomSubstate_obj::name),null(),null(),null());
HXLINE(3346)		this->super::destroy();
            	}


::String CustomSubstate_obj::name;

 ::CustomSubstate CustomSubstate_obj::instance;


::hx::ObjectPtr< CustomSubstate_obj > CustomSubstate_obj::__new(::String name) {
	::hx::ObjectPtr< CustomSubstate_obj > __this = new CustomSubstate_obj();
	__this->__construct(name);
	return __this;
}

::hx::ObjectPtr< CustomSubstate_obj > CustomSubstate_obj::__alloc(::hx::Ctx *_hx_ctx,::String name) {
	CustomSubstate_obj *__this = (CustomSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CustomSubstate_obj), true, "CustomSubstate"));
	*(void **)__this = CustomSubstate_obj::_hx_vtable;
	__this->__construct(name);
	return __this;
}

CustomSubstate_obj::CustomSubstate_obj()
{
}

::hx::Val CustomSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CustomSubstate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { outValue = ( name ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { outValue = ( instance ); return true; }
	}
	return false;
}

bool CustomSubstate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=ioValue.Cast< ::String >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=ioValue.Cast<  ::CustomSubstate >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CustomSubstate_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo CustomSubstate_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &CustomSubstate_obj::name,HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::CustomSubstate */ ,(void *) &CustomSubstate_obj::instance,HX_("instance",95,1f,e1,59)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CustomSubstate_obj_sMemberFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void CustomSubstate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CustomSubstate_obj::name,"name");
	HX_MARK_MEMBER_NAME(CustomSubstate_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CustomSubstate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CustomSubstate_obj::name,"name");
	HX_VISIT_MEMBER_NAME(CustomSubstate_obj::instance,"instance");
};

#endif

::hx::Class CustomSubstate_obj::__mClass;

static ::String CustomSubstate_obj_sStaticFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("instance",95,1f,e1,59),
	::String(null())
};

void CustomSubstate_obj::__register()
{
	CustomSubstate_obj _hx_dummy;
	CustomSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CustomSubstate",82,cd,df,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CustomSubstate_obj::__GetStatic;
	__mClass->mSetStaticField = &CustomSubstate_obj::__SetStatic;
	__mClass->mMarkFunc = CustomSubstate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CustomSubstate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CustomSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CustomSubstate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CustomSubstate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CustomSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CustomSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CustomSubstate_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_8557063211c1ebb8_3317_boot)
HXDLIN(3317)		name = HX_("unnamed",c0,86,15,93);
            	}
}

