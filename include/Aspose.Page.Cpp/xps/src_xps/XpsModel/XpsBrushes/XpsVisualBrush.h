#pragma once

#include <system/enum_helpers.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsTilingBrush.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElement; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsVisual; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { template<typename> class XpsProperty; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsDocumentVisitor; } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsCanvas; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPath; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGlyphs; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { enum class RegistrationType; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating VisualBrush property element features.
/// This element is used to fill a region with a drawing.
/// </summary>
class XpsVisualBrush FINAL : public Aspose::Page::Xps::XpsModel::XpsTilingBrush
{
    typedef XpsVisualBrush ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsTilingBrush BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsModel::XpsBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsElement;
    
public:

    /// <summary>
    /// Returns/sets a Path, Glyphs, or Canvas element used to draw the brush’s source content. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> get_Visual();
    
    /// <summary>
    /// Sets <paramref name="canvas"/> as Visual element of visual brush.
    /// </summary>
    /// <param name="canvas">Canvas element.</param>
    ASPOSE_PAGE_SHARED_API void SetVisual(System::SharedPtr<XpsCanvas> canvas);
    /// <summary>
    /// Sets <paramref name="path"/> as Visual element of visual brush.
    /// </summary>
    /// <param name="path">Path element.</param>
    ASPOSE_PAGE_SHARED_API void SetVisual(System::SharedPtr<XpsPath> path);
    /// <summary>
    /// Sets <paramref name="glyphs"/> as Visual element of visual brush.
    /// </summary>
    /// <param name="glyphs">Glyphs element.</param>
    ASPOSE_PAGE_SHARED_API void SetVisual(System::SharedPtr<XpsGlyphs> glyphs);
    /// <summary>
    /// Clones this visual brush.
    /// </summary>
    /// <returns>Clone of this visual brush.</returns>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsVisualBrush> Clone();
    
protected:

    XpsVisualBrush(System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> visualElement, System::Drawing::RectangleF viewbox, System::Drawing::RectangleF viewport);
    XpsVisualBrush(System::SharedPtr<XpsContext> context);
    XpsVisualBrush(System::SharedPtr<System::Xml::XmlElement> element, System::SharedPtr<XpsContext> context);
    
    virtual ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element);
    virtual ASPOSE_PAGE_SHARED_API void Accept(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API void AcceptProperties(System::SharedPtr<XpsDocumentVisitor> visitor);
    virtual ASPOSE_PAGE_SHARED_API void Validate();
    virtual ASPOSE_PAGE_SHARED_API void ForceRegisterForPreprocessingPV(bool add = true);
    virtual ASPOSE_PAGE_SHARED_API void RegisterForPreprocessingPV(System::SharedPtr<XpsElement> element, RegistrationType regType, bool add = true);
    virtual ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsElement> Clone(bool deep, System::SharedPtr<XpsContext> context, System::SharedPtr<XpsElement> parent, int32_t index);
    virtual ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsElement> element);
    virtual ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsElement> element);
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<XpsProperty<System::SharedPtr<XpsVisual>>> _visual;
    
    System::SharedPtr<XpsVisual> get_VisualInternal();
    void set_VisualInternal(System::SharedPtr<XpsVisual> value);
    /// <summary>
    /// Returns/sets a Path, Glyphs, or Canvas element used to draw the brush’s source content. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Visual(System::SharedPtr<XpsElement> value);
    
    void ValidateVisual(System::SharedPtr<XpsElement> value);
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


