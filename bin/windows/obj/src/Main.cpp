// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Element
#include <Element.h>
#endif
#ifndef INCLUDED_ID
#include <ID.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Progress
#include <Progress.h>
#endif
#ifndef INCLUDED_SSprite
#include <SSprite.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_XMLUtils
#include <XMLUtils.h>
#endif
#ifndef INCLUDED_battle_IMutableModel
#include <battle/IMutableModel.h>
#endif
#ifndef INCLUDED_battle_IObservableModel
#include <battle/IObservableModel.h>
#endif
#ifndef INCLUDED_battle_ISimpleModel
#include <battle/ISimpleModel.h>
#endif
#ifndef INCLUDED_battle_Model
#include <battle/Model.h>
#endif
#ifndef INCLUDED_battle_Unit
#include <battle/Unit.h>
#endif
#ifndef INCLUDED_battle_enums_Team
#include <battle/enums/Team.h>
#endif
#ifndef INCLUDED_battle_struct_UPair
#include <battle/struct/UPair.h>
#endif
#ifndef INCLUDED_battle_vision_Common
#include <battle/vision/Common.h>
#endif
#ifndef INCLUDED_graphic_Fonts
#include <graphic/Fonts.h>
#endif
#ifndef INCLUDED_haxe_CallStack
#include <haxe/CallStack.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_Linear
#include <motion/easing/Linear.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_roaming_Player
#include <roaming/Player.h>
#endif
#ifndef INCLUDED_roaming_Unit
#include <roaming/Unit.h>
#endif
#ifndef INCLUDED_roaming_screens_Canvas
#include <roaming/screens/Canvas.h>
#endif
#ifndef INCLUDED_roaming_screens_ICanvas
#include <roaming/screens/ICanvas.h>
#endif
#ifndef INCLUDED_roaming_screens_Screen
#include <roaming/screens/Screen.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e47a9afac0942eb9_92_new,"Main","new",0x6616a5cb,"Main.new","Main.hx",92,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_49_initRoam,"Main","initRoam",0x976eb7ce,"Main.initRoam","Main.hx",49,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_56_initBattle,"Main","initBattle",0xf1a99e5d,"Main.initBattle","Main.hx",56,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_80_initTreeHelper,"Main","initTreeHelper",0xf681b511,"Main.initTreeHelper","Main.hx",80,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_117_createEnemyArray,"Main","createEnemyArray",0x538de802,"Main.createEnemyArray","Main.hx",117,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_85_onBattleOver,"Main","onBattleOver",0xd643c5e0,"Main.onBattleOver","Main.hx",85,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_42_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",42,0x087e5c05)
HX_LOCAL_STACK_FRAME(_hx_pos_e47a9afac0942eb9_43_boot,"Main","boot",0xe5d36c67,"Main.boot","Main.hx",43,0x087e5c05)

void Main_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_92_new)
HXLINE(  93)		super::__construct();
HXLINE(  95)		::openfl::Lib_obj::get_current()->stage->set_displayState((int)1);
HXLINE(  96)		::motion::Actuate_obj::defaultEase = ::motion::easing::Linear_obj::get_easeNone();
HXLINE(  97)		::graphic::Fonts_obj::init();
HXLINE(  99)		::Main_obj::player =  ::roaming::Player_obj::__alloc( HX_CTX ,::Element_obj::Lightning_dyn(),HX_("Gulvan",45,67,f5,08),null());
HXLINE( 100)		::Main_obj::progress =  ::Progress_obj::__alloc( HX_CTX ,(int)0,(int)3);
HXLINE( 102)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 104)			this->initBattle();
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE( 108)				::haxe::Log_obj::trace(e,hx::SourceInfo(HX_("Main.hx",05,5c,7e,08),108,HX_("Main",59,64,2f,33),HX_("new",60,d0,53,00)));
HXLINE( 109)				 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 109)				::String _hx_tmp1 = ::haxe::CallStack_obj::toString(::haxe::CallStack_obj::exceptionStack());
HXDLIN( 109)				_hx_tmp(_hx_tmp1,hx::SourceInfo(HX_("Main.hx",05,5c,7e,08),109,HX_("Main",59,64,2f,33),HX_("new",60,d0,53,00)));
HXLINE( 110)				::Sys_obj::exit((int)1);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x17120186) {
			if (inClassId<=(int)0x0ddfced7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0ddfced7;
			} else {
				return inClassId==(int)0x17120186;
			}
		} else {
			return inClassId==(int)0x19c29573 || inClassId==(int)0x1b123bf8;
		}
	} else {
		if (inClassId<=(int)0x3f2b00af) {
			return inClassId==(int)0x332f6459 || inClassId==(int)0x3f2b00af;
		} else {
			return inClassId==(int)0x739fd0b8;
		}
	}
}

void Main_obj::initRoam(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_49_initRoam)
HXLINE(  50)		 ::roaming::screens::Canvas canvas =  ::roaming::screens::Canvas_obj::__alloc( HX_CTX );
HXLINE(  51)		this->addChild(canvas);
HXLINE(  52)		canvas->init(::roaming::screens::Screen_obj::Roaming_dyn());
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,initRoam,(void))

void Main_obj::initBattle(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_56_initBattle)
HXLINE(  57)		 ::ID id = ::ID_obj::PlayerZealon_dyn();
HXLINE(  58)		 ::Dynamic params =  ::Dynamic(hx::Anon_obj::Create(7)
            			->setFixed(0,HX_("strength",81,d2,8e,8e),(int)1)
            			->setFixed(1,HX_("intellect",80,07,6d,c9),(int)6)
            			->setFixed(2,HX_("wheel",9b,34,ba,c9),::Array_obj< ::Dynamic>::__new(8)->init(0,::ID_obj::LgLightningBolt_dyn())->init(1,::ID_obj::LgEnergize_dyn())->init(2,::ID_obj::LgStrikeback_dyn())->init(3,::ID_obj::LgDisrupt_dyn())->init(4,::ID_obj::LgThunderbirdSoul_dyn())->init(5,::ID_obj::LgEMPBlast_dyn())->init(6,::ID_obj::LgArcFlash_dyn())->init(7,::ID_obj::LgElectricalStorm_dyn()))
            			->setFixed(3,HX_("hp",08,5b,00,00),(int)100)
            			->setFixed(4,HX_("flow",ee,17,be,43),(int)1)
            			->setFixed(5,HX_("mana",87,3c,56,48),(int)100)
            			->setFixed(6,HX_("name",4b,72,ff,48),::Main_obj::player->name));
HXLINE(  68)		::Array< ::Dynamic> allies = ::Array_obj< ::Dynamic>::__new(1)->init(0, ::battle::Unit_obj::__alloc( HX_CTX ,id,::battle::enums::Team_obj::Left_dyn(),(int)0,params,null()));
HXLINE(  69)		::Array< ::Dynamic> enemies = this->createEnemyArray(::Main_obj::progress->zone,::Main_obj::progress->stage);
HXLINE(  71)		 ::battle::Model model =  ::battle::Model_obj::__alloc( HX_CTX ,allies,enemies);
HXLINE(  72)		 ::battle::vision::Common common =  ::battle::vision::Common_obj::__alloc( HX_CTX ,::Main_obj::progress->zone,allies,enemies,model);
HXLINE(  74)		this->add(common,(int)0,(int)0);
HXLINE(  75)		common->init( ::battle::_hx_struct::UPair_obj::__alloc( HX_CTX ,allies,enemies));
HXLINE(  76)		model->init();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,initBattle,(void))

void Main_obj::initTreeHelper(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_80_initTreeHelper)
            	}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,initTreeHelper,(void))

::Array< ::Dynamic> Main_obj::createEnemyArray(int zone,int stage){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_117_createEnemyArray)
HXLINE( 118)		::Array< ::Dynamic> enemyIDs = ::XMLUtils_obj::parseStage(zone,stage);
HXLINE( 119)		::Array< ::Dynamic> enemies = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 120)		{
HXLINE( 120)			int _g1 = (int)0;
HXDLIN( 120)			int _g = enemyIDs->length;
HXDLIN( 120)			while((_g1 < _g)){
HXLINE( 120)				_g1 = (_g1 + (int)1);
HXDLIN( 120)				int i = (_g1 - (int)1);
HXLINE( 121)				enemies->push( ::battle::Unit_obj::__alloc( HX_CTX ,enemyIDs->__get(i).StaticCast<  ::ID >(),::battle::enums::Team_obj::Right_dyn(),i,null(),null()));
            			}
            		}
HXLINE( 123)		return enemies;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,createEnemyArray,return )

int Main_obj::screenW;

int Main_obj::screenH;

 ::roaming::Player Main_obj::player;

 ::Progress Main_obj::progress;

void Main_obj::onBattleOver(){
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_85_onBattleOver)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,onBattleOver,(void))


hx::ObjectPtr< Main_obj > Main_obj::__new() {
	hx::ObjectPtr< Main_obj > __this = new Main_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< Main_obj > Main_obj::__alloc(hx::Ctx *_hx_ctx) {
	Main_obj *__this = (Main_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Main_obj), true, "Main"));
	*(void **)__this = Main_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Main_obj::Main_obj()
{
}

hx::Val Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"initRoam") ) { return hx::Val( initRoam_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initBattle") ) { return hx::Val( initBattle_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"initTreeHelper") ) { return hx::Val( initTreeHelper_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createEnemyArray") ) { return hx::Val( createEnemyArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Main_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { outValue = ( player ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenW") ) { outValue = ( screenW ); return true; }
		if (HX_FIELD_EQ(inName,"screenH") ) { outValue = ( screenH ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { outValue = ( progress ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onBattleOver") ) { outValue = onBattleOver_dyn(); return true; }
	}
	return false;
}

bool Main_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=ioValue.Cast<  ::roaming::Player >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"screenW") ) { screenW=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"screenH") ) { screenH=ioValue.Cast< int >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { progress=ioValue.Cast<  ::Progress >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Main_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Main_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &Main_obj::screenW,HX_HCSTRING("screenW","\x6b","\xc3","\x36","\x2a")},
	{hx::fsInt,(void *) &Main_obj::screenH,HX_HCSTRING("screenH","\x5c","\xc3","\x36","\x2a")},
	{hx::fsObject /*::roaming::Player*/ ,(void *) &Main_obj::player,HX_HCSTRING("player","\x61","\xeb","\xb8","\x37")},
	{hx::fsObject /*::Progress*/ ,(void *) &Main_obj::progress,HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Main_obj_sMemberFields[] = {
	HX_HCSTRING("initRoam","\x19","\x11","\x66","\x50"),
	HX_HCSTRING("initBattle","\x68","\x20","\x22","\x5a"),
	HX_HCSTRING("initTreeHelper","\x9c","\x98","\xcb","\x67"),
	HX_HCSTRING("createEnemyArray","\x4d","\x04","\xc0","\x15"),
	::String(null()) };

static void Main_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::screenW,"screenW");
	HX_MARK_MEMBER_NAME(Main_obj::screenH,"screenH");
	HX_MARK_MEMBER_NAME(Main_obj::player,"player");
	HX_MARK_MEMBER_NAME(Main_obj::progress,"progress");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Main_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::screenW,"screenW");
	HX_VISIT_MEMBER_NAME(Main_obj::screenH,"screenH");
	HX_VISIT_MEMBER_NAME(Main_obj::player,"player");
	HX_VISIT_MEMBER_NAME(Main_obj::progress,"progress");
};

#endif

hx::Class Main_obj::__mClass;

static ::String Main_obj_sStaticFields[] = {
	HX_HCSTRING("screenW","\x6b","\xc3","\x36","\x2a"),
	HX_HCSTRING("screenH","\x5c","\xc3","\x36","\x2a"),
	HX_HCSTRING("player","\x61","\xeb","\xb8","\x37"),
	HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),
	HX_HCSTRING("onBattleOver","\xab","\x20","\x69","\xaf"),
	::String(null())
};

void Main_obj::__register()
{
	hx::Object *dummy = new Main_obj;
	Main_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Main_obj::__GetStatic;
	__mClass->mSetStaticField = &Main_obj::__SetStatic;
	__mClass->mMarkFunc = Main_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Main_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Main_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Main_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Main_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_42_boot)
HXDLIN(  42)		screenW = (int)1366;
            	}
{
            	HX_STACKFRAME(&_hx_pos_e47a9afac0942eb9_43_boot)
HXDLIN(  43)		screenH = (int)768;
            	}
}

