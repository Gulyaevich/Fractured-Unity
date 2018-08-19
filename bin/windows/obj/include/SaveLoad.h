// Generated by Haxe 3.4.7
#ifndef INCLUDED_SaveLoad
#define INCLUDED_SaveLoad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Progress)
HX_DECLARE_CLASS0(SaveLoad)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS1(roaming,Player)
HX_DECLARE_CLASS1(roaming,Unit)



class HXCPP_CLASS_ATTRIBUTES SaveLoad_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SaveLoad_obj OBJ_;
		SaveLoad_obj();

	public:
		enum { _hx_ClassId = 0x3b6ff487 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="SaveLoad")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"SaveLoad"); }
		static hx::ObjectPtr< SaveLoad_obj > __new();
		static hx::ObjectPtr< SaveLoad_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SaveLoad_obj();

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
		::String __ToString() const { return HX_HCSTRING("SaveLoad","\x23","\xf0","\x22","\xd5"); }

		static void __boot();
		static ::String CORRUPTION_ERROR;
		static  ::Xml createProgressNode( ::Progress progress);
		static ::Dynamic createProgressNode_dyn();

		static  ::Xml createPlayerNode( ::roaming::Player player);
		static ::Dynamic createPlayerNode_dyn();

		static ::String generateMD5( ::Xml xml);
		static ::Dynamic generateMD5_dyn();

		static bool checkMD5( ::Xml xml);
		static ::Dynamic checkMD5_dyn();

		static ::String exefolder();
		static ::Dynamic exefolder_dyn();

		 ::Xml xml;
		void open(::String fileName);
		::Dynamic open_dyn();

		void close();
		::Dynamic close_dyn();

		void save( ::Progress progress, ::roaming::Player player,::String fileName);
		::Dynamic save_dyn();

		 ::Progress loadProgress();
		::Dynamic loadProgress_dyn();

		 ::roaming::Player loadPlayer();
		::Dynamic loadPlayer_dyn();

};


#endif /* INCLUDED_SaveLoad */ 
