#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/nullable.h>

#include "Aspose.Page.Cpp/SaveOptions.h"
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
class Size;
} // namespace Drawing
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace EPS {

namespace Device {

/// <summary>
/// This class contains options necessary for managing image saving process.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS ImageSaveOptions : public Aspose::Page::SaveOptions
{
    typedef ImageSaveOptions ThisType;
    typedef Aspose::Page::SaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets/sets the smoothing mode for rendering image.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Nullable<Aspose::Page::Drawing::Drawing2D::SmoothingMode> get_SmoothingMode() const;
    /// <summary>
    /// Gets/sets the smoothing mode for rendering image.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_SmoothingMode(System::Nullable<Aspose::Page::Drawing::Drawing2D::SmoothingMode> value);
    /// <summary>
    /// Gets/sets the image resolution.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Resolution() const;
    /// <summary>
    /// Gets/sets the image resolution.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Resolution(float value);
    /// <summary>
    /// Gets/sets an image format for resulting image.
    /// </summary>
    ASPOSE_PAGE_SHARED_API Aspose::Page::Drawing::Imaging::ImageFormat get_ImageFormat() const;
    /// <summary>
    /// Gets/sets an image format for resulting image.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_ImageFormat(Aspose::Page::Drawing::Imaging::ImageFormat value);
    /// <summary>
    /// The flag for combining image fragments into one picture.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_TryJoinImageFragments() const;
    /// <summary>
    /// The flag for combining image fragments into one picture.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_TryJoinImageFragments(bool value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="ImageSaveOptions"></see> class with default values 
    /// for flags <see cref="SuppressErrors"></see> (true) and <see cref="Debug"></see> (false).
    /// </summary>
    ASPOSE_PAGE_SHARED_API ImageSaveOptions();
    /// <summary>
    /// Initializes a new instance of the <see cref="ImageSaveOptions"></see> with
    /// with specified image format.
    /// </summary>
    /// <param name="imageFormat"> The format of the image.</param>
    ASPOSE_PAGE_SHARED_API ImageSaveOptions(Aspose::Page::Drawing::Imaging::ImageFormat imageFormat);
    /// <summary>
    /// Initializes a new instance of the <see cref="ImageSaveOptions"></see> with
    /// with specified size of the image.
    /// </summary>
    /// <param name="size"> The image size.</param>
    ASPOSE_PAGE_SHARED_API ImageSaveOptions(Aspose::Page::Drawing::Size size);
    /// <summary>
    /// Initializes a new instance of the <see cref="ImageSaveOptions"></see> with
    /// with specified size of the image and image format.
    /// </summary>
    /// <param name="size"> The image size.</param>
    /// <param name="imageFormat"> The format of the image.</param>
    ASPOSE_PAGE_SHARED_API ImageSaveOptions(Aspose::Page::Drawing::Size size, Aspose::Page::Drawing::Imaging::ImageFormat imageFormat);
    /// <summary>
    /// Initializes a new instance of the <see cref="ImageSaveOptions"></see> with
    /// with specified image format.
    /// </summary>        
    /// <param name="imageFormat"> The format of the image.</param>
    /// <param name="supressErrors"> Specifies whether errors must be suppressed or not.
    /// If true suppressed errors are added to <see cref="Exceptions"></see> list.</param>
    ASPOSE_PAGE_SHARED_API ImageSaveOptions(Aspose::Page::Drawing::Imaging::ImageFormat imageFormat, bool supressErrors);
    /// <summary>
    /// Initializes a new instance of the <see cref="ImageSaveOptions"></see> with
    /// with specified size.
    /// </summary>
    /// <param name="size"> The image size.</param>
    /// <param name="supressErrors"> Specifies whether errors must be suppressed or not.
    /// If true suppressed errors are added to <see cref="Exceptions"></see> list.</param>
    ASPOSE_PAGE_SHARED_API ImageSaveOptions(Aspose::Page::Drawing::Size size, bool supressErrors);
    /// <summary>
    /// Initializes a new instance of the <see cref="ImageSaveOptions"></see> with
    /// with specified size of the image and image format.
    /// </summary>
    /// <param name="size"> The image size.</param>
    /// <param name="imageFormat"> The format of the image.</param>
    /// <param name="supressErrors"> Specifies whether errors must be suppressed or not.
    /// If true suppressed errors are added to <see cref="Exceptions"></see> list.</param>
    ASPOSE_PAGE_SHARED_API ImageSaveOptions(Aspose::Page::Drawing::Size size, Aspose::Page::Drawing::Imaging::ImageFormat imageFormat, bool supressErrors);
    /// <summary>
    /// Initializes a new instance of the <see cref="ImageSaveOptions"></see> with
    /// default value for flag <see cref="Debug"></see> (false).
    /// </summary>
    /// <param name="supressErrors"> Specifies whether errors must be suppressed or not.
    /// If true suppressed errors are added to <see cref="Exceptions"></see> list.</param>
    ASPOSE_PAGE_SHARED_API ImageSaveOptions(bool supressErrors);
    
private:

    Aspose::Page::Drawing::Imaging::ImageFormat imageFormat;
    System::Nullable<Aspose::Page::Drawing::Drawing2D::SmoothingMode> pr_SmoothingMode;
    float pr_Resolution;
    bool pr_TryJoinImageFragments;
    
};

} // namespace Device
} // namespace EPS
} // namespace Page
} // namespace Aspose


