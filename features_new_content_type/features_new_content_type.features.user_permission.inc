<?php
/**
 * @file
 * features_new_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function features_new_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: create description content.
  $permissions['create description content'] = array(
    'name' => 'create description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create how_to content.
  $permissions['create how_to content'] = array(
    'name' => 'create how_to content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any description content.
  $permissions['delete any description content'] = array(
    'name' => 'delete any description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own description content.
  $permissions['delete own description content'] = array(
    'name' => 'delete own description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own how_to content.
  $permissions['delete own how_to content'] = array(
    'name' => 'delete own how_to content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any description content.
  $permissions['edit any description content'] = array(
    'name' => 'edit any description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any how_to content.
  $permissions['edit any how_to content'] = array(
    'name' => 'edit any how_to content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own description content.
  $permissions['edit own description content'] = array(
    'name' => 'edit own description content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own how_to content.
  $permissions['edit own how_to content'] = array(
    'name' => 'edit own how_to content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
