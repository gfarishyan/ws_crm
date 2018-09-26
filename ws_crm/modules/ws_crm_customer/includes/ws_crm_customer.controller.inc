<?php
class WsCrmCustomerController extends EntityAPIController {
  public function create(array $values = array()) {
    $values += array(
      'id' => 0,
      'type' => 'ws_crm_customer',
      'full_name' => '',
      'uid' => 0,
      'created' => time(),
      'changed' => time(),
    );
    return parent::create($values);
  }
}