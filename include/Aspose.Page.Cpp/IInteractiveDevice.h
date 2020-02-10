#pragma once

#include <system/string.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/idictionary.h>
#include <drawing/rectangle_f.h>
#include <drawing/point_f.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

/// <summary>
/// The interface defining interactive features processing methods.
/// </summary>
class IInteractiveDevice : public virtual System::Object
{
    typedef IInteractiveDevice ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns the map of internal hyperlink targets.
    /// </summary>
    virtual System::SharedPtr<System::Collections::Generic::IDictionary<int32_t, System::SharedPtr<System::Collections::Generic::List<System::Drawing::RectangleF>>>> get_InternalHyperlinksTargets() = 0;
    
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
    /// <summary>
    /// Saves internal hyperlink target as an absolute page number and a rectangular area on a page.
    /// </summary>
    /// <param name="absolutePageNumber">The absolute page number.</param>
    /// <param name="rect">The rectangular area on a page.</param>
    virtual void SaveInternalHyperlinkTarget(int32_t absolutePageNumber, System::Drawing::RectangleF rect) = 0;
    
};

} // namespace Page
} // namespace Aspose


