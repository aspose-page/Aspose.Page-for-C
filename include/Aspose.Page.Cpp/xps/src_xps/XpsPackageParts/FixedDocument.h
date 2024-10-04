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
namespace Tests
{
class DocumentOperationsTests;
class PageOperationsTests;
class XpsCanvasTests;
class XpsDocumentTests;
class XpsPathTests;
} // namespace Tests
class XpsDocument;
namespace XpsMetadata
{
class PrintTicket;
} // namespace XpsMetadata
namespace XpsModel
{
class XpsContext;
class XpsHyperlinkElement;
} // namespace XpsModel
namespace XpsPackageParts
{
class FixedDocumentSequence;
class FixedPage;
} // namespace XpsPackageParts
} // namespace XPS
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class IList;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
namespace Xml
{
class XmlNode;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsPackageParts {


// C# preprocessor directive: #if !__cplusplus

// C# INACTIVE CODE:
// internal class FixedDocument : FixedPart

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PAGE_SHARED_CLASS FixedDocument : public Aspose::Page::XPS::XpsPackageParts::FixedPart
{
    typedef FixedDocument ThisType;
    typedef Aspose::Page::XPS::XpsPackageParts::FixedPart BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsModel::XpsHyperlinkElement;
    friend class Aspose::Page::XPS::XpsDocument;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedDocumentSequence;
    friend class Aspose::Page::XPS::Tests::PageOperationsTests;
    friend class Aspose::Page::XPS::Tests::XpsCanvasTests;
    friend class Aspose::Page::XPS::Tests::XpsPathTests;
    friend class Aspose::Page::XPS::Tests::XpsDocumentTests;
    friend class Aspose::Page::XPS::Tests::DocumentOperationsTests;
    
protected:

    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<FixedPage>>> get_FixedPages() const;
    System::String get_Source() const;
    void set_Source(System::String value);
    
    FixedDocument();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FixedDocument, CODEPORTING_ARGS());
    
    FixedDocument(System::String source, System::SharedPtr<Aspose::OpcPackaging::OpcPackage> package, System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FixedDocument, CODEPORTING_ARGS(System::String source, System::SharedPtr<Aspose::OpcPackaging::OpcPackage> package, System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context));
    void Serialize(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context, System::SharedPtr<Aspose::OpcPackaging::OpcPackage> package, System::String path);
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket> CreatePrintTicket(System::String printTicketPath, System::SharedPtr<System::IO::Stream> ptStream) override;
    ASPOSE_PAGE_SHARED_API System::String GetPrintTicketPath(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context, System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket> printTicket) override;
    ASPOSE_PAGE_SHARED_API System::String GetDefaultPrintTicketPath(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context) override;
    ASPOSE_PAGE_SHARED_API System::String GetNewDefaultPrintTicketPath(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context) override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket> CreateDefaultPrintTicket(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context, System::SharedPtr<Aspose::OpcPackaging::OpcPackagePart> part) override;
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    
    virtual ASPOSE_PAGE_SHARED_API ~FixedDocument();
    
private:

    System::String _source;
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<FixedPage>>> _fixedPages;
    
    void RegisterLinkTargetNames(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context, System::SharedPtr<System::Xml::XmlNode> node);
    void SaveDocumentStructure(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context, System::SharedPtr<Aspose::OpcPackaging::OpcPackage> package, System::SharedPtr<Aspose::OpcPackaging::OpcPackagePart> docPart, System::String path);
    
};

} // namespace XpsPackageParts
} // namespace XPS
} // namespace Page
} // namespace Aspose


