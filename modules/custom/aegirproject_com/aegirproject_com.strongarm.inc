<?php
/**
 * @file
 * aegirproject_com.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function aegirproject_com_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'aegirproject_com';
  $export['theme_default'] = $strongarm;

  return $export;
}
