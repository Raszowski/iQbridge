

void loop(void) {
	client.loop();
	if (!client.connected()) {
		mqtt();
	}
	httpServer.handleClient();

	//  if (mySwitch.available()) {
	//    int value = mySwitch.getReceivedValue();
	//    if (value == 0) {
	//      Serial.print("Unknown encoding");
	//    } else {
	//      Serial.print("Received ");
	//      Serial.print( mySwitch.getReceivedValue() );
	//      Serial.print(" / ");
	//      Serial.print( mySwitch.getReceivedBitlength() );       // CZYTACZ KODÓW PILOTA
	//      Serial.print("bit ");
	//      Serial.print("Protocol: ");
	//      Serial.println( mySwitch.getReceivedProtocol() );
	//    }
	//    mySwitch.resetAvailable();
	//  }
}




