#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum_helpers.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/array.h>
#include <include/Rendering/Aps/ApsPage.h>
#include <include/Pipeline/ISupplyNode.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/Presentation/XpsBasePresenter.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
class Device;
class SaveOptions;
namespace XPS
{
namespace Presentation
{
class NativeConverter;
} // namespace Presentation
class XpsDocument;
namespace XpsModel
{
class IXpsProperty;
enum class RegistrationType;
class XpsCanvas;
enum class XpsDashCap;
class XpsElement;
class XpsElementLinkTarget;
class XpsGlyphs;
class XpsHyperlinkTarget;
class XpsOutlineEntry;
class XpsPage;
class XpsPath;
} // namespace XpsModel
namespace XpsPackageParts
{
class FixedDocument;
} // namespace XpsPackageParts
} // namespace XPS
} // namespace Page
namespace Pipeline
{
template <typename> class Pipe;
} // namespace Pipeline
namespace Rendering
{
class ApsNode;
} // namespace Rendering
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
template <typename> class List;
template <typename> class Stack;
} // namespace Generic
} // namespace Collections
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace Presentation {


// C# preprocessor directive: #if INTERNAL


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class ASPOSE_PAGE_SHARED_CLASS XpsPresenter : public Aspose::Page::XPS::Presentation::XpsBasePresenter, public Aspose::Pipeline::ISupplyNode<System::SharedPtr<Aspose::Rendering::ApsPage>>
{
    typedef XpsPresenter ThisType;
    typedef Aspose::Page::XPS::Presentation::XpsBasePresenter BaseType;
    typedef Aspose::Pipeline::ISupplyNode<System::SharedPtr<Aspose::Rendering::ApsPage>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The pipe to put APS pages to.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Pipeline::Pipe<System::SharedPtr<Aspose::Rendering::ApsPage>>> get_OutputPipe() override;
    /// <summary>
    /// The pipe to put APS pages to.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_OutputPipe(System::SharedPtr<Aspose::Pipeline::Pipe<System::SharedPtr<Aspose::Rendering::ApsPage>>> value) override;
    /// <summary>
    /// The maximum number of threads that can be run for the node.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_MaxThreadsCount() override;
    
    ASPOSE_PAGE_SHARED_API XpsPresenter(System::SharedPtr<XpsDocument> document, System::SharedPtr<Device> device, System::SharedPtr<SaveOptions> options);
    
    /// <summary>
    /// Registers parent-child relationship between the pipeline and the node threads.
    /// </summary>
    /// <param name="nodeThreadId">The node thread Id.</param>
    ASPOSE_PAGE_SHARED_API void RegisterNodeThread(int32_t nodeThreadId) override;
    /// <summary>
    /// The method which performs APS pages vertical flip when run by a pipeline.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void Run() override;
    ASPOSE_PAGE_SHARED_API void SetTemplateWeakPtr(uint32_t argument) override;
    
protected:

    ASPOSE_PAGE_SHARED_API void BeforePresentation() override;
    ASPOSE_PAGE_SHARED_API void AfterPresentation() override;
    ASPOSE_PAGE_SHARED_API void BeforeDocument() override;
    ASPOSE_PAGE_SHARED_API void AfterDocument() override;
    void PreprocessDocument();
    void PreprocessPage(int32_t relativePageNumber, int32_t absolutePageNumber);
    ASPOSE_PAGE_SHARED_API bool VisitPageStart(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPage> page) override;
    ASPOSE_PAGE_SHARED_API void VisitPageEnd(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPage> page) override;
    ASPOSE_PAGE_SHARED_API void VisitCanvasStart(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsCanvas> canvas) override;
    ASPOSE_PAGE_SHARED_API void VisitCanvasEnd(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsCanvas> canvas) override;
    ASPOSE_PAGE_SHARED_API bool VisitPathStart(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPath> path) override;
    ASPOSE_PAGE_SHARED_API void VisitPathEnd(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsPath> path) override;
    ASPOSE_PAGE_SHARED_API void VisitGlyphsStart(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsGlyphs> glyphs) override;
    ASPOSE_PAGE_SHARED_API void VisitGlyphsEnd(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsGlyphs> glyphs) override;
    ASPOSE_PAGE_SHARED_API bool StartProperty(System::SharedPtr<Aspose::Page::XPS::XpsModel::IXpsProperty> property) override;
    ASPOSE_PAGE_SHARED_API void EndProperty(System::SharedPtr<Aspose::Page::XPS::XpsModel::IXpsProperty> property) override;
    void Clear();
    
    virtual ASPOSE_PAGE_SHARED_API ~XpsPresenter();
    
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pipeline::Pipe<System::SharedPtr<Aspose::Rendering::ApsPage>>> _pipe;
    int32_t _threadCount;
    System::SharedPtr<System::Object> _syncObj;
    System::SharedPtr<Device> _device;
    System::SharedPtr<SaveOptions> _options;
    System::SharedPtr<NativeConverter> _nativeConverter;
    System::SharedPtr<System::Collections::Generic::Stack<System::SharedPtr<Device>>> _graphicStates;
    System::SharedPtr<System::Collections::Generic::Stack<float>> _opacityStack;
    System::SharedPtr<System::Collections::Generic::Stack<System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsHyperlinkTarget>>> _canvasLinkTargets;
    int32_t _absolutePageNumber;
    int32_t _relativePageNumber;
    System::SharedPtr<System::Collections::Generic::IDictionary<System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedDocument>, System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::String>>>> _oldToNewNameMap;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<Aspose::Rendering::ApsNode>, System::String>> _nodeToNameMap;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedDocument>, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, int32_t>>>> _nameToAbsolutePageNumMap;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<Aspose::Page::XPS::XpsPackageParts::FixedDocument>, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, int32_t>>>> _nameToRelativePageNumMap;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> _pageToDocPageMap;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsOutlineEntry>>>>> _pageToOutlineEntriesMap;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsOutlineEntry>>>>> _nameToOutlineEntriesMap;
    System::SharedPtr<System::Collections::Generic::IDictionary<Aspose::Page::XPS::XpsModel::RegistrationType, System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsElement>>>>> _elementsForPreprocessing;
    
    bool CanRun();
    void ResetDocument();
    void PrepareNameToOutlineMap();
    void Preprocess();
    void GenerateElementLinkNames(Aspose::Page::XPS::XpsModel::RegistrationType regType);
    System::String GetNextName();
    void RegisterElementsForPreprocessing(int32_t absolutePageNumber, int32_t relativePageNumber);
    System::String GetLoadedName(System::String name);
    void SaveGraphicState();
    void RestoreGraphicState();
    bool IsActualLinkTarget(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsElementLinkTarget> linkTarget);
    void SetHyperlinkTarget(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsHyperlinkTarget> linkTarget);
    void AddPageOutlines();
    void AddElementOutlines(System::String name);
    static System::ArrayPtr<float> ConvertStrokeDashArray(System::ArrayPtr<float> dashArray, Aspose::Page::XPS::XpsModel::XpsDashCap dashCap);
    
};

} // namespace Presentation
} // namespace XPS
} // namespace Page
} // namespace Aspose


