// Generated by Haxe 3.4.7
#ifndef INCLUDED_battle_struct_BuffQueue
#define INCLUDED_battle_struct_BuffQueue

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Element)
HX_DECLARE_CLASS0(ID)
HX_DECLARE_CLASS1(battle,Buff)
HX_DECLARE_CLASS2(battle,data,BattleEvent)
HX_DECLARE_CLASS2(battle,_hx_struct,BuffQueue)

namespace battle{
namespace _hx_struct{


class HXCPP_CLASS_ATTRIBUTES BuffQueue_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BuffQueue_obj OBJ_;
		BuffQueue_obj();

	public:
		enum { _hx_ClassId = 0x2b584ab1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="battle.struct.BuffQueue")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"battle.struct.BuffQueue"); }
		static hx::ObjectPtr< BuffQueue_obj > __new();
		static hx::ObjectPtr< BuffQueue_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BuffQueue_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BuffQueue","\x9e","\x56","\x57","\xd1"); }

		::Array< ::Dynamic> queue;
		int newBuffs;
		void addBuff( ::battle::Buff buff);
		::Dynamic addBuff_dyn();

		void tick();
		::Dynamic tick_dyn();

		::Array< ::Dynamic> getTriggering( ::battle::data::BattleEvent e);
		::Dynamic getTriggering_dyn();

		void dispellByID( ::ID id);
		::Dynamic dispellByID_dyn();

		void dispellByElement(::Array< ::Dynamic> elements, ::Dynamic count);
		::Dynamic dispellByElement_dyn();

		void dispellBuff(int index);
		::Dynamic dispellBuff_dyn();

		int elementalCount( ::Element element);
		::Dynamic elementalCount_dyn();

		int indexOfBuff( ::ID id);
		::Dynamic indexOfBuff_dyn();

};

} // end namespace battle
} // end namespace struct

#endif /* INCLUDED_battle_struct_BuffQueue */ 