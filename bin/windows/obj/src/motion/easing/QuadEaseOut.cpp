// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_QuadEaseOut
#include <motion/easing/QuadEaseOut.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2f0053271bfdac61_106_new,"motion.easing.QuadEaseOut","new",0x1ecade00,"motion.easing.QuadEaseOut.new","motion/easing/Quad.hx",106,0xc538468c)
HX_LOCAL_STACK_FRAME(_hx_pos_2f0053271bfdac61_115_calculate,"motion.easing.QuadEaseOut","calculate",0x6b939b06,"motion.easing.QuadEaseOut.calculate","motion/easing/Quad.hx",115,0xc538468c)
HX_LOCAL_STACK_FRAME(_hx_pos_2f0053271bfdac61_122_ease,"motion.easing.QuadEaseOut","ease",0xccc16a4e,"motion.easing.QuadEaseOut.ease","motion/easing/Quad.hx",122,0xc538468c)
namespace motion{
namespace easing{

void QuadEaseOut_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2f0053271bfdac61_106_new)
            	}

Dynamic QuadEaseOut_obj::__CreateEmpty() { return new QuadEaseOut_obj; }

void *QuadEaseOut_obj::_hx_vtable = 0;

Dynamic QuadEaseOut_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< QuadEaseOut_obj > _hx_result = new QuadEaseOut_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool QuadEaseOut_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1d4ccc18;
}

static ::motion::easing::IEasing_obj _hx_motion_easing_QuadEaseOut__hx_motion_easing_IEasing= {
	( Float (hx::Object::*)(Float))&::motion::easing::QuadEaseOut_obj::calculate,
	( Float (hx::Object::*)(Float,Float,Float,Float))&::motion::easing::QuadEaseOut_obj::ease,
};

void *QuadEaseOut_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x864e8b53: return &_hx_motion_easing_QuadEaseOut__hx_motion_easing_IEasing;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

Float QuadEaseOut_obj::calculate(Float k){
            	HX_STACKFRAME(&_hx_pos_2f0053271bfdac61_115_calculate)
HXDLIN( 115)		return (-(k) * (k - (int)2));
            	}


HX_DEFINE_DYNAMIC_FUNC1(QuadEaseOut_obj,calculate,return )

Float QuadEaseOut_obj::ease(Float t,Float b,Float c,Float d){
            	HX_STACKFRAME(&_hx_pos_2f0053271bfdac61_122_ease)
HXDLIN( 122)		t = ((Float)t / (Float)d);
HXDLIN( 122)		Float _hx_tmp = (-(c) * t);
HXDLIN( 122)		return ((_hx_tmp * (t - (int)2)) + b);
            	}


HX_DEFINE_DYNAMIC_FUNC4(QuadEaseOut_obj,ease,return )


hx::ObjectPtr< QuadEaseOut_obj > QuadEaseOut_obj::__new() {
	hx::ObjectPtr< QuadEaseOut_obj > __this = new QuadEaseOut_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< QuadEaseOut_obj > QuadEaseOut_obj::__alloc(hx::Ctx *_hx_ctx) {
	QuadEaseOut_obj *__this = (QuadEaseOut_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(QuadEaseOut_obj), false, "motion.easing.QuadEaseOut"));
	*(void **)__this = QuadEaseOut_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

QuadEaseOut_obj::QuadEaseOut_obj()
{
}

hx::Val QuadEaseOut_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return hx::Val( ease_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return hx::Val( calculate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *QuadEaseOut_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *QuadEaseOut_obj_sStaticStorageInfo = 0;
#endif

static ::String QuadEaseOut_obj_sMemberFields[] = {
	HX_HCSTRING("calculate","\x66","\x95","\x6a","\x05"),
	HX_HCSTRING("ease","\xee","\x8b","\x0c","\x43"),
	::String(null()) };

static void QuadEaseOut_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuadEaseOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void QuadEaseOut_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadEaseOut_obj::__mClass,"__mClass");
};

#endif

hx::Class QuadEaseOut_obj::__mClass;

void QuadEaseOut_obj::__register()
{
	hx::Object *dummy = new QuadEaseOut_obj;
	QuadEaseOut_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("motion.easing.QuadEaseOut","\x0e","\x1e","\x0c","\x75");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = QuadEaseOut_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(QuadEaseOut_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QuadEaseOut_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = QuadEaseOut_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QuadEaseOut_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QuadEaseOut_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace motion
} // end namespace easing