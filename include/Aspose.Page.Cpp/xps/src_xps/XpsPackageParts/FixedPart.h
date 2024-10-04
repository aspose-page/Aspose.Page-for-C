#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace OpcPackaging
{
class OpcPackage;
class OpcPackagePart;
class OpcRelationship;
} // namespace OpcPackaging
namespace Page
{
namespace XPS
{
namespace Presentation
{
namespace Xps
{
class XpsSerializer;
} // namespace Xps
} // namespace Presentation
class XpsDocument;
namespace XpsMetadata
{
class IPrintTicketItem;
class Metadata;
class PrintTicket;
} // namespace XpsMetadata
namespace XpsModel
{
class XpsContext;
} // namespace XpsModel
namespace XpsPackageParts
{
class FixedDocument;
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
template <typename, typename> class Dictionary;
} // namespace Generic
} // namespace Collections
namespace Drawing
{
class SizeF;
} // namespace Drawing
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

class ASPOSE_PAGE_SHARED_CLASS FixedPart : public System::Object
{
    typedef FixedPart ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializer;
    friend class Aspose::Page::XPS::XpsModel::XpsContext;
    friend class Aspose::Page::XPS::XpsDocument;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedDocument;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedDocumentSequence;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedPage;
    
public:

    ASPOSE_PAGE_SHARED_API FixedPart();
    
protected:

    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<Aspose::Page::XPS::XpsMetadata::IPrintTicketItem>>> _effectivePrintTicketItems;
    
    void set_PrintTicket(System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket> value);
    
    void RetrievePrintTicket(System::SharedPtr<Aspose::OpcPackaging::OpcPackage> package, System::SharedPtr<Aspose::OpcPackaging::OpcPackagePart> part, System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context);
    void SavePrintTicket(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context, System::SharedPtr<Aspose::OpcPackaging::OpcPackage> package, System::SharedPtr<Aspose::OpcPackaging::OpcPackagePart> part);
    virtual System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket> CreateDefaultPrintTicket(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context, System::SharedPtr<Aspose::OpcPackaging::OpcPackagePart> part) = 0;
    System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket> CreateDefaultPrintTicketInternal(System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket> printTicket, System::Drawing::SizeF size);
    virtual System::String GetPrintTicketPath(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context, System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket> printTicket) = 0;
    virtual System::String GetDefaultPrintTicketPath(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context) = 0;
    virtual System::String GetNewDefaultPrintTicketPath(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsContext> context) = 0;
    virtual System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket> CreatePrintTicket(System::String printTicketPath, System::SharedPtr<System::IO::Stream> ptStream) = 0;
    void MakeEffectivePrintTicketItems(System::SharedPtr<FixedPart> parent);
    virtual ASPOSE_PAGE_SHARED_API void Dispose();
    static System::SharedPtr<Aspose::OpcPackaging::OpcRelationship> GetPartRelationship(System::SharedPtr<Aspose::OpcPackaging::OpcPackagePart> part, System::String type);
    
    virtual ASPOSE_PAGE_SHARED_API ~FixedPart();
    
private:

    bool _isDisposed;
    System::SharedPtr<Aspose::Page::XPS::XpsMetadata::Metadata> _metadata;
    
};

} // namespace XpsPackageParts
} // namespace XPS
} // namespace Page
} // namespace Aspose


