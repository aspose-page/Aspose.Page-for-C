#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/date_time.h>
#include <system/collections/keyvalue_pair.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace EPS
{
namespace XMP
{
class XmpArray;
class XmpDataCollection;
class XmpField;
class XmpMetadata;
class XmpPacket;
class XmpRawData;
class XmpStructure;
} // namespace XMP
} // namespace EPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename, typename> class Dictionary;
} // namespace Generic
} // namespace Collections
class IFormatProvider;
namespace Xml
{
class XmlNode;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Page {

namespace EPS {

namespace XMP {

/// <summary>
/// Represents XMP value 
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XmpValue : public System::Object
{
    typedef XmpValue ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::EPS::XMP::XmpMetadata;
    friend class Aspose::Page::EPS::XMP::XmpArray;
    friend class Aspose::Page::EPS::XMP::XmpRawData;
    friend class Aspose::Page::EPS::XMP::XmpDataCollection;
    friend class Aspose::Page::EPS::XMP::XmpField;
    friend class Aspose::Page::EPS::XMP::XmpPacket;
    friend class Aspose::Page::EPS::XMP::XmpStructure;
    
public:

    /// <summary>
    /// Returns true if value is string.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsString();
    /// <summary>
    /// Returns true if value is integer.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsInteger() const;
    /// <summary>
    /// Returns true if value is floating point value.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsDouble() const;
    /// <summary>
    /// Returns true if value is DateTime.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsDateTime() const;
    /// <summary>
    /// Returns true if XmpValue is field.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsField();
    /// <summary>
    /// Returns true if XmpValue is named value.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsNamedValue() const;
    /// <summary>
    /// Value is unsupported/unknown and raw XML code is provided.
    /// </summary>
    /// <returns>True if value returned as raw data.</returns>
    ASPOSE_PAGE_SHARED_API bool get_IsRaw();
    /// <summary>
    /// Returns true is XmpValue represents named values.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsNamedValues();
    /// <summary>
    /// Returns true is XmpValue represents structure.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsStructure();
    /// <summary>
    /// Returns true is XmpValue is array.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsArray();
    
    /// <summary>
    /// Constructor for string value.
    /// </summary>
    /// <param name="value">String value.</param>
    ASPOSE_PAGE_SHARED_API XmpValue(System::String value);
    /// <summary>
    /// Consructor for integer value.
    /// </summary>
    /// <param name="value">Integer value.</param>
    ASPOSE_PAGE_SHARED_API XmpValue(int32_t value);
    /// <summary>
    /// Constructor for floating point Value.
    /// </summary>
    /// <param name="value">Double value.</param>
    ASPOSE_PAGE_SHARED_API XmpValue(double value);
    /// <summary>
    /// Constructor for date time value.
    /// </summary>
    /// <param name="value">Date time value.</param>
    ASPOSE_PAGE_SHARED_API XmpValue(System::DateTime value);
    /// <summary>
    /// Constructor for array value.
    /// </summary>
    /// <param name="array">Array value.</param>
    ASPOSE_PAGE_SHARED_API XmpValue(System::ArrayPtr<System::SharedPtr<XmpValue>> array);
    
    /// <summary>
    /// Converts to string.
    /// </summary>
    /// <returns>String value.</returns>
    ASPOSE_PAGE_SHARED_API System::String ToStringValue();
    /// <summary>
    /// Converts to integer.
    /// </summary>
    /// <returns>Integer value.</returns>
    ASPOSE_PAGE_SHARED_API int32_t ToInteger();
    /// <summary>
    /// Converts to double.
    /// </summary>
    /// <returns>Double value.</returns>
    ASPOSE_PAGE_SHARED_API double ToDouble();
    /// <summary>
    /// Converts to date time.
    /// </summary>
    /// <returns>DateTime value.</returns>
    ASPOSE_PAGE_SHARED_API System::DateTime ToDateTime();
    /// <summary>
    /// Returns array.
    /// </summary>
    /// <returns>Array value</returns>
    ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::SharedPtr<XmpValue>> ToArray();
    /// <summary>
    /// Raw XML code for unknown/unsupported values.
    /// </summary>
    /// <returns>XML node for this value.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Xml::XmlNode> ToRaw();
    /// <summary>
    /// Returns XMP value as structure (set of fields).
    /// </summary>
    /// <returns>Structure value.</returns>
    ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::SharedPtr<XmpField>> ToStructure();
    /// <summary>
    /// Returns XMP value as XMP field.
    /// </summary>
    /// <returns>Field value.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XmpField> ToField();
    /// <summary>
    /// Returns XMP value as named value.
    /// </summary>
    /// <returns>Named value.</returns>
    ASPOSE_PAGE_SHARED_API System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>> ToNamedValue();
    /// <summary>
    /// Returns XMP value as named value collection.
    /// </summary>
    /// <returns>Named collection value.</returns>
    ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>> ToNamedValues();
    /// <summary>
    /// Returns dictionary which contains named values.
    /// </summary>
    /// <returns>Dictionary value.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<XmpValue>>> ToDictionary();
    /// <summary>
    /// Returns string representation.
    /// </summary>
    /// <param name="formatProvider">Format provider.</param>
    /// <returns>String representation.</returns>
    ASPOSE_PAGE_SHARED_API System::String ToString(System::SharedPtr<System::IFormatProvider> formatProvider);
    
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<XmpValue> to_XmpValue(System::String value);
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<XmpValue> to_XmpValue(int32_t value);
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<XmpValue> to_XmpValue(double value);
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<XmpValue> to_XmpValue(System::DateTime value);
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<XmpValue> to_XmpValue(System::ArrayPtr<System::SharedPtr<System::Object>> value);
    static ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::SharedPtr<XmpValue>> to_XmpValueArray(System::SharedPtr<XmpValue> value);
    static ASPOSE_PAGE_SHARED_API System::String to_String(System::SharedPtr<XmpValue> value);
    static ASPOSE_PAGE_SHARED_API System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>> to_KeyValuePair(System::SharedPtr<XmpValue> value);
    static ASPOSE_PAGE_SHARED_API System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>> to_KeyValuePairArray(System::SharedPtr<XmpValue> value);
    
    /// <summary>
    /// Returns string representation of XmpValue.
    /// </summary>
    /// <returns>String representation.</returns>
    ASPOSE_PAGE_SHARED_API System::String ToString() const override;
    
protected:

    XmpValue(System::SharedPtr<System::Xml::XmlNode> node);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmpValue, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlNode> node));
    
    XmpValue(System::SharedPtr<XmpField> field);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmpValue, CODEPORTING_ARGS(System::SharedPtr<XmpField> field));
    
    XmpValue(System::ArrayPtr<System::SharedPtr<XmpField>> structure);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmpValue, CODEPORTING_ARGS(System::ArrayPtr<System::SharedPtr<XmpField>> structure));
    
    XmpValue(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>> dictionaryEntry);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmpValue, CODEPORTING_ARGS(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>> dictionaryEntry));
    
    XmpValue(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>> dictionaryEntries);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmpValue, CODEPORTING_ARGS(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>> dictionaryEntries));
    
    XmpValue(System::SharedPtr<System::Object> value);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XmpValue, CODEPORTING_ARGS(System::SharedPtr<System::Object> value));
    System::String ToStringEx();
    
private:

    System::String _stringValue;
    int32_t _intValue;
    double _doubleValue;
    System::DateTime _dateTime;
    System::SharedPtr<XmpField> _field;
    System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>> _dictionaryEntry;
    System::ArrayPtr<System::SharedPtr<XmpField>> _structureValue;
    System::ArrayPtr<System::SharedPtr<XmpValue>> _arrayValue;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<XmpValue>>> _dictionary;
    System::SharedPtr<System::Xml::XmlNode> _rawData;
    bool _isInteger;
    bool _isDouble;
    bool _isDateTime;
    bool _isDictionaryEntry;
    
    void AnalyzeValue(System::String value);
    void InitializeDictionary(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>> dictionaryEntries);
    template <typename T>
    void FillArray(System::ArrayPtr<T> array)
    {
        _arrayValue = System::MakeArray<System::SharedPtr<Aspose::Page::EPS::XMP::XmpValue>>(array->get_Length());
        for (int32_t i = 0; i < array->get_Length(); i++)
        {
            _arrayValue[i] = XmpValue::MakeObject(System::ExplicitCast<System::Object>(array[i]));
        }
    }
    
    System::String ToString_NonConst();
    System::String GetString(System::ArrayPtr<System::SharedPtr<XmpValue>> values);
    System::String GetString(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>>> values);
    System::String GetString(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<XmpValue>> value);
    
};

} // namespace XMP
} // namespace EPS
} // namespace Page
} // namespace Aspose


