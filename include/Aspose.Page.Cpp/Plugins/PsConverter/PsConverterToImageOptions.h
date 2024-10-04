#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/nullable.h>

#include "Aspose.Page.Cpp/Plugins/PsConverter/PsConverterOptions.h"
#include "Aspose.Page.Cpp/Drawing/Size.h"
#include "Aspose.Page.Cpp/Drawing/Drawing2D/SmoothingMode.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace Drawing
{
namespace Imaging
{
enum class ImageFormat;
} // namespace Imaging
} // namespace Drawing
} // namespace Page
} // namespace Aspose
namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Page {

namespace Plugins {

/// <summary>
/// Represents PS/EPS to Image converter options for <see cref="PsConverter"></see> plugin.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS PsConverterToImageOptions final : public Aspose::Page::Plugins::PsConverterOptions
{
    typedef PsConverterToImageOptions ThisType;
    typedef Aspose::Page::Plugins::PsConverterOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns operation name.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_OperationName() override;
    /// <summary>
    /// Gets/sets the image type.
    /// </summary>
    ASPOSE_PAGE_SHARED_API Aspose::Page::Drawing::Imaging::ImageFormat get_ImageFormat() const;
    /// <summary>
    /// Gets/sets the image type.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_ImageFormat(Aspose::Page::Drawing::Imaging::ImageFormat value);
    /// <summary>
    /// Gets/sets the size of the resulting image.
    /// </summary>
    ASPOSE_PAGE_SHARED_API Aspose::Page::Drawing::Size get_Size() const;
    /// <summary>
    /// Gets/sets the size of the resulting image.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Size(Aspose::Page::Drawing::Size value);
    /// <summary>
    /// Gets/sets the image resolution.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Resolution() const;
    /// <summary>
    /// Gets/sets the image resolution.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Resolution(float value);
    /// <summary>
    /// Gets/sets the smoothing mode for rendering image.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Nullable<Aspose::Page::Drawing::Drawing2D::SmoothingMode> get_SmoothingMode() const;
    /// <summary>
    /// Gets/sets the smoothing mode for rendering image.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_SmoothingMode(System::Nullable<Aspose::Page::Drawing::Drawing2D::SmoothingMode> value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="PsConverterToImageOptions"></see> object with default options.
    /// </summary>
    ASPOSE_PAGE_SHARED_API PsConverterToImageOptions();
    /// <summary>
    /// Initializes new instance of the <see cref="PsConverterToImageOptions"></see> object with image format.
    /// </summary>
    /// <param name="imageFormat">A format of resulting image.</param>
    ASPOSE_PAGE_SHARED_API PsConverterToImageOptions(Aspose::Page::Drawing::Imaging::ImageFormat imageFormat);
    /// <summary>
    /// Initializes new instance of the <see cref="PsConverterToImageOptions"></see> object with a size of the resulting image.
    /// </summary>
    /// <param name="size">A size the resulting image.</param>
    ASPOSE_PAGE_SHARED_API PsConverterToImageOptions(Aspose::Page::Drawing::Size size);
    /// <summary>
    /// Initializes new instance of the <see cref="PsConverterToImageOptions"></see> object with image format and a size of the resulting image.
    /// </summary>
    /// <param name="imageFormat">A format of resulting image.</param>
    /// <param name="size">A size the resulting image.</param>
    ASPOSE_PAGE_SHARED_API PsConverterToImageOptions(Aspose::Page::Drawing::Imaging::ImageFormat imageFormat, Aspose::Page::Drawing::Size size);
    
private:

    Aspose::Page::Drawing::Imaging::ImageFormat _imageFormat;
    Aspose::Page::Drawing::Size _size;
    float pr_Resolution;
    System::Nullable<Aspose::Page::Drawing::Drawing2D::SmoothingMode> pr_SmoothingMode;
    
};

} // namespace Plugins
} // namespace Page
} // namespace Aspose


