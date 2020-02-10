#pragma once

#include "Aspose.Page.Cpp/xps/src_xps/Presentation/Image/ImageSaveOptions_.h"

namespace Aspose { namespace Images { enum class ImageTypeCore; } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace Presentation {

namespace Image {

/// <summary>
/// Class for XPS-as-PNG saving options.
/// </summary>
class PngSaveOptions : public Aspose::Page::Xps::Presentation::Image::ImageSaveOptions
{
    typedef PngSaveOptions ThisType;
    typedef Aspose::Page::Xps::Presentation::Image::ImageSaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Creates new instance of options.
    /// </summary>
    ASPOSE_PAGE_SHARED_API PngSaveOptions();
    
protected:

    virtual ASPOSE_PAGE_SHARED_API System::String GetExtension();
    virtual ASPOSE_PAGE_SHARED_API Images::ImageTypeCore GetNativeImageType();
    
};

} // namespace Image
} // namespace Presentation
} // namespace Xps
} // namespace Page
} // namespace Aspose


