<?php
/**
 * @file
 * semi_homepage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function semi_homepage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'semi_homepage';
  $page->task = 'page';
  $page->admin_title = 'Semi Homepage';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_semi_homepage__panel_context_5373f79f-dd4d-4443-8e6e-d9c9920474cd';
  $handler->task = 'page';
  $handler->subtask = 'semi_homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Homepage Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'homepage-flexible',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'twocol_bricks';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left_above' => NULL,
      'right_above' => NULL,
      'middle' => NULL,
      'left_below' => NULL,
      'right_below' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '815cfdeb-4ef8-452d-a046-4cef9764e6c1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-820eb312-6130-436c-863b-faf5c3f23dca';
    $pane->panel = 'left_above';
    $pane->type = 'block';
    $pane->subtype = 'block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<div class="hero-title">Industry News<span class="icon"></span></div>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '820eb312-6130-436c-863b-faf5c3f23dca';
    $display->content['new-820eb312-6130-436c-863b-faf5c3f23dca'] = $pane;
    $display->panels['left_above'][0] = 'new-820eb312-6130-436c-863b-faf5c3f23dca';
    $pane = new stdClass();
    $pane->pid = 'new-cf486db5-ab8f-41d2-b376-8cf100ec7258';
    $pane->panel = 'right_above';
    $pane->type = 'block';
    $pane->subtype = 'block-2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cf486db5-ab8f-41d2-b376-8cf100ec7258';
    $display->content['new-cf486db5-ab8f-41d2-b376-8cf100ec7258'] = $pane;
    $display->panels['right_above'][0] = 'new-cf486db5-ab8f-41d2-b376-8cf100ec7258';
    $pane = new stdClass();
    $pane->pid = 'new-4e48e9b3-600a-46cc-b3e6-17c26162a538';
    $pane->panel = 'top';
    $pane->type = 'views';
    $pane->subtype = 'highlights';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'highlight_featured',
      'override_title' => 1,
      'override_title_text' => '<div class="hero-title">Highlights<span class="icon"></span></div>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4e48e9b3-600a-46cc-b3e6-17c26162a538';
    $display->content['new-4e48e9b3-600a-46cc-b3e6-17c26162a538'] = $pane;
    $display->panels['top'][0] = 'new-4e48e9b3-600a-46cc-b3e6-17c26162a538';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['semi_homepage'] = $page;

  return $pages;

}
