#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsDocumentVisitor.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { class XpsPresenter; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Aps { class ApsConverter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsSerializer; } } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocument; } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace Presentation {


// C# preprocessor directive: #if INTERNAL


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class XpsBasePresenter : public Aspose::Page::Xps::XpsDocumentVisitor
{
    typedef XpsBasePresenter ThisType;
    typedef Aspose::Page::Xps::XpsDocumentVisitor BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::XpsPresenter;
    friend class Aspose::Page::Xps::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsSerializer;
    friend class Aspose::Page::Xps::XpsDocument;
    
protected:

    System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsContext> get_Context();
    
    XpsBasePresenter(System::SharedPtr<XpsDocument> document);
    
    void Present();
    virtual void BeforePresentation() = 0;
    virtual void AfterPresentation() = 0;
    virtual void BeforeDocument() = 0;
    virtual void AfterDocument() = 0;
    
};

} // namespace Presentation
} // namespace Xps
} // namespace Page
} // namespace Aspose


