#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if ASPOSE_PAGE


// C# preprocessor directive: #elif ASPOSE_TEX

// C# INACTIVE CODE:
// using LicenseCore = Aspose.TeX.LicenseCore;
// using LicenseState = Aspose.TeX.LicenseState;

// C# preprocessor directive: #else

// C# INACTIVE CODE:
// using LicenseCore = Aspose.Pdf.LicenseCore;
// using LicenseState = Aspose.Pdf.LicenseState;

// C# preprocessor directive: #endif


#include <system/string.h>
#include <system/enum_helpers.h>
#include <system/collections/keyvalue_pair.h>
#include <cstdint>

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
namespace LicenseManagement
{
class VentureLicense;
} // namespace LicenseManagement
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
class XpsSerializer;
} // namespace Xps
class XpsBasePresenter;
class XpsPresenter;
} // namespace Presentation
class XpsDocument;
namespace XpsMetadata
{
class PrintTicket;
} // namespace XpsMetadata
namespace XpsModel
{
enum class RegistrationType;
class XpsCanvas;
class XpsColor;
class XpsContentElement;
class XpsElement;
class XpsElementLinkTarget;
class XpsFileResource;
class XpsGlyphs;
class XpsHyperlinkElement;
class XpsHyperlinkTarget;
class XpsImageBrush;
class XpsObject;
class XpsOutlineEntry;
class XpsPage;
class XpsPageLinkTarget;
class XpsPath;
class XpsPathGeometry;
class XpsPropertyValueManager;
class XpsResourceDictionary;
class XpsTransformableBrush;
class XpsVisual;
class XpsVisualBrush;
} // namespace XpsModel
namespace XpsPackageParts
{
class FixedDocument;
class FixedDocumentSequence;
class FixedPage;
class FixedPart;
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
template <typename, typename> class IDictionary;
template <typename> class IList;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
namespace Xml
{
class XmlElement;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {


// C# preprocessor directive: #if !__cplusplus

// C# INACTIVE CODE:
// internal class XpsContext

// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PAGE_SHARED_CLASS XpsContext : public System::Object
{
    typedef XpsContext ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::XpsPresenter;
    friend class Aspose::Page::XPS::Presentation::XpsBasePresenter;
    friend class Aspose::Page::XPS::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializer;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializationContext;
    friend class Aspose::Page::XPS::XpsModel::XpsObject;
    friend class Aspose::Page::XPS::XpsModel::XpsContentElement;
    friend class Aspose::Page::XPS::XpsModel::XpsHyperlinkElement;
    friend class Aspose::Page::XPS::XpsModel::XpsHyperlinkTarget;
    friend class Aspose::Page::XPS::XpsModel::XpsElementLinkTarget;
    friend class Aspose::Page::XPS::XpsModel::XpsTransformableBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsImageBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsVisual;
    friend class Aspose::Page::XPS::XpsModel::XpsVisualBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsCanvas;
    friend class Aspose::Page::XPS::XpsModel::XpsColor;
    friend class Aspose::Page::XPS::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::XPS::XpsDocument;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    friend class Aspose::Page::XPS::XpsModel::XpsFileResource;
    friend class Aspose::Page::XPS::XpsModel::XpsGlyphs;
    friend class Aspose::Page::XPS::XpsModel::XpsPage;
    friend class Aspose::Page::XPS::XpsModel::XpsPath;
    friend class Aspose::Page::XPS::XpsModel::XpsPathGeometry;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedDocument;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedPart;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedDocumentSequence;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedPage;
    
public:

    ASPOSE_PAGE_SHARED_API System::Collections::Generic::KeyValuePair<int32_t, System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedPage>> get_ActivePage();
    ASPOSE_PAGE_SHARED_API void set_ActivePage(System::Collections::Generic::KeyValuePair<int32_t, System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedPage>> value);
    
    ASPOSE_PAGE_SHARED_API void Restrict(int32_t index);
    
protected:

    System::SharedPtr<XpsPropertyValueManager> PropertyValueManager;
    
    static int32_t& IndivisibleLevel();
    
    bool get_Debug() const;
    bool get_IsLicensed();
    System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedDocument>, System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<XpsOutlineEntry>>>>> get_OutlinesMap() const;
    System::String get_FixedDocumentSequenceSource() const;
    void set_FixedDocumentSequenceSource(System::String value);
    System::Collections::Generic::KeyValuePair<int32_t, System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedDocument>> get_ActiveDocument();
    void set_ActiveDocument(System::Collections::Generic::KeyValuePair<int32_t, System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedDocument>> value);
    System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::SharedPtr<XpsFileResource>>> get_FileResources() const;
    System::SharedPtr<System::Collections::Generic::IDictionary<System::SharedPtr<XpsFileResource>, System::String>> get_LoadedResources() const;
    System::SharedPtr<System::Collections::Generic::IDictionary<System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedDocument>, System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::String>>>> get_OldToNewNameMap() const;
    bool get_IsDisposing() const;
    
    XpsContext();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsContext, CODEPORTING_ARGS());
    
    XpsContext(System::SharedPtr<Aspose::OpcPackaging::OpcPackage> package);
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsContext, CODEPORTING_ARGS(System::SharedPtr<Aspose::OpcPackaging::OpcPackage> package));
    void StartOperation();
    void EndOperation();
    void SetVentureLicense(System::SharedPtr<Aspose::Page::LicenseManagement::VentureLicense> license);
    System::SharedPtr<Aspose::Page::LicenseManagement::VentureLicense> GetVentureLicense();
    bool Restricted(int32_t index);
    bool RestrictedPage();
    void ResetPageCounter();
    void IncrementPageCounter();
    void DisposePackage();
    void AddRequiredResources(System::SharedPtr<Aspose::OpcPackaging::OpcPackagePart> part);
    bool AddResourceDictionary(System::SharedPtr<XpsElement> xpsElement, System::SharedPtr<System::Xml::XmlElement> element);
    System::SharedPtr<XpsResourceDictionary> GetResourceDictionary(System::SharedPtr<XpsElement> element);
    System::SharedPtr<XpsObject> GetResource(System::SharedPtr<XpsElement> element, System::String name);
    System::SharedPtr<Aspose::OpcPackaging::OpcPackagePart> FetchExternalResource(System::String resourcePath);
    void AddFileResourceHash(System::SharedPtr<System::IO::Stream> stream, System::String hash);
    void AddFileResource(System::String hash, System::SharedPtr<XpsFileResource> resource);
    System::String GetFileResourceHash(System::SharedPtr<System::IO::Stream> stream);
    System::SharedPtr<XpsFileResource> GetFileResource(System::String hash);
    System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket> GetPrintTicket(System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedPart> part);
    System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket> GetPrintTicket(System::String printTicketPath);
    void RegisterPrintTicket(System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedPart> part, System::String printTicketPath, System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket> printTicket);
    void RegisterPrintTicket(System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedPart> part, System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket> printTicket);
    void RegisterPageLinkTarget(System::SharedPtr<XpsPageLinkTarget> pageLinkTarget, bool add = true);
    bool IsPageLinked(int32_t pageNumber);
    void RegisterLoadedLinkTargetName(System::String linkTargetName, System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedDocument> document);
    bool IsLoadedLinkTargetName(System::String name);
    void CollectOutlines(System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedDocument> fixedDocument, System::String path, System::SharedPtr<Aspose::OpcPackaging::OpcPackage> package);
    void SelectActiveDocumentAndPageForMainThread();
    void ClearActiveDocumentAndPage();
    System::String GetDefaultPrintTicketPath(System::String key);
    void RegisterDefaultPrintTicketPath(System::String key, System::String printTicketPath);
    void ClearDefaultPrintTicketPaths();
    void GenerateElementLinkNames(RegistrationType regType);
    System::String GetCounter(System::String counterName);
    System::String GetLoadedName(System::String name);
    void StartDisposal();
    void EndDisposal();
    void Dispose();
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsContext();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    bool _debug;
    bool _isDisposed;
    bool _isDisposing;
    int32_t _pageNum;
    System::SharedPtr<Aspose::OpcPackaging::OpcPackage> _package;
    System::SharedPtr<System::Collections::Generic::IDictionary<System::SharedPtr<XpsElement>, System::SharedPtr<XpsResourceDictionary>>> _resourceDictionaries;
    System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::SharedPtr<XpsResourceDictionary>>> _rdSourceToObject;
    System::SharedPtr<System::Collections::Generic::IDictionary<System::SharedPtr<System::IO::Stream>, System::String>> _resourceStreamToHashMap;
    System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::SharedPtr<XpsFileResource>>> _fileResources;
    System::SharedPtr<System::Collections::Generic::IDictionary<System::SharedPtr<XpsFileResource>, System::String>> _loadedResources;
    System::SharedPtr<System::Collections::Generic::IDictionary<int32_t, int32_t>> _pageLinkTargets;
    System::SharedPtr<System::Collections::Generic::IDictionary<System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedDocument>, System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::String>>>> _oldToNewNameMap;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedDocument>, System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<XpsOutlineEntry>>>>> _docToOutlineMap;
    System::SharedPtr<System::Collections::Generic::IDictionary<System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedPart>, System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket>>> _partToPrintTicketMap;
    System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::SharedPtr<Aspose::Page::XPS::XpsMetadata::PrintTicket>>> _printTicketPathToPrintTicketMap;
    System::SharedPtr<System::Collections::Generic::IDictionary<System::String, int32_t>> _counters;
    System::SharedPtr<Aspose::Page::LicenseManagement::VentureLicense> _ventureLicense;
    int32_t _mainThreadId;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::Collections::Generic::KeyValuePair<int32_t, System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedDocument>>>> _activeDocument;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::Collections::Generic::KeyValuePair<int32_t, System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedPage>>>> _activePage;
    
    bool get_Indivisible();
    
    System::String pr_FixedDocumentSequenceSource;
    System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::String>> _pageSizeToPrintTicketPathMap;
    
    System::String GetNextName();
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


