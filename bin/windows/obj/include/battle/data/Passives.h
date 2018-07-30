// Generated by Haxe 3.4.7
#ifndef INCLUDED_battle_data_Passives
#define INCLUDED_battle_data_Passives

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(ID)
HX_DECLARE_CLASS1(battle,IEffectHandler)
HX_DECLARE_CLASS1(battle,IMutableModel)
HX_DECLARE_CLASS2(battle,data,BattleEvent)
HX_DECLARE_CLASS2(battle,data,Passives)

namespace battle{
namespace data{


class HXCPP_CLASS_ATTRIBUTES Passives_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Passives_obj OBJ_;
		Passives_obj();

	public:
		enum { _hx_ClassId = 0x0e14b02a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="battle.data.Passives")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"battle.data.Passives"); }

		hx::ObjectPtr< Passives_obj > __new() {
			hx::ObjectPtr< Passives_obj > __this = new Passives_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Passives_obj > __alloc(hx::Ctx *_hx_ctx) {
			Passives_obj *__this = (Passives_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Passives_obj), false, "battle.data.Passives"));
			*(void **)__this = Passives_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Passives_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Passives","\x0c","\x27","\x46","\x19"); }

		static void __boot();
		static ::Dynamic model;
		static bool flag;
		static  ::battle::data::BattleEvent event;
		static ::Dynamic caller;
		static void init(::Dynamic m);
		static ::Dynamic init_dyn();

		static void handle( ::ID id, ::battle::data::BattleEvent e,::Dynamic handlerCaller);
		static ::Dynamic handle_dyn();

		static void strikeback();
		static ::Dynamic strikeback_dyn();

		static void thunderbirdSoul();
		static ::Dynamic thunderbirdSoul_dyn();

};

} // end namespace battle
} // end namespace data

#endif /* INCLUDED_battle_data_Passives */ 