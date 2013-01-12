<?php
/**
 * @file
 * pro_101_support_mode.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pro_101_support_mode_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'development';
  $context->description = '';
  $context->tag = 'Section';
  $context->conditions = array(
    'masquerade_context' => array(
      'values' => array(
        'myself' => 'myself',
      ),
      'options' => array(
        'mode' => array(
          'is_masquerading' => 'is_masquerading',
          'is_being_masqueraded' => 'is_being_masqueraded',
        ),
      ),
    ),
    'user' => array(
      'values' => array(
        'developer' => 'developer',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'masquerade-masquerade' => array(
          'module' => 'masquerade',
          'delta' => 'masquerade',
          'region' => 'debug_2',
          'weight' => '0',
        ),
        'boost-status' => array(
          'module' => 'boost',
          'delta' => 'status',
          'region' => 'debug_3',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Section');
  $export['development'] = $context;

  return $export;
}
