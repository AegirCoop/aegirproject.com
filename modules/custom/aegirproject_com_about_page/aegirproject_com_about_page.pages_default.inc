<?php
/**
 * @file
 * aegirproject_com_about_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function aegirproject_com_about_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about';
  $page->task = 'page';
  $page->admin_title = 'About';
  $page->admin_description = 'The "About" page of AegirProject.com';
  $page->path = 'about';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'About',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about__panel';
  $handler->task = 'page';
  $handler->subtask = 'about';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
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
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'About the Aegir Support Cooperative';
  $display->uuid = '628d19ff-14b5-4ae0-9a82-a50c5680af7a';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2123637b-4f2f-46a1-8883-de729d12ad7f';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'What is the Coop?',
      'title' => 'What is the Aegir Support Cooperative?',
      'body' => '<p>The Aegir Support Cooperative is a service-provider cooperative founded to provide support services for the Aegir Hosting System.</p>

<p>Members include most active Aegir maintainers, and a number of long-standing community contributors.</p>
',
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
    $pane->uuid = '2123637b-4f2f-46a1-8883-de729d12ad7f';
    $display->content['new-2123637b-4f2f-46a1-8883-de729d12ad7f'] = $pane;
    $display->panels['top'][0] = 'new-2123637b-4f2f-46a1-8883-de729d12ad7f';
    $pane = new stdClass();
    $pane->pid = 'new-d5294692-cbd4-4894-a7aa-d085c1c29027';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'History',
      'title' => 'History',
      'body' => '<p>Development of the Aegir Hosting System began back in 2007. In that time, an eco-system of users, module developers, contributors and core maintainers have grown up around it.</p>

<p>In July 2015, at the inaugural Aegir Summit, Richard Stallman met with&nbsp;Aegir Project leaders, and suggested offering support services as a measure to ensure sustainability of the project.</p>
',
      'format' => 'shortcodes',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd5294692-cbd4-4894-a7aa-d085c1c29027';
    $display->content['new-d5294692-cbd4-4894-a7aa-d085c1c29027'] = $pane;
    $display->panels['top'][1] = 'new-d5294692-cbd4-4894-a7aa-d085c1c29027';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about'] = $page;

  return $pages;

}
