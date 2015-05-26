<?php
/**
 * @file
 * semi_homepage.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function semi_homepage_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Industry News';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'industry_news';
  $fe_block_boxes->body = '<p><iframe frameborder="0" height="610" marginheight="0" marginwidth="0" scrolling="no" src="http://www.magentanews.com/magenta/xml/html/89/2/29837.html" width="400">&amp;amp;amp;lt;a href=&amp;amp;quot;http://www.magentanews.com/magenta/xml/html/89/2/29837.html&amp;amp;quot;&amp;amp;amp;gt;Feed&amp;amp;amp;lt;/a&amp;amp;amp;gt;</iframe></p>';

  $export['industry_news'] = $fe_block_boxes;

  return $export;
}
