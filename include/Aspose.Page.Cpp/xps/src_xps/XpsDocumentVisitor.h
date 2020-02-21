#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { class NativePathBuilder; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { class XpsBasePresenter; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGradientStop; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsImageBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsLinearGradientBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsRadialGradientBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsSolidColorBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsVisualBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsCanvas; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGlyphs; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsMatrix; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPage; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPath; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPathFigure; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPathGeometry; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsArcSegment; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPolyBezierSegment; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPolyLineSegment; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPolyQuadraticBezierSegment; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { template<typename> class XpsProperty; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsPackageParts { class FixedPage; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocument; } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class IXpsProperty; } } } }

namespace Aspose {

namespace Page {

namespace Xps {


// C# preprocessor directive: #if INTERNAL


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class XpsDocumentVisitor : public virtual System::Object
{
    typedef XpsDocumentVisitor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::NativePathBuilder;
    friend class Aspose::Page::Xps::Presentation::XpsBasePresenter;
    friend class Aspose::Page::Xps::XpsModel::XpsGradientStop;
    friend class Aspose::Page::Xps::XpsModel::XpsImageBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsLinearGradientBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsRadialGradientBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsSolidColorBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsVisualBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsCanvas;
    friend class Aspose::Page::Xps::XpsModel::XpsGlyphs;
    friend class Aspose::Page::Xps::XpsModel::XpsMatrix;
    friend class Aspose::Page::Xps::XpsModel::XpsPage;
    friend class Aspose::Page::Xps::XpsModel::XpsPath;
    friend class Aspose::Page::Xps::XpsModel::XpsPathFigure;
    friend class Aspose::Page::Xps::XpsModel::XpsPathGeometry;
    friend class Aspose::Page::Xps::XpsModel::XpsArcSegment;
    friend class Aspose::Page::Xps::XpsModel::XpsPolyBezierSegment;
    friend class Aspose::Page::Xps::XpsModel::XpsPolyLineSegment;
    friend class Aspose::Page::Xps::XpsModel::XpsPolyQuadraticBezierSegment;
    template<typename FT0> friend class Aspose::Page::Xps::XpsModel::XpsProperty;
    friend class Aspose::Page::Xps::XpsPackageParts::FixedPage;
    
protected:

    System::SharedPtr<XpsDocument> _document;
    
    XpsDocumentVisitor(System::SharedPtr<XpsDocument> document);
    
    virtual ASPOSE_PAGE_SHARED_API void VisitFixedPageStart(System::SharedPtr<XpsPackageParts::FixedPage> fixedPage);
    virtual ASPOSE_PAGE_SHARED_API void VisitFixedPageEnd(System::SharedPtr<XpsPackageParts::FixedPage> fixedPage);
    virtual ASPOSE_PAGE_SHARED_API bool VisitPageStart(System::SharedPtr<XpsModel::XpsPage> page);
    virtual ASPOSE_PAGE_SHARED_API void VisitPageEnd(System::SharedPtr<XpsModel::XpsPage> page);
    virtual ASPOSE_PAGE_SHARED_API void VisitCanvasStart(System::SharedPtr<XpsModel::XpsCanvas> canvas);
    virtual ASPOSE_PAGE_SHARED_API void VisitCanvasEnd(System::SharedPtr<XpsModel::XpsCanvas> canvas);
    virtual ASPOSE_PAGE_SHARED_API bool VisitPathStart(System::SharedPtr<XpsModel::XpsPath> path);
    virtual ASPOSE_PAGE_SHARED_API void VisitPathEnd(System::SharedPtr<XpsModel::XpsPath> path);
    virtual ASPOSE_PAGE_SHARED_API void VisitGlyphsStart(System::SharedPtr<XpsModel::XpsGlyphs> glyphs);
    virtual ASPOSE_PAGE_SHARED_API void VisitGlyphsEnd(System::SharedPtr<XpsModel::XpsGlyphs> glyphs);
    virtual ASPOSE_PAGE_SHARED_API void VisitPathGeometryStart(System::SharedPtr<XpsModel::XpsPathGeometry> pathGeometry);
    virtual ASPOSE_PAGE_SHARED_API void VisitPathGeometryEnd(System::SharedPtr<XpsModel::XpsPathGeometry> pathGeometry);
    virtual ASPOSE_PAGE_SHARED_API bool VisitPathFigureStart(System::SharedPtr<XpsModel::XpsPathFigure> pathFigure);
    virtual ASPOSE_PAGE_SHARED_API void VisitPathFigureEnd(System::SharedPtr<XpsModel::XpsPathFigure> pathFigure);
    virtual ASPOSE_PAGE_SHARED_API void VisitArcSegment(System::SharedPtr<XpsModel::XpsArcSegment> segment);
    virtual ASPOSE_PAGE_SHARED_API void VisitPolyLineSegment(System::SharedPtr<XpsModel::XpsPolyLineSegment> segment);
    virtual ASPOSE_PAGE_SHARED_API void VisitPolyBezierSegment(System::SharedPtr<XpsModel::XpsPolyBezierSegment> segment);
    virtual ASPOSE_PAGE_SHARED_API void VisitPolyQuadraticBezierSegment(System::SharedPtr<XpsModel::XpsPolyQuadraticBezierSegment> segment);
    virtual ASPOSE_PAGE_SHARED_API void VisitMatrix(System::SharedPtr<XpsModel::XpsMatrix> matrix);
    virtual ASPOSE_PAGE_SHARED_API void VisitSolidColorBrush(System::SharedPtr<XpsModel::XpsSolidColorBrush> brush);
    virtual ASPOSE_PAGE_SHARED_API void VisitImageBrush(System::SharedPtr<XpsModel::XpsImageBrush> brush);
    virtual ASPOSE_PAGE_SHARED_API void VisitVisualBrushStart(System::SharedPtr<XpsModel::XpsVisualBrush> brush);
    virtual ASPOSE_PAGE_SHARED_API void VisitVisualBrushEnd(System::SharedPtr<XpsModel::XpsVisualBrush> brush);
    virtual ASPOSE_PAGE_SHARED_API void VisitLinearGradientBrush(System::SharedPtr<XpsModel::XpsLinearGradientBrush> brush);
    virtual ASPOSE_PAGE_SHARED_API void VisitRadialGradientBrush(System::SharedPtr<XpsModel::XpsRadialGradientBrush> brush);
    virtual ASPOSE_PAGE_SHARED_API void VisitGradientStop(System::SharedPtr<XpsModel::XpsGradientStop> gradientStop);
    virtual ASPOSE_PAGE_SHARED_API bool StartProperty(System::SharedPtr<XpsModel::IXpsProperty> property);
    virtual ASPOSE_PAGE_SHARED_API void EndProperty(System::SharedPtr<XpsModel::IXpsProperty> property);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
};

} // namespace Xps
} // namespace Page
} // namespace Aspose


