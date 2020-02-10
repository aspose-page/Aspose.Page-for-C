#pragma once

#include <xml/xml_node.h>
#include <xml/xml_document.h>
#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IScoredPropertyItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IPropertyItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IPrintTicketItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IOptionItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IFeatureItem.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class Feature; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class PrintTicket; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class Option; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class ScoredProperty; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class Value; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsMetadata {

/// <summary>
/// Class implementing print ticket property.
/// </summary>
class Property : public Aspose::Page::Xps::XpsMetadata::IPrintTicketItem, public Aspose::Page::Xps::XpsMetadata::IFeatureItem, public Aspose::Page::Xps::XpsMetadata::IOptionItem, public Aspose::Page::Xps::XpsMetadata::IScoredPropertyItem, public Aspose::Page::Xps::XpsMetadata::IPropertyItem, public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::Xps::XpsMetadata::IPropertyItem>>
{
    typedef Property ThisType;
    typedef Aspose::Page::Xps::XpsMetadata::IPrintTicketItem BaseType;
    typedef Aspose::Page::Xps::XpsMetadata::IFeatureItem BaseType1;
    typedef Aspose::Page::Xps::XpsMetadata::IOptionItem BaseType2;
    typedef Aspose::Page::Xps::XpsMetadata::IScoredPropertyItem BaseType3;
    typedef Aspose::Page::Xps::XpsMetadata::IPropertyItem BaseType4;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::Xps::XpsMetadata::IPropertyItem>> BaseType5;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3, BaseType4, BaseType5> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsMetadata::Feature;
    friend class Aspose::Page::Xps::XpsMetadata::PrintTicket;
    friend class Aspose::Page::Xps::XpsMetadata::Option;
    friend class Aspose::Page::Xps::XpsMetadata::ScoredProperty;
    
public:

    /// <summary>
    /// Returns property name.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_Name();
    
    /// <summary>
    /// Creates common print ticket property instance.
    /// </summary>
    /// <param name="name">Property name.</param>
    /// <param name="items">Array of <see cref="IPropertyItem"/> objects.
    /// Each one must be a <see cref="Property"/> or <see cref="Value"/> object.</param>
    ASPOSE_PAGE_SHARED_API Property(System::String name, const System::ArrayPtr<System::SharedPtr<IPropertyItem>>& items);
    
    /// <summary>
    /// Returns the string representation.
    /// </summary>
    /// <returns>String representation.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::String ToString();
    /// <summary>
    /// Implementation of <see cref="System::Collections::Generic::IEnumerable&lt;IPropertyItem&gt;"/> interface.
    /// </summary>
    /// <returns>Returns enumerator for the list.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IPropertyItem>>> GetEnumerator();
    
protected:

    Property(System::SharedPtr<System::Xml::XmlNode> node);
    
    System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IPropertyItem>>> _items;
    System::String pr_Name;
    
};

/// <summary>
/// Class incapsulating print ticket property.
/// </summary>
class Properties : public System::Object
{
    typedef Properties ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    class SelectionType FINAL : public Aspose::Page::Xps::XpsMetadata::Property
    {
        typedef SelectionType ThisType;
        typedef Aspose::Page::Xps::XpsMetadata::Property BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        
    public:
    
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Properties::SelectionType> PickOne;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<Properties::SelectionType> PickMany;
        
    private:
    
        SelectionType(System::SharedPtr<Value> value);
        
    };
    
    
private:

    Properties();
    
};

} // namespace XpsMetadata
} // namespace Xps
} // namespace Page
} // namespace Aspose


