<?php
/**
 * @file
 * beekal_example_data_object.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function beekal_example_data_object_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'beacon_data_feed';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Beacon data feed';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Beacon data feed';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_json';
  $handler->display->display_options['style_options']['root_object'] = 'beacons';
  $handler->display->display_options['style_options']['top_child_object'] = '';
  $handler->display->display_options['style_options']['plaintext_output'] = 0;
  $handler->display->display_options['style_options']['remove_newlines'] = 0;
  $handler->display->display_options['style_options']['jsonp_prefix'] = '';
  $handler->display->display_options['style_options']['using_views_api_mode'] = 0;
  $handler->display->display_options['style_options']['object_arrays'] = 0;
  $handler->display->display_options['style_options']['numeric_strings'] = 0;
  $handler->display->display_options['style_options']['bigint_string'] = 0;
  $handler->display->display_options['style_options']['pretty_print'] = 1;
  $handler->display->display_options['style_options']['unescaped_slashes'] = 0;
  $handler->display->display_options['style_options']['unescaped_unicode'] = 0;
  $handler->display->display_options['style_options']['char_encoding'] = array();
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_beekal_data_node_target_id']['id'] = 'field_beekal_data_node_target_id';
  $handler->display->display_options['relationships']['field_beekal_data_node_target_id']['table'] = 'field_data_field_beekal_data_node';
  $handler->display->display_options['relationships']['field_beekal_data_node_target_id']['field'] = 'field_beekal_data_node_target_id';
  $handler->display->display_options['relationships']['field_beekal_data_node_target_id']['label'] = 'Beacon data';
  $handler->display->display_options['relationships']['field_beekal_data_node_target_id']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_beekal_data_node_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Thumbnail */
  $handler->display->display_options['fields']['field_beacon_thumbnail']['id'] = 'field_beacon_thumbnail';
  $handler->display->display_options['fields']['field_beacon_thumbnail']['table'] = 'field_data_field_beacon_thumbnail';
  $handler->display->display_options['fields']['field_beacon_thumbnail']['field'] = 'field_beacon_thumbnail';
  $handler->display->display_options['fields']['field_beacon_thumbnail']['relationship'] = 'field_beekal_data_node_target_id';
  $handler->display->display_options['fields']['field_beacon_thumbnail']['label'] = 'image_thumb';
  $handler->display->display_options['fields']['field_beacon_thumbnail']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_beacon_thumbnail']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_beacon_thumbnail']['settings'] = array(
    'image_style' => 'beacon_data_image_gallery_list_view',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_beacon_thumbnail']['field_api_classes'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_beacon_image_gallery_3']['id'] = 'field_beacon_image_gallery_3';
  $handler->display->display_options['fields']['field_beacon_image_gallery_3']['table'] = 'field_data_field_beacon_image_gallery';
  $handler->display->display_options['fields']['field_beacon_image_gallery_3']['field'] = 'field_beacon_image_gallery';
  $handler->display->display_options['fields']['field_beacon_image_gallery_3']['relationship'] = 'field_beekal_data_node_target_id';
  $handler->display->display_options['fields']['field_beacon_image_gallery_3']['label'] = 'image_thumb_default';
  $handler->display->display_options['fields']['field_beacon_image_gallery_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_beacon_image_gallery_3']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_beacon_image_gallery_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_beacon_image_gallery_3']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_beacon_image_gallery_3']['settings'] = array(
    'image_style' => 'beacon_data_image_gallery_list_view',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_beacon_image_gallery_3']['field_api_classes'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_beacon_image_gallery_2']['id'] = 'field_beacon_image_gallery_2';
  $handler->display->display_options['fields']['field_beacon_image_gallery_2']['table'] = 'field_data_field_beacon_image_gallery';
  $handler->display->display_options['fields']['field_beacon_image_gallery_2']['field'] = 'field_beacon_image_gallery';
  $handler->display->display_options['fields']['field_beacon_image_gallery_2']['relationship'] = 'field_beekal_data_node_target_id';
  $handler->display->display_options['fields']['field_beacon_image_gallery_2']['label'] = 'images_smartphone';
  $handler->display->display_options['fields']['field_beacon_image_gallery_2']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_beacon_image_gallery_2']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_beacon_image_gallery_2']['settings'] = array(
    'image_style' => 'beacon_data_image_gallery_smartphone',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_beacon_image_gallery_2']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_beacon_image_gallery_2']['field_api_classes'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_beacon_image_gallery_1']['id'] = 'field_beacon_image_gallery_1';
  $handler->display->display_options['fields']['field_beacon_image_gallery_1']['table'] = 'field_data_field_beacon_image_gallery';
  $handler->display->display_options['fields']['field_beacon_image_gallery_1']['field'] = 'field_beacon_image_gallery';
  $handler->display->display_options['fields']['field_beacon_image_gallery_1']['relationship'] = 'field_beekal_data_node_target_id';
  $handler->display->display_options['fields']['field_beacon_image_gallery_1']['label'] = 'images_phablet';
  $handler->display->display_options['fields']['field_beacon_image_gallery_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_beacon_image_gallery_1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_beacon_image_gallery_1']['settings'] = array(
    'image_style' => 'beacon_data_image_gallery_phablet',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_beacon_image_gallery_1']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_beacon_image_gallery_1']['field_api_classes'] = TRUE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_beacon_image_gallery']['id'] = 'field_beacon_image_gallery';
  $handler->display->display_options['fields']['field_beacon_image_gallery']['table'] = 'field_data_field_beacon_image_gallery';
  $handler->display->display_options['fields']['field_beacon_image_gallery']['field'] = 'field_beacon_image_gallery';
  $handler->display->display_options['fields']['field_beacon_image_gallery']['relationship'] = 'field_beekal_data_node_target_id';
  $handler->display->display_options['fields']['field_beacon_image_gallery']['label'] = 'images_tablet';
  $handler->display->display_options['fields']['field_beacon_image_gallery']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_beacon_image_gallery']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_beacon_image_gallery']['settings'] = array(
    'image_style' => 'beacon_data_image_gallery_tablet',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_beacon_image_gallery']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_beacon_image_gallery']['field_api_classes'] = TRUE;
  /* Field: Content: Notification */
  $handler->display->display_options['fields']['field_beacon_notification']['id'] = 'field_beacon_notification';
  $handler->display->display_options['fields']['field_beacon_notification']['table'] = 'field_data_field_beacon_notification';
  $handler->display->display_options['fields']['field_beacon_notification']['field'] = 'field_beacon_notification';
  $handler->display->display_options['fields']['field_beacon_notification']['relationship'] = 'field_beekal_data_node_target_id';
  $handler->display->display_options['fields']['field_beacon_notification']['label'] = 'notification';
  /* Field: Content: Content */
  $handler->display->display_options['fields']['field_beacon_content_1']['id'] = 'field_beacon_content_1';
  $handler->display->display_options['fields']['field_beacon_content_1']['table'] = 'field_data_field_beacon_content';
  $handler->display->display_options['fields']['field_beacon_content_1']['field'] = 'field_beacon_content';
  $handler->display->display_options['fields']['field_beacon_content_1']['relationship'] = 'field_beekal_data_node_target_id';
  $handler->display->display_options['fields']['field_beacon_content_1']['label'] = 'teaser';
  $handler->display->display_options['fields']['field_beacon_content_1']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_beacon_content_1']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['field_beacon_content_1']['settings'] = array(
    'trim_length' => '600',
  );
  /* Field: Content: Content */
  $handler->display->display_options['fields']['field_beacon_content']['id'] = 'field_beacon_content';
  $handler->display->display_options['fields']['field_beacon_content']['table'] = 'field_data_field_beacon_content';
  $handler->display->display_options['fields']['field_beacon_content']['field'] = 'field_beacon_content';
  $handler->display->display_options['fields']['field_beacon_content']['relationship'] = 'field_beekal_data_node_target_id';
  $handler->display->display_options['fields']['field_beacon_content']['label'] = 'body';
  /* Field: Content: Battery level */
  $handler->display->display_options['fields']['field_beekal_battery_level']['id'] = 'field_beekal_battery_level';
  $handler->display->display_options['fields']['field_beekal_battery_level']['table'] = 'field_data_field_beekal_battery_level';
  $handler->display->display_options['fields']['field_beekal_battery_level']['field'] = 'field_beekal_battery_level';
  $handler->display->display_options['fields']['field_beekal_battery_level']['relationship'] = 'reverse_field_beekal_data_node_node';
  $handler->display->display_options['fields']['field_beekal_battery_level']['label'] = 'battery';
  $handler->display->display_options['fields']['field_beekal_battery_level']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Major */
  $handler->display->display_options['fields']['field_beekal_major']['id'] = 'field_beekal_major';
  $handler->display->display_options['fields']['field_beekal_major']['table'] = 'field_data_field_beekal_major';
  $handler->display->display_options['fields']['field_beekal_major']['field'] = 'field_beekal_major';
  $handler->display->display_options['fields']['field_beekal_major']['relationship'] = 'reverse_field_beekal_data_node_node';
  $handler->display->display_options['fields']['field_beekal_major']['label'] = 'major';
  $handler->display->display_options['fields']['field_beekal_major']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Minor */
  $handler->display->display_options['fields']['field_beekal_minor']['id'] = 'field_beekal_minor';
  $handler->display->display_options['fields']['field_beekal_minor']['table'] = 'field_data_field_beekal_minor';
  $handler->display->display_options['fields']['field_beekal_minor']['field'] = 'field_beekal_minor';
  $handler->display->display_options['fields']['field_beekal_minor']['relationship'] = 'reverse_field_beekal_data_node_node';
  $handler->display->display_options['fields']['field_beekal_minor']['label'] = 'minor';
  $handler->display->display_options['fields']['field_beekal_minor']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Proximity UUID */
  $handler->display->display_options['fields']['field_beekal_proximity_uuid']['id'] = 'field_beekal_proximity_uuid';
  $handler->display->display_options['fields']['field_beekal_proximity_uuid']['table'] = 'field_data_field_beekal_proximity_uuid';
  $handler->display->display_options['fields']['field_beekal_proximity_uuid']['field'] = 'field_beekal_proximity_uuid';
  $handler->display->display_options['fields']['field_beekal_proximity_uuid']['relationship'] = 'reverse_field_beekal_data_node_node';
  $handler->display->display_options['fields']['field_beekal_proximity_uuid']['label'] = 'uuid';
  /* Field: Content: Active time range */
  $handler->display->display_options['fields']['field_beacon_active_time_range']['id'] = 'field_beacon_active_time_range';
  $handler->display->display_options['fields']['field_beacon_active_time_range']['table'] = 'field_data_field_beacon_active_time_range';
  $handler->display->display_options['fields']['field_beacon_active_time_range']['field'] = 'field_beacon_active_time_range';
  $handler->display->display_options['fields']['field_beacon_active_time_range']['relationship'] = 'field_beekal_data_node_target_id';
  $handler->display->display_options['fields']['field_beacon_active_time_range']['label'] = 'from';
  $handler->display->display_options['fields']['field_beacon_active_time_range']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_beacon_active_time_range']['alter']['text'] = '[field_beacon_active_time_range-value-24hour]:[field_beacon_active_time_range-value-minute]';
  $handler->display->display_options['fields']['field_beacon_active_time_range']['element_type'] = '0';
  $handler->display->display_options['fields']['field_beacon_active_time_range']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_beacon_active_time_range']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_beacon_active_time_range']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_beacon_active_time_range']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_beacon_active_time_range']['settings'] = array(
    'display_format' => array(
      'hour' => 'H',
      'minute' => 'i',
      'separator' => ':',
      'period' => 'none',
      'period_separator' => '',
    ),
  );
  /* Field: Content: Active time range */
  $handler->display->display_options['fields']['field_beacon_active_time_range_1']['id'] = 'field_beacon_active_time_range_1';
  $handler->display->display_options['fields']['field_beacon_active_time_range_1']['table'] = 'field_data_field_beacon_active_time_range';
  $handler->display->display_options['fields']['field_beacon_active_time_range_1']['field'] = 'field_beacon_active_time_range';
  $handler->display->display_options['fields']['field_beacon_active_time_range_1']['relationship'] = 'field_beekal_data_node_target_id';
  $handler->display->display_options['fields']['field_beacon_active_time_range_1']['label'] = 'to';
  $handler->display->display_options['fields']['field_beacon_active_time_range_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_beacon_active_time_range_1']['alter']['text'] = '[field_beacon_active_time_range_1-value2-24hour]:[field_beacon_active_time_range_1-value2-minute]';
  $handler->display->display_options['fields']['field_beacon_active_time_range_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_beacon_active_time_range_1']['settings'] = array(
    'display_format' => array(
      'hour' => 'g',
      'minute' => 'i',
      'separator' => ':',
      'period' => 'a',
      'period_separator' => '',
    ),
  );
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['relationship'] = 'field_beekal_data_node_target_id';
  $handler->display->display_options['fields']['changed']['label'] = 'updated_at';
  $handler->display->display_options['fields']['changed']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'c';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_beekal_data_node_target_id';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
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
    'beacon' => 'beacon',
  );

  /* Display: JSON feed */
  $handler = $view->new_display('page', 'JSON feed', 'beacon_json_feed');
  $handler->display->display_options['path'] = 'beacon-data-feed/json';
  $export['beacon_data_feed'] = $view;

  return $export;
}
