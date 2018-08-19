// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Element
#include <Element.h>
#endif
#ifndef INCLUDED_ID
#include <ID.h>
#endif
#ifndef INCLUDED_MathUtils
#include <MathUtils.h>
#endif
#ifndef INCLUDED_XMLUtils
#include <XMLUtils.h>
#endif
#ifndef INCLUDED_battle_struct_Pool
#include <battle/struct/Pool.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_roaming_Player
#include <roaming/Player.h>
#endif
#ifndef INCLUDED_roaming_RoamUnitParameters
#include <roaming/RoamUnitParameters.h>
#endif
#ifndef INCLUDED_roaming_Tree
#include <roaming/Tree.h>
#endif
#ifndef INCLUDED_roaming_Unit
#include <roaming/Unit.h>
#endif
#ifndef INCLUDED_roaming_enums_Attribute
#include <roaming/enums/Attribute.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_84c4201293b77245_65_new,"roaming.Player","new",0xdbb9dca8,"roaming.Player.new","roaming/Player.hx",65,0xab76e7a7)
HX_LOCAL_STACK_FRAME(_hx_pos_84c4201293b77245_23_levelUp,"roaming.Player","levelUp",0xebac9947,"roaming.Player.levelUp","roaming/Player.hx",23,0xab76e7a7)
HX_LOCAL_STACK_FRAME(_hx_pos_84c4201293b77245_34_reSpec,"roaming.Player","reSpec",0xd9da9446,"roaming.Player.reSpec","roaming/Player.hx",34,0xab76e7a7)
HX_LOCAL_STACK_FRAME(_hx_pos_84c4201293b77245_49_increment,"roaming.Player","increment",0x517f7877,"roaming.Player.increment","roaming/Player.hx",49,0xab76e7a7)
HX_LOCAL_STACK_FRAME(_hx_pos_84c4201293b77245_60_spendAbPoint,"roaming.Player","spendAbPoint",0xf531faa9,"roaming.Player.spendAbPoint","roaming/Player.hx",60,0xab76e7a7)
HX_LOCAL_STACK_FRAME(_hx_pos_84c4201293b77245_76_setName,"roaming.Player","setName",0xd8b98355,"roaming.Player.setName","roaming/Player.hx",76,0xab76e7a7)
namespace roaming{

void Player_obj::__construct( ::Element element,::String name, ::roaming::RoamUnitParameters params){
            	HX_GC_STACKFRAME(&_hx_pos_84c4201293b77245_65_new)
HXLINE(  66)		super::__construct(::ID_obj::Player_dyn(),element,name,params);
HXLINE(  68)		 ::roaming::Tree _hx_tmp;
HXDLIN(  68)		if (hx::IsNull( params )) {
HXLINE(  68)			_hx_tmp =  ::roaming::Tree_obj::__alloc( HX_CTX ,element);
            		}
            		else {
HXLINE(  68)			_hx_tmp = params->tree;
            		}
HXDLIN(  68)		this->tree = _hx_tmp;
HXLINE(  69)		::Array< ::Dynamic> _hx_tmp1;
HXDLIN(  69)		if (hx::IsNull( params )) {
HXLINE(  69)			_hx_tmp1 = ::Array_obj< ::Dynamic>::__new(0);
            		}
            		else {
HXLINE(  69)			_hx_tmp1 = params->wheel;
            		}
HXDLIN(  69)		this->wheel = _hx_tmp1;
HXLINE(  71)		int _hx_tmp2;
HXDLIN(  71)		if (hx::IsNull( params )) {
HXLINE(  71)			_hx_tmp2 = (int)1;
            		}
            		else {
HXLINE(  71)			_hx_tmp2 = params->abilityPoints;
            		}
HXDLIN(  71)		this->abilityPoints = _hx_tmp2;
HXLINE(  72)		int _hx_tmp3;
HXDLIN(  72)		if (hx::IsNull( params )) {
HXLINE(  72)			_hx_tmp3 = (int)4;
            		}
            		else {
HXLINE(  72)			_hx_tmp3 = params->attributePoints;
            		}
HXDLIN(  72)		this->attributePoints = _hx_tmp3;
            	}

Dynamic Player_obj::__CreateEmpty() { return new Player_obj; }

void *Player_obj::_hx_vtable = 0;

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Player_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0b193811) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0b193811;
	} else {
		return inClassId==(int)0x559865da;
	}
}

void Player_obj::levelUp(int xpRest){
            	HX_GC_STACKFRAME(&_hx_pos_84c4201293b77245_23_levelUp)
HXLINE(  24)		this->level++;
HXLINE(  25)		this->xp =  ::battle::_hx_struct::Pool_obj::__alloc( HX_CTX ,xpRest,this->xpToLvlup(this->level),null());
HXLINE(  26)		 ::roaming::Player _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  26)		int _hx_tmp1 = _hx_tmp->abilityPoints;
HXDLIN(  26)		_hx_tmp->abilityPoints = (_hx_tmp1 + ::XMLUtils_obj::getGlobal(HX_("lvlup",7d,2d,98,7d),HX_("ability_pts",9a,25,65,71),(int)1));
HXLINE(  27)		 ::roaming::Player _hx_tmp2 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  27)		int _hx_tmp3 = _hx_tmp2->attributePoints;
HXDLIN(  27)		_hx_tmp2->attributePoints = (_hx_tmp3 + ::XMLUtils_obj::getGlobal(HX_("lvlup",7d,2d,98,7d),HX_("attribute_pts",0c,55,41,72),(int)1));
HXLINE(  28)		{
HXLINE(  28)			 ::roaming::enums::Attribute _g = ::roaming::enums::Attribute_obj::Strength_dyn();
HXDLIN(  28)			 ::haxe::ds::EnumValueMap _g1 = this->attribs;
HXDLIN(  28)			{
HXLINE(  28)				 ::Dynamic v = _g1->get(_g);
HXDLIN(  28)				int v1 = (v + ::XMLUtils_obj::getGlobal(HX_("gains",14,7f,b3,8e),HX_("lgSt",fc,7b,b1,47),(int)1));
HXDLIN(  28)				_g1->set(_g,v1);
            			}
            		}
HXLINE(  29)		{
HXLINE(  29)			 ::roaming::enums::Attribute _g2 = ::roaming::enums::Attribute_obj::Flow_dyn();
HXDLIN(  29)			 ::haxe::ds::EnumValueMap _g11 = this->attribs;
HXDLIN(  29)			{
HXLINE(  29)				 ::Dynamic v2 = _g11->get(_g2);
HXDLIN(  29)				int v3 = (v2 + ::XMLUtils_obj::getGlobal(HX_("gains",14,7f,b3,8e),HX_("lgFl",a1,70,b1,47),(int)1));
HXDLIN(  29)				_g11->set(_g2,v3);
            			}
            		}
HXLINE(  30)		{
HXLINE(  30)			 ::roaming::enums::Attribute _g3 = ::roaming::enums::Attribute_obj::Intellect_dyn();
HXDLIN(  30)			 ::haxe::ds::EnumValueMap _g12 = this->attribs;
HXDLIN(  30)			{
HXLINE(  30)				 ::Dynamic v4 = _g12->get(_g3);
HXDLIN(  30)				int v5 = (v4 + ::XMLUtils_obj::getGlobal(HX_("gains",14,7f,b3,8e),HX_("lgIn",40,73,b1,47),(int)1));
HXDLIN(  30)				_g12->set(_g3,v5);
            			}
            		}
            	}


void Player_obj::reSpec(){
            	HX_STACKFRAME(&_hx_pos_84c4201293b77245_34_reSpec)
HXLINE(  35)		 ::Dynamic basicSt = ::XMLUtils_obj::getGlobal(HX_("gains",14,7f,b3,8e),HX_("lgSt",fc,7b,b1,47),(int)1);
HXDLIN(  35)		int basicSt1 = (basicSt * this->level);
HXLINE(  36)		 ::Dynamic basicFl = ::XMLUtils_obj::getGlobal(HX_("gains",14,7f,b3,8e),HX_("lgFl",a1,70,b1,47),(int)1);
HXDLIN(  36)		int basicFl1 = (basicFl * this->level);
HXLINE(  37)		 ::Dynamic basicIn = ::XMLUtils_obj::getGlobal(HX_("gains",14,7f,b3,8e),HX_("lgIn",40,73,b1,47),(int)1);
HXDLIN(  37)		int basicIn1 = (basicIn * this->level);
HXLINE(  39)		 ::roaming::Player _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  39)		int _hx_tmp1 = _hx_tmp->abilityPoints;
HXDLIN(  39)		_hx_tmp->abilityPoints = (_hx_tmp1 + this->tree->reset());
HXLINE(  40)		this->wheel = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  42)		 ::roaming::Player _hx_tmp2 = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  42)		int _hx_tmp3 = _hx_tmp2->attributePoints;
HXDLIN(  42)		 ::Dynamic _hx_tmp4 = this->attribs->get(::roaming::enums::Attribute_obj::Strength_dyn());
HXDLIN(  42)		int _hx_tmp5 = (_hx_tmp4 + this->attribs->get(::roaming::enums::Attribute_obj::Flow_dyn()));
HXDLIN(  42)		_hx_tmp2->attributePoints = (_hx_tmp3 + ((((_hx_tmp5 + this->attribs->get(::roaming::enums::Attribute_obj::Intellect_dyn())) - basicSt1) - basicFl1) - basicIn1));
HXLINE(  43)		this->attribs->set(::roaming::enums::Attribute_obj::Strength_dyn(),basicSt1);
HXLINE(  44)		this->attribs->set(::roaming::enums::Attribute_obj::Flow_dyn(),basicFl1);
HXLINE(  45)		this->attribs->set(::roaming::enums::Attribute_obj::Intellect_dyn(),basicIn1);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,reSpec,(void))

bool Player_obj::increment( ::roaming::enums::Attribute a){
            	HX_STACKFRAME(&_hx_pos_84c4201293b77245_49_increment)
HXLINE(  50)		if ((this->attributePoints == (int)0)) {
HXLINE(  51)			return false;
            		}
HXLINE(  53)		{
HXLINE(  53)			 ::roaming::enums::Attribute tmp = a;
HXDLIN(  53)			 ::Dynamic tmp1 = this->attribs->get(tmp);
HXDLIN(  53)			{
HXLINE(  53)				int v = (tmp1 + (int)1);
HXDLIN(  53)				this->attribs->set(tmp,v);
            			}
            		}
HXLINE(  54)		this->attributePoints--;
HXLINE(  55)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,increment,return )

void Player_obj::spendAbPoint(){
            	HX_STACKFRAME(&_hx_pos_84c4201293b77245_60_spendAbPoint)
HXDLIN(  60)		if ((this->abilityPoints > (int)0)) {
HXLINE(  61)			this->abilityPoints--;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,spendAbPoint,(void))

bool Player_obj::setName(::String newName){
            	HX_STACKFRAME(&_hx_pos_84c4201293b77245_76_setName)
HXLINE(  77)		if (!(::MathUtils_obj::inRange(newName.length,(int)3,(int)18,null(),null()))) {
HXLINE(  78)			return false;
            		}
HXLINE(  80)		this->name = newName;
HXLINE(  81)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,setName,return )


hx::ObjectPtr< Player_obj > Player_obj::__new( ::Element element,::String name, ::roaming::RoamUnitParameters params) {
	hx::ObjectPtr< Player_obj > __this = new Player_obj();
	__this->__construct(element,name,params);
	return __this;
}

hx::ObjectPtr< Player_obj > Player_obj::__alloc(hx::Ctx *_hx_ctx, ::Element element,::String name, ::roaming::RoamUnitParameters params) {
	Player_obj *__this = (Player_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Player_obj), true, "roaming.Player"));
	*(void **)__this = Player_obj::_hx_vtable;
	__this->__construct(element,name,params);
	return __this;
}

Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(abilityPoints,"abilityPoints");
	HX_MARK_MEMBER_NAME(attributePoints,"attributePoints");
	HX_MARK_MEMBER_NAME(tree,"tree");
	 ::roaming::Unit_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(abilityPoints,"abilityPoints");
	HX_VISIT_MEMBER_NAME(attributePoints,"attributePoints");
	HX_VISIT_MEMBER_NAME(tree,"tree");
	 ::roaming::Unit_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tree") ) { return hx::Val( tree ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"reSpec") ) { return hx::Val( reSpec_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"levelUp") ) { return hx::Val( levelUp_dyn() ); }
		if (HX_FIELD_EQ(inName,"setName") ) { return hx::Val( setName_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"increment") ) { return hx::Val( increment_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"spendAbPoint") ) { return hx::Val( spendAbPoint_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"abilityPoints") ) { return hx::Val( abilityPoints ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"attributePoints") ) { return hx::Val( attributePoints ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Player_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tree") ) { tree=inValue.Cast<  ::roaming::Tree >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"abilityPoints") ) { abilityPoints=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"attributePoints") ) { attributePoints=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("abilityPoints","\x6d","\x83","\x23","\xd7"));
	outFields->push(HX_HCSTRING("attributePoints","\x5f","\xf3","\xff","\xea"));
	outFields->push(HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Player_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Player_obj,abilityPoints),HX_HCSTRING("abilityPoints","\x6d","\x83","\x23","\xd7")},
	{hx::fsInt,(int)offsetof(Player_obj,attributePoints),HX_HCSTRING("attributePoints","\x5f","\xf3","\xff","\xea")},
	{hx::fsObject /*::roaming::Tree*/ ,(int)offsetof(Player_obj,tree),HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Player_obj_sStaticStorageInfo = 0;
#endif

static ::String Player_obj_sMemberFields[] = {
	HX_HCSTRING("abilityPoints","\x6d","\x83","\x23","\xd7"),
	HX_HCSTRING("attributePoints","\x5f","\xf3","\xff","\xea"),
	HX_HCSTRING("tree","\x5e","\x99","\x03","\x4d"),
	HX_HCSTRING("levelUp","\xff","\xc8","\x76","\x21"),
	HX_HCSTRING("reSpec","\x8e","\xc3","\x59","\xf3"),
	HX_HCSTRING("increment","\x2f","\x06","\xff","\x31"),
	HX_HCSTRING("spendAbPoint","\xf1","\xcf","\xc7","\xda"),
	HX_HCSTRING("setName","\x0d","\xb3","\x83","\x0e"),
	::String(null()) };

static void Player_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Player_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Object *dummy = new Player_obj;
	Player_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("roaming.Player","\xb6","\xa8","\x9c","\x22");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Player_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Player_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Player_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Player_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Player_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace roaming
