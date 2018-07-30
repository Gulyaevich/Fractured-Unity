// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Element
#include <Element.h>
#endif
#ifndef INCLUDED_ID
#include <ID.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_battle_IEffectHandler
#include <battle/IEffectHandler.h>
#endif
#ifndef INCLUDED_battle_IMutableModel
#include <battle/IMutableModel.h>
#endif
#ifndef INCLUDED_battle_data_BattleEvent
#include <battle/data/BattleEvent.h>
#endif
#ifndef INCLUDED_battle_data_Passives
#include <battle/data/Passives.h>
#endif
#ifndef INCLUDED_battle_enums_Source
#include <battle/enums/Source.h>
#endif
#ifndef INCLUDED_battle_struct_UnitCoords
#include <battle/struct/UnitCoords.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_49c81b4baaf3671e_36_init,"battle.data.Passives","init",0x84e9bfe4,"battle.data.Passives.init","battle/data/Passives.hx",36,0x88b98284)
HX_LOCAL_STACK_FRAME(_hx_pos_49c81b4baaf3671e_46_handle,"battle.data.Passives","handle",0x0375e57c,"battle.data.Passives.handle","battle/data/Passives.hx",46,0x88b98284)
HX_LOCAL_STACK_FRAME(_hx_pos_49c81b4baaf3671e_62_strikeback,"battle.data.Passives","strikeback",0x0504dd2d,"battle.data.Passives.strikeback","battle/data/Passives.hx",62,0x88b98284)
HX_LOCAL_STACK_FRAME(_hx_pos_49c81b4baaf3671e_69_thunderbirdSoul,"battle.data.Passives","thunderbirdSoul",0x2b9b4e9c,"battle.data.Passives.thunderbirdSoul","battle/data/Passives.hx",69,0x88b98284)
HX_LOCAL_STACK_FRAME(_hx_pos_49c81b4baaf3671e_29_boot,"battle.data.Passives","boot",0x804a0906,"battle.data.Passives.boot","battle/data/Passives.hx",29,0x88b98284)
namespace battle{
namespace data{

void Passives_obj::__construct() { }

Dynamic Passives_obj::__CreateEmpty() { return new Passives_obj; }

void *Passives_obj::_hx_vtable = 0;

Dynamic Passives_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Passives_obj > _hx_result = new Passives_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Passives_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0e14b02a;
}

::Dynamic Passives_obj::model;

bool Passives_obj::flag;

 ::battle::data::BattleEvent Passives_obj::event;

::Dynamic Passives_obj::caller;

void Passives_obj::init(::Dynamic m){
            	HX_STACKFRAME(&_hx_pos_49c81b4baaf3671e_36_init)
HXDLIN(  36)		if (::battle::data::Passives_obj::flag) {
HXLINE(  38)			::battle::data::Passives_obj::model = m;
HXLINE(  39)			::battle::data::Passives_obj::flag = false;
            		}
            		else {
HXLINE(  42)			HX_STACK_DO_THROW(HX_("Attempt to re-init",d8,b9,98,2d));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Passives_obj,init,(void))

void Passives_obj::handle( ::ID id, ::battle::data::BattleEvent e,::Dynamic handlerCaller){
            	HX_STACKFRAME(&_hx_pos_49c81b4baaf3671e_46_handle)
HXLINE(  47)		::battle::data::Passives_obj::event = e;
HXLINE(  48)		::battle::data::Passives_obj::caller = handlerCaller;
HXLINE(  50)		switch((int)(_hx_getEnumValueIndex(id))){
            			case (int)1: {
HXLINE(  53)				::battle::data::Passives_obj::strikeback();
            			}
            			break;
            			case (int)9: {
HXLINE(  55)				::battle::data::Passives_obj::thunderbirdSoul();
            			}
            			break;
            			default:{
HXLINE(  57)				HX_STACK_DO_THROW((HX_("Passives->handle() exception: Invalid ID: ",65,46,b2,61) + ::Type_obj::enumConstructor(id)));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Passives_obj,handle,(void))

void Passives_obj::strikeback(){
            	HX_STACKFRAME(&_hx_pos_49c81b4baaf3671e_62_strikeback)
HXLINE(  63)		 ::battle::_hx_struct::UnitCoords owner = ::battle::IEffectHandler_obj::getTarget(::battle::data::Passives_obj::caller);
HXLINE(  65)		::Dynamic _hx_tmp = ::battle::data::Passives_obj::model;
HXDLIN(  65)		::battle::IMutableModel_obj::castBuff(_hx_tmp,::ID_obj::BuffLgStrikeback_dyn(),owner,::battle::_hx_struct::UnitCoords_obj::nullC(),(int)1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Passives_obj,strikeback,(void))

void Passives_obj::thunderbirdSoul(){
            	HX_STACKFRAME(&_hx_pos_49c81b4baaf3671e_69_thunderbirdSoul)
HXLINE(  70)		 ::battle::_hx_struct::UnitCoords owner = ::battle::IEffectHandler_obj::getCaster(::battle::data::Passives_obj::caller);
HXLINE(  71)		int dmg = -(::Math_obj::round(::battle::IEffectHandler_obj::getDelta(::battle::data::Passives_obj::caller)));
HXLINE(  73)		::battle::IMutableModel_obj::changeHP(::battle::data::Passives_obj::model,owner,owner,dmg,::Element_obj::Lightning_dyn(),::battle::enums::Source_obj::Buff_dyn());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Passives_obj,thunderbirdSoul,(void))


Passives_obj::Passives_obj()
{
}

bool Passives_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flag") ) { outValue = ( flag ); return true; }
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { outValue = ( model ); return true; }
		if (HX_FIELD_EQ(inName,"event") ) { outValue = ( event ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"caller") ) { outValue = ( caller ); return true; }
		if (HX_FIELD_EQ(inName,"handle") ) { outValue = handle_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"strikeback") ) { outValue = strikeback_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"thunderbirdSoul") ) { outValue = thunderbirdSoul_dyn(); return true; }
	}
	return false;
}

bool Passives_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flag") ) { flag=ioValue.Cast< bool >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { model=ioValue.Cast< ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"event") ) { event=ioValue.Cast<  ::battle::data::BattleEvent >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"caller") ) { caller=ioValue.Cast< ::Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Passives_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Passives_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::battle::IMutableModel*/ ,(void *) &Passives_obj::model,HX_HCSTRING("model","\xa9","\x23","\x58","\x0c")},
	{hx::fsBool,(void *) &Passives_obj::flag,HX_HCSTRING("flag","\xac","\x0b","\xbe","\x43")},
	{hx::fsObject /*::battle::data::BattleEvent*/ ,(void *) &Passives_obj::event,HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75")},
	{hx::fsObject /*::battle::IEffectHandler*/ ,(void *) &Passives_obj::caller,HX_HCSTRING("caller","\x8b","\x54","\xe8","\xb6")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Passives_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Passives_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Passives_obj::model,"model");
	HX_MARK_MEMBER_NAME(Passives_obj::flag,"flag");
	HX_MARK_MEMBER_NAME(Passives_obj::event,"event");
	HX_MARK_MEMBER_NAME(Passives_obj::caller,"caller");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Passives_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Passives_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Passives_obj::model,"model");
	HX_VISIT_MEMBER_NAME(Passives_obj::flag,"flag");
	HX_VISIT_MEMBER_NAME(Passives_obj::event,"event");
	HX_VISIT_MEMBER_NAME(Passives_obj::caller,"caller");
};

#endif

hx::Class Passives_obj::__mClass;

static ::String Passives_obj_sStaticFields[] = {
	HX_HCSTRING("model","\xa9","\x23","\x58","\x0c"),
	HX_HCSTRING("flag","\xac","\x0b","\xbe","\x43"),
	HX_HCSTRING("event","\x1a","\xc8","\xc4","\x75"),
	HX_HCSTRING("caller","\x8b","\x54","\xe8","\xb6"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("strikeback","\x59","\x01","\x55","\xae"),
	HX_HCSTRING("thunderbirdSoul","\xf0","\x8a","\xfc","\x30"),
	::String(null())
};

void Passives_obj::__register()
{
	hx::Object *dummy = new Passives_obj;
	Passives_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("battle.data.Passives","\x1a","\x0c","\x5c","\xfd");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Passives_obj::__GetStatic;
	__mClass->mSetStaticField = &Passives_obj::__SetStatic;
	__mClass->mMarkFunc = Passives_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Passives_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Passives_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Passives_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Passives_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Passives_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Passives_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_49c81b4baaf3671e_29_boot)
HXDLIN(  29)		flag = true;
            	}
}

} // end namespace battle
} // end namespace data