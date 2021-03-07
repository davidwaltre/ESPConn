#include <ESP8266WiFi.h>
#include <ESP8266Ping.h>

int tryCount;

void reConnect(char ssid[], char pass[]) {
  if (WiFi.status() == WL_CONNECTED) {
    WiFi.disconnect();
  }
  tryCount = 0;
  Serial.println("[WIFI] Reconnecting to "+(String)ssid);
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, pass);
  WiFi.setSleepMode(WIFI_NONE_SLEEP);
  
  while (WiFi.status() != WL_CONNECTED) {
    tryCount += 1;
    delay(100);
    Serial.print(".");
    if (tryCount > 300) {
      reConnect(ssid, pass);
    }
  }
  Serial.println("");
  
  Serial.println("[WIFI] WiFi connected");
  Serial.println("[WIFI] IP address: " + WiFi.localIP().toString());
}

void checkConnection(IPAddress ip, char ssid[], char pass[]) {
  boolean pingTest = Ping.ping(ip, 2);
  if (pingTest == false) {
    Serial.print("No Ping!");
    reConnect(ssid, pass);
  }
  if (pingTest == true) {
    return;
  }
}
