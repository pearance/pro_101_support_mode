<?php
/**
 * @file
 * pro_101_support_mode.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function pro_101_support_mode_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_menu_devel_modules_enabled';
  $strongarm->value = array(
    'devel_themer' => 'devel_themer',
  );
  $export['admin_menu_devel_modules_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'context_reaction_block_all_regions';
  $strongarm->value = 0;
  $export['context_reaction_block_all_regions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'context_ui_dialog_enabled';
  $strongarm->value = 1;
  $export['context_ui_dialog_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'dblog_row_limit';
  $strongarm->value = '1000';
  $export['dblog_row_limit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'error_level';
  $strongarm->value = '2';
  $export['error_level'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'masquerade_admin_roles';
  $strongarm->value = array(
    160159362 => '160159362',
    1 => 0,
    2 => 0,
    8998634 => 0,
    96220023 => 0,
    121011395 => 0,
  );
  $export['masquerade_admin_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'masquerade_quick_switches';
  $strongarm->value = array();
  $export['masquerade_quick_switches'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'masquerade_test_user';
  $strongarm->value = '';
  $export['masquerade_test_user'] = $strongarm;

  return $export;
}
