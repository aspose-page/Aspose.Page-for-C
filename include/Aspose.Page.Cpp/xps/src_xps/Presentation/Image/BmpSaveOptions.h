#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/Presentation/Image/ImageSaveOptions.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Images
{
enum class ImageTypeCore;
} // namespace Images
} // namespace Aspose
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace Presentation {

namespace Image {

/// <summary>
/// Class for XPS-as-BMP saving options.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS BmpSaveOptions : public Aspose::Page::XPS::Presentation::Image::ImageSaveOptions
{
    typedef BmpSaveOptions ThisType;
    typedef Aspose::Page::XPS::Presentation::Image::ImageSaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates new instance of options.
    /// </summary>
    ASPOSE_PAGE_SHARED_API BmpSaveOptions();
    
protected:

    ASPOSE_PAGE_SHARED_API System::String GetExtension() override;
    ASPOSE_PAGE_SHARED_API Images::ImageTypeCore GetNativeImageType() override;
    
};

} // namespace Image
} // namespace Presentation
} // namespace XPS
} // namespace Page
} // namespace Aspose


