#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsTilingBrush.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
class DocumentUtils;
namespace Presentation
{
namespace Xps
{
class XpsPageWriter;
class XpsSerializer;
} // namespace Xps
} // namespace Presentation
class XpsDocumentVisitor;
namespace XpsModel
{
template <typename> class XpsArray;
class XpsBrush;
class XpsContext;
class XpsElement;
class XpsImage;
class XpsObject;
template <typename> class XpsProperty;
class XpsPropertyValueManager;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Drawing
{
class RectangleF;
} // namespace Drawing
namespace Text
{
namespace RegularExpressions
{
class Regex;
} // namespace RegularExpressions
} // namespace Text
namespace Xml
{
class XmlElement;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {

/// <summary>
/// Class incapsulating ImageBrush property element features.
/// This element is used to fill a region with an image.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsImageBrush final : public Aspose::Page::XPS::XpsModel::XpsTilingBrush
{
    typedef XpsImageBrush ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsTilingBrush BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::Xps::XpsPageWriter;
    friend class Aspose::Page::XPS::DocumentUtils;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializer;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsModel::XpsBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    
public:

    /// <summary>
    /// Returns the URI of an image resource.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_ImageSource() const;
    /// <summary>
    /// Returns image resource used to for the brush.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsImage> get_Image();
    
    /// <summary>
    /// Clones this image brush.
    /// </summary>
    /// <returns>Clone of this image brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsImageBrush> Clone();
    
protected:

    /// <summary>
    /// Returns the URI of an image resource.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_ImageSource(System::String value);
    
    XpsImageBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsImage> image, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsImageBrush, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsImage> image, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport));
    
    XpsImageBrush(System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsImageBrush, CODEPORTING_ARGS(System::SharedPtr<XpsContext> context));
    
    XpsImageBrush(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsImageBrush, CODEPORTING_ARGS(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context));
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor) override;
    ASPOSE_PAGE_SHARED_API void Validate() override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsObject> Clone(bool deep, System::SharedPtr<XpsContext> context) override;
    ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsImageBrush();
    
private:

    static System::SharedPtr<System::Text::RegularExpressions::Regex> ImageWithIcc;
    System::SharedPtr<XpsImage> _image;
    System::String _imageSource;
    
    System::String ParseImageSource(System::String value);
    void ValidateImageSource(System::String value);
    void ValidateImage(System::SharedPtr<XpsImage> value);
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


