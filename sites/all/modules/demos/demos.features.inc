<?php
/**
 * @file
 * demos.features.inc
 */

/**
 * Implements hook_node_info().
 */
function demos_node_info() {
  $items = array(
    'demos' => array(
      'name' => t('Demos'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
