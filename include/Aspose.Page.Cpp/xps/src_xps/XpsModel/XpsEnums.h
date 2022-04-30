#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {

/// <summary>
/// Valid values of Path element's StrokeDashCap property.
/// </summary>
enum class XpsDashCap
{
    /// <summary>
    /// Flat dash cap.
    /// </summary>
    Flat,
    /// <summary>
    /// Roud dash cap.
    /// </summary>
    Round,
    /// <summary>
    /// Square dash cap.
    /// </summary>
    Square,
    /// <summary>
    /// Triangle dash cap.
    /// </summary>
    Triangle
};

/// <summary>
/// Valid values of Path element's StrokeStartLineCap and StrokeEndLineCap properties.
/// </summary>
enum class XpsLineCap
{
    /// <summary>
    /// Flat line cap.
    /// </summary>
    Flat,
    /// <summary>
    /// Round line cap.
    /// </summary>
    Round,
    /// <summary>
    /// Square line cap.
    /// </summary>
    Square,
    /// <summary>
    /// Triangle line cap.
    /// </summary>
    Triangle
};

/// <summary>
/// Valid values of Path element's StrokeLineJoin property.
/// </summary>
enum class XpsLineJoin
{
    /// <summary>
    /// Miter line join.
    /// </summary>
    Miter,
    /// <summary>
    /// Bevel line join.
    /// </summary>
    Bevel,
    /// <summary>
    /// Round line join.
    /// </summary>
    Round
};

/// <summary>
/// Valid values of Glyphs element's StyleSimulations property.
/// </summary>
enum class XpsStyleSimulations
{
    /// <summary>
    /// No style simulation
    /// </summary>
    None,
    /// <summary>
    /// Italic simulation
    /// </summary>
    ItalicSimulation,
    /// <summary>
    /// Bold simulation
    /// </summary>
    BoldSimulation,
    /// <summary>
    /// Bold italic simulation
    /// </summary>
    BoldItalicSimulation
};

/// <summary>
/// Valid values of PathGeometry element's FillRule property.
/// </summary>
enum class XpsFillRule
{
    /// <summary>
    /// This rule determines the “insideness” of a point on the canvas by drawing a ray
    /// from the point to infinity in any direction and counting the number of segments
    /// from the given shape that the ray crosses. If this number is odd, the point is
    /// inside; if it is even, the point is outside.
    /// </summary>
    EvenOdd,
    /// <summary>
    /// This rule determines the “insideness” of a point on the canvas by drawing a ray
    /// from the point to infinity in any direction and then examining the places where
    /// a segment of the shape crosses the ray. Starting with a count of zero, add one
    /// each time a segment crosses the ray from left to right and subtract one each time
    /// a path segment crosses the ray from right to left. After counting the crossings,
    /// if the result is zero then the point is outside the path; otherwise, it is inside. 
    /// </summary>
    NonZero
};

/// <summary>
/// Valid values of ArcSegment element's SweepDirection property.
/// </summary>
enum class XpsSweepDirection
{
    /// <summary>
    /// Counterclockwise direction.
    /// </summary>
    Counterclockwise,
    /// <summary>
    /// Clockwise direction.
    /// </summary>
    Clockwise
};

/// <summary>
/// Valid values of tiling brushes' TileMode property.
/// </summary>
enum class XpsTileMode
{
    /// <summary>
    /// In this mode, only the single base tile is drawn. The remaining area is left transparent.
    /// </summary>
    None,
    /// <summary>
    /// In this mode, the base tile is drawn and the remaining area is filled by repeating the base
    /// tile such that the right edge of each tile abuts the left edge of the next, and the bottom
    /// edge of each tile abuts the top edge of the next.
    /// </summary>
    Tile,
    /// <summary>
    /// The tile arrangement is similar to the Tile tile mode, but alternate columns of tiles are
    /// flipped horizontally. The base tile is positioned as specified by the viewport. Tiles in
    /// the columns to the left and right of this tile are flipped horizontally.
    /// </summary>
    FlipX,
    /// <summary>
    /// The tile arrangement is similar to the Tile tile mode, but alternate rows of tiles are flipped
    /// vertically. The base tile is positioned as specified by the viewport. Rows above and below are
    /// flipped vertically.
    /// </summary>
    FlipY,
    /// <summary>
    /// The tile arrangement is similar to the Tile tile mode, but alternate columns of tiles are
    /// flipped horizontally and alternate rows of tiles are flipped vertically. The base tile is
    /// positioned as specified by the viewport.
    /// </summary>
    FlipXY
};

/// <summary>
/// Valid values of gradient brushes' ColorInterpolationMode property.
/// </summary>
enum class XpsColorInterpolationMode
{
    /// <summary>
    /// SRgbLinearInterpolation mode.
    /// </summary>
    SRgbLinearInterpolation,
    /// <summary>
    /// ScRgbLinearInterpolation mode.
    /// </summary>
    ScRgbLinearInterpolation
};

/// <summary>
/// Valid values of gradient brushes' SpreadMethod property.
/// </summary>
enum class XpsSpreadMethod
{
    /// <summary>
    /// In this method, the first color and the last color are used to fill the remaining
    /// fill area at the beginning and end. 
    /// </summary>
    Pad,
    /// <summary>
    /// In this method, the gradient stops are replayed in reverse order repeatedly to cover the fill area.
    /// </summary>
    Reflect,
    /// <summary>
    /// In this method, the gradient stops are repeated in order until the fill area is covered.
    /// </summary>
    Repeat
};

/// <summary>
/// Valid values of Canvas element's RenderOptions.EdgeMode property.
/// </summary>
enum class XpsEdgeMode
{
    /// <summary>
    /// The edges are to be rendered in the consumer's default manner.
    /// </summary>
    None,
    /// <summary>
    /// The edges are to be aliased.
    /// </summary>
    Aliased
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Page::XPS::XpsModel::XpsDashCap>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::XPS::XpsModel::XpsDashCap, const char_t*>, 4>& values();
};
template<>
struct EnumMetaInfo<Aspose::Page::XPS::XpsModel::XpsLineCap>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::XPS::XpsModel::XpsLineCap, const char_t*>, 4>& values();
};
template<>
struct EnumMetaInfo<Aspose::Page::XPS::XpsModel::XpsLineJoin>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::XPS::XpsModel::XpsLineJoin, const char_t*>, 3>& values();
};
template<>
struct EnumMetaInfo<Aspose::Page::XPS::XpsModel::XpsStyleSimulations>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::XPS::XpsModel::XpsStyleSimulations, const char_t*>, 4>& values();
};
template<>
struct EnumMetaInfo<Aspose::Page::XPS::XpsModel::XpsFillRule>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::XPS::XpsModel::XpsFillRule, const char_t*>, 2>& values();
};
template<>
struct EnumMetaInfo<Aspose::Page::XPS::XpsModel::XpsSweepDirection>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::XPS::XpsModel::XpsSweepDirection, const char_t*>, 2>& values();
};
template<>
struct EnumMetaInfo<Aspose::Page::XPS::XpsModel::XpsTileMode>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::XPS::XpsModel::XpsTileMode, const char_t*>, 5>& values();
};
template<>
struct EnumMetaInfo<Aspose::Page::XPS::XpsModel::XpsColorInterpolationMode>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::XPS::XpsModel::XpsColorInterpolationMode, const char_t*>, 2>& values();
};
template<>
struct EnumMetaInfo<Aspose::Page::XPS::XpsModel::XpsSpreadMethod>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::XPS::XpsModel::XpsSpreadMethod, const char_t*>, 3>& values();
};
template<>
struct EnumMetaInfo<Aspose::Page::XPS::XpsModel::XpsEdgeMode>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::XPS::XpsModel::XpsEdgeMode, const char_t*>, 2>& values();
};



