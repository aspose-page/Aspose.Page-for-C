#pragma once

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsElement.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsPageWriter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPropertyValueManager; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsTreeLoader; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPathGeometry; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { template<typename> class XpsProperty; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsUtils; } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPathSegment; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { template<typename> class XpsList; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocumentVisitor; } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating PathFigure element features.
/// This element is composed of a set of one or more line or curve segments.
/// </summary>
class XpsPathFigure : public Aspose::Page::Xps::XpsModel::XpsElement
{
    typedef XpsPathFigure ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsPageWriter;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    friend class Aspose::Page::Xps::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::Xps::XpsModel::XpsTreeLoader;
    friend class Aspose::Page::Xps::XpsModel::XpsPathGeometry;
    template<typename FT0> friend class Aspose::Page::Xps::XpsModel::XpsProperty;
    friend class Aspose::Page::Xps::XpsUtils;
    
public:

    /// <summary>
    /// Return list of child path segments.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsList<System::SharedPtr<XpsPathSegment>>> get_Segments();
    /// <summary>
    /// Returns/sets the value indicating whether the path figure is closed.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsClosed();
    /// <summary>
    /// Returns/sets the value indicating whether the path figure is closed.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_IsClosed(bool value);
    /// <summary>
    /// Returns/sets the starting point for the first segment of the path figure.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::PointF get_StartPoint();
    /// <summary>
    /// Returns/sets the starting point for the first segment of the path figure.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_StartPoint(System::Drawing::PointF value);
    /// <summary>
    /// Returns/sets value indicating whether the path figure is used in computing
    /// the area of the containing path geometry.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsFilled();
    /// <summary>
    /// Returns/sets value indicating whether the path figure is used in computing
    /// the area of the containing path geometry.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_IsFilled(bool value);
    
    /// <summary>
    /// Adds a path segment to the list of child segments.
    /// </summary>
    /// <param name="segment">A path segment to be added.</param>
    /// <returns>Added path segment.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathSegment> Add(System::SharedPtr<XpsPathSegment> segment);
    /// <summary>
    /// Inserts a path segment to the list of child segments at <paramref name="index"/> position.
    /// </summary>
    /// <param name="index">Position at which a segment should be added.</param>
    /// <param name="segment">The path segment to be inserted.</param>
    /// <returns>Inserted path segment.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathSegment> Insert(int32_t index, System::SharedPtr<XpsPathSegment> segment);
    /// <summary>
    /// Removes a path segment from the list of child segments.
    /// </summary>
    /// <param name="segment">A path segment to be removed.</param>
    /// <returns>Removed path segment.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathSegment> Remove(System::SharedPtr<XpsPathSegment> segment);
    /// <summary>
    /// Removes a path segment from the list of child segments at <paramref name="index"/> position.
    /// </summary>
    /// <param name="index">Position at which a path segment should be removed.</param>
    /// <returns>Removed path segment.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathSegment> RemoveAt(int32_t index);
    
    /// <summary>
    /// Provides access to path figures's list of child path segments by index <paramref name="i"/>.
    /// </summary>
    /// <param name="i">Index of child path segment.</param>
    /// <returns>Child path segment at <paramref name="i"/> position.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathSegment> idx_get(int32_t i);
    
    /// <summary>
    /// Clones this path figure.
    /// </summary>
    /// <returns>Clone of this path figure.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPathFigure> Clone();
    
protected:

    bool get_IsRelative();
    void set_IsRelative(bool value);
    
    XpsPathFigure(System::SharedPtr<XpsContext> context, System::Drawing::PointF startPoint, System::SharedPtr<XpsList<System::SharedPtr<XpsPathSegment>>> segments, bool isClosed = false);
    XpsPathFigure(System::SharedPtr<XpsContext> context, System::Drawing::PointF startPoint, bool isClosed = false);
    XpsPathFigure(System::SharedPtr<XpsContext> context);
    XpsPathFigure(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsElement> parent);
    
    virtual ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element);
    virtual ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor);
    bool TryAbbreviate(System::String& figureString, System::Drawing::PointF& endPoint);
    void BindSegments();
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<XpsList<System::SharedPtr<XpsPathSegment>>> _segments;
    bool _isClosed;
    System::Drawing::PointF _startPoint;
    bool _isFilled;
    bool _isRelative;
    
    System::String GetAbbreviationChar(System::SharedPtr<XpsPathSegment> segment, System::String lastChar, System::Drawing::PointF endPoint);
    void CopySimplePropertyValues(System::SharedPtr<XpsPathFigure> figure);
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


