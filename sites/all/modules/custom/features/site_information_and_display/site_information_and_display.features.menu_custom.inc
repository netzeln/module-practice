<?php
/**
 * @file
 * site_information_and_display.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function site_information_and_display_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-my-menu-module.
  $menus['menu-my-menu-module'] = array(
    'menu_name' => 'menu-my-menu-module',
    'title' => 'My Menu Module',
    'description' => 'test',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('My Menu Module');
  t('test');

  return $menus;
}
