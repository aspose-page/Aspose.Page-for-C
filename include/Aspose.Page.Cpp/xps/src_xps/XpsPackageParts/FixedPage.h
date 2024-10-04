#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsPackageParts/FixedPart.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace OpcPackaging
{
class OpcPackage;
class OpcPackagePart;
} // namespace OpcPackaging
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
class XpsSerializationContext;
} // namespace Xps
class XpsBasePresenter;
class XpsPresenter;
} // namespace Presentation
namespace Tests
{
class XpsCanvasTests;
class XpsPathTests;
} // namespace Tests
class XpsDocument;
class XpsDocumentVisitor;
namespace XpsMetadata
{
class PrintTicket;
} // namespace XpsMetadata
namespace XpsModel
{
class XpsContext;
class XpsEvent;
class XpsGlyphs;
class XpsGradientBrush;
class XpsHyperlinkElement;
class XpsImageBrush;
class XpsMatrix;
class XpsPage;
class XpsPageContext;
class XpsPathGeometry;
} // namespace XpsModel
namespace XpsPackageParts
{
class FixedDocument;
} // namespace XpsPackageParts
class XpsUtils;
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsPackageParts {


// C# preprocessor directive: #if !__cplusplus

// C# INACTIVE CODE:
// internal class FixedPage : FixedPart

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PAGE_SHARED_CLASS FixedPage : public Aspose::Page::XPS::XpsPackageParts::FixedPart
{
    typedef FixedPage ThisType;
    typedef Aspose::Page::XPS::XpsPackageParts::FixedPart BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::XpsPresenter;
    friend class Aspose::Page::XPS::Presentation::XpsBasePresenter;
    friend class Aspose::Page::XPS::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializationContext;
    friend class Aspose::Page::XPS::XpsModel::XpsHyperlinkElement;
    friend class Aspose::Page::XPS::XpsModel::XpsGradientBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsImageBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsContext;
    friend class Aspose::Page::XPS::XpsDocument;
    friend class Aspose::Page::XPS::XpsModel::XpsGlyphs;
    friend class Aspose::Page::XPS::XpsModel::XpsMatrix;
    friend class Aspose::Page::XPS::XpsModel::XpsPage;
    friend class Aspose::Page::XPS::XpsModel::XpsPathGeometry;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedDocument;
    friend class Aspose::Page::XPS::XpsUtils;
    friend class Aspose::Page::XPS::Tests::XpsCanvasTests;
    friend class Aspose::Page::XPS::Tests::XpsPathTests;
    
public:

    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPage> get_Page() const;
    
protected:

    static const float DefaultWidth;
    static const float DefaultHeight;
    
    System::String get_PageBasePath() const;
    System::String get_Source() const;
    void set_Source(System::String value);
    System::String get_PagePartName() const;
    System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPageContext> get_PageContext() const;
    float get_Height();
    float get_Width();
    
    FixedPage(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FixedPage, CODEPORTING_ARGS(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context));
    
    FixedPage(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context, System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPage> page);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FixedPage, CODEPORTING_ARGS(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context, System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPage> page));
    
    FixedPage(System::String source, System::SharedPtr<Aspose::OpcPackaging::OpcPackage> package, System::String docSource, System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FixedPage, CODEPORTING_ARGS(System::String source, System::SharedPtr<Aspose::OpcPackaging::OpcPackage> package, System::String docSource, System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context));
    void Load(bool onlyXml = false);
    void Accept(System::SharedPtr<XpsDocumentVisitor> visitor);
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket> CreatePrintTicket(System::String printTicketPath, System::SharedPtr<System::IO::Stream> ptStream) override;
    ASPOSE_PAGE_SHARED_API System::String GetPrintTicketPath(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context, System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket> printTicket) override;
    ASPOSE_PAGE_SHARED_API System::String GetDefaultPrintTicketPath(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context) override;
    ASPOSE_PAGE_SHARED_API System::String GetNewDefaultPrintTicketPath(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context) override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket> CreateDefaultPrintTicket(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context, System::SharedPtr<Aspose::OpcPackaging::OpcPackagePart> part) override;
    virtual ASPOSE_PAGE_SHARED_API void NotifyRoot(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsEvent> evt);
    System::SharedPtr<FixedPage> Clone(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context);
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    
    virtual ASPOSE_PAGE_SHARED_API ~FixedPage();
    
private:

    System::String _source;
    System::String _pageName;
    System::SharedPtr<System::IO::Stream> _stream;
    System::String _pageBasePath;
    System::WeakPtr<Aspose::Page::XPS::XpsModel::XpsContext> _context;
    System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPageContext> _pageContext;
    System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPage> _page;
    bool _isLoaded;
    
    FixedPage(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context, System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPageContext> pageContext);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FixedPage, CODEPORTING_ARGS(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context, System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPageContext> pageContext));
    void FetchPageStream(System::SharedPtr<Aspose::OpcPackaging::OpcPackage> package, System::String docSource);
    
};

} // namespace XpsPackageParts
} // namespace XPS
} // namespace Page
} // namespace Aspose


