<?php
function ws_crm_request_views_default_views() {
  $views = array();
  $view = new view();
  $view->name = 'crm_requests';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'ws_crm_request';
  $view->human_name = 'Crm Requests';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Crm Requests';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'id' => 'id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Footer: Requests: Request Avarage time */
  $handler->display->display_options['footer']['request_avarage_time']['id'] = 'request_avarage_time';
  $handler->display->display_options['footer']['request_avarage_time']['table'] = 'ws_crm_request';
  $handler->display->display_options['footer']['request_avarage_time']['field'] = 'request_avarage_time';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_crm_customer_target_id']['id'] = 'field_crm_customer_target_id';
  $handler->display->display_options['relationships']['field_crm_customer_target_id']['table'] = 'field_data_field_crm_customer';
  $handler->display->display_options['relationships']['field_crm_customer_target_id']['field'] = 'field_crm_customer_target_id';
  $handler->display->display_options['relationships']['field_crm_customer_target_id']['required'] = TRUE;
  /* Field: Bulk operations: Requests */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_ws_crm_request';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::ws_crm_request_change_status' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Requests: Request id */
  $handler->display->display_options['fields']['id']['id'] = 'id';
  $handler->display->display_options['fields']['id']['table'] = 'ws_crm_request';
  $handler->display->display_options['fields']['id']['field'] = 'id';
  $handler->display->display_options['fields']['id']['label'] = 'N';
  /* Field: Requests: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'ws_crm_request';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'admin/ws-crm/requests/manage/[id]';
  /* Field: Crm Customer: Customer full name */
  $handler->display->display_options['fields']['full_name']['id'] = 'full_name';
  $handler->display->display_options['fields']['full_name']['table'] = 'ws_crm_customer';
  $handler->display->display_options['fields']['full_name']['field'] = 'full_name';
  $handler->display->display_options['fields']['full_name']['relationship'] = 'field_crm_customer_target_id';
  $handler->display->display_options['fields']['full_name']['label'] = 'Customer';
  /* Field: Crm Customer: Created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'ws_crm_customer';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['relationship'] = 'field_crm_customer_target_id';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Requests: Closed date */
  $handler->display->display_options['fields']['closed']['id'] = 'closed';
  $handler->display->display_options['fields']['closed']['table'] = 'ws_crm_request';
  $handler->display->display_options['fields']['closed']['field'] = 'closed';
  $handler->display->display_options['fields']['closed']['date_format'] = 'short';
  $handler->display->display_options['fields']['closed']['second_date_format'] = 'long';
  /* Field: Requests: Status */
  $handler->display->display_options['fields']['request_status']['id'] = 'request_status';
  $handler->display->display_options['fields']['request_status']['table'] = 'ws_crm_request';
  $handler->display->display_options['fields']['request_status']['field'] = 'request_status';
  /* Field: Requests: Request Duration status */
  $handler->display->display_options['fields']['request_duration']['id'] = 'request_duration';
  $handler->display->display_options['fields']['request_duration']['table'] = 'ws_crm_request';
  $handler->display->display_options['fields']['request_duration']['field'] = 'request_duration';
  $handler->display->display_options['fields']['request_duration']['label'] = 'Duration status';
  /* Filter criterion: Crm Customer: Customer full name */
  $handler->display->display_options['filters']['full_name']['id'] = 'full_name';
  $handler->display->display_options['filters']['full_name']['table'] = 'ws_crm_customer';
  $handler->display->display_options['filters']['full_name']['field'] = 'full_name';
  $handler->display->display_options['filters']['full_name']['relationship'] = 'field_crm_customer_target_id';
  $handler->display->display_options['filters']['full_name']['operator'] = 'contains';
  $handler->display->display_options['filters']['full_name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['full_name']['expose']['operator_id'] = 'full_name_op';
  $handler->display->display_options['filters']['full_name']['expose']['label'] = 'Customer';
  $handler->display->display_options['filters']['full_name']['expose']['operator'] = 'full_name_op';
  $handler->display->display_options['filters']['full_name']['expose']['identifier'] = 'full_name';
  $handler->display->display_options['filters']['full_name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Requests: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'ws_crm_request';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );
  /* Filter criterion: Requests: Status */
  $handler->display->display_options['filters']['request_status']['id'] = 'request_status';
  $handler->display->display_options['filters']['request_status']['table'] = 'ws_crm_request';
  $handler->display->display_options['filters']['request_status']['field'] = 'request_status';
  $handler->display->display_options['filters']['request_status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['request_status']['expose']['operator_id'] = 'request_status_op';
  $handler->display->display_options['filters']['request_status']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['request_status']['expose']['operator'] = 'request_status_op';
  $handler->display->display_options['filters']['request_status']['expose']['identifier'] = 'request_status';
  $handler->display->display_options['filters']['request_status']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/ws-crm/requests';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Requests';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  $views[$view->name] = $view;

  return $views;
}