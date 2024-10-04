#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace System
{
namespace Drawing
{
namespace Imaging
{
class ImageFormat;
} // namespace Imaging
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Page {

namespace Drawing {

namespace Imaging {

enum class ImageFormat
{
    /// <summary> BMP image format. </summary>
    Bmp,
    /// <summary> JPEG image format. </summary>
    Jpeg,
    /// <summary> PNG image format. </summary>
    Png,
    /// <summary> GIF image format. </summary>
    Gif,
    /// <summary> TIFF image format. </summary>
    Tiff,
    /// <summary> EMF image format. </summary>
    Emf,
    /// <summary> WMF image format. </summary>
    Wmf
};

/// <summary>
/// The <b>Aspose.Page.Drawing.Imaging</b> is a root namespace for System.Drawing.Imaging wrapper classes.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

class ImageFormatExtensions
{
    typedef ImageFormatExtensions ThisType;
    
public:

    static ImageFormat FromNativeValue(System::SharedPtr<System::Drawing::Imaging::ImageFormat> imageFormat);
    static System::SharedPtr<System::Drawing::Imaging::ImageFormat> GetNativeValue(ImageFormat imageFormat);
    
public:
    ImageFormatExtensions() = delete;
};

// Summary:
//     Specifies the file format of the image. Not inheritable.
} // namespace Imaging
} // namespace Drawing
} // namespace Page
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Page::Drawing::Imaging::ImageFormat>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::Drawing::Imaging::ImageFormat, const char_t*>, 7>& values();
};



