#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_CustomSubstate
#include <CustomSubstate.h>
#endif
#ifndef INCLUDED_HScript
#include <HScript.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxRuntimeShader
#include <flixel/addons/display/FlxRuntimeShader.h>
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
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_filters_ShaderFilter
#include <openfl/filters/ShaderFilter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_42903921f08af638_3388_new,"HScript","new",0x62027ee5,"HScript.new","FunkinLua.hx",3388,0x00117937)
HX_DEFINE_STACK_FRAME(_hx_pos_42903921f08af638_3391_new,"HScript","new",0x62027ee5,"HScript.new","FunkinLua.hx",3391,0x00117937)
HX_DEFINE_STACK_FRAME(_hx_pos_42903921f08af638_3397_new,"HScript","new",0x62027ee5,"HScript.new","FunkinLua.hx",3397,0x00117937)
HX_DEFINE_STACK_FRAME(_hx_pos_42903921f08af638_3364_new,"HScript","new",0x62027ee5,"HScript.new","FunkinLua.hx",3364,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_42903921f08af638_3360_get_variables,"HScript","get_variables",0xeb689d53,"HScript.get_variables","FunkinLua.hx",3360,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_42903921f08af638_3408_execute,"HScript","execute",0xe9f5df3a,"HScript.execute","FunkinLua.hx",3408,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_42903921f08af638_3353_boot,"HScript","boot",0x58458a0d,"HScript.boot","FunkinLua.hx",3353,0x00117937)

void HScript_obj::__construct(){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(2)
            		void _hx_run(::String name, ::Dynamic value){
            			HX_GC_STACKFRAME(&_hx_pos_42903921f08af638_3388_new)
HXLINE(3388)			::PlayState_obj::instance->variables->set(name,value);
            		}
            		HX_END_LOCAL_FUNC2((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		 ::Dynamic _hx_run(::String name){
            			HX_GC_STACKFRAME(&_hx_pos_42903921f08af638_3391_new)
HXLINE(3392)			 ::Dynamic result = null();
HXLINE(3393)			if (::PlayState_obj::instance->variables->exists(name)) {
HXLINE(3393)				result = ::PlayState_obj::instance->variables->get(name);
            			}
HXLINE(3394)			return result;
            		}
            		HX_END_LOCAL_FUNC1(return)

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_2) HXARGC(1)
            		bool _hx_run(::String name){
            			HX_GC_STACKFRAME(&_hx_pos_42903921f08af638_3397_new)
HXLINE(3398)			if (::PlayState_obj::instance->variables->exists(name)) {
HXLINE(3400)				::PlayState_obj::instance->variables->remove(name);
HXLINE(3401)				return true;
            			}
HXLINE(3403)			return false;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_42903921f08af638_3364_new)
HXLINE(3365)		this->interp =  ::hscript::Interp_obj::__alloc( HX_CTX );
HXLINE(3366)		this->interp->variables->set(HX_("FlxG",b5,4b,97,2e),( ( ::Dynamic)(::hx::ClassOf< ::flixel::FlxG >()) ));
HXLINE(3367)		this->interp->variables->set(HX_("FlxSprite",f7,d5,84,45),( ( ::Dynamic)(::hx::ClassOf< ::flixel::FlxSprite >()) ));
HXLINE(3368)		this->interp->variables->set(HX_("FlxCamera",97,40,7b,39),( ( ::Dynamic)(::hx::ClassOf< ::flixel::FlxCamera >()) ));
HXLINE(3369)		this->interp->variables->set(HX_("FlxTimer",13,ca,0f,cd),( ( ::Dynamic)(::hx::ClassOf< ::flixel::util::FlxTimer >()) ));
HXLINE(3370)		this->interp->variables->set(HX_("FlxTween",b9,b4,4a,d6),( ( ::Dynamic)(::hx::ClassOf< ::flixel::tweens::FlxTween >()) ));
HXLINE(3371)		this->interp->variables->set(HX_("FlxEase",60,c5,64,d3),( ( ::Dynamic)(::hx::ClassOf< ::flixel::tweens::FlxEase >()) ));
HXLINE(3372)		this->interp->variables->set(HX_("PlayState",5d,83,c2,46),( ( ::Dynamic)(::hx::ClassOf< ::PlayState >()) ));
HXLINE(3373)		this->interp->variables->set(HX_("game",f2,f3,5e,44),::PlayState_obj::instance);
HXLINE(3374)		this->interp->variables->set(HX_("Paths",0e,7b,84,50),( ( ::Dynamic)(::hx::ClassOf< ::Paths >()) ));
HXLINE(3375)		this->interp->variables->set(HX_("Conductor",c7,77,a1,7b),( ( ::Dynamic)(::hx::ClassOf< ::Conductor >()) ));
HXLINE(3376)		this->interp->variables->set(HX_("ClientPrefs",c5,55,e0,8a),( ( ::Dynamic)(::hx::ClassOf< ::ClientPrefs >()) ));
HXLINE(3377)		this->interp->variables->set(HX_("Character",89,bb,a4,e3),( ( ::Dynamic)(::hx::ClassOf< ::Character >()) ));
HXLINE(3378)		this->interp->variables->set(HX_("Alphabet",d3,38,ea,fa),( ( ::Dynamic)(::hx::ClassOf< ::Alphabet >()) ));
HXLINE(3379)		this->interp->variables->set(HX_("CustomSubstate",82,cd,df,32),( ( ::Dynamic)(::hx::ClassOf< ::CustomSubstate >()) ));
HXLINE(3381)		this->interp->variables->set(HX_("FlxRuntimeShader",6b,22,33,11),( ( ::Dynamic)(::hx::ClassOf< ::flixel::addons::display::FlxRuntimeShader >()) ));
HXLINE(3383)		this->interp->variables->set(HX_("ShaderFilter",dd,08,30,bd),( ( ::Dynamic)(::hx::ClassOf< ::openfl::filters::ShaderFilter >()) ));
HXLINE(3384)		this->interp->variables->set(HX_("StringTools",6a,db,63,03),( ( ::Dynamic)(::hx::ClassOf< ::StringTools >()) ));
HXLINE(3386)		this->interp->variables->set(HX_("setVar",65,6c,71,6f), ::Dynamic(new _hx_Closure_0()));
HXLINE(3390)		this->interp->variables->set(HX_("getVar",f1,17,29,a3), ::Dynamic(new _hx_Closure_1()));
HXLINE(3396)		this->interp->variables->set(HX_("removeVar",03,fd,f4,ca), ::Dynamic(new _hx_Closure_2()));
            	}

Dynamic HScript_obj::__CreateEmpty() { return new HScript_obj; }

void *HScript_obj::_hx_vtable = 0;

Dynamic HScript_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HScript_obj > _hx_result = new HScript_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HScript_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b34a0cf;
}

 ::haxe::ds::StringMap HScript_obj::get_variables(){
            	HX_STACKFRAME(&_hx_pos_42903921f08af638_3360_get_variables)
HXDLIN(3360)		return this->interp->variables;
            	}


HX_DEFINE_DYNAMIC_FUNC0(HScript_obj,get_variables,return )

 ::Dynamic HScript_obj::execute(::String codeToRun){
            	HX_STACKFRAME(&_hx_pos_42903921f08af638_3408_execute)
HXLINE(3410)		::HScript_obj::parser->line = 1;
HXLINE(3411)		::HScript_obj::parser->allowTypes = true;
HXLINE(3412)		 ::hscript::Interp _hx_tmp = this->interp;
HXDLIN(3412)		return _hx_tmp->execute(::HScript_obj::parser->parseString(codeToRun,null()));
            	}


HX_DEFINE_DYNAMIC_FUNC1(HScript_obj,execute,return )

 ::hscript::Parser HScript_obj::parser;


::hx::ObjectPtr< HScript_obj > HScript_obj::__new() {
	::hx::ObjectPtr< HScript_obj > __this = new HScript_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HScript_obj > HScript_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HScript_obj *__this = (HScript_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HScript_obj), true, "HScript"));
	*(void **)__this = HScript_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HScript_obj::HScript_obj()
{
}

void HScript_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HScript);
	HX_MARK_MEMBER_NAME(interp,"interp");
	HX_MARK_END_CLASS();
}

void HScript_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(interp,"interp");
}

::hx::Val HScript_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"interp") ) { return ::hx::Val( interp ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"execute") ) { return ::hx::Val( execute_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"variables") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_variables() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_variables") ) { return ::hx::Val( get_variables_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool HScript_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"parser") ) { outValue = ( parser ); return true; }
	}
	return false;
}

::hx::Val HScript_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"interp") ) { interp=inValue.Cast<  ::hscript::Interp >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool HScript_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"parser") ) { parser=ioValue.Cast<  ::hscript::Parser >(); return true; }
	}
	return false;
}

void HScript_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("interp",d4,79,86,9e));
	outFields->push(HX_("variables",b7,e2,62,82));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo HScript_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::hscript::Interp */ ,(int)offsetof(HScript_obj,interp),HX_("interp",d4,79,86,9e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo HScript_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::hscript::Parser */ ,(void *) &HScript_obj::parser,HX_("parser",df,9c,88,ed)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String HScript_obj_sMemberFields[] = {
	HX_("interp",d4,79,86,9e),
	HX_("get_variables",8e,b6,c6,43),
	HX_("execute",35,0a,0d,cc),
	::String(null()) };

static void HScript_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HScript_obj::parser,"parser");
};

#ifdef HXCPP_VISIT_ALLOCS
static void HScript_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HScript_obj::parser,"parser");
};

#endif

::hx::Class HScript_obj::__mClass;

static ::String HScript_obj_sStaticFields[] = {
	HX_("parser",df,9c,88,ed),
	::String(null())
};

void HScript_obj::__register()
{
	HScript_obj _hx_dummy;
	HScript_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HScript",73,28,fe,2d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HScript_obj::__GetStatic;
	__mClass->mSetStaticField = &HScript_obj::__SetStatic;
	__mClass->mMarkFunc = HScript_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HScript_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(HScript_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< HScript_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = HScript_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HScript_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HScript_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void HScript_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_42903921f08af638_3353_boot)
HXDLIN(3353)		parser =  ::hscript::Parser_obj::__alloc( HX_CTX );
            	}
}

