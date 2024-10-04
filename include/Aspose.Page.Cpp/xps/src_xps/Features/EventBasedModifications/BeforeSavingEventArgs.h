#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/constraints.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/Features/EventBasedModifications/IModificationAPI.h"

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
} // namespace Presentation
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace Features {

namespace EventBasedModifications {

/// <summary>
/// Defines the base class for arguments of various before-saving events.
/// </summary>
/// <typeparam name="T">The modification API type.</typeparam>
template<typename T>
class BeforeSavingEventArgs : public System::Object
{
    typedef IModificationAPI BaseT_IModificationAPI;
    assert_is_base_of(BaseT_IModificationAPI, T);
    
    typedef BeforeSavingEventArgs<T> ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
    
    friend class Aspose::Page::XPS::Presentation::Aps::ApsConverter;
    template<typename FT0> friend class Aspose::Page::XPS::Features::EventBasedModifications::BeforeSavingEventArgs;
    
public:

    /// <summary>
    /// Gets the modification API of the element that is about to be saved.
    /// </summary>
    T get_ElementAPI() const
    {
        return _api;
    }
    
    /// <summary>
    /// The current document number within the XPS package.
    /// </summary>
    int32_t get_DocumentNumber() const
    {
        return _documentNumber;
    }
    
    /// <summary>
    /// The current page number relative to the current document within the XPS package.
    /// </summary>
    int32_t get_RelativePageNumber() const
    {
        return _relativePageNumber;
    }
    
    /// <summary>
    /// The current absolute page number across all documents within the XPS package.
    /// </summary>
    int32_t get_AbsolutePageNumber() const
    {
        return _absolutePageNumber;
    }
    
    /// <summary>
    /// The current output number. It differs from <b>AbsolutePageNumber</b> if the <b>PageNumbers</b> save option is specified.
    /// </summary>
    int32_t get_OutputPageNumber() const
    {
        return _outputPageNumber;
    }
    
    void SetTemplateWeakPtr(uint32_t argument) override
    {
        switch (argument)
        {
            case 0:
                System::Details::CollectionHelpers::SetWeakPointer(_api);
                break;
                
        }
    }
    
protected:

    BeforeSavingEventArgs(T api, int32_t documentNumber, int32_t relativePageNumber, int32_t absolutePageNumber, int32_t outputPageNumber)
        : _api(T()), _documentNumber(0), _relativePageNumber(0), _absolutePageNumber(0), _outputPageNumber(0)
    {
        _api = api;
        _documentNumber = documentNumber;
        _relativePageNumber = relativePageNumber;
        _absolutePageNumber = absolutePageNumber;
        _outputPageNumber = outputPageNumber;
    }
    
    MEMBER_FUNCTION_MAKE_OBJECT(BeforeSavingEventArgs, CODEPORTING_ARGS(T api, int32_t documentNumber, int32_t relativePageNumber, int32_t absolutePageNumber, int32_t outputPageNumber), CODEPORTING_ARGS(api,documentNumber,relativePageNumber,absolutePageNumber,outputPageNumber));
    
private:

    T _api;
    int32_t _documentNumber;
    int32_t _relativePageNumber;
    int32_t _absolutePageNumber;
    int32_t _outputPageNumber;
    
};

} // namespace EventBasedModifications
} // namespace Features
} // namespace XPS
} // namespace Page
} // namespace Aspose


