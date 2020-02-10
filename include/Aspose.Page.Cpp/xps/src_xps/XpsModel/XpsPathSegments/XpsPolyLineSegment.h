#pragma once

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathSegments/XpsPathPolySegment.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElement; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsTreeLoader; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsUtils; } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocumentVisitor; } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating PolyLineSegment element features.
/// This element describes a polygonal drawing containing an arbitrary number of individual vertices.
/// </summary>
class XpsPolyLineSegment : public Aspose::Page::Xps::XpsModel::XpsPathPolySegment
{
    typedef XpsPolyLineSegment ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsPathPolySegment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    friend class Aspose::Page::Xps::XpsModel::XpsTreeLoader;
    friend class Aspose::Page::Xps::XpsUtils;
    
public:

    /// <summary>
    /// Clones this polygon.
    /// </summary>
    /// <returns>Clone of this polygon.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPolyLineSegment> Clone();
    
protected:

    virtual ASPOSE_PAGE_SHARED_API int32_t get_NumberOfPoints();
    
    XpsPolyLineSegment(System::SharedPtr<XpsContext> context, System::ArrayPtr<System::Drawing::PointF> points, bool isStroked = true);
    XpsPolyLineSegment(System::SharedPtr<XpsContext> context);
    XpsPolyLineSegment(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsElement> parent);
    
    virtual ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index);
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


