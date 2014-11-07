<?php
/**
 * @file
 * beekal.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function beekal_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-beacon-field_beekal_battery_level'
  $field_instances['node-beacon-field_beekal_battery_level'] = array(
    'bundle' => 'beacon',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_beekal_battery_level',
    'label' => 'Battery level',
    'required' => 0,
    'settings' => array(
      'max' => 100,
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-beacon-field_beekal_data_node'
  $field_instances['node-beacon-field_beekal_data_node'] = array(
    'bundle' => 'beacon',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Creates a relationship between the beacon and a node that supplies the beacon\'s data.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_beekal_data_node',
    'label' => 'Data node',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference_view_widget',
      'settings' => array(
        'allow_duplicates' => 0,
        'close_modal' => 1,
        'pass_argument' => 0,
        'view' => 'beacon_data_entityref|beacon_data_view_widget',
      ),
      'type' => 'entityreference_view_widget',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-beacon-field_beekal_major'
  $field_instances['node-beacon-field_beekal_major'] = array(
    'bundle' => 'beacon',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The Major number of the beacon',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_beekal_major',
    'label' => 'Major',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-beacon-field_beekal_minor'
  $field_instances['node-beacon-field_beekal_minor'] = array(
    'bundle' => 'beacon',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'The Minor number of the beacon.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_beekal_minor',
    'label' => 'Minor',
    'required' => 1,
    'settings' => array(
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-beacon-field_beekal_proximity_uuid'
  $field_instances['node-beacon-field_beekal_proximity_uuid'] = array(
    'bundle' => 'beacon',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Example: E2C56DB5-DFFB-48D2-B060-D0F5A71096E0',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_beekal_proximity_uuid',
    'label' => 'Proximity UUID',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Battery level');
  t('Creates a relationship between the beacon and a node that supplies the beacon\'s data.');
  t('Data node');
  t('Example: E2C56DB5-DFFB-48D2-B060-D0F5A71096E0');
  t('Major');
  t('Minor');
  t('Proximity UUID');
  t('The Major number of the beacon');
  t('The Minor number of the beacon.');

  return $field_instances;
}
