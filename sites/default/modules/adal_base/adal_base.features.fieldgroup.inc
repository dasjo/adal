<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function adal_base_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_alumni_contact_data
  $groups['alumni_info-group_alumni_contact_data'] = array(
    'group_type' => 'standard',
    'type_name' => 'alumni_info',
    'group_name' => 'group_alumni_contact_data',
    'label' => 'Kontaktdaten',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '-3',
    'fields' => array(
      '0' => 'field_alumni_contact_image',
      '1' => 'field_alumni_contact_email',
      '2' => 'field_alumni_contact_tel',
      '3' => 'field_alumni_contact_address',
      '4' => 'field_alumni_contact_misc',
      '5' => 'field_alumni_short_info',
    ),
  );

  // Exported group: group_alumni_current_position
  $groups['alumni_info-group_alumni_current_position'] = array(
    'group_type' => 'standard',
    'type_name' => 'alumni_info',
    'group_name' => 'group_alumni_current_position',
    'label' => 'Aktueller Ort',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '-1',
    'fields' => array(
      '0' => 'field_alumni_current_position',
    ),
  );

  // Exported group: group_alumni_other_places
  $groups['alumni_info-group_alumni_other_places'] = array(
    'group_type' => 'standard',
    'type_name' => 'alumni_info',
    'group_name' => 'group_alumni_other_places',
    'label' => 'Weitere Orte',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '1',
    'fields' => array(
      '0' => 'field_alumni_other_places',
    ),
  );

  // Exported group: group_alumni_work_place
  $groups['alumni_info-group_alumni_work_place'] = array(
    'group_type' => 'standard',
    'type_name' => 'alumni_info',
    'group_name' => 'group_alumni_work_place',
    'label' => 'Stelle(n)',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '-2',
    'fields' => array(
      '0' => 'field_alumni_work_place',
      '1' => 'field_alumni_work_year_beg',
      '2' => 'field_alumni_work_place_desc',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Aktueller Ort');
  t('Kontaktdaten');
  t('Stelle(n)');
  t('Weitere Orte');

  return $groups;
}
