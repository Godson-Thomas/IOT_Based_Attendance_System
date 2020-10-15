

// CODE
// THIS CODE IS ALREADY INTEGRATED WITH THE TAG_code
// THE FOLLOWING CODE IS JUST TO TEST YOUR CONNECTION WITH GOOGLE FIREBASE




#include <ESP8266WiFi.h>
#include <SoftwareSerial.h>
#include <FirebaseArduino.h>
#include <ArduinoJson.h>
#include <ESP8266HTTPClient.h>

// Set these to run example.
#define FIREBASE_HOST "" // Firebase DATABASE url
#define FIREBASE_AUTH "" // Database Secrets
#define WIFI_SSID "" // WiFi name
#define WIFI_PASSWORD "" // wifi  password


void setup()
{
  // Debug console
  Serial.begin(9600);

  // connect to wifi.
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  
  while (WiFi.status() != WL_CONNECTED)
      {
     Serial.print("\n");
    Serial.print("CONNECTING.....");
    delay(500);
      }
  Serial.println();
  Serial.print("connected: ");
  Serial.println(WiFi.localIP());
  
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);

   
}

void loop()
{   



Serial.print("CHECK the DATABASE"); 
Firebase.setString("R_1","FINE");
Firebase.setString("R_2","FINE");
delay(5000);
Firebase.setString("R_2","OK");
delay(1000);            
}
