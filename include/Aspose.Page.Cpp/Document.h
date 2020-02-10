#pragma once

// C# preprocessor directive: #if ASPOSE_PDF

// C# INACTIVE CODE:
// using Aspose.Pdf;

// C# preprocessor directive: #endif


#include <system/shared_ptr.h>
#include <system/object.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose { namespace Page { namespace LicenseManagement { class VentureLicense; } } }
namespace Aspose { namespace Page { namespace LicenseManagement { class VentureLicenser; } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocument; } } }
namespace Aspose { namespace Page { class Device; } }
namespace Aspose { namespace Page { class SaveOptions; } }

namespace Aspose {

namespace Page {

/// <summary>
/// A superclass for all encapsulated documents.
/// </summary>
class Document : public System::Object
{
    typedef Document ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::LicenseManagement::VentureLicenser;
    friend class Aspose::Page::Xps::XpsDocument;
    
public:

    /// <summary>
    /// Saves this document to a device.
    /// </summary>
    /// <param name="device"> An output device. </param>
    /// <param name="options"> Contains flags that specify output of errors thrown during conversion. </param>
    virtual ASPOSE_PAGE_SHARED_API void Save(System::SharedPtr<Device> device, System::SharedPtr<SaveOptions> options) = 0;
    
    ASPOSE_PAGE_SHARED_API Document();
    
protected:

    System::SharedPtr<LicenseManagement::VentureLicense> _ventureLicense;
    
    virtual ASPOSE_PAGE_SHARED_API void SetVentureLicense(System::SharedPtr<LicenseManagement::VentureLicense> license);
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<LicenseManagement::VentureLicense> GetVentureLicense();
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
};

} // namespace Page
} // namespace Aspose


