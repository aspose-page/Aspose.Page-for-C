#pragma once

#include <xml/xml_element.h>
#include <xml/xml_document.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <system/array.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsMetadata/IPrintTicketItem.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class JobPrintTicket; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class DocumentPrintTicket; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class PagePrintTicket; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class PrintTicketTreeNode; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsMetadata { class PrintTicketTree; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsPackageParts { class FixedDocument; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsPackageParts { class FixedPart; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class PrintTicketTests; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsMetadata {

/// <summary>
/// Basic class incapsulating common features of a print ticket of any levels
/// </summary>
class PrintTicket : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::Xps::XpsMetadata::IPrintTicketItem>>
{
    typedef PrintTicket ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Page::Xps::XpsMetadata::IPrintTicketItem>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsMetadata::JobPrintTicket;
    friend class Aspose::Page::Xps::XpsMetadata::DocumentPrintTicket;
    friend class Aspose::Page::Xps::XpsMetadata::PagePrintTicket;
    friend class Aspose::Page::Xps::XpsMetadata::PrintTicketTreeNode;
    friend class Aspose::Page::Xps::XpsMetadata::PrintTicketTree;
    friend class Aspose::Page::Xps::XpsPackageParts::FixedDocument;
    friend class Aspose::Page::Xps::XpsPackageParts::FixedPart;
    friend class Aspose::Page::Xps::Tests::PrintTicketTests;
    
public:

    /// <summary>
    /// Creates print ticket instance.
    /// </summary>
    /// <param name="items">Arbitrary array <see cref="IPrintTicketItem"/> objects.
    /// Each one must be a <see cref="Feature"/>, <see cref="ParameterInit"/> or <see cref="Property"/> object.</param>
    ASPOSE_PAGE_SHARED_API PrintTicket(const System::ArrayPtr<System::SharedPtr<IPrintTicketItem>>& items);
    
    /// <summary>
    /// Adds list of items to the end of print ticket items list. 
    /// Each one can be <see cref="Feature"/>, <see cref="Option"/> or <see cref="Property"/> object.
    /// </summary>
    /// <param name="items">List of items to add.</param>
    ASPOSE_PAGE_SHARED_API void Add(const System::ArrayPtr<System::SharedPtr<IPrintTicketItem>>& items);
    /// <summary>
    /// Implementation of <see cref="System::Collections::Generic::IEnumerable&lt;IPrintTicketItem&gt;"/> interface.
    /// </summary>
    /// <returns>Returns enumerator for the list.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<IPrintTicketItem>>> GetEnumerator();
    
protected:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IPrintTicketItem>>> _items;
    
    /// <summary>
    /// Path to this print ticket inside the package
    /// </summary>
    System::String get_Path();
    /// <summary>
    /// Path to this print ticket inside the package
    /// </summary>
    void set_Path(System::String value);
    System::String get_LoadedPath();
    void set_LoadedPath(System::String value);
    int32_t get_Count();
    
    PrintTicket(System::String path);
    PrintTicket(System::String path, System::SharedPtr<System::IO::Stream> stream);
    
    System::ArrayPtr<System::SharedPtr<IPrintTicketItem>> GetItemsAsArray();
    void Deserialize(System::SharedPtr<System::Xml::XmlElement> root);
    void Save(System::SharedPtr<System::IO::Stream> stream, bool saveEmpty);
    
    System::SharedPtr<IPrintTicketItem> idx_get(int32_t i);
    
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Xml::XmlDocument> _xml;
    System::String pr_Path;
    System::String pr_LoadedPath;
    
};

} // namespace XpsMetadata
} // namespace Xps
} // namespace Page
} // namespace Aspose


