<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_csglossary_user_default_permissions() {
  $permissions = array();

  // Exported permission: create csglossary content
  $permissions['create csglossary content'] = array(
    'name' => 'create csglossary content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: delete own csglossary content
  $permissions['delete own csglossary content'] = array(
    'name' => 'delete own csglossary content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  // Exported permission: edit own csglossary content
  $permissions['edit own csglossary content'] = array(
    'name' => 'edit own csglossary content',
    'roles' => array(
      '0' => 'admin',
      '1' => 'authenticated user',
      '2' => 'manager',
    ),
  );

  return $permissions;
}
