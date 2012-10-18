<?php
/**
 * @file
 * simple_vra_demo.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function simple_vra_demo_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_classify|node|image|form';
  $field_group->group_name = 'group_image_classify';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Classification',
    'weight' => '5',
    'children' => array(
      0 => 'field_image_tags',
      1 => 'field_image_work_type',
      2 => 'field_image_work_relation',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_image_classify|node|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_description|node|image|form';
  $field_group->group_name = 'group_image_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '3',
    'children' => array(
      0 => 'body',
      1 => 'field_license',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_image_description|node|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_file|node|image|form';
  $field_group->group_name = 'group_image_file';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Files',
    'weight' => '2',
    'children' => array(
      0 => 'field_source_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Image Files',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image_file|node|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_flickr|node|image|form';
  $field_group->group_name = 'group_image_flickr';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Flickr Source Information',
    'weight' => '6',
    'children' => array(
      0 => 'field_flickr_id',
      1 => 'field_flickr_owner_name',
      2 => 'field_flickr_source_url',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_image_flickr|node|image|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_geo|node|image|form';
  $field_group->group_name = 'group_image_geo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'image';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Geographic Data',
    'weight' => '4',
    'children' => array(
      0 => 'field_image_latitude',
      1 => 'field_image_longitude',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_image_geo|node|image|form'] = $field_group;

  return $export;
}
