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

  // Exported permission: 'create blog content'.
  $permissions['create blog content'] = array(
    'name' => 'create blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'blog admin' => 'blog admin',
      'blog writer' => 'blog writer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any blog content'.
  $permissions['delete any blog content'] = array(
    'name' => 'delete any blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'blog admin' => 'blog admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own blog content'.
  $permissions['delete own blog content'] = array(
    'name' => 'delete own blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'blog admin' => 'blog admin',
      'blog writer' => 'blog writer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

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

  // Exported permission: 'edit any blog content'.
  $permissions['edit any blog content'] = array(
    'name' => 'edit any blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'blog admin' => 'blog admin',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own blog content'.
  $permissions['edit own blog content'] = array(
    'name' => 'edit own blog content',
    'roles' => array(
      'administrator' => 'administrator',
      'blog admin' => 'blog admin',
      'blog writer' => 'blog writer',
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
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
