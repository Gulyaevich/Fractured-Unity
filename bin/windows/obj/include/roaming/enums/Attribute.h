// Generated by Haxe 3.4.7
#ifndef INCLUDED_roaming_enums_Attribute
#define INCLUDED_roaming_enums_Attribute

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(roaming,enums,Attribute)
namespace roaming{
namespace enums{


class Attribute_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef Attribute_obj OBJ_;

	public:
		Attribute_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_HCSTRING("roaming.enums.Attribute","\x0b","\x53","\xb4","\xee"); }
		::String __ToString() const { return HX_HCSTRING("Attribute.","\xb2","\xac","\x22","\x8e") + _hx_tag; }

		static ::roaming::enums::Attribute Flow;
		static inline ::roaming::enums::Attribute Flow_dyn() { return Flow; }
		static ::roaming::enums::Attribute Intellect;
		static inline ::roaming::enums::Attribute Intellect_dyn() { return Intellect; }
		static ::roaming::enums::Attribute Strength;
		static inline ::roaming::enums::Attribute Strength_dyn() { return Strength; }
};

} // end namespace roaming
} // end namespace enums

#endif /* INCLUDED_roaming_enums_Attribute */ 