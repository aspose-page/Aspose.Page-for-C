#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsInterfaces.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsMatrix; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPathGeometry; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

class ITransformable : public virtual System::Object
{
    typedef ITransformable ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

class ITransformableElement : public Aspose::Page::Xps::XpsModel::ITransformable
{
    typedef ITransformableElement ThisType;
    typedef Aspose::Page::Xps::XpsModel::ITransformable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual System::SharedPtr<XpsMatrix> get_RenderTransform() = 0;
    virtual void set_RenderTransform(System::SharedPtr<XpsMatrix> value) = 0;
    
};

class ITransformableProperty : public Aspose::Page::Xps::XpsModel::ITransformable
{
    typedef ITransformableProperty ThisType;
    typedef Aspose::Page::Xps::XpsModel::ITransformable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual System::SharedPtr<XpsMatrix> get_Transform() = 0;
    virtual void set_Transform(System::SharedPtr<XpsMatrix> value) = 0;
    
};

class IClippable : public virtual System::Object
{
    typedef IClippable ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual System::SharedPtr<XpsPathGeometry> get_Clip() = 0;
    virtual void set_Clip(System::SharedPtr<XpsPathGeometry> value) = 0;
    
};

class IXpsVisualElement : public virtual System::Object
{
    typedef IXpsVisualElement ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


