#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <cstdint>

#include "Aspose.Page.Cpp/Plugins/ISaveInstruction.h"
#include "Aspose.Page.Cpp/Plugins/IPluginOptions.h"
#include "Aspose.Page.Cpp/Plugins/IDataContainer.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace Plugins
{
class IDataSource;
class XpsConverter;
class XpsConverterToImageOptions;
class XpsConverterToPdfOptions;
} // namespace Plugins
} // namespace Page
} // namespace Aspose
namespace System
{
namespace Collections
{
namespace Generic
{
template <typename> class List;
} // namespace Generic
} // namespace Collections
namespace IO
{
class Stream;
} // namespace IO
class String;
} // namespace System

namespace Aspose {

namespace Page {

namespace Plugins {

/// <summary>
/// Represents options for <see cref="XpsConverter"></see> plugin.
/// </summary>
class ASPOSE_PAGE_SHARED_CLASS XpsConverterOptions : public Aspose::Page::Plugins::IPluginOptions, public Aspose::Page::Plugins::IDataContainer, public Aspose::Page::Plugins::ISaveInstruction
{
    typedef XpsConverterOptions ThisType;
    typedef Aspose::Page::Plugins::IPluginOptions BaseType;
    typedef Aspose::Page::Plugins::IDataContainer BaseType1;
    typedef Aspose::Page::Plugins::ISaveInstruction BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
    friend class Aspose::Page::Plugins::XpsConverter;
    friend class Aspose::Page::Plugins::XpsConverterToImageOptions;
    friend class Aspose::Page::Plugins::XpsConverterToPdfOptions;
    
public:

    /// <summary>
    /// Returns XpsConverterOptions plugin data collection.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IDataSource>>> get_DataCollection() override;
    /// <summary>
    /// Gets collection of added targets for saving operation results.
    /// </summary>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IDataSource>>> get_SaveTargetsCollection() override;
    /// <summary>
    /// Returns operation name.
    /// </summary>
    virtual ASPOSE_PAGE_SHARED_API System::String get_OperationName();
    /// <summary>
    /// The Quality category specifies the level of compression for an image.
    /// Available values are 0 to 100. 
    /// The lower the number specified, the higher the compression and therefore the lower the quality of the image. 
    /// 0 value results in lowest quality image, while 100 results in highest.
    /// </summary>
    ASPOSE_PAGE_SHARED_API int32_t get_JpegQualityLevel() const;
    /// <summary>
    /// The Quality category specifies the level of compression for an image.
    /// Available values are 0 to 100. 
    /// The lower the number specified, the higher the compression and therefore the lower the quality of the image. 
    /// 0 value results in lowest quality image, while 100 results in highest.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void set_JpegQualityLevel(int32_t value);
    
    /// <summary>
    /// Adds new data source to the XpsConverter plugin data collection.
    /// </summary>
    /// <param name="dataSource">Data source to add.</param>
    ASPOSE_PAGE_SHARED_API void AddDataSource(System::SharedPtr<IDataSource> dataSource) override;
    /// <summary>
    /// Adds new data source to the XpsConverterOptions plugin data collection.
    /// </summary>
    /// <param name="saveDataSource">Data source (file or stream) for saving operation results.</param>
    /// <exception cref="NotImplementedException"></exception>
    ASPOSE_PAGE_SHARED_API void AddSaveDataSource(System::SharedPtr<IDataSource> saveDataSource) override;
    
protected:

    /// <summary>
    /// Initializes new instance of the <see cref="XpsConverterOptions"></see> object.
    /// </summary>
    XpsConverterOptions();
    
    MEMBER_FUNCTION_MAKE_OBJECT_DECLARATION(XpsConverterOptions, CODEPORTING_ARGS());
    System::SharedPtr<System::IO::Stream> GetInputStream(int32_t i);
    System::SharedPtr<System::IO::Stream> GetOutputStream(int32_t i);
    
private:

    int32_t jpegQualityLevel;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IDataSource>>> _dataCollection;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<IDataSource>>> _saveTargetsCollection;
    
};

} // namespace Plugins
} // namespace Page
} // namespace Aspose


