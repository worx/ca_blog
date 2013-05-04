<?php

/**
 * @file
 * Plugin to provide access control based upon ca_blog admin settings.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
  'title' => t('Blog: taxonomy type'),
  'description' => t('Control access by blog taxonomy type.'),
  'callback' => 'ca_blog_taxonomy_template_access_check',
  'settings form' => 'ca_blog_taxonomy_template_access_settings',
  'settings form submit' => 'ca_blog_taxonomy_template_access_settings_submit',
  'summary' => 'ca_blog_taxonomy_template_access_summary',
);

/**
 * Settings form for the 'by blog taxonomy type' access plugin.
 */
function ca_blog_taxonomy_template_access_settings($form, &$form_state, $conf) {
  $form['settings']['ca_blog_taxonomy_template'] = array(
    '#type' => 'select',
    '#title' => t('Blog\'s taxonomy template'),
    '#options' => array(
      'ca_blog_taxonomy_template_one' => t('Template one'),
      'ca_blog_taxonomy_template_two' => t('Template two'),
      'ca_blog_taxonomy_template_three' => t('Template three'),
    ),
    '#required' => TRUE,
    '#default_value' => $conf['ca_blog_taxonomy_template'],
  );

  return $form;
}

/**
 * Settings form submission.
 */
function ca_blog_taxonomy_template_access_settings_form($form, &$form_state) {
}

/**
 * Check for access.
 */
function ca_blog_taxonomy_template_access_check($conf, $context) {
  return $conf['ca_blog_taxonomy_template'] == variable_get('ca_blog_taxonomy_template', 'ca_blog_taxonomy_template_one');
}

/**
 * Provide a summary description based upon the checked blog taxonomy type.
 */
function ca_blog_taxonomy_template_access_summary($conf, $context) {
  if ($conf['ca_blog_taxonomy_template'] == 'ca_blog_taxonomy_template_one') {
    $template = t('Template one');
  }
  elseif ($conf['ca_blog_taxonomy_template'] == 'ca_blog_taxonomy_template_two') {
    $template = t('Template two');
  }
  else {
    $template = t('Template three');
  }

  return t('Display template is set to: ' . $template);
}
