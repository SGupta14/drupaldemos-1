<?php
/**
 * @file
 * features_new_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function features_new_content_type_node_info() {
  $items = array(
    'description' => array(
      'name' => t('Description'),
      'base' => 'node_content',
      'description' => t('Description of a demo'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'how_to' => array(
      'name' => t('How to'),
      'base' => 'node_content',
      'description' => t('Steps followed for making the demo'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
