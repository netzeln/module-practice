<?php
/**
 * @file
 * site_information_and_display.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function site_information_and_display_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_favorite-pet:pet_display.
  $menu_links['navigation_favorite-pet:pet_display'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'pet_display',
    'router_path' => 'pet_display',
    'link_title' => 'Favorite Pet',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'navigation_favorite-pet:pet_display',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: navigation_my-groceries:groceries_list.
  $menu_links['navigation_my-groceries:groceries_list'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'groceries_list',
    'router_path' => 'groceries_list',
    'link_title' => 'My Groceries',
    'options' => array(
      'identifier' => 'navigation_my-groceries:groceries_list',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Favorite Pet');
  t('My Groceries');

  return $menu_links;
}
