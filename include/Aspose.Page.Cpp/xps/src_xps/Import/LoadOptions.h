#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose { namespace Page { namespace Xps { class ApsLoadOptions; } } }
namespace Aspose { namespace Page { namespace Xps { class XpsLoadOptions; } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocument; } } }
namespace Aspose { namespace Page { namespace Xps { enum class DocumentFormat; } } }

namespace Aspose {

namespace Page {

namespace Xps {

/// <summary>
/// Basic class for document loading options.
/// </summary>
class LoadOptions : public System::Object
{
    typedef LoadOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::ApsLoadOptions;
    friend class Aspose::Page::Xps::XpsLoadOptions;
    friend class Aspose::Page::Xps::XpsDocument;
    
protected:

    DocumentFormat get_SourceFormat();
    
    LoadOptions(DocumentFormat sourceFormat);
    
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    DocumentFormat _sourceFormat;
    
};

} // namespace Xps
} // namespace Page
} // namespace Aspose


