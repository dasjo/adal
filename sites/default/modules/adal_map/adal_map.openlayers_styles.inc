<?php

/**
 * Implementation of hook_openlayers_styles().
 */
function adal_map_openlayers_styles() {
  $export = array();
  $openlayers_styles = new stdClass;
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'work_place_style';
  $openlayers_styles->title = 'Work Place Style';
  $openlayers_styles->description = 'adal work places getting styled';
  $openlayers_styles->data = array(
    'externalGraphic' => '',
    'pointRadius' => '5',
    'fillColor' => '#33FF33',
    'strokeColor' => '#000000',
    'strokeWidth' => '1',
    'fillOpacity' => '1',
    'strokeOpacity' => '1',
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'cursor' => '',
    'graphicWidth' => '',
    'graphicHeight' => '',
    'graphicOpacity' => '1',
    'graphicXOffset' => '',
    'graphicYOffset' => '',
    'graphicName' => '',
    'rotation' => '',
    'display' => '',
  );

  $export['work_place_style'] = $openlayers_styles;
  return $export;
}
