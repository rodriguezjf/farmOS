<?php
/**
 * @file
 * farm_plan_map.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function farm_plan_map_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "openlayers" && $api == "default_openlayers_components") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "default_openlayers_maps") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function farm_plan_map_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
