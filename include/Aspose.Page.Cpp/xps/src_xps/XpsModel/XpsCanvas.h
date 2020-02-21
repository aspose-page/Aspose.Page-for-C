#pragma once

#include <xml/xml_element.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/enum_helpers.h>
#include <drawing/font_style.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsInterfaces.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsElement.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsVisual; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPropertyValueManager; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsTreeLoader; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { template<typename> class XpsProperty; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { enum class XpsEdgeMode; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsMatrix; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPathGeometry; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsHyperlinkTarget; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocumentVisitor; } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPath; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGlyphs; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// The <b>Aspose.Page.Xps.XpsModel</b> namespace provides classes that describe elements of XPS document.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// Class incapsulating Canvas element features.
/// This element groups elements together. For example, Glyphs and Path elements
/// can be grouped in a canvas in order to be identified as a unit (as a hyperlink destination) or
/// to apply a composed property value to each child and ancestor element.
/// </summary>
class XpsCanvas FINAL : public Aspose::Page::Xps::XpsModel::XpsElement, public Aspose::Page::Xps::XpsModel::ITransformableElement, public Aspose::Page::Xps::XpsModel::IClippable, public Aspose::Page::Xps::XpsModel::IXpsVisualElement
{
    typedef XpsCanvas ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsElement BaseType;
    typedef Aspose::Page::Xps::XpsModel::ITransformableElement BaseType1;
    typedef Aspose::Page::Xps::XpsModel::IClippable BaseType2;
    typedef Aspose::Page::Xps::XpsModel::IXpsVisualElement BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    friend class Aspose::Page::Xps::XpsModel::XpsVisual;
    friend class Aspose::Page::Xps::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::Xps::XpsModel::XpsTreeLoader;
    template<typename FT0> friend class Aspose::Page::Xps::XpsModel::XpsProperty;
    
public:

    /// <summary>
    /// Returns/sets the affine transformation matrix establishing a new coordinate frame
    /// for the child and descendant elements of the canvas, such as another canvas.
    /// Also affects clip and opacity mask.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsMatrix> get_RenderTransform();
    /// <summary>
    /// Returns/sets the affine transformation matrix establishing a new coordinate frame
    /// for the child and descendant elements of the canvas, such as another canvas.
    /// Also affects clip and opacity mask.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_RenderTransform(System::SharedPtr<XpsMatrix> value);
    /// <summary>
    /// Returns/sets the path geometry limitting the rendered region of the element. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathGeometry> get_Clip();
    /// <summary>
    /// Returns/sets the path geometry limitting the rendered region of the element. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Clip(System::SharedPtr<XpsPathGeometry> value);
    /// <summary>
    /// Returns/sets the value defining the uniform transparency of the canvas.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Opacity();
    /// <summary>
    /// Returns/sets the value defining the uniform transparency of the canvas.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Opacity(float value);
    /// <summary>
    /// Returns/sets the brush specifying a mask of alpha values that is applied
    /// to the canvas in the same fashion as the Opacity attribute, but allowing different alpha values
    /// for different areas of the element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsBrush> get_OpacityMask();
    /// <summary>
    /// Returns/sets the brush specifying a mask of alpha values that is applied
    /// to the canvas in the same fashion as the Opacity attribute, but allowing different alpha values
    /// for different areas of the element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_OpacityMask(System::SharedPtr<XpsBrush> value);
    /// <summary>
    /// Returns/sets hyperlink target object.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsHyperlinkTarget> get_HyperlinkTarget();
    /// <summary>
    /// Returns/sets hyperlink target object.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_HyperlinkTarget(System::SharedPtr<XpsHyperlinkTarget> value);
    /// <summary>
    /// Returns/sets the value that controls how edges of paths within the canvas are rendered.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsEdgeMode get_EdgeMode();
    /// <summary>
    /// Returns/sets the value that controls how edges of paths within the canvas are rendered.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_EdgeMode(XpsEdgeMode value);
    
    /// <summary>
    /// Adds a new canvas to this canvas's child list.
    /// </summary>
    /// <returns>Added canvas.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsCanvas> AddCanvas();
    /// <summary>
    /// Adds a canvas to this canvas's child list.
    /// </summary>
    /// <param name="canvas">The canvas to be added.</param>
    /// <returns>Added canvas.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsCanvas> AddCanvas(System::SharedPtr<XpsCanvas> canvas);
    /// <summary>
    /// Inserts a new canvas to this canvas's child list at <paramref name="index"/> position.
    /// </summary>
    /// <param name="index">Position at which a new canvas should be inserted.</param>
    /// <returns>Inserted canvas.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsCanvas> InsertCanvas(int32_t index);
    /// <summary>
    /// Inserts a canvas to this canvas's child list at <paramref name="index"/> position.
    /// </summary>
    /// <param name="index">Position at which a canvas should be inserted.</param>
    /// <param name="canvas">The canvas to be inserted.</param>
    /// <returns>Inserted canvas.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsCanvas> InsertCanvas(int32_t index, System::SharedPtr<XpsCanvas> canvas);
    /// <summary>
    /// Adds a new path to this canvas's child list.
    /// </summary>
    /// <param name="data">The geometry of the path.</param>
    /// <returns>Added path.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPath> AddPath(System::SharedPtr<XpsPathGeometry> data);
    /// <summary>
    /// Adds a path to this canvas's child list.
    /// </summary>
    /// <param name="path">A path to be added.</param>
    /// <returns>Added path.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPath> AddPath(System::SharedPtr<XpsPath> path);
    /// <summary>
    /// Inserts a new path to this canvas's child list at <paramref name="index"/> position.
    /// </summary>
    /// <param name="index">Position at which a new path should be inserted.</param>
    /// <param name="data">The geometry of the path.</param>
    /// <returns>Inserted path.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPath> InsertPath(int32_t index, System::SharedPtr<XpsPathGeometry> data);
    /// <summary>
    /// Inserts a path to this canvas's child list at <paramref name="index"/> position.
    /// </summary>
    /// <param name="index">Position at which a path should be inserted.</param>
    /// <param name="path">A path to be inserted.</param>
    /// <returns>Inserted path.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPath> InsertPath(int32_t index, System::SharedPtr<XpsPath> path);
    /// <summary>
    /// Adds new glyphs to this canvas's child list.
    /// </summary>
    /// <param name="fontFamily">Font family.</param>
    /// <param name="fontSize">Font size.</param>
    /// <param name="fontStyle">Font style.</param>
    /// <param name="originX">Glyphs origin X coordinate.</param>
    /// <param name="originY">Glyphs origin T coordinate.</param>
    /// <param name="unicodeString">String to be printed.</param>
    /// <returns>Added glyphs.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsGlyphs> AddGlyphs(System::String fontFamily, float fontSize, System::Drawing::FontStyle fontStyle, float originX, float originY, System::String unicodeString);
    /// <summary>
    /// Adds glyphs to this canvas's child list.
    /// </summary>
    /// <param name="glyphs">Glyphs to be added.</param>
    /// <returns>Added glyphs.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsGlyphs> AddGlyphs(System::SharedPtr<XpsGlyphs> glyphs);
    /// <summary>
    /// Inserts new glyphs to this canvas's child list at <paramref name="index"/> position.
    /// </summary>
    /// <param name="index">Position at which new glyphs should be inserted.</param>
    /// <param name="fontFamily">Font family.</param>
    /// <param name="fontSize">Font size.</param>
    /// <param name="fontStyle">Font style.</param>
    /// <param name="originX">Glyphs origin X coordinate.</param>
    /// <param name="originY">Glyphs origin T coordinate.</param>
    /// <param name="unicodeString">String to be printed.</param>
    /// <returns>Added glyphs.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsGlyphs> InsertGlyphs(int32_t index, System::String fontFamily, float fontSize, System::Drawing::FontStyle fontStyle, float originX, float originY, System::String unicodeString);
    /// <summary>
    /// Inserts glyphs to this canvas's child list.
    /// </summary>
    /// <param name="index">Position at which glyphs should be inserted.</param>
    /// <param name="glyphs">Glyphs to be added.</param>
    /// <returns>Inserted glyphs.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsGlyphs> InsertGlyphs(int32_t index, System::SharedPtr<XpsGlyphs> glyphs);
    /// <summary>
    /// Clones this canvas.
    /// </summary>
    /// <returns>Clone of this canvas.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsCanvas> Clone();
    
protected:

    XpsCanvas(System::SharedPtr<XpsContext> context);
    XpsCanvas(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsElement> parent);
    
    virtual ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element);
    virtual ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API void AcceptProperties(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API void ForcePropertyValueReferencesUpdate(System::SharedPtr<XpsElement> parent, bool add = true);
    virtual ASPOSE_PAGE_SHARED_API void ForceRegisterForPreprocessing(bool add = true);
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index = -1);
    virtual ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsElement> element);
    virtual ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsElement> element);
    virtual ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsElement> element);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    float _opacity;
    System::SharedPtr<XpsProperty<System::SharedPtr<XpsBrush>>> _opacityMask;
    XpsEdgeMode _edgeMode;
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


