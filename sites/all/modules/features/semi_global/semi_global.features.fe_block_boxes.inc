<?php
/**
 * @file
 * semi_global.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function semi_global_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Top Left Block';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'homepage_top_left_block';
  $fe_block_boxes->body = '<div class="top_left_phone">+555.123.4567</div>';

  $export['homepage_top_left_block'] = $fe_block_boxes;

  return $export;
}
