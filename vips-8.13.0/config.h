/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* define to build deprecated components */
#define ENABLE_DEPRECATED 1

/* define to enable load with libMagick */
#define ENABLE_MAGICKLOAD 1

/* define to enable save with libMagick */
#define ENABLE_MAGICKSAVE 1

/* define to enable loadable module support. */
/* #undef ENABLE_MODULES */

/* always defined to indicate that i18n is enabled */
/* #undef ENABLE_NLS */

/* The prefix for our gettext translation domains. */
#define GETTEXT_PACKAGE "vips8.13"

/* Domain for glib logging messages. */
#define G_LOG_DOMAIN "VIPS"

/* Define to 1 if you have the `AcquireExceptionInfo' function. */
#define HAVE_ACQUIREEXCEPTIONINFO 1

/* Define to 1 if you have the `AcquireImage' function. */
#define HAVE_ACQUIREIMAGE 1

/* define to build analyze support. */
#define HAVE_ANALYZE 1

/* have asinh() in libm. */
#define HAVE_ASINH 1

/* have atan2() in libm. */
#define HAVE_ATAN2 1

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
#define HAVE_BIND_TEXTDOMAIN_CODESET 1

/* Define to 1 if you have the `BlobToStringInfo' function. */
#define HAVE_BLOBTOSTRINGINFO 1

/* have cbrt() in libm. */
#define HAVE_CBRT 1

/* define if you have cfitsio installed. */
/* #undef HAVE_CFITSIO */

/* Define to 1 if you have the Mac OS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
/* #undef HAVE_CFLOCALECOPYCURRENT */

/* Define to 1 if you have the Mac OS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
/* #undef HAVE_CFPREFERENCESCOPYAPPVALUE */

/* define if you have cgif >= 0.2.0 installed. */
/* #undef HAVE_CGIF */

/* define if your Magick has CMYColorspace. */
#define HAVE_CMYCOLORSPACE 1

/* Define to 1 if you have the `dcgettext' function. */
/* #undef HAVE_DCGETTEXT */

/* Define to 1 if you have the <direct.h> header file. */
/* #undef HAVE_DIRECT_H */

/* Define to 1 if you have the <dirent.h> header file, and it defines `DIR'.
   */
#define HAVE_DIRENT_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you don't have `vprintf' but do have `_doprnt.' */
/* #undef HAVE_DOPRNT */

/* define if you have libexif >= 0.6 installed. */
#define HAVE_EXIF 1

/* define if you have libexif >= 0.6.22 */
#define HAVE_EXIF_0_6_22 1

/* define if you have libexif >= 0.6.23 */
#define HAVE_EXIF_0_6_23 1

/* Define to 1 if you have the <expat.h> header file. */
/* #undef HAVE_EXPAT_H */

/* define if you have fftw3 installed. */
/* #undef HAVE_FFTW */

/* define if you have fontconfig installed. */
/* #undef HAVE_FONTCONFIG */

/* define if your GetImageMagick() takes three arguments. */
#define HAVE_GETIMAGEMAGICK3 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the `GetVirtualPixels' function. */
#define HAVE_GETVIRTUALPIXELS 1

/* define if you have libgsf-1 installed. */
/* #undef HAVE_GSF */

/* define if your libgsf supports deflate-level. */
/* #undef HAVE_GSF_DEFLATE_LEVEL */

/* define if your libgsf supports zip64. */
/* #undef HAVE_GSF_ZIP64 */

/* define if your Magick has HCLpColorspace. */
#define HAVE_HCLPCOLORSPACE 1

/* define if you have heif_avif. */
/* #undef HAVE_HEIF_AVIF */

/* define if you have heif_image_handle_get_raw_color_profile. */
/* #undef HAVE_HEIF_COLOR_PROFILE */

/* Define to 1 if you have the `heif_context_set_maximum_image_size_limit'
   function. */
/* #undef HAVE_HEIF_CONTEXT_SET_MAXIMUM_IMAGE_SIZE_LIMIT */

/* define if your libheif has decode support. */
/* #undef HAVE_HEIF_DECODER */

/* define if you have heif_decoding_options.convert_hdr_to_8bit */
/* #undef HAVE_HEIF_DECODING_OPTIONS_CONVERT_HDR_TO_8BIT */

/* define if your libheif has encode support. */
/* #undef HAVE_HEIF_ENCODER */

/* Define to 1 if you have the `heif_image_handle_get_raw_color_profile'
   function. */
/* #undef HAVE_HEIF_IMAGE_HANDLE_GET_RAW_COLOR_PROFILE */

/* define if you have heif_context_set_maximum_image_size_limit. */
/* #undef HAVE_HEIF_SET_MAX_IMAGE_SIZE_LIMIT */

/* have hypot() in libm. */
#define HAVE_HYPOT 1

/* define if you have imagequant installed. */
/* #undef HAVE_IMAGEQUANT */

/* define if you have ImagesToBlob. */
#define HAVE_IMAGESTOBLOB 1

/* define if you have ImportImagePixels. */
#define HAVE_IMPORTIMAGEPIXELS 1

/* Define to 1 if you have the `InheritException' function. */
#define HAVE_INHERITEXCEPTION 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <io.h> header file. */
/* #undef HAVE_IO_H */

/* define if you have libjpeg installed. */
#define HAVE_JPEG 1

/* Define to 1 if you have the `jpeg_c_bool_param_supported' function. */
/* #undef HAVE_JPEG_C_BOOL_PARAM_SUPPORTED */

/* define if your libjpeg has extension parameters. */
/* #undef HAVE_JPEG_EXT_PARAMS */

/* Define to 1 if you have the `JxlEncoderInitBasicInfo' function. */
/* #undef HAVE_JXLENCODERINITBASICINFO */

/* define if you have lcms2 installed. */
#define HAVE_LCMS2 1

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* define if you have libjxl >= 0.5 installed. */
/* #undef HAVE_LIBJXL */

/* define if you have JxlEncoderInitBasicInfo. */
/* #undef HAVE_LIBJXL_JXLENCODERINITBASICINFO */

/* define if you have libopenjp2 >= 2.4 installed. */
#define HAVE_LIBOPENJP2 1

/* define if you have libwebp/libwebpmux/libwebpdemux installed. */
#define HAVE_LIBWEBP 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* define if you have libMagick6 installed. */
#define HAVE_MAGICK6 1

/* define if you have libMagick7 installed. */
/* #undef HAVE_MAGICK7 */

/* Define to 1 if you have the `MagickCoreGenesis' function. */
#define HAVE_MAGICKCOREGENESIS 1

/* define if you have matio installed. */
/* #undef HAVE_MATIO */

/* Define to 1 if you have the `memalign' function. */
#define HAVE_MEMALIGN 1

/* Define to 1 if you have a working `mmap' system call. */
#define HAVE_MMAP 1

/* Define to 1 if you have the <ndir.h> header file, and it defines `DIR'. */
/* #undef HAVE_NDIR_H */

/* Define if you have nifti libraries and header files. */
/* #undef HAVE_NIFTI */

/* define to build nsgif load support. */
#define HAVE_NSGIF 1

/* define if your magick has ImageInfo.number_scenes. */
#define HAVE_NUMBER_SCENES 1

/* define if you have OpenEXR >= 1.2.2 installed. */
#define HAVE_OPENEXR 1

/* define if you have OpenSlide >= 3.3.0 installed. */
/* #undef HAVE_OPENSLIDE */

/* define if you have OpenSlide >= 3.4.0 installed. */
/* #undef HAVE_OPENSLIDE_3_4 */

/* Define to 1 if you have the `OptimizeImageTransparency' function. */
#define HAVE_OPTIMIZEIMAGETRANSPARENCY 1

/* Define to 1 if you have the `OptimizePlusImageLayers' function. */
#define HAVE_OPTIMIZEPLUSIMAGELAYERS 1

/* define if you have orc-0.4.11 or later installed. */
/* #undef HAVE_ORC */

/* define if your orc works with cf-protection. */
/* #undef HAVE_ORC_CF_PROTECTION */

/* Define to 1 if you have the `orc_program_get_error' function. */
/* #undef HAVE_ORC_PROGRAM_GET_ERROR */

/* define if you have pangocairo installed. */
/* #undef HAVE_PANGOCAIRO */

/* define if you have pdfium > 4200. */
/* #undef HAVE_PDFIUM */

/* define if you have libpng installed. */
#define HAVE_PNG 1

/* Define to 1 if you have the `png_set_chunk_malloc_max' function. */
#define HAVE_PNG_SET_CHUNK_MALLOC_MAX 1

/* define if you have poppler-glib >= 0.16.0 and cairo >= 1.2 installed. */
/* #undef HAVE_POPPLER */

/* Define to 1 if you have the `posix_memalign' function. */
#define HAVE_POSIX_MEMALIGN 1

/* define to build ppm support. */
#define HAVE_PPM 1

/* have pthread_setattr_default_np(). */
#define HAVE_PTHREAD_DEFAULT_NP 1

/* define if you have quantizr installed. */
/* #undef HAVE_QUANTIZR */

/* define to build radiance support. */
#define HAVE_RADIANCE 1

/* Define to 1 if you have the `ResetImageAttributeIterator' function. */
#define HAVE_RESETIMAGEATTRIBUTEITERATOR 1

/* Define to 1 if you have the `ResetImageProfileIterator' function. */
#define HAVE_RESETIMAGEPROFILEITERATOR 1

/* Define to 1 if you have the `ResetImagePropertyIterator' function. */
#define HAVE_RESETIMAGEPROPERTYITERATOR 1

/* define if you have librsvg-2.0 >= 2.40.3 and cairo >= 1.2 installed. */
#define HAVE_RSVG 1

/* Define to 1 if you have the `SetImageExtent' function. */
#define HAVE_SETIMAGEEXTENT 1

/* Define to 1 if you have the `SetImageOption' function. */
#define HAVE_SETIMAGEOPTION 1

/* Define to 1 if you have the `SetImageProperty' function. */
#define HAVE_SETIMAGEPROPERTY 1

/* define if you have libspng installed. */
/* #undef HAVE_SPNG */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/dir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_DIR_H */

/* Define to 1 if you have the <sys/file.h> header file. */
#define HAVE_SYS_FILE_H 1

/* Define to 1 if you have the <sys/mman.h> header file. */
#define HAVE_SYS_MMAN_H 1

/* Define to 1 if you have the <sys/ndir.h> header file, and it defines `DIR'.
   */
/* #undef HAVE_SYS_NDIR_H */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* define if you have libtiff installed. */
#define HAVE_TIFF 1

/* define if your libtiff has webp. */
#define HAVE_TIFF_COMPRESSION_WEBP 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if the system has the `vector_size' variable attribute */
#define HAVE_VAR_ATTRIBUTE_VECTOR_SIZE 1

/* define if your C++ can mix vector and scalar arithmetic */
#define HAVE_VECTOR_ARITH 1

/* define if your C++ can shuffle vectors */
#define HAVE_VECTOR_SHUFFLE 1

/* Define to 1 if you have the `vprintf' function. */
#define HAVE_VPRINTF 1

/* Define to 1 if you have the `vsnprintf' function. */
#define HAVE_VSNPRINTF 1

/* define if you have zlib installed. */
#define HAVE_ZLIB 1

/* Define to 1 if you have the `_aligned_malloc' function. */
/* #undef HAVE__ALIGNED_MALLOC */

/* define to build libheif as a dynamically loadable module. */
/* #undef HEIF_MODULE */

/* define to build libjxl as a dynamically loadable module. */
/* #undef LIBJXL_MODULE */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* define to build libMagic as a dynamically loadable module. */
/* #undef MAGICK_MODULE */

/* define to build OpenSlide as a dynamically loadable module. */
/* #undef OPENSLIDE_MODULE */

/* Name of package */
#define PACKAGE "vips"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "vipsip@jiscmail.ac.uk"

/* Define to the full name of this package. */
#define PACKAGE_NAME "vips"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "vips 8.13.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "vips"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "8.13.0"

/* define to build poppler as a dynamically loadable module. */
/* #undef POPPLER_MODULE */

/* Define to 1 if all of the C90 standard headers exist (not just the ones
   required in a freestanding environment). This macro is provided for
   backward compatibility; new code need not use it. */
#define STDC_HEADERS 1

/* libexif includes don't need libexif prefix */
/* #undef UNTAGGED_EXIF */

/* Version number of package */
#define VERSION "8.13.0"

/* default directory for ICC profiles */
#define VIPS_ICC_DIR "/usr/share/color/icc"

/* configure-time library directory */
#define VIPS_LIBDIR "/usr/local/lib"

/* configure-time install prefix */
#define VIPS_PREFIX "/usr/local"

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> does not define. */
/* #undef mode_t */

/* Define to `long int' if <sys/types.h> does not define. */
/* #undef off_t */

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported only directly.  */
#define restrict __restrict__
/* Work around a bug in older versions of Sun C++, which did not
   #define __restrict__ or support _Restrict or __restrict__
   even though the corresponding Sun C compiler ended up with
   "#define restrict _Restrict" or "#define restrict __restrict__"
   in the previous line.  This workaround can be removed once
   we assume Oracle Developer Studio 12.5 (2016) or later.  */
#if defined __SUNPRO_CC && !defined __RESTRICT && !defined __restrict__
# define _Restrict
# define __restrict__
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
