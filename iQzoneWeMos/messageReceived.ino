int value = mySwitch.getReceivedValue();
void messageReceived(String topic, String payload, char * bytes, unsigned int length) {
  // Serial.print("incoming: ");
  Serial.print(topic);
  Serial.print(" ");
  Serial.print(payload);
  Serial.println();

  // if (topic.indexOf("switch") >= 0) {
  if (topic.indexOf("/iQ/RF/#") >= 0) {
    //switch control, parse out the channel and plug id

    int channel = getValue(topic, '/', 3).toInt();
    int plug = getValue(topic, '/', 4).toInt();

    if (payload == "ON") {
      mySwitch.switchOn(channel, plug);
    }
    else {
      mySwitch.switchOff(channel, plug);
    }
  }
  /* ##################################################################################################### */
  else if (topic.indexOf("T1") >= 0) {
    if (payload == "ON") {
      T1on();
     // client.publish(topic + "state " + payload);
    }
    else if (payload == "OFF") {
      T1off();
    //  client.publish(topic + "state " + payload);
    }
  }
  /* ##################################################################################################### */
  else if (topic.indexOf("T2") >= 0) {
    if (payload == "ON") {
      T2on();
     // client.publish(topic + "state " + payload);
    }
    else if (payload == "OFF") {
      T2off();
     // client.publish(topic + "state " + payload);
    }
  }
  /* ##################################################################################################### */
  else if (topic.indexOf("T3") >= 0) {
    if (payload == "ON") {
      T3on();
     // client.publish(topic + "state " + payload);
    }
    else if (payload == "OFF") {
      T3off();
     // client.publish(topic + "state " + payload);
    }
  }
  /* ##################################################################################################### */
  else if (topic.indexOf("T4") >= 0) {
    if (payload == "ON") {
      T4on();
     // client.publish(topic + "state " + payload);
    }
    else if (payload == "OFF") {
      T4off();
     // client.publish(topic + "state " + payload);
    }
  }
  /* ##################################################################################################### */
  else if (topic.indexOf("Relay") >= 0) {
    if (payload == "ON") {
      digitalWrite (RELAY, LOW);
      Serial.println(" OPEN!");
      delay(300);
      digitalWrite (RELAY, HIGH);
      blink();
    }
    else if (payload == "OFF") {
      digitalWrite (RELAY, HIGH);
      Serial.println(" CLOSE!");
      blink();
    }
  }
  /* ##################################################################################################### */
  else if (topic.indexOf("Relax") >= 0) {
    if (payload == "ON") {
      digitalWrite (RELAY2, LOW);
      Serial.println(" RELAY2 ON!");
      blink();

     // client.publish(topic + "state " + payload);

    } else if (payload == "OFF") {
      digitalWrite (RELAY2, HIGH);
      Serial.println(" RELAY2 OFF!");
      blink();
    //  client.publish(topic + "state " + payload);
    }
  }
}


