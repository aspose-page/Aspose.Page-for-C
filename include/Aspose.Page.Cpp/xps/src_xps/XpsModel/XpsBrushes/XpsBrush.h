#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsObject.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace XpsModel
{
class XpsContext;
class XpsGradientBrush;
class XpsImageBrush;
class XpsLinearGradientBrush;
class XpsPropertyValueManager;
class XpsRadialGradientBrush;
class XpsResourceDictionary;
class XpsSolidColorBrush;
class XpsTilingBrush;
class XpsTransformableBrush;
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
class XmlNode;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {

/// <summary>
/// Class incapsulating common features of all brush elements.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsBrush : public Aspose::Page::XPS::XpsModel::XpsObject
{
    typedef XpsBrush ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsModel::XpsGradientBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsTransformableBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsImageBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsTilingBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsLinearGradientBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsRadialGradientBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsSolidColorBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsVisualBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::XPS::XpsModel::XpsResourceDictionary;
    
public:

    /// <summary>
    /// Returns/sets value defining the uniform transparency of the brush fill.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Opacity() const;
    /// <summary>
    /// Returns/sets value defining the uniform transparency of the brush fill.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Opacity(float value);
    
protected:

    XpsBrush(System::SharedPtr<XpsContext> context);
    
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    virtual ASPOSE_PAGE_SHARED_API void Validate();
    ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsObject> obj) override;
    static System::SharedPtr<XpsBrush> Create(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<XpsContext> context);
    static System::SharedPtr<XpsBrush> Create(System::SharedPtr<System::Xml::XmlElement> node, System::SharedPtr<XpsContext> context);
    
private:

    float _opacity;
    
    void ValidateOpacity(float value);
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


