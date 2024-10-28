#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

const char* ssid = "";  
const char* password = ""; 

void setup() {
    Serial.begin(115200);
    WiFi.begin(ssid, password);
    delay(4000);
    Serial.print("Connexion au WiFi...");
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi connecté !");
    Serial.print("Adresse IP : ");
    Serial.println(WiFi.localIP());
}

void loop() {
    if (WiFi.status() == WL_CONNECTED) {
        Serial.println("Connected");
    }else{
      Serial.println("Not connected");
    }
    delay(10000);
}