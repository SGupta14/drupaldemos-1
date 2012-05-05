  <?php
  $current_url = current_path();
  $param = explode("/", $current_url);
  $nid = $param[1];

  $type = db_select("node", "n")
            ->fields("n", array("type"))
            ->condition("nid", $nid, "=")
            ->execute()
            ->fetchAssoc();
    
  switch($type['type']) {
    case "description":
      $current_desc_link = $current_url;
      $demo_link_result = db_select("field_data_field_desc_demolink", "fddd")
                          ->fields("fddd", array("field_desc_demolink_url"))
                          ->condition("entity_id", $nid, "=")
                          ->execute()
                          ->fetchAssoc();
      $current_demo_link = $demo_link_result['field_desc_demolink_url'];

      $howto_entityid = db_select("field_data_field_howto_demolink", "fdhd")
                          ->fields("fdhd", array("entity_id"))
                          ->condition("field_howto_demolink_url", $current_demo_link, "=")
                          ->execute()
                          ->fetchAssoc();
      $current_howto_link = "node/" . $howto_entityid['entity_id'];

      break;
      
    case "how_to":
      $current_howto_link = $current_url;
      $demo_link_result = db_select("field_data_field_howto_demolink", "fdhd")
                          ->fields("fdhd", array("field_howto_demolink_url"))
                          ->condition("entity_id", $nid, "=")
                          ->execute()
                          ->fetchAssoc();
      $current_demo_link = $demo_link_result['field_howto_demolink_url'];

      $desc_entityid = db_select("field_data_field_desc_demolink", "fddd")
                          ->fields("fddd", array("entity_id"))
                          ->condition("field_desc_demolink_url", $current_demo_link, "=")
                          ->execute()
                          ->fetchAssoc();
      $current_desc_link = "node/" . $desc_entityid['entity_id'];

      break;
      
    default:
      $desc_entityid = db_select("field_data_field_desc_demolink", "fddd")
                          ->fields("fddd", array("entity_id"))
                          ->condition("field_desc_demolink_url", $current_url, "=")
                          ->execute()
                          ->fetchAssoc();

      $howto_entityid = db_select("field_data_field_howto_demolink", "fdhd")
                          ->fields("fdhd", array("entity_id"))
                          ->condition("field_howto_demolink_url", $current_url, "=")
                          ->execute()
                          ->fetchAssoc();
                          
      $current_demo_link = $current_url;
      $current_desc_link = "node/" . $desc_entityid['entity_id'];
      $current_howto_link = "node/" . $howto_entityid['entity_id'];

      break;
  }
  
$output = "<ul class='tabs primary'>";
$output .= "<li><a href='" . url($current_demo_link) . "'>Demo</a></li>";
$output .= "<li><a href='" . url($current_desc_link) . "'>Description</a></li>";
$output .= "<li><a href='" . url($current_howto_link) . "'>How to</a></li>";
$output .= "</ul>";

echo $output;
?>
