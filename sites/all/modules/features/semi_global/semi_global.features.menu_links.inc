<?php
/**
 * @file
 * semi_global.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function semi_global_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about:node/1
  $menu_links['main-menu_about:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'attributes' => array(),
      'identifier' => 'main-menu_about:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_collaboration:node/1
  $menu_links['main-menu_collaboration:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Collaboration',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_collaboration:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_events:node/1
  $menu_links['main-menu_events:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_events:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_industry-feed:node/1
  $menu_links['main-menu_industry-feed:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Industry Feed',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_industry-feed:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_trending:node/2',
  );
  // Exported menu link: main-menu_machine:node/1
  $menu_links['main-menu_machine:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Machine',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_machine:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_about:node/1',
  );
  // Exported menu link: main-menu_resources:node/1
  $menu_links['main-menu_resources:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_resources:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_trending:node/2
  $menu_links['main-menu_trending:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Trending',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_trending:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-market-info-menu_advocacy:node/1
  $menu_links['menu-market-info-menu_advocacy:node/1'] = array(
    'menu_name' => 'menu-market-info-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Advocacy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-market-info-menu_advocacy:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-market-info-menu_market-info:node/1
  $menu_links['menu-market-info-menu_market-info:node/1'] = array(
    'menu_name' => 'menu-market-info-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Market Info',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-market-info-menu_market-info:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-market-info-menu_standards:node/1
  $menu_links['menu-market-info-menu_standards:node/1'] = array(
    'menu_name' => 'menu-market-info-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Standards',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-market-info-menu_standards:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-top-right-menu_china:node/1
  $menu_links['menu-top-right-menu_china:node/1'] = array(
    'menu_name' => 'menu-top-right-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'China',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-right-menu_china:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'menu-top-right-menu_select-regions:node/1',
  );
  // Exported menu link: menu-top-right-menu_europe:node/1
  $menu_links['menu-top-right-menu_europe:node/1'] = array(
    'menu_name' => 'menu-top-right-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Europe',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-right-menu_europe:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'menu-top-right-menu_select-regions:node/1',
  );
  // Exported menu link: menu-top-right-menu_japan:node/1
  $menu_links['menu-top-right-menu_japan:node/1'] = array(
    'menu_name' => 'menu-top-right-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Japan',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-right-menu_japan:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'menu-top-right-menu_select-regions:node/1',
  );
  // Exported menu link: menu-top-right-menu_korea:node/1
  $menu_links['menu-top-right-menu_korea:node/1'] = array(
    'menu_name' => 'menu-top-right-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Korea',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-right-menu_korea:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'menu-top-right-menu_select-regions:node/1',
  );
  // Exported menu link: menu-top-right-menu_log-on:node/1
  $menu_links['menu-top-right-menu_log-on:node/1'] = array(
    'menu_name' => 'menu-top-right-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'LOG ON',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-right-menu_log-on:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-top-right-menu_select-regions:node/1
  $menu_links['menu-top-right-menu_select-regions:node/1'] = array(
    'menu_name' => 'menu-top-right-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Select Regions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-right-menu_select-regions:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-top-right-menu_semi-members:node/1
  $menu_links['menu-top-right-menu_semi-members:node/1'] = array(
    'menu_name' => 'menu-top-right-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'SEMI MEMBERS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-top-right-menu_semi-members:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Advocacy');
  t('China');
  t('Collaboration');
  t('Europe');
  t('Events');
  t('Home');
  t('Industry Feed');
  t('Japan');
  t('Korea');
  t('LOG ON');
  t('Machine');
  t('Market Info');
  t('Resources');
  t('SEMI MEMBERS');
  t('Select Regions');
  t('Standards');
  t('Trending');


  return $menu_links;
}
