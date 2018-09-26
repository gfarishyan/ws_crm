<?php
class ws_crm_request_avarage_time extends views_handler_area {
  /**
   * {@inheritdoc}
   */
   public function option_definition() {
    $options = parent::option_definition();
    return $options;
  }
  /**
   * {@inheritdoc}
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }
  
    /**
   * Find out the information to render.
   */
  public function render($empty = FALSE) {
    $count = count($this->view->result);
    if( $count == 0)
      return '';
    $now = time();
    $total = 0;
    //this is ugly but it's a demo just
    foreach ($this->view->result as $item) { 
     $entity = entity_load_single('ws_crm_request', $item->id);
     if (!empty($entity->closed)) {
      $total += ($entity->closed - $entity->created);
     } else {
       $total += ($now - $entity->created);
     }
    }
    
    $avarage = $total / $count;
        
    return '<div class="avarage-request-time"><span class="label">' . t('Avarage request time:') . '</span>' . format_interval($avarage, 2) . '</div>';
  }
}