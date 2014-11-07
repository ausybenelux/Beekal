/**
 * @file
 * Javascript for Beacon Data Object.
 */

(function ($) {
  Drupal.behaviors.beekal_example_data_object = {
    attach: function(context, settings) {

      $(document).ready(function(){
        determine_timerange_field_visibility();
      });
      $("#edit-field-beacon-all-day-und .form-item-field-beacon-all-day-und input").each(function(){
        $(this).change(function(){
          determine_timerange_field_visibility();
        });
      });

      function determine_timerange_field_visibility() {
        $("#edit-field-beacon-all-day-und .form-item-field-beacon-all-day-und input").each(function(){
          var checked = $(this).is(':checked');
          if (checked) {
            var value = $(this).val();
            toggle_timerange_field_visibility(value);
          }
        });
      }

      function toggle_timerange_field_visibility(all_day) {
        if (all_day == 1) {
          $('#edit-field-beacon-active-time-range').hide(200);
        }
        else {
          $('#edit-field-beacon-active-time-range').show(200);
        }
      }
    }
  };
})(jQuery);
