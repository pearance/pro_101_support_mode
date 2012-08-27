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

  // Exported permission: administer contexts.
  $permissions['administer contexts'] = array(
    'name' => 'administer contexts',
    'roles' => array(),
    'module' => 'context_ui',
  );

  // Exported permission: administer delta.
  $permissions['administer delta'] = array(
    'name' => 'administer delta',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'delta_ui',
  );

  // Exported permission: administer dummyimage.
  $permissions['administer dummyimage'] = array(
    'name' => 'administer dummyimage',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'dummyimage',
  );

  // Exported permission: administer masquerade.
  $permissions['administer masquerade'] = array(
    'name' => 'administer masquerade',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'masquerade',
  );

  // Exported permission: administer module filter.
  $permissions['administer module filter'] = array(
    'name' => 'administer module filter',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'module_filter',
  );

  // Exported permission: administer string overrides.
  $permissions['administer string overrides'] = array(
    'name' => 'administer string overrides',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'stringoverrides',
  );

  // Exported permission: edit any checklistapi checklist.
  $permissions['edit any checklistapi checklist'] = array(
    'name' => 'edit any checklistapi checklist',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: edit pro_101_qa_checklist checklistapi checklist.
  $permissions['edit pro_101_qa_checklist checklistapi checklist'] = array(
    'name' => 'edit pro_101_qa_checklist checklistapi checklist',
    'roles' => array(),
    'module' => 'checklistapi',
  );

  // Exported permission: execute php code.
  $permissions['execute php code'] = array(
    'name' => 'execute php code',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'devel',
  );

  // Exported permission: execute unlink files.
  $permissions['execute unlink files'] = array(
    'name' => 'execute unlink files',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'features_tools',
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

  // Exported permission: view any checklistapi checklist.
  $permissions['view any checklistapi checklist'] = array(
    'name' => 'view any checklistapi checklist',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: view checklistapi checklists report.
  $permissions['view checklistapi checklists report'] = array(
    'name' => 'view checklistapi checklists report',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'checklistapi',
  );

  // Exported permission: view pro_101_qa_checklist checklistapi checklist.
  $permissions['view pro_101_qa_checklist checklistapi checklist'] = array(
    'name' => 'view pro_101_qa_checklist checklistapi checklist',
    'roles' => array(),
    'module' => 'checklistapi',
  );

  return $permissions;
}
