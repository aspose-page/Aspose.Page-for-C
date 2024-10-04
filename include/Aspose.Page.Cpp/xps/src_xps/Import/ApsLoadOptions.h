#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/Import/LoadOptions.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

/// <summary>
/// APS document loading options.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS ApsLoadOptions : public Aspose::Page::XPS::LoadOptions
{
    typedef ApsLoadOptions ThisType;
    typedef Aspose::Page::XPS::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// An integer value from 0 to 255 below which pixel of image that contains alpha values will be considered as fully transparent.
    /// PostScript doesn't support transparency, but can apply explicit mask above color image where some pixels will be fully opaque
    /// and some one's will be fully transparent. Transparency threshold is used for finding the best likeness of original and PostScript result.
    /// Default value is 255.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_TransparencyThreshold() const;
    /// <summary>
    /// An integer value from 0 to 255 below which pixel of image that contains alpha values will be considered as fully transparent.
    /// PostScript doesn't support transparency, but can apply explicit mask above color image where some pixels will be fully opaque
    /// and some one's will be fully transparent. Transparency threshold is used for finding the best likeness of original and PostScript result.
    /// Default value is 255.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_TransparencyThreshold(int32_t value);
    
    /// <summary>
    /// Creates new instance of options.
    /// </summary>
    ASPOSE_PAGE_SHARED_API ApsLoadOptions();
    
private:

    int32_t transparencyThreshold;
    
};

} // namespace XPS
} // namespace Page
} // namespace Aspose


