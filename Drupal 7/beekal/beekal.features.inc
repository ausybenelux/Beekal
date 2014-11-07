<?php
/**
 * @file
 * beekal.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function beekal_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function beekal_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function beekal_node_info() {
  $items = array(
    'beacon' => array(
      'name' => t('Beacon'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Administrative name'),
      'help' => '',
    ),
  );
  return $items;
}
