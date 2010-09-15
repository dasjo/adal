<?php

/**
 * Implementation of hook_openlayers_presets().
 */
function adal_map_openlayers_presets() {
  $export = array();
  $openlayers_presets = new stdClass;
  $openlayers_presets->disabled = FALSE; /* Edit this to true to make a default openlayers_presets disabled initially */
  $openlayers_presets->api_version = 1;
  $openlayers_presets->name = 'alumni_map_preset';
  $openlayers_presets->title = 'Alumni Map';
  $openlayers_presets->description = 'This is the alumni map preset';
  $openlayers_presets->data = array(
    'width' => 'auto',
    'height' => '550px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '0,0',
        'zoom' => '2',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_attribution' => array(),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'alumni_map_openlayers_1' => 'alumni_map_openlayers_1',
          'alumni_map_openlayers_2' => 'alumni_map_openlayers_2',
        ),
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_cluster' => array(
        'clusterlayer' => array(
          'alumni_map_openlayers_1' => 'alumni_map_openlayers_1',
          'alumni_map_openlayers_2' => 'alumni_map_openlayers_2',
        ),
        'distance' => '20',
        'threshold' => '',
      ),
    ),
    'default_layer' => 'google_satellite',
    'layers' => array(
      'google_satellite' => 'google_satellite',
      'alumni_map_openlayers_1' => 'alumni_map_openlayers_1',
    ),
    'layer_styles' => array(),
    'layer_activated' => array(
      'alumni_map_openlayers_1' => 'alumni_map_openlayers_1',
      'alumni_map_openlayers_2' => 'alumni_map_openlayers_2',
    ),
    'layer_switcher' => array(
      'alumni_map_openlayers_1' => 'alumni_map_openlayers_1',
      'alumni_map_openlayers_2' => 'alumni_map_openlayers_2',
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );

  $export['alumni_map_preset'] = $openlayers_presets;
  return $export;
}
