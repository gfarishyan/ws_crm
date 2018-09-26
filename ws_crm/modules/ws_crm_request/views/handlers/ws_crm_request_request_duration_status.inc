<?php
class ws_crm_request_request_duration_status extends views_handler_field_entity {
  function construct() {
    parent::construct();
    $this->additional_fields['id'] = 'id';
  }
  
  function option_definition() {
    $options = parent::option_definition();
    return $options;
  }
  
  function options_form(&$form, &$form_state) {
     parent::options_form($form, $form_state);
  }
  
  function query() {
    $this->ensure_my_table();
    $this->add_additional_fields();
  }
  
  function render($values) {
    $entity = $this->get_value($values);
    
    if ($entity->request_status == 20) { //if entity closed calculate diff
      $diff = $entity->closed - $entity->created;
    } else {
      $diff = time() - $entity->created;
    }
    
    $color = 'green';
    if ( $diff > 86400 ) { //24 hours
      $color = 'red';
    }
    return '<div class="'. $color .'"></div>';
  }

}