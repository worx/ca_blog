<?php
/**
 * @file
 * ca_blog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ca_blog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ca_blog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function ca_blog_image_default_styles() {
  $styles = array();

  // Exported image style: grid_image_crop.
  $styles['grid_image_crop'] = array(
    'label' => 'Grid Image Crop',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 450,
          'height' => 375,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
