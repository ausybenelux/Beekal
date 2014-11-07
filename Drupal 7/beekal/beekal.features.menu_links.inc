<?php
/**
 * @file
 * beekal.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function beekal_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_beacon:node/add/beacon
  $menu_links['navigation_beacon:node/add/beacon'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/beacon',
    'router_path' => 'node/add/beacon',
    'link_title' => 'Beacon',
    'options' => array(
      'identifier' => 'navigation_beacon:node/add/beacon',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Beacon');


  return $menu_links;
}
