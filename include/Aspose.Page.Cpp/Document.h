#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

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
namespace EPS
{
namespace Ps2Aps
{
class MeteredPluginTests;
} // namespace Ps2Aps
namespace Ps2Pdf
{
class MeteredPluginTests;
} // namespace Ps2Pdf
} // namespace EPS
namespace LicenseManagement
{
class VentureLicense;
class VentureLicenser;
} // namespace LicenseManagement
namespace Plugins
{
enum class Plugin;
class PsConverter;
class XpsConverter;
} // namespace Plugins
class SaveOptions;
namespace XPS
{
namespace Tests
{
class MeteredToImagePluginsTests;
class MeteredToPdfPluginsTests;
} // namespace Tests
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
    friend class Aspose::Page::Plugins::XpsConverter;
    friend class Aspose::Page::Plugins::PsConverter;
    friend class Aspose::Page::XPS::XpsDocument;
    friend class Aspose::Page::EPS::Ps2Pdf::MeteredPluginTests;
    friend class Aspose::Page::EPS::Ps2Aps::MeteredPluginTests;
    friend class Aspose::Page::XPS::Tests::MeteredToPdfPluginsTests;
    friend class Aspose::Page::XPS::Tests::MeteredToImagePluginsTests;
    
public:

    ASPOSE_PAGE_SHARED_API Document();
    
protected:

    System::SharedPtr<LicenseManagement::VentureLicense> _ventureLicense;
    Plugins::Plugin _usedByPlugin;
    
    /// @deprecated Save is deprecated beginning from 24.3, please use SaveAsPdf or SaveAsImage methods in derived classes instead. In 24.6 this method will be closed False
    /// <summary>
    /// Saves this document to a device.
    /// </summary>
    /// <param name="device"> An output device. </param>
    /// <param name="options"> Contains flags that specify output of errors thrown during conversion. </param>
    virtual void Save(System::SharedPtr<Device> device, System::SharedPtr<SaveOptions> options) = 0;
    void SetPlugin(Plugins::Plugin plugin);
    virtual ASPOSE_PAGE_SHARED_API void SetVentureLicense(System::SharedPtr<LicenseManagement::VentureLicense> license);
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<LicenseManagement::VentureLicense> GetVentureLicense();
    
};

} // namespace Page
} // namespace Aspose


