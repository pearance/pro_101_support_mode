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
  $context->name = 'support';
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
        'support' => 'support',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'masquerade-masquerade' => array(
          'module' => 'masquerade',
          'delta' => 'masquerade',
          'region' => 'sidebar_second',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Section');
  $export['support'] = $context;

  return $export;
}
