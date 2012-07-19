<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function dlr_info_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:info
  $menu_links['features:info'] = array(
    'menu_name' => 'features',
    'link_path' => 'info',
    'router_path' => 'info',
    'link_title' => 'Info',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Info');


  return $menu_links;
}
