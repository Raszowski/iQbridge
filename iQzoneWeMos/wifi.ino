void setup_wifi(void){
  Serial.println();
  Serial.println("Firmware Updater Load ...");
  WiFi.mode(WIFI_AP_STA);
  WiFi.begin(ssid, password);

  while (WiFi.waitForConnectResult() != WL_CONNECTED) {
    WiFi.begin(ssid, password);
    Serial.println("WiFi failed, retrying.");
    delay(100);
    blink();
  }

  MDNS.begin(host);

  httpUpdater.setup(&httpServer, update_path, update_username, update_password);
  httpServer.begin();

  MDNS.addService("http", "tcp", 80);
  Serial.printf("iQ Server ready! http://%s.local%s \n", host, update_path, update_username, update_password);
  //"To upload through terminal you can use: curl -F "image=@firmware.bin" iQserver.local/update"
}


