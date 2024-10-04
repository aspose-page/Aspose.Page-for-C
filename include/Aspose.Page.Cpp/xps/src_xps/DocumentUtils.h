#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <system/enum_helpers.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
class XpsDocument;
namespace XpsModel
{
class XpsContext;
class XpsPath;
class XpsPathGeometry;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Drawing
{
class PointF;
class RectangleF;
} // namespace Drawing
class String;
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

/// <summary>
/// Lists the options of fitting image within a box.
/// </summary>
enum class ImageMode
{
    /// <summary>
    /// The image fits to width.
    /// </summary>
    FitToWidth = 1,
    /// <summary>
    /// The image fits to height.
    /// </summary>
    FitToHeight,
    /// <summary>
    /// The image fits to box.
    /// </summary>
    FitToBox
};

DECLARE_ENUM_OPERATORS(Aspose::Page::XPS::ImageMode);
DECLARE_USING_GLOBAL_OPERATORS

/// <summary>
/// This class provides utilities beyond the formal XPS manipulation API.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS DocumentUtils : public System::Object
{
    typedef DocumentUtils ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsDocument;
    
public:

    /// <summary>
    /// Creates a path geometry representing a rectangle.
    /// </summary>
    /// <param name="rectangle">The rectangle.</param>
    /// <returns>The XPS path geometry.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPathGeometry> CreateRectangle(System::Drawing::RectangleF rectangle);
    /// <summary>
    /// Creates a path geometry representing an ellipse.
    /// </summary>
    /// <param name="center">The center point of the ellipse.</param>
    /// <param name="radiusX">The horizontal radius of the ellipse.</param>
    /// <param name="radiusY">The vertical radius of the ellipse.</param>
    /// <returns>The XPS path geometry.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPathGeometry> CreateEllipse(System::Drawing::PointF center, float radiusX, float radiusY);
    /// <summary>
    /// Creates a path geometry representing a circle.
    /// </summary>
    /// <param name="center">The center point of the circle.</param>
    /// <param name="radius">The radius of the circle.</param>
    /// <returns>The XPS path geometry.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPathGeometry> CreateCircle(System::Drawing::PointF center, float radius);
    /// <summary>
    /// Creates a path geometry representing a regular n-gon inscribed in a circle.
    /// </summary>
    /// <param name="n">The number of vertices.</param>
    /// <param name="center">The center of the circle.</param>
    /// <param name="radius">The radius of the circle.</param>
    /// <returns>The XPS path geometry.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPathGeometry> CreateRegularInscribedNGon(int32_t n, System::Drawing::PointF center, float radius);
    /// <summary>
    /// Creates a path geometry representing a regular n-gon circumscribed around a circle.
    /// </summary>
    /// <param name="n">The number of vertices.</param>
    /// <param name="center">The center of the circle.</param>
    /// <param name="radius">The radius of the circle.</param>
    /// <returns>The XPS path geometry.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPathGeometry> CreateRegularCircumscribedNGon(int32_t n, System::Drawing::PointF center, float radius);
    /// <summary>
    /// Creates a path geometry representing a circle slice between two radial rays.
    /// </summary>
    /// <param name="center">The center of the circle.</param>
    /// <param name="radius">The radius of the circle.</param>
    /// <param name="startAngle">The angle of the starting ray.</param>
    /// <param name="endAngle">The angle of the ending ray.</param>
    /// <returns>The XPS path geometry.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPathGeometry> CreatePieSlice(System::Drawing::PointF center, float radius, float startAngle, float endAngle);
    /// <summary>
    /// Creates a path geometry representing a circular segment between two angles.
    /// </summary>
    /// <param name="center">The center of the circle.</param>
    /// <param name="radius">The radius of the circle.</param>
    /// <param name="startAngle">The starting angle.</param>
    /// <param name="endAngle">The ending angle.</param>
    /// <returns>The XPS path geometry.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPathGeometry> CreateCircularSegment(System::Drawing::PointF center, float radius, float startAngle, float endAngle);
    /// <summary>
    /// Creates a rectangular path filled with an image.
    /// </summary>
    /// <param name="fileName">The name of the image file.</param>
    /// <param name="imageBox">The image box to fill with the image.</param>
    /// <param name="mode">Image fit mode.</param>
    /// <returns>The XPS path.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsModel::XpsPath> CreateImage(System::String fileName, System::Drawing::RectangleF imageBox, ImageMode mode = Aspose::Page::XPS::ImageMode::FitToBox);
    
protected:

    DocumentUtils(System::SharedPtr<XpsModel::XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(DocumentUtils, CODEPORTING_ARGS(System::SharedPtr<XpsModel::XpsContext> context));
    
private:

    System::SharedPtr<XpsModel::XpsContext> _context;
    
};

} // namespace XPS
} // namespace Page
} // namespace Aspose

DECLARE_USING_ENUM_OPERATORS(Aspose::Page::XPS);



