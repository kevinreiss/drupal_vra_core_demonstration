<?php
/**
 * @file
 * vra_demo_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function vra_demo_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'image_catalog';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Images Associated with Works';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Images Cataloged with Works';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_image_work_relation_target_id']['id'] = 'field_image_work_relation_target_id';
  $handler->display->display_options['relationships']['field_image_work_relation_target_id']['table'] = 'field_data_field_image_work_relation';
  $handler->display->display_options['relationships']['field_image_work_relation_target_id']['field'] = 'field_image_work_relation_target_id';
  $handler->display->display_options['relationships']['field_image_work_relation_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Image Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_source_image']['id'] = 'field_source_image';
  $handler->display->display_options['fields']['field_source_image']['table'] = 'field_data_field_source_image';
  $handler->display->display_options['fields']['field_source_image']['field'] = 'field_source_image';
  $handler->display->display_options['fields']['field_source_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_source_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => 'content',
  );
  /* Field: Content: Tags */
  $handler->display->display_options['fields']['field_image_tags']['id'] = 'field_image_tags';
  $handler->display->display_options['fields']['field_image_tags']['table'] = 'field_data_field_image_tags';
  $handler->display->display_options['fields']['field_image_tags']['field'] = 'field_image_tags';
  $handler->display->display_options['fields']['field_image_tags']['delta_offset'] = '0';
  /* Field: Content: Agent */
  $handler->display->display_options['fields']['field_work_agent']['id'] = 'field_work_agent';
  $handler->display->display_options['fields']['field_work_agent']['table'] = 'field_data_field_work_agent';
  $handler->display->display_options['fields']['field_work_agent']['field'] = 'field_work_agent';
  $handler->display->display_options['fields']['field_work_agent']['relationship'] = 'field_image_work_relation_target_id';
  $handler->display->display_options['fields']['field_work_agent']['delta_offset'] = '0';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_work_date']['id'] = 'field_work_date';
  $handler->display->display_options['fields']['field_work_date']['table'] = 'field_data_field_work_date';
  $handler->display->display_options['fields']['field_work_date']['field'] = 'field_work_date';
  $handler->display->display_options['fields']['field_work_date']['relationship'] = 'field_image_work_relation_target_id';
  $handler->display->display_options['fields']['field_work_date']['delta_offset'] = '0';
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_work_location']['id'] = 'field_work_location';
  $handler->display->display_options['fields']['field_work_location']['table'] = 'field_data_field_work_location';
  $handler->display->display_options['fields']['field_work_location']['field'] = 'field_work_location';
  $handler->display->display_options['fields']['field_work_location']['relationship'] = 'field_image_work_relation_target_id';
  $handler->display->display_options['fields']['field_work_location']['delta_offset'] = '0';
  /* Field: Content: Work Type */
  $handler->display->display_options['fields']['field_work_type']['id'] = 'field_work_type';
  $handler->display->display_options['fields']['field_work_type']['table'] = 'field_data_field_work_type';
  $handler->display->display_options['fields']['field_work_type']['field'] = 'field_work_type';
  $handler->display->display_options['fields']['field_work_type']['relationship'] = 'field_image_work_relation_target_id';
  $handler->display->display_options['fields']['field_work_type']['label'] = 'Type';
  $handler->display->display_options['fields']['field_work_type']['delta_offset'] = '0';
  /* Field: Content: Work Type */
  $handler->display->display_options['fields']['field_image_work_type']['id'] = 'field_image_work_type';
  $handler->display->display_options['fields']['field_image_work_type']['table'] = 'field_data_field_image_work_type';
  $handler->display->display_options['fields']['field_image_work_type']['field'] = 'field_image_work_type';
  $handler->display->display_options['fields']['field_image_work_type']['label'] = 'Image Type';
  $handler->display->display_options['fields']['field_image_work_type']['delta_offset'] = '0';
  /* Field: Content: Date Taken */
  $handler->display->display_options['fields']['field_image_date_taken']['id'] = 'field_image_date_taken';
  $handler->display->display_options['fields']['field_image_date_taken']['table'] = 'field_data_field_image_date_taken';
  $handler->display->display_options['fields']['field_image_date_taken']['field'] = 'field_image_date_taken';
  $handler->display->display_options['fields']['field_image_date_taken']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'catalog';
  $export['image_catalog'] = $view;

  $view = new view();
  $view->name = 'image_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Image Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Image Gallery';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '12';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );

  /* Display: Commons Gallery */
  $handler = $view->new_display('page', 'Commons Gallery', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['path'] = 'gallery';

  /* Display: Recently Posted */
  $handler = $view->new_display('page', 'Recently Posted', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recently Posted';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'node';
  $handler->display->display_options['row_options']['links'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'recent';
  $export['image_gallery'] = $view;

  return $export;
}
