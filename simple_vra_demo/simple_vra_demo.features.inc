<?php
/**
 * @file
 * simple_vra_demo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function simple_vra_demo_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function simple_vra_demo_node_info() {
  $items = array(
    'image' => array(
      'name' => t('Image'),
      'base' => 'node_content',
      'description' => t('An image type for use in VRA Demo'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'license' => array(
      'name' => t('License'),
      'base' => 'node_content',
      'description' => t('A license that can be applied to a work or image. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'vra_collection' => array(
      'name' => t('Collection'),
      'base' => 'node_content',
      'description' => t('A group of collected VRA Works or Images. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'vra_work' => array(
      'name' => t('Work'),
      'base' => 'node_content',
      'description' => t('A VRA Core Work. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
