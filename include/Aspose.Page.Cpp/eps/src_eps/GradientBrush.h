#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <drawing/rectangle_f.h>
#include <drawing/brush.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace System
{
namespace Drawing
{
namespace Drawing2D
{
enum class WrapMode;
} // namespace Drawing2D
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Page {

namespace EPS {

/// <summary>
/// This class is used for encapsulating LinearGradientBrush and PathGradientBrush with possibility to set wrap mode to clamp.
/// Native gradient brushes always throw an exception when someone tries to set WrapMode property to WrapMode.Clamp.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS GradientBrush : public System::Drawing::Brush
{
    typedef GradientBrush ThisType;
    typedef System::Drawing::Brush BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Returns or specifies wrap mode for this gradient brush. It can be WrapMode.Clamp, that results in throwing exception in  native gradient brushes.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::Drawing2D::WrapMode get_WrapMode() const;
    /// <summary>
    /// Returns or specifies wrap mode for this gradient brush. It can be WrapMode.Clamp, that results in throwing exception in  native gradient brushes.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_WrapMode(System::Drawing::Drawing2D::WrapMode value);
    /// <summary>
    /// Returns native gradient brush.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Brush> get_NativeBrush() const;
    /// <summary>
    /// Returns or specifies bounds for this gradient brushes.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::Drawing::RectangleF get_Bounds() const;
    /// <summary>
    /// Returns or specifies bounds for this gradient brushes.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Bounds(System::Drawing::RectangleF value);
    
    /// <summary>
    /// Creates new instance of GradientBrush.
    ///  <param name="nativeBrush">LinearGradientBrush or PathGradientBrush. If other than ArgumentException will be thrown. </param>
    /// </summary>
    ASPOSE_PAGE_SHARED_API GradientBrush(System::SharedPtr<System::Drawing::Brush> nativeBrush);
    
    /// <summary>
    /// Clones this brush.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Brush> Clone() override;

protected:

    /// Sets the properties of the current brush on the specified SkPaint object.
    /// @param paint An object set the properties on
    /// @param matrix Graphics world transformation matrix
    /// @param apply_shift Is used to make a small brush's texture position shift
    ASPOSE_PAGE_SHARED_API void Apply(SkPaint &paint, const System::SharedPtr<System::Drawing::Drawing2D::Matrix>& matrix, bool apply_shift) override {}

    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API void GetSharedMembers(System::Object::shared_members_type& result) const override;
    #endif
    
    
private:

    System::SharedPtr<System::Drawing::Brush> nativeBrush;
    System::Drawing::RectangleF bounds;
    System::Drawing::Drawing2D::WrapMode wrapMode;
    
};

} // namespace EPS
} // namespace Page
} // namespace Aspose


