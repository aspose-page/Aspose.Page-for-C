#pragma once

#include <system/string.h>
#include <system/enum_helpers.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
class XpsDocument;
class XpsDocumentVisitor;
namespace XpsModel
{
enum class RegistrationType;
class XpsArcSegment;
template <typename> class XpsArray;
class XpsBrush;
class XpsCanvas;
class XpsContentElement;
class XpsContext;
class XpsElement;
class XpsGlyphs;
class XpsGradientStop;
class XpsMatrix;
class XpsPath;
class XpsPathFigure;
class XpsPathGeometry;
class XpsPathPolySegment;
class XpsPathSegment;
class XpsPolyBezierSegment;
class XpsPolyLineSegment;
class XpsPolyQuadraticBezierSegment;
template <typename> class XpsProperty;
class XpsPropertyValueManager;
class XpsResourceDictionary;
class XpsSolidColorBrush;
class XpsTransformableBrush;
class XpsVisual;
class XpsVisualBrush;
} // namespace XpsModel
namespace XpsPackageParts
{
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
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace Xml
{
class XmlElement;
} // namespace Xml
} // namespace System

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {

/// <summary>
/// Class incapsulating common XPS model object features.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsObject : public virtual System::Object
{
    typedef XpsObject ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsModel::XpsContentElement;
    friend class Aspose::Page::XPS::XpsModel::XpsBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsTransformableBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsGradientStop;
    friend class Aspose::Page::XPS::XpsModel::XpsSolidColorBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsVisual;
    friend class Aspose::Page::XPS::XpsModel::XpsVisualBrush;
    friend class Aspose::Page::XPS::XpsModel::XpsCanvas;
    friend class Aspose::Page::XPS::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::XPS::XpsModel::XpsResourceDictionary;
    friend class Aspose::Page::XPS::XpsDocument;
    friend class Aspose::Page::XPS::XpsModel::XpsElement;
    friend class Aspose::Page::XPS::XpsModel::XpsGlyphs;
    friend class Aspose::Page::XPS::XpsModel::XpsMatrix;
    friend class Aspose::Page::XPS::XpsModel::XpsPath;
    friend class Aspose::Page::XPS::XpsModel::XpsPathFigure;
    friend class Aspose::Page::XPS::XpsModel::XpsPathGeometry;
    friend class Aspose::Page::XPS::XpsModel::XpsArcSegment;
    friend class Aspose::Page::XPS::XpsModel::XpsPathSegment;
    friend class Aspose::Page::XPS::XpsModel::XpsPathPolySegment;
    friend class Aspose::Page::XPS::XpsModel::XpsPolyBezierSegment;
    friend class Aspose::Page::XPS::XpsModel::XpsPolyLineSegment;
    friend class Aspose::Page::XPS::XpsModel::XpsPolyQuadraticBezierSegment;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    friend class Aspose::Page::XPS::XpsPackageParts::FixedPage;
    
public:

    ASPOSE_PAGE_SHARED_API void AssertObject();
    
protected:

    System::WeakPtr<XpsContext> _context;
    static int32_t _cnt;
    
    int32_t get_Id() const;
    void set_xKey(System::String value);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsObject>>> get_Owners();
    
    XpsObject(System::SharedPtr<XpsContext> context);
    
    virtual void Initialize(System::SharedPtr<System::Xml::XmlElement> element) = 0;
    virtual ASPOSE_PAGE_SHARED_API void ForceRegisterForPreprocessing(bool add = true);
    virtual ASPOSE_PAGE_SHARED_API void RegisterForPreprocessing(System::SharedPtr<XpsElement> element, RegistrationType regType, bool add = true);
    virtual ASPOSE_PAGE_SHARED_API void ForceRegisterForPreprocessingPV(bool add = true);
    virtual ASPOSE_PAGE_SHARED_API void RegisterForPreprocessingPV(System::SharedPtr<XpsElement> element, RegistrationType regType, bool add = true);
    virtual System::SharedPtr<XpsObject> Clone(bool deep, System::SharedPtr<XpsContext> context) = 0;
    virtual ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsObject> obj);
    virtual ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsObject> obj);
    virtual void CopySimplePropertyValues(System::SharedPtr<XpsObject> obj) = 0;
    virtual void Accept(System::SharedPtr<XpsDocumentVisitor> visitor) = 0;
    virtual ASPOSE_PAGE_SHARED_API void AcceptProperties(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API void Dispose();
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    bool _isDisposed;
    System::DynamicWeakPtr<System::Collections::Generic::List<System::SharedPtr<XpsObject>>, System::SmartPtrMode::Shared, 0> _owners;
    int32_t _id;
    System::String _xKey;
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


