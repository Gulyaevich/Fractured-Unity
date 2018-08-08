// Generated by Haxe 3.4.7
#ifndef INCLUDED_graphic_HintTextfield
#define INCLUDED_graphic_HintTextfield

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_SSprite
#include <SSprite.h>
#endif
HX_DECLARE_CLASS0(SSprite)
HX_DECLARE_CLASS1(graphic,HintTextfield)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace graphic{


class HXCPP_CLASS_ATTRIBUTES HintTextfield_obj : public  ::SSprite_obj
{
	public:
		typedef  ::SSprite_obj super;
		typedef HintTextfield_obj OBJ_;
		HintTextfield_obj();

	public:
		enum { _hx_ClassId = 0x6d4e35de };

		void __construct(::String header,::String text);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="graphic.HintTextfield")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"graphic.HintTextfield"); }
		static hx::ObjectPtr< HintTextfield_obj > __new(::String header,::String text);
		static hx::ObjectPtr< HintTextfield_obj > __alloc(hx::Ctx *_hx_ctx,::String header,::String text);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HintTextfield_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("HintTextfield","\x46","\x3e","\x1e","\xbf"); }

		 ::openfl::text::TextField headertf;
		 ::openfl::display::Sprite headerbox;
		 ::openfl::text::TextField tf;
		 ::openfl::display::Sprite box;
		Float textHeight;
		void drawHeader(::String header);
		::Dynamic drawHeader_dyn();

		void drawBody(::String text);
		::Dynamic drawBody_dyn();

		Float get_textHeight();
		::Dynamic get_textHeight_dyn();

};

} // end namespace graphic

#endif /* INCLUDED_graphic_HintTextfield */ 
