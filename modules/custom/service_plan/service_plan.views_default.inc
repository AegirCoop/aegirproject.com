<?php
/**
 * @file
 * service_plan.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function service_plan_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'subscription_plans';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Subscription Plans';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Support Subscriptions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'views_bootstrap_grid_plugin_style';
  $handler->display->display_options['style_options']['columns'] = '6';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_monthly_price']['id'] = 'field_monthly_price';
  $handler->display->display_options['fields']['field_monthly_price']['table'] = 'field_data_field_monthly_price';
  $handler->display->display_options['fields']['field_monthly_price']['field'] = 'field_monthly_price';
  $handler->display->display_options['fields']['field_monthly_price']['label'] = 'Monthly price per CPU';
  /* Field: Content: Stable software updates */
  $handler->display->display_options['fields']['field_stable_software_updates']['id'] = 'field_stable_software_updates';
  $handler->display->display_options['fields']['field_stable_software_updates']['table'] = 'field_data_field_stable_software_updates';
  $handler->display->display_options['fields']['field_stable_software_updates']['field'] = 'field_stable_software_updates';
  $handler->display->display_options['fields']['field_stable_software_updates']['element_label_colon'] = FALSE;
  /* Field: Content: Access to pre-built images */
  $handler->display->display_options['fields']['field_access_to_pre_built_images']['id'] = 'field_access_to_pre_built_images';
  $handler->display->display_options['fields']['field_access_to_pre_built_images']['table'] = 'field_data_field_access_to_pre_built_images';
  $handler->display->display_options['fields']['field_access_to_pre_built_images']['field'] = 'field_access_to_pre_built_images';
  $handler->display->display_options['fields']['field_access_to_pre_built_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_access_to_pre_built_images']['element_label_colon'] = FALSE;
  /* Field: Content: Advance security notifications */
  $handler->display->display_options['fields']['field_advance_security_notificat']['id'] = 'field_advance_security_notificat';
  $handler->display->display_options['fields']['field_advance_security_notificat']['table'] = 'field_data_field_advance_security_notificat';
  $handler->display->display_options['fields']['field_advance_security_notificat']['field'] = 'field_advance_security_notificat';
  $handler->display->display_options['fields']['field_advance_security_notificat']['element_label_colon'] = FALSE;
  /* Field: Content: Required and optional features */
  $handler->display->display_options['fields']['field_required_and_optional_feat']['id'] = 'field_required_and_optional_feat';
  $handler->display->display_options['fields']['field_required_and_optional_feat']['table'] = 'field_data_field_required_and_optional_feat';
  $handler->display->display_options['fields']['field_required_and_optional_feat']['field'] = 'field_required_and_optional_feat';
  $handler->display->display_options['fields']['field_required_and_optional_feat']['label'] = 'Optional features';
  /* Field: Content: Advanced features */
  $handler->display->display_options['fields']['field_advanced_features']['id'] = 'field_advanced_features';
  $handler->display->display_options['fields']['field_advanced_features']['table'] = 'field_data_field_advanced_features';
  $handler->display->display_options['fields']['field_advanced_features']['field'] = 'field_advanced_features';
  $handler->display->display_options['fields']['field_advanced_features']['element_label_colon'] = FALSE;
  /* Field: Content: Experimental features */
  $handler->display->display_options['fields']['field_experimental_features']['id'] = 'field_experimental_features';
  $handler->display->display_options['fields']['field_experimental_features']['table'] = 'field_data_field_experimental_features';
  $handler->display->display_options['fields']['field_experimental_features']['field'] = 'field_experimental_features';
  /* Field: Content: Support via community forum */
  $handler->display->display_options['fields']['field_support_via_community_foru']['id'] = 'field_support_via_community_foru';
  $handler->display->display_options['fields']['field_support_via_community_foru']['table'] = 'field_data_field_support_via_community_foru';
  $handler->display->display_options['fields']['field_support_via_community_foru']['field'] = 'field_support_via_community_foru';
  /* Field: Content: Support via email/portal */
  $handler->display->display_options['fields']['field_support_via_email_portal']['id'] = 'field_support_via_email_portal';
  $handler->display->display_options['fields']['field_support_via_email_portal']['table'] = 'field_data_field_support_via_email_portal';
  $handler->display->display_options['fields']['field_support_via_email_portal']['field'] = 'field_support_via_email_portal';
  /* Field: Content: Support via remote SSH */
  $handler->display->display_options['fields']['field_support_via_remote_ssh']['id'] = 'field_support_via_remote_ssh';
  $handler->display->display_options['fields']['field_support_via_remote_ssh']['table'] = 'field_data_field_support_via_remote_ssh';
  $handler->display->display_options['fields']['field_support_via_remote_ssh']['field'] = 'field_support_via_remote_ssh';
  /* Field: Content: Support via phone/hangout */
  $handler->display->display_options['fields']['field_support_via_phone_hangout']['id'] = 'field_support_via_phone_hangout';
  $handler->display->display_options['fields']['field_support_via_phone_hangout']['table'] = 'field_data_field_support_via_phone_hangout';
  $handler->display->display_options['fields']['field_support_via_phone_hangout']['field'] = 'field_support_via_phone_hangout';
  /* Field: Content: Tickets per year (per CPU) */
  $handler->display->display_options['fields']['field_tickets_per_year_per_cpu']['id'] = 'field_tickets_per_year_per_cpu';
  $handler->display->display_options['fields']['field_tickets_per_year_per_cpu']['table'] = 'field_data_field_tickets_per_year_per_cpu';
  $handler->display->display_options['fields']['field_tickets_per_year_per_cpu']['field'] = 'field_tickets_per_year_per_cpu';
  $handler->display->display_options['fields']['field_tickets_per_year_per_cpu']['element_label_colon'] = FALSE;
  /* Field: Content: Get additional tickets */
  $handler->display->display_options['fields']['field_get_additional_tickets']['id'] = 'field_get_additional_tickets';
  $handler->display->display_options['fields']['field_get_additional_tickets']['table'] = 'field_data_field_get_additional_tickets';
  $handler->display->display_options['fields']['field_get_additional_tickets']['field'] = 'field_get_additional_tickets';
  $handler->display->display_options['fields']['field_get_additional_tickets']['label'] = 'Additional tickets';
  $handler->display->display_options['fields']['field_get_additional_tickets']['empty'] = '-';
  /* Field: Content: Designated contacts */
  $handler->display->display_options['fields']['field_designated_contacts']['id'] = 'field_designated_contacts';
  $handler->display->display_options['fields']['field_designated_contacts']['table'] = 'field_data_field_designated_contacts';
  $handler->display->display_options['fields']['field_designated_contacts']['field'] = 'field_designated_contacts';
  $handler->display->display_options['fields']['field_designated_contacts']['empty'] = '-';
  /* Field: Content: Response time */
  $handler->display->display_options['fields']['field_response_time']['id'] = 'field_response_time';
  $handler->display->display_options['fields']['field_response_time']['table'] = 'field_data_field_response_time';
  $handler->display->display_options['fields']['field_response_time']['field'] = 'field_response_time';
  /* Field: Content: Support schedule */
  $handler->display->display_options['fields']['field_support_schedule']['id'] = 'field_support_schedule';
  $handler->display->display_options['fields']['field_support_schedule']['table'] = 'field_data_field_support_schedule';
  $handler->display->display_options['fields']['field_support_schedule']['field'] = 'field_support_schedule';
  $handler->display->display_options['fields']['field_support_schedule']['empty'] = '-';
  /* Sort criterion: Content: Weight (field_weight) */
  $handler->display->display_options['sorts']['field_weight_value']['id'] = 'field_weight_value';
  $handler->display->display_options['sorts']['field_weight_value']['table'] = 'field_data_field_weight';
  $handler->display->display_options['sorts']['field_weight_value']['field'] = 'field_weight_value';
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
    'service_plan' => 'service_plan',
  );

  /* Display: Comparison */
  $handler = $view->new_display('page', 'Comparison', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'flipped';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_price' => 'field_price',
    'field_access_to_pre_built_images' => 'field_access_to_pre_built_images',
    'field_advance_security_notificat' => 'field_advance_security_notificat',
    'field_advanced_features' => 'field_advanced_features',
    'field_stable_software_updates' => 'field_stable_software_updates',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_access_to_pre_built_images' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_advance_security_notificat' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_advanced_features' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_stable_software_updates' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['flipped_table_header_first_field'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'compare';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Compare';
  $handler->display->display_options['menu']['description'] = 'Side-by-side comparison of support plan features';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Subscriptions */
  $handler = $view->new_display('page', 'Subscriptions', 'page_1');
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['label'] = 'Enterprise';
  $handler->display->display_options['footer']['area']['content'] = 'Need more? <a href="">Contact us</a> to discuss our Enterprise plans.';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Stable software updates */
  $handler->display->display_options['fields']['field_stable_software_updates']['id'] = 'field_stable_software_updates';
  $handler->display->display_options['fields']['field_stable_software_updates']['table'] = 'field_data_field_stable_software_updates';
  $handler->display->display_options['fields']['field_stable_software_updates']['field'] = 'field_stable_software_updates';
  $handler->display->display_options['fields']['field_stable_software_updates']['label'] = '';
  $handler->display->display_options['fields']['field_stable_software_updates']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_stable_software_updates']['alter']['text'] = 'Stable software updates';
  $handler->display->display_options['fields']['field_stable_software_updates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_stable_software_updates']['element_wrapper_class'] = 'plan-[title]';
  $handler->display->display_options['fields']['field_stable_software_updates']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_stable_software_updates']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_stable_software_updates']['type'] = 'list_key';
  /* Field: Content: Access to pre-built images */
  $handler->display->display_options['fields']['field_access_to_pre_built_images']['id'] = 'field_access_to_pre_built_images';
  $handler->display->display_options['fields']['field_access_to_pre_built_images']['table'] = 'field_data_field_access_to_pre_built_images';
  $handler->display->display_options['fields']['field_access_to_pre_built_images']['field'] = 'field_access_to_pre_built_images';
  $handler->display->display_options['fields']['field_access_to_pre_built_images']['label'] = '';
  $handler->display->display_options['fields']['field_access_to_pre_built_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_access_to_pre_built_images']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_access_to_pre_built_images']['alter']['text'] = ' Access to pre-built images';
  $handler->display->display_options['fields']['field_access_to_pre_built_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_access_to_pre_built_images']['element_wrapper_class'] = 'plan-[title]';
  $handler->display->display_options['fields']['field_access_to_pre_built_images']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_access_to_pre_built_images']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_access_to_pre_built_images']['type'] = 'list_key';
  /* Field: Content: Advance security notifications */
  $handler->display->display_options['fields']['field_advance_security_notificat']['id'] = 'field_advance_security_notificat';
  $handler->display->display_options['fields']['field_advance_security_notificat']['table'] = 'field_data_field_advance_security_notificat';
  $handler->display->display_options['fields']['field_advance_security_notificat']['field'] = 'field_advance_security_notificat';
  $handler->display->display_options['fields']['field_advance_security_notificat']['label'] = '';
  $handler->display->display_options['fields']['field_advance_security_notificat']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_advance_security_notificat']['alter']['text'] = 'Advance security notifications';
  $handler->display->display_options['fields']['field_advance_security_notificat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_advance_security_notificat']['element_wrapper_class'] = 'plan-[title]';
  $handler->display->display_options['fields']['field_advance_security_notificat']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_advance_security_notificat']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_advance_security_notificat']['type'] = 'list_key';
  /* Field: Content: Required and optional features */
  $handler->display->display_options['fields']['field_required_and_optional_feat']['id'] = 'field_required_and_optional_feat';
  $handler->display->display_options['fields']['field_required_and_optional_feat']['table'] = 'field_data_field_required_and_optional_feat';
  $handler->display->display_options['fields']['field_required_and_optional_feat']['field'] = 'field_required_and_optional_feat';
  $handler->display->display_options['fields']['field_required_and_optional_feat']['label'] = '';
  $handler->display->display_options['fields']['field_required_and_optional_feat']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_required_and_optional_feat']['alter']['text'] = 'Optional features';
  $handler->display->display_options['fields']['field_required_and_optional_feat']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_required_and_optional_feat']['element_wrapper_class'] = 'plan-[title]';
  $handler->display->display_options['fields']['field_required_and_optional_feat']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_required_and_optional_feat']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_required_and_optional_feat']['type'] = 'list_key';
  /* Field: Content: Advanced features */
  $handler->display->display_options['fields']['field_advanced_features']['id'] = 'field_advanced_features';
  $handler->display->display_options['fields']['field_advanced_features']['table'] = 'field_data_field_advanced_features';
  $handler->display->display_options['fields']['field_advanced_features']['field'] = 'field_advanced_features';
  $handler->display->display_options['fields']['field_advanced_features']['label'] = '';
  $handler->display->display_options['fields']['field_advanced_features']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_advanced_features']['alter']['text'] = 'Advanced features';
  $handler->display->display_options['fields']['field_advanced_features']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_advanced_features']['element_wrapper_class'] = 'plan-[title]';
  $handler->display->display_options['fields']['field_advanced_features']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_advanced_features']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_advanced_features']['type'] = 'list_key';
  /* Field: Content: Experimental features */
  $handler->display->display_options['fields']['field_experimental_features']['id'] = 'field_experimental_features';
  $handler->display->display_options['fields']['field_experimental_features']['table'] = 'field_data_field_experimental_features';
  $handler->display->display_options['fields']['field_experimental_features']['field'] = 'field_experimental_features';
  $handler->display->display_options['fields']['field_experimental_features']['label'] = '';
  $handler->display->display_options['fields']['field_experimental_features']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_experimental_features']['alter']['text'] = 'Experimental features';
  $handler->display->display_options['fields']['field_experimental_features']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_experimental_features']['element_wrapper_class'] = 'plan-[title]';
  $handler->display->display_options['fields']['field_experimental_features']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_experimental_features']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_experimental_features']['type'] = 'list_key';
  /* Field: Content: Support via community forum */
  $handler->display->display_options['fields']['field_support_via_community_foru']['id'] = 'field_support_via_community_foru';
  $handler->display->display_options['fields']['field_support_via_community_foru']['table'] = 'field_data_field_support_via_community_foru';
  $handler->display->display_options['fields']['field_support_via_community_foru']['field'] = 'field_support_via_community_foru';
  $handler->display->display_options['fields']['field_support_via_community_foru']['label'] = '';
  $handler->display->display_options['fields']['field_support_via_community_foru']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_support_via_community_foru']['alter']['text'] = 'Support via community forum';
  $handler->display->display_options['fields']['field_support_via_community_foru']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_support_via_community_foru']['element_wrapper_class'] = 'plan-[title]';
  $handler->display->display_options['fields']['field_support_via_community_foru']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_support_via_community_foru']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_support_via_community_foru']['type'] = 'list_key';
  /* Field: Content: Support via email/portal */
  $handler->display->display_options['fields']['field_support_via_email_portal']['id'] = 'field_support_via_email_portal';
  $handler->display->display_options['fields']['field_support_via_email_portal']['table'] = 'field_data_field_support_via_email_portal';
  $handler->display->display_options['fields']['field_support_via_email_portal']['field'] = 'field_support_via_email_portal';
  $handler->display->display_options['fields']['field_support_via_email_portal']['label'] = '';
  $handler->display->display_options['fields']['field_support_via_email_portal']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_support_via_email_portal']['alter']['text'] = 'Support via email/portal';
  $handler->display->display_options['fields']['field_support_via_email_portal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_support_via_email_portal']['element_wrapper_class'] = 'plan-[title]';
  $handler->display->display_options['fields']['field_support_via_email_portal']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_support_via_email_portal']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_support_via_email_portal']['type'] = 'list_key';
  /* Field: Content: Support via remote SSH */
  $handler->display->display_options['fields']['field_support_via_remote_ssh']['id'] = 'field_support_via_remote_ssh';
  $handler->display->display_options['fields']['field_support_via_remote_ssh']['table'] = 'field_data_field_support_via_remote_ssh';
  $handler->display->display_options['fields']['field_support_via_remote_ssh']['field'] = 'field_support_via_remote_ssh';
  $handler->display->display_options['fields']['field_support_via_remote_ssh']['label'] = '';
  $handler->display->display_options['fields']['field_support_via_remote_ssh']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_support_via_remote_ssh']['alter']['text'] = 'Support via remote SSH';
  $handler->display->display_options['fields']['field_support_via_remote_ssh']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_support_via_remote_ssh']['element_wrapper_class'] = 'plan-[title]';
  $handler->display->display_options['fields']['field_support_via_remote_ssh']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_support_via_remote_ssh']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_support_via_remote_ssh']['type'] = 'list_key';
  /* Field: Content: Support via phone/hangout */
  $handler->display->display_options['fields']['field_support_via_phone_hangout']['id'] = 'field_support_via_phone_hangout';
  $handler->display->display_options['fields']['field_support_via_phone_hangout']['table'] = 'field_data_field_support_via_phone_hangout';
  $handler->display->display_options['fields']['field_support_via_phone_hangout']['field'] = 'field_support_via_phone_hangout';
  $handler->display->display_options['fields']['field_support_via_phone_hangout']['label'] = '';
  $handler->display->display_options['fields']['field_support_via_phone_hangout']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_support_via_phone_hangout']['alter']['text'] = 'Support via phone/hangout';
  $handler->display->display_options['fields']['field_support_via_phone_hangout']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_support_via_phone_hangout']['element_wrapper_class'] = 'plan-[title]';
  $handler->display->display_options['fields']['field_support_via_phone_hangout']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_support_via_phone_hangout']['empty_zero'] = TRUE;
  $handler->display->display_options['fields']['field_support_via_phone_hangout']['type'] = 'list_key';
  /* Field: Content: Tickets per year (per CPU) */
  $handler->display->display_options['fields']['field_tickets_per_year_per_cpu']['id'] = 'field_tickets_per_year_per_cpu';
  $handler->display->display_options['fields']['field_tickets_per_year_per_cpu']['table'] = 'field_data_field_tickets_per_year_per_cpu';
  $handler->display->display_options['fields']['field_tickets_per_year_per_cpu']['field'] = 'field_tickets_per_year_per_cpu';
  $handler->display->display_options['fields']['field_tickets_per_year_per_cpu']['label'] = '';
  $handler->display->display_options['fields']['field_tickets_per_year_per_cpu']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_tickets_per_year_per_cpu']['alter']['text'] = '[field_tickets_per_year_per_cpu] tickets per year';
  $handler->display->display_options['fields']['field_tickets_per_year_per_cpu']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_tickets_per_year_per_cpu']['element_wrapper_class'] = 'plan-[title]';
  /* Field: Content: Get additional tickets */
  $handler->display->display_options['fields']['field_get_additional_tickets']['id'] = 'field_get_additional_tickets';
  $handler->display->display_options['fields']['field_get_additional_tickets']['table'] = 'field_data_field_get_additional_tickets';
  $handler->display->display_options['fields']['field_get_additional_tickets']['field'] = 'field_get_additional_tickets';
  $handler->display->display_options['fields']['field_get_additional_tickets']['label'] = 'Additional tickets';
  $handler->display->display_options['fields']['field_get_additional_tickets']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_get_additional_tickets']['element_wrapper_class'] = 'plan-[title]';
  $handler->display->display_options['fields']['field_get_additional_tickets']['hide_empty'] = TRUE;
  /* Field: Content: Support schedule */
  $handler->display->display_options['fields']['field_support_schedule']['id'] = 'field_support_schedule';
  $handler->display->display_options['fields']['field_support_schedule']['table'] = 'field_data_field_support_schedule';
  $handler->display->display_options['fields']['field_support_schedule']['field'] = 'field_support_schedule';
  $handler->display->display_options['fields']['field_support_schedule']['label'] = '';
  $handler->display->display_options['fields']['field_support_schedule']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_support_schedule']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_support_schedule']['alter']['text'] = '([field_support_schedule])';
  $handler->display->display_options['fields']['field_support_schedule']['alter']['trim_whitespace'] = TRUE;
  $handler->display->display_options['fields']['field_support_schedule']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_support_schedule']['element_wrapper_class'] = 'plan-[title]';
  $handler->display->display_options['fields']['field_support_schedule']['hide_empty'] = TRUE;
  /* Field: Content: Response time */
  $handler->display->display_options['fields']['field_response_time']['id'] = 'field_response_time';
  $handler->display->display_options['fields']['field_response_time']['table'] = 'field_data_field_response_time';
  $handler->display->display_options['fields']['field_response_time']['field'] = 'field_response_time';
  $handler->display->display_options['fields']['field_response_time']['label'] = '';
  $handler->display->display_options['fields']['field_response_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_response_time']['alter']['text'] = '[field_response_time] [field_support_schedule]';
  $handler->display->display_options['fields']['field_response_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_response_time']['element_wrapper_class'] = 'plan-[title]';
  $handler->display->display_options['fields']['field_response_time']['hide_empty'] = TRUE;
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_monthly_price']['id'] = 'field_monthly_price';
  $handler->display->display_options['fields']['field_monthly_price']['table'] = 'field_data_field_monthly_price';
  $handler->display->display_options['fields']['field_monthly_price']['field'] = 'field_monthly_price';
  $handler->display->display_options['fields']['field_monthly_price']['label'] = '';
  $handler->display->display_options['fields']['field_monthly_price']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_monthly_price']['alter']['text'] = 'Subscribe for [field_monthly_price]/month/CPU';
  $handler->display->display_options['fields']['field_monthly_price']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'service_plan' => 'service_plan',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = '!=';
  $handler->display->display_options['filters']['title']['value'] = 'Enterprise';
  $handler->display->display_options['path'] = 'plans';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Support Plans';
  $handler->display->display_options['menu']['description'] = 'Descriptions & pricing of our support plans';
  $handler->display->display_options['menu']['weight'] = '-10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['subscription_plans'] = $view;

  return $export;
}
