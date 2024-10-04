#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Foundation
{
namespace Drawing
{
class DrFont;
} // namespace Drawing
} // namespace Foundation
namespace Pal
{
class PalPrivateFontCache;
} // namespace Pal
} // namespace Aspose
namespace System
{
namespace Drawing
{
class Bitmap;
class Font;
class TextureBrush;
} // namespace Drawing
} // namespace System

namespace Aspose {

namespace Page {

namespace EPS {

class MiscUtil : public System::Object
{
    typedef MiscUtil ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    static System::SharedPtr<System::Drawing::Font> DrFontToNativeFont(System::SharedPtr<Aspose::Foundation::Drawing::DrFont> drFont);
    
private:

    static System::SharedPtr<Aspose::Pal::PalPrivateFontCache> privateFontCache;
    
};

class ASPOSE_PAGE_SHARED_CLASS TextureBrushExtension
{
    typedef TextureBrushExtension ThisType;
    
public:

    static ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Drawing::Bitmap> Get24bppImage(System::SharedPtr<System::Drawing::TextureBrush> brush);
    
public:
    TextureBrushExtension() = delete;
};

} // namespace EPS
} // namespace Page
} // namespace Aspose


