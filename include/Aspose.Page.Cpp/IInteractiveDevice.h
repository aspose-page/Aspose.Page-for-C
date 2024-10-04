#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace System
{
namespace Drawing
{
class PointF;
} // namespace Drawing
class String;
} // namespace System

namespace Aspose {

namespace Page {

/// <summary>
/// The interface defining interactive features processing methods.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS IInteractiveDevice : public virtual System::Object
{
    typedef IInteractiveDevice ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Set the hyperlink with an external URI as its target.
    /// </summary>
    /// <param name="targetUri">The target external URI.</param>
    virtual void SetHyperlinkTarget(System::String targetUri) = 0;
    /// <summary>
    /// Set the hyperlink with a page number as its target.
    /// </summary>
    /// <param name="targetPageNumber">The target page number.</param>
    virtual void SetHyperlinkTarget(int32_t targetPageNumber) = 0;
    /// <summary>
    /// Adds an outline item with the last object as its target.
    /// </summary>
    /// <param name="outlineLevel">The outline level.</param>
    /// <param name="description">The item description.</param>
    virtual void AddOutline(int32_t outlineLevel, System::String description) = 0;
    /// <summary>
    /// Adds an outline item with the origin point as its target.
    /// </summary>
    /// <param name="origin">The target origin.</param>
    /// <param name="outlineLevel">The outline level.</param>
    /// <param name="description">The item description.</param>
    virtual void AddOutline(System::Drawing::PointF origin, int32_t outlineLevel, System::String description) = 0;
    
};

} // namespace Page
} // namespace Aspose


