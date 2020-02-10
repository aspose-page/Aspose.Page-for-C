#pragma once

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsElement.h"

namespace Aspose { namespace Page { namespace Xps { namespace Presentation { namespace Xps { class XpsPageWriter; } } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPathFigure; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsArcSegment; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPathPolySegment; } } } }
namespace Aspose { namespace Page { namespace Xps { class XpsUtils; } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsContext; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating common features of all path segment elements.
/// </summary>
class XpsPathSegment : public Aspose::Page::Xps::XpsModel::XpsElement
{
    typedef XpsPathSegment ThisType;
    typedef Aspose::Page::Xps::XpsModel::XpsElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::Presentation::Xps::XpsPageWriter;
    friend class Aspose::Page::Xps::XpsModel::XpsPathFigure;
    friend class Aspose::Page::Xps::XpsModel::XpsArcSegment;
    friend class Aspose::Page::Xps::XpsModel::XpsPathPolySegment;
    friend class Aspose::Page::Xps::XpsUtils;
    
public:

    /// <summary>
    /// Returns/sets the value specifying whether the stroke for this segment of the path is drawn.
    /// </summary>
    ASPOSE_PAGE_SHARED_API bool get_IsStroked();
    /// <summary>
    /// Returns/sets the value specifying whether the stroke for this segment of the path is drawn.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_IsStroked(bool value);
    
protected:

    bool get_IsRelative();
    void set_IsRelative(bool value);
    
    XpsPathSegment(System::SharedPtr<XpsContext> context, bool isStroked = true);
    
    virtual ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element);
    virtual System::String Abbreviate(System::String abbrChar, System::Drawing::PointF& endPoint) = 0;
    virtual ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsElement> element);
    
private:

    bool _isStroked;
    bool _isRelative;
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


