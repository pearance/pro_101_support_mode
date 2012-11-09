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

  // Exported permission: access theme information.
  $permissions['access theme information'] = array(
    'name' => 'access theme information',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'devel',
  );

  // Exported permission: administer contexts.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'context_ui',
  );

  // Exported permission: administer delta.
  $permissions['administer delta'] = array(
    'name' => 'administer delta',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'delta_ui',
  );

  // Exported permission: administer devel menu items.
  $permissions['administer devel menu items'] = array(
    'name' => 'administer devel menu items',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'menu_admin_per_menu',
  );

  // Exported permission: administer masquerade.
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'devel',
  );

  // Exported permission: masquerade as admin.
  $permissions['masquerade as admin'] = array(
    'name' => 'masquerade as admin',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: masquerade as user.
  $permissions['masquerade as user'] = array(
    'name' => 'masquerade as user',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'masquerade',
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
