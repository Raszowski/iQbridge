#include <WiFiClient.h>
#include <RCSwitch.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include <ESP8266mDNS.h>
#include <ESP8266HTTPUpdateServer.h>

#include <MQTTClient.h>

#define RELAY       12
#define RELAY2      2
#define LED         5
#define RF433       14

const char* ssid          = "iQwifiESP";        //wifi name
const char* password      = "espwifi666";       //wifi secure

const char* mqtt_server   = "192.168.0.88";     //ip/host mqtt server
const char* mqtt_user     = "mqtt";             //username mqtt server
const char* mqtt_password = "mqtt";             //password mqtt server
const char* mqtt_ID       = "WeMosD01mini";           //user ID mqtt server

const char* host = "iQserver";
const char* update_path = "/firmware";
const char* update_username = "admin";
const char* update_password = "admin";

ESP8266WebServer httpServer(80);
ESP8266HTTPUpdateServer httpUpdater;

RCSwitch mySwitch = RCSwitch();

MQTTClient client;
WiFiClient wifiClient;
