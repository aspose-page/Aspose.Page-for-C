#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IPrintTicketItem.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Tests
{
class PrintTicketTests;
} // namespace Tests
namespace XpsMetadata
{
class PrintTicket;
class Value;
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
/// Class implementing print ticket parameter initializer.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS ParameterInit : public Aspose::Page::XPS::XpsMetadata::IPrintTicketItem
{
    typedef ParameterInit ThisType;
    typedef Aspose::Page::XPS::XpsMetadata::IPrintTicketItem BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsMetadata::PrintTicket;
    friend class Aspose::Page::XPS::Tests::PrintTicketTests;
    
public:

    /// <summary>
    /// Returns parameter name.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_Name() override;
    
    /// <summary>
    /// Creates print ticket parameter initialize instance.
    /// </summary>
    /// <param name="name">Parameter name.</param>
    /// <param name="value">Parameter value.</param>
    ASPOSE_PAGE_SHARED_API ParameterInit(System::String name, System::SharedPtr<Aspose::Page::XPS::XpsMetadata::Value> value);
    
    /// <summary>
    /// Returns the string representation.
    /// </summary>
    /// <returns>String representation.</returns>
    ASPOSE_PAGE_SHARED_API System::String ToString() const override;
    
protected:

    const System::SharedPtr<Aspose::Page::XPS::XpsMetadata::Value>& get_Value() const;
    
    ParameterInit(System::SharedPtr<System::Xml::XmlNode> node);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ParameterInit, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlNode> node));
    System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document);
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::String pr_Name;
    System::SharedPtr<Aspose::Page::XPS::XpsMetadata::Value> pr_Value;
    
    System::String ToString_NonConst();
    
};

/// <summary>
/// Class incapsulating print ticket parameter initializer.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS ParameterInits : public System::Object
{
    typedef ParameterInits ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Convenience class for JobCopiesAllDocuments print ticket parameter initializer.
    /// </summary>
    class ASPOSE_PAGE_SHARED_CLASS JobCopiesAllDocuments final : public Aspose::Page::XPS::XpsMetadata::ParameterInit
    {
        typedef JobCopiesAllDocuments ThisType;
        typedef Aspose::Page::XPS::XpsMetadata::ParameterInit BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
    public:
    
        /// <summary>
        /// Creates JobCopiesAllDocuments parameter initializer instance.
        /// </summary>
        /// <param name="numberOfCopies">Number of copies.</param>
        ASPOSE_PAGE_SHARED_API JobCopiesAllDocuments(int32_t numberOfCopies);
        
    };
    
    
private:

    ParameterInits();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(ParameterInits, CODEPORTING_ARGS());
    
};

} // namespace XpsMetadata
} // namespace XPS
} // namespace Page
} // namespace Aspose


