// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_graphic__Fonts_Damage
#include <graphic/_Fonts/Damage.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b65e1552985b9320_312_new,"graphic._Fonts.Damage","new",0x672c50a4,"graphic._Fonts.Damage.new","lime/_macros/AssetsMacro.hx",312,0xfe246b98)
HX_LOCAL_STACK_FRAME(_hx_pos_2f1a8d513abdc5e4_1_boot,"graphic._Fonts.Damage","boot",0xd7b33f6e,"graphic._Fonts.Damage.boot","?",1,0x0000003f)
namespace graphic{
namespace _Fonts{

void Damage_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b65e1552985b9320_312_new)
HXLINE( 314)		super::__construct(null());
HXLINE( 316)		this->_hx___fromBytes(::haxe::Resource_obj::getBytes(::graphic::_Fonts::Damage_obj::resourceName));
            	}

Dynamic Damage_obj::__CreateEmpty() { return new Damage_obj; }

void *Damage_obj::_hx_vtable = 0;

Dynamic Damage_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Damage_obj > _hx_result = new Damage_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Damage_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x6aed2e71) {
		if (inClassId<=(int)0x15d2e8d4) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x15d2e8d4;
		} else {
			return inClassId==(int)0x6aed2e71;
		}
	} else {
		return inClassId==(int)0x7d07fbf0;
	}
}

::String Damage_obj::resourceName;


hx::ObjectPtr< Damage_obj > Damage_obj::__new() {
	hx::ObjectPtr< Damage_obj > __this = new Damage_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Damage_obj > Damage_obj::__alloc(hx::Ctx *_hx_ctx) {
	Damage_obj *__this = (Damage_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Damage_obj), true, "graphic._Fonts.Damage"));
	*(void **)__this = Damage_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Damage_obj::Damage_obj()
{
}

bool Damage_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool Damage_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Damage_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Damage_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Damage_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Damage_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Damage_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Damage_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Damage_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Damage_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Damage_obj::resourceName,"resourceName");
};

#endif

hx::Class Damage_obj::__mClass;

static ::String Damage_obj_sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null())
};

void Damage_obj::__register()
{
	hx::Object *dummy = new Damage_obj;
	Damage_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("graphic._Fonts.Damage","\xb2","\x6e","\x4e","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Damage_obj::__GetStatic;
	__mClass->mSetStaticField = &Damage_obj::__SetStatic;
	__mClass->mMarkFunc = Damage_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Damage_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Damage_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Damage_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Damage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Damage_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Damage_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2f1a8d513abdc5e4_1_boot)
HXDLIN(   1)		resourceName = HX_("LIME_font_graphic__Fonts_Damage",4c,e9,63,2c);
            	}
}

} // end namespace graphic
} // end namespace _Fonts