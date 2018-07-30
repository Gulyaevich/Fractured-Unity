// Generated by Haxe 3.4.7
#ifndef INCLUDED_roaming_Unit
#define INCLUDED_roaming_Unit

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Element)
HX_DECLARE_CLASS0(ID)
HX_DECLARE_CLASS2(battle,_hx_struct,Pool)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,BalancedTree)
HX_DECLARE_CLASS2(haxe,ds,EnumValueMap)
HX_DECLARE_CLASS1(roaming,Unit)

namespace roaming{


class HXCPP_CLASS_ATTRIBUTES Unit_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Unit_obj OBJ_;
		Unit_obj();

	public:
		enum { _hx_ClassId = 0x0b193811 };

		void __construct( ::Element element,::String name, ::Dynamic params);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="roaming.Unit")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"roaming.Unit"); }
		static hx::ObjectPtr< Unit_obj > __new( ::Element element,::String name, ::Dynamic params);
		static hx::ObjectPtr< Unit_obj > __alloc(hx::Ctx *_hx_ctx, ::Element element,::String name, ::Dynamic params);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Unit_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Unit","\xa4","\xf6","\x82","\x38"); }

		 ::ID id;
		::String name;
		 ::Element element;
		::Array< ::Dynamic> wheel;
		 ::haxe::ds::EnumValueMap attribs;
		int level;
		 ::battle::_hx_struct::Pool xp;
		void gainXP(int count);
		::Dynamic gainXP_dyn();

		virtual void levelUp();
		::Dynamic levelUp_dyn();

		 ::Dynamic toParams();
		::Dynamic toParams_dyn();

		 ::ID getID( ::Element element);
		::Dynamic getID_dyn();

		::String getDefaultName( ::Element element);
		::Dynamic getDefaultName_dyn();

};

} // end namespace roaming

#endif /* INCLUDED_roaming_Unit */ 