#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PDF_DRAWING

// C# INACTIVE CODE:
// //using Size = Aspose.Page.Drawing.Size;
// using SmoothingMode = Aspose.Page.Drawing.Drawing2D.SmoothingMode;

// C# preprocessor directive: #else


// C# preprocessor directive: #endif


#include <system/nullable.h>
#include <system/array.h>
#include <drawing/size.h>
#include <drawing/drawing2d/smoothing_mode.h>

#include "Aspose.Page.Cpp/Plugins/XpsConverter/XpsConverterOptions.h"
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

namespace Aspose {

namespace Page {

namespace Plugins {

/// <summary>
/// Represents XPS to Image converter options for <see cref="XpsConverter"></see> plugin.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsConverterToImageOptions final : public Aspose::Page::Plugins::XpsConverterOptions
{
    typedef XpsConverterToImageOptions ThisType;
    typedef Aspose::Page::Plugins::XpsConverterOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns operation name.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_OperationName() override;
    /// <summary>
    /// Gets/sets the array of numbers of pages in XPS document to convert. If not set all pages will be converted.
    /// </summary>
    ASPOSE_PAGE_SHARED_API const System::ArrayPtr<int32_t>& get_PageNumbers() const;
    /// <summary>
    /// Gets/sets the array of numbers of pages in XPS document to convert. If not set all pages will be converted.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_PageNumbers(System::ArrayPtr<int32_t> value);
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
    ASPOSE_PAGE_SHARED_API System::Drawing::Size get_Size() const;
    /// <summary>
    /// Gets/sets the size of the resulting image.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Size(System::Drawing::Size value);
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
    ASPOSE_PAGE_SHARED_API System::Nullable<System::Drawing::Drawing2D::SmoothingMode> get_SmoothingMode() const;
    /// <summary>
    /// Gets/sets the smoothing mode for rendering image.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_SmoothingMode(System::Nullable<System::Drawing::Drawing2D::SmoothingMode> value);
    
    /// <summary>
    /// Initializes new instance of the <see cref="XpsConverterToImageOptions"></see> object with default options.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsConverterToImageOptions();
    /// <summary>
    /// Initializes new instance of the <see cref="XpsConverterToImageOptions"></see> object with image format.
    /// </summary>
    /// <param name="imageFormat">A format of resulting image.</param>
    ASPOSE_PAGE_SHARED_API XpsConverterToImageOptions(Aspose::Page::Drawing::Imaging::ImageFormat imageFormat);
    /// <summary>
    /// Initializes new instance of the <see cref="XpsConverterToImageOptions"></see> object with a size of the resulting image.
    /// </summary>
    /// <param name="size">A size the resulting image.</param>
    ASPOSE_PAGE_SHARED_API XpsConverterToImageOptions(System::Drawing::Size size);
    /// <summary>
    /// Initializes new instance of the <see cref="XpsConverterToImageOptions"></see> object with image format and a size of the resulting image.
    /// </summary>
    /// <param name="imageFormat">A format of resulting image.</param>
    /// <param name="size">A size the resulting image.</param>
    ASPOSE_PAGE_SHARED_API XpsConverterToImageOptions(Aspose::Page::Drawing::Imaging::ImageFormat imageFormat, System::Drawing::Size size);
    
private:

    Aspose::Page::Drawing::Imaging::ImageFormat _imageFormat;
    System::Drawing::Size _size;
    System::ArrayPtr<int32_t> pr_PageNumbers;
    float pr_Resolution;
    System::Nullable<System::Drawing::Drawing2D::SmoothingMode> pr_SmoothingMode;
    
};

} // namespace Plugins
} // namespace Page
} // namespace Aspose


