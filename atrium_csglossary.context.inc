<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_csglossary_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'csglossary_listing';
  $context->description = '';
  $context->tag = 'Glossary';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'csglossary' => 'csglossary',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'views' => array(
      'values' => array(
        'csglossary_listing' => 'csglossary_listing',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-csglossary_listing-block_2' => array(
          'module' => 'views',
          'delta' => 'csglossary_listing-block_2',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'csglossary',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Glossary');
  $export['csglossary_listing'] = $context;

  return $export;
}
