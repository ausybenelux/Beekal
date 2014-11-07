<?php
/**
 * @file
 * beekal.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function beekal_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'UUID format';
  $rule->name = 'uuid_format';
  $rule->field_name = 'field_beekal_proximity_uuid';
  $rule->col = 'value';
  $rule->entity_type = 'node';
  $rule->bundle = 'beacon';
  $rule->validator = 'field_validation_pattern_validator';
  $rule->settings = array(
    'pattern' => '########-####-####-####-############',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'The UUID format is incorrect. Verify that it resembles the example given in the help text.';
  $export['uuid_format'] = $rule;

  return $export;
}
