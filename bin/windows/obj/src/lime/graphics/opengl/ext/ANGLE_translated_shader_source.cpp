// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_translated_shader_source
#include <lime/graphics/opengl/ext/ANGLE_translated_shader_source.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_276be14287d0ce94_9_new,"lime.graphics.opengl.ext.ANGLE_translated_shader_source","new",0xe2c2076c,"lime.graphics.opengl.ext.ANGLE_translated_shader_source.new","lime/graphics/opengl/ext/ANGLE_translated_shader_source.hx",9,0xc9ee26a2)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void ANGLE_translated_shader_source_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_276be14287d0ce94_9_new)
HXDLIN(   9)		this->TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE = (int)37792;
            	}

Dynamic ANGLE_translated_shader_source_obj::__CreateEmpty() { return new ANGLE_translated_shader_source_obj; }

void *ANGLE_translated_shader_source_obj::_hx_vtable = 0;

Dynamic ANGLE_translated_shader_source_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ANGLE_translated_shader_source_obj > _hx_result = new ANGLE_translated_shader_source_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ANGLE_translated_shader_source_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x16b433c2;
}


ANGLE_translated_shader_source_obj::ANGLE_translated_shader_source_obj()
{
}

hx::Val ANGLE_translated_shader_source_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 37:
		if (HX_FIELD_EQ(inName,"TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE") ) { return hx::Val( TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ANGLE_translated_shader_source_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 37:
		if (HX_FIELD_EQ(inName,"TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE") ) { TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ANGLE_translated_shader_source_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE","\xad","\x31","\x15","\x74"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ANGLE_translated_shader_source_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ANGLE_translated_shader_source_obj,TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE),HX_HCSTRING("TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE","\xad","\x31","\x15","\x74")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ANGLE_translated_shader_source_obj_sStaticStorageInfo = 0;
#endif

static ::String ANGLE_translated_shader_source_obj_sMemberFields[] = {
	HX_HCSTRING("TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE","\xad","\x31","\x15","\x74"),
	::String(null()) };

static void ANGLE_translated_shader_source_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ANGLE_translated_shader_source_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ANGLE_translated_shader_source_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ANGLE_translated_shader_source_obj::__mClass,"__mClass");
};

#endif

hx::Class ANGLE_translated_shader_source_obj::__mClass;

void ANGLE_translated_shader_source_obj::__register()
{
	hx::Object *dummy = new ANGLE_translated_shader_source_obj;
	ANGLE_translated_shader_source_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.ANGLE_translated_shader_source","\x7a","\x21","\x7f","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ANGLE_translated_shader_source_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ANGLE_translated_shader_source_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ANGLE_translated_shader_source_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ANGLE_translated_shader_source_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ANGLE_translated_shader_source_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ANGLE_translated_shader_source_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext