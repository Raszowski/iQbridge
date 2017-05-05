void setup(void) {
  
  Serial.println("iQ Server v beta 0.23"); // ZMIENIC ZA KAZDYM RAZEM PRZY UPGRADE

  pinMode                 (LED, OUTPUT);
  pinMode                 (RF433, OUTPUT);
  pinMode                 (RELAY, OUTPUT);
  pinMode                 (RELAY2, OUTPUT);
  digitalWrite            (RELAY, HIGH);
  digitalWrite            (RELAY2, HIGH);
  Serial.begin            (115200);
  client.begin            (mqtt_server, wifiClient);
  
  mySwitch.enableTransmit (14); 
//  mySwitch.enableReceive(13); Czytacz kodów pilota
  setup_wifi();
}
