#pragma once
// Copyright (c) 2001-2024 Aspose Pty Ltd. All Rights Reserved.

#include <system/idisposable.h>

#include "Aspose.Page.Cpp/Plugins/IPlugin.h"
#include "Aspose.Page.Cpp/aspose_page_api_defs.h"

namespace Aspose
{
namespace Page
{
namespace Plugins
{
class IPluginOptions;
class ResultContainer;
class XpsConverterToImageOptions;
class XpsConverterToPdfOptions;
} // namespace Plugins
namespace XPS
{
namespace Presentation
{
namespace Image
{
class ImageSaveOptions;
} // namespace Image
namespace Pdf
{
class PdfSaveOptions;
} // namespace Pdf
} // namespace Presentation
} // namespace XPS
} // namespace Page
} // namespace Aspose

namespace Aspose {

namespace Page {

namespace Plugins {

/*/// <summary>
    /// Represents XpsConverter plugin.
    /// </summary>
    /// <example>
    /// The example demonstrates how to convert XPS to PDF document file.
    /// <code lang="C#">
    /// // create XpsConverter
    /// var converter = new XpsConverter();
    /// // create XpsConverterToPdfOptions object to set output data type as file
    /// var opt = new XpsConverterToPdfOptions();
    /// // add input file path
    /// opt.AddDataSource(new FileDataSource(inputPath));
    /// // set output file path
    /// opt.AddSaveDataSource(new FileDataSource(outputPath));
    /// ResultContainer results = converter.Process(opt);
    /// </code> 
    /// </example>    
    /// <example>
    /// The example demonstrates how to convert XPS to image with file output.
    /// <code lang="C#">
    /// // create XpsConverter
    /// var converter = new XpsConverter();
    /// // create XpsConverterToImageOptions with JPEG target image format. The default image format for resulting image is PNG.
    /// // Also we can set a size of the resulting image, a resolution, a smoothing mode and JPEG quality level for JPEG resulting image format.
    /// var opt = new XpsConverterToImageOptions(ImageFormat.Jpeg);
    /// // add input file path
    /// opt.AddDataSource(new FileDataSource(inputPath));
    /// // set output file path
    /// // if input XPS file is multipaged the results will be a set of image files with name: ["outputPath" without extension][pageNumber started from 1].[extension from "outputPath"]
    /// opt.AddSaveDataSource(new FileDataSource(outputPath));
    /// ResultContainer results = converter.Process(opt);
    /// </code> 
    /// </example>
    /// <example>
    /// The example demonstrates how to convert XPS to image with bytes arrays output.
    /// In the bytes arrays output datasource (byte [][]) one bytes array contains an image of one page. Thus, for one-paged documents the result will contain [1][] array,
    /// for multi-paged documents the result will contain [number of pages in input XPS document][] array.
    /// <code lang="C#">
    /// // create XpsConverter
    /// var converter = new XpsConverter();
    /// // create XpsConverterToImageOptions with JPEG target image format. The default image format for resulting image is PNG.
    /// // Also we can set a size of the resulting image, a resolution, a smoothing mode and JPEG quality level for JPEG resulting image format.
    /// var opt = new XpsConverterToImageOptions(ImageFormat.Jpeg);
    /// // add input file path
    /// opt.AddDataSource(new FileDataSource(inputPath));
    /// // set output file path
    /// // if input XPS file is multipaged the results will be a set of image files with name: ["outputPath" without extension][pageNumber started from 0].[extension from "outputPath"]
    /// opt.AddSaveDataSource(new ByteArrayDataSource());
    /// ResultContainer results = converter.Process(opt);
    /// //Get resulting bytes arrays
    /// byte[][] imagesBytes = (byte [][]) ((ByteArrayResult)results.ResultCollection[0]).Data;
    /// </code> 
    /// </example>*/
class ASPOSE_PAGE_SHARED_CLASS XpsConverter : public Aspose::Page::Plugins::IPlugin, public System::IDisposable
{
    typedef XpsConverter ThisType;
    typedef Aspose::Page::Plugins::IPlugin BaseType;
    typedef System::IDisposable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    ASPOSE_PAGE_SHARED_RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Starts the XpsConverter processing with the specified parameters.
    /// </summary>
    /// <param name="options">An options object containing instructions for the XpsConverter.</param>
    /// <returns>An ResultContainer object containing the result of the operation.</returns>
    /// <exception cref="NotSupportedException"></exception>
    ASPOSE_PAGE_SHARED_API System::SharedPtr<ResultContainer> Process(System::SharedPtr<IPluginOptions> options) override;
    /// <summary>
    /// Implementation of IDisposable.
    /// </summary>
    ASPOSE_PAGE_SHARED_API void Dispose() override;
    
private:

    System::SharedPtr<ResultContainer> Convert(System::SharedPtr<XpsConverterToPdfOptions> options);
    System::SharedPtr<Aspose::Page::XPS::Presentation::Pdf::PdfSaveOptions> GetPdfOptionsFromPluginOptions(System::SharedPtr<XpsConverterToPdfOptions> options);
    System::SharedPtr<ResultContainer> Convert(System::SharedPtr<XpsConverterToImageOptions> options);
    System::SharedPtr<Aspose::Page::XPS::Presentation::Image::ImageSaveOptions> GetImageOptionsFromPluginOptions(System::SharedPtr<XpsConverterToImageOptions> options);
    
};

} // namespace Plugins
} // namespace Page
} // namespace Aspose


