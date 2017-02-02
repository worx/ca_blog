<?php
/**
 * @file
 * ca_blog.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ca_blog_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'delete terms in ca_blog_categories'.
  $permissions['delete terms in ca_blog_categories'] = array(
    'name' => 'delete terms in ca_blog_categories',
    'roles' => array(
      'administrator' => 'administrator',
      'blog admin' => 'blog admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in ca_blog_categories'.
  $permissions['edit terms in ca_blog_categories'] = array(
    'name' => 'edit terms in ca_blog_categories',
    'roles' => array(
      'administrator' => 'administrator',
      'blog admin' => 'blog admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  return $permissions;
}
