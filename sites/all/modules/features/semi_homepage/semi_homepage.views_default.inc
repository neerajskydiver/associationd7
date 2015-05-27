<?php
/**
 * @file
 * semi_homepage.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function semi_homepage_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Events';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Event Dates */
  $handler->display->display_options['fields']['field_event_dates']['id'] = 'field_event_dates';
  $handler->display->display_options['fields']['field_event_dates']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['fields']['field_event_dates']['field'] = 'field_event_dates';
  $handler->display->display_options['fields']['field_event_dates']['label'] = '';
  $handler->display->display_options['fields']['field_event_dates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_dates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_dates']['settings'] = array(
    'format_type' => 'from_date',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Event Listing Image */
  $handler->display->display_options['fields']['field_event_listing_image']['id'] = 'field_event_listing_image';
  $handler->display->display_options['fields']['field_event_listing_image']['table'] = 'field_data_field_event_listing_image';
  $handler->display->display_options['fields']['field_event_listing_image']['field'] = 'field_event_listing_image';
  $handler->display->display_options['fields']['field_event_listing_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_listing_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_listing_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_listing_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_event_listing_image']['settings'] = array(
    'image_style' => 'event_homapge',
    'image_link' => '',
  );
  /* Field: Content: Event Location */
  $handler->display->display_options['fields']['field_event_location']['id'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['table'] = 'field_data_field_event_location';
  $handler->display->display_options['fields']['field_event_location']['field'] = 'field_event_location';
  $handler->display->display_options['fields']['field_event_location']['label'] = '';
  $handler->display->display_options['fields']['field_event_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_location']['element_label_colon'] = FALSE;
  /* Field: Content: Event Dates */
  $handler->display->display_options['fields']['field_event_dates_1']['id'] = 'field_event_dates_1';
  $handler->display->display_options['fields']['field_event_dates_1']['table'] = 'field_data_field_event_dates';
  $handler->display->display_options['fields']['field_event_dates_1']['field'] = 'field_event_dates';
  $handler->display->display_options['fields']['field_event_dates_1']['label'] = '';
  $handler->display->display_options['fields']['field_event_dates_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_dates_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_dates_1']['settings'] = array(
    'format_type' => 'to_date',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Single Url */
  $handler->display->display_options['fields']['field_single_url']['id'] = 'field_single_url';
  $handler->display->display_options['fields']['field_single_url']['table'] = 'field_data_field_single_url';
  $handler->display->display_options['fields']['field_single_url']['field'] = 'field_single_url';
  $handler->display->display_options['fields']['field_single_url']['label'] = '';
  $handler->display->display_options['fields']['field_single_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_single_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_single_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_single_url']['type'] = 'link_plain';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href=[field_single_url]>
<div class"event-featured">
    [field_event_listing_image]
    <div class="featured-event-bottom">
        <div class="featured-event-dates">
            [field_event_dates] - [field_event_dates_1]
        </div>
       <div class="featured-event-place">
            [field_event_location]
       </div>
    </div>
</div>
</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'events' => 'events',
  );
  /* Filter criterion: Content: Event Region (field_event_region) */
  $handler->display->display_options['filters']['field_event_region_tid']['id'] = 'field_event_region_tid';
  $handler->display->display_options['filters']['field_event_region_tid']['table'] = 'field_data_field_event_region';
  $handler->display->display_options['filters']['field_event_region_tid']['field'] = 'field_event_region_tid';
  $handler->display->display_options['filters']['field_event_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_region_tid']['expose']['operator_id'] = 'field_event_region_tid_op';
  $handler->display->display_options['filters']['field_event_region_tid']['expose']['label'] = 'Region';
  $handler->display->display_options['filters']['field_event_region_tid']['expose']['operator'] = 'field_event_region_tid_op';
  $handler->display->display_options['filters']['field_event_region_tid']['expose']['identifier'] = 'field_event_region_tid';
  $handler->display->display_options['filters']['field_event_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_event_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_region_tid']['vocabulary'] = 'event_region';
  /* Filter criterion: Content: Event Type (field_event_type) */
  $handler->display->display_options['filters']['field_event_type_tid']['id'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['filters']['field_event_type_tid']['field'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator_id'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['operator'] = 'field_event_type_tid_op';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['identifier'] = 'field_event_type_tid';
  $handler->display->display_options['filters']['field_event_type_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_event_type_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_type_tid']['vocabulary'] = 'event_type';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['exposed_block'] = TRUE;
  $export['events'] = $view;

  $view = new view();
  $view->name = 'highlights';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Highlights';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Highlights';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  /* Field: Field collection item: Highlight Image */
  $handler->display->display_options['fields']['field_highlight_image']['id'] = 'field_highlight_image';
  $handler->display->display_options['fields']['field_highlight_image']['table'] = 'field_data_field_highlight_image';
  $handler->display->display_options['fields']['field_highlight_image']['field'] = 'field_highlight_image';
  $handler->display->display_options['fields']['field_highlight_image']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_highlight_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight_image']['settings'] = array(
    'image_style' => 'highlight_featured',
    'image_link' => '',
  );
  /* Field: Field collection item: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class"highlight-featured">
    [field_highlight_image]
    <div class="featured-highlight-bottom">
        <div class="featured-text">
            <span>News</span> <span class="featured">Featured</span>
        </div>
        <div class="featured-link">
            [field_link]
        </div>
    </div>
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Field collection item: Featured Highlight (field_featured_highlight) */
  $handler->display->display_options['filters']['field_featured_highlight_value']['id'] = 'field_featured_highlight_value';
  $handler->display->display_options['filters']['field_featured_highlight_value']['table'] = 'field_data_field_featured_highlight';
  $handler->display->display_options['filters']['field_featured_highlight_value']['field'] = 'field_featured_highlight_value';
  $handler->display->display_options['filters']['field_featured_highlight_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Field collection item: Field name */
  $handler->display->display_options['filters']['field_name']['id'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['field_name']['field'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['value'] = array(
    'field_highlight_url' => 'field_highlight_url',
  );

  /* Display: Featured Highlight Block */
  $handler = $view->new_display('block', 'Featured Highlight Block', 'highlight_featured');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Highlights';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';

  /* Display: Highlights Block */
  $handler = $view->new_display('block', 'Highlights Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  /* Field: Field collection item: Highlight Image */
  $handler->display->display_options['fields']['field_highlight_image']['id'] = 'field_highlight_image';
  $handler->display->display_options['fields']['field_highlight_image']['table'] = 'field_data_field_highlight_image';
  $handler->display->display_options['fields']['field_highlight_image']['field'] = 'field_highlight_image';
  $handler->display->display_options['fields']['field_highlight_image']['label'] = '';
  $handler->display->display_options['fields']['field_highlight_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_highlight_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_highlight_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_highlight_image']['settings'] = array(
    'image_style' => 'highlight_list',
    'image_link' => '',
  );
  /* Field: Field collection item: Link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_link']['click_sort_column'] = 'url';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '    [field_highlight_image]
<div class"highlight-list-link">
    [field_link]
</div>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field collection item: Featured Highlight (field_featured_highlight) */
  $handler->display->display_options['filters']['field_featured_highlight_value']['id'] = 'field_featured_highlight_value';
  $handler->display->display_options['filters']['field_featured_highlight_value']['table'] = 'field_data_field_featured_highlight';
  $handler->display->display_options['filters']['field_featured_highlight_value']['field'] = 'field_featured_highlight_value';
  $handler->display->display_options['filters']['field_featured_highlight_value']['value'] = array(
    0 => '0',
  );
  /* Filter criterion: Field collection item: Field name */
  $handler->display->display_options['filters']['field_name']['id'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['table'] = 'field_collection_item';
  $handler->display->display_options['filters']['field_name']['field'] = 'field_name';
  $handler->display->display_options['filters']['field_name']['value'] = array(
    'field_highlight_url' => 'field_highlight_url',
  );
  $export['highlights'] = $view;

  return $export;
}
