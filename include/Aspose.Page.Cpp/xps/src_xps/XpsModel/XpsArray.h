#pragma once

#include <system/object_ext.h>
#include <system/exceptions.h>
#include <system/enumerator_adapter.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/constraints.h>
#include <system/collections/list.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsObject.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsContext/XpsContext.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsDocumentVisitor.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace Tests
{
class XpsCanvasTests;
class XpsGlyphsTests;
class XpsPathFigureTests;
class XpsPathGeometryTests;
class XpsPathTests;
} // namespace Tests
namespace XpsModel
{
class XpsPathFigure;
class XpsPathGeometry;
template <typename> class XpsProperty;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace XpsModel {

/// <summary>
/// Class incapsulating common XPS model array object features.
/// </summary>
/// <typeparam name="T">The type of array elements.</typeparam>
template<typename T>
class XpsArray : public Aspose::Page::XPS::XpsModel::XpsObject
{
    typedef XpsObject BaseT_XpsObject;
    assert_is_base_of(BaseT_XpsObject, T);
    
    typedef XpsArray<T> ThisType;
    typedef Aspose::Page::XPS::XpsModel::XpsObject BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
    
    friend class Aspose::Page::XPS::XpsModel::XpsPathFigure;
    friend class Aspose::Page::XPS::XpsModel::XpsPathGeometry;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsProperty;
    friend class Aspose::Page::XPS::Tests::XpsCanvasTests;
    friend class Aspose::Page::XPS::Tests::XpsGlyphsTests;
    friend class Aspose::Page::XPS::Tests::XpsPathTests;
    friend class Aspose::Page::XPS::Tests::XpsPathGeometryTests;
    friend class Aspose::Page::XPS::Tests::XpsPathFigureTests;
    template<typename FT0> friend class Aspose::Page::XPS::XpsModel::XpsArray;
    
public:

    /// <summary>
    /// Returns number of elements.
    /// </summary>
    int32_t get_Count()
    {
        AssertObject();
        return _array->get_Count();
    }
    
    /// <summary>
    /// Adds a new object into array.
    /// </summary>
    /// <param name="obj">The object to add.</param>
    /// <returns>Added object.</returns>
    T Add(T obj)
    {
        AssertObject();
        obj->AssertObject();
        _context->Restrict(get_Count() + 1);
        
        _array->Add(obj);
        
        return obj;
    }
    
    /// <summary>
    /// Removes an object from array.
    /// </summary>
    /// <param name="obj">The object to remove.</param>
    /// <returns>Removed object.</returns>
    T Remove(T obj)
    {
        AssertObject();
        obj->AssertObject();
        
        _array->Remove(obj);
        
        return obj;
    }
    
    /// <summary>
    /// Inserts a new object into array at specified position.
    /// </summary>
    /// <param name="index">The position to insert an object at.</param>
    /// <param name="obj">The object to insert.</param>
    /// <returns>Inserted object.</returns>
    T Insert(int32_t index, T obj)
    {
        AssertObject();
        obj->AssertObject();
        _context->Restrict(get_Count() + 1);
        if (index < 0 || index > get_Count())
        {
            throw System::IndexOutOfRangeException(System::String(u"Index out of range: ") + index + u".");
        }
        
        _array->Insert(index, obj);
        
        return obj;
    }
    
    /// <summary>
    /// Removes an object from array at specified position.
    /// </summary>
    /// <param name="index">The position to remove an object at.</param>
    /// <returns>Removed object.</returns>
    T RemoveAt(int32_t index)
    {
        AssertObject();
        _context->Restrict(index);
        if (index < 0 || index >= get_Count())
        {
            throw System::IndexOutOfRangeException(System::String(u"Index out of range: ") + index + u".");
        }
        
        T obj = _array->idx_get(index);
        _array->RemoveAt(index);
        
        return obj;
    }
    
    /// <summary>
    /// Provides access to array's element by index <paramref name="i"></paramref>.
    /// </summary>
    /// <param name="i">Index of the element.</param>
    /// <returns>The element at <paramref name="i"></paramref> position.</returns>
    T idx_get(int32_t i)
    {
        AssertObject();
        _context->Restrict(i + 1);
        if (i < 0 || i >= get_Count())
        {
            throw System::IndexOutOfRangeException(System::String(u"Index out of range: ") + i + u".");
        }
        
        return _array->idx_get(i);
    }
    
    void SetTemplateWeakPtr(uint32_t argument) override
    {
        switch (argument)
        {
            case 0:
                System::Details::CollectionHelpers::SetWeakPointer(0, _array);
                break;
                
        }
    }
    
protected:

    System::SharedPtr<System::Collections::Generic::List<T>> get_Array() const
    {
        return _array;
    }
    
    XpsArray(System::SharedPtr<XpsContext> context) : Aspose::Page::XPS::XpsModel::XpsObject(context)
        , _array(System::MakeObject<System::Collections::Generic::List<T>>())
    {
    }
    
    void CloneObjects(System::SharedPtr<XpsArray<T>> array)
    {
        for (auto&& obj : array->_array)
        {
            Add(System::ExplicitCast<T>(obj->Clone(true, _context)));
        }
    }
    
    void Accept(System::SharedPtr<XpsDocumentVisitor> visitor) override
    {
        for (auto&& obj : _array)
        {
            obj->Accept(visitor);
        }
    }
    
    void Dispose() override
    {
        for (auto&& obj : _array)
        {
            obj->Dispose();
        }
        Aspose::Page::XPS::XpsModel::XpsObject::Dispose();
    }
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<T>> _array;
    
};

} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose


