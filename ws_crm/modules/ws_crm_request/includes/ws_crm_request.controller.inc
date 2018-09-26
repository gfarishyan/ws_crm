<?php
class WsCrmRequestController extends EntityAPIController {
  public function create(array $values = array()) {
    $values += array(
      'id' => 0,
      'type' => 'ws_crm_request',
      'title' => '',
      'uid' => 0,
      'created' => time(),
      'changed' => time(),
      'closed' => 0,
      'request_status' => NULL,
    );
    return parent::create($values);
  }
}
