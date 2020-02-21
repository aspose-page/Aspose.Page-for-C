#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/constraints.h>
#include <system/collections/list.h>
#include <system/collections/ienumerable.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsElement.h"

namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPathFigure; } } } }
namespace Aspose { namespace Page { namespace Xps { namespace XpsModel { class XpsPathGeometry; } } } }

namespace Aspose {

namespace Page {

namespace Xps {

namespace XpsModel {

/// <summary>
/// Class incapsulating list property values features like 
/// PathGeometry's list of PathFigures, PathFigure's list of Segments or
/// gradient brush's list of gradient stops.
/// </summary>
/// <typeparam name="T">Any class extending <see cref="XpsElement"/>.</typeparam>
template<typename T>
class XpsList : public System::Collections::Generic::IEnumerable<T>
{
    typedef XpsElement BaseT_XpsElement;
    assert_is_base_of(BaseT_XpsElement, T);
    
    typedef XpsList<T> ThisType;
    typedef System::Collections::Generic::IEnumerable<T> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Page::Xps::XpsModel::XpsPathFigure;
    friend class Aspose::Page::Xps::XpsModel::XpsPathGeometry;
    
public:

    /// <summary>
    /// Returns number of items in the list.
    /// </summary>
    int32_t get_Count()
    {
        return _list->get_Count();
    }
    
    /// <summary>
    /// Creates a new instance of list.
    /// </summary>
    XpsList()
    {
        _list = System::MakeObject<System::Collections::Generic::List<T>>();
    }
    
    /// <summary>
    /// Adds a new <paramref name="item"/> to the list.
    /// </summary>
    /// <param name="item">Item to add.</param>
    /// <returns>Added item.</returns>
    T Add(T item)
    {
        if (_base != nullptr)
        {
            _base->Add(item);
            item->set_Parent(_base);
        }
        _list->Add(item);
        
        return item;
    }
    
    /// <summary>
    /// Adds a new <paramref name="item"/> to the list at <paramref name="index"/> position.
    /// </summary>
    /// <param name="index">Position for the item to be inserted at.</param>
    /// <param name="item">Item to be inserted.</param>
    /// <returns>Inserted item.</returns>
    T Insert(int32_t index, T item)
    {
        if (_base != nullptr)
        {
            _base->Insert(index, item);
            item->set_Parent(_base);
        }
        _list->Insert(index, item);
        
        return item;
    }
    
    /// <summary>
    /// Removes <paramref name="item"/> from the list.
    /// </summary>
    /// <param name="item">Item to be removed.</param>
    /// <returns>Removed item.</returns>
    T Remove(T item)
    {
        if (_list->Remove(item))
        {
            if (_base != nullptr)
            {
                _base->Remove(item);
                item->set_Parent(nullptr);
            }
            return item;
        }
        
        return nullptr;
    }
    
    /// <summary>
    /// Removes item from the list at <paramref name="index"/> position.
    /// </summary>
    /// <param name="index">Position for the item to be removed at.</param>
    /// <returns>Remover item.</returns>
    T RemoveAt(int32_t index)
    {
        T item = _list->idx_get(index);
        if (_base != nullptr)
        {
            _base->RemoveAt(index);
            item->set_Parent(nullptr);
        }
        _list->RemoveAt(index);
        
        return item;
    }
    
    /// <summary>
    /// Provides access to list items by index.
    /// </summary>
    /// <param name="i">Position of the item to get access to.</param>
    /// <returns>Item at <paramref name="i"/> postion.</returns>
    T idx_get(int32_t i)
    {
        return _list->idx_get(i);
    }
    
    /// <summary>
    /// Implementation of <see cref="System::Collections::Generic::IEnumerable{T}"/> interface.
    /// </summary>
    /// <returns>Returns enumerator for the list.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<T>> GetEnumerator()
    {
        return _list->GetEnumerator();
    }
    
    void SetTemplateWeakPtr(unsigned int argument) override
    {
        switch (argument)
        {
            case 0:
                System::Details::CollectionHelpers::SetWeakPointer(0, _list);
                break;
        }
    }
    
protected:

    XpsList(System::SharedPtr<XpsElement> baseElement, System::SharedPtr<System::Collections::Generic::List<T>> list)
    {
        _base = baseElement;
        _list = list;
    }
    
    XpsList(System::SharedPtr<XpsElement> baseElement)
    {
        _base = baseElement;
        _list = System::MakeObject<System::Collections::Generic::List<T>>();
    }
    
    System::SharedPtr<XpsList<T>> BindToBase(System::SharedPtr<XpsElement> baseElement)
    {
        _base = baseElement;
        
        {
            auto i_enumerator = (_list)->GetEnumerator();
            decltype(i_enumerator->get_Current()) i;
            while (i_enumerator->MoveNext() && (i = i_enumerator->get_Current(), true))
            {
                _base->Add(i);
            }
        }
        
        return System::MakeSharedPtr(this);
    }
    
    System::SharedPtr<XpsList<T>> BindTo(System::SharedPtr<XpsElement> baseElement)
    {
        
        {
            auto e_enumerator = (baseElement)->GetEnumerator();
            decltype(e_enumerator->get_Current()) e;
            while (e_enumerator->MoveNext() && (e = e_enumerator->get_Current(), true))
            {
                _list->Add(System::StaticCast<typename T::Pointee_>(e));
            }
        }
        return System::MakeSharedPtr(this);
    }
    
    System::Object::shared_members_type GetSharedMembers() override
    {
        auto result = System::Object::GetSharedMembers();
        
        result.Add("Aspose::Page::Xps::XpsModel::XpsList::_base", this->_base);
        result.Add("Aspose::Page::Xps::XpsModel::XpsList::_list", this->_list);
        
        return result;
    }
    
    
    
private:

    System::SharedPtr<XpsElement> _base;
    System::SharedPtr<System::Collections::Generic::List<T>> _list;
    
};

} // namespace XpsModel
} // namespace Xps
} // namespace Page
} // namespace Aspose


