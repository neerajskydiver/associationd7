<?php
/**
 * @file
 * semi_attendee.features.inc
 */

/**
 * Implements hook_node_info().
 */
function semi_attendee_node_info() {
  $items = array(
    'attendee' => array(
      'name' => t('Attendee'),
      'base' => 'node_content',
      'description' => t('Content type for adding new Attendee.'),
      'has_title' => '1',
      'title_label' => t('Event'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
