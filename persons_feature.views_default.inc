<?php
/**
 * @file
 * persons_feature.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function persons_feature_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'persons';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'persons';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'persons';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'person';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_firstname' => 'field_firstname',
    'field_lastname' => 'field_lastname',
    'field_id' => 'field_id',
    'field_age' => 'field_age',
  );
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: id */
  $handler->display->display_options['fields']['field_id']['id'] = 'field_id';
  $handler->display->display_options['fields']['field_id']['table'] = 'field_data_field_id';
  $handler->display->display_options['fields']['field_id']['field'] = 'field_id';
  $handler->display->display_options['fields']['field_id']['type'] = 'number_integer';
  $handler->display->display_options['fields']['field_id']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: firstname */
  $handler->display->display_options['fields']['field_firstname']['id'] = 'field_firstname';
  $handler->display->display_options['fields']['field_firstname']['table'] = 'field_data_field_firstname';
  $handler->display->display_options['fields']['field_firstname']['field'] = 'field_firstname';
  /* Field: Content: lastname */
  $handler->display->display_options['fields']['field_lastname']['id'] = 'field_lastname';
  $handler->display->display_options['fields']['field_lastname']['table'] = 'field_data_field_lastname';
  $handler->display->display_options['fields']['field_lastname']['field'] = 'field_lastname';
  /* Field: Content: age */
  $handler->display->display_options['fields']['field_age']['id'] = 'field_age';
  $handler->display->display_options['fields']['field_age']['table'] = 'field_data_field_age';
  $handler->display->display_options['fields']['field_age']['field'] = 'field_age';
  $handler->display->display_options['fields']['field_age']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: city */
  $handler->display->display_options['fields']['field_city']['id'] = 'field_city';
  $handler->display->display_options['fields']['field_city']['table'] = 'field_data_field_city';
  $handler->display->display_options['fields']['field_city']['field'] = 'field_city';
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
    'person' => 'person',
  );
  /* Filter criterion: Content: city (field_city) */
  $handler->display->display_options['filters']['field_city_value']['id'] = 'field_city_value';
  $handler->display->display_options['filters']['field_city_value']['table'] = 'field_data_field_city';
  $handler->display->display_options['filters']['field_city_value']['field'] = 'field_city_value';
  $handler->display->display_options['filters']['field_city_value']['value'] = array(
    'all' => 'all',
    'Bogotá' => 'Bogotá',
    'Bucaramanga' => 'Bucaramanga',
    'Cali' => 'Cali',
    'Cartagena' => 'Cartagena',
    'Leticia' => 'Leticia',
    'Manizales' => 'Manizales',
    'Medellín' => 'Medellín',
    'Neiva' => 'Neiva',
    'Pasto' => 'Pasto',
    'Santa Marta' => 'Santa Marta',
    'Tunja' => 'Tunja',
    'Villavicencio' => 'Villavicencio',
  );
  $handler->display->display_options['filters']['field_city_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_city_value']['expose']['operator_id'] = 'field_city_value_op';
  $handler->display->display_options['filters']['field_city_value']['expose']['label'] = 'city';
  $handler->display->display_options['filters']['field_city_value']['expose']['operator'] = 'field_city_value_op';
  $handler->display->display_options['filters']['field_city_value']['expose']['identifier'] = 'city';
  $handler->display->display_options['filters']['field_city_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_city_value']['expose']['reduce'] = TRUE;
  $handler->display->display_options['filters']['field_city_value']['group_info']['label'] = 'city (field_city)';
  $handler->display->display_options['filters']['field_city_value']['group_info']['identifier'] = 'field_city_value';
  $handler->display->display_options['filters']['field_city_value']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_city_value']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: age (field_age) */
  $handler->display->display_options['filters']['field_age_value']['id'] = 'field_age_value';
  $handler->display->display_options['filters']['field_age_value']['table'] = 'field_data_field_age';
  $handler->display->display_options['filters']['field_age_value']['field'] = 'field_age_value';
  $handler->display->display_options['filters']['field_age_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_age_value']['expose']['operator_id'] = 'field_age_value_op';
  $handler->display->display_options['filters']['field_age_value']['expose']['label'] = 'age (field_age)';
  $handler->display->display_options['filters']['field_age_value']['expose']['operator'] = 'field_age_value_op';
  $handler->display->display_options['filters']['field_age_value']['expose']['identifier'] = 'age';
  $handler->display->display_options['filters']['field_age_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'persons';

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['path'] = 'persons';
  $export['persons'] = $view;

  return $export;
}
