#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsObject.h"
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
class XpsArcSegment;
template <typename> class XpsArray;
class XpsContext;
class XpsPathPolySegment;
} // namespace XpsModel
class XpsUtils;
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Drawing
{
class PointF;
} // namespace Drawing
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
/// Class incapsulating common features of all path segment elements.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsPathSegment : public Aspose::Page::XPS::XpsModel::XpsObject
{
    typedef XpsPathSegment ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::Xps::XpsPageWriter;
    friend class Aspose::Page::XPS::XpsModel::XpsArcSegment;
    friend class Aspose::Page::XPS::XpsModel::XpsPathPolySegment;
    friend class Aspose::Page::XPS::XpsUtils;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    
public:

    /// <summary>
    /// Returns/sets the value specifying whether the stroke for this segment of the path is drawn.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsStroked() const;
    /// <summary>
    /// Returns/sets the value specifying whether the stroke for this segment of the path is drawn.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_IsStroked(bool value);
    
protected:

    bool get_IsRelative() const;
    void set_IsRelative(bool value);
    
    XpsPathSegment(System::SharedPtr<XpsContext> context, bool isStroked = true);
    
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    virtual System::String Abbreviate(System::String abbrChar, System::Drawing::PointF& endPoint) = 0;
    ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsObject> obj) override;
    
private:

    bool _isStroked;
    bool _isRelative;
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


