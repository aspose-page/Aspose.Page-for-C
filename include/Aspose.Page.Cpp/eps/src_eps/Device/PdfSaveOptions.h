#pragma once

#include "Aspose.Page.Cpp/SaveOptions.h"

namespace Aspose {

namespace Page {

namespace EPS {

namespace Device {

/// <summary>
/// This class contains input and output streams and other options necessary for managing conversion process.
/// </summary>
class PdfSaveOptions : public Aspose::Page::SaveOptions
{
    typedef PdfSaveOptions ThisType;
    typedef Aspose::Page::SaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initializes a new instance of the <see cref="PdfSaveOptions" /> class with default values 
    /// for flags <see cref="SuppressErrors" /> (true) and <see cref="Debug" /> (false).
    /// </summary>
    ASPOSE_PAGE_SHARED_API PdfSaveOptions();
    /// <summary>
    /// Initializes a new instance of the <see cref="PdfSaveOptions" /> class with default values for flag <see cref="Debug" /> (false).
    /// </summary>
    /// <param name="supressErrors"> Specifies whether errors must be suppressed or not.
    /// If true suppressed errors are added to <see cref="Exceptions"/> list.</param>
    ASPOSE_PAGE_SHARED_API PdfSaveOptions(bool supressErrors);
    
};

} // namespace Device
} // namespace EPS
} // namespace Page
} // namespace Aspose


