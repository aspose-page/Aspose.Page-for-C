#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/enum_helpers.h>
#include <system/collections/stack.h>
#include <system/collections/list.h>
#include <system/collections/ilist.h>
#include <system/collections/idictionary.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <Rendering/Aps/ApsPage.h>
#include <Pipeline/ISupplyNode.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/Presentation/XpsBasePresenter.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose { namespace Pipeline { template<typename> class Pipe; } }
namespace Aspose { namespace Page { class Device; } }
namespace Aspose { namespace Page { class SaveOptions; } }
namespace Aspose { namespace Page { namespace Xps { namespace Presentation { class NativeConverter; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsHyperlinkTarget; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsPackageParts { class FixedDocument; } } } }
namespace Aspose { namespace Rendering { class ApsNode; } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsOutlineEntry; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { enum class RegistrationType; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElement; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocument; } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPage; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsCanvas; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPath; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGlyphs; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class IXpsProperty; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElementLinkTarget; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace Presentation {


// C# preprocessor directive: #if INTERNAL


// C# preprocessor directive: #else


// C# preprocessor directive: #endif

class XpsPresenter : public Aspose::Page::Xps::Presentation::XpsBasePresenter, public Aspose::Pipeline::ISupplyNode<System::SharedPtr<Aspose::Rendering::ApsPage>>
{
    typedef XpsPresenter ThisType;
    typedef Aspose::Page::Xps::Presentation::XpsBasePresenter BaseType;
    typedef Aspose::Pipeline::ISupplyNode<System::SharedPtr<Aspose::Rendering::ApsPage>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// The pipe to put APS pages to.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<Aspose::Pipeline::Pipe<System::SharedPtr<Aspose::Rendering::ApsPage>>> get_OutputPipe();
    /// <summary>
    /// The pipe to put APS pages to.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_OutputPipe(System::SharedPtr<Aspose::Pipeline::Pipe<System::SharedPtr<Aspose::Rendering::ApsPage>>> value);
    /// <summary>
    /// The maximum number of threads that can be run for the node.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_MaxThreadsCount();
    
    ASPOSE_PAGE_SHARED_API XpsPresenter(System::SharedPtr<XpsDocument> document, System::SharedPtr<Device> device, System::SharedPtr<SaveOptions> options);
    
    /// <summary>
    /// Registers parent-child relationship between the pipeline and the node threads.
    /// </summary>
    /// <param name="nodeThreadId">The node thread Id.</param>
    ASPOSE_PAGE_SHARED_API void RegisterNodeThread(int32_t nodeThreadId);
    /// <summary>
    /// The method which performs APS pages vertical flip when run by a pipeline.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void Run();
    
protected:

    virtual ASPOSE_PAGE_SHARED_API void BeforePresentation();
    virtual ASPOSE_PAGE_SHARED_API void AfterPresentation();
    virtual ASPOSE_PAGE_SHARED_API void BeforeDocument();
    virtual ASPOSE_PAGE_SHARED_API void AfterDocument();
    void PreprocessDocument();
    void PreprocessPage(int32_t relativePageNumber, int32_t absolutePageNumber);
    virtual ASPOSE_PAGE_SHARED_API bool VisitPageStart(System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsPage> page);
    virtual ASPOSE_PAGE_SHARED_API void VisitPageEnd(System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsPage> page);
    virtual ASPOSE_PAGE_SHARED_API void VisitCanvasStart(System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsCanvas> canvas);
    virtual ASPOSE_PAGE_SHARED_API void VisitCanvasEnd(System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsCanvas> canvas);
    virtual ASPOSE_PAGE_SHARED_API bool VisitPathStart(System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsPath> path);
    virtual ASPOSE_PAGE_SHARED_API void VisitPathEnd(System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsPath> path);
    virtual ASPOSE_PAGE_SHARED_API void VisitGlyphsStart(System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsGlyphs> glyphs);
    virtual ASPOSE_PAGE_SHARED_API void VisitGlyphsEnd(System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsGlyphs> glyphs);
    virtual ASPOSE_PAGE_SHARED_API bool StartProperty(System::SharedPtr<Aspose::Page::Xps::XpsModel::IXpsProperty> property);
    virtual ASPOSE_PAGE_SHARED_API void EndProperty(System::SharedPtr<Aspose::Page::Xps::XpsModel::IXpsProperty> property);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pipeline::Pipe<System::SharedPtr<Aspose::Rendering::ApsPage>>> _pipe;
    int32_t _threadCount;
    System::SharedPtr<System::Object> _syncObj;
    System::SharedPtr<Device> _device;
    System::SharedPtr<SaveOptions> _options;
    System::SharedPtr<NativeConverter> _nativeConverter;
    System::SharedPtr<System::Collections::Generic::Stack<System::SharedPtr<Device>>> _graphicStates;
    System::SharedPtr<System::Collections::Generic::Stack<float>> _opacityStack;
    System::SharedPtr<System::Collections::Generic::Stack<System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsHyperlinkTarget>>> _canvasLinkTargets;
    int32_t _absolutePageNumber;
    int32_t _relativePageNumber;
    System::SharedPtr<System::Collections::Generic::IDictionary<System::SharedPtr<Aspose::Page::Xps::XpsPackageParts::FixedDocument>, System::SharedPtr<System::Collections::Generic::IDictionary<System::String, System::String>>>> _oldToNewNameMap;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<Aspose::Rendering::ApsNode>, System::String>> _nodeToNameMap;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<Aspose::Page::Xps::XpsPackageParts::FixedDocument>, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, int32_t>>>> _nameToAbsolutePageNumMap;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::SharedPtr<Aspose::Page::Xps::XpsPackageParts::FixedDocument>, System::SharedPtr<System::Collections::Generic::Dictionary<System::String, int32_t>>>> _nameToRelativePageNumMap;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> _pageToDocPageMap;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsOutlineEntry>>>>> _pageToOutlineEntriesMap;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsOutlineEntry>>>>> _nameToOutlineEntriesMap;
    System::SharedPtr<System::Collections::Generic::IDictionary<Aspose::Page::Xps::XpsModel::RegistrationType, System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsElement>>>>> _elementsForPreprocessing;
    
    bool CanRun();
    void ResetDocument();
    void PrepareNameToOutlineMap();
    void Preprocess();
    void GenerateElementLinkNames(Aspose::Page::Xps::XpsModel::RegistrationType regType);
    System::String GetNextName();
    void RegisterElementsForPreprocessing(int32_t absolutePageNumber, int32_t relativePageNumber);
    System::String GetLoadedName(System::String name);
    void SaveGraphicState();
    void RestoreGraphicState();
    bool IsActualLinkTarget(System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsElementLinkTarget> linkTarget);
    void SetHyperlinkTarget(System::SharedPtr<Aspose::Page::Xps::XpsModel::XpsHyperlinkTarget> linkTarget);
    void AddPageOutlines();
    void AddElementOutlines(System::String name);
    static System::ArrayPtr<float> ConvertStrokeDashArray(System::ArrayPtr<float> dashArray);
    
};

} // namespace Presentation
} // namespace Xps
} // namespace Page
} // namespace Aspose


