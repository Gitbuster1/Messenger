/* Macros for the header version.
 */

#ifndef VIPS_VERSION_H
#define VIPS_VERSION_H

#define VIPS_VERSION		"8.13.0"
#define VIPS_VERSION_STRING	"8.13.0-Thu Jul 21 13:59:28 UTC 2022"
#define VIPS_MAJOR_VERSION	(8)
#define VIPS_MINOR_VERSION	(13)
#define VIPS_MICRO_VERSION	(0)

/* The ABI version, as used for library versioning.
 */
#define VIPS_LIBRARY_CURRENT	(57)
#define VIPS_LIBRARY_REVISION	(0)
#define VIPS_LIBRARY_AGE	(15)

#define VIPS_CONFIG		"enable debug: no, enable deprecated library components: yes, enable modules: no, use fftw3 for FFT: no, accelerate loops with orc: no, ICC profile support with lcms: yes (lcms2), zlib: yes, text rendering with pangocairo: no, font file support with fontconfig: , RAD load/save: yes, Analyze7 load/save: yes, PPM load/save: yes, GIF load:  yes, GIF save with cgif: no, EXIF metadata support with libexif: yes, JPEG load/save with libjpeg: yes (pkg-config), JXL load/save with libjxl: no (dynamic module: no), JPEG2000 load/save with libopenjp2: yes, PNG load with libspng: no, PNG load/save with libpng: yes (pkg-config libpng >= 1.2.9), selected quantisation package: , TIFF load/save with libtiff: yes (pkg-config libtiff-4), image pyramid save: no, HEIC/AVIF load/save with libheif: no (dynamic module: no), WebP load/save with libwebp: yes, PDF load with PDFium:  no, PDF load with poppler-glib: no (dynamic module: no), SVG load with librsvg-2.0: yes, EXR load with OpenEXR: yes, OpenSlide load: no (dynamic module: no), Matlab load with matio: no, NIfTI load/save with niftiio: no, FITS load/save with cfitsio: no, Magick package: MagickCore (dynamic module: no), Magick API version: magick6, load with libMagickCore: yes, save with libMagickCore: yes"

/* Not really anything to do with versions, but this is a handy place to put
 * it.
 */
#define VIPS_ENABLE_DEPRECATED 1

#endif /*VIPS_VERSION_H*/
