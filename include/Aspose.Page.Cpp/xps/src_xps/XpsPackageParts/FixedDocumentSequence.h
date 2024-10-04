#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <cstdint>

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
} // namespace Tests
class XpsDocument;
namespace XpsMetadata
{
class PrintTicket;
} // namespace XpsMetadata
namespace XpsModel
{
class XpsContext;
} // namespace XpsModel
namespace XpsPackageParts
{
class FixedDocument;
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
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsPackageParts {


// C# preprocessor directive: #if CPLUSPLUS


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PAGE_SHARED_CLASS FixedDocumentSequence : public Aspose::Page::XPS::XpsPackageParts::FixedPart
{
    typedef FixedDocumentSequence ThisType;
    typedef Aspose::Page::XPS::XpsPackageParts::FixedPart BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::XpsDocument;
    friend class Aspose::Page::XPS::Tests::DocumentOperationsTests;
    friend class Aspose::Page::XPS::Tests::PageOperationsTests;
    
protected:

    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<FixedDocument>>> get_FixedDocuments() const;
    int32_t get_PageCount();
    
    FixedDocumentSequence(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FixedDocumentSequence, CODEPORTING_ARGS(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context));
    
    FixedDocumentSequence(System::SharedPtr<Aspose::OpcPackaging::OpcPackage> package, System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(FixedDocumentSequence, CODEPORTING_ARGS(System::SharedPtr<Aspose::OpcPackaging::OpcPackage> package, System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context));
    void Serialize(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context, System::SharedPtr<Aspose::OpcPackaging::OpcPackage> package);
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket> CreatePrintTicket(System::String printTicketPath, System::SharedPtr<System::IO::Stream> ptStream) override;
    ASPOSE_PAGE_SHARED_API System::String GetPrintTicketPath(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context, System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket> printTicket) override;
    ASPOSE_PAGE_SHARED_API System::String GetDefaultPrintTicketPath(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context) override;
    ASPOSE_PAGE_SHARED_API System::String GetNewDefaultPrintTicketPath(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context) override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket> CreateDefaultPrintTicket(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context, System::SharedPtr<Aspose::OpcPackaging::OpcPackagePart> part) override;
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    
    virtual ASPOSE_PAGE_SHARED_API ~FixedDocumentSequence();
    
private:

    System::String _path;
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<FixedDocument>>> _fixedDocs;
    
};

} // namespace XpsPackageParts
} // namespace XPS
} // namespace Page
} // namespace Aspose


