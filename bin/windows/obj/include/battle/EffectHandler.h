// Generated by Haxe 3.4.7
#ifndef INCLUDED_battle_EffectHandler
#define INCLUDED_battle_EffectHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_battle_IEffectHandler
#include <battle/IEffectHandler.h>
#endif
#ifndef INCLUDED_battle_IModelObserver
#include <battle/IModelObserver.h>
#endif
HX_DECLARE_CLASS0(Element)
HX_DECLARE_CLASS0(ID)
HX_DECLARE_CLASS1(battle,Buff)
HX_DECLARE_CLASS1(battle,EffectHandler)
HX_DECLARE_CLASS1(battle,IEffectHandler)
HX_DECLARE_CLASS1(battle,IModelObserver)
HX_DECLARE_CLASS1(battle,ISimpleModel)
HX_DECLARE_CLASS1(battle,Unit)
HX_DECLARE_CLASS2(battle,data,BattleEvent)
HX_DECLARE_CLASS2(battle,enums,Source)
HX_DECLARE_CLASS2(battle,enums,StrikeType)
HX_DECLARE_CLASS2(battle,_hx_struct,UnitCoords)

namespace battle{


class HXCPP_CLASS_ATTRIBUTES EffectHandler_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef EffectHandler_obj OBJ_;
		EffectHandler_obj();

	public:
		enum { _hx_ClassId = 0x43c8ba59 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="battle.EffectHandler")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"battle.EffectHandler"); }
		static hx::ObjectPtr< EffectHandler_obj > __new();
		static hx::ObjectPtr< EffectHandler_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EffectHandler_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("EffectHandler","\x19","\xb1","\x85","\xc6"); }

		static void __boot();
		static ::Dynamic model;
		static bool flag;
		 ::battle::_hx_struct::UnitCoords target;
		 ::battle::_hx_struct::UnitCoords caster;
		Float delta;
		void init(::Dynamic m);
		::Dynamic init_dyn();

		void procAbilities( ::battle::data::BattleEvent e, ::battle::Unit unit);
		::Dynamic procAbilities_dyn();

		void procBuffs( ::battle::data::BattleEvent e, ::battle::Unit unit);
		::Dynamic procBuffs_dyn();

		void hpUpdate( ::battle::Unit target,int dhp, ::Element element,bool crit, ::battle::enums::Source source);
		::Dynamic hpUpdate_dyn();

		void manaUpdate( ::battle::Unit target,int dmana, ::battle::enums::Source source);
		::Dynamic manaUpdate_dyn();

		void alacUpdate( ::battle::Unit unit,Float dalac, ::battle::enums::Source source);
		::Dynamic alacUpdate_dyn();

		void preTick( ::battle::Unit current);
		::Dynamic preTick_dyn();

		void tick( ::battle::Unit current);
		::Dynamic tick_dyn();

		void miss( ::battle::_hx_struct::UnitCoords target, ::Element element);
		::Dynamic miss_dyn();

		void death( ::battle::_hx_struct::UnitCoords unit);
		::Dynamic death_dyn();

		void abStriked( ::battle::_hx_struct::UnitCoords target, ::battle::_hx_struct::UnitCoords caster, ::ID id, ::battle::enums::StrikeType type, ::Element element);
		::Dynamic abStriked_dyn();

		void abThrown( ::battle::_hx_struct::UnitCoords target, ::battle::_hx_struct::UnitCoords caster, ::ID id, ::battle::enums::StrikeType type, ::Element element);
		::Dynamic abThrown_dyn();

		void buffQueueUpdate( ::battle::_hx_struct::UnitCoords unit,::Array< ::Dynamic> queue);
		::Dynamic buffQueueUpdate_dyn();

		void abSelected(int num);
		::Dynamic abSelected_dyn();

		void abDeselected(int num);
		::Dynamic abDeselected_dyn();

		void warn(::String text);
		::Dynamic warn_dyn();

		 ::battle::Unit getUnit( ::battle::_hx_struct::UnitCoords coords);
		::Dynamic getUnit_dyn();

		 ::battle::_hx_struct::UnitCoords getTarget();
		::Dynamic getTarget_dyn();

		 ::battle::_hx_struct::UnitCoords getCaster();
		::Dynamic getCaster_dyn();

		Float getDelta();
		::Dynamic getDelta_dyn();

};

} // end namespace battle

#endif /* INCLUDED_battle_EffectHandler */ 