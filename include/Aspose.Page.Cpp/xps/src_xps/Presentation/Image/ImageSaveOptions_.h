#pragma once

#include <drawing/text/text_rendering_hint.h>
#include <drawing/drawing2d/smoothing_mode.h>
#include <drawing/drawing2d/interpolation_mode.h>

#include "Aspose.Page.Cpp/SaveOptions.h"
#include "Aspose.Page.Cpp/IMultiPageSaveOptions.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Image { class ImageDevice; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Image { class ImageRenderer; } } } } }
namespace Aspose { namespace Images { enum class ImageTypeCore; } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace Presentation {

namespace Image {

/// <summary>
/// Basic class for XPS-as-image saving options.
/// </summary>
class ImageSaveOptions : public Aspose::Page::SaveOptions, public Aspose::Page::IMultiPageSaveOptions
{
    typedef ImageSaveOptions ThisType;
    typedef Aspose::Page::SaveOptions BaseType;
    typedef Aspose::Page::IMultiPageSaveOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::Xps::Presentation::Image::ImageDevice;
    friend class Aspose::Page::Xps::Presentation::Image::ImageRenderer;
    
public:

    /// <summary>
    /// Gets/sets the array of numbers of pages to convert.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::ArrayPtr<int32_t> get_PageNumbers();
    /// <summary>
    /// Gets/sets the array of numbers of pages to convert.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_PageNumbers(System::ArrayPtr<int32_t> value);
    /// <summary>
    /// Gets/sets the image resolution.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Resolution();
    /// <summary>
    /// Gets/sets the image resolution.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Resolution(float value);
    /// <summary>
    /// Gets/sets the smoothing mode.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::Drawing2D::SmoothingMode get_SmoothingMode();
    /// <summary>
    /// Gets/sets the smoothing mode.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_SmoothingMode(System::Drawing::Drawing2D::SmoothingMode value);
    /// <summary>
    /// Gets/sets the text rendering hint.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::Text::TextRenderingHint get_TextRenderingHint();
    /// <summary>
    /// Gets/sets the text rendering hint.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_TextRenderingHint(System::Drawing::Text::TextRenderingHint value);
    /// <summary>
    /// Gets/sets the interpolation mode.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::Drawing2D::InterpolationMode get_InterpolationMode();
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
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<int32_t> pr_PageNumbers;
    float pr_Resolution;
    System::Drawing::Drawing2D::SmoothingMode pr_SmoothingMode;
    System::Drawing::Text::TextRenderingHint pr_TextRenderingHint;
    System::Drawing::Drawing2D::InterpolationMode pr_InterpolationMode;
    
};

} // namespace Image
} // namespace Presentation
} // namespace Xps
} // namespace Page
} // namespace Aspose


