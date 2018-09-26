<?php
class WsCrmRequestViewsController extends EntityDefaultViewsController {
  public function views_data() {
    $data = parent::views_data();
    $data['ws_crm_request']['request_duration'] = array(
      'field' => array(
         'title' => t('Request Duration status'),
         'help' => t('Request Duration status.'),
         'handler' => 'ws_crm_request_request_duration_status',
      ),
    );
    
    $data['ws_crm_request']['request_avarage_time'] = array(
      'area' => array(
         'title' => t('Request Avarage time'),
         'help' => t('Request Avarage time.'),
         'handler' => 'ws_crm_request_avarage_time',
      ),
    );
    
    return $data;
  }
}