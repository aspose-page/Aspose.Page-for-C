#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/default.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsHyperlinkElement.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsElement.h"
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
class XpsDocumentVisitor;
namespace XpsModel
{
template <typename> class XpsArray;
class XpsBrush;
class XpsCanvas;
class XpsContext;
class XpsElement;
enum class XpsElementType;
class XpsGlyphs;
class XpsHyperlinkElement;
class XpsMatrix;
class XpsObject;
class XpsPath;
class XpsPathGeometry;
template <typename> class XpsProperty;
class XpsPropertyValueManager;
class XpsVisual;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
class String;
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
/// Incapsulates features of XPS content elements: Canvas, Path and Glyphs.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsContentElement : public Aspose::Page::XPS::XpsModel::XpsHyperlinkElement
{
    typedef XpsContentElement ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsHyperlinkElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::Xps::XpsPageWriter;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsModel::XpsVisual;
    friend class Aspose::Page::XPS::XpsModel::XpsCanvas;
    friend class Aspose::Page::XPS::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    friend class Aspose::Page::XPS::XpsModel::XpsGlyphs;
    friend class Aspose::Page::XPS::XpsModel::XpsPath;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    
public:

    /// <summary>
    /// Returns/sets the affine transformation matrix establishing a new coordinate frame
    /// for all attributes of the element and for all child elements (if any).
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsMatrix> get_RenderTransform();
    /// <summary>
    /// Returns/sets the affine transformation matrix establishing a new coordinate frame
    /// for all attributes of the element and for all child elements (if any).
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_RenderTransform(System::SharedPtr<XpsMatrix> value);
    /// <summary>
    /// Returns/sets the path geometry instance limiting the rendered region of the element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathGeometry> get_Clip();
    /// <summary>
    /// Returns/sets the path geometry instance limiting the rendered region of the element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Clip(System::SharedPtr<XpsPathGeometry> value);
    /// <summary>
    /// Returns/sets the value defining the uniform transparency of the element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Opacity() const;
    /// <summary>
    /// Returns/sets the value defining the uniform transparency of the element.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Opacity(float value);
    /// <summary>
    /// Returns/sets the brush specifying a mask of alpha values
    /// that is applied to the element in the same fashion as the Opacity attribute,
    /// but allowing different alpha values for different areas of the element. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsBrush> get_OpacityMask();
    /// <summary>
    /// Returns/sets the brush specifying a mask of alpha values
    /// that is applied to the element in the same fashion as the Opacity attribute,
    /// but allowing different alpha values for different areas of the element. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_OpacityMask(System::SharedPtr<XpsBrush> value);
    
protected:

    System::String get_RawClip();
    
    XpsContentElement(System::SharedPtr<XpsContext> context, int32_t elementId = -1, XpsElementType elementType = System::Default<XpsElementType>());
    
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API void AcceptProperties(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API void NotifyDescendants(bool isAdd = true) override;
    ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsContentElement();
    
private:

    System::SharedPtr<XpsProperty<System::SharedPtr<XpsMatrix>>> _renderTransform;
    System::SharedPtr<XpsProperty<System::SharedPtr<XpsPathGeometry>>> _clip;
    System::SharedPtr<XpsProperty<System::SharedPtr<XpsBrush>>> _opacityMask;
    float _opacity;
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


