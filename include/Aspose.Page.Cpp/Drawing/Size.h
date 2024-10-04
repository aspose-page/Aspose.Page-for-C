#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <drawing/size.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace EPS
{
namespace Device
{
class ApsDevice;
class PdfDevice;
} // namespace Device
class PsDocument;
} // namespace EPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace Drawing {

/// <summary>
/// The <b>Aspose.Page.Drawing</b> is a root namespace for System.Drawing wrapper classes.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>Stores an ordered pair of integers, typically the width and height of a rectangle.</summary>
class ASPOSE_PAGE_SHARED_CLASS Size : public System::Object, public System::Details::BoxableObjectBase
{
    typedef Size ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::EPS::Device::ApsDevice;
    friend class Aspose::Page::EPS::Device::PdfDevice;
    friend class Aspose::Page::EPS::PsDocument;
    friend ASPOSE_PAGE_SHARED_API bool operator ==(const Size& left, const Size& right);
    friend ASPOSE_PAGE_SHARED_API bool operator !=(const Size& sz1, const Size& sz2);
    
public:

    /// <summary>Gets a <see cref="T:Aspose::Page::Drawing::Size"></see> structure that has a <see cref="P:Aspose::Page::Drawing::Size::Height"></see> and <see cref="P:Aspose::Page::Drawing::Size::Width"></see> value of 0. </summary>
    /// <returns>A <see cref="T:Aspose::Page::Drawing::Size"></see> structure that has a <see cref="P:Aspose::Page::Drawing::Size::Height"></see> and <see cref="P:Aspose::Page::Drawing::Size::Width"></see> value of 0.</returns>
    static ASPOSE_PAGE_SHARED_API Size Empty;
    
    /// <summary>Gets the vertical component of this <see cref="T:Aspose::Page::Drawing::Size"></see>.</summary>
    /// <returns>The vertical component of this <see cref="T:Aspose::Page::Drawing::Size"></see>, typically measured in pixels.</returns>
    ASPOSE_PAGE_SHARED_API int32_t get_Height();
    /// <summary>Sets the vertical component of this <see cref="T:Aspose::Page::Drawing::Size"></see>.</summary>
    /// <param name="value">The vertical component of this <see cref="T:Aspose::Page::Drawing::Size"></see>, typically measured in pixels.</param>
    ASPOSE_PAGE_SHARED_API void set_Height(int32_t value);
    /// <summary>Gets the horizontal component of this <see cref="T:Aspose::Page::Drawing::Size"></see>.</summary>
    /// <returns>The horizontal component of this <see cref="T:Aspose::Page::Drawing::Size"></see>, typically measured in pixels.</returns>
    ASPOSE_PAGE_SHARED_API int32_t get_Width();
    /// <summary>Sets the horizontal component of this <see cref="T:Aspose::Page::Drawing::Size"></see>.</summary>
    /// <param name="value">The horizontal component of this <see cref="T:Aspose::Page::Drawing::Size"></see>, typically measured in pixels.</param>
    ASPOSE_PAGE_SHARED_API void set_Width(int32_t value);
    /// <summary>Tests whether this <see cref="T:Aspose::Page::Drawing::Size"></see> has width and height of 0.</summary>
    /// <returns>This property returns true when this <see cref="T:Aspose::Page::Drawing::Size"></see> has both a width and height of 0; otherwise, false.</returns>
    ASPOSE_PAGE_SHARED_API bool get_IsEmpty();
    
    /// <summary>Initializes a new instance of the <see cref="T:Aspose::Page::Drawing::Size"></see> class from the specified dimensions.</summary>
    /// <param name="width">The width component of the new <see cref="T:Aspose::Page::Drawing::Size"></see>. </param>
    /// <param name="height">The height component of the new <see cref="T:Aspose::Page::Drawing::Size"></see>. </param>
    ASPOSE_PAGE_SHARED_API Size(int32_t width, int32_t height);
    
    /// <summary>Clones this Aspose.Page.Drawing.Size.</summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Object> Clone();
    /// <summary>Tests to see whether the specified object is a <see cref="T:Aspose::Page::Drawing::Size"></see> with the same dimensions as this <see cref="T:Aspose::Page::Drawing::Size"></see>.</summary>
    /// <returns>true if <paramref name="obj" ></paramref> is a <see cref="T:Aspose::Page::Drawing::Size"></see> and has the same width and height as this <see cref="T:Aspose::Page::Drawing::Size"></see>; otherwise, false.</returns>
    /// <param name="obj">The <see cref="T:System::Object"></see> to test. </param>
    ASPOSE_PAGE_SHARED_API bool Equals(System::SharedPtr<System::Object> obj) override;
    /// <summary>Returns a hash code for this <see cref="T:Aspose::Page::Drawing::Size"></see> structure.</summary>
    /// <returns>An integer value that specifies a hash value for this <see cref="T:Aspose::Page::Drawing::Size"></see> structure.</returns>
    ASPOSE_PAGE_SHARED_API int32_t GetHashCode() const override;
    
    ASPOSE_PAGE_SHARED_API Size();
    
    /// <summary>Creates a human-readable string that represents this <see cref="T:Aspose::Page::Drawing::Size"></see>.</summary>
    /// <returns>A string that represents this <see cref="T:Aspose::Page::Drawing::Size"></see>.</returns>
    ASPOSE_PAGE_SHARED_API System::String ToString() const override;
    
protected:

    System::Drawing::Size get_NativeValue() const;
    
    Size(System::Drawing::Size nativeValue);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(Size, CODEPORTING_ARGS(System::Drawing::Size nativeValue));
    
private:

    System::Drawing::Size nativeValue;
    
    System::String ToString_NonConst();
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

ASPOSE_PAGE_SHARED_API bool operator ==(const Size& left, const Size& right);
ASPOSE_PAGE_SHARED_API bool operator !=(const Size& sz1, const Size& sz2);

} // namespace Drawing
} // namespace Page
} // namespace Aspose


