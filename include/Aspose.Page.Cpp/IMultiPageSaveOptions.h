#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/array.h>
#include <cstdint>

namespace Aspose {

namespace Page {

/// <summary>
/// Defines interface for setting page numbers for conversion.
/// </summary>
class IMultiPageSaveOptions : public virtual System::Object
{
    typedef IMultiPageSaveOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets/sets the array of numbers of pages to convert.
    /// </summary>
    virtual System::ArrayPtr<int32_t> get_PageNumbers() = 0;
    /// <summary>
    /// Gets/sets the array of numbers of pages to convert.
    /// </summary>
    virtual void set_PageNumbers(System::ArrayPtr<int32_t> value) = 0;
    
};

} // namespace Page
} // namespace Aspose


