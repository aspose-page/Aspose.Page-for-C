#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsInterfaces.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsBrush.h"
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
class XpsContext;
class XpsGradientBrush;
class XpsImageBrush;
class XpsMatrix;
class XpsObject;
template <typename> class XpsProperty;
class XpsTilingBrush;
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
/// Class incapsulating common features of transformable brushes elements (all except SolidColorBrush).
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsTransformableBrush : public Aspose::Page::XPS::XpsModel::XpsBrush, public Aspose::Page::XPS::XpsModel::ITransformableProperty
{
    typedef XpsTransformableBrush ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsBrush BaseType;
    typedef Aspose::Page::XPS::XpsModel::ITransformableProperty BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsModel::XpsGradientBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsImageBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsTilingBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsVisualBrush;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    
public:

    /// <summary>
    /// Returns/sets the matrix transformation applied to the coordinate space of the brush.
    /// The Transform property is concatenated with the current effective render transform
    /// to yield an effective render transform local to the brush. The viewport for the brush
    /// is transformed using the local effective render transform. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsMatrix> get_Transform() override;
    /// <summary>
    /// Returns/sets the matrix transformation applied to the coordinate space of the brush.
    /// The Transform property is concatenated with the current effective render transform
    /// to yield an effective render transform local to the brush. The viewport for the brush
    /// is transformed using the local effective render transform. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Transform(System::SharedPtr<XpsMatrix> value) override;
    
protected:

    System::SharedPtr<XpsProperty<System::SharedPtr<XpsMatrix>>> _transform;
    
    XpsTransformableBrush(System::SharedPtr<XpsContext> context);
    
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API void AcceptProperties(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsTransformableBrush();
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


