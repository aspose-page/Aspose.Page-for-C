#pragma once

#include <system/string.h>
#include <drawing/rectangle_f.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsTransformableBrush.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsPageWriter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsImageBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsVisualBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { enum class XpsTileMode; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElement; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating common features of tiling brushes elements (VisualBrush and ImageBrush).
/// </summary>
class XpsTilingBrush : public Aspose::Page::Xps::XpsModel::XpsTransformableBrush
{
    typedef XpsTilingBrush ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsTransformableBrush BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsPageWriter;
    friend class Aspose::Page::Xps::XpsModel::XpsImageBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsVisualBrush;
    
public:

    /// <summary>
    /// Returns/sets the region of the source content of the brush that is to be mapped to the viewport. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::RectangleF get_Viewbox();
    /// <summary>
    /// Returns/sets the region of the source content of the brush that is to be mapped to the viewport. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Viewbox(System::Drawing::RectangleF value);
    /// <summary>
    /// Returns/sets the position and dimensions of the first brush tile. Subsequent tiles are positioned
    /// relative to this tile, as specified by the tile mode.   
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::RectangleF get_Viewport();
    /// <summary>
    /// Returns/sets the position and dimensions of the first brush tile. Subsequent tiles are positioned
    /// relative to this tile, as specified by the tile mode.   
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Viewport(System::Drawing::RectangleF value);
    /// <summary>
    /// Returns/sets value specifying how tiling is performed in the filled geometry.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsTileMode get_TileMode();
    /// <summary>
    /// Returns/sets value specifying how tiling is performed in the filled geometry.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_TileMode(XpsTileMode value);
    
protected:

    System::String get_ViewboxUnits();
    System::String get_ViewportUnits();
    
    XpsTilingBrush(System::SharedPtr<XpsContext> context, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport);
    XpsTilingBrush(System::SharedPtr<XpsContext> context);
    
    virtual ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element);
    virtual ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsElement> element);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::Drawing::RectangleF _viewbox;
    System::Drawing::RectangleF _viewport;
    XpsTileMode _tileMode;
    System::String _viewboxUnits;
    System::String _viewportUnits;
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


