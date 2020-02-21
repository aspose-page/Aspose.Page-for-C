#pragma once

#include <xml/xml_node.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsInterfaces.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsElement.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { class XpsPresenter; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPropertyValueManager; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsResourceDictionary; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { template<typename> class XpsProperty; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { enum class XpsFillRule; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPathFigure; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { template<typename> class XpsList; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsMatrix; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocumentVisitor; } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPathSegment; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating PathGeometry property element features.
/// This element contains a set of path figures specified either with the Figures attribute or
/// with a child PathFigure element.
/// </summary>
class XpsPathGeometry FINAL : public Aspose::Page::Xps::XpsModel::XpsElement, public Aspose::Page::Xps::XpsModel::ITransformableProperty
{
    typedef XpsPathGeometry ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsElement BaseType;
    typedef Aspose::Page::Xps::XpsModel::ITransformableProperty BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::XpsPresenter;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    friend class Aspose::Page::Xps::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::Xps::XpsModel::XpsResourceDictionary;
    template<typename FT0> friend class Aspose::Page::Xps::XpsModel::XpsProperty;
    
public:

    /// <summary>
    /// Returns/sets the value specifying how the intersecting areas of geometric
    /// shapes are combined to form a region.
    /// </summary>
    ASPOSE_PAGE_SHARED_API XpsFillRule get_FillRule();
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
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsMatrix> get_Transform();
    /// <summary>
    /// Returns/sets the affine transformation matrix establishing the local matrix transformation
    /// that is applied to all child and descendant elements of the path geometry before it is used
    /// for filling, clipping, or stroking.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Transform(System::SharedPtr<XpsMatrix> value);
    /// <summary>
    /// Returns list of child path figures.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsList<System::SharedPtr<XpsPathFigure>>> get_PathFigures();
    
    /// <summary>
    /// Adds a path figure to the list of child figures.
    /// </summary>
    /// <param name="pathFigure">The path figure to be added.</param>
    /// <returns>Added path figure.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathFigure> Add(System::SharedPtr<XpsPathFigure> pathFigure);
    /// <summary>
    /// Inserts a path figure to the list of child figures at <paramref name="index"/> position.
    /// </summary>
    /// <param name="index">Position at which a path figure should be inserted.</param>
    /// <param name="pathFigure">The path figure to be inserted.</param>
    /// <returns>Inserted path figure.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathFigure> Insert(int32_t index, System::SharedPtr<XpsPathFigure> pathFigure);
    /// <summary>
    /// Removes a path figure from the list of child figures.
    /// </summary>
    /// <param name="pathFigure">The path figure to be removed.</param>
    /// <returns>Removed path figure.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathFigure> Remove(System::SharedPtr<XpsPathFigure> pathFigure);
    /// <summary>
    /// Removes a path figure from the list of child figures at <paramref name="index"/> position.
    /// </summary>
    /// <param name="index">Position at which a path figure should be removed.</param>
    /// <returns>Inserted path figure.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathFigure> RemoveAt(int32_t index);
    /// <summary>
    /// Adds a path segment to the list of child segments of the last pah figure.
    /// </summary>
    /// <param name="segment">The path segment to be added.</param>
    /// <returns>Added path segment.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathSegment> AddSegment(System::SharedPtr<XpsPathSegment> segment);
    /// <summary>
    /// Inserts a path segment to the list of child segments of
    /// the last path figure at <paramref name="index"/> position.
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
    /// the last path figure at <paramref name="index"/> position.
    /// </summary>
    /// <param name="index">Position at which a path segment should be removed.</param>
    /// <returns>Removed path segment.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathSegment> RemoveSegmentAt(int32_t index);
    
    /// <summary>
    /// Provides access to element's path figure list by index <paramref name="i"/>.
    /// </summary>
    /// <param name="i">Index of child path figure.</param>
    /// <returns>Child <see cref="XpsPathFigure"/> element at <paramref name="i"/> position.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathFigure> idx_get(int32_t i);
    
    /// <summary>
    /// Clones this path geometry.
    /// </summary>
    /// <returns>Clone of this path geometry.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathGeometry> Clone();
    
protected:

    XpsPathGeometry(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsList<System::SharedPtr<XpsPathFigure>>> pathFigures);
    XpsPathGeometry(System::SharedPtr<XpsContext> context);
    XpsPathGeometry(System::SharedPtr<XpsContext> context, System::String abbreviatedGeometry);
    /// <summary>
    /// Instatiates PathGeometry element from Data attribute or child element
    /// </summary>
    /// <param name="node">Attribute node or child element node</param>
    /// <param name="context">Context</param>
    XpsPathGeometry(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<XpsContext> context);
    XpsPathGeometry(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context);
    
    virtual ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element);
    virtual ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API void AcceptProperties(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index);
    virtual ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsElement> element);
    virtual ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsElement> element);
    virtual ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsElement> element);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<XpsList<System::SharedPtr<XpsPathFigure>>> _pathFigures;
    XpsFillRule _fillRule;
    
    XpsFillRule GetPathFigures(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsList<System::SharedPtr<XpsPathFigure>>> figures);
    XpsFillRule GetPathFigures(System::SharedPtr<System::Xml::XmlNode> node, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsList<System::SharedPtr<XpsPathFigure>>> figures);
    System::SharedPtr<XpsPathFigure> GetLastPathFigure();
    void BindFigures();
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


