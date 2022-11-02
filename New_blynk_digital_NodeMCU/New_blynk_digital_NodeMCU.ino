
// Chage These Credentials with your Blynk Template credentials 
#define BLYNK_TEMPLATE_ID "Template ID"
#define BLYNK_DEVICE_NAME "Device Name"
#define BLYNK_AUTH_TOKEN "Blynk Token"

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "wifi name"; // Change your Wifi/ Hotspot Name
char pass[] = "password"; // Change your Wifi/ Hotspot Password

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop()
{
  Blynk.run();
}
