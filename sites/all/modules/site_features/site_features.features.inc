<?php
/**
 * @file
 * site_features.features.inc
 */

/**
 * Implements hook_node_info().
 */
function site_features_node_info() {
  $items = array(
    'sms_info' => array(
      'name' => t('SMS Info'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
