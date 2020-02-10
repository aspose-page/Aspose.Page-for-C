#pragma once

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsElement.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPropertyValueManager; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocument; } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { template<typename> class XpsProperty; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsPackageParts { class FixedPage; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocumentVisitor; } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { enum class RegistrationType; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating FixedPage element features.
/// This element contains the contents of a page and is the root element of a FixedPage part.
/// </summary>
class XpsPage FINAL : public Aspose::Page::Xps::XpsModel::XpsElement
{
    typedef XpsPage ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsModel::XpsPropertyValueManager;
    friend class Aspose::Page::Xps::XpsDocument;
    template<typename FT0> friend class Aspose::Page::Xps::XpsModel::XpsProperty;
    friend class Aspose::Page::Xps::XpsPackageParts::FixedPage;
    
public:

    /// <summary>
    /// Returns/sets height of the page, expressed as a real number in units of the effective coordinate space.
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Height();
    /// <summary>
    /// Returns/sets height of the page, expressed as a real number in units of the effective coordinate space.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Height(float value);
    /// <summary>
    /// Returns/sets width of the page, expressed as a real number in units of the effective coordinate space. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API float get_Width();
    /// <summary>
    /// Returns/sets width of the page, expressed as a real number in units of the effective coordinate space. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Width(float value);
    /// <summary>
    /// Returns/sets value specifying the default language used for the current element and
    /// for any child or descendant elements.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::String get_XmlLang();
    /// <summary>
    /// Returns/sets value specifying the default language used for the current element and
    /// for any child or descendant elements.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_XmlLang(System::String value);
    
    /// <summary>
    /// Clones this page.
    /// </summary>
    /// <returns>Clone of this page.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsPage> Clone();
    
protected:

    System::SharedPtr<Aspose::Page::Xps::XpsPackageParts::FixedPage> get_FixedPage();
    
    XpsPage(System::SharedPtr<Aspose::Page::Xps::XpsPackageParts::FixedPage> fixedPage, System::SharedPtr<XpsContext> context, float width, float height, System::String xmlLang = u"en-US");
    XpsPage(System::SharedPtr<Aspose::Page::Xps::XpsPackageParts::FixedPage> fixedPage, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsPage> page);
    XpsPage(System::SharedPtr<Aspose::Page::Xps::XpsPackageParts::FixedPage> fixedPage, System::SharedPtr<XpsContext> context);
    
    virtual ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element);
    virtual ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API void UpdatePropertyValueReferences(System::SharedPtr<XpsElement> propertyValue, bool add = true);
    virtual ASPOSE_PAGE_SHARED_API void RegisterForPreprocessing(System::SharedPtr<XpsElement> element, RegistrationType regType, bool add = true);
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index);
    virtual ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsElement> element);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Page::Xps::XpsPackageParts::FixedPage> _fixedPage;
    float _height;
    float _width;
    System::String _xmlLang;
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


