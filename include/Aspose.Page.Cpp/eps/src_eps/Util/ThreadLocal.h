#pragma once

#include <system/threading/thread.h>
#include <system/object.h>
#include <system/multicast_delegate.h>
#include <system/idisposable.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/collections/dictionary.h>
#include <cstdint>

namespace Aspose {

namespace Page {

namespace EPS {

namespace Util {

/// <summary>
/// Class used to duplicate the functionality provided by the .NET Framework 4.0 and 4.5's System.Threading.ThreadLocal wrapper type.
/// This implements instance and static types that are thread local and refer to different instances across threads, even though the actual 
/// instance type that the class is a aggregate of might be the same.
/// </summary>
/// <typeparam name="T">Variable type to wrap in thread selection logic</typeparam>
template<typename T>
class ThreadLocal : public System::IDisposable
{
    typedef ThreadLocal<T> ThisType;
    typedef System::IDisposable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
    
    template<typename FT0> friend class Aspose::Page::EPS::Util::ThreadLocal;
    
public:

    using Factory = System::MulticastDelegate<T()>;
    
    
public:

    T get_Value()
    {
        
        {
            System::LockContext __guard(threadData.GetPointer());
            if (!threadData->ContainsKey(System::Threading::Thread::get_CurrentThread()->get_ManagedThreadId()))
            {
                threadData->Add(System::Threading::Thread::get_CurrentThread()->get_ManagedThreadId(), factory());
            }
            
            return threadData->idx_get(System::Threading::Thread::get_CurrentThread()->get_ManagedThreadId());
        }
    }
    
    void set_Value(T value)
    {
        
        {
            System::LockContext __guard(threadData.GetPointer());
            threadData->idx_set(System::Threading::Thread::get_CurrentThread()->get_ManagedThreadId(), value);
        }
    }
    
    bool isValueCreated()
    {
        return threadData->ContainsKey(System::Threading::Thread::get_CurrentThread()->get_ManagedThreadId());
    }
    
    ThreadLocal(Factory fact) : threadData(System::MakeObject<System::Collections::Generic::Dictionary<int32_t, T>>())
    {
        this->factory = fact;
    }
    
    static T to_T(System::SharedPtr<ThreadLocal<T>> source)
    {
        return source->get_Value();
    }
    
    void Dispose() override
    {
        threadData.reset();
    }
    
    void SetTemplateWeakPtr(uint32_t argument) override
    {
        switch (argument)
        {
            case 0:
                System::Details::CollectionHelpers::SetWeakPointer(0, threadData);
                System::Details::CollectionHelpers::SetWeakPointer(0, factory);
                break;
                
        }
    }
    
private:

    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, T>> threadData;
    Factory factory;
    
};

} // namespace Util
} // namespace EPS
} // namespace Page
} // namespace Aspose


