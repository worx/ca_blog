<?php
/**
 * @file
 * ca_blog.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ca_blog_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_my-blog:blog/%.
  $menu_links['main-menu_my-blog:blog/%'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'blog/%',
    'router_path' => 'blog/%',
    'link_title' => 'My blog',
    'options' => array(
      'identifier' => 'main-menu_my-blog:blog/%',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_blog:blog',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('My blog');

  return $menu_links;
}
