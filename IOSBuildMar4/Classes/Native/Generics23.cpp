﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1<System.Xml.Linq.XElement>
struct XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99;
// MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Xml.Linq.XAttribute>
struct XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C;
// MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Xml.Linq.XElement>
struct XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053;
// MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptionProvider`1<System.Object>
struct XTypeDescriptionProvider_1_t3E70768CA58B1E0422A52E2D980397207AEC99DB;
// MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptor`1<System.Object>
struct XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68;
// System.Attribute[]
struct AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.ComponentModel.PropertyDescriptor[]
struct PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_tF551C6836E2C7F849595B7EFAFDDD0C3A86BA62C;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.ComponentModel.CustomTypeDescriptor
struct CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t7D54ECDB435500E465AB8ED63654818C8D79B1D9;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Xml.Linq.XAttribute
struct XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7;
// MS.Internal.Xml.Linq.ComponentModel.XAttributeValuePropertyDescriptor
struct XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB;
// System.Xml.Linq.XElement
struct XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5;
// MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor
struct XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73;
// MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor
struct XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959;
// MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor
struct XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818;
// MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor
struct XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6;
// MS.Internal.Xml.Linq.ComponentModel.XElementValuePropertyDescriptor
struct XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F;
// MS.Internal.Xml.Linq.ComponentModel.XElementXmlPropertyDescriptor
struct XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9;
// System.Xml.Linq.XName
struct XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956;
// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
struct EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4;

IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeDescriptor_t7B173A6626B330AB5B77345C4DE4AB6C7B38CA6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeType* XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_0_0_0_var;

struct AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4;
struct PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.ComponentModel.CustomTypeDescriptor
struct CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.CustomTypeDescriptor::_parent
	RuntimeObject* ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC, ____parent_0)); }
	inline RuntimeObject* get__parent_0() const { return ____parent_0; }
	inline RuntimeObject** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RuntimeObject* value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}
};


// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.String System.ComponentModel.MemberDescriptor::displayName
	String_t* ___displayName_1;
	// System.Int32 System.ComponentModel.MemberDescriptor::nameHash
	int32_t ___nameHash_2;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attributeCollection
	AttributeCollection_tF551C6836E2C7F849595B7EFAFDDD0C3A86BA62C * ___attributeCollection_3;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attributes
	AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* ___attributes_4;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::originalAttributes
	AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* ___originalAttributes_5;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFiltered
	bool ___attributesFiltered_6;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFilled
	bool ___attributesFilled_7;
	// System.Int32 System.ComponentModel.MemberDescriptor::metadataVersion
	int32_t ___metadataVersion_8;
	// System.String System.ComponentModel.MemberDescriptor::category
	String_t* ___category_9;
	// System.String System.ComponentModel.MemberDescriptor::description
	String_t* ___description_10;
	// System.Object System.ComponentModel.MemberDescriptor::lockCookie
	RuntimeObject * ___lockCookie_11;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_displayName_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___displayName_1)); }
	inline String_t* get_displayName_1() const { return ___displayName_1; }
	inline String_t** get_address_of_displayName_1() { return &___displayName_1; }
	inline void set_displayName_1(String_t* value)
	{
		___displayName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayName_1), (void*)value);
	}

	inline static int32_t get_offset_of_nameHash_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___nameHash_2)); }
	inline int32_t get_nameHash_2() const { return ___nameHash_2; }
	inline int32_t* get_address_of_nameHash_2() { return &___nameHash_2; }
	inline void set_nameHash_2(int32_t value)
	{
		___nameHash_2 = value;
	}

	inline static int32_t get_offset_of_attributeCollection_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___attributeCollection_3)); }
	inline AttributeCollection_tF551C6836E2C7F849595B7EFAFDDD0C3A86BA62C * get_attributeCollection_3() const { return ___attributeCollection_3; }
	inline AttributeCollection_tF551C6836E2C7F849595B7EFAFDDD0C3A86BA62C ** get_address_of_attributeCollection_3() { return &___attributeCollection_3; }
	inline void set_attributeCollection_3(AttributeCollection_tF551C6836E2C7F849595B7EFAFDDD0C3A86BA62C * value)
	{
		___attributeCollection_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributeCollection_3), (void*)value);
	}

	inline static int32_t get_offset_of_attributes_4() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___attributes_4)); }
	inline AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* get_attributes_4() const { return ___attributes_4; }
	inline AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4** get_address_of_attributes_4() { return &___attributes_4; }
	inline void set_attributes_4(AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* value)
	{
		___attributes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributes_4), (void*)value);
	}

	inline static int32_t get_offset_of_originalAttributes_5() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___originalAttributes_5)); }
	inline AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* get_originalAttributes_5() const { return ___originalAttributes_5; }
	inline AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4** get_address_of_originalAttributes_5() { return &___originalAttributes_5; }
	inline void set_originalAttributes_5(AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* value)
	{
		___originalAttributes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalAttributes_5), (void*)value);
	}

	inline static int32_t get_offset_of_attributesFiltered_6() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___attributesFiltered_6)); }
	inline bool get_attributesFiltered_6() const { return ___attributesFiltered_6; }
	inline bool* get_address_of_attributesFiltered_6() { return &___attributesFiltered_6; }
	inline void set_attributesFiltered_6(bool value)
	{
		___attributesFiltered_6 = value;
	}

	inline static int32_t get_offset_of_attributesFilled_7() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___attributesFilled_7)); }
	inline bool get_attributesFilled_7() const { return ___attributesFilled_7; }
	inline bool* get_address_of_attributesFilled_7() { return &___attributesFilled_7; }
	inline void set_attributesFilled_7(bool value)
	{
		___attributesFilled_7 = value;
	}

	inline static int32_t get_offset_of_metadataVersion_8() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___metadataVersion_8)); }
	inline int32_t get_metadataVersion_8() const { return ___metadataVersion_8; }
	inline int32_t* get_address_of_metadataVersion_8() { return &___metadataVersion_8; }
	inline void set_metadataVersion_8(int32_t value)
	{
		___metadataVersion_8 = value;
	}

	inline static int32_t get_offset_of_category_9() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___category_9)); }
	inline String_t* get_category_9() const { return ___category_9; }
	inline String_t** get_address_of_category_9() { return &___category_9; }
	inline void set_category_9(String_t* value)
	{
		___category_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___category_9), (void*)value);
	}

	inline static int32_t get_offset_of_description_10() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___description_10)); }
	inline String_t* get_description_10() const { return ___description_10; }
	inline String_t** get_address_of_description_10() { return &___description_10; }
	inline void set_description_10(String_t* value)
	{
		___description_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_10), (void*)value);
	}

	inline static int32_t get_offset_of_lockCookie_11() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___lockCookie_11)); }
	inline RuntimeObject * get_lockCookie_11() const { return ___lockCookie_11; }
	inline RuntimeObject ** get_address_of_lockCookie_11() { return &___lockCookie_11; }
	inline void set_lockCookie_11(RuntimeObject * value)
	{
		___lockCookie_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lockCookie_11), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.ComponentModel.PropertyDescriptorCollection::cachedFoundProperties
	RuntimeObject* ___cachedFoundProperties_1;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::cachedIgnoreCase
	bool ___cachedIgnoreCase_2;
	// System.ComponentModel.PropertyDescriptor[] System.ComponentModel.PropertyDescriptorCollection::properties
	PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75* ___properties_3;
	// System.Int32 System.ComponentModel.PropertyDescriptorCollection::propCount
	int32_t ___propCount_4;
	// System.String[] System.ComponentModel.PropertyDescriptorCollection::namedSort
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___namedSort_5;
	// System.Collections.IComparer System.ComponentModel.PropertyDescriptorCollection::comparer
	RuntimeObject* ___comparer_6;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::propsOwned
	bool ___propsOwned_7;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::needSort
	bool ___needSort_8;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::readOnly
	bool ___readOnly_9;

public:
	inline static int32_t get_offset_of_cachedFoundProperties_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___cachedFoundProperties_1)); }
	inline RuntimeObject* get_cachedFoundProperties_1() const { return ___cachedFoundProperties_1; }
	inline RuntimeObject** get_address_of_cachedFoundProperties_1() { return &___cachedFoundProperties_1; }
	inline void set_cachedFoundProperties_1(RuntimeObject* value)
	{
		___cachedFoundProperties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedFoundProperties_1), (void*)value);
	}

	inline static int32_t get_offset_of_cachedIgnoreCase_2() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___cachedIgnoreCase_2)); }
	inline bool get_cachedIgnoreCase_2() const { return ___cachedIgnoreCase_2; }
	inline bool* get_address_of_cachedIgnoreCase_2() { return &___cachedIgnoreCase_2; }
	inline void set_cachedIgnoreCase_2(bool value)
	{
		___cachedIgnoreCase_2 = value;
	}

	inline static int32_t get_offset_of_properties_3() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___properties_3)); }
	inline PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75* get_properties_3() const { return ___properties_3; }
	inline PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75** get_address_of_properties_3() { return &___properties_3; }
	inline void set_properties_3(PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75* value)
	{
		___properties_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_3), (void*)value);
	}

	inline static int32_t get_offset_of_propCount_4() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___propCount_4)); }
	inline int32_t get_propCount_4() const { return ___propCount_4; }
	inline int32_t* get_address_of_propCount_4() { return &___propCount_4; }
	inline void set_propCount_4(int32_t value)
	{
		___propCount_4 = value;
	}

	inline static int32_t get_offset_of_namedSort_5() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___namedSort_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_namedSort_5() const { return ___namedSort_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_namedSort_5() { return &___namedSort_5; }
	inline void set_namedSort_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___namedSort_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namedSort_5), (void*)value);
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_propsOwned_7() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___propsOwned_7)); }
	inline bool get_propsOwned_7() const { return ___propsOwned_7; }
	inline bool* get_address_of_propsOwned_7() { return &___propsOwned_7; }
	inline void set_propsOwned_7(bool value)
	{
		___propsOwned_7 = value;
	}

	inline static int32_t get_offset_of_needSort_8() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___needSort_8)); }
	inline bool get_needSort_8() const { return ___needSort_8; }
	inline bool* get_address_of_needSort_8() { return &___needSort_8; }
	inline void set_needSort_8(bool value)
	{
		___needSort_8 = value;
	}

	inline static int32_t get_offset_of_readOnly_9() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___readOnly_9)); }
	inline bool get_readOnly_9() const { return ___readOnly_9; }
	inline bool* get_address_of_readOnly_9() { return &___readOnly_9; }
	inline void set_readOnly_9(bool value)
	{
		___readOnly_9 = value;
	}
};

struct PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_StaticFields
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Empty
	PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_StaticFields, ___Empty_0)); }
	inline PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * get_Empty_0() const { return ___Empty_0; }
	inline PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0  : public RuntimeObject
{
public:
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptionProvider::_parent
	TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * ____parent_0;
	// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::_emptyDescriptor
	EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4 * ____emptyDescriptor_1;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0, ____parent_0)); }
	inline TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * get__parent_0() const { return ____parent_0; }
	inline TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__emptyDescriptor_1() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0, ____emptyDescriptor_1)); }
	inline EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4 * get__emptyDescriptor_1() const { return ____emptyDescriptor_1; }
	inline EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4 ** get_address_of__emptyDescriptor_1() { return &____emptyDescriptor_1; }
	inline void set__emptyDescriptor_1(EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4 * value)
	{
		____emptyDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyDescriptor_1), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptionProvider`1<System.Object>
struct XTypeDescriptionProvider_1_t3E70768CA58B1E0422A52E2D980397207AEC99DB  : public TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0
{
public:

public:
};


// MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptor`1<System.Object>
struct XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68  : public CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC
{
public:

public:
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B  : public MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * ___converter_12;
	// System.Collections.Hashtable System.ComponentModel.PropertyDescriptor::valueChangedHandlers
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___valueChangedHandlers_13;
	// System.Object[] System.ComponentModel.PropertyDescriptor::editors
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___editors_14;
	// System.Type[] System.ComponentModel.PropertyDescriptor::editorTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___editorTypes_15;
	// System.Int32 System.ComponentModel.PropertyDescriptor::editorCount
	int32_t ___editorCount_16;

public:
	inline static int32_t get_offset_of_converter_12() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B, ___converter_12)); }
	inline TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * get_converter_12() const { return ___converter_12; }
	inline TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 ** get_address_of_converter_12() { return &___converter_12; }
	inline void set_converter_12(TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * value)
	{
		___converter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___converter_12), (void*)value);
	}

	inline static int32_t get_offset_of_valueChangedHandlers_13() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B, ___valueChangedHandlers_13)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_valueChangedHandlers_13() const { return ___valueChangedHandlers_13; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_valueChangedHandlers_13() { return &___valueChangedHandlers_13; }
	inline void set_valueChangedHandlers_13(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___valueChangedHandlers_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueChangedHandlers_13), (void*)value);
	}

	inline static int32_t get_offset_of_editors_14() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B, ___editors_14)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_editors_14() const { return ___editors_14; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_editors_14() { return &___editors_14; }
	inline void set_editors_14(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___editors_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___editors_14), (void*)value);
	}

	inline static int32_t get_offset_of_editorTypes_15() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B, ___editorTypes_15)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_editorTypes_15() const { return ___editorTypes_15; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_editorTypes_15() { return &___editorTypes_15; }
	inline void set_editorTypes_15(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___editorTypes_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___editorTypes_15), (void*)value);
	}

	inline static int32_t get_offset_of_editorCount_16() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B, ___editorCount_16)); }
	inline int32_t get_editorCount_16() const { return ___editorCount_16; }
	inline int32_t* get_address_of_editorCount_16() { return &___editorCount_16; }
	inline void set_editorCount_16(int32_t value)
	{
		___editorCount_16 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XAttribute,System.String>
struct XPropertyDescriptor_2_t5BD42DA9A7C3AD4D0C490AA8369BBBC8501F75A6  : public PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B
{
public:

public:
};


// MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XElement,System.Collections.Generic.IEnumerable`1<System.Xml.Linq.XElement>>
struct XPropertyDescriptor_2_tE396AEA8421C6F394CAE7E75CC2A6E4E84D8CA72  : public PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B
{
public:

public:
};


// MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XElement,System.Object>
struct XPropertyDescriptor_2_t518476A842EA5EB8FEEC6057D818BDAE7441E2B2  : public PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B
{
public:

public:
};


// MS.Internal.Xml.Linq.ComponentModel.XPropertyDescriptor`2<System.Xml.Linq.XElement,System.String>
struct XPropertyDescriptor_2_tBE7145AD65B0D7CC4AAC61D812C87BABA3893ADF  : public PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B
{
public:

public:
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XAttributeValuePropertyDescriptor
struct XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB  : public XPropertyDescriptor_2_t5BD42DA9A7C3AD4D0C490AA8369BBBC8501F75A6
{
public:
	// System.Xml.Linq.XAttribute MS.Internal.Xml.Linq.ComponentModel.XAttributeValuePropertyDescriptor::attribute
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___attribute_17;

public:
	inline static int32_t get_offset_of_attribute_17() { return static_cast<int32_t>(offsetof(XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB, ___attribute_17)); }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * get_attribute_17() const { return ___attribute_17; }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 ** get_address_of_attribute_17() { return &___attribute_17; }
	inline void set_attribute_17(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * value)
	{
		___attribute_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attribute_17), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor
struct XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73  : public XPropertyDescriptor_2_t518476A842EA5EB8FEEC6057D818BDAE7441E2B2
{
public:
	// MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Xml.Linq.XAttribute> MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor::value
	XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C * ___value_17;
	// System.Xml.Linq.XAttribute MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor::changeState
	XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * ___changeState_18;

public:
	inline static int32_t get_offset_of_value_17() { return static_cast<int32_t>(offsetof(XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73, ___value_17)); }
	inline XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C * get_value_17() const { return ___value_17; }
	inline XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C ** get_address_of_value_17() { return &___value_17; }
	inline void set_value_17(XDeferredSingleton_1_t469B02EBEFECB66AB7A983D91C64EBAC3CEF3B7C * value)
	{
		___value_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_17), (void*)value);
	}

	inline static int32_t get_offset_of_changeState_18() { return static_cast<int32_t>(offsetof(XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73, ___changeState_18)); }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * get_changeState_18() const { return ___changeState_18; }
	inline XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 ** get_address_of_changeState_18() { return &___changeState_18; }
	inline void set_changeState_18(XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7 * value)
	{
		___changeState_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeState_18), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor
struct XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959  : public XPropertyDescriptor_2_tE396AEA8421C6F394CAE7E75CC2A6E4E84D8CA72
{
public:
	// MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1<System.Xml.Linq.XElement> MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor::value
	XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * ___value_17;
	// System.Xml.Linq.XName MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor::changeState
	XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * ___changeState_18;

public:
	inline static int32_t get_offset_of_value_17() { return static_cast<int32_t>(offsetof(XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959, ___value_17)); }
	inline XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * get_value_17() const { return ___value_17; }
	inline XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 ** get_address_of_value_17() { return &___value_17; }
	inline void set_value_17(XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * value)
	{
		___value_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_17), (void*)value);
	}

	inline static int32_t get_offset_of_changeState_18() { return static_cast<int32_t>(offsetof(XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959, ___changeState_18)); }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * get_changeState_18() const { return ___changeState_18; }
	inline XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 ** get_address_of_changeState_18() { return &___changeState_18; }
	inline void set_changeState_18(XName_t03F670C1FC8B039AC94EB7B0BAE881E6E3545956 * value)
	{
		___changeState_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeState_18), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor
struct XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818  : public XPropertyDescriptor_2_t518476A842EA5EB8FEEC6057D818BDAE7441E2B2
{
public:
	// MS.Internal.Xml.Linq.ComponentModel.XDeferredSingleton`1<System.Xml.Linq.XElement> MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor::value
	XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053 * ___value_17;
	// System.Xml.Linq.XElement MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor::changeState
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___changeState_18;

public:
	inline static int32_t get_offset_of_value_17() { return static_cast<int32_t>(offsetof(XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818, ___value_17)); }
	inline XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053 * get_value_17() const { return ___value_17; }
	inline XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053 ** get_address_of_value_17() { return &___value_17; }
	inline void set_value_17(XDeferredSingleton_1_tC8ACCE75BA35F9EA90007968A1046C9D80B02053 * value)
	{
		___value_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_17), (void*)value);
	}

	inline static int32_t get_offset_of_changeState_18() { return static_cast<int32_t>(offsetof(XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818, ___changeState_18)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_changeState_18() const { return ___changeState_18; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_changeState_18() { return &___changeState_18; }
	inline void set_changeState_18(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___changeState_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeState_18), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor
struct XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6  : public XPropertyDescriptor_2_tE396AEA8421C6F394CAE7E75CC2A6E4E84D8CA72
{
public:
	// MS.Internal.Xml.Linq.ComponentModel.XDeferredAxis`1<System.Xml.Linq.XElement> MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor::value
	XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * ___value_17;
	// System.Object MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor::changeState
	RuntimeObject * ___changeState_18;

public:
	inline static int32_t get_offset_of_value_17() { return static_cast<int32_t>(offsetof(XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6, ___value_17)); }
	inline XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * get_value_17() const { return ___value_17; }
	inline XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 ** get_address_of_value_17() { return &___value_17; }
	inline void set_value_17(XDeferredAxis_1_t6B228CA17667B4EE1BA6925D4275EA819628BE99 * value)
	{
		___value_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_17), (void*)value);
	}

	inline static int32_t get_offset_of_changeState_18() { return static_cast<int32_t>(offsetof(XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6, ___changeState_18)); }
	inline RuntimeObject * get_changeState_18() const { return ___changeState_18; }
	inline RuntimeObject ** get_address_of_changeState_18() { return &___changeState_18; }
	inline void set_changeState_18(RuntimeObject * value)
	{
		___changeState_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___changeState_18), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementValuePropertyDescriptor
struct XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F  : public XPropertyDescriptor_2_tBE7145AD65B0D7CC4AAC61D812C87BABA3893ADF
{
public:
	// System.Xml.Linq.XElement MS.Internal.Xml.Linq.ComponentModel.XElementValuePropertyDescriptor::element
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___element_17;

public:
	inline static int32_t get_offset_of_element_17() { return static_cast<int32_t>(offsetof(XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F, ___element_17)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_element_17() const { return ___element_17; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_element_17() { return &___element_17; }
	inline void set_element_17(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___element_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_17), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XElementXmlPropertyDescriptor
struct XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9  : public XPropertyDescriptor_2_tBE7145AD65B0D7CC4AAC61D812C87BABA3893ADF
{
public:
	// System.Xml.Linq.XElement MS.Internal.Xml.Linq.ComponentModel.XElementXmlPropertyDescriptor::element
	XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * ___element_17;

public:
	inline static int32_t get_offset_of_element_17() { return static_cast<int32_t>(offsetof(XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9, ___element_17)); }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * get_element_17() const { return ___element_17; }
	inline XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 ** get_address_of_element_17() { return &___element_17; }
	inline void set_element_17(XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5 * value)
	{
		___element_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_17), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Attribute[]
struct AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * m_Items[1];

public:
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.ComponentModel.PropertyDescriptor[]
struct PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * m_Items[1];

public:
	inline PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::GetProvider(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * TypeDescriptor_GetProvider_m11FFA30C459E9A3C61DEA0B8A7F96B09545BC86B (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.ComponentModel.TypeDescriptionProvider::.ctor(System.ComponentModel.TypeDescriptionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeDescriptionProvider__ctor_m6743A730A14CDF72C690886FDECCF202BC156448 (TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * __this, TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * ___parent0, const RuntimeMethod* method);
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeDescriptionProvider_GetTypeDescriptor_m2ED48670C3D29D6A1CFE63D0F019BBFE8D03372E (TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * __this, Type_t * ___objectType0, RuntimeObject * ___instance1, const RuntimeMethod* method);
// System.Void System.ComponentModel.CustomTypeDescriptor::.ctor(System.ComponentModel.ICustomTypeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomTypeDescriptor__ctor_m83CFDC2A68D4C72A3B5C0A79AEAF41486AAAB7DF (CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC * __this, RuntimeObject* ___parent0, const RuntimeMethod* method);
// System.Void System.ComponentModel.PropertyDescriptorCollection::.ctor(System.ComponentModel.PropertyDescriptor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyDescriptorCollection__ctor_m124991BF4E348817ACCC6C4373FD66B31566E425 (PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * __this, PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75* ___properties0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementAttributePropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementAttributePropertyDescriptor__ctor_mD710FF4686F1C385B0B65277AC4F045CAA17C60D (XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73 * __this, const RuntimeMethod* method);
// System.Int32 System.ComponentModel.PropertyDescriptorCollection::Add(System.ComponentModel.PropertyDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PropertyDescriptorCollection_Add_mFD0446EF7C7F01E2DDBBA8F0ED3F8C5032CC21BA (PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * __this, PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * ___value0, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementDescendantsPropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementDescendantsPropertyDescriptor__ctor_m0BC8F572EAAB573A8A2A23F056D84C226A6DFAC8 (XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959 * __this, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementElementPropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementElementPropertyDescriptor__ctor_m713399FB2E19BA297379623AB9BF2951C4B347F5 (XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818 * __this, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementElementsPropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementElementsPropertyDescriptor__ctor_m155278BABE2A17E372EBA9D08826B04314D7020C (XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6 * __this, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementValuePropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementValuePropertyDescriptor__ctor_m45307263CA105982EC6BE1190654277922115003 (XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F * __this, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XElementXmlPropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XElementXmlPropertyDescriptor__ctor_mAD30542B05F6B53100F95FDC889AAFB606925E5B (XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9 * __this, const RuntimeMethod* method);
// System.Void MS.Internal.Xml.Linq.ComponentModel.XAttributeValuePropertyDescriptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XAttributeValuePropertyDescriptor__ctor_mDE470C28BA32ECF708F651F39C278BC540E3F549 (XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB * __this, const RuntimeMethod* method);
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetProperties(System.Attribute[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * CustomTypeDescriptor_GetProperties_mAF60EE9AC464C9683CA5D7065428DA14C94D40D0 (CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC * __this, AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* ___attributes0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptionProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XTypeDescriptionProvider_1__ctor_m61CD2F99935F6B4C2C5DD85FDACE75BE3032D29C_gshared (XTypeDescriptionProvider_1_t3E70768CA58B1E0422A52E2D980397207AEC99DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeDescriptor_t7B173A6626B330AB5B77345C4DE4AB6C7B38CA6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t7B173A6626B330AB5B77345C4DE4AB6C7B38CA6F_il2cpp_TypeInfo_var);
		TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * L_2;
		L_2 = TypeDescriptor_GetProvider_m11FFA30C459E9A3C61DEA0B8A7F96B09545BC86B((Type_t *)L_1, /*hidden argument*/NULL);
		NullCheck((TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 *)__this);
		TypeDescriptionProvider__ctor_m6743A730A14CDF72C690886FDECCF202BC156448((TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 *)__this, (TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 *)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.ComponentModel.ICustomTypeDescriptor MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptionProvider`1<System.Object>::GetTypeDescriptor(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XTypeDescriptionProvider_1_GetTypeDescriptor_m882037FAD02588301880CDF863D226B05ECEC676_gshared (XTypeDescriptionProvider_1_t3E70768CA58B1E0422A52E2D980397207AEC99DB * __this, Type_t * ___type0, RuntimeObject * ___instance1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		RuntimeObject * L_1 = ___instance1;
		NullCheck((TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 *)__this);
		RuntimeObject* L_2;
		L_2 = TypeDescriptionProvider_GetTypeDescriptor_m2ED48670C3D29D6A1CFE63D0F019BBFE8D03372E((TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 *)__this, (Type_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68 * L_3 = (XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		((  void (*) (XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(L_3, (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (RuntimeObject*)L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptor`1<System.Object>::.ctor(System.ComponentModel.ICustomTypeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XTypeDescriptor_1__ctor_m1B30545B3DBB18E79EA64DCBC97DA3FF43AE087C_gshared (XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68 * __this, RuntimeObject* ___parent0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___parent0;
		NullCheck((CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC *)__this);
		CustomTypeDescriptor__ctor_m83CFDC2A68D4C72A3B5C0A79AEAF41486AAAB7DF((CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC *)__this, (RuntimeObject*)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.ComponentModel.PropertyDescriptorCollection MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptor`1<System.Object>::GetProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * XTypeDescriptor_1_GetProperties_m32F175372231FDAD2378E31B2B6FBD134099594E_gshared (XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68 * __this, const RuntimeMethod* method)
{
	{
		NullCheck((CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC *)__this);
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_0;
		L_0 = VirtFuncInvoker1< PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *, AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* >::Invoke(26 /* System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetProperties(System.Attribute[]) */, (CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC *)__this, (AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4*)(AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4*)NULL);
		return (PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_0;
	}
}
// System.ComponentModel.PropertyDescriptorCollection MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptor`1<System.Object>::GetProperties(System.Attribute[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * XTypeDescriptor_1_GetProperties_m46B4D817EC6B3CB7DF597877C742B68DFBF92286_gshared (XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68 * __this, AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* ___attributes0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_0 = (PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)il2cpp_codegen_object_new(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_il2cpp_TypeInfo_var);
		PropertyDescriptorCollection__ctor_m124991BF4E348817ACCC6C4373FD66B31566E425(L_0, (PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75*)(PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75*)NULL, /*hidden argument*/NULL);
		V_0 = (PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_0;
		AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* L_1 = ___attributes0;
		if (L_1)
		{
			goto IL_0099;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (XElement_tB23449727DAFDA30624A9E24F99731430F9CC8A5_0_0_0_var) };
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_4, /*hidden argument*/NULL);
		bool L_6;
		L_6 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_3, (Type_t *)L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0072;
		}
	}
	{
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_7 = V_0;
		XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73 * L_8 = (XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73 *)il2cpp_codegen_object_new(XElementAttributePropertyDescriptor_t7284424A17AB9E54A194D9C8C10A7A9FDF614D73_il2cpp_TypeInfo_var);
		XElementAttributePropertyDescriptor__ctor_mD710FF4686F1C385B0B65277AC4F045CAA17C60D(L_8, /*hidden argument*/NULL);
		NullCheck((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_7);
		int32_t L_9;
		L_9 = PropertyDescriptorCollection_Add_mFD0446EF7C7F01E2DDBBA8F0ED3F8C5032CC21BA((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_7, (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)L_8, /*hidden argument*/NULL);
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_10 = V_0;
		XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959 * L_11 = (XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959 *)il2cpp_codegen_object_new(XElementDescendantsPropertyDescriptor_t8F7E04C4BA0469D908A6F24DA1DDD2A4D5718959_il2cpp_TypeInfo_var);
		XElementDescendantsPropertyDescriptor__ctor_m0BC8F572EAAB573A8A2A23F056D84C226A6DFAC8(L_11, /*hidden argument*/NULL);
		NullCheck((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_10);
		int32_t L_12;
		L_12 = PropertyDescriptorCollection_Add_mFD0446EF7C7F01E2DDBBA8F0ED3F8C5032CC21BA((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_10, (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)L_11, /*hidden argument*/NULL);
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_13 = V_0;
		XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818 * L_14 = (XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818 *)il2cpp_codegen_object_new(XElementElementPropertyDescriptor_t631B42BF05CCB77EC533C2CE4355BE44BB81C818_il2cpp_TypeInfo_var);
		XElementElementPropertyDescriptor__ctor_m713399FB2E19BA297379623AB9BF2951C4B347F5(L_14, /*hidden argument*/NULL);
		NullCheck((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_13);
		int32_t L_15;
		L_15 = PropertyDescriptorCollection_Add_mFD0446EF7C7F01E2DDBBA8F0ED3F8C5032CC21BA((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_13, (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)L_14, /*hidden argument*/NULL);
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_16 = V_0;
		XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6 * L_17 = (XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6 *)il2cpp_codegen_object_new(XElementElementsPropertyDescriptor_tAD88ECF4B2554E7E3E85608167E8FB25E710C1E6_il2cpp_TypeInfo_var);
		XElementElementsPropertyDescriptor__ctor_m155278BABE2A17E372EBA9D08826B04314D7020C(L_17, /*hidden argument*/NULL);
		NullCheck((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_16);
		int32_t L_18;
		L_18 = PropertyDescriptorCollection_Add_mFD0446EF7C7F01E2DDBBA8F0ED3F8C5032CC21BA((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_16, (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)L_17, /*hidden argument*/NULL);
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_19 = V_0;
		XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F * L_20 = (XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F *)il2cpp_codegen_object_new(XElementValuePropertyDescriptor_tA4ABC94A15EC3C3758364365CA8BB54449B5656F_il2cpp_TypeInfo_var);
		XElementValuePropertyDescriptor__ctor_m45307263CA105982EC6BE1190654277922115003(L_20, /*hidden argument*/NULL);
		NullCheck((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_19);
		int32_t L_21;
		L_21 = PropertyDescriptorCollection_Add_mFD0446EF7C7F01E2DDBBA8F0ED3F8C5032CC21BA((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_19, (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)L_20, /*hidden argument*/NULL);
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_22 = V_0;
		XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9 * L_23 = (XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9 *)il2cpp_codegen_object_new(XElementXmlPropertyDescriptor_tD87FB80863A3CB334BD49862FBD0C300BCE47DB9_il2cpp_TypeInfo_var);
		XElementXmlPropertyDescriptor__ctor_mAD30542B05F6B53100F95FDC889AAFB606925E5B(L_23, /*hidden argument*/NULL);
		NullCheck((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_22);
		int32_t L_24;
		L_24 = PropertyDescriptorCollection_Add_mFD0446EF7C7F01E2DDBBA8F0ED3F8C5032CC21BA((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_22, (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)L_23, /*hidden argument*/NULL);
		goto IL_0099;
	}

IL_0072:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_27 = { reinterpret_cast<intptr_t> (XAttribute_tA0B67912BA9E7D6A4BF473F1AAA93F2F4C93ECB7_0_0_0_var) };
		Type_t * L_28;
		L_28 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_27, /*hidden argument*/NULL);
		bool L_29;
		L_29 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046((Type_t *)L_26, (Type_t *)L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_0099;
		}
	}
	{
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_30 = V_0;
		XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB * L_31 = (XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB *)il2cpp_codegen_object_new(XAttributeValuePropertyDescriptor_tC5B11D2983357281D81E15BE00D30EFB16D4E1FB_il2cpp_TypeInfo_var);
		XAttributeValuePropertyDescriptor__ctor_mDE470C28BA32ECF708F651F39C278BC540E3F549(L_31, /*hidden argument*/NULL);
		NullCheck((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_30);
		int32_t L_32;
		L_32 = PropertyDescriptorCollection_Add_mFD0446EF7C7F01E2DDBBA8F0ED3F8C5032CC21BA((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_30, (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)L_31, /*hidden argument*/NULL);
	}

IL_0099:
	{
		AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* L_33 = ___attributes0;
		NullCheck((CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC *)__this);
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_34;
		L_34 = CustomTypeDescriptor_GetProperties_mAF60EE9AC464C9683CA5D7065428DA14C94D40D0((CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC *)__this, (AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4*)L_33, /*hidden argument*/NULL);
		NullCheck((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_34);
		RuntimeObject* L_35;
		L_35 = VirtFuncInvoker0< RuntimeObject* >::Invoke(38 /* System.Collections.IEnumerator System.ComponentModel.PropertyDescriptorCollection::GetEnumerator() */, (PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_34);
		V_1 = (RuntimeObject*)L_35;
	}

IL_00a6:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bc;
		}

IL_00a8:
		{
			RuntimeObject* L_36 = V_1;
			NullCheck((RuntimeObject*)L_36);
			RuntimeObject * L_37;
			L_37 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
			V_2 = (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)((PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)Castclass((RuntimeObject*)L_37, PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B_il2cpp_TypeInfo_var));
			PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_38 = V_0;
			PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * L_39 = V_2;
			NullCheck((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_38);
			int32_t L_40;
			L_40 = PropertyDescriptorCollection_Add_mFD0446EF7C7F01E2DDBBA8F0ED3F8C5032CC21BA((PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_38, (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)L_39, /*hidden argument*/NULL);
		}

IL_00bc:
		{
			RuntimeObject* L_41 = V_1;
			NullCheck((RuntimeObject*)L_41);
			bool L_42;
			L_42 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_41);
			if (L_42)
			{
				goto IL_00a8;
			}
		}

IL_00c4:
		{
			IL2CPP_LEAVE(0xD7, FINALLY_00c6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c6;
	}

FINALLY_00c6:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_43 = V_1;
			V_3 = (RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_43, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_44 = V_3;
			if (!L_44)
			{
				goto IL_00d6;
			}
		}

IL_00d0:
		{
			RuntimeObject* L_45 = V_3;
			NullCheck((RuntimeObject*)L_45);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_45);
		}

IL_00d6:
		{
			IL2CPP_END_FINALLY(198)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(198)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xD7, IL_00d7)
	}

IL_00d7:
	{
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_46 = V_0;
		return (PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)L_46;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
