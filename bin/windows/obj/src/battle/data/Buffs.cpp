// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ID
#include <ID.h>
#endif
#ifndef INCLUDED_Linear
#include <Linear.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_battle_IMutableModel
#include <battle/IMutableModel.h>
#endif
#ifndef INCLUDED_battle_Unit
#include <battle/Unit.h>
#endif
#ifndef INCLUDED_battle_data_Buffs
#include <battle/data/Buffs.h>
#endif
#ifndef INCLUDED_battle_enums_BuffMode
#include <battle/enums/BuffMode.h>
#endif
#ifndef INCLUDED_battle_enums_Source
#include <battle/enums/Source.h>
#endif
#ifndef INCLUDED_battle_struct_BuffQueue
#include <battle/struct/BuffQueue.h>
#endif
#ifndef INCLUDED_battle_struct_UPair
#include <battle/struct/UPair.h>
#endif
#ifndef INCLUDED_battle_struct_UnitCoords
#include <battle/struct/UnitCoords.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c67c692d32fd6d1d_24_init,"battle.data.Buffs","init",0x9586dbac,"battle.data.Buffs.init","battle/data/Buffs.hx",24,0x0972190c)
HX_LOCAL_STACK_FRAME(_hx_pos_c67c692d32fd6d1d_34_useBuff,"battle.data.Buffs","useBuff",0xda213a9e,"battle.data.Buffs.useBuff","battle/data/Buffs.hx",34,0x0972190c)
HX_LOCAL_STACK_FRAME(_hx_pos_c67c692d32fd6d1d_60_conductivity,"battle.data.Buffs","conductivity",0xb0ef20b9,"battle.data.Buffs.conductivity","battle/data/Buffs.hx",60,0x0972190c)
HX_LOCAL_STACK_FRAME(_hx_pos_c67c692d32fd6d1d_76_charged,"battle.data.Buffs","charged",0x59c73454,"battle.data.Buffs.charged","battle/data/Buffs.hx",76,0x0972190c)
HX_LOCAL_STACK_FRAME(_hx_pos_c67c692d32fd6d1d_87_clarity,"battle.data.Buffs","clarity",0xf3363778,"battle.data.Buffs.clarity","battle/data/Buffs.hx",87,0x0972190c)
HX_LOCAL_STACK_FRAME(_hx_pos_c67c692d32fd6d1d_101_strikeback,"battle.data.Buffs","strikeback",0x29acfef5,"battle.data.Buffs.strikeback","battle/data/Buffs.hx",101,0x0972190c)
HX_LOCAL_STACK_FRAME(_hx_pos_c67c692d32fd6d1d_115_energized,"battle.data.Buffs","energized",0x67592f85,"battle.data.Buffs.energized","battle/data/Buffs.hx",115,0x0972190c)
HX_LOCAL_STACK_FRAME(_hx_pos_c67c692d32fd6d1d_130_snared,"battle.data.Buffs","snared",0x23fcd947,"battle.data.Buffs.snared","battle/data/Buffs.hx",130,0x0972190c)
HX_LOCAL_STACK_FRAME(_hx_pos_c67c692d32fd6d1d_144_reenergizing,"battle.data.Buffs","reenergizing",0xa9e2376f,"battle.data.Buffs.reenergizing","battle/data/Buffs.hx",144,0x0972190c)
HX_LOCAL_STACK_FRAME(_hx_pos_c67c692d32fd6d1d_17_boot,"battle.data.Buffs","boot",0x90e724ce,"battle.data.Buffs.boot","battle/data/Buffs.hx",17,0x0972190c)
namespace battle{
namespace data{

void Buffs_obj::__construct() { }

Dynamic Buffs_obj::__CreateEmpty() { return new Buffs_obj; }

void *Buffs_obj::_hx_vtable = 0;

Dynamic Buffs_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Buffs_obj > _hx_result = new Buffs_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Buffs_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x39f1947e;
}

::Dynamic Buffs_obj::model;

bool Buffs_obj::flag;

 ::battle::Unit Buffs_obj::target;

 ::battle::enums::BuffMode Buffs_obj::mode;

void Buffs_obj::init(::Dynamic m){
            	HX_STACKFRAME(&_hx_pos_c67c692d32fd6d1d_24_init)
HXDLIN(  24)		if (::battle::data::Buffs_obj::flag) {
HXLINE(  26)			::battle::data::Buffs_obj::model = m;
HXLINE(  27)			::battle::data::Buffs_obj::flag = false;
            		}
            		else {
HXLINE(  30)			HX_STACK_DO_THROW(HX_("Attempt to re-init",d8,b9,98,2d));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Buffs_obj,init,(void))

void Buffs_obj::useBuff( ::ID id, ::battle::_hx_struct::UnitCoords targetCoords, ::battle::_hx_struct::UnitCoords casterCoords, ::battle::enums::BuffMode m){
            	HX_STACKFRAME(&_hx_pos_c67c692d32fd6d1d_34_useBuff)
HXLINE(  35)		::battle::data::Buffs_obj::target = ::battle::IMutableModel_obj::getUnits(::battle::data::Buffs_obj::model)->get(targetCoords).StaticCast<  ::battle::Unit >();
HXLINE(  36)		::battle::data::Buffs_obj::mode = m;
HXLINE(  38)		switch((int)(_hx_getEnumValueIndex(id))){
            			case (int)18: {
HXLINE(  41)				::battle::data::Buffs_obj::conductivity();
            			}
            			break;
            			case (int)19: {
HXLINE(  43)				::battle::data::Buffs_obj::charged();
            			}
            			break;
            			case (int)20: {
HXLINE(  47)				::battle::data::Buffs_obj::clarity();
            			}
            			break;
            			case (int)21: {
HXLINE(  45)				::battle::data::Buffs_obj::strikeback();
            			}
            			break;
            			case (int)22: {
HXLINE(  51)				::battle::data::Buffs_obj::energized();
            			}
            			break;
            			case (int)23: {
HXLINE(  49)				::battle::data::Buffs_obj::snared();
            			}
            			break;
            			case (int)24: {
HXLINE(  53)				::battle::data::Buffs_obj::reenergizing();
            			}
            			break;
            			default:{
HXLINE(  55)				HX_STACK_DO_THROW((HX_("Buffs->useBuff() exception: Invalid ID: ",c9,11,b9,ab) + ::Type_obj::enumConstructor(id)));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Buffs_obj,useBuff,(void))

void Buffs_obj::conductivity(){
            	HX_GC_STACKFRAME(&_hx_pos_c67c692d32fd6d1d_60_conductivity)
HXLINE(  61)		 ::Linear modifier =  ::Linear_obj::__alloc( HX_CTX ,(int)3,(int)0);
HXLINE(  62)		{
HXLINE(  62)			 ::battle::enums::BuffMode _g = ::battle::data::Buffs_obj::mode;
HXDLIN(  62)			switch((int)(_hx_getEnumValueIndex(_g))){
            				case (int)0: {
HXLINE(  65)					::battle::data::Buffs_obj::target->healIn->combine(modifier);
HXLINE(  66)					::battle::data::Buffs_obj::target->damageIn->combine(modifier);
            				}
            				break;
            				case (int)2: {
HXLINE(  68)					::battle::data::Buffs_obj::target->healIn->detach(modifier);
HXLINE(  69)					::battle::data::Buffs_obj::target->damageIn->detach(modifier);
            				}
            				break;
            				default:{
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Buffs_obj,conductivity,(void))

void Buffs_obj::charged(){
            	HX_STACKFRAME(&_hx_pos_c67c692d32fd6d1d_76_charged)
HXDLIN(  76)		 ::battle::enums::BuffMode _g = ::battle::data::Buffs_obj::mode;
HXDLIN(  76)		switch((int)(_hx_getEnumValueIndex(_g))){
            			case (int)0: {
HXLINE(  79)				 ::battle::Unit _hx_tmp = ::battle::data::Buffs_obj::target;
HXDLIN(  79)				_hx_tmp->flow = (_hx_tmp->flow * (int)2);
            			}
            			break;
            			case (int)2: {
HXLINE(  81)				::battle::data::Buffs_obj::target->flow = ::Math_obj::round(((Float)::battle::data::Buffs_obj::target->flow / (Float)(int)2));
            			}
            			break;
            			default:{
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Buffs_obj,charged,(void))

void Buffs_obj::clarity(){
            	HX_GC_STACKFRAME(&_hx_pos_c67c692d32fd6d1d_87_clarity)
HXLINE(  88)		 ::Linear modifier =  ::Linear_obj::__alloc( HX_CTX ,(int)1,((Float)0.5));
HXLINE(  90)		{
HXLINE(  90)			 ::battle::enums::BuffMode _g = ::battle::data::Buffs_obj::mode;
HXDLIN(  90)			switch((int)(_hx_getEnumValueIndex(_g))){
            				case (int)0: {
HXLINE(  93)					::battle::data::Buffs_obj::target->critChance->combine(modifier);
            				}
            				break;
            				case (int)2: {
HXLINE(  95)					::battle::data::Buffs_obj::target->critChance->detach(modifier);
            				}
            				break;
            				default:{
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Buffs_obj,clarity,(void))

void Buffs_obj::strikeback(){
            	HX_GC_STACKFRAME(&_hx_pos_c67c692d32fd6d1d_101_strikeback)
HXLINE( 102)		 ::Linear modifier =  ::Linear_obj::__alloc( HX_CTX ,(int)2,(int)0);
HXLINE( 104)		{
HXLINE( 104)			 ::battle::enums::BuffMode _g = ::battle::data::Buffs_obj::mode;
HXDLIN( 104)			switch((int)(_hx_getEnumValueIndex(_g))){
            				case (int)0: {
HXLINE( 107)					::battle::data::Buffs_obj::target->critDamage->combine(modifier);
            				}
            				break;
            				case (int)2: {
HXLINE( 109)					::battle::data::Buffs_obj::target->critDamage->detach(modifier);
            				}
            				break;
            				default:{
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Buffs_obj,strikeback,(void))

void Buffs_obj::energized(){
            	HX_GC_STACKFRAME(&_hx_pos_c67c692d32fd6d1d_115_energized)
HXLINE( 116)		 ::Linear modifier =  ::Linear_obj::__alloc( HX_CTX ,(int)2,(int)0);
HXLINE( 118)		{
HXLINE( 118)			 ::battle::enums::BuffMode _g = ::battle::data::Buffs_obj::mode;
HXDLIN( 118)			switch((int)(_hx_getEnumValueIndex(_g))){
            				case (int)0: {
HXLINE( 121)					::battle::data::Buffs_obj::target->damageOut->combine(modifier);
            				}
            				break;
            				case (int)2: {
HXLINE( 123)					::battle::data::Buffs_obj::target->damageOut->detach(modifier);
            				}
            				break;
            				default:{
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Buffs_obj,energized,(void))

void Buffs_obj::snared(){
            	HX_STACKFRAME(&_hx_pos_c67c692d32fd6d1d_130_snared)
HXDLIN( 130)		 ::battle::enums::BuffMode _g = ::battle::data::Buffs_obj::mode;
HXDLIN( 130)		switch((int)(_hx_getEnumValueIndex(_g))){
            			case (int)0: {
HXLINE( 133)				::battle::data::Buffs_obj::target->flow = ::Math_obj::floor(((Float)::battle::data::Buffs_obj::target->flow / (Float)(int)2));
            			}
            			break;
            			case (int)2: {
HXLINE( 135)				::battle::data::Buffs_obj::target->flow = (::battle::data::Buffs_obj::target->flow * (int)2);
            			}
            			break;
            			case (int)3: {
HXLINE( 137)				::battle::data::Buffs_obj::target->buffQueue->dispellByID(::ID_obj::BuffLgSnared_dyn());
            			}
            			break;
            			default:{
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Buffs_obj,snared,(void))

void Buffs_obj::reenergizing(){
            	HX_STACKFRAME(&_hx_pos_c67c692d32fd6d1d_144_reenergizing)
HXDLIN( 144)		 ::battle::enums::BuffMode _g = ::battle::data::Buffs_obj::mode;
HXDLIN( 144)		if ((_hx_getEnumValueIndex(_g) == (int)1)) {
HXLINE( 147)			::Dynamic _hx_tmp = ::battle::data::Buffs_obj::model;
HXDLIN( 147)			 ::battle::_hx_struct::UnitCoords _hx_tmp1 = ::battle::_hx_struct::UnitCoords_obj::get(::battle::data::Buffs_obj::target);
HXDLIN( 147)			::battle::IMutableModel_obj::changeMana(_hx_tmp,_hx_tmp1,::battle::_hx_struct::UnitCoords_obj::get(::battle::data::Buffs_obj::target),(int)20,::battle::enums::Source_obj::Buff_dyn());
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Buffs_obj,reenergizing,(void))


Buffs_obj::Buffs_obj()
{
}

bool Buffs_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flag") ) { outValue = ( flag ); return true; }
		if (HX_FIELD_EQ(inName,"mode") ) { outValue = ( mode ); return true; }
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { outValue = ( model ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { outValue = ( target ); return true; }
		if (HX_FIELD_EQ(inName,"snared") ) { outValue = snared_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"useBuff") ) { outValue = useBuff_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"charged") ) { outValue = charged_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"clarity") ) { outValue = clarity_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"energized") ) { outValue = energized_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"strikeback") ) { outValue = strikeback_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"conductivity") ) { outValue = conductivity_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"reenergizing") ) { outValue = reenergizing_dyn(); return true; }
	}
	return false;
}

bool Buffs_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"flag") ) { flag=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"mode") ) { mode=ioValue.Cast<  ::battle::enums::BuffMode >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { model=ioValue.Cast< ::Dynamic >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=ioValue.Cast<  ::battle::Unit >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Buffs_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Buffs_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::battle::IMutableModel*/ ,(void *) &Buffs_obj::model,HX_HCSTRING("model","\xa9","\x23","\x58","\x0c")},
	{hx::fsBool,(void *) &Buffs_obj::flag,HX_HCSTRING("flag","\xac","\x0b","\xbe","\x43")},
	{hx::fsObject /*::battle::Unit*/ ,(void *) &Buffs_obj::target,HX_HCSTRING("target","\x51","\xf3","\xec","\x86")},
	{hx::fsObject /*::battle::enums::BuffMode*/ ,(void *) &Buffs_obj::mode,HX_HCSTRING("mode","\x63","\xd3","\x60","\x48")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Buffs_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Buffs_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Buffs_obj::model,"model");
	HX_MARK_MEMBER_NAME(Buffs_obj::flag,"flag");
	HX_MARK_MEMBER_NAME(Buffs_obj::target,"target");
	HX_MARK_MEMBER_NAME(Buffs_obj::mode,"mode");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Buffs_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Buffs_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Buffs_obj::model,"model");
	HX_VISIT_MEMBER_NAME(Buffs_obj::flag,"flag");
	HX_VISIT_MEMBER_NAME(Buffs_obj::target,"target");
	HX_VISIT_MEMBER_NAME(Buffs_obj::mode,"mode");
};

#endif

hx::Class Buffs_obj::__mClass;

static ::String Buffs_obj_sStaticFields[] = {
	HX_HCSTRING("model","\xa9","\x23","\x58","\x0c"),
	HX_HCSTRING("flag","\xac","\x0b","\xbe","\x43"),
	HX_HCSTRING("target","\x51","\xf3","\xec","\x86"),
	HX_HCSTRING("mode","\x63","\xd3","\x60","\x48"),
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("useBuff","\xba","\x91","\xcb","\x4f"),
	HX_HCSTRING("conductivity","\x1d","\x84","\x67","\xb1"),
	HX_HCSTRING("charged","\x70","\x8b","\x71","\xcf"),
	HX_HCSTRING("clarity","\x94","\x8e","\xe0","\x68"),
	HX_HCSTRING("strikeback","\x59","\x01","\x55","\xae"),
	HX_HCSTRING("energized","\xa1","\x85","\x9c","\x5d"),
	HX_HCSTRING("snared","\xab","\xd9","\x92","\x91"),
	HX_HCSTRING("reenergizing","\xd3","\x9a","\x5a","\xaa"),
	::String(null())
};

void Buffs_obj::__register()
{
	hx::Object *dummy = new Buffs_obj;
	Buffs_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("battle.data.Buffs","\x52","\x85","\x64","\x42");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Buffs_obj::__GetStatic;
	__mClass->mSetStaticField = &Buffs_obj::__SetStatic;
	__mClass->mMarkFunc = Buffs_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Buffs_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Buffs_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Buffs_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Buffs_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Buffs_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Buffs_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c67c692d32fd6d1d_17_boot)
HXDLIN(  17)		flag = true;
            	}
}

} // end namespace battle
} // end namespace data