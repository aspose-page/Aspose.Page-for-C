#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/enum.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace System
{
namespace Drawing
{
namespace Drawing2D
{
enum class SmoothingMode;
} // namespace Drawing2D
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Page {

namespace Drawing {

namespace Drawing2D {

enum class SmoothingMode
{
    Invalid = -1,
    Default = 0,
    HighSpeed = 1,
    HighQuality = 2,
    None = 3,
    AntiAlias = 4
};

/// <summary>
/// The <b>Aspose.Page.Drawing.Drawing2D</b> is a root namespace for System.Drawing.Drawing2D wrapper classes.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

class SmoothingModeExtensions
{
    typedef SmoothingModeExtensions ThisType;
    
public:

    static System::Drawing::Drawing2D::SmoothingMode GetNativeValue(SmoothingMode smoothingMode);
    
public:
    SmoothingModeExtensions() = delete;
};

// Summary:
//     Specifies whether smoothing (antialiasing) is applied to lines and curves and
//     the edges of filled areas.
} // namespace Drawing2D
} // namespace Drawing
} // namespace Page
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Page::Drawing::Drawing2D::SmoothingMode>
{
    static const ASPOSE_PAGE_SHARED_API std::array<std::pair<Aspose::Page::Drawing::Drawing2D::SmoothingMode, const char_t*>, 6>& values();
};



