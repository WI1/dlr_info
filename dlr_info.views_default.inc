<?php

/**
 * Implementation of hook_views_default_views().
 */
function dlr_info_views_default_views() {
  $views = array();

  // Exported view: info_listing
  $view = new view;
  $view->name = 'info_listing';
  $view->description = 'Lists Info of a group node on a separate item in features menu';
  $view->tag = '';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Standards', 'default');
  $handler->override_option('arguments', array(
    'nid' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'Alle',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'php',
      'default_argument' => '',
      'validate_type' => 'og_group_types',
      'validate_fail' => 'not found',
      'break_phrase' => 0,
      'not' => 0,
      'id' => 'nid',
      'table' => 'node',
      'field' => 'nid',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        2 => 0,
        3 => 0,
        11 => 0,
        4 => 0,
        5 => 0,
        8 => 0,
        7 => 0,
        10 => 0,
        6 => 0,
        9 => 0,
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_taxonomy_tid_term_page' => 0,
      'default_taxonomy_tid_node' => 0,
      'default_taxonomy_tid_limit' => 0,
      'default_taxonomy_tid_vids' => array(
        5 => 0,
        1 => 0,
        2 => 0,
        8 => 0,
        4 => 0,
        9 => 0,
        7 => 0,
        6 => 0,
      ),
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_php' => '$space = spaces_get_space();
$gid = $space->id;
return $gid;',
      'validate_argument_node_type' => array(
        'blog' => 0,
        'event' => 0,
        'feed_ical' => 0,
        'feed_ical_item' => 0,
        'group' => 0,
        'profile' => 0,
        'focusgroup' => 0,
        'organisation' => 0,
        'project' => 0,
        'folder' => 0,
        'book' => 0,
        'simplenews' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_argument_vocabulary' => array(
        5 => 0,
        1 => 0,
        2 => 0,
        8 => 0,
        4 => 0,
        9 => 0,
        7 => 0,
        6 => 0,
      ),
      'validate_argument_type' => 'tid',
      'validate_argument_transform' => 0,
      'validate_user_restrict_roles' => 0,
      'validate_argument_is_member' => '0',
      'validate_argument_group_node_type' => array(
        'group' => 0,
        'focusgroup' => 0,
        'project' => 0,
      ),
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'type_groups_all' => array(
      'operator' => '=',
      'value' => '',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type_groups_all',
      'table' => 'og',
      'field' => 'type_groups_all',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Info');
  $handler->override_option('row_plugin', 'node');
  $handler->override_option('row_options', array(
    'relationship' => 'none',
    'build_mode' => 'full',
    'links' => 1,
    'comments' => 0,
  ));
  $handler = $view->new_display('page', 'Seite', 'page_1');
  $handler->override_option('path', 'info');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Info',
    'description' => '',
    'weight' => '0',
    'name' => 'features',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);
  $translatables['info_listing'] = array(
    t('Block'),
    t('Info'),
    t('Seite'),
    t('Standards'),
  );

  $views[$view->name] = $view;

  return $views;
}
