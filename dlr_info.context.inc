<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function dlr_info_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'info_listing';
  $context->description = '';
  $context->tag = 'Info';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        'focusgroup' => 'focusgroup',
        'project' => 'project',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'views' => array(
      'values' => array(
        'info_listing' => 'info_listing',
      ),
    ),
  );
  $context->reactions = array(
    'menu' => 'info',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Info');
  $export['info_listing'] = $context;

  return $export;
}
