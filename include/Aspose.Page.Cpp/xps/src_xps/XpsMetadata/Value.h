#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IScoredPropertyItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IPropertyItem.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace XpsMetadata
{
class ParameterInit;
class Property;
class ScoredProperty;
class ValueType;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
class Decimal;
namespace Xml
{
class XmlDocument;
class XmlNode;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsMetadata {

/// <summary>
/// Class implementing print ticket property value.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Value : public Aspose::Page::XPS::XpsMetadata::IScoredPropertyItem, public Aspose::Page::XPS::XpsMetadata::IPropertyItem
{
    typedef Value ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::IScoredPropertyItem BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IPropertyItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::ParameterInit;
    friend class Aspose::Page::XPS::XpsMetadata::Property;
    friend class Aspose::Page::XPS::XpsMetadata::ScoredProperty;
    
public:

    /// <summary>
    /// Creates print ticket property value.
    /// </summary>
    /// <param name="valueType">Value type.</param>
    /// <param name="value">Value itself.</param>
    ASPOSE_PAGE_SHARED_API Value(System::SharedPtr<ValueType> valueType, System::String value);
    
    /// <summary>
    /// Returns the string representation.
    /// </summary>
    /// <returns>String representation.</returns>
    ASPOSE_PAGE_SHARED_API System::String ToString() const override;
    
protected:

    Value(System::SharedPtr<System::Xml::XmlNode> node);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Value, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlNode> node));
    System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document);
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::SharedPtr<ValueType> _valueType;
    System::String _value;
    
    System::String ToString_NonConst();
    
};

/// <summary>
/// Class incapsulating print ticket property values.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Values : public System::Object
{
    typedef Values ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Convenience class for integer value.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS IntegerValue final : public Aspose::Page::XPS::XpsMetadata::Value
    {
        typedef IntegerValue ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Value BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Creates integer value.
        /// </summary>
        /// <param name="value">Integer value.</param>
        ASPOSE_PAGE_SHARED_API IntegerValue(int32_t value);
        
    };
    
    /// <summary>
    /// Convenience class for decimal value.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS DecimalValue final : public Aspose::Page::XPS::XpsMetadata::Value
    {
        typedef DecimalValue ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Value BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Creates decimal value.
        /// </summary>
        /// <param name="value">Decimal value.</param>
        ASPOSE_PAGE_SHARED_API DecimalValue(System::Decimal value);
        
    };
    
    /// <summary>
    /// Convenience class for string value.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS StringValue final : public Aspose::Page::XPS::XpsMetadata::Value
    {
        typedef StringValue ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Value BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Creates string value.
        /// </summary>
        /// <param name="value">String value.</param>
        ASPOSE_PAGE_SHARED_API StringValue(System::String value);
        
    };
    
    /// <summary>
    /// Convenience class for QName type value.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS QNameValue final : public Aspose::Page::XPS::XpsMetadata::Value
    {
        typedef QNameValue ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::Value BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Creates QName type value.
        /// </summary>
        /// <param name="value">QName value.</param>
        ASPOSE_PAGE_SHARED_API QNameValue(System::String value);
        
    };
    
    
private:

    Values();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Values, CODEPORTING_ARGS());
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


