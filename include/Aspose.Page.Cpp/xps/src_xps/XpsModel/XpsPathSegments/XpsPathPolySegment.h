#pragma once

#include <system/collections/ilist.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathSegments/XpsPathSegment.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { class NativePathBuilder; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Aps { class ApsConverter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsPageWriter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPathFigure; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPolyBezierSegment; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPolyLineSegment; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPolyQuadraticBezierSegment; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsUtils; } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class XpsPathGeometryTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class XpsCanvasTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class XpsGlyphsTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Tests { class XpsPathTests; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElement; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating common features of PolyLineSegment, PolyBézierSegment and 
/// PolyQuadraticBézierSegment elements.
/// </summary>
class XpsPathPolySegment : public Aspose::Page::Xps::XpsModel::XpsPathSegment
{
    typedef XpsPathPolySegment ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsPathSegment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::NativePathBuilder;
    friend class Aspose::Page::Xps::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsPageWriter;
    friend class Aspose::Page::Xps::XpsModel::XpsPathFigure;
    friend class Aspose::Page::Xps::XpsModel::XpsPolyBezierSegment;
    friend class Aspose::Page::Xps::XpsModel::XpsPolyLineSegment;
    friend class Aspose::Page::Xps::XpsModel::XpsPolyQuadraticBezierSegment;
    friend class Aspose::Page::Xps::XpsUtils;
    friend class Aspose::Page::Xps::Tests::XpsPathGeometryTests;
    friend class Aspose::Page::Xps::Tests::XpsCanvasTests;
    friend class Aspose::Page::Xps::Tests::XpsGlyphsTests;
    friend class Aspose::Page::Xps::Tests::XpsPathTests;
    
protected:

    System::SharedPtr<System::Collections::Generic::IList<System::Drawing::PointF>> get_Points();
    virtual int32_t get_NumberOfPoints() = 0;
    
    XpsPathPolySegment(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::IList<System::Drawing::PointF>> points, bool isStroked = true);
    XpsPathPolySegment(System::SharedPtr<XpsContext> context);
    
    virtual ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element);
    virtual ASPOSE_PAGE_SHARED_API System::String Abbreviate(System::String abbrChar, System::Drawing::PointF& endPoint);
    virtual ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsElement> element);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::IList<System::Drawing::PointF>> _points;
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


