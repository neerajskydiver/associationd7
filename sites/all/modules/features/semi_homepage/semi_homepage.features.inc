<?php
/**
 * @file
 * semi_homepage.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function semi_homepage_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function semi_homepage_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function semi_homepage_image_default_styles() {
  $styles = array();

  // Exported image style: event_homapge.
  $styles['event_homapge'] = array(
    'label' => 'Event Homapge (220x130)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 220,
          'height' => 130,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 220,
          'height' => 130,
        ),
        'weight' => 2,
      ),
    ),
  );

  // Exported image style: highlight_featured.
  $styles['highlight_featured'] = array(
    'label' => 'Highlight Featured (460x315)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 460,
          'height' => 315,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: highlight_list.
  $styles['highlight_list'] = array(
    'label' => 'Highlight List (110x75)',
    'effects' => array(
      2 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 110,
          'height' => 75,
          'upscale' => 0,
        ),
        'weight' => 1,
      ),
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 110,
          'height' => 75,
        ),
        'weight' => 2,
      ),
    ),
  );

  return $styles;
}
