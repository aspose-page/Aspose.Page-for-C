#pragma once

#include <system/shared_ptr.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <cstdint>

#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace System
{
namespace IO
{
class Stream;
} // namespace IO
} // namespace System

namespace Aspose {

namespace EPS {

namespace Util {

class ASPOSE_PAGE_SHARED_CLASS ByteStreamToBitEnumerable : public System::Collections::Generic::IEnumerable<bool>, public System::Collections::Generic::IEnumerator<bool>
{
    typedef ByteStreamToBitEnumerable ThisType;
    typedef System::Collections::Generic::IEnumerable<bool> BaseType;
    typedef System::Collections::Generic::IEnumerator<bool> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    CODEPORTING_ENUMERATOR_ITERATOR_METHODS_DECLARATION(CODEPORTING_ARGS(bool), ASPOSE_PAGE_SHARED_API);
    
public:

    ASPOSE_PAGE_SHARED_API bool get_Current() const override;
    
    ASPOSE_PAGE_SHARED_API ByteStreamToBitEnumerable(System::SharedPtr<System::IO::Stream> in);
    
    ASPOSE_PAGE_SHARED_API bool MoveNext() override;
    ASPOSE_PAGE_SHARED_API void Reset() override;
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::IEnumerator<bool>> GetEnumerator() override;
    
protected:

    virtual ASPOSE_PAGE_SHARED_API ~ByteStreamToBitEnumerable();
    
private:

    System::SharedPtr<System::IO::Stream> in;
    uint8_t current;
    int64_t read;
    int64_t length;
    int32_t bitIndex;
    bool currentBit;
    
    bool hasNext();
    void ReadNextByte();
    ASPOSE_PAGE_SHARED_API bool MoveNextImplementation();
    ASPOSE_PAGE_SHARED_API bool* GetCurrentElementPointer();
    
};

} // namespace Util
} // namespace EPS
} // namespace Aspose


