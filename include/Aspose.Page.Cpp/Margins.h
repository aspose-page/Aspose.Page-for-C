#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

/// <summary>
/// This class encapsulates top, left, bottom and right margins.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS Margins : public System::Object
{
    typedef Margins ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Top margin.
    /// </summary>
    int32_t top;
    /// <summary>
    /// Left margin.
    /// </summary>
    int32_t left;
    /// <summary>
    /// Bottom margin.
    /// </summary>
    int32_t bottom;
    /// <summary>
    /// Right margin.
    /// </summary>
    int32_t right;
    
    /// <summary>
    /// Initializes an instance of Margin class.
    /// </summary>
    /// <param name="top"> Top margin. </param>
    /// <param name="left"> Left margin. </param>
    /// <param name="bottom"> Bottom margin. </param>
    /// <param name="right"> Right margin. </param>
    ASPOSE_PAGE_SHARED_API Margins(int32_t top, int32_t left, int32_t bottom, int32_t right);
    
    /// <summary>
    /// Specifies margins values.
    /// </summary>
    /// <param name="top"> Top margin. </param>
    /// <param name="left"> Left margin. </param>
    /// <param name="bottom"> Bottom margin. </param>
    /// <param name="right"> Right margin. </param>
    ASPOSE_PAGE_SHARED_API void set(int32_t top, int32_t left, int32_t bottom, int32_t right);
    /// <summary>
    /// Compares this margins with other.
    /// </summary>
    /// <param name="obj">Another margins object.</param>
    /// <returns>True if all margins are equal.</returns>
    ASPOSE_PAGE_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>
    /// Calculates hashcode for this margins object.
    /// </summary>
    /// <returns> A hashcode. </returns>
    ASPOSE_PAGE_SHARED_API int32_t GetHashCode() const override;
    /// <summary>
    /// Make up a string representing this margins object.
    /// </summary>
    /// <returns> A string representation of this margins object. </returns>
    ASPOSE_PAGE_SHARED_API System::String ToString() const override;
    
private:

    System::String ToString_NonConst();
    
};

} // namespace Page
} // namespace Aspose


