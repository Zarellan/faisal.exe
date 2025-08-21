#include <hxcpp.h>

#ifndef INCLUDED_AlphaCharacter
#include <AlphaCharacter.h>
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_263_new,"AlphaCharacter","new",0xcdf30efd,"AlphaCharacter.new","Alphabet.hx",263,0xc2e40fcb)
static const Float _hx_array_data_b92ecc8b_1[] = {
	(Float)0,(Float)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_391_set_image,"AlphaCharacter","set_image",0xe6aefa1b,"AlphaCharacter.set_image","Alphabet.hx",391,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_415_updateLetterOffset,"AlphaCharacter","updateLetterOffset",0x9dbb5ec5,"AlphaCharacter.updateLetterOffset","Alphabet.hx",415,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_385_isTypeAlphabet,"AlphaCharacter","isTypeAlphabet",0x16f1111a,"AlphaCharacter.isTypeAlphabet","Alphabet.hx",385,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_271_boot,"AlphaCharacter","boot",0x5ed30ef5,"AlphaCharacter.boot","Alphabet.hx",271,0xc2e40fcb)
static const Float _hx_array_data_b92ecc8b_6[] = {
	(Float)0,(Float)2,
};
static const Float _hx_array_data_b92ecc8b_7[] = {
	(Float)0,(Float)5,
};
static const Float _hx_array_data_b92ecc8b_8[] = {
	(Float)0,(Float)5,
};
static const Float _hx_array_data_b92ecc8b_9[] = {
	(Float)0,(Float)28,
};
static const Float _hx_array_data_b92ecc8b_10[] = {
	(Float)0,(Float)7,
};
static const Float _hx_array_data_b92ecc8b_11[] = {
	(Float)0,(Float)-12,
};
static const Float _hx_array_data_b92ecc8b_12[] = {
	(Float)0,(Float)16,
};
static const Float _hx_array_data_b92ecc8b_13[] = {
	(Float)0,(Float)-30,
};
static const Float _hx_array_data_b92ecc8b_14[] = {
	(Float)0,(Float)4,
};
static const Float _hx_array_data_b92ecc8b_15[] = {
	(Float)0,(Float)4,
};
static const Float _hx_array_data_b92ecc8b_16[] = {
	(Float)0,(Float)32,
};
static const Float _hx_array_data_b92ecc8b_17[] = {
	(Float)0,(Float)32,
};
static const Float _hx_array_data_b92ecc8b_18[] = {
	(Float)0,(Float)0,
};
static const Float _hx_array_data_b92ecc8b_19[] = {
	(Float)0,(Float)10,
};
static const Float _hx_array_data_b92ecc8b_20[] = {
	(Float)0,(Float)4,
};
static const Float _hx_array_data_b92ecc8b_21[] = {
	(Float)0,(Float)-44,
};
static const Float _hx_array_data_b92ecc8b_22[] = {
	(Float)0,(Float)24,
};
static const Float _hx_array_data_b92ecc8b_23[] = {
	(Float)0,(Float)-5,
};
static const Float _hx_array_data_b92ecc8b_24[] = {
	(Float)0,(Float)24,
};
static const Float _hx_array_data_b92ecc8b_25[] = {
	(Float)0,(Float)-5,
};
static const Float _hx_array_data_b92ecc8b_26[] = {
	(Float)0,(Float)2,
};
static const Float _hx_array_data_b92ecc8b_27[] = {
	(Float)0,(Float)-2,
};
static const Float _hx_array_data_b92ecc8b_28[] = {
	(Float)0,(Float)-1,
};
static const Float _hx_array_data_b92ecc8b_29[] = {
	(Float)0,(Float)28,
};
static const Float _hx_array_data_b92ecc8b_30[] = {
	(Float)0,(Float)-6,
};
static const Float _hx_array_data_b92ecc8b_31[] = {
	(Float)0,(Float)0,
};
static const Float _hx_array_data_b92ecc8b_32[] = {
	(Float)0,(Float)0,
};
static const Float _hx_array_data_b92ecc8b_33[] = {
	(Float)0,(Float)16,
};

void AlphaCharacter_obj::__construct(Float x,Float y,::String character,bool bold, ::Alphabet parent){
            	HX_GC_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_263_new)
HXLINE( 325)		this->rowWidth = ((Float)0);
HXLINE( 324)		this->row = 0;
HXLINE( 322)		this->spawnScale =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 321)		this->spawnPos =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 320)		this->letterOffset = ::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_1,2);
HXLINE( 319)		this->alignOffset = ((Float)0);
HXLINE( 328)		super::__construct(x,y,null());
HXLINE( 329)		this->parent = parent;
HXLINE( 330)		this->set_image(HX_("alphabet",b3,7c,38,21));
HXLINE( 331)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 333)		 ::Dynamic curLetter = ::AlphaCharacter_obj::allLetters->get(HX_("?",3f,00,00,00));
HXLINE( 334)		::String lowercase = character.toLowerCase();
HXLINE( 335)		if (::AlphaCharacter_obj::allLetters->exists(lowercase)) {
HXLINE( 335)			curLetter = ::AlphaCharacter_obj::allLetters->get(lowercase);
            		}
HXLINE( 337)		::String suffix = HX_("",00,00,00,00);
HXLINE( 338)		if (!(bold)) {
HXLINE( 340)			if (::AlphaCharacter_obj::isTypeAlphabet(lowercase)) {
HXLINE( 342)				if ((lowercase != character)) {
HXLINE( 343)					suffix = HX_(" uppercase",f2,8c,8d,f0);
            				}
            				else {
HXLINE( 345)					suffix = HX_(" lowercase",11,a9,f4,6f);
            				}
            			}
            			else {
HXLINE( 349)				suffix = HX_(" normal",47,4a,18,63);
HXLINE( 350)				bool _hx_tmp;
HXDLIN( 350)				if (::hx::IsNotNull( curLetter )) {
HXLINE( 350)					_hx_tmp = ::hx::IsNotNull( curLetter->__Field(HX_("offsets",80,09,65,d7),::hx::paccDynamic) );
            				}
            				else {
HXLINE( 350)					_hx_tmp = false;
            				}
HXDLIN( 350)				if (_hx_tmp) {
HXLINE( 352)					this->letterOffset[0] = ( (Float)( ::Dynamic(curLetter->__Field(HX_("offsets",80,09,65,d7),::hx::paccDynamic))->__GetItem(0)) );
HXLINE( 353)					this->letterOffset[1] = ( (Float)( ::Dynamic(curLetter->__Field(HX_("offsets",80,09,65,d7),::hx::paccDynamic))->__GetItem(1)) );
            				}
            			}
            		}
            		else {
HXLINE( 359)			suffix = HX_(" bold",a5,11,ee,ad);
HXLINE( 360)			bool _hx_tmp;
HXDLIN( 360)			if (::hx::IsNotNull( curLetter )) {
HXLINE( 360)				_hx_tmp = ::hx::IsNotNull( curLetter->__Field(HX_("offsetsBold",25,77,5c,68),::hx::paccDynamic) );
            			}
            			else {
HXLINE( 360)				_hx_tmp = false;
            			}
HXDLIN( 360)			if (_hx_tmp) {
HXLINE( 362)				this->letterOffset[0] = ( (Float)( ::Dynamic(curLetter->__Field(HX_("offsetsBold",25,77,5c,68),::hx::paccDynamic))->__GetItem(0)) );
HXLINE( 363)				this->letterOffset[1] = ( (Float)( ::Dynamic(curLetter->__Field(HX_("offsetsBold",25,77,5c,68),::hx::paccDynamic))->__GetItem(1)) );
            			}
            		}
HXLINE( 367)		::String alphaAnim = lowercase;
HXLINE( 368)		bool _hx_tmp;
HXDLIN( 368)		if (::hx::IsNotNull( curLetter )) {
HXLINE( 368)			_hx_tmp = ::hx::IsNotNull( curLetter->__Field(HX_("anim",11,86,71,40),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 368)			_hx_tmp = false;
            		}
HXDLIN( 368)		if (_hx_tmp) {
HXLINE( 368)			alphaAnim = ( (::String)(curLetter->__Field(HX_("anim",11,86,71,40),::hx::paccDynamic)) );
            		}
HXLINE( 370)		::String anim = (alphaAnim + suffix);
HXLINE( 371)		this->animation->addByPrefix(anim,anim,24,null(),null(),null());
HXLINE( 372)		this->animation->play(anim,true,null(),null());
HXLINE( 373)		if (::hx::IsNull( this->animation->_curAnim )) {
HXLINE( 375)			if ((suffix != HX_(" bold",a5,11,ee,ad))) {
HXLINE( 375)				suffix = HX_(" normal",47,4a,18,63);
            			}
HXLINE( 376)			anim = (HX_("question",26,9b,b0,26) + suffix);
HXLINE( 377)			this->animation->addByPrefix(anim,anim,24,null(),null(),null());
HXLINE( 378)			this->animation->play(anim,true,null(),null());
            		}
HXLINE( 380)		this->updateHitbox();
HXLINE( 381)		this->updateLetterOffset();
            	}

Dynamic AlphaCharacter_obj::__CreateEmpty() { return new AlphaCharacter_obj; }

void *AlphaCharacter_obj::_hx_vtable = 0;

Dynamic AlphaCharacter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AlphaCharacter_obj > _hx_result = new AlphaCharacter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool AlphaCharacter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x10d46877) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x10d46877;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

::String AlphaCharacter_obj::set_image(::String name){
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_391_set_image)
HXLINE( 392)		::String lastAnim = null();
HXLINE( 393)		if (::hx::IsNotNull( this->animation )) {
HXLINE( 395)			lastAnim = this->animation->get_name();
            		}
HXLINE( 397)		this->image = name;
HXLINE( 398)		::String library = null();
HXDLIN( 398)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(name,null());
HXDLIN( 398)		bool xmlExists = false;
HXDLIN( 398)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 398)			xmlExists = true;
            		}
HXDLIN( 398)		 ::Dynamic _hx_tmp;
HXDLIN( 398)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 398)			_hx_tmp = imageLoaded;
            		}
            		else {
HXLINE( 398)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(name,library);
HXDLIN( 398)			_hx_tmp = returnAsset;
            		}
HXDLIN( 398)		::String _hx_tmp1;
HXDLIN( 398)		if (xmlExists) {
HXLINE( 398)			_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE( 398)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + name) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN( 398)		this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 399)		this->scale->set_x(this->parent->scaleX);
HXLINE( 400)		this->scale->set_y(this->parent->scaleY);
HXLINE( 401)		this->alignOffset = ( (Float)(0) );
HXLINE( 403)		if (::hx::IsNotNull( lastAnim )) {
HXLINE( 405)			this->animation->addByPrefix(lastAnim,lastAnim,24,null(),null(),null());
HXLINE( 406)			this->animation->play(lastAnim,true,null(),null());
HXLINE( 408)			this->updateHitbox();
HXLINE( 409)			this->updateLetterOffset();
            		}
HXLINE( 411)		return name;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AlphaCharacter_obj,set_image,return )

void AlphaCharacter_obj::updateLetterOffset(){
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_415_updateLetterOffset)
HXLINE( 416)		if (::hx::IsNull( this->animation->_curAnim )) {
HXLINE( 416)			return;
            		}
HXLINE( 418)		if (!(::StringTools_obj::endsWith(this->animation->_curAnim->name,HX_("bold",85,81,1b,41)))) {
HXLINE( 420)			 ::flixel::math::FlxPoint fh = this->offset;
HXDLIN( 420)			Float fh1 = fh->y;
HXDLIN( 420)			fh->set_y((fh1 + -((( (Float)(110) ) - this->get_height()))));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(AlphaCharacter_obj,updateLetterOffset,(void))

 ::haxe::ds::StringMap AlphaCharacter_obj::allLetters;

bool AlphaCharacter_obj::isTypeAlphabet(::String c){
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_385_isTypeAlphabet)
HXLINE( 386)		int ascii = c.cca(0);
HXLINE( 387)		bool _hx_tmp;
HXDLIN( 387)		if ((ascii >= 65)) {
HXLINE( 387)			_hx_tmp = (ascii <= 90);
            		}
            		else {
HXLINE( 387)			_hx_tmp = false;
            		}
HXDLIN( 387)		if (!(_hx_tmp)) {
HXLINE( 387)			if ((ascii >= 97)) {
HXLINE( 387)				return (ascii <= 122);
            			}
            			else {
HXLINE( 387)				return false;
            			}
            		}
            		else {
HXLINE( 387)			return true;
            		}
HXDLIN( 387)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AlphaCharacter_obj,isTypeAlphabet,return )


::hx::ObjectPtr< AlphaCharacter_obj > AlphaCharacter_obj::__new(Float x,Float y,::String character,bool bold, ::Alphabet parent) {
	::hx::ObjectPtr< AlphaCharacter_obj > __this = new AlphaCharacter_obj();
	__this->__construct(x,y,character,bold,parent);
	return __this;
}

::hx::ObjectPtr< AlphaCharacter_obj > AlphaCharacter_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,::String character,bool bold, ::Alphabet parent) {
	AlphaCharacter_obj *__this = (AlphaCharacter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AlphaCharacter_obj), true, "AlphaCharacter"));
	*(void **)__this = AlphaCharacter_obj::_hx_vtable;
	__this->__construct(x,y,character,bold,parent);
	return __this;
}

AlphaCharacter_obj::AlphaCharacter_obj()
{
}

void AlphaCharacter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AlphaCharacter);
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(alignOffset,"alignOffset");
	HX_MARK_MEMBER_NAME(letterOffset,"letterOffset");
	HX_MARK_MEMBER_NAME(spawnPos,"spawnPos");
	HX_MARK_MEMBER_NAME(spawnScale,"spawnScale");
	HX_MARK_MEMBER_NAME(row,"row");
	HX_MARK_MEMBER_NAME(rowWidth,"rowWidth");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AlphaCharacter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(alignOffset,"alignOffset");
	HX_VISIT_MEMBER_NAME(letterOffset,"letterOffset");
	HX_VISIT_MEMBER_NAME(spawnPos,"spawnPos");
	HX_VISIT_MEMBER_NAME(spawnScale,"spawnScale");
	HX_VISIT_MEMBER_NAME(row,"row");
	HX_VISIT_MEMBER_NAME(rowWidth,"rowWidth");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val AlphaCharacter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"row") ) { return ::hx::Val( row ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return ::hx::Val( image ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"spawnPos") ) { return ::hx::Val( spawnPos ); }
		if (HX_FIELD_EQ(inName,"rowWidth") ) { return ::hx::Val( rowWidth ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_image") ) { return ::hx::Val( set_image_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"spawnScale") ) { return ::hx::Val( spawnScale ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alignOffset") ) { return ::hx::Val( alignOffset ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"letterOffset") ) { return ::hx::Val( letterOffset ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateLetterOffset") ) { return ::hx::Val( updateLetterOffset_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AlphaCharacter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"allLetters") ) { outValue = ( allLetters ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isTypeAlphabet") ) { outValue = isTypeAlphabet_dyn(); return true; }
	}
	return false;
}

::hx::Val AlphaCharacter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"row") ) { row=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_image(inValue.Cast< ::String >()) );image=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"spawnPos") ) { spawnPos=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rowWidth") ) { rowWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"spawnScale") ) { spawnScale=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alignOffset") ) { alignOffset=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"letterOffset") ) { letterOffset=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AlphaCharacter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"allLetters") ) { allLetters=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void AlphaCharacter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("image",5b,1f,69,bd));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("alignOffset",38,44,0e,ef));
	outFields->push(HX_("letterOffset",19,69,ee,f5));
	outFields->push(HX_("spawnPos",19,ce,4c,79));
	outFields->push(HX_("spawnScale",4f,2a,e7,b2));
	outFields->push(HX_("row",1a,e2,56,00));
	outFields->push(HX_("rowWidth",8c,65,4d,72));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AlphaCharacter_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(AlphaCharacter_obj,image),HX_("image",5b,1f,69,bd)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(AlphaCharacter_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsFloat,(int)offsetof(AlphaCharacter_obj,alignOffset),HX_("alignOffset",38,44,0e,ef)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(AlphaCharacter_obj,letterOffset),HX_("letterOffset",19,69,ee,f5)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(AlphaCharacter_obj,spawnPos),HX_("spawnPos",19,ce,4c,79)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(AlphaCharacter_obj,spawnScale),HX_("spawnScale",4f,2a,e7,b2)},
	{::hx::fsInt,(int)offsetof(AlphaCharacter_obj,row),HX_("row",1a,e2,56,00)},
	{::hx::fsFloat,(int)offsetof(AlphaCharacter_obj,rowWidth),HX_("rowWidth",8c,65,4d,72)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo AlphaCharacter_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &AlphaCharacter_obj::allLetters,HX_("allLetters",ac,a1,37,cd)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String AlphaCharacter_obj_sMemberFields[] = {
	HX_("image",5b,1f,69,bd),
	HX_("parent",2a,05,7e,ed),
	HX_("alignOffset",38,44,0e,ef),
	HX_("letterOffset",19,69,ee,f5),
	HX_("spawnPos",19,ce,4c,79),
	HX_("spawnScale",4f,2a,e7,b2),
	HX_("row",1a,e2,56,00),
	HX_("rowWidth",8c,65,4d,72),
	HX_("set_image",be,67,63,e4),
	HX_("updateLetterOffset",c2,a4,fb,6d),
	::String(null()) };

static void AlphaCharacter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AlphaCharacter_obj::allLetters,"allLetters");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AlphaCharacter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AlphaCharacter_obj::allLetters,"allLetters");
};

#endif

::hx::Class AlphaCharacter_obj::__mClass;

static ::String AlphaCharacter_obj_sStaticFields[] = {
	HX_("allLetters",ac,a1,37,cd),
	HX_("isTypeAlphabet",97,54,3d,ff),
	::String(null())
};

void AlphaCharacter_obj::__register()
{
	AlphaCharacter_obj _hx_dummy;
	AlphaCharacter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AlphaCharacter",8b,cc,2e,b9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AlphaCharacter_obj::__GetStatic;
	__mClass->mSetStaticField = &AlphaCharacter_obj::__SetStatic;
	__mClass->mMarkFunc = AlphaCharacter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AlphaCharacter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AlphaCharacter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AlphaCharacter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AlphaCharacter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AlphaCharacter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AlphaCharacter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AlphaCharacter_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::haxe::ds::StringMap _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_271_boot)
HXDLIN( 271)			 ::haxe::ds::StringMap _g =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value = null();
HXDLIN( 271)				_g->set(HX_("a",61,00,00,00),value);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value1 = null();
HXDLIN( 271)				_g->set(HX_("b",62,00,00,00),value1);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value2 = null();
HXDLIN( 271)				_g->set(HX_("c",63,00,00,00),value2);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value3 = null();
HXDLIN( 271)				_g->set(HX_("d",64,00,00,00),value3);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value4 = null();
HXDLIN( 271)				_g->set(HX_("e",65,00,00,00),value4);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value5 = null();
HXDLIN( 271)				_g->set(HX_("f",66,00,00,00),value5);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value6 = null();
HXDLIN( 271)				_g->set(HX_("g",67,00,00,00),value6);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value7 = null();
HXDLIN( 271)				_g->set(HX_("h",68,00,00,00),value7);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value8 = null();
HXDLIN( 271)				_g->set(HX_("i",69,00,00,00),value8);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value9 = null();
HXDLIN( 271)				_g->set(HX_("j",6a,00,00,00),value9);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value10 = null();
HXDLIN( 271)				_g->set(HX_("k",6b,00,00,00),value10);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value11 = null();
HXDLIN( 271)				_g->set(HX_("l",6c,00,00,00),value11);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value12 = null();
HXDLIN( 271)				_g->set(HX_("m",6d,00,00,00),value12);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value13 = null();
HXDLIN( 271)				_g->set(HX_("n",6e,00,00,00),value13);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value14 = null();
HXDLIN( 271)				_g->set(HX_("o",6f,00,00,00),value14);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value15 = null();
HXDLIN( 271)				_g->set(HX_("p",70,00,00,00),value15);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value16 = null();
HXDLIN( 271)				_g->set(HX_("q",71,00,00,00),value16);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value17 = null();
HXDLIN( 271)				_g->set(HX_("r",72,00,00,00),value17);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value18 = null();
HXDLIN( 271)				_g->set(HX_("s",73,00,00,00),value18);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value19 = null();
HXDLIN( 271)				_g->set(HX_("t",74,00,00,00),value19);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value20 = null();
HXDLIN( 271)				_g->set(HX_("u",75,00,00,00),value20);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value21 = null();
HXDLIN( 271)				_g->set(HX_("v",76,00,00,00),value21);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value22 = null();
HXDLIN( 271)				_g->set(HX_("w",77,00,00,00),value22);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value23 = null();
HXDLIN( 271)				_g->set(HX_("x",78,00,00,00),value23);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value24 = null();
HXDLIN( 271)				_g->set(HX_("y",79,00,00,00),value24);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value25 = null();
HXDLIN( 271)				_g->set(HX_("z",7a,00,00,00),value25);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value26 = null();
HXDLIN( 271)				_g->set(HX_("0",30,00,00,00),value26);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value27 = null();
HXDLIN( 271)				_g->set(HX_("1",31,00,00,00),value27);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value28 = null();
HXDLIN( 271)				_g->set(HX_("2",32,00,00,00),value28);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value29 = null();
HXDLIN( 271)				_g->set(HX_("3",33,00,00,00),value29);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value30 = null();
HXDLIN( 271)				_g->set(HX_("4",34,00,00,00),value30);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value31 = null();
HXDLIN( 271)				_g->set(HX_("5",35,00,00,00),value31);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value32 = null();
HXDLIN( 271)				_g->set(HX_("6",36,00,00,00),value32);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value33 = null();
HXDLIN( 271)				_g->set(HX_("7",37,00,00,00),value33);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value34 = null();
HXDLIN( 271)				_g->set(HX_("8",38,00,00,00),value34);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value35 = null();
HXDLIN( 271)				_g->set(HX_("9",39,00,00,00),value35);
            			}
HXDLIN( 271)			_g->set(HX_("&",26,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_6,2))));
HXDLIN( 271)			_g->set(HX_("(",28,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_7,2))));
HXDLIN( 271)			_g->set(HX_(")",29,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_8,2))));
HXDLIN( 271)			_g->set(HX_("*",2a,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_9,2))));
HXDLIN( 271)			_g->set(HX_("+",2b,00,00,00), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_10,2))
            				->setFixed(1,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_11,2))));
HXDLIN( 271)			_g->set(HX_("-",2d,00,00,00), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_12,2))
            				->setFixed(1,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_13,2))));
HXDLIN( 271)			_g->set(HX_("<",3c,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_14,2))));
HXDLIN( 271)			_g->set(HX_(">",3e,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_15,2))));
HXDLIN( 271)			_g->set(HX_("'",27,00,00,00), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_16,2))
            				->setFixed(1,HX_("anim",11,86,71,40),HX_("apostrophe",ef,32,a1,ef))));
HXDLIN( 271)			_g->set(HX_("\"",22,00,00,00), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_17,2))
            				->setFixed(1,HX_("anim",11,86,71,40),HX_("quote",3c,23,f2,5d))
            				->setFixed(2,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_18,2))));
HXDLIN( 271)			_g->set(HX_("!",21,00,00,00), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("anim",11,86,71,40),HX_("exclamation",ed,a7,af,2c))
            				->setFixed(1,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_19,2))));
HXDLIN( 271)			_g->set(HX_("?",3f,00,00,00), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("anim",11,86,71,40),HX_("question",26,9b,b0,26))
            				->setFixed(1,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_20,2))));
HXDLIN( 271)			_g->set(HX_(".",2e,00,00,00), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("anim",11,86,71,40),HX_("period",01,61,1b,3b))
            				->setFixed(1,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_21,2))));
HXDLIN( 271)			_g->set(HX_W(u"\u275d",06c2,00ac), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_22,2))
            				->setFixed(1,HX_("anim",11,86,71,40),HX_("start quote",fe,98,af,6c))
            				->setFixed(2,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_23,2))));
HXDLIN( 271)			_g->set(HX_W(u"\u275e",06c3,00ac), ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_24,2))
            				->setFixed(1,HX_("anim",11,86,71,40),HX_("end quote",37,89,ab,34))
            				->setFixed(2,HX_("offsetsBold",25,77,5c,68),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_25,2))));
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value36 = null();
HXDLIN( 271)				_g->set(HX_("_",5f,00,00,00),value36);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value37 = null();
HXDLIN( 271)				_g->set(HX_("#",23,00,00,00),value37);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value38 = null();
HXDLIN( 271)				_g->set(HX_("$",24,00,00,00),value38);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value39 = null();
HXDLIN( 271)				_g->set(HX_("%",25,00,00,00),value39);
            			}
HXDLIN( 271)			_g->set(HX_(":",3a,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_26,2))));
HXDLIN( 271)			_g->set(HX_(";",3b,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_27,2))));
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value40 = null();
HXDLIN( 271)				_g->set(HX_("@",40,00,00,00),value40);
            			}
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value41 = null();
HXDLIN( 271)				_g->set(HX_("[",5b,00,00,00),value41);
            			}
HXDLIN( 271)			_g->set(HX_("]",5d,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_28,2))));
HXDLIN( 271)			_g->set(HX_("^",5e,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_29,2))));
HXDLIN( 271)			_g->set(HX_(",",2c,00,00,00), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_30,2))
            				->setFixed(1,HX_("anim",11,86,71,40),HX_("comma",d5,31,5d,4a))));
HXDLIN( 271)			_g->set(HX_("\\",5c,00,00,00), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_31,2))
            				->setFixed(1,HX_("anim",11,86,71,40),HX_("back slash",84,bd,22,54))));
HXDLIN( 271)			_g->set(HX_("/",2f,00,00,00), ::Dynamic(::hx::Anon_obj::Create(2)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_32,2))
            				->setFixed(1,HX_("anim",11,86,71,40),HX_("forward slash",a2,4f,db,00))));
HXDLIN( 271)			{
HXDLIN( 271)				 ::Dynamic value42 = null();
HXDLIN( 271)				_g->set(HX_("|",7c,00,00,00),value42);
            			}
HXDLIN( 271)			_g->set(HX_("~",7e,00,00,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("offsets",80,09,65,d7),::Array_obj< Float >::fromData( _hx_array_data_b92ecc8b_33,2))));
HXDLIN( 271)			return _g;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_271_boot)
HXDLIN( 271)		allLetters = ( ( ::haxe::ds::StringMap)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

