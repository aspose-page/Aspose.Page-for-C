#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/object_ext.h>
#include <system/constraints.h>
#include <system/collections/list.h>
#include <system/collections/icollection.h>
#include <cstdint>

#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsPage.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsHyperlinkTarget.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsHyperlinkElement.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsElement.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsModel/XpsContentElement.h"
#include "Aspose.Page.Cpp/xps/src_xps/XpsDocument.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace XPS
{
namespace XpsModel
{
class XpsHyperlinkElement;
} // namespace XpsModel
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace XPS {

namespace Features {

/// <summary>
/// The <b>Aspose.Page.Xps.Features</b> namespace provides features beyond the XPS specification.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// The class provides collecting hyperlinked XPS elements from the current page of an XPS document.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS HyperlinkCollector
{
    typedef HyperlinkCollector ThisType;
    
public:

    /// <summary>
    /// Collects XPS elements with hyperlinks of all types.
    /// </summary>
    /// <param name="document">The XPS document.</param>
    /// <returns>The collection containing hyperlinked XPS elements.</returns>
    static ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsHyperlinkElement>>> CollectHyperlinks(System::SharedPtr<XpsDocument> document);
    /// <summary>
    /// Collects XPS elements with hyperlinks of a certain type.
    /// </summary>
    /// <typeparam name="T">The type of the hyperlink target object.</typeparam>
    /// <param name="document">The XPS document.</param>
    /// <returns>The collection containing hyperlinked XPS elements.</returns>
    template <typename T>
    static System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsHyperlinkElement>>> CollectHyperlinks(System::SharedPtr<XpsDocument> document)
    {
        typedef XpsModel::XpsHyperlinkTarget BaseT_XpsHyperlinkTarget;
        assert_is_base_of(BaseT_XpsHyperlinkTarget, T);
        
        System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<XpsModel::XpsHyperlinkElement>>> collection = System::MakeObject<System::Collections::Generic::List<System::SharedPtr<XpsModel::XpsHyperlinkElement>>>();
        CollectHyperlinksInternal<T>(document->get_Page(), collection);
        
        return collection;
    }
    
    
private:

    template <typename T>
    static void CollectHyperlinksInternal(System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsElement> element, System::SharedPtr<System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Page::XPS::XpsModel::XpsHyperlinkElement>>> collection)
    {
        typedef XpsModel::XpsHyperlinkTarget BaseT_XpsHyperlinkTarget;
        assert_is_base_of(BaseT_XpsHyperlinkTarget, T);
        
        for (int32_t i = 0; i < element->get_Count(); i++)
        {
            System::SharedPtr<XpsModel::XpsHyperlinkTarget> target = element->idx_get(i)->get_HyperlinkTarget();
            if (target != nullptr && System::ObjectExt::Is<T>(target))
            {
                collection->Add(element->idx_get(i));
            }
            if (element->idx_get(i)->get_Count() > 0)
            {
                CollectHyperlinksInternal<T>(element->idx_get(i), collection);
            }
        }
    }
    
    
public:
    HyperlinkCollector() = delete;
};

} // namespace Features
} // namespace XPS
} // namespace Page
} // namespace Aspose


