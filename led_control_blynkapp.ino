#include <Blynk.h> 
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = "O3zKYZjQ8yXrRGxRhaIq80Nqj2-77J-r";
char ssid[] = "Home"; //network auth
char pass[] = "1234567890"; //network auth


void setup() {
pinMode(LED_BUILTIN, 17); //led pwm & in app button control
  Serial.begin(115200);
  delay(10);
  Serial.print("Connecting...");
  Serial.println(ssid);
  WiFi.begin(ssid, pass);
  int wifi_ctr = 0;
  while (WiFi.status() != WL_CONNECTED) {
  delay(500);
  Serial.print(".");
  }
  Serial.println("WiFi connected");
  Blynk.begin("O3zKYZjQ8yXrRGxRhaIq80Nqj2-77J-r", ssid, pass);

}

void loop() {
  Blynk.run(); //light state 
    digitalWrite(LED_BUILTIN, HIGH);  
	digitalWrite(LED_BUILTIN, LOW); 
}
