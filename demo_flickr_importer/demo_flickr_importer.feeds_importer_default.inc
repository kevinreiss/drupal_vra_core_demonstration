<?php
/**
 * @file
 * demo_flickr_importer.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function demo_flickr_importer_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'flickr_importer';
  $feeds_importer->config = array(
    'name' => 'Flickr Importer',
    'description' => 'Import CSV Data Derived from Flickr API',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'image',
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'id',
            'target' => 'field_flickr_id',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'id',
            'target' => 'guid',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'datetaken',
            'target' => 'field_image_date_taken:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'description',
            'target' => 'body',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'ownername',
            'target' => 'field_flickr_owner_name',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'latitude',
            'target' => 'field_image_latitude',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'longitude',
            'target' => 'field_image_longitude',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'url',
            'target' => 'field_source_image',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'photopage',
            'target' => 'field_flickr_source_url:url',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'tags',
            'target' => 'field_image_tags',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'filtered_html',
        'skip_hash_check' => 0,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '1800',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['flickr_importer'] = $feeds_importer;

  return $export;
}
