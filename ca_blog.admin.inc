<?php

/** 
 * @file
 * CA_Blog admin system, which overrides the default feature settings.
 * 
 * Will allow us to make visual changes to the feature without overriding the 
 * actual feature.
 */

/**
 * Defines the menu for overriding blog feature settings.
 * 
 * @return
 *   Fully formed Form API array.
 */
function ca_blog_settings_form() {
  $form = array();

  $form['ca_blog_menu_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Menu Title'),
    '#default_value' => variable_get('ca_blog_menu_title', 'Blog'),
    '#required' => TRUE,
    '#description' => t('What would you like the menu title to be?'),
  );

  return system_settings_form($form);
}