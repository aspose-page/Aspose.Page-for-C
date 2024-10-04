#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/decimal.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/PrintTicketElement.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IScoredPropertyItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IPropertyItem.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Presentation
{
namespace Aps
{
class ApsConverter;
} // namespace Aps
class XpsPresenter;
} // namespace Presentation
namespace XpsMetadata
{
class DecimalValue;
class IntegerValue;
class ParameterInit;
class Property;
class QNameValue;
class ScoredProperty;
class StringValue;
class ValueType;
} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
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
/// The base class that incapsulates a <see cref="Property"></see> or a <see cref="ScoredProperty"></see>
/// value in a PrintTicket document.
/// A Value element associates a literal with a type.
/// https://docs.microsoft.com/en-us/windows/win32/printdocs/value
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Value : public Aspose::Page::XPS::XpsMetadata::PrintTicketElement, public Aspose::Page::XPS::XpsMetadata::IScoredPropertyItem, public Aspose::Page::XPS::XpsMetadata::IPropertyItem
{
    typedef Value ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::PrintTicketElement BaseType;
    typedef Aspose::Page::XPS::XpsMetadata::IScoredPropertyItem BaseType1;
    typedef Aspose::Page::XPS::XpsMetadata::IPropertyItem BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::XpsPresenter;
    friend class Aspose::Page::XPS::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::XPS::XpsMetadata::ParameterInit;
    friend class Aspose::Page::XPS::XpsMetadata::Property;
    friend class Aspose::Page::XPS::XpsMetadata::ScoredProperty;
    friend class Aspose::Page::XPS::XpsMetadata::IntegerValue;
    friend class Aspose::Page::XPS::XpsMetadata::DecimalValue;
    friend class Aspose::Page::XPS::XpsMetadata::StringValue;
    friend class Aspose::Page::XPS::XpsMetadata::QNameValue;
    
public:

    /// <summary>
    /// Gets the value as string.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_ValueString() const;
    
protected:

    System::SharedPtr<Aspose::Page::XPS::XpsMetadata::ValueType> get_ValueType() const;
    
    Value();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Value, CODEPORTING_ARGS());
    
    Value(System::SharedPtr<Aspose::Page::XPS::XpsMetadata::ValueType> valueType, System::String value);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Value, CODEPORTING_ARGS(System::SharedPtr<Aspose::Page::XPS::XpsMetadata::ValueType> valueType, System::String value));
    
    Value(System::SharedPtr<System::Xml::XmlNode> node);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Value, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlNode> node));
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document) override;
    /// <summary>
    /// Clones this value.
    /// </summary>
    /// <returns>The clone of this value.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<PrintTicketElement> CloneThis() override;
    
private:

    System::SharedPtr<Aspose::Page::XPS::XpsMetadata::ValueType> _valueType;
    System::String pr_ValueString;
    
};

/// <summary>
/// The class that incapsulates an Integer value in a PrintTicket document.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS IntegerValue final : public Aspose::Page::XPS::XpsMetadata::Value
{
    typedef IntegerValue ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Value BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="value">An integer value.</param>
    ASPOSE_PAGE_SHARED_API IntegerValue(int32_t value);
    
protected:

    /// <summary>
    /// Clones this value.
    /// </summary>
    /// <returns>The clone of this value.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<PrintTicketElement> CloneThis() override;
    
private:

    int32_t _value;
    
};

/// <summary>
/// The class that incapsulates a Decimal value in a PrintTicket document.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS DecimalValue final : public Aspose::Page::XPS::XpsMetadata::Value
{
    typedef DecimalValue ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Value BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="value">A decimal value.</param>
    ASPOSE_PAGE_SHARED_API DecimalValue(System::Decimal value);
    
protected:

    /// <summary>
    /// Clones this value.
    /// </summary>
    /// <returns>The clone of this value.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<PrintTicketElement> CloneThis() override;
    
private:

    System::Decimal _value;
    
};

/// <summary>
/// The class that incapsulates a String value in a PrintTicket document.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS StringValue final : public Aspose::Page::XPS::XpsMetadata::Value
{
    typedef StringValue ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Value BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="value">A string value.</param>
    ASPOSE_PAGE_SHARED_API StringValue(System::String value);
    
protected:

    /// <summary>
    /// Clones this value.
    /// </summary>
    /// <returns>The clone of this value.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<PrintTicketElement> CloneThis() override;
    
};

/// <summary>
/// The class that incapsulates a QName value in a PrintTicket document.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS QNameValue final : public Aspose::Page::XPS::XpsMetadata::Value
{
    typedef QNameValue ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::Value BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates a new instance.
    /// </summary>
    /// <param name="value">A QName value.</param>
    ASPOSE_PAGE_SHARED_API QNameValue(System::String value);
    
protected:

    /// <summary>
    /// Clones this value.
    /// </summary>
    /// <returns>The clone of this value.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<PrintTicketElement> CloneThis() override;
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


