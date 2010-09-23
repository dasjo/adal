<?php

/**
 * Implementation of hook_content_default_fields().
 */
function adal_base_content_default_fields() {
  $fields = array();

  // Exported field: field_alumni_contact_address
  $fields['alumni_info-field_alumni_contact_address'] = array(
    'field_name' => 'field_alumni_contact_address',
    'type_name' => 'alumni_info',
    'display_settings' => array(
      'weight' => '16',
      'parent' => 'group_alumni_contact_data',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_contact_address][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Adresse',
      'weight' => '16',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_contact_email
  $fields['alumni_info-field_alumni_contact_email'] = array(
    'field_name' => 'field_alumni_contact_email',
    'type_name' => 'alumni_info',
    'display_settings' => array(
      'weight' => '14',
      'parent' => 'group_alumni_contact_data',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'email',
    'required' => '0',
    'multiple' => '0',
    'module' => 'email',
    'active' => '1',
    'widget' => array(
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Email',
      'weight' => '14',
      'description' => '',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_alumni_contact_image
  $fields['alumni_info-field_alumni_contact_image'] = array(
    'field_name' => 'field_alumni_contact_image',
    'type_name' => 'alumni_info',
    'display_settings' => array(
      'weight' => '13',
      'parent' => 'group_alumni_contact_data',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'portraits',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Portrait',
      'weight' => '-3',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_alumni_contact_misc
  $fields['alumni_info-field_alumni_contact_misc'] = array(
    'field_name' => 'field_alumni_contact_misc',
    'type_name' => 'alumni_info',
    'display_settings' => array(
      'weight' => '17',
      'parent' => 'group_alumni_contact_data',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_contact_misc][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Weiteres (Hompage, etc)',
      'weight' => '17',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_contact_tel
  $fields['alumni_info-field_alumni_contact_tel'] = array(
    'field_name' => 'field_alumni_contact_tel',
    'type_name' => 'alumni_info',
    'display_settings' => array(
      'weight' => '15',
      'parent' => 'group_alumni_contact_data',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_contact_tel][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Telefon',
      'weight' => '15',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_current_position
  $fields['alumni_info-field_alumni_current_position'] = array(
    'field_name' => 'field_alumni_current_position',
    'type_name' => 'alumni_info',
    'display_settings' => array(
      'weight' => 0,
      'parent' => 'group_alumni_current_position',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'openlayers_wkt',
    'required' => '0',
    'multiple' => '0',
    'module' => 'openlayers_cck',
    'active' => '1',
    'openlayers_cck_feature_types' => array(
      'point' => 'point',
      'path' => 0,
      'polygon' => 0,
    ),
    'widget' => array(
      'openlayers_cck_preset_map' => 'default',
      'openlayers_behaviors' => array(
        'openlayers_behavior_zoomtolayer' => array(
          'enabled' => 0,
          'options' => array(
            'zoomtolayer' => 'openlayers_cck_vector_layer',
            'point_zoom_level' => '5',
          ),
        ),
      ),
      'default_value' => array(
        '0' => array(
          'openlayers_wkt' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Aktueller Ort',
      'weight' => 0,
      'description' => '',
      'type' => 'openlayers_geocoder_widget',
      'module' => 'openlayers_geocoder',
    ),
  );

  // Exported field: field_alumni_other_places
  $fields['alumni_info-field_alumni_other_places'] = array(
    'field_name' => 'field_alumni_other_places',
    'type_name' => 'alumni_info',
    'display_settings' => array(
      'weight' => '2',
      'parent' => 'group_alumni_other_places',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'openlayers_wkt',
    'required' => '0',
    'multiple' => '0',
    'module' => 'openlayers_cck',
    'active' => '1',
    'openlayers_cck_feature_types' => array(
      'point' => 'point',
      'path' => 0,
      'polygon' => 0,
    ),
    'widget' => array(
      'openlayers_cck_preset_map' => 'default',
      'openlayers_behaviors' => array(
        'openlayers_behavior_zoomtolayer' => array(
          'enabled' => 0,
          'options' => array(
            'zoomtolayer' => 'openlayers_cck_vector_layer',
            'point_zoom_level' => '5',
          ),
        ),
      ),
      'keep_points' => 0,
      'default_value' => array(
        '0' => array(
          'openlayers_wkt' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Weitere Orte',
      'weight' => '2',
      'description' => '',
      'type' => 'openlayers_geocoder_widget',
      'module' => 'openlayers_geocoder',
    ),
  );

  // Exported field: field_alumni_short_info
  $fields['alumni_info-field_alumni_short_info'] = array(
    'field_name' => 'field_alumni_short_info',
    'type_name' => 'alumni_info',
    'display_settings' => array(
      'weight' => '18',
      'parent' => 'group_alumni_contact_data',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_short_info][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Private Kurzinfo',
      'weight' => '18',
      'description' => 'studium/profession/arbeit/sonstiges
weitere kontaktdaten - skype/twitter/etc',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_work_place
  $fields['alumni_info-field_alumni_work_place'] = array(
    'field_name' => 'field_alumni_work_place',
    'type_name' => 'alumni_info',
    'display_settings' => array(
      'weight' => '-3',
      'parent' => 'group_alumni_work_place',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'openlayers_wkt',
    'required' => '0',
    'multiple' => '0',
    'module' => 'openlayers_cck',
    'active' => '1',
    'openlayers_cck_feature_types' => array(
      'point' => 'point',
      'path' => 0,
      'polygon' => 0,
    ),
    'widget' => array(
      'openlayers_cck_preset_map' => 'default',
      'openlayers_behaviors' => array(
        'openlayers_behavior_zoomtolayer' => array(
          'enabled' => 0,
          'options' => array(
            'zoomtolayer' => 'openlayers_cck_vector_layer',
            'point_zoom_level' => '5',
          ),
        ),
      ),
      'keep_points' => 0,
      'default_value' => array(
        '0' => array(
          'openlayers_wkt' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Stelle(n)',
      'weight' => '-3',
      'description' => 'dieses feld speichert die koordinaten. bitte einfach darunter nach der addresse suchen',
      'type' => 'openlayers_geocoder_widget',
      'module' => 'openlayers_geocoder',
    ),
  );

  // Exported field: field_alumni_work_place_desc
  $fields['alumni_info-field_alumni_work_place_desc'] = array(
    'field_name' => 'field_alumni_work_place_desc',
    'type_name' => 'alumni_info',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => 'group_alumni_work_place',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_alumni_work_place_desc][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Einsatzstelle',
      'weight' => '-1',
      'description' => 'einsatzstelle(Institution, Ort, Land - zB Casa de los Tres Mundos, Granada, Nicaragua)
2te einsatzstelle optional',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_alumni_work_year_beg
  $fields['alumni_info-field_alumni_work_year_beg'] = array(
    'field_name' => 'field_alumni_work_year_beg',
    'type_name' => 'alumni_info',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => 'group_alumni_work_place',
      'label' => array(
        'format' => 'inline',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => '',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'short',
    'widget' => array(
      'default_value' => 'now',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'm/d/Y - H:i:s',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-15:+1',
      'label_position' => 'above',
      'label' => 'Jahr des Antritts',
      'weight' => '-2',
      'description' => '',
      'type' => 'date_select',
      'module' => 'date',
    ),
  );

  // Exported field: field_alumni_work_place
  $fields['place_info-field_alumni_work_place'] = array(
    'field_name' => 'field_alumni_work_place',
    'type_name' => 'place_info',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'openlayers_wkt',
    'required' => '0',
    'multiple' => '0',
    'module' => 'openlayers_cck',
    'active' => '1',
    'openlayers_cck_feature_types' => array(
      'point' => 'point',
      'path' => 0,
      'polygon' => 0,
    ),
    'widget' => array(
      'openlayers_cck_preset_map' => 'default',
      'openlayers_behaviors' => array(
        'openlayers_behavior_zoomtolayer' => array(
          'enabled' => 0,
          'options' => array(
            'zoomtolayer' => 'openlayers_cck_vector_layer',
            'point_zoom_level' => '5',
          ),
        ),
      ),
      'keep_points' => 0,
      'default_value' => array(
        '0' => array(
          'openlayers_wkt' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Stelle(n)',
      'weight' => '-4',
      'description' => 'dieses feld speichert die koordinaten. bitte einfach darunter nach der addresse suchen',
      'type' => 'openlayers_geocoder_widget',
      'module' => 'openlayers_geocoder',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Adresse');
  t('Aktueller Ort');
  t('Einsatzstelle');
  t('Email');
  t('Jahr des Antritts');
  t('Portrait');
  t('Private Kurzinfo');
  t('Stelle(n)');
  t('Telefon');
  t('Weitere Orte');
  t('Weiteres (Hompage, etc)');

  return $fields;
}
