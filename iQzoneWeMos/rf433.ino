// Custom functions for RCSwitch. Define your own, then link them to an MQTT channel.
/*###########################################*/
void T1on() {
  mySwitch.switchOn("11111", "10000");
}

void T1off() {
  mySwitch.switchOff("11111", "10000");
}
/*### LED BIURKO ########################################*/
void T2on() {
  mySwitch.switchOn("11111", "01000");
}

void T2off() {
  mySwitch.switchOff("11111", "01000");
}
/*###########################################*/
void T3on() {
  mySwitch.switchOn("11111", "00100");
}

void T3off() {
  mySwitch.switchOff("11111", "00100");
}
/*###########################################*/
void T4on() {
  mySwitch.switchOn("11111", "00010");
}

void T4off() {
  mySwitch.switchOff("11111", "00010");
}
