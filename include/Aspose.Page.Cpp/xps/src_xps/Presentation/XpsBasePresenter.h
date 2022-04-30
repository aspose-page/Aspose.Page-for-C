#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsDocumentVisitor.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Presentation
{
namespace Aps
{
class ApsConverter;
} // namespace Aps
namespace Xps
{
class XpsSerializer;
} // namespace Xps
class XpsPresenter;
} // namespace Presentation
class XpsDocument;
namespace XpsModel
{
class XpsContext;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace Presentation {

/// <summary>
/// The <b>Aspose.Page.Xps.Presentation</b> namespace provides base classes for rendering XPS
/// document to other formats.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};


// C# preprocessor directive: #if INTERNAL


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PAGE_SHARED_CLASS XpsBasePresenter : public Aspose::Page::XPS::XpsDocumentVisitor
{
    typedef XpsBasePresenter ThisType;
    typedef Aspose::Page::XPS::XpsDocumentVisitor BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::XpsPresenter;
    friend class Aspose::Page::XPS::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializer;
    friend class Aspose::Page::XPS::XpsDocument;
    
protected:

    System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> get_Context();
    
    XpsBasePresenter(System::SharedPtr<XpsDocument> document);
    
    void Present();
    virtual void BeforePresentation() = 0;
    virtual void AfterPresentation() = 0;
    virtual void BeforeDocument() = 0;
    virtual void AfterDocument() = 0;
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsBasePresenter();
    
};

} // namespace Presentation
} // namespace XPS
} // namespace Page
} // namespace Aspose


