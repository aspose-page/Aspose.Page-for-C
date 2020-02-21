#pragma once

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsFileResources/XpsFileResource.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElement; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsColor; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating an ICC profile resource.
/// </summary>
class XpsIccProfile FINAL : public Aspose::Page::Xps::XpsModel::XpsFileResource
{
    typedef XpsIccProfile ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsFileResource BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    friend class Aspose::Page::Xps::XpsModel::XpsColor;
    friend class Aspose::Page::Xps::XpsModel::XpsFileResource;
    
protected:

    virtual ASPOSE_PAGE_SHARED_API System::String get_DefaultNamePrefix();
    virtual ASPOSE_PAGE_SHARED_API System::String get_Extension();
    
    static System::SharedPtr<XpsIccProfile> Create(System::SharedPtr<XpsContext> context, System::String source);
    static System::SharedPtr<XpsIccProfile> Create(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream, bool isExternal = false);
    
private:

    XpsIccProfile(System::SharedPtr<XpsContext> context, System::String source);
    XpsIccProfile(System::SharedPtr<XpsContext> context, System::SharedPtr<System::IO::Stream> stream, bool isExternal = false);
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


