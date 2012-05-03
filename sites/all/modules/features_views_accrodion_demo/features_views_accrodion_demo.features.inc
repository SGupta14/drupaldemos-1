<?php
/**
 * @file
 * features_views_accrodion_demo.features.inc
 */

/**
 * Implements hook_views_api().
 */
function features_views_accrodion_demo_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function features_views_accrodion_demo_node_info() {
  $items = array(
    'demo7' => array(
      'name' => t('Demo7'),
      'base' => 'node_content',
      'description' => t('Drupal 7 demos'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
