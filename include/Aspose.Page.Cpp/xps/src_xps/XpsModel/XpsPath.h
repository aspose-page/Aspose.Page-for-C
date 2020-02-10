#pragma once

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsInterfaces.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsElement.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPropertyValueManager; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsTreeLoader; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { template<typename> class XpsProperty; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { enum class XpsDashCap; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { enum class XpsLineCap; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { enum class XpsLineJoin; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPathGeometry; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsMatrix; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsHyperlinkTarget; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocumentVisitor; } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating Path element features.
/// This element is the sole means of adding vector graphics and images to a fixed page.
/// It defines a single vector graphic to be rendered on a page.
/// </summary>
class XpsPath FINAL : public Aspose::Page::Xps::XpsModel::XpsElement, public Aspose::Page::Xps::XpsModel::ITransformableElement, public Aspose::Page::Xps::XpsModel::IClippable, public Aspose::Page::Xps::XpsModel::IXpsVisualElement
{
    typedef XpsPath ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsElement BaseType;
    typedef Aspose::Page::Xps::XpsModel::ITransformableElement BaseType1;
    typedef Aspose::Page::Xps::XpsModel::IClippable BaseType2;
    typedef Aspose::Page::Xps::XpsModel::IXpsVisualElement BaseType3;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2, BaseType3> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    friend class Aspose::Page::Xps::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::Xps::XpsModel::XpsTreeLoader;
    template<typename FT0> friend class Aspose::Page::Xps::XpsModel::XpsProperty;
    
public:

    /// <summary>
    /// Returns/sets the brush used to paint the geometry specified
    /// by the Data property of the path.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsBrush> get_Fill();
    /// <summary>
    /// Returns/sets the brush used to paint the geometry specified
    /// by the Data property of the path.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Fill(System::SharedPtr<XpsBrush> value);
    /// <summary>
    /// Returns/sets the geometry of the path.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathGeometry> get_Data();
    /// <summary>
    /// Returns/sets the geometry of the path.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Data(System::SharedPtr<XpsPathGeometry> value);
    /// <summary>
    /// Returns/sets the affine transformation matrix establishing a new coordinate frame
    /// for all attributes of the path and for all child elements of the path, such as
    /// the geometry defined by the Path.Data property element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsMatrix> get_RenderTransform();
    /// <summary>
    /// Returns/sets the affine transformation matrix establishing a new coordinate frame
    /// for all attributes of the path and for all child elements of the path, such as
    /// the geometry defined by the Path.Data property element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_RenderTransform(System::SharedPtr<XpsMatrix> value);
    /// <summary>
    /// Returns/sets the path geometry instance limitting the rendered region of the element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathGeometry> get_Clip();
    /// <summary>
    /// Returns/sets the path geometry instance limitting the rendered region of the element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Clip(System::SharedPtr<XpsPathGeometry> value);
    /// <summary>
    /// Returns/sets the value defining the uniform transparency of the path element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Opacity();
    /// <summary>
    /// Returns/sets the value defining the uniform transparency of the path element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Opacity(float value);
    /// <summary>
    /// Returns/sets the brush specifying a mask of alpha values
    /// that is applied to the path in the same fashion as the Opacity attribute,
    /// but allowing different alpha values for different areas of the element. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsBrush> get_OpacityMask();
    /// <summary>
    /// Returns/sets the brush specifying a mask of alpha values
    /// that is applied to the path in the same fashion as the Opacity attribute,
    /// but allowing different alpha values for different areas of the element. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_OpacityMask(System::SharedPtr<XpsBrush> value);
    /// <summary>
    /// Returns/sets the brush used to draw the stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsBrush> get_Stroke();
    /// <summary>
    /// Returns/sets the brush used to draw the stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Stroke(System::SharedPtr<XpsBrush> value);
    /// <summary>
    /// Returns/sets the array specifying the length of dashes and gaps of the outline stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::ArrayPtr<float> get_StrokeDashArray();
    /// <summary>
    /// Returns/sets the array specifying the length of dashes and gaps of the outline stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StrokeDashArray(System::ArrayPtr<float> value);
    /// <summary>
    /// Returns/sets the value specifying how the ends of each dash are drawn.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsDashCap get_StrokeDashCap();
    /// <summary>
    /// Returns/sets the value specifying how the ends of each dash are drawn.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StrokeDashCap(XpsDashCap value);
    /// <summary>
    /// Returns/sets the start point for repeating the dash array pattern.
    /// If this value is omitted, the dash array aligns with the origin of the stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_StrokeDashOffset();
    /// <summary>
    /// Returns/sets the start point for repeating the dash array pattern.
    /// If this value is omitted, the dash array aligns with the origin of the stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StrokeDashOffset(float value);
    /// <summary>
    /// Returns/sets the value defining the shape of the beginning of the first dash in a stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsLineCap get_StrokeStartLineCap();
    /// <summary>
    /// Returns/sets the value defining the shape of the beginning of the first dash in a stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StrokeStartLineCap(XpsLineCap value);
    /// <summary>
    /// Returns/sets the value defining the shape of the end of the last dash in a stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsLineCap get_StrokeEndLineCap();
    /// <summary>
    /// Returns/sets the value defining the shape of the end of the last dash in a stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StrokeEndLineCap(XpsLineCap value);
    /// <summary>
    /// Returns/sets the value defining the shape of the beginning of the first dash in a stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsLineJoin get_StrokeLineJoin();
    /// <summary>
    /// Returns/sets the value defining the shape of the beginning of the first dash in a stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StrokeLineJoin(XpsLineJoin value);
    /// <summary>
    /// Returns/sets the ratio between the maximum miter length and half of the stroke thickness.
    /// This value is significant only if the <c>StrokeLineJoin</c> attribute specifies <c>Miter</c>.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_StrokeMiterLimit();
    /// <summary>
    /// Returns/sets the ratio between the maximum miter length and half of the stroke thickness.
    /// This value is significant only if the <c>StrokeLineJoin</c> attribute specifies <c>Miter</c>.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StrokeMiterLimit(float value);
    /// <summary>
    /// Returns/sets the thickness of a stroke, in units of
    /// the effective coordinate space (includes the path's render transform).
    /// The stroke is drawn on top of the boundary of the geometry specified
    /// by the Path element’s Data property. Half of the StrokeThickness extends
    /// outside of the geometry specified by the Data property and the other half
    /// extends inside of the geometry.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_StrokeThickness();
    /// <summary>
    /// Returns/sets the thickness of a stroke, in units of
    /// the effective coordinate space (includes the path's render transform).
    /// The stroke is drawn on top of the boundary of the geometry specified
    /// by the Path element’s Data property. Half of the StrokeThickness extends
    /// outside of the geometry specified by the Data property and the other half
    /// extends inside of the geometry.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StrokeThickness(float value);
    /// <summary>
    /// Returns/sets hyperlink target object.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsHyperlinkTarget> get_HyperlinkTarget();
    /// <summary>
    /// Returns/sets hyperlink target object.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_HyperlinkTarget(System::SharedPtr<XpsHyperlinkTarget> value);
    
    /// <summary>
    /// Clones this path.
    /// </summary>
    /// <returns>Clone this path.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPath> Clone();
    
protected:

    XpsPath(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsPathGeometry> data);
    XpsPath(System::SharedPtr<XpsContext> context);
    XpsPath(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsElement> parent);
    
    virtual ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element);
    virtual ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API void AcceptProperties(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API void ForcePropertyValueReferencesUpdate(System::SharedPtr<XpsElement> parent, bool add = true);
    virtual ASPOSE_PAGE_SHARED_API void ForceRegisterForPreprocessing(bool add = true);
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index);
    virtual ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsElement> element);
    virtual ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsElement> element);
    virtual ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsElement> element);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<XpsProperty<System::SharedPtr<XpsPathGeometry>>> _data;
    System::SharedPtr<XpsProperty<System::SharedPtr<XpsBrush>>> _fill;
    float _opacity;
    System::SharedPtr<XpsProperty<System::SharedPtr<XpsBrush>>> _opacityMask;
    System::SharedPtr<XpsProperty<System::SharedPtr<XpsBrush>>> _stroke;
    System::ArrayPtr<float> _strokeDashArray;
    XpsDashCap _strokeDashCap;
    float _strokeDashOffset;
    XpsLineCap _strokeEndLineCap;
    XpsLineCap _strokeStartLineCap;
    XpsLineJoin _strokeLineJoin;
    float _strokeMiterLimit;
    float _strokeThickness;
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


