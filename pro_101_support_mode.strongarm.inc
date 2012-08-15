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

  return $export;
}
