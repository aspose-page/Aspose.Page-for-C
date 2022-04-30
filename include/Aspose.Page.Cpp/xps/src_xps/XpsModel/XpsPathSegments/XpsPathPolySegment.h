#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <drawing/point_f.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPathSegments/XpsPathSegment.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Presentation
{
namespace Aps
{
class ApsConverter;
} // namespace Aps
class NativePathBuilder;
namespace Xps
{
class XpsPageWriter;
class XpsSerializer;
} // namespace Xps
} // namespace Presentation
namespace Tests
{
class XpsCanvasTests;
class XpsGlyphsTests;
class XpsPathGeometryTests;
class XpsPathTests;
} // namespace Tests
namespace XpsModel
{
template <typename> class XpsArray;
class XpsContext;
class XpsObject;
class XpsPolyBezierSegment;
class XpsPolyLineSegment;
class XpsPolyQuadraticBezierSegment;
template <typename> class XpsProperty;
} // namespace XpsModel
class XpsUtils;
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
class String;
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
/// Class incapsulating common features of PolyLineSegment, PolyBézierSegment and 
/// PolyQuadraticBézierSegment elements.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsPathPolySegment : public Aspose::Page::XPS::XpsModel::XpsPathSegment
{
    typedef XpsPathPolySegment ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsPathSegment BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::XPS::Presentation::NativePathBuilder;
    friend class Aspose::Page::XPS::Presentation::Aps::ApsConverter;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsPageWriter;
    friend class Aspose::Page::XPS::Presentation::Xps::XpsSerializer;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    friend class Aspose::Page::XPS::XpsModel::XpsPolyBezierSegment;
    friend class Aspose::Page::XPS::XpsModel::XpsPolyLineSegment;
    friend class Aspose::Page::XPS::XpsModel::XpsPolyQuadraticBezierSegment;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    friend class Aspose::Page::XPS::XpsUtils;
    friend class Aspose::Page::XPS::Tests::XpsPathGeometryTests;
    friend class Aspose::Page::XPS::Tests::XpsCanvasTests;
    friend class Aspose::Page::XPS::Tests::XpsGlyphsTests;
    friend class Aspose::Page::XPS::Tests::XpsPathTests;
    
protected:

    System::SharedPtr<System::Collections::Generic::IList<System::Drawing::PointF>> get_Points();
    virtual int32_t get_NumberOfPoints() = 0;
    
    XpsPathPolySegment(System::SharedPtr<XpsContext> context, System::SharedPtr<System::Collections::Generic::IList<System::Drawing::PointF>> points, bool isStroked = true);
    XpsPathPolySegment(System::SharedPtr<XpsContext> context);
    
    ASPOSE_PAGE_SHARED_API void Initialize(System::SharedPtr<System::Xml::XmlElement> element) override;
    ASPOSE_PAGE_SHARED_API System::String Abbreviate(System::String abbrChar, System::Drawing::PointF& endPoint) override;
    ASPOSE_PAGE_SHARED_API void CopySimplePropertyValues(System::SharedPtr<XpsObject> obj) override;
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    #ifdef ASPOSE_GET_SHARED_MEMBERS
    ASPOSE_PAGE_SHARED_API System::Object::shared_members_type GetSharedMembers() const override;
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::IList<System::Drawing::PointF>> _points;
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


