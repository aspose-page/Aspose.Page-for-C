#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <drawing/rectangle_f.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsTransformableBrush.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Presentation
{
namespace Xps
{
class XpsPageWriter;
} // namespace Xps
} // namespace Presentation
namespace XpsModel
{
class XpsContext;
class XpsImageBrush;
class XpsObject;
enum class XpsTileMode;
class XpsVisualBrush;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Xml
{
class XmlElement;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {

/// <summary>
/// Class incapsulating common features of tiling brushes elements (VisualBrush and ImageBrush).
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsTilingBrush : public Aspose::Page::XPS::XpsModel::XpsTransformableBrush
{
    typedef XpsTilingBrush ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsTransformableBrush BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::Xps::XpsPageWriter;
    friend class Aspose::Page::XPS::XpsModel::XpsImageBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsVisualBrush;
    
public:

    /// <summary>
    /// Returns/sets the region of the source content of the brush that is to be mapped to the viewport. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::RectangleF get_Viewbox() const;
    /// <summary>
    /// Returns/sets the region of the source content of the brush that is to be mapped to the viewport. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Viewbox(System::Drawing::RectangleF value);
    /// <summary>
    /// Returns/sets the position and dimensions of the first brush tile. Subsequent tiles are positioned
    /// relative to this tile, as specified by the tile mode.   
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::RectangleF get_Viewport() const;
    /// <summary>
    /// Returns/sets the position and dimensions of the first brush tile. Subsequent tiles are positioned
    /// relative to this tile, as specified by the tile mode.   
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Viewport(System::Drawing::RectangleF value);
    /// <summary>
    /// Returns/sets value specifying how tiling is performed in the filled geometry.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsTileMode get_TileMode() const;
    /// <summary>
    /// Returns/sets value specifying how tiling is performed in the filled geometry.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_TileMode(XpsTileMode value);
    
protected:

    System::String get_ViewboxUnits() const;
    System::String get_ViewportUnits() const;
    
    XpsTilingBrush(System::SharedPtr<XpsContext> context, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport);
    XpsTilingBrush(System::SharedPtr<XpsContext> context);
    
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsObject> obj) override;
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::Drawing::RectangleF _viewbox;
    System::Drawing::RectangleF _viewport;
    XpsTileMode _tileMode;
    System::String _viewboxUnits;
    System::String _viewportUnits;
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


