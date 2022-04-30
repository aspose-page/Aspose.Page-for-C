#pragma once
// Copyright (c) 2001-2022 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace XpsModel
{
class XpsMatrix;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {

class ITransformableProperty : public virtual System::Object
{
    typedef ITransformableProperty ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual System::SharedPtr<XpsMatrix> get_Transform() = 0;
    virtual void set_Transform(System::SharedPtr<XpsMatrix> value) = 0;
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


