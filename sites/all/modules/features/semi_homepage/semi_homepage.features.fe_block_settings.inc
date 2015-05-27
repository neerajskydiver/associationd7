<?php
/**
 * @file
 * semi_homepage.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function semi_homepage_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-ad_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'ad_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'bootstrap_barrio' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap_barrio',
        'weight' => 0,
      ),
      'semi' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'semi',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['block-homepage_top_left_block'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'homepage_top_left_block',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'bootstrap_barrio' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap_barrio',
        'weight' => 0,
      ),
      'semi' => array(
        'region' => 'top_left',
        'status' => 1,
        'theme' => 'semi',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-industry_news'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'industry_news',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'bootstrap_barrio' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap_barrio',
        'weight' => 0,
      ),
      'semi' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'semi',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-market-info-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-market-info-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'bootstrap_barrio' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap_barrio',
        'weight' => 0,
      ),
      'semi' => array(
        'region' => 'top',
        'status' => 1,
        'theme' => 'semi',
        'weight' => -9,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-top-right-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-top-right-menu',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'bootstrap_barrio' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap_barrio',
        'weight' => 0,
      ),
      'semi' => array(
        'region' => 'top_right',
        'status' => 1,
        'theme' => 'semi',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-page_banner-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'page_banner-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'bootstrap_barrio' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap_barrio',
        'weight' => 0,
      ),
      'semi' => array(
        'region' => 'slider',
        'status' => 1,
        'theme' => 'semi',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
