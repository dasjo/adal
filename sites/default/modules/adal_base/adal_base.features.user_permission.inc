<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function adal_base_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit field_alumni_contact_address
  $permissions['edit field_alumni_contact_address'] = array(
    'name' => 'edit field_alumni_contact_address',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_alumni_contact_email
  $permissions['edit field_alumni_contact_email'] = array(
    'name' => 'edit field_alumni_contact_email',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_alumni_contact_image
  $permissions['edit field_alumni_contact_image'] = array(
    'name' => 'edit field_alumni_contact_image',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_alumni_contact_misc
  $permissions['edit field_alumni_contact_misc'] = array(
    'name' => 'edit field_alumni_contact_misc',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_alumni_contact_tel
  $permissions['edit field_alumni_contact_tel'] = array(
    'name' => 'edit field_alumni_contact_tel',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_alumni_current_position
  $permissions['edit field_alumni_current_position'] = array(
    'name' => 'edit field_alumni_current_position',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_alumni_other_places
  $permissions['edit field_alumni_other_places'] = array(
    'name' => 'edit field_alumni_other_places',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_alumni_short_info
  $permissions['edit field_alumni_short_info'] = array(
    'name' => 'edit field_alumni_short_info',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_alumni_work_place
  $permissions['edit field_alumni_work_place'] = array(
    'name' => 'edit field_alumni_work_place',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_alumni_work_place_desc
  $permissions['edit field_alumni_work_place_desc'] = array(
    'name' => 'edit field_alumni_work_place_desc',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: edit field_alumni_work_year_beg
  $permissions['edit field_alumni_work_year_beg'] = array(
    'name' => 'edit field_alumni_work_year_beg',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_contact_address
  $permissions['view field_alumni_contact_address'] = array(
    'name' => 'view field_alumni_contact_address',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_contact_email
  $permissions['view field_alumni_contact_email'] = array(
    'name' => 'view field_alumni_contact_email',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_contact_image
  $permissions['view field_alumni_contact_image'] = array(
    'name' => 'view field_alumni_contact_image',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_contact_misc
  $permissions['view field_alumni_contact_misc'] = array(
    'name' => 'view field_alumni_contact_misc',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_contact_tel
  $permissions['view field_alumni_contact_tel'] = array(
    'name' => 'view field_alumni_contact_tel',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_current_position
  $permissions['view field_alumni_current_position'] = array(
    'name' => 'view field_alumni_current_position',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_other_places
  $permissions['view field_alumni_other_places'] = array(
    'name' => 'view field_alumni_other_places',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_short_info
  $permissions['view field_alumni_short_info'] = array(
    'name' => 'view field_alumni_short_info',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_work_place
  $permissions['view field_alumni_work_place'] = array(
    'name' => 'view field_alumni_work_place',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_work_place_desc
  $permissions['view field_alumni_work_place_desc'] = array(
    'name' => 'view field_alumni_work_place_desc',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  // Exported permission: view field_alumni_work_year_beg
  $permissions['view field_alumni_work_year_beg'] = array(
    'name' => 'view field_alumni_work_year_beg',
    'roles' => array(
      '0' => 'anonymous user',
      '1' => 'authenticated user',
    ),
  );

  return $permissions;
}
