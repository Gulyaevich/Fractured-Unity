// Generated by Haxe 3.4.7
#ifndef INCLUDED_SSprite
#define INCLUDED_SSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(SSprite)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)



class HXCPP_CLASS_ATTRIBUTES SSprite_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef SSprite_obj OBJ_;
		SSprite_obj();

	public:
		enum { _hx_ClassId = 0x739fd0b8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="SSprite")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"SSprite"); }
		static hx::ObjectPtr< SSprite_obj > __new();
		static hx::ObjectPtr< SSprite_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SSprite_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SSprite","\xb8","\xd0","\x9f","\x73"); }

		void add( ::openfl::display::DisplayObject object,Float x,Float y);
		::Dynamic add_dyn();

		void remove( ::openfl::display::DisplayObject object);
		::Dynamic remove_dyn();

};


#endif /* INCLUDED_SSprite */ 