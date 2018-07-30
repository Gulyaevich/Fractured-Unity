// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Linear
#include <Linear.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_battle_Ability
#include <battle/Ability.h>
#endif
#ifndef INCLUDED_battle_Active
#include <battle/Active.h>
#endif
#ifndef INCLUDED_battle_Unit
#include <battle/Unit.h>
#endif
#ifndef INCLUDED_battle_Utils
#include <battle/Utils.h>
#endif
#ifndef INCLUDED_battle_enums_StrikeType
#include <battle/enums/StrikeType.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c78dec622622a475_12_calcCrit,"battle.Utils","calcCrit",0x21f6b802,"battle.Utils.calcCrit","battle/Utils.hx",12,0x73df2444)
HX_LOCAL_STACK_FRAME(_hx_pos_c78dec622622a475_17_flipCrit,"battle.Utils","flipCrit",0xe01d9e1a,"battle.Utils.flipCrit","battle/Utils.hx",17,0x73df2444)
HX_LOCAL_STACK_FRAME(_hx_pos_c78dec622622a475_21_calcBoost,"battle.Utils","calcBoost",0x008c9e7b,"battle.Utils.calcBoost","battle/Utils.hx",21,0x73df2444)
HX_LOCAL_STACK_FRAME(_hx_pos_c78dec622622a475_35_flipMiss,"battle.Utils","flipMiss",0xe6b2f4bc,"battle.Utils.flipMiss","battle/Utils.hx",35,0x73df2444)
namespace battle{

void Utils_obj::__construct() { }

Dynamic Utils_obj::__CreateEmpty() { return new Utils_obj; }

void *Utils_obj::_hx_vtable = 0;

Dynamic Utils_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Utils_obj > _hx_result = new Utils_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Utils_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x02286c31;
}

int Utils_obj::calcCrit(int dhp, ::battle::Unit caster){
            	HX_STACKFRAME(&_hx_pos_c78dec622622a475_12_calcCrit)
HXDLIN(  12)		return ::Math_obj::round(caster->critDamage->apply(dhp));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utils_obj,calcCrit,return )

bool Utils_obj::flipCrit( ::battle::Unit caster){
            	HX_STACKFRAME(&_hx_pos_c78dec622622a475_17_flipCrit)
HXDLIN(  17)		Float _hx_tmp = ::Math_obj::random();
HXDLIN(  17)		return (_hx_tmp < caster->critChance->apply((int)1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utils_obj,flipCrit,return )

int Utils_obj::calcBoost(int dhp, ::battle::Unit caster, ::battle::Unit target){
            	HX_STACKFRAME(&_hx_pos_c78dec622622a475_21_calcBoost)
HXLINE(  22)		::Array< ::Dynamic> boostModifiers;
HXLINE(  24)		if ((dhp > (int)0)) {
HXLINE(  25)			boostModifiers = ::Array_obj< ::Dynamic>::__new(2)->init(0,target->healIn)->init(1,caster->healOut);
            		}
            		else {
HXLINE(  27)			boostModifiers = ::Array_obj< ::Dynamic>::__new(2)->init(0,target->damageIn)->init(1,caster->damageOut);
            		}
HXLINE(  29)		return ::Math_obj::round(::Linear_obj::combination(boostModifiers)->apply(dhp));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,calcBoost,return )

bool Utils_obj::flipMiss( ::battle::Unit target, ::battle::Unit caster, ::battle::Active ability){
            	HX_STACKFRAME(&_hx_pos_c78dec622622a475_35_flipMiss)
HXDLIN(  35)		 ::battle::enums::StrikeType _g = ability->strikeType;
HXDLIN(  35)		switch((int)(_hx_getEnumValueIndex(_g))){
            			case (int)0: {
HXLINE(  39)				Float _hx_tmp = (((Float)0.75) * caster->intellect);
HXDLIN(  39)				Float _hx_tmp1 = ((Float)_hx_tmp / (Float)(caster->intellect + target->intellect));
HXDLIN(  39)				return (_hx_tmp1 <= ::Math_obj::random());
            			}
            			break;
            			case (int)1: {
HXLINE(  37)				int caster1 = caster->intellect;
HXDLIN(  37)				Float _hx_tmp2 = ((Float)caster1 / (Float)(caster->intellect + target->intellect));
HXDLIN(  37)				return (_hx_tmp2 <= ::Math_obj::random());
            			}
            			break;
            			case (int)2: {
HXLINE(  38)				return false;
            			}
            			break;
            		}
HXLINE(  35)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Utils_obj,flipMiss,return )


Utils_obj::Utils_obj()
{
}

bool Utils_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"calcCrit") ) { outValue = calcCrit_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"flipCrit") ) { outValue = flipCrit_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"flipMiss") ) { outValue = flipMiss_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calcBoost") ) { outValue = calcBoost_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Utils_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Utils_obj_sStaticStorageInfo = 0;
#endif

static void Utils_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utils_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Utils_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utils_obj::__mClass,"__mClass");
};

#endif

hx::Class Utils_obj::__mClass;

static ::String Utils_obj_sStaticFields[] = {
	HX_HCSTRING("calcCrit","\x8f","\xaf","\xfa","\x3b"),
	HX_HCSTRING("flipCrit","\xa7","\x95","\x21","\xfa"),
	HX_HCSTRING("calcBoost","\x4e","\x42","\x01","\xaa"),
	HX_HCSTRING("flipMiss","\x49","\xec","\xb6","\x00"),
	::String(null())
};

void Utils_obj::__register()
{
	hx::Object *dummy = new Utils_obj;
	Utils_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("battle.Utils","\x5b","\x32","\x67","\xe2");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utils_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Utils_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Utils_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Utils_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Utils_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Utils_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Utils_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace battle