# sill663 drupal demo modules

## Contains

A set of sample content types and taxonomy definitions corresponding to
the simple VRA demo presented in Class.

Append all the admin paths to the base URL of your drupal site to access
the menu options at that path. If you site is http://mydrupalsite.com
the path the content types listings would be
http://mydrupalsite.com/admin/structure/types.


## Content Types Installed by the Module

### Content Types at admin/structure/types

*Work
*Image
*Collection
*License

### Taxonomies at admin/structure/taxonomy

*Image Tags - Free Tags that can be assinged to "Image Content Types"
*Locations - 
*Image Work Types - Work types that can be assigned to the "image"
content type.
*Work Types - Work types that can be assigned to the "work" content
type.

### Sample Importer at admin/structure/feeds

*Flickr Importer - Maps data pulled from flickr into the "Image Content
Type"
  

## To Install

1. Have a functinging Drupal Instance
2. Install the following Drupal Modules
   a. Feeds
   b. Feeds Tamper
   c. Entityapi 
3. Copy these two module directories to sites/all/modules/custom
4. Activate these two modules under the "features" at admin/structure/features
5. Try adding some data. 


## Sample Data Import

A very frief sample CSV import file that can be used as the basis for a
batch import is also included. This file contains
data pulled from Flickr via the Flickr API. The example comes from
collections that are available in Flickr's "Commons"

### To Use

1. Visit the "Feeds" Import  at import/flickr_importer
2. Upload the file "commons_central_park_drupal.csv"
3. Go to admin/content and confirm content has been added properly

### Import images into Drupal

The column "url" in the spreadsheet contains the URL to the actual image
on Flickr. If a Drupal Field is defined as a "File" or "Image" (Image in
this case) the importer will go fetch the image at the URL and store it
within Drupal. See admin/structure/feeds/flickr_importer/mapping for the
individual field mappings, see
admin/structure/feeds/flickr_importer/settings/FeedsNodeProcessor for
the overall settings for the importer. 

### Mapping into Taxonomies

The column "tags" is mapped to the the taxonomy "Image
Tags" in the "Image" content type. In order for Drupal to process a
field as tags a delimiter needs to be consistently used to seperate
these tags into discrete token. In this the two characters "//" are
used. Drupal's feeds tamper module can be used to pre-process values
before they are loaded into the system. I had one processor set-up to
split the tags columns at the "//" characters. See the "explode"
processor set up for tags at
admin/structure/feeds/tamper/list/flickr_importer.  


## Going Further With Flickr

If you'd like to try your hand at downloading batches of data from
flickr consult and modify this GIST https://gist.github.com/3881807 that
utilizes ruby and the "flickraw" gem to interact with the API and
download data from flickr.

## Questions
Contact Kevin Reiss at kevin.reiss [ at ] gmail dot com 
