#pragma once

#include "Aspose.Page.Cpp/SaveOptions.h"
#include "Aspose.Page.Cpp/IMultiPageSaveOptions.h"

namespace Aspose {

namespace Page {

namespace Xps {

namespace Presentation {

namespace Aps {


// C# preprocessor directive: #if INTERNAL


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

/// <summary>
/// Values for ConversionMode option.
/// </summary>
enum class XpsConversionMode
{
    /// <summary>
    /// All other destinations.
    /// </summary>
    Other,
    /// <summary>
    /// Destination - PDF.
    /// </summary>
    PDF
};


// C# preprocessor directive: #if INTERNAL


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ApsSaveOptions : public Aspose::Page::SaveOptions, public Aspose::Page::IMultiPageSaveOptions
{
    typedef ApsSaveOptions ThisType;
    typedef Aspose::Page::SaveOptions BaseType;
    typedef Aspose::Page::IMultiPageSaveOptions BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
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
    /// Conversion mode.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsConversionMode get_ConversionMode();
    /// <summary>
    /// Conversion mode.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_ConversionMode(XpsConversionMode value);
    /// <summary>
    /// Gets/set the value indicating whether coordinates of XPS elements
    /// should be converted to system coordinates of PDF format.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_UsePdfCoordinates();
    /// <summary>
    /// Gets/set the value indicating whether coordinates of XPS elements
    /// should be converted to system coordinates of PDF format.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_UsePdfCoordinates(bool value);
    /// <summary>
    /// Gets/sets the value indicating whether the LinearGradientBrush will be converted to DrTextureBrush.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_TexturizeLinearGradientBrush();
    /// <summary>
    /// Gets/sets the value indicating whether the LinearGradientBrush will be converted to DrTextureBrush.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_TexturizeLinearGradientBrush(bool value);
    /// <summary>
    /// Gets/sets the value indicating whether the RadialGradientBrush will be converted to DrTextureBrush.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_TexturizeRadialGradientBrush();
    /// <summary>
    /// Gets/sets the value indicating whether the RadialGradientBrush will be converted to DrTextureBrush.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_TexturizeRadialGradientBrush(bool value);
    /// <summary>
    /// Gets/sets the value indicating whether fonts should be subset.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_SubsetTTFonts();
    /// <summary>
    /// Gets/sets the value indicating whether fonts should be subset.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_SubsetTTFonts(bool value);
    /// <summary>
    /// Gets/sets the value indicating whether hyperlink active rectangles
    /// should be set to target locations and page numbers in jump links
    /// should be plus 1. This is the way Aspose.PDF converts PDF document
    /// to APS.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_EmulatePdfToAps();
    /// <summary>
    /// Gets/sets the value indicating whether hyperlink active rectangles
    /// should be set to target locations and page numbers in jump links
    /// should be plus 1. This is the way Aspose.PDF converts PDF document
    /// to APS.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_EmulatePdfToAps(bool value);
    
    /// <summary>
    /// Creates new instance of options.
    /// </summary>
    ASPOSE_PAGE_SHARED_API ApsSaveOptions();
    
protected:

    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<int32_t> pr_PageNumbers;
    XpsConversionMode pr_ConversionMode;
    bool pr_UsePdfCoordinates;
    bool pr_TexturizeLinearGradientBrush;
    bool pr_TexturizeRadialGradientBrush;
    bool pr_SubsetTTFonts;
    bool pr_EmulatePdfToAps;
    
};

} // namespace Aps
} // namespace Presentation
} // namespace Xps
} // namespace Page
} // namespace Aspose


