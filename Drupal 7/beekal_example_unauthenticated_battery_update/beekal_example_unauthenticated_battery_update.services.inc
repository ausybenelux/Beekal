<?php
/**
 * @file
 * beekal_example_unauthenticated_battery_update.services.inc
 */

/**
 * Implements hook_default_services_endpoint().
 */
function beekal_example_unauthenticated_battery_update_default_services_endpoint() {
  $export = array();

  $endpoint = new stdClass();
  $endpoint->disabled = FALSE; /* Edit this to true to make a default endpoint disabled initially */
  $endpoint->api_version = 3;
  $endpoint->name = 'beacon_battery_unauthenticated';
  $endpoint->server = 'rest_server';
  $endpoint->path = 'api/unauthenticated';
  $endpoint->authentication = array();
  $endpoint->server_settings = array(
    'formatters' => array(
      'bencode' => TRUE,
      'json' => TRUE,
      'php' => TRUE,
      'xml' => TRUE,
      'jsonp' => FALSE,
    ),
    'parsers' => array(
      'application/json' => TRUE,
      'application/vnd.php.serialized' => TRUE,
      'application/x-www-form-urlencoded' => TRUE,
      'application/xml' => TRUE,
      'multipart/form-data' => TRUE,
      'text/xml' => TRUE,
    ),
  );
  $endpoint->resources = array(
    'beacon_battery' => array(
      'operations' => array(
        'update' => array(
          'enabled' => '1',
        ),
      ),
    ),
  );
  $endpoint->debug = 1;
  $export['beacon_battery_unauthenticated'] = $endpoint;

  return $export;
}
