#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsContentElement.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Tests
{
class XpsPathTests;
} // namespace Tests
class XpsDocumentVisitor;
namespace XpsModel
{
template <typename> class XpsArray;
class XpsBrush;
class XpsContentElement;
class XpsContext;
enum class XpsDashCap;
class XpsElement;
enum class XpsLineCap;
enum class XpsLineJoin;
class XpsObject;
class XpsPathGeometry;
template <typename> class XpsProperty;
class XpsTreeLoader;
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
/// Class incapsulating Path element features.
/// This element is the sole means of adding vector graphics and images to a fixed page.
/// It defines a single vector graphic to be rendered on a page.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsPath final : public Aspose::Page::XPS::XpsModel::XpsContentElement
{
    typedef XpsPath ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsContentElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsModel::XpsTreeLoader;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    friend class Aspose::Page::XPS::Tests::XpsPathTests;
    
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
    ASPOSE_PAGE_SHARED_API System::ArrayPtr<float> get_StrokeDashArray() const;
    /// <summary>
    /// Returns/sets the array specifying the length of dashes and gaps of the outline stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StrokeDashArray(System::ArrayPtr<float> value);
    /// <summary>
    /// Returns/sets the value specifying how the ends of each dash are drawn.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsDashCap get_StrokeDashCap() const;
    /// <summary>
    /// Returns/sets the value specifying how the ends of each dash are drawn.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StrokeDashCap(XpsDashCap value);
    /// <summary>
    /// Returns/sets the start point for repeating the dash array pattern.
    /// If this value is omitted, the dash array aligns with the origin of the stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_StrokeDashOffset() const;
    /// <summary>
    /// Returns/sets the start point for repeating the dash array pattern.
    /// If this value is omitted, the dash array aligns with the origin of the stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StrokeDashOffset(float value);
    /// <summary>
    /// Returns/sets the value defining the shape of the beginning of the first dash in a stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsLineCap get_StrokeStartLineCap() const;
    /// <summary>
    /// Returns/sets the value defining the shape of the beginning of the first dash in a stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StrokeStartLineCap(XpsLineCap value);
    /// <summary>
    /// Returns/sets the value defining the shape of the end of the last dash in a stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsLineCap get_StrokeEndLineCap() const;
    /// <summary>
    /// Returns/sets the value defining the shape of the end of the last dash in a stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StrokeEndLineCap(XpsLineCap value);
    /// <summary>
    /// Returns/sets the value defining the shape of the beginning of the first dash in a stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsLineJoin get_StrokeLineJoin() const;
    /// <summary>
    /// Returns/sets the value defining the shape of the beginning of the first dash in a stroke.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StrokeLineJoin(XpsLineJoin value);
    /// <summary>
    /// Returns/sets the ratio between the maximum miter length and half of the stroke thickness.
    /// This value is significant only if the <c>StrokeLineJoin</c> attribute specifies <c>Miter</c>.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_StrokeMiterLimit() const;
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
    ASPOSE_PAGE_SHARED_API float get_StrokeThickness() const;
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
    /// Clones this path.
    /// </summary>
    /// <returns>Clone this path.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPath> Clone();
    
protected:

    XpsPath(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsPathGeometry> data);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsPath, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsPathGeometry> data));
    
    XpsPath(System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsPath, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context));
    
    XpsPath(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsElement> parent);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsPath, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsElement> parent));
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API void AcceptProperties(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API void ForcePropertyValueReferencesUpdate(System::SharedPtr<XpsElement> parent, bool add = true) override;
    ASPOSE_PAGE_SHARED_API void ForceRegisterForPreprocessing(bool add = true) override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index) override;
    ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsPath();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::SharedPtr<XpsProperty<System::SharedPtr<XpsPathGeometry>>> _data;
    System::SharedPtr<XpsProperty<System::SharedPtr<XpsBrush>>> _fill;
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
} // namespace XPS
} // namespace Page
} // namespace Aspose


