<?php
/**
 * @file
 * demo_flickr_importer.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function demo_flickr_importer_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'flickr_importer-tags-explode_flickr_tags';
  $feeds_tamper->importer = 'flickr_importer';
  $feeds_tamper->source = 'tags';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => '//',
    'limit' => '',
    'real_separator' => '//',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['flickr_importer-tags-explode_flickr_tags'] = $feeds_tamper;

  return $export;
}
