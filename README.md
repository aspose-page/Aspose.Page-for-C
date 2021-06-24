# C++ Library for XPS, PS & EPS Files

[Aspose.Page for C++](https://products.aspose.com/page/cpp) is an on premise C++ API that allows you to add XPS manipulation features to your own applications. The API also supports to convert XPS, EPS & PS documents to other formats.

<p align="center">
  <a title="Download ZIP" href="https://github.com/aspose-page/Aspose.Page-for-c/archive/master.zip">
    <img src="http://i.imgur.com/hwNhrGZ.png" />
  </a>
</p>

Directory | Description
--------- | -----------
[Examples](Examples)  | A collection of C++ examples that help you learn and explore the API features



## XPS Processing Features

- Create and [edit XPS documents](https://docs.aspose.com/page/cpp/add-text-in-xps-document/).
- Add or remove [pages of XPS document](https://docs.aspose.com/page/cpp/add-pages-to-xps-document/).
- Create vector graphics shapes (Path element) using a set of primitives (elliptical arcs, Bezier curve segments, and straight-line segments).
- Create text strings (Glyphs element).
- Group elements (Canvas element) to manipulate a group as a whole.
- [Supports brushes of various types](https://docs.aspose.com/page/cpp/add-grid-using-visual-brush/), such as, solid color brush, image brush, visual brush, etc.
- Supports different color spaces including `sRGB`, `scRGB` and any space-based on `ICC` profile.
- Works for multiple documents inside an XPS document.
- Add default print tickets into new XPS document or preserve print tickets in opened `XPS`.
- Save XPS documents in various [supported file formats](https://docs.aspose.com/page/cpp/supported-file-formats/).

## Save XPS as

PDF, BMP, TIFF, JPEG, PNG

# Save EPS & PS as

PDF, BMP, TIFF, JPEG, PNG, EMF, WMF, GIF

## Platform Independence

Aspose.Page for C++ is a native library. It supports 32-bit & 64-bit operating systems.

## Get Started with Aspose.Page for C++

Are you ready to give Aspose.Page for C++ a try? Simply execute `Install-Package Aspose.Page.Cpp` from Package Manager Console in Visual Studio to fetch the NuGet package. If you already have Aspose.Page for C++ and want to upgrade the version, please execute `Update-Package Aspose.Page.Cpp` to get the latest version.

## Insert Pages in XPS Document

```cpp
// create new XPS file
auto doc = System::MakeObject<XpsDocument>(u"template.xps");
// add empty page at end
doc->AddPage();
// insert an empty page at beginning of pages list
doc->InsertPage(1, true);
// save resultant XPS document
doc->Save(u"output.xps");
```

[Home](https://www.aspose.com/) | [Product Page](https://products.aspose.com/page/cpp) | [Docs](https://docs.aspose.com/page/cpp/) | [Demos](https://products.aspose.app/page/family) | [API Reference](https://apireference.aspose.com/page/cpp) | [Examples](https://github.com/aspose-page/Aspose.Page-for-C) | [Blog](https://blog.aspose.com/category/page/) | [Search](https://search.aspose.com/) | [Free Support](https://forum.aspose.com/c/page) |  [Temporary License](https://purchase.aspose.com/temporary-license)

