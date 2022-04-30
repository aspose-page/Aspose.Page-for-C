#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/SaveOptions.h"
#include "Aspose.Page.Cpp/IMultiPageSaveOptions.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Images
{
enum class ImageTypeCore;
} // namespace Images
namespace Page
{
namespace XPS
{
namespace Presentation
{
namespace Image
{
class ImageDevice;
class ImageRenderer;
} // namespace Image
} // namespace Presentation
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Drawing
{
namespace Drawing2D
{
enum class InterpolationMode;
enum class SmoothingMode;
} // namespace Drawing2D
namespace Text
{
enum class TextRenderingHint;
} // namespace Text
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace Presentation {

namespace Image {

/// <summary>
/// Basic class for XPS-as-image saving options.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS ImageSaveOptions : public Aspose::Page::SaveOptions, public Aspose::Page::IMultiPageSaveOptions
{
    typedef ImageSaveOptions ThisType;
    typedef Aspose::Page::SaveOptions BaseType;
    typedef Aspose::Page::IMultiPageSaveOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::Image::ImageDevice;
    friend class Aspose::Page::XPS::Presentation::Image::ImageRenderer;
    
public:

    /// <summary>
    /// Gets/sets the array of numbers of pages to convert.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::ArrayPtr<int32_t> get_PageNumbers() override;
    /// <summary>
    /// Gets/sets the array of numbers of pages to convert.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_PageNumbers(System::ArrayPtr<int32_t> value) override;
    /// <summary>
    /// Gets/sets the image resolution.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Resolution() const;
    /// <summary>
    /// Gets/sets the image resolution.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Resolution(float value);
    /// <summary>
    /// Gets/sets the smoothing mode.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::Drawing2D::SmoothingMode get_SmoothingMode() const;
    /// <summary>
    /// Gets/sets the smoothing mode.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_SmoothingMode(System::Drawing::Drawing2D::SmoothingMode value);
    /// <summary>
    /// Gets/sets the text rendering hint.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::Text::TextRenderingHint get_TextRenderingHint() const;
    /// <summary>
    /// Gets/sets the text rendering hint.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_TextRenderingHint(System::Drawing::Text::TextRenderingHint value);
    /// <summary>
    /// Gets/sets the interpolation mode.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::Drawing2D::InterpolationMode get_InterpolationMode() const;
    /// <summary>
    /// Gets/sets the interpolation mode.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_InterpolationMode(System::Drawing::Drawing2D::InterpolationMode value);
    
    /// <summary>
    /// Creates new instance of options.
    /// </summary>
    ASPOSE_PAGE_SHARED_API ImageSaveOptions();
    
protected:

    virtual System::String GetExtension() = 0;
    virtual Aspose::Images::ImageTypeCore GetNativeImageType() = 0;
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::ArrayPtr<int32_t> pr_PageNumbers;
    float pr_Resolution;
    System::Drawing::Drawing2D::SmoothingMode pr_SmoothingMode;
    System::Drawing::Text::TextRenderingHint pr_TextRenderingHint;
    System::Drawing::Drawing2D::InterpolationMode pr_InterpolationMode;
    
};

} // namespace Image
} // namespace Presentation
} // namespace XPS
} // namespace Page
} // namespace Aspose


