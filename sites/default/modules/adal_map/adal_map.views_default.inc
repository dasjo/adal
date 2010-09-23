<?php

/**
 * Implementation of hook_views_default_views().
 */
function adal_map_views_default_views() {
  $views = array();

  // Exported view: alumni_map
  $view = new view;
  $view->name = 'alumni_map';
  $view->description = '';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'field_alumni_contact_image_fid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'small_portrait_imagelink',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_alumni_contact_image_fid',
      'table' => 'node_data_field_alumni_contact_image',
      'field' => 'field_alumni_contact_image_fid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => 'Title',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'teaser' => array(
      'label' => 'Teaser',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 1,
        'max_length' => '300',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'teaser',
      'table' => 'node_revisions',
      'field' => 'teaser',
      'relationship' => 'none',
    ),
    'field_alumni_work_place_openlayers_wkt_1' => array(
      'label' => 'Stelle(n)',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'widget',
      'format' => 'openlayers_wkt',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_alumni_work_place_openlayers_wkt_1',
      'table' => 'node_data_field_alumni_work_place',
      'field' => 'field_alumni_work_place_openlayers_wkt',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'type' => array(
      'order' => 'DESC',
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'field_alumni_work_year_beg_value' => array(
      'order' => 'DESC',
      'delta' => -1,
      'id' => 'field_alumni_work_year_beg_value',
      'table' => 'node_data_field_alumni_work_year_beg',
      'field' => 'field_alumni_work_year_beg_value',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status_extra' => array(
      'id' => 'status_extra',
      'table' => 'node',
      'field' => 'status_extra',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Alumni Map');
  $handler->override_option('items_per_page', 0);
  $handler->override_option('style_plugin', 'openlayers_data');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'data_source' => array(
      'value' => 'openlayers_wkt',
      'other_lat' => 'field_alumni_contact_image_fid',
      'other_lon' => 'field_alumni_contact_image_fid',
      'openlayers_wkt' => 'field_alumni_work_place_openlayers_wkt_1',
      'other_top' => 'field_alumni_contact_image_fid',
      'other_right' => 'field_alumni_contact_image_fid',
      'other_bottom' => 'field_alumni_contact_image_fid',
      'other_left' => 'field_alumni_contact_image_fid',
      'name_field' => 'title',
      'description_field' => 'teaser',
    ),
  ));
  $handler = $view->new_display('openlayers', 'Alumni Map Work Place', 'openlayers_1');
  $handler->override_option('title', 'Alumni Map Work Place');
  $handler->override_option('row_plugin', '');
  $handler->override_option('displays', array());
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('style_plugin', 'openlayers_map');
  $handler->override_option('style_options', array(
    'preset' => 'alumni_map_preset',
  ));
  $handler->override_option('path', 'map');
  $handler->override_option('menu', array(
    'type' => 'normal',
    'title' => 'Alumni Map',
    'description' => '',
    'weight' => '0',
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('openlayers', 'Alumni Map Current Position', 'openlayers_2');
  $handler->override_option('title', 'Alumni Map Current Position');
  $handler->override_option('row_plugin', '');
  $handler->override_option('displays', array());
  $handler = $view->new_display('page', 'Map List', 'page_2');
  $handler->override_option('filters', array(
    'title' => array(
      'operator' => 'word',
      'value' => 'josef, jörg',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'case' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'role',
    'role' => array(
      '2' => 2,
    ),
  ));
  $handler->override_option('items_per_page', 2);
  $handler->override_option('style_plugin', 'default');
  $handler->override_option('style_options', array());
  $handler->override_option('path', 'map-list');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
