#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsTilingBrush.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
class XpsDocumentVisitor;
namespace XpsModel
{
template <typename> class XpsArray;
class XpsBrush;
class XpsContentElement;
class XpsContext;
class XpsElement;
class XpsEvent;
class XpsObject;
template <typename> class XpsProperty;
class XpsPropertyValueManager;
class XpsVisual;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Drawing
{
class RectangleF;
} // namespace Drawing
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
/// Class incapsulating VisualBrush property element features.
/// This element is used to fill a region with a drawing.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsVisualBrush final : public Aspose::Page::XPS::XpsModel::XpsTilingBrush
{
    typedef XpsVisualBrush ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsTilingBrush BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsModel::XpsBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    
public:

    /// <summary>
    /// Returns/sets a Path, Glyphs, or Canvas element used to draw the brush’s source content. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsContentElement> get_Visual();
    
    /// <summary>
    /// Sets <paramref name="visual"></paramref> as Visual element of visual brush.
    /// </summary>
    /// <param name="visual">The element.</param>
    ASPOSE_PAGE_SHARED_API void SetVisual(System::SharedPtr<XpsContentElement> visual);
    /// <summary>
    /// Clones this visual brush.
    /// </summary>
    /// <returns>Clone of this visual brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsVisualBrush> Clone();
    
protected:

    XpsVisualBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsContentElement> visualElement, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsVisualBrush, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsContentElement> visualElement, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport));
    
    XpsVisualBrush(System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsVisualBrush, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context));
    
    XpsVisualBrush(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsVisualBrush, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context));
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API void AcceptProperties(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API void Validate() override;
    ASPOSE_PAGE_SHARED_API void NotifyDescendants(bool isAdd = true) override;
    ASPOSE_PAGE_SHARED_API void NotifyRoot(System::SharedPtr<XpsEvent> evt) override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsObject> Clone(bool deep, System::SharedPtr<XpsContext> context) override;
    ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsVisualBrush();
    
private:

    System::SharedPtr<XpsProperty<System::SharedPtr<XpsVisual>>> _visual;
    
    System::SharedPtr<XpsVisual> get_VisualInternal();
    void set_VisualInternal(System::SharedPtr<XpsVisual> value);
    /// <summary>
    /// Returns/sets a Path, Glyphs, or Canvas element used to draw the brush’s source content. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Visual(System::SharedPtr<XpsContentElement> value);
    
    void ValidateVisual(System::SharedPtr<XpsContentElement> value);
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


