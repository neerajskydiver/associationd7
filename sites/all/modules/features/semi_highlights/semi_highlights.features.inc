<?php
/**
 * @file
 * semi_highlights.features.inc
 */

/**
 * Implements hook_node_info().
 */
function semi_highlights_node_info() {
  $items = array(
    'highlights' => array(
      'name' => t('Highlights'),
      'base' => 'node_content',
      'description' => t('Content type to show the Highlights 3rd party links'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
