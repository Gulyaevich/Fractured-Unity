// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoFTFontFace_CairoFTFontFace_Impl_
#include <lime/graphics/cairo/_CairoFTFontFace/CairoFTFontFace_Impl_.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e6becfba65ad45cf_17__new,"lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_","_new",0x5b2d72e8,"lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_._new","lime/graphics/cairo/CairoFTFontFace.hx",17,0x9647c8cd)
HX_LOCAL_STACK_FRAME(_hx_pos_e6becfba65ad45cf_27_create,"lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_","create",0x7e957443,"lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_.create","lime/graphics/cairo/CairoFTFontFace.hx",27,0x9647c8cd)
HX_LOCAL_STACK_FRAME(_hx_pos_e6becfba65ad45cf_14_boot,"lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_","boot",0x5d29e1b9,"lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_.boot","lime/graphics/cairo/CairoFTFontFace.hx",14,0x9647c8cd)
namespace lime{
namespace graphics{
namespace cairo{
namespace _CairoFTFontFace{

void CairoFTFontFace_Impl__obj::__construct() { }

Dynamic CairoFTFontFace_Impl__obj::__CreateEmpty() { return new CairoFTFontFace_Impl__obj; }

void *CairoFTFontFace_Impl__obj::_hx_vtable = 0;

Dynamic CairoFTFontFace_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CairoFTFontFace_Impl__obj > _hx_result = new CairoFTFontFace_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CairoFTFontFace_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7dcd2697;
}

int CairoFTFontFace_Impl__obj::FT_LOAD_FORCE_AUTOHINT;

 ::Dynamic CairoFTFontFace_Impl__obj::_new(){
            	HX_STACKFRAME(&_hx_pos_e6becfba65ad45cf_17__new)
HXDLIN(  17)		 ::Dynamic this1 = (int)0;
HXDLIN(  17)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(CairoFTFontFace_Impl__obj,_new,return )

 ::Dynamic CairoFTFontFace_Impl__obj::create( ::lime::text::Font face,int loadFlags){
            	HX_STACKFRAME(&_hx_pos_e6becfba65ad45cf_27_create)
HXDLIN(  27)		return ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_cairo_ft_font_face_create(hx::DynamicPtr(face->src),loadFlags)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CairoFTFontFace_Impl__obj,create,return )


CairoFTFontFace_Impl__obj::CairoFTFontFace_Impl__obj()
{
}

bool CairoFTFontFace_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CairoFTFontFace_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo CairoFTFontFace_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &CairoFTFontFace_Impl__obj::FT_LOAD_FORCE_AUTOHINT,HX_HCSTRING("FT_LOAD_FORCE_AUTOHINT","\x32","\xdd","\xa6","\xd5")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void CairoFTFontFace_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CairoFTFontFace_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CairoFTFontFace_Impl__obj::FT_LOAD_FORCE_AUTOHINT,"FT_LOAD_FORCE_AUTOHINT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CairoFTFontFace_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CairoFTFontFace_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CairoFTFontFace_Impl__obj::FT_LOAD_FORCE_AUTOHINT,"FT_LOAD_FORCE_AUTOHINT");
};

#endif

hx::Class CairoFTFontFace_Impl__obj::__mClass;

static ::String CairoFTFontFace_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("FT_LOAD_FORCE_AUTOHINT","\x32","\xdd","\xa6","\xd5"),
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	::String(null())
};

void CairoFTFontFace_Impl__obj::__register()
{
	hx::Object *dummy = new CairoFTFontFace_Impl__obj;
	CairoFTFontFace_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.cairo._CairoFTFontFace.CairoFTFontFace_Impl_","\x47","\xf0","\x50","\x48");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CairoFTFontFace_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CairoFTFontFace_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CairoFTFontFace_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CairoFTFontFace_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CairoFTFontFace_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CairoFTFontFace_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CairoFTFontFace_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CairoFTFontFace_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e6becfba65ad45cf_14_boot)
HXDLIN(  14)		FT_LOAD_FORCE_AUTOHINT = (int)32;
            	}
}

} // end namespace lime
} // end namespace graphics
} // end namespace cairo
} // end namespace _CairoFTFontFace