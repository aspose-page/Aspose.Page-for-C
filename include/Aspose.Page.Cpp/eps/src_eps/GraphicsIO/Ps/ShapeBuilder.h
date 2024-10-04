#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/nullable.h>
#include <include/Rendering/Aps/ApsDocumentVisitor.h>
#include <drawing/point_f.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Foundation
{
namespace Drawing
{
class DrMatrix;
} // namespace Drawing
} // namespace Foundation
namespace Rendering
{
class ApsBezierSegment;
class ApsPath;
class ApsPathFigure;
class ApsPolyLineSegment;
} // namespace Rendering
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class Stack;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
namespace Drawing2D
{
class GraphicsPath;
class Matrix;
} // namespace Drawing2D
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace EPS {

namespace GraphicsIO {

namespace Ps {

class ASPOSE_PAGE_SHARED_CLASS ShapeBuilder : public Aspose::Rendering::ApsDocumentVisitor
{
    typedef ShapeBuilder ThisType;
    typedef Aspose::Rendering::ApsDocumentVisitor BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    ASPOSE_PAGE_SHARED_API ShapeBuilder();
    ASPOSE_PAGE_SHARED_API ShapeBuilder(bool isClipPath);
    
    /**
         * <p>
         * Visits the path start.
         * </p>
         * @param path The aps path.
         */
    ASPOSE_PAGE_SHARED_API void VisitPathStart(const System::SharedPtr<Aspose::Rendering::ApsPath>& path) override;
    /**
         * Used only for clip pathes.
         */
    ASPOSE_PAGE_SHARED_API void VisitPathEnd(const System::SharedPtr<Aspose::Rendering::ApsPath>& path) override;
    /**
         * <p>
         * Visits the path figure start.
         * </p>
         * @param pathFigure The path figure.
         */
    ASPOSE_PAGE_SHARED_API void VisitPathFigureStart(const System::SharedPtr<Aspose::Rendering::ApsPathFigure>& pathFigure) override;
    /**
         * <p>
         * Visits the path figure end.
         * </p>
         * @param pathFigure The path figure.
         */
    ASPOSE_PAGE_SHARED_API void VisitPathFigureEnd(const System::SharedPtr<Aspose::Rendering::ApsPathFigure>& pathFigure) override;
    /**
         * <p>
         * Visits the poly line segment.
         * </p>
         * @param segment The segment.
         */
    ASPOSE_PAGE_SHARED_API void VisitPolyLineSegment(const System::SharedPtr<Aspose::Rendering::ApsPolyLineSegment>& segment) override;
    /**
         * <p>
         * Visits the bezier segment.
         * </p>
         * @param segment The segment.
         */
    ASPOSE_PAGE_SHARED_API void VisitBezierSegment(const System::SharedPtr<Aspose::Rendering::ApsBezierSegment>& segment) override;
    /**
         * <p>
         * The Java Shape that is being built.
         * </p>
         */
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> GetShape();
    
private:

    static const int32_t FDFR;
    bool inSubPath;
    System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> shape;
    System::Nullable<System::Drawing::PointF> firstSubPathPoint;
    System::Nullable<System::Drawing::PointF> curPoint;
    System::Nullable<System::Drawing::PointF> prevPoint;
    bool isClipPath;
    System::SharedPtr<System::Collections::Generic::Stack<System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath>>> clipSubPathes;
    System::SharedPtr<System::Drawing::Drawing2D::GraphicsPath> clipPath;
    
    static System::SharedPtr<System::Drawing::Drawing2D::Matrix> drMatrixToMatrix(System::SharedPtr<Aspose::Foundation::Drawing::DrMatrix> m);
    
};

} // namespace Ps
} // namespace GraphicsIO
} // namespace EPS
} // namespace Aspose


