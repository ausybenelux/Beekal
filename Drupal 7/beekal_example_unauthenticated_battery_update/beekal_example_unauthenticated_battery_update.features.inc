<?php
/**
 * @file
 * beekal_example_unauthenticated_battery_update.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function beekal_example_unauthenticated_battery_update_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}
