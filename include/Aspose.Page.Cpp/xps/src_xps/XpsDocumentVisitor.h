#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Presentation
{
class NativePathBuilder;
class XpsBasePresenter;
} // namespace Presentation
class XpsDocument;
namespace XpsModel
{
class IXpsProperty;
class XpsArcSegment;
class XpsCanvas;
class XpsGlyphs;
class XpsGradientStop;
class XpsImageBrush;
class XpsLinearGradientBrush;
class XpsMatrix;
class XpsPage;
class XpsPath;
class XpsPathFigure;
class XpsPathGeometry;
class XpsPolyBezierSegment;
class XpsPolyLineSegment;
class XpsPolyQuadraticBezierSegment;
template <typename> class XpsProperty;
class XpsRadialGradientBrush;
class XpsSolidColorBrush;
class XpsVisualBrush;
} // namespace XpsModel
namespace XpsPackageParts
{
class FixedPage;
} // namespace XpsPackageParts
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {


// C# preprocessor directive: #if INTERNAL


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PAGE_SHARED_CLASS XpsDocumentVisitor : public virtual System::Object
{
    typedef XpsDocumentVisitor ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::NativePathBuilder;
    friend class Aspose::Page::XPS::Presentation::XpsBasePresenter;
    friend class Aspose::Page::XPS::XpsModel::XpsGradientStop;
    friend class Aspose::Page::XPS::XpsModel::XpsImageBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsLinearGradientBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsRadialGradientBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsSolidColorBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsVisualBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsCanvas;
    friend class Aspose::Page::XPS::XpsModel::XpsGlyphs;
    friend class Aspose::Page::XPS::XpsModel::XpsMatrix;
    friend class Aspose::Page::XPS::XpsModel::XpsPage;
    friend class Aspose::Page::XPS::XpsModel::XpsPath;
    friend class Aspose::Page::XPS::XpsModel::XpsPathFigure;
    friend class Aspose::Page::XPS::XpsModel::XpsPathGeometry;
    friend class Aspose::Page::XPS::XpsModel::XpsArcSegment;
    friend class Aspose::Page::XPS::XpsModel::XpsPolyBezierSegment;
    friend class Aspose::Page::XPS::XpsModel::XpsPolyLineSegment;
    friend class Aspose::Page::XPS::XpsModel::XpsPolyQuadraticBezierSegment;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedPage;
    
protected:

    System::SharedPtr<XpsDocument> _document;
    
    XpsDocumentVisitor(System::SharedPtr<XpsDocument> document);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsDocumentVisitor, CODEPORTING_ARGS(System::SharedPtr<XpsDocument> document));
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
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
};

} // namespace XPS
} // namespace Page
} // namespace Aspose


