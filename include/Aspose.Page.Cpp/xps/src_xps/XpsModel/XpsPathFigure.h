#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <drawing/point_f.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathSegments/XpsPathSegment.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsArray.h"
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
class XpsContext;
class XpsElement;
class XpsObject;
class XpsPathGeometry;
template <typename> class XpsProperty;
class XpsPropertyValueManager;
} // namespace XpsModel
class XpsUtils;
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
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
/// Class incapsulating PathFigure element features.
/// This element is composed of a set of one or more line or curve segments.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsPathFigure : public Aspose::Page::XPS::XpsModel::XpsArray<System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPathSegment>>
{
    typedef XpsPathFigure ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsArray<System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPathSegment>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::Xps::XpsPageWriter;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    friend class Aspose::Page::XPS::XpsModel::XpsPathGeometry;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    friend class Aspose::Page::XPS::XpsUtils;
    
public:

    /// <summary>
    /// Return list of child path segments.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsPathSegment>>> get_Segments();
    /// <summary>
    /// Returns/sets the value indicating whether the path figure is closed.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsClosed() const;
    /// <summary>
    /// Returns/sets the value indicating whether the path figure is closed.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_IsClosed(bool value);
    /// <summary>
    /// Returns/sets the starting point for the first segment of the path figure.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::PointF get_StartPoint() const;
    /// <summary>
    /// Returns/sets the starting point for the first segment of the path figure.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StartPoint(System::Drawing::PointF value);
    /// <summary>
    /// Returns/sets value indicating whether the path figure is used in computing
    /// the area of the containing path geometry.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsFilled() const;
    /// <summary>
    /// Returns/sets value indicating whether the path figure is used in computing
    /// the area of the containing path geometry.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_IsFilled(bool value);
    
    /// <summary>
    /// Clones this path figure.
    /// </summary>
    /// <returns>Clone of this path figure.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathFigure> Clone();
    ASPOSE_PAGE_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    bool get_IsRelative() const;
    void set_IsRelative(bool value);
    
    XpsPathFigure(System::SharedPtr<XpsContext> context, System::Drawing::PointF startPoint, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsPathSegment>>> segments, bool isClosed = false);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsPathFigure, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::Drawing::PointF startPoint, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsPathSegment>>> segments, bool isClosed = false));
    
    XpsPathFigure(System::SharedPtr<XpsContext> context, System::Drawing::PointF startPoint, bool isClosed = false);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsPathFigure, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::Drawing::PointF startPoint, bool isClosed = false));
    
    XpsPathFigure(System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsPathFigure, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context));
    
    XpsPathFigure(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsPathGeometry> parent);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsPathFigure, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsPathGeometry> parent));
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsObject> Clone(bool deep, System::SharedPtr<XpsContext> context) override;
    ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsObject> obj) override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsPathFigure();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    bool _isClosed;
    System::Drawing::PointF _startPoint;
    bool _isFilled;
    bool _isRelative;
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


