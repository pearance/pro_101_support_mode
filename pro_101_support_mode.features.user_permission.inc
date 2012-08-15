<?php
/**
 * @file
 * pro_101_support_mode.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_support_mode_user_default_permissions() {
  $permissions = array();

  // Exported permission: access devel information.
  $permissions['access devel information'] = array(
    'name' => 'access devel information',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'devel',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'devel',
  );

  // Exported permission: switch users.
  $permissions['switch users'] = array(
    'name' => 'switch users',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'devel',
  );

  return $permissions;
}
