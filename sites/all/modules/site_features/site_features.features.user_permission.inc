<?php
/**
 * @file
 * site_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function site_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create sms_info content'.
  $permissions['create sms_info content'] = array(
    'name' => 'create sms_info content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any sms_info content'.
  $permissions['delete any sms_info content'] = array(
    'name' => 'delete any sms_info content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own sms_info content'.
  $permissions['delete own sms_info content'] = array(
    'name' => 'delete own sms_info content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit any sms_info content'.
  $permissions['edit any sms_info content'] = array(
    'name' => 'edit any sms_info content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own sms_info content'.
  $permissions['edit own sms_info content'] = array(
    'name' => 'edit own sms_info content',
    'roles' => array(),
    'module' => 'node',
  );

  return $permissions;
}
