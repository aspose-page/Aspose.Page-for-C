#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace System
{
class String;
} // namespace System

namespace Aspose {

namespace Page {

/// <summary>
/// This interface contains methods for manipulating multi-paged device.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS IMultiPageDevice : public virtual System::Object
{
    typedef IMultiPageDevice ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Current page number.
    /// </summary>
    virtual int32_t get_CurrentPageNumber() = 0;
    
    /// <summary>
    /// Initializes numbers of pages to output.
    /// </summary>
    virtual void InitPageNumbers() = 0;
    /// <summary>
    /// Makes necessary preparation of the device before page rendering.
    /// </summary>
    /// <param name="title">The page title.</param>
    /// <returns>True if page is from requested range, otherwise false.
    /// Used in devices that can render specified array of page numbers.
    /// </returns>
    virtual bool OpenPage(System::String title) = 0;
    /// <summary>
    /// Makes necessary preparation of the device before each page rendering.
    /// </summary>
    /// <param name="width">A width of the page.</param>
    /// <param name="height">A height of the page.</param>
    /// <returns>Returns true if opened page has a number that falls in a range of selected page numbers and false otherwise.</returns>
    virtual bool OpenPage(float width, float height) = 0;
    /// <summary>
    /// Makes necessary preparation of the device after page has been rendered.
    /// </summary>
    virtual void ClosePage() = 0;
    /// <summary>
    /// Updates page parameters from other multi-paged device.
    /// </summary>
    /// <param name="device"> Another instance of the same device. </param>
    virtual void UpdatePageParameters(System::SharedPtr<IMultiPageDevice> device) = 0;
    
};

} // namespace Page
} // namespace Aspose


