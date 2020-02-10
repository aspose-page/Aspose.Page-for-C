#pragma once

#include <system/array.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsFileResources/XpsFileResource.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { class NativeConverter; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Aps { class ApsConverter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElement; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsImageBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating an image resource.
/// </summary>
class XpsImage FINAL : public Aspose::Page::Xps::XpsModel::XpsFileResource
{
    typedef XpsImage ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsFileResource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::NativeConverter;
    friend class Aspose::Page::Xps::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    friend class Aspose::Page::Xps::XpsModel::XpsImageBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsFileResource;
    
protected:

    virtual ASPOSE_PAGE_SHARED_API System::String get_DefaultNamePrefix();
    virtual ASPOSE_PAGE_SHARED_API System::String get_Extension();
    
    static System::SharedPtr<XpsImage> Create(System::SharedPtr<XpsContext> context, System::String source);
    static System::SharedPtr<XpsImage> Create(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream, System::String extension, bool isExternal = false);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::ArrayPtr<uint8_t> imageBytes;
    System::String _extension;
    
    XpsImage(System::SharedPtr<XpsContext> context, System::String source);
    XpsImage(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream, System::String extension, bool isExternal = false);
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


