#pragma once

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsInterfaces.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsBrushes/XpsBrush.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsGradientBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsImageBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsTilingBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsVisualBrush; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsMatrix; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsElement; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating common features of transformable brushes elements (all except SolidColorBrush).
/// </summary>
class XpsTransformableBrush : public Aspose::Page::Xps::XpsModel::XpsBrush, public Aspose::Page::Xps::XpsModel::ITransformableProperty
{
    typedef XpsTransformableBrush ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsBrush BaseType;
    typedef Aspose::Page::Xps::XpsModel::ITransformableProperty BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsModel::XpsGradientBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsImageBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsTilingBrush;
    friend class Aspose::Page::Xps::XpsModel::XpsVisualBrush;
    
public:

    /// <summary>
    /// Returns/sets the matrix transformation applied to the coordinate space of the brush.
    /// The Transform property is concatenated with the current effective render transform
    /// to yield an effective render transform local to the brush. The viewport for the brush
    /// is transformed using the local effective render transform. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<XpsMatrix> get_Transform();
    /// <summary>
    /// Returns/sets the matrix transformation applied to the coordinate space of the brush.
    /// The Transform property is concatenated with the current effective render transform
    /// to yield an effective render transform local to the brush. The viewport for the brush
    /// is transformed using the local effective render transform. 
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_Transform(System::SharedPtr<XpsMatrix> value);
    
protected:

    XpsTransformableBrush(System::SharedPtr<XpsContext> context);
    
    virtual ASPOSE_PAGE_SHARED_API void CopyPropertyValues(System::SharedPtr<XpsElement> element);
    virtual ASPOSE_PAGE_SHARED_API void ClonePropertyValues(System::SharedPtr<XpsElement> element);
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


