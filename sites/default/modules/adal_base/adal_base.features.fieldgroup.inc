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
    'label' => 'Info',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => 'Interne Kontaktdaten, diese Informationen werden nicht öffentlich sondern nur für andere, angemeldete Alumni angezeigt.
Der aktuelle Ort wird auf der Weltkarte mittels der Adresssuche unterhalb markiert.',
      ),
      'display' => array(
        'description' => 'Interne Kontaktdaten, diese Informationen werden nicht öffentlich sondern nur für andere, angemeldete Alumni angezeigt',
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
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '-1',
    'fields' => array(
      '0' => 'field_alumni_current_position',
      '1' => 'field_alumni_contact_address',
      '2' => 'field_alumni_contact_email',
      '3' => 'field_alumni_contact_tel',
      '4' => 'field_alumni_contact_misc',
      '5' => 'field_alumni_short_info',
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
        'weight' => '1',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '0',
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
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '-2',
    'fields' => array(
      '0' => 'field_alumni_work_year_beg',
      '1' => 'field_alumni_work_place_refs',
    ),
  );

  // Exported group: group_place_info
  $groups['place_info-group_place_info'] = array(
    'group_type' => 'standard',
    'type_name' => 'place_info',
    'group_name' => 'group_place_info',
    'label' => 'Ort',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => 'Der Ort der Stelle wird auf der Weltkarte mittels der Adresssuche unterhalb markiert',
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
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '-4',
    'fields' => array(
      '0' => 'field_alumni_work_place',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Info');
  t('Ort');
  t('Stelle(n)');
  t('Weitere Orte');

  return $groups;
}
