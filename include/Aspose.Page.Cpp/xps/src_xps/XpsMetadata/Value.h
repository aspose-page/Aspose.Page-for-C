#pragma once

#include <xml/xml_node.h>
#include <xml/xml_document.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/decimal.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IScoredPropertyItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IPropertyItem.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class ParameterInit; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class Property; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class ScoredProperty; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class ValueType; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsMetadata {

/// <summary>
/// Class implementing print ticket property value.
/// </summary>
class Value : public Aspose::Page::Xps::XpsMetadata::IScoredPropertyItem, public Aspose::Page::Xps::XpsMetadata::IPropertyItem
{
    typedef Value ThisType;
    typedef Aspose::Page::Xps::XpsMetadata::IScoredPropertyItem BaseType;
    typedef Aspose::Page::Xps::XpsMetadata::IPropertyItem BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsMetadata::ParameterInit;
    friend class Aspose::Page::Xps::XpsMetadata::Property;
    friend class Aspose::Page::Xps::XpsMetadata::ScoredProperty;
    
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
    virtual ASPOSE_PAGE_SHARED_API System::String ToString();
    
protected:

    Value(System::SharedPtr<System::Xml::XmlNode> node);
    
    System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<ValueType> _valueType;
    System::String _value;
    
};

/// <summary>
/// Class incapsulating print ticket property values.
/// </summary>
class Values : public System::Object
{
    typedef Values ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    class IntegerValue FINAL : public Aspose::Page::Xps::XpsMetadata::Value
    {
        typedef IntegerValue ThisType;
        typedef Aspose::Page::Xps::XpsMetadata::Value BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Creates integer value.
        /// </summary>
        /// <param name="value">Integer value.</param>
        ASPOSE_PAGE_SHARED_API IntegerValue(int32_t value);
        
    };
    
    class DecimalValue FINAL : public Aspose::Page::Xps::XpsMetadata::Value
    {
        typedef DecimalValue ThisType;
        typedef Aspose::Page::Xps::XpsMetadata::Value BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Creates decimal value.
        /// </summary>
        /// <param name="value">Decimal value.</param>
        ASPOSE_PAGE_SHARED_API DecimalValue(System::Decimal value);
        
    };
    
    class StringValue FINAL : public Aspose::Page::Xps::XpsMetadata::Value
    {
        typedef StringValue ThisType;
        typedef Aspose::Page::Xps::XpsMetadata::Value BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Creates string value.
        /// </summary>
        /// <param name="value">String value.</param>
        ASPOSE_PAGE_SHARED_API StringValue(System::String value);
        
    };
    
    class QNameValue FINAL : public Aspose::Page::Xps::XpsMetadata::Value
    {
        typedef QNameValue ThisType;
        typedef Aspose::Page::Xps::XpsMetadata::Value BaseType;
        
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
    
};

} // namespace XpsMetadata
} // namespace Xps
} // namespace Page
} // namespace Aspose


