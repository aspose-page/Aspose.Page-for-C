#pragma once

#include <system/string.h>
#include <drawing/rectangle_f.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsTilingBrush.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsPageWriter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsSerializer; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElement; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsImage; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocumentVisitor; } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating ImageBrush property element features.
/// This element is used to fill a region with an image.
/// </summary>
class XpsImageBrush FINAL : public Aspose::Page::Xps::XpsModel::XpsTilingBrush
{
    typedef XpsImageBrush ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsTilingBrush BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsPageWriter;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsSerializer;
    friend class Aspose::Page::Xps::XpsModel::XpsBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    
public:

    /// <summary>
    /// Returns the URI of an image resource.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_ImageSource();
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
    XpsImageBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsImage> image);
    XpsImageBrush(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context);
    
    virtual ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element);
    virtual ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API void Validate();
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index);
    virtual ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsElement> element);
    virtual ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsElement> element);
    virtual ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsElement> element);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<XpsImage> _image;
    System::String _imageSource;
    
    void ValidateImageSource(System::String value);
    void ValidateImage(System::SharedPtr<XpsImage> value);
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


