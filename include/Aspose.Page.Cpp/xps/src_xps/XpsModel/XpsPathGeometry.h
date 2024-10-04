#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathFigure.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsInterfaces.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsArray.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
class DocumentUtils;
namespace Presentation
{
namespace Aps
{
class ApsConverter;
} // namespace Aps
class XpsPresenter;
} // namespace Presentation
class XpsDocumentVisitor;
namespace XpsModel
{
class XpsContext;
class XpsElement;
enum class XpsFillRule;
class XpsMatrix;
class XpsObject;
class XpsPathSegment;
template <typename> class XpsProperty;
class XpsPropertyValueManager;
class XpsResourceDictionary;
} // namespace XpsModel
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
class String;
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
/// Class incapsulating PathGeometry property element features.
/// This element contains a set of path figures specified either with the Figures attribute or
/// with a child PathFigure element.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsPathGeometry final : public Aspose::Page::XPS::XpsModel::XpsArray<System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPathFigure>>, public Aspose::Page::XPS::XpsModel::ITransformableProperty
{
    typedef XpsPathGeometry ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsArray<System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPathFigure>> BaseType;
    typedef Aspose::Page::XPS::XpsModel::ITransformableProperty BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::XpsPresenter;
    friend class Aspose::Page::XPS::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::XPS::DocumentUtils;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::XPS::XpsModel::XpsResourceDictionary;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    
public:

    /// <summary>
    /// Returns/sets the value specifying how the intersecting areas of geometric
    /// shapes are combined to form a region.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsFillRule get_FillRule() const;
    /// <summary>
    /// Returns/sets the value specifying how the intersecting areas of geometric
    /// shapes are combined to form a region.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_FillRule(XpsFillRule value);
    /// <summary>
    /// Returns/sets the affine transformation matrix establishing the local matrix transformation
    /// that is applied to all child and descendant elements of the path geometry before it is used
    /// for filling, clipping, or stroking.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsMatrix> get_Transform() override;
    /// <summary>
    /// Returns/sets the affine transformation matrix establishing the local matrix transformation
    /// that is applied to all child and descendant elements of the path geometry before it is used
    /// for filling, clipping, or stroking.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Transform(System::SharedPtr<XpsMatrix> value) override;
    /// <summary>
    /// Returns list of child path figures.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsPathFigure>>> get_PathFigures();
    
    /// <summary>
    /// Adds a path segment to the list of child segments of the last pah figure.
    /// </summary>
    /// <param name="segment">The path segment to be added.</param>
    /// <returns>Added path segment.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathSegment> AddSegment(System::SharedPtr<XpsPathSegment> segment);
    /// <summary>
    /// Inserts a path segment to the list of child segments of
    /// the last path figure at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which a segment should be inserted.</param>
    /// <param name="segment">A path segment to be inserted.</param>
    /// <returns>Inserted path segment.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathSegment> InsertSegment(int32_t index, System::SharedPtr<XpsPathSegment> segment);
    /// <summary>
    /// Removes a path segment from the list of child segments of the last path figure.
    /// </summary>
    /// <param name="segment">The path segment to be removed.</param>
    /// <returns>Removed path segment.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathSegment> RemoveSegment(System::SharedPtr<XpsPathSegment> segment);
    /// <summary>
    /// Removes a path segment from the list of child segments of
    /// the last path figure at <paramref name="index"></paramref> position.
    /// </summary>
    /// <param name="index">Position at which a path segment should be removed.</param>
    /// <returns>Removed path segment.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathSegment> RemoveSegmentAt(int32_t index);
    /// <summary>
    /// Clones this path geometry.
    /// </summary>
    /// <returns>Clone of this path geometry.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathGeometry> Clone();
    ASPOSE_PAGE_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    XpsPathGeometry(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsPathFigure>>> pathFigures);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsPathGeometry, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsPathFigure>>> pathFigures));
    
    XpsPathGeometry(System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsPathGeometry, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context));
    
    XpsPathGeometry(System::SharedPtr<XpsContext> context, System::String abbreviatedGeometry);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsPathGeometry, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::String abbreviatedGeometry));
    
    /// <summary>
    /// Instatiates PathGeometry element from Data attribute or child element
    /// </summary>
    /// <param name="node">Attribute node or child element node</param>
    /// <param name="context">Context</param>
    XpsPathGeometry(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsPathGeometry, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<XpsContext> context));
    
    XpsPathGeometry(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsPathGeometry, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context));
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API void Load() override;
    ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API void AcceptProperties(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsObject> Clone(bool deep, System::SharedPtr<XpsContext> context) override;
    ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsPathGeometry();
    
private:

    XpsFillRule _fillRule;
    System::SharedPtr<XpsProperty<System::SharedPtr<XpsMatrix>>> _transform;
    
    XpsFillRule GetPathFigures(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsPathFigure>>> figures);
    XpsFillRule GetPathFigures(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsPathFigure>>> figures);
    System::SharedPtr<XpsPathFigure> GetLastPathFigure();
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


