<?php
/**
 * @file
 * ca_blog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function ca_blog_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_blog_node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Blog: Node Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog' => 'blog',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-blog-node ca-blog-node-template-1',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '84c29727-f614-46f1-9fc6-ad2e7051e244';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8ace4b97-2fe4-4ae3-ae65-8e9e05504790';
    $pane->panel = 'middle';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'medium',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8ace4b97-2fe4-4ae3-ae65-8e9e05504790';
    $display->content['new-8ace4b97-2fe4-4ae3-ae65-8e9e05504790'] = $pane;
    $display->panels['middle'][0] = 'new-8ace4b97-2fe4-4ae3-ae65-8e9e05504790';
    $pane = new stdClass();
    $pane->pid = 'new-5cb2cb13-30f9-477a-8c53-50bf0e199159';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_node-ca_blog_node_1a';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5cb2cb13-30f9-477a-8c53-50bf0e199159';
    $display->content['new-5cb2cb13-30f9-477a-8c53-50bf0e199159'] = $pane;
    $display->panels['middle'][1] = 'new-5cb2cb13-30f9-477a-8c53-50bf0e199159';
    $pane = new stdClass();
    $pane->pid = 'new-d7ed5efa-f422-42ea-ac50-9f7c48bcbeb9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_node-ca_blog_node_1b';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd7ed5efa-f422-42ea-ac50-9f7c48bcbeb9';
    $display->content['new-d7ed5efa-f422-42ea-ac50-9f7c48bcbeb9'] = $pane;
    $display->panels['middle'][2] = 'new-d7ed5efa-f422-42ea-ac50-9f7c48bcbeb9';
    $pane = new stdClass();
    $pane->pid = 'new-62fc6be3-84a1-417d-aaee-5ea171c66362';
    $pane->panel = 'middle';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = '62fc6be3-84a1-417d-aaee-5ea171c66362';
    $display->content['new-62fc6be3-84a1-417d-aaee-5ea171c66362'] = $pane;
    $display->panels['middle'][3] = 'new-62fc6be3-84a1-417d-aaee-5ea171c66362';
    $pane = new stdClass();
    $pane->pid = 'new-195de5e2-6b0a-4dc8-8962-50278a2e04b8';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'addtoany-addtoany_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ca-addtoany-feature',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '195de5e2-6b0a-4dc8-8962-50278a2e04b8';
    $display->content['new-195de5e2-6b0a-4dc8-8962-50278a2e04b8'] = $pane;
    $display->panels['middle'][4] = 'new-195de5e2-6b0a-4dc8-8962-50278a2e04b8';
    $pane = new stdClass();
    $pane->pid = 'new-bdfb3c4d-34c9-4862-b16c-8aa846138fdb';
    $pane->panel = 'middle';
    $pane->type = 'node_terms';
    $pane->subtype = 'node_terms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'vid' => '0',
      'term_format' => 'term-links',
      'link' => 1,
      'term_delimiter' => ', ',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = '';
    $pane->uuid = 'bdfb3c4d-34c9-4862-b16c-8aa846138fdb';
    $display->content['new-bdfb3c4d-34c9-4862-b16c-8aa846138fdb'] = $pane;
    $display->panels['middle'][5] = 'new-bdfb3c4d-34c9-4862-b16c-8aa846138fdb';
    $pane = new stdClass();
    $pane->pid = 'new-0457653b-0535-4a5a-979c-6c3000ec8588';
    $pane->panel = 'middle';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 0,
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = '';
    $pane->uuid = '0457653b-0535-4a5a-979c-6c3000ec8588';
    $display->content['new-0457653b-0535-4a5a-979c-6c3000ec8588'] = $pane;
    $display->panels['middle'][6] = 'new-0457653b-0535-4a5a-979c-6c3000ec8588';
    $pane = new stdClass();
    $pane->pid = 'new-24235b1e-4b09-4d32-af96-9af1d5c37972';
    $pane->panel = 'middle';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '30',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'comments',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = '';
    $pane->uuid = '24235b1e-4b09-4d32-af96-9af1d5c37972';
    $display->content['new-24235b1e-4b09-4d32-af96-9af1d5c37972'] = $pane;
    $display->panels['middle'][7] = 'new-24235b1e-4b09-4d32-af96-9af1d5c37972';
    $pane = new stdClass();
    $pane->pid = 'new-ac9df9dc-0f86-485f-9b34-cca83ba30c43';
    $pane->panel = 'middle';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'comment-form',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = '';
    $pane->uuid = 'ac9df9dc-0f86-485f-9b34-cca83ba30c43';
    $display->content['new-ac9df9dc-0f86-485f-9b34-cca83ba30c43'] = $pane;
    $display->panels['middle'][8] = 'new-ac9df9dc-0f86-485f-9b34-cca83ba30c43';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['ca_blog_node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'ca_blog_term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'CA Blog: Taxonomy List View Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-blog-list-term ca-blog-list-term-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'ca_blog_categories' => 'ca_blog_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_blog_taxonomy_template',
          'settings' => array(
            'ca_blog_taxonomy_template' => 'ca_blog_taxonomy_template_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f85beb80-3c2e-4be2-9161-53e0b363c474';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-330717ae-d5f3-4757-8a83-09f856dd50db';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_taxonomy-ca_blog_taxonomy_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '330717ae-d5f3-4757-8a83-09f856dd50db';
    $display->content['new-330717ae-d5f3-4757-8a83-09f856dd50db'] = $pane;
    $display->panels['middle'][0] = 'new-330717ae-d5f3-4757-8a83-09f856dd50db';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-330717ae-d5f3-4757-8a83-09f856dd50db';
  $handler->conf['display'] = $display;
  $export['ca_blog_term_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__panel_context_c261e482-be83-4b35-8505-3b9ba4db3941';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Blog: Node Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'blog' => 'blog',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_blog_list_template',
          'settings' => array(
            'ca_blog_list_template' => 'ca_blog_list_worx_aurora_one',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-blog-node ca-blog-node-template-1',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
      'ninth-first' => NULL,
      'ninth-second' => NULL,
      'ninth-third' => NULL,
      'ninth-fourth' => NULL,
      'ninth-fifth' => NULL,
      'ninth-sixth' => NULL,
      'tenth-first' => NULL,
      'tenth-second' => NULL,
      'tenth-third' => NULL,
      'tenth-fourth' => NULL,
      'tenth-fifth' => NULL,
      'tenth-sixth' => NULL,
      'eleventh-first' => NULL,
      'eleventh-second' => NULL,
      'eleventh-third' => NULL,
      'eleventh-fourth' => NULL,
      'eleventh-fifth' => NULL,
      'eleventh-sixth' => NULL,
      'twelfth-first' => NULL,
      'twelfth-second' => NULL,
      'twelfth-third' => NULL,
      'twelfth-fourth' => NULL,
      'twelfth-fifth' => NULL,
      'twelfth-sixth' => NULL,
      'thirteenth-first' => NULL,
      'thirteenth-second' => NULL,
      'thirteenth-third' => NULL,
      'thirteenth-fourth' => NULL,
      'thirteenth-fifth' => NULL,
      'thirteenth-sixth' => NULL,
      'fourteenth-first' => NULL,
      'fourteenth-second' => NULL,
      'fourteenth-third' => NULL,
      'fourteenth-fourth' => NULL,
      'fourteenth-fifth' => NULL,
      'fourteenth-sixth' => NULL,
      'fifteenth-first' => NULL,
      'fifteenth-second' => NULL,
      'fifteenth-third' => NULL,
      'fifteenth-fourth' => NULL,
      'fifteenth-fifth' => NULL,
      'fifteenth-sixth' => NULL,
      'sixteenth-first' => NULL,
      'sixteenth-second' => NULL,
      'sixteenth-third' => NULL,
      'sixteenth-fourth' => NULL,
      'sixteenth-fifth' => NULL,
      'sixteenth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '84c29727-f614-46f1-9fc6-ad2e7051e244';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fdf42d4a-539a-4436-b565-48a35fa0e1fa';
    $pane->panel = 'first-first';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'long',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fdf42d4a-539a-4436-b565-48a35fa0e1fa';
    $display->content['new-fdf42d4a-539a-4436-b565-48a35fa0e1fa'] = $pane;
    $display->panels['first-first'][0] = 'new-fdf42d4a-539a-4436-b565-48a35fa0e1fa';
    $pane = new stdClass();
    $pane->pid = 'new-5cb2cb13-30f9-477a-8c53-50bf0e199159';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_node-ca_blog_node_1a';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5cb2cb13-30f9-477a-8c53-50bf0e199159';
    $display->content['new-5cb2cb13-30f9-477a-8c53-50bf0e199159'] = $pane;
    $display->panels['first-first'][1] = 'new-5cb2cb13-30f9-477a-8c53-50bf0e199159';
    $pane = new stdClass();
    $pane->pid = 'new-d7ed5efa-f422-42ea-ac50-9f7c48bcbeb9';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_node-ca_blog_node_1b';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd7ed5efa-f422-42ea-ac50-9f7c48bcbeb9';
    $display->content['new-d7ed5efa-f422-42ea-ac50-9f7c48bcbeb9'] = $pane;
    $display->panels['first-first'][2] = 'new-d7ed5efa-f422-42ea-ac50-9f7c48bcbeb9';
    $pane = new stdClass();
    $pane->pid = 'new-62fc6be3-84a1-417d-aaee-5ea171c66362';
    $pane->panel = 'first-first';
    $pane->type = 'node_body';
    $pane->subtype = 'node_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = '';
    $pane->uuid = '62fc6be3-84a1-417d-aaee-5ea171c66362';
    $display->content['new-62fc6be3-84a1-417d-aaee-5ea171c66362'] = $pane;
    $display->panels['first-first'][3] = 'new-62fc6be3-84a1-417d-aaee-5ea171c66362';
    $pane = new stdClass();
    $pane->pid = 'new-195de5e2-6b0a-4dc8-8962-50278a2e04b8';
    $pane->panel = 'first-first';
    $pane->type = 'block';
    $pane->subtype = 'addtoany-addtoany_button';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'ca-addtoany-feature',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '195de5e2-6b0a-4dc8-8962-50278a2e04b8';
    $display->content['new-195de5e2-6b0a-4dc8-8962-50278a2e04b8'] = $pane;
    $display->panels['first-first'][4] = 'new-195de5e2-6b0a-4dc8-8962-50278a2e04b8';
    $pane = new stdClass();
    $pane->pid = 'new-bdfb3c4d-34c9-4862-b16c-8aa846138fdb';
    $pane->panel = 'first-first';
    $pane->type = 'node_terms';
    $pane->subtype = 'node_terms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'vid' => '0',
      'term_format' => 'term-links',
      'link' => 1,
      'term_delimiter' => ', ',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = '';
    $pane->uuid = 'bdfb3c4d-34c9-4862-b16c-8aa846138fdb';
    $display->content['new-bdfb3c4d-34c9-4862-b16c-8aa846138fdb'] = $pane;
    $display->panels['first-first'][5] = 'new-bdfb3c4d-34c9-4862-b16c-8aa846138fdb';
    $pane = new stdClass();
    $pane->pid = 'new-0457653b-0535-4a5a-979c-6c3000ec8588';
    $pane->panel = 'first-first';
    $pane->type = 'node_links';
    $pane->subtype = 'node_links';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'build_mode' => 'full',
      'identifier' => '',
      'link' => 0,
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = '';
    $pane->uuid = '0457653b-0535-4a5a-979c-6c3000ec8588';
    $display->content['new-0457653b-0535-4a5a-979c-6c3000ec8588'] = $pane;
    $display->panels['first-first'][6] = 'new-0457653b-0535-4a5a-979c-6c3000ec8588';
    $pane = new stdClass();
    $pane->pid = 'new-24235b1e-4b09-4d32-af96-9af1d5c37972';
    $pane->panel = 'first-first';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '30',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'comments',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = '';
    $pane->uuid = '24235b1e-4b09-4d32-af96-9af1d5c37972';
    $display->content['new-24235b1e-4b09-4d32-af96-9af1d5c37972'] = $pane;
    $display->panels['first-first'][7] = 'new-24235b1e-4b09-4d32-af96-9af1d5c37972';
    $pane = new stdClass();
    $pane->pid = 'new-ac9df9dc-0f86-485f-9b34-cca83ba30c43';
    $pane->panel = 'first-first';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'comment-form',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = '';
    $pane->uuid = 'ac9df9dc-0f86-485f-9b34-cca83ba30c43';
    $display->content['new-ac9df9dc-0f86-485f-9b34-cca83ba30c43'] = $pane;
    $display->panels['first-first'][8] = 'new-ac9df9dc-0f86-485f-9b34-cca83ba30c43';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__panel_context_c261e482-be83-4b35-8505-3b9ba4db3941'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__aurora-blog-taxonomy-category-template-two';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Aurora Blog: Taxonomy Category Template Two',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-blog-list-term ca-blog-list-term-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'ca_blog_categories' => 'ca_blog_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_blog_taxonomy_template',
          'settings' => array(
            'ca_blog_taxonomy_template' => 'ca_blog_taxonomy_template_two',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'aurora-blog-taxonomy-category-template-two',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f85beb80-3c2e-4be2-9161-53e0b363c474';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-330717ae-d5f3-4757-8a83-09f856dd50db';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_taxonomy-ca_blog_taxonomy_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '330717ae-d5f3-4757-8a83-09f856dd50db';
    $display->content['new-330717ae-d5f3-4757-8a83-09f856dd50db'] = $pane;
    $display->panels['first-first'][0] = 'new-330717ae-d5f3-4757-8a83-09f856dd50db';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-330717ae-d5f3-4757-8a83-09f856dd50db';
  $handler->conf['display'] = $display;
  $export['term_view__aurora-blog-taxonomy-category-template-two'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__aurora-blog-taxonomy-list-view-template-three';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Aurora Blog: Taxonomy List View Template Three',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-blog-list-term ca-blog-list-term-template-3',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'ca_blog_categories' => 'ca_blog_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_blog_taxonomy_template',
          'settings' => array(
            'ca_blog_taxonomy_template' => 'ca_blog_taxonomy_template_three',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'aurora-blog-taxonomy-list-view-template-three',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
      'ninth-first' => NULL,
      'ninth-second' => NULL,
      'ninth-third' => NULL,
      'ninth-fourth' => NULL,
      'ninth-fifth' => NULL,
      'ninth-sixth' => NULL,
      'tenth-first' => NULL,
      'tenth-second' => NULL,
      'tenth-third' => NULL,
      'tenth-fourth' => NULL,
      'tenth-fifth' => NULL,
      'tenth-sixth' => NULL,
      'eleventh-first' => NULL,
      'eleventh-second' => NULL,
      'eleventh-third' => NULL,
      'eleventh-fourth' => NULL,
      'eleventh-fifth' => NULL,
      'eleventh-sixth' => NULL,
      'twelfth-first' => NULL,
      'twelfth-second' => NULL,
      'twelfth-third' => NULL,
      'twelfth-fourth' => NULL,
      'twelfth-fifth' => NULL,
      'twelfth-sixth' => NULL,
      'thirteenth-first' => NULL,
      'thirteenth-second' => NULL,
      'thirteenth-third' => NULL,
      'thirteenth-fourth' => NULL,
      'thirteenth-fifth' => NULL,
      'thirteenth-sixth' => NULL,
      'fourteenth-first' => NULL,
      'fourteenth-second' => NULL,
      'fourteenth-third' => NULL,
      'fourteenth-fourth' => NULL,
      'fourteenth-fifth' => NULL,
      'fourteenth-sixth' => NULL,
      'fifteenth-first' => NULL,
      'fifteenth-second' => NULL,
      'fifteenth-third' => NULL,
      'fifteenth-fourth' => NULL,
      'fifteenth-fifth' => NULL,
      'fifteenth-sixth' => NULL,
      'sixteenth-first' => NULL,
      'sixteenth-second' => NULL,
      'sixteenth-third' => NULL,
      'sixteenth-fourth' => NULL,
      'sixteenth-fifth' => NULL,
      'sixteenth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f85beb80-3c2e-4be2-9161-53e0b363c474';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a88e8f7c-c70b-4eba-a449-0cc30aaf80d7';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_taxonomy_recent_blog-ca_blog_taxonomy_recent_blog';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a88e8f7c-c70b-4eba-a449-0cc30aaf80d7';
    $display->content['new-a88e8f7c-c70b-4eba-a449-0cc30aaf80d7'] = $pane;
    $display->panels['first-first'][0] = 'new-a88e8f7c-c70b-4eba-a449-0cc30aaf80d7';
    $pane = new stdClass();
    $pane->pid = 'new-7a4617fb-42f7-46fa-bab8-20daafe0ec5c';
    $pane->panel = 'second-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_taxonomy_grid_view-ca_blog_taxonomy_grid_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7a4617fb-42f7-46fa-bab8-20daafe0ec5c';
    $display->content['new-7a4617fb-42f7-46fa-bab8-20daafe0ec5c'] = $pane;
    $display->panels['second-first'][0] = 'new-7a4617fb-42f7-46fa-bab8-20daafe0ec5c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__aurora-blog-taxonomy-list-view-template-three'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__ca-blog-taxonomy-category-template-two';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'CA Blog: Taxonomy Category Template Two',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-blog-list-term ca-blog-list-term-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'ca_blog_categories' => 'ca_blog_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_blog_taxonomy_template',
          'settings' => array(
            'ca_blog_taxonomy_template' => 'ca_blog_taxonomy_template_two',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'ca-blog-taxonomy-category-template-two',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f85beb80-3c2e-4be2-9161-53e0b363c474';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-330717ae-d5f3-4757-8a83-09f856dd50db';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_taxonomy-ca_blog_taxonomy_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '330717ae-d5f3-4757-8a83-09f856dd50db';
    $display->content['new-330717ae-d5f3-4757-8a83-09f856dd50db'] = $pane;
    $display->panels['middle'][0] = 'new-330717ae-d5f3-4757-8a83-09f856dd50db';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-330717ae-d5f3-4757-8a83-09f856dd50db';
  $handler->conf['display'] = $display;
  $export['term_view__ca-blog-taxonomy-category-template-two'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__ca-blog-taxonomy-list-view-template-three';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'CA Blog: Taxonomy List View Template Three',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-blog-list-term ca-blog-list-term-template-3',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'ca_blog_categories' => 'ca_blog_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_blog_taxonomy_template',
          'settings' => array(
            'ca_blog_taxonomy_template' => 'ca_blog_taxonomy_template_three',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'name' => 'ca-blog-taxonomy-list-view-template-three',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f85beb80-3c2e-4be2-9161-53e0b363c474';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a5a22047-345b-485c-a68c-687196a4c309';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_taxonomy_recent_blog-ca_blog_taxonomy_recent_blog';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a5a22047-345b-485c-a68c-687196a4c309';
    $display->content['new-a5a22047-345b-485c-a68c-687196a4c309'] = $pane;
    $display->panels['middle'][0] = 'new-a5a22047-345b-485c-a68c-687196a4c309';
    $pane = new stdClass();
    $pane->pid = 'new-eea11286-57b2-4e30-8adc-47343d7763ed';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_taxonomy_grid_view-ca_blog_taxonomy_grid_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'eea11286-57b2-4e30-8adc-47343d7763ed';
    $display->content['new-eea11286-57b2-4e30-8adc-47343d7763ed'] = $pane;
    $display->panels['middle'][1] = 'new-eea11286-57b2-4e30-8adc-47343d7763ed';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__ca-blog-taxonomy-list-view-template-three'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_9164037a-12d4-4775-8213-b5956ea77b62';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Blog: Taxonomy Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-blog-list-term ca-blog-list-term-template-1',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'ca_blog_categories' => 'ca_blog_categories',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_blog_taxonomy_template',
          'settings' => array(
            'ca_blog_taxonomy_template' => 'ca_blog_taxonomy_template_one',
          ),
          'not' => FALSE,
        ),
        2 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f85beb80-3c2e-4be2-9161-53e0b363c474';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-330717ae-d5f3-4757-8a83-09f856dd50db';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_taxonomy-ca_blog_taxonomy_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '330717ae-d5f3-4757-8a83-09f856dd50db';
    $display->content['new-330717ae-d5f3-4757-8a83-09f856dd50db'] = $pane;
    $display->panels['first-first'][0] = 'new-330717ae-d5f3-4757-8a83-09f856dd50db';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-330717ae-d5f3-4757-8a83-09f856dd50db';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_9164037a-12d4-4775-8213-b5956ea77b62'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function ca_blog_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_blog_add_blog';
  $page->task = 'page';
  $page->admin_title = 'CA Blog: Add Blog';
  $page->admin_description = '';
  $page->path = 'blog/add_blog';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 246778053,
            3 => 246307762,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Add Blog',
    'name' => 'navigation',
    'weight' => '1',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_blog_add_blog__ca_blog_add_blog_worx_aurora_tem';
  $handler->task = 'page';
  $handler->subtask = 'ca_blog_add_blog';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Blog: Add Blog Template one',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'ca_blog_add_blog_worx_aurora_tem',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '1a83e00c-986a-4d33-b926-8e6975d47f27';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-daf4c506-dd51-4a41-8b6f-2ff5a86a02f3';
    $pane->panel = 'first-first';
    $pane->type = 'context_admin';
    $pane->subtype = 'context_admin:node_create_menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context_admin_options' => 'node_create_menu',
      'context_admin_options_items' => 'blog',
      'context_admin_use_node_edit' => 0,
      'context' => 'empty',
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'daf4c506-dd51-4a41-8b6f-2ff5a86a02f3';
    $display->content['new-daf4c506-dd51-4a41-8b6f-2ff5a86a02f3'] = $pane;
    $display->panels['first-first'][0] = 'new-daf4c506-dd51-4a41-8b6f-2ff5a86a02f3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-daf4c506-dd51-4a41-8b6f-2ff5a86a02f3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_blog_add_blog_menu_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_blog_add_blog';
  $handler->handler = 'menu_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Context Admin',
    'no_blocks' => FALSE,
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'context_admin_options' => 'node_create_menu',
    'context_admin_options_items' => 'blog',
    'context_admin_use_node_edit' => 0,
    'submitted_context' => 'empty',
  );
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_blog_add_blog'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_blog_administration';
  $page->task = 'page';
  $page->admin_title = 'CA Blog: Administration';
  $page->admin_description = '';
  $page->path = 'blog/admin/administration';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 246778053,
            3 => 246307762,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'Administer',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administration',
      'name' => 'navigation',
      'weight' => '2',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_blog_administration_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_blog_administration';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Blog: Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 4,
              2 => 246778053,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-blog-admin',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'CA Blog: Admin';
  $display->uuid = '6a36d322-75b3-4275-b983-bf8707a41cf5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f6a10796-fde7-4d92-85eb-a71654f1f96b';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_admin-ca_blog_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f6a10796-fde7-4d92-85eb-a71654f1f96b';
    $display->content['new-f6a10796-fde7-4d92-85eb-a71654f1f96b'] = $pane;
    $display->panels['middle'][0] = 'new-f6a10796-fde7-4d92-85eb-a71654f1f96b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_blog_administration_panel_context_2';
  $handler->task = 'page';
  $handler->subtask = 'ca_blog_administration';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'CA Blog: Writer Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 246307762,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'CA Blog: Admin';
  $display->uuid = '8221b6f2-b5d5-45c4-a487-a7b69e2e95d4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9aa97f7b-4f2f-4f1a-a9aa-eb6dd8166dc2';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_admin-ca_blog_writer_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9aa97f7b-4f2f-4f1a-a9aa-eb6dd8166dc2';
    $display->content['new-9aa97f7b-4f2f-4f1a-a9aa-eb6dd8166dc2'] = $pane;
    $display->panels['middle'][0] = 'new-9aa97f7b-4f2f-4f1a-a9aa-eb6dd8166dc2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_blog_administration__panel_context_6141ece3-9f74-47f9-ba44-1cb844e25f02';
  $handler->task = 'page';
  $handler->subtask = 'ca_blog_administration';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Blog: Admin Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 3,
              1 => 4,
              2 => 246778053,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-blog-admin',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'CA Blog: Admin';
  $display->uuid = '6a36d322-75b3-4275-b983-bf8707a41cf5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f6a10796-fde7-4d92-85eb-a71654f1f96b';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_admin-ca_blog_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f6a10796-fde7-4d92-85eb-a71654f1f96b';
    $display->content['new-f6a10796-fde7-4d92-85eb-a71654f1f96b'] = $pane;
    $display->panels['first-first'][0] = 'new-f6a10796-fde7-4d92-85eb-a71654f1f96b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_blog_administration__panel_context_c1af1adc-effc-42d2-8d43-d6406cdcf5db';
  $handler->task = 'page';
  $handler->subtask = 'ca_blog_administration';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Aurora Blog: Writer Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 246307762,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'CA Blog: Admin';
  $display->uuid = '8221b6f2-b5d5-45c4-a487-a7b69e2e95d4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9aa97f7b-4f2f-4f1a-a9aa-eb6dd8166dc2';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_admin-ca_blog_writer_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9aa97f7b-4f2f-4f1a-a9aa-eb6dd8166dc2';
    $display->content['new-9aa97f7b-4f2f-4f1a-a9aa-eb6dd8166dc2'] = $pane;
    $display->panels['middle'][0] = 'new-9aa97f7b-4f2f-4f1a-a9aa-eb6dd8166dc2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_blog_administration'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_blog_administration_taxonomy';
  $page->task = 'page';
  $page->admin_title = 'CA Blog: Taxonomy Admin';
  $page->admin_description = '';
  $page->path = 'blog/admin/taxonomy';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 246778053,
            3 => 246307762,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'tab',
    'title' => 'Taxonomy Admin',
    'name' => 'navigation',
    'weight' => '5',
    'parent' => array(
      'type' => 'tab',
      'title' => 'Administration',
      'name' => 'navigation',
      'weight' => '2',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_blog_administration_taxonomy__panel_context_13947a04-26b6-4724-96d3-2717878929c2';
  $handler->task = 'page';
  $handler->subtask = 'ca_blog_administration_taxonomy';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'CA Blog: Taxonomy Worx Aurora Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-blog-admin',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'CA Blog: Taxonomy Admin';
  $display->uuid = '0f8cda61-96d6-4ddd-9231-80f0cf07fa32';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ed264c11-c15d-4bac-a0ac-6b0839dd0c29';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_taxonomy_admin-ca_blog_taxonomy_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ed264c11-c15d-4bac-a0ac-6b0839dd0c29';
    $display->content['new-ed264c11-c15d-4bac-a0ac-6b0839dd0c29'] = $pane;
    $display->panels['first-first'][0] = 'new-ed264c11-c15d-4bac-a0ac-6b0839dd0c29';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_blog_administration_taxonomy_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_blog_administration_taxonomy';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'CA Blog: Taxonomy Admin',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(),
      'logic' => 'and',
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-admin ca-blog-admin',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'CA Blog: Taxonomy Admin';
  $display->uuid = '0f8cda61-96d6-4ddd-9231-80f0cf07fa32';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ed264c11-c15d-4bac-a0ac-6b0839dd0c29';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_taxonomy_admin-ca_blog_taxonomy_admin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ed264c11-c15d-4bac-a0ac-6b0839dd0c29';
    $display->content['new-ed264c11-c15d-4bac-a0ac-6b0839dd0c29'] = $pane;
    $display->panels['middle'][0] = 'new-ed264c11-c15d-4bac-a0ac-6b0839dd0c29';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_blog_administration_taxonomy'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ca_blog_list_view';
  $page->task = 'page';
  $page->admin_title = 'CA Blog: List View';
  $page->admin_description = '';
  $page->path = 'blog/view';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array(
    'type' => 'default tab',
    'title' => 'View',
    'name' => 'navigation',
    'weight' => '0',
    'parent' => array(
      'type' => 'normal',
      'title' => 'Blog',
      'name' => 'main-menu',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_blog_list_view__panel_context_0c900cdc-df9c-4daa-8ba0-452b3c0a2423';
  $handler->task = 'page';
  $handler->subtask = 'ca_blog_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -30;
  $handler->conf = array(
    'title' => 'Aurora Blog: List View Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_blog_list_template',
          'settings' => array(
            'ca_blog_list_template' => 'ca_blog_list_template_one',
          ),
          'not' => FALSE,
        ),
      ),
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-blog-list ca-blog-list-template-1',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6e6c95f1-bd3d-4441-85a3-e1c4b462b1e8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cc031ae6-b575-4ad6-a73e-83d4264ffc72';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_list-ca_blog_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc031ae6-b575-4ad6-a73e-83d4264ffc72';
    $display->content['new-cc031ae6-b575-4ad6-a73e-83d4264ffc72'] = $pane;
    $display->panels['first-first'][0] = 'new-cc031ae6-b575-4ad6-a73e-83d4264ffc72';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_blog_list_view_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ca_blog_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -27;
  $handler->conf = array(
    'title' => 'CA Blog: List View Template One',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'ca_blog_list_template',
          'settings' => array(
            'ca_blog_list_template' => 'ca_blog_list_template_one',
          ),
          'not' => FALSE,
        ),
      ),
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-blog-list ca-blog-list-template-1',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6e6c95f1-bd3d-4441-85a3-e1c4b462b1e8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cc031ae6-b575-4ad6-a73e-83d4264ffc72';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_list-ca_blog_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc031ae6-b575-4ad6-a73e-83d4264ffc72';
    $display->content['new-cc031ae6-b575-4ad6-a73e-83d4264ffc72'] = $pane;
    $display->panels['middle'][0] = 'new-cc031ae6-b575-4ad6-a73e-83d4264ffc72';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_blog_list_view__aurora-blog-list-view-category-side';
  $handler->task = 'page';
  $handler->subtask = 'ca_blog_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -29;
  $handler->conf = array(
    'title' => 'Aurora Blog: List View Category Side',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'ca_blog_list_template',
          'settings' => array(
            'ca_blog_list_template' => 'ca_blog_list_template_two',
          ),
          'not' => FALSE,
        ),
      ),
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-blog-list ca-blog-list-template-1',
    'name' => 'aurora-blog-list-view-category-side',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
      'ninth-first' => NULL,
      'ninth-second' => NULL,
      'ninth-third' => NULL,
      'ninth-fourth' => NULL,
      'ninth-fifth' => NULL,
      'ninth-sixth' => NULL,
      'tenth-first' => NULL,
      'tenth-second' => NULL,
      'tenth-third' => NULL,
      'tenth-fourth' => NULL,
      'tenth-fifth' => NULL,
      'tenth-sixth' => NULL,
      'eleventh-first' => NULL,
      'eleventh-second' => NULL,
      'eleventh-third' => NULL,
      'eleventh-fourth' => NULL,
      'eleventh-fifth' => NULL,
      'eleventh-sixth' => NULL,
      'twelfth-first' => NULL,
      'twelfth-second' => NULL,
      'twelfth-third' => NULL,
      'twelfth-fourth' => NULL,
      'twelfth-fifth' => NULL,
      'twelfth-sixth' => NULL,
      'thirteenth-first' => NULL,
      'thirteenth-second' => NULL,
      'thirteenth-third' => NULL,
      'thirteenth-fourth' => NULL,
      'thirteenth-fifth' => NULL,
      'thirteenth-sixth' => NULL,
      'fourteenth-first' => NULL,
      'fourteenth-second' => NULL,
      'fourteenth-third' => NULL,
      'fourteenth-fourth' => NULL,
      'fourteenth-fifth' => NULL,
      'fourteenth-sixth' => NULL,
      'fifteenth-first' => NULL,
      'fifteenth-second' => NULL,
      'fifteenth-third' => NULL,
      'fifteenth-fourth' => NULL,
      'fifteenth-fifth' => NULL,
      'fifteenth-sixth' => NULL,
      'sixteenth-first' => NULL,
      'sixteenth-second' => NULL,
      'sixteenth-third' => NULL,
      'sixteenth-fourth' => NULL,
      'sixteenth-fifth' => NULL,
      'sixteenth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6e6c95f1-bd3d-4441-85a3-e1c4b462b1e8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cc031ae6-b575-4ad6-a73e-83d4264ffc72';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_list-ca_blog_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc031ae6-b575-4ad6-a73e-83d4264ffc72';
    $display->content['new-cc031ae6-b575-4ad6-a73e-83d4264ffc72'] = $pane;
    $display->panels['first-first'][0] = 'new-cc031ae6-b575-4ad6-a73e-83d4264ffc72';
    $pane = new stdClass();
    $pane->pid = 'new-54d85daf-a57e-473f-8c7a-f1b712f2a225';
    $pane->panel = 'first-second';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_category_menu-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '54d85daf-a57e-473f-8c7a-f1b712f2a225';
    $display->content['new-54d85daf-a57e-473f-8c7a-f1b712f2a225'] = $pane;
    $display->panels['first-second'][0] = 'new-54d85daf-a57e-473f-8c7a-f1b712f2a225';
    $pane = new stdClass();
    $pane->pid = 'new-8e557228-6772-4c73-a745-5761c7dae356';
    $pane->panel = 'first-second';
    $pane->type = 'views';
    $pane->subtype = 'blog_archive';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'blog_archive_block',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8e557228-6772-4c73-a745-5761c7dae356';
    $display->content['new-8e557228-6772-4c73-a745-5761c7dae356'] = $pane;
    $display->panels['first-second'][1] = 'new-8e557228-6772-4c73-a745-5761c7dae356';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_blog_list_view__ca-blog-list-view-category-side';
  $handler->task = 'page';
  $handler->subtask = 'ca_blog_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -26;
  $handler->conf = array(
    'title' => 'CA Blog: List View Category Side',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'ca_blog_list_template',
          'settings' => array(
            'ca_blog_list_template' => 'ca_blog_list_template_two',
          ),
          'not' => FALSE,
        ),
      ),
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-blog-list ca-blog-list-template-1',
    'name' => 'ca-blog-list-view-category-side',
  );
  $display = new panels_display();
  $display->layout = 'twocol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'left' => NULL,
      'right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6e6c95f1-bd3d-4441-85a3-e1c4b462b1e8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cc031ae6-b575-4ad6-a73e-83d4264ffc72';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_list-ca_blog_list_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cc031ae6-b575-4ad6-a73e-83d4264ffc72';
    $display->content['new-cc031ae6-b575-4ad6-a73e-83d4264ffc72'] = $pane;
    $display->panels['left'][0] = 'new-cc031ae6-b575-4ad6-a73e-83d4264ffc72';
    $pane = new stdClass();
    $pane->pid = 'new-10393797-fb18-4d0a-b8f7-ae24826766e8';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'blog_category_menu-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '10393797-fb18-4d0a-b8f7-ae24826766e8';
    $display->content['new-10393797-fb18-4d0a-b8f7-ae24826766e8'] = $pane;
    $display->panels['right'][0] = 'new-10393797-fb18-4d0a-b8f7-ae24826766e8';
    $pane = new stdClass();
    $pane->pid = 'new-338328f2-6d37-44dc-bd02-e6799ee93826';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'blog_archive';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'blog_archive_block',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '338328f2-6d37-44dc-bd02-e6799ee93826';
    $display->content['new-338328f2-6d37-44dc-bd02-e6799ee93826'] = $pane;
    $display->panels['right'][1] = 'new-338328f2-6d37-44dc-bd02-e6799ee93826';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_blog_list_view__panel_context_3515c377-6227-42b5-89f2-2daff947fcf9';
  $handler->task = 'page';
  $handler->subtask = 'ca_blog_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -25;
  $handler->conf = array(
    'title' => 'CA Blog: List View Template Three',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'ca_blog_list_template',
          'settings' => array(
            'ca_blog_list_template' => 'ca_blog_list_template_three',
          ),
          'not' => FALSE,
        ),
      ),
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-blog-list ca-blog-list-template-3',
    'name' => '',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Worx Blog';
  $display->uuid = '6e6c95f1-bd3d-4441-85a3-e1c4b462b1e8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c7ad0d05-c572-458a-9f7c-bc5aa61f4731';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_view_recent_blog-ca_blog_recent_blog';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c7ad0d05-c572-458a-9f7c-bc5aa61f4731';
    $display->content['new-c7ad0d05-c572-458a-9f7c-bc5aa61f4731'] = $pane;
    $display->panels['middle'][0] = 'new-c7ad0d05-c572-458a-9f7c-bc5aa61f4731';
    $pane = new stdClass();
    $pane->pid = 'new-52f10f62-ed42-4b71-92e7-2ed5a4c8f643';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_grid_view-ca_blog_grid_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '52f10f62-ed42-4b71-92e7-2ed5a4c8f643';
    $display->content['new-52f10f62-ed42-4b71-92e7-2ed5a4c8f643'] = $pane;
    $display->panels['middle'][1] = 'new-52f10f62-ed42-4b71-92e7-2ed5a4c8f643';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ca_blog_list_view__aurora-blog-list-view-template-three';
  $handler->task = 'page';
  $handler->subtask = 'ca_blog_list_view';
  $handler->handler = 'panel_context';
  $handler->weight = -28;
  $handler->conf = array(
    'title' => 'Aurora Blog: List View Template Three',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'ca_blog_list_template',
          'settings' => array(
            'ca_blog_list_template' => 'ca_blog_list_template_three',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'worx_aurora_base_settings',
          'settings' => array(
            'worx_aurora_base_enable' => 'worx_aurora_base_enabled',
          ),
          'not' => FALSE,
        ),
      ),
    ),
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'ca-blog-list ca-blog-list-template-3',
    'name' => 'aurora-blog-list-view-template-three',
  );
  $display = new panels_display();
  $display->layout = 'worx_aurora';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'first-first' => NULL,
      'first-second' => NULL,
      'first-third' => NULL,
      'first-fourth' => NULL,
      'first-fifth' => NULL,
      'first-sixth' => NULL,
      'second-first' => NULL,
      'second-second' => NULL,
      'second-third' => NULL,
      'second-fourth' => NULL,
      'second-fifth' => NULL,
      'second-sixth' => NULL,
      'third-first' => NULL,
      'third-second' => NULL,
      'third-third' => NULL,
      'third-fourth' => NULL,
      'third-fifth' => NULL,
      'third-sixth' => NULL,
      'fourth-first' => NULL,
      'fourth-second' => NULL,
      'fourth-third' => NULL,
      'fourth-fourth' => NULL,
      'fourth-fifth' => NULL,
      'fourth-sixth' => NULL,
      'fifth-first' => NULL,
      'fifth-second' => NULL,
      'fifth-third' => NULL,
      'fifth-fourth' => NULL,
      'fifth-fifth' => NULL,
      'fifth-sixth' => NULL,
      'sixth-first' => NULL,
      'sixth-second' => NULL,
      'sixth-third' => NULL,
      'sixth-fourth' => NULL,
      'sixth-fifth' => NULL,
      'sixth-sixth' => NULL,
      'seventh-first' => NULL,
      'seventh-second' => NULL,
      'seventh-third' => NULL,
      'seventh-fourth' => NULL,
      'seventh-fifth' => NULL,
      'seventh-sixth' => NULL,
      'eighth-first' => NULL,
      'eighth-second' => NULL,
      'eighth-third' => NULL,
      'eighth-fourth' => NULL,
      'eighth-fifth' => NULL,
      'eighth-sixth' => NULL,
      'ninth-first' => NULL,
      'ninth-second' => NULL,
      'ninth-third' => NULL,
      'ninth-fourth' => NULL,
      'ninth-fifth' => NULL,
      'ninth-sixth' => NULL,
      'tenth-first' => NULL,
      'tenth-second' => NULL,
      'tenth-third' => NULL,
      'tenth-fourth' => NULL,
      'tenth-fifth' => NULL,
      'tenth-sixth' => NULL,
      'eleventh-first' => NULL,
      'eleventh-second' => NULL,
      'eleventh-third' => NULL,
      'eleventh-fourth' => NULL,
      'eleventh-fifth' => NULL,
      'eleventh-sixth' => NULL,
      'twelfth-first' => NULL,
      'twelfth-second' => NULL,
      'twelfth-third' => NULL,
      'twelfth-fourth' => NULL,
      'twelfth-fifth' => NULL,
      'twelfth-sixth' => NULL,
      'thirteenth-first' => NULL,
      'thirteenth-second' => NULL,
      'thirteenth-third' => NULL,
      'thirteenth-fourth' => NULL,
      'thirteenth-fifth' => NULL,
      'thirteenth-sixth' => NULL,
      'fourteenth-first' => NULL,
      'fourteenth-second' => NULL,
      'fourteenth-third' => NULL,
      'fourteenth-fourth' => NULL,
      'fourteenth-fifth' => NULL,
      'fourteenth-sixth' => NULL,
      'fifteenth-first' => NULL,
      'fifteenth-second' => NULL,
      'fifteenth-third' => NULL,
      'fifteenth-fourth' => NULL,
      'fifteenth-fifth' => NULL,
      'fifteenth-sixth' => NULL,
      'sixteenth-first' => NULL,
      'sixteenth-second' => NULL,
      'sixteenth-third' => NULL,
      'sixteenth-fourth' => NULL,
      'sixteenth-fifth' => NULL,
      'sixteenth-sixth' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Worx Blog';
  $display->uuid = '6e6c95f1-bd3d-4441-85a3-e1c4b462b1e8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c7ad0d05-c572-458a-9f7c-bc5aa61f4731';
    $pane->panel = 'first-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_view_recent_blog-ca_blog_recent_blog';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c7ad0d05-c572-458a-9f7c-bc5aa61f4731';
    $display->content['new-c7ad0d05-c572-458a-9f7c-bc5aa61f4731'] = $pane;
    $display->panels['first-first'][0] = 'new-c7ad0d05-c572-458a-9f7c-bc5aa61f4731';
    $pane = new stdClass();
    $pane->pid = 'new-52f10f62-ed42-4b71-92e7-2ed5a4c8f643';
    $pane->panel = 'second-first';
    $pane->type = 'views_panes';
    $pane->subtype = 'ca_blog_grid_view-ca_blog_grid_view';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '52f10f62-ed42-4b71-92e7-2ed5a4c8f643';
    $display->content['new-52f10f62-ed42-4b71-92e7-2ed5a4c8f643'] = $pane;
    $display->panels['second-first'][0] = 'new-52f10f62-ed42-4b71-92e7-2ed5a4c8f643';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ca_blog_list_view'] = $page;

  return $pages;

}
