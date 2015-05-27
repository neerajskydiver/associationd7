<?php
/**
 * @file
 * semi_global.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function semi_global_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

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

  return $export;
}
