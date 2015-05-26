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
