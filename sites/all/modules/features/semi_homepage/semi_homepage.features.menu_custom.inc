<?php
/**
 * @file
 * semi_homepage.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function semi_homepage_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-market-info-menu.
  $menus['menu-market-info-menu'] = array(
    'menu_name' => 'menu-market-info-menu',
    'title' => 'Market info Menu',
    'description' => '',
  );
  // Exported menu: menu-top-right-menu.
  $menus['menu-top-right-menu'] = array(
    'menu_name' => 'menu-top-right-menu',
    'title' => 'Top Right Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Main menu');
  t('Market info Menu');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('Top Right Menu');


  return $menus;
}
