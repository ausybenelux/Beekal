<?php
/**
 * @file
 * beekal_example_data_object.features.inc
 */

/**
 * Implements hook_views_api().
 */
function beekal_example_data_object_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function beekal_example_data_object_image_default_styles() {
  $styles = array();

  // Exported image style: beacon_data_image_gallery_list_view.
  $styles['beacon_data_image_gallery_list_view'] = array(
    'name' => 'beacon_data_image_gallery_list_view',
    'label' => 'Beacon data: image gallery (list view)',
    'effects' => array(
      4 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 80,
          'height' => 80,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: beacon_data_image_gallery_phablet.
  $styles['beacon_data_image_gallery_phablet'] = array(
    'name' => 'beacon_data_image_gallery_phablet',
    'label' => 'Beacon data: image gallery (phablet)',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 768,
          'height' => 576,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: beacon_data_image_gallery_smartphone.
  $styles['beacon_data_image_gallery_smartphone'] = array(
    'name' => 'beacon_data_image_gallery_smartphone',
    'label' => 'Beacon data: image gallery (smartphone)',
    'effects' => array(
      3 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 480,
          'height' => 360,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: beacon_data_image_gallery_tablet.
  $styles['beacon_data_image_gallery_tablet'] = array(
    'name' => 'beacon_data_image_gallery_tablet',
    'label' => 'Beacon data: image gallery (tablet)',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1024,
          'height' => 768,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function beekal_example_data_object_node_info() {
  $items = array(
    'beacon_data' => array(
      'name' => t('Beacon data'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
