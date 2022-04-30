#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF

// C# INACTIVE CODE:
// using Aspose.Pdf;

// C# preprocessor directive: #endif


#include <system/object.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
class Device;
namespace LicenseManagement
{
class VentureLicense;
class VentureLicenser;
} // namespace LicenseManagement
class SaveOptions;
namespace XPS
{
class XpsDocument;
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

/// <summary>
/// A superclass for all encapsulated documents.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Document : public virtual System::Object
{
    typedef Document ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::LicenseManagement::VentureLicenser;
    friend class Aspose::Page::XPS::XpsDocument;
    
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
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
};

} // namespace Page
} // namespace Aspose


