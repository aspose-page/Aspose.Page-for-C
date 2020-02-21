#pragma once

#include "Aspose.Page.Cpp/SaveOptions.h"

namespace Aspose {

namespace Page {

namespace EPS {

namespace Device {

/// <summary>
/// This class contains options necessary for managing image saving process.
/// </summary>
class ImageSaveOptions : public Aspose::Page::SaveOptions
{
    typedef ImageSaveOptions ThisType;
    typedef Aspose::Page::SaveOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Initializes a new instance of the <see cref="ImageSaveOptions" /> class with default values 
    /// for flags <see cref="SuppressErrors" /> (true) and <see cref="Debug" /> (false).
    /// </summary>
    ASPOSE_PAGE_SHARED_API ImageSaveOptions();
    /// <summary>
    /// Initializes a new instance of the <see cref="ImageSaveOptions" /> with
    /// default value for flag <see cref="Debug" /> (false).
    /// </summary>
    /// <param name="supressErrors"> Specifies whether errors must be suppressed or not.
    /// If true suppressed errors are added to <see cref="Exceptions"/> list.</param>
    ASPOSE_PAGE_SHARED_API ImageSaveOptions(bool supressErrors);
    
};

} // namespace Device
} // namespace EPS
} // namespace Page
} // namespace Aspose


