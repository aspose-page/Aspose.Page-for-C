#pragma once

#include <xml/xml_node.h>
#include <xml/xml_document.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IScoredPropertyItem.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IOptionItem.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class Option; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class PrintTicketTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class Value; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsMetadata {

/// <summary>
/// Class implementing print ticket scored property.
/// </summary>
class ScoredProperty : public Aspose::Page::Xps::XpsMetadata::IOptionItem, public Aspose::Page::Xps::XpsMetadata::IScoredPropertyItem, public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::Xps::XpsMetadata::IScoredPropertyItem>>
{
    typedef ScoredProperty ThisType;
    typedef Aspose::Page::Xps::XpsMetadata::IOptionItem BaseType;
    typedef Aspose::Page::Xps::XpsMetadata::IScoredPropertyItem BaseType1;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::Xps::XpsMetadata::IScoredPropertyItem>> BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsMetadata::Option;
    friend class Aspose::Page::Xps::Tests::PrintTicketTests;
    
public:

    /// <summary>
    /// Creates print ticket scored property instance.
    /// </summary>
    /// <param name="name">Property name.</param>
    /// <param name="items">Array of <see cref="IScoredPropertyItem"/> objects.
    /// Each one must be a <see cref="ScoredProperty"/>, <see cref="Property"/> or <see cref="Value"/> object.</param>
    ASPOSE_PAGE_SHARED_API ScoredProperty(System::String name, const System::ArrayPtr<System::SharedPtr<IScoredPropertyItem>>& items);
    
    /// <summary>
    /// Returns the string representation.
    /// </summary>
    /// <returns>String representation.</returns>
    virtual ASPOSE_PAGE_SHARED_API System::String ToString();
    /// <summary>
    /// Implementation of <see cref="System::Collections::Generic::IEnumerable&lt;IScoredPropertyItem&gt;"/> interface.
    /// </summary>
    /// <returns>Returns enumerator for the list.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IScoredPropertyItem>>> GetEnumerator();
    
protected:

    ScoredProperty(System::SharedPtr<System::Xml::XmlNode> node);
    
    System::SharedPtr<System::Xml::XmlNode> ToXml(System::SharedPtr<System::Xml::XmlDocument> document);
    
    System::SharedPtr<IScoredPropertyItem> idx_get(int32_t i);
    
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _name;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IScoredPropertyItem>>> _items;
    
};

/// <summary>
/// Class incapsulating print ticket scored property.
/// </summary>
class ScoredProperties : public System::Object
{
    typedef ScoredProperties ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    
public:

    class DuplexMode FINAL : public Aspose::Page::Xps::XpsMetadata::ScoredProperty
    {
        typedef DuplexMode ThisType;
        typedef Aspose::Page::Xps::XpsMetadata::ScoredProperty BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        
    public:
    
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<ScoredProperties::DuplexMode> Automatic;
        static ASPOSE_PAGE_SHARED_API System::SharedPtr<ScoredProperties::DuplexMode> Manual;
        
    private:
    
        DuplexMode(System::SharedPtr<Value> value);
        
    };
    
    
private:

    ScoredProperties();
    
};

} // namespace XpsMetadata
} // namespace Xps
} // namespace Page
} // namespace Aspose


