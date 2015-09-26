<?php
/**
 * @file
 * aegirproject_com_front_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function aegirproject_com_front_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front page';
  $page->admin_description = 'The front page of AegirProject.com';
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
  $handler->name = 'page_front_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '739f2c35-b6eb-4ab4-8a59-2bfb2eac0291';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-953af7e5-82c7-4ac7-ac60-54fbb3aaff36';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Jumbotron',
      'title' => '',
      'body' => '[jumbotron title="Open Source Hosting for Everyone"]
<p>Support services for Drupal hosting on Aegir</p>
[container]
[img responsive="true" xclass="jumbotron-icons"] <img src="files/druplicon_small.png" /> [/img]
[icon xclass="glyphicon glyphicon-arrow-right" /]
[img responsive="true" xclass="jumbotron-icons"] <img src="files/drush_logo.jpg" /> [/img]
[icon xclass="glyphicon glyphicon-arrow-right" /]
[img responsive="true" xclass="jumbotron-icons aegir-icon"] <img src="files/aegir_logo_notext.png" /> [/img]
[/container]
[/jumbotron]',
      'format' => 'shortcodes',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '953af7e5-82c7-4ac7-ac60-54fbb3aaff36';
    $display->content['new-953af7e5-82c7-4ac7-ac60-54fbb3aaff36'] = $pane;
    $display->panels['top'][0] = 'new-953af7e5-82c7-4ac7-ac60-54fbb3aaff36';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
