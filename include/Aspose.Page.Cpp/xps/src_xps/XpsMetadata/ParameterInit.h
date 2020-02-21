#pragma once

#include <xml/xml_node.h>
#include <xml/xml_document.h>
#include <system/shared_ptr.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IPrintTicketItem.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class PrintTicket; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class PrintTicketTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class Value; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsMetadata {

/// <summary>
/// Class implementing print ticket parameter initializer.
/// </summary>
class ParameterInit : public Aspose::Page::Xps::XpsMetadata::IPrintTicketItem
{
    typedef ParameterInit ThisType;
    typedef Aspose::Page::Xps::XpsMetadata::IPrintTicketItem BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsMetadata::PrintTicket;
    friend class Aspose::Page::Xps::Tests::PrintTicketTests;
    
public:

    /// <summary>
    /// Returns parameter name.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_Name();
    
    /// <summary>
    /// Creates print ticket parameter initialize instance.
    /// </summary>
    /// <param name="name">Parameter name.</param>
    /// <param name="value">Parameter value.</param>
    ASPOSE_PAGE_SHARED_API ParameterInit(System::String name, System::SharedPtr<Aspose::Page::Xps::XpsMetadata::Value> value);
    
    /// <summary>
    /// Returns the string representation.
    /// </summary>
    /// <returns>String representation.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::String ToString();
    
protected:

    System::SharedPtr<Aspose::Page::Xps::XpsMetadata::Value> get_Value();
    
    ParameterInit(System::SharedPtr<System::Xml::XmlNode> node);
    
    System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String pr_Name;
    System::SharedPtr<Aspose::Page::Xps::XpsMetadata::Value> pr_Value;
    
};

/// <summary>
/// Class incapsulating print ticket parameter initializer.
/// </summary>
class ParameterInits : public System::Object
{
    typedef ParameterInits ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    class JobCopiesAllDocuments FINAL : public Aspose::Page::Xps::XpsMetadata::ParameterInit
    {
        typedef JobCopiesAllDocuments ThisType;
        typedef Aspose::Page::Xps::XpsMetadata::ParameterInit BaseType;
        
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
    
};

} // namespace XpsMetadata
} // namespace Xps
} // namespace Page
} // namespace Aspose


