<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function adal_base_imagecache_default_presets() {
  $items = array(
    'small_portrait' => array(
      'presetname' => 'small_portrait',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '75px',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function adal_base_node_info() {
  $items = array(
    'alumni_info' => array(
      'name' => t('Alumni Info'),
      'module' => 'features',
      'description' => t('Informationen wie Kontaktdaten, Stelle und aktueller Ort eines Alumnus
Diese Datenblätter werden derzeit separat erstellt könnten später aber mittels dem Drupal Content-Profile Modul direkt mit unseren Alumni/Benutzern verknüpft werden.  '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Öffentliche Kurzinfo'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'place_info' => array(
      'name' => t('Place Info'),
      'module' => 'features',
      'description' => t('Einfache Stellenbeschreibung, wird auf der karte vor den auslandsdienern bei der jeweiligen stelle angezeigt'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}
