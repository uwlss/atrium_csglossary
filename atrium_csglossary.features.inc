<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function atrium_csglossary_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function atrium_csglossary_node_info() {
  $items = array(
    'csglossary' => array(
      'name' => t('Glossary entry'),
      'module' => 'features',
      'description' => t('Create a glossary of terms for your group.'),
      'has_title' => '1',
      'title_label' => t('Term'),
      'has_body' => '1',
      'body_label' => t('Definition and Examples'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function atrium_csglossary_views_api() {
  return array(
    'api' => '2',
  );
}
