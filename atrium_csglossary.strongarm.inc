<?php

/**
 * Implementation of hook_strongarm().
 */
function atrium_csglossary_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'atrium_activity_update_type_csglossary';
  $strongarm->value = 1;
  $export['atrium_activity_update_type_csglossary'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_csglossary';
  $strongarm->value = 0;
  $export['comment_anonymous_csglossary'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_csglossary';
  $strongarm->value = '3';
  $export['comment_controls_csglossary'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_csglossary';
  $strongarm->value = '2';
  $export['comment_csglossary'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_csglossary';
  $strongarm->value = '4';
  $export['comment_default_mode_csglossary'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_csglossary';
  $strongarm->value = '2';
  $export['comment_default_order_csglossary'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_csglossary';
  $strongarm->value = '200';
  $export['comment_default_per_page_csglossary'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_csglossary';
  $strongarm->value = '1';
  $export['comment_form_location_csglossary'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_csglossary';
  $strongarm->value = '0';
  $export['comment_preview_csglossary'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_csglossary';
  $strongarm->value = '0';
  $export['comment_subject_field_csglossary'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_csglossary';
  $strongarm->value = '1';
  $export['comment_upload_csglossary'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_csglossary';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-2',
    'revision_information' => '5',
    'author' => '4',
    'options' => '6',
    'comment_settings' => '7',
    'menu' => '0',
    'book' => '3',
    'attachments' => '-1',
    'og_nodeapi' => '1',
  );
  $export['content_extra_weights_csglossary'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_csglossary';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_csglossary'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_csglossary_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => TRUE,
      'title' => 'Term',
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Menu settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Revision information',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Comment settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Publishing options',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Authoring information',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'notifications' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Notifications',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'book' => array(
      'region' => 'right',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Book outline',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'attachments' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'File attachments',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'field_referenced_book_page' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Referenced Page',
      'hidden' => 0,
    ),
    'og_nodeapi' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Groups',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'group_images' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Add Images',
      'hidden' => 0,
      'collapsed' => 1,
    ),
    'group_video' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Add Video',
      'hidden' => 0,
      'collapsed' => 1,
    ),
    'body_field' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'exclude_node_title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Exclude title from display',
      'hidden' => 0,
    ),
    'taxonomy' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_csglossary_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type_csglossary';
  $strongarm->value = array(
    0 => 'thread',
    1 => 'nodetype',
    2 => 'author',
  );
  $export['notifications_content_type_csglossary'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_csglossary';
  $strongarm->value = 'group_post_wiki';
  $export['og_content_type_usage_csglossary'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_csglossary';
  $strongarm->value = 0;
  $export['show_diff_inline_csglossary'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_csglossary';
  $strongarm->value = 0;
  $export['show_preview_changes_csglossary'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_csglossary';
  $strongarm->value = '1';
  $export['upload_csglossary'] = $strongarm;

  return $export;
}
