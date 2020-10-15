#include <ESP8266WiFi.h>
#include <SoftwareSerial.h>
#include <FirebaseArduino.h>
#include <ArduinoJson.h> //Install version 5.6.3
#include <ESP8266HTTPClient.h>
#include <SPI.h>
#include <MFRC522.h>



#define SS_PIN 4  //D2
#define RST_PIN 5 //D1


// Set these to run example.
#define FIREBASE_HOST "" //paste your database url
#define FIREBASE_AUTH "" //paste your database secret key
#define WIFI_SSID "" //type the active hotspot you want to connect
#define WIFI_PASSWORD "" //type the hotspot password

MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.
int statuss = 0;
int out = 0;
int count=1;

void setup()
{
   Serial.begin(9600);   // Initiate a serial communication
  SPI.begin();      // Initiate  SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522

  
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
     
// Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  //Show UID on serial monitor
  Serial.println();
  Serial.print(" YOUR TAG NUMBER :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  content.toUpperCase();
  Serial.println();
  
  if (content.substring(1) == "09 F0 73 2E" && count==1) //change UID of the card that you want to give access
  {
    
    Firebase.setString("adam/b","PRESENT"); // data to be stored in google firebase
    Serial.println(" Access Granted ");
    Serial.println(" YOUR RESPONSE HAS BEEN RECORDED ");
    delay(5000);
    Serial.println();
    statuss = 1;
    count=2;
  }
  else if (content.substring(1) == "09 F0 73 2E" && count==2) //change UID of the card that you want to give access
  {
    
    Firebase.setString("adam/ba","PRESENT"); // data to be stored in google firebase
    Serial.println(" Access Granted ");
    Serial.println(" YOUR RESPONSE HAS BEEN RECORDED ");
    
    Serial.println();
    statuss = 1;
    delay(5000);
    count=3;
  }
  else if (content.substring(1) == "09 F0 73 2E" && count==3) //change UID of the card that you want to give access
  {
    
    Firebase.setString("adam/bb","PRESENT"); // data to be stored in google firebase
    Serial.println(" Access Granted ");
    Serial.println(" YOUR RESPONSE HAS BEEN RECORDED ");
    delay(5000);
    Serial.println();
    statuss = 1;
    count=4;
  }
   else if (content.substring(1) == "09 F0 73 2E" && count==4) //change UID of the card that you want to give access
  {
    
    Firebase.setString("adam/bc","PRESENT");  // data to be stored in google firebase
    Serial.println(" Access Granted ");
    Serial.println(" YOUR RESPONSE HAS BEEN RECORDED ");
    delay(5000);
    Serial.println();
    statuss = 1;
    count=5;
  }
   else if (content.substring(1) == "09 F0 73 2E" && count==5) //change UID of the card that you want to give access
  {
    
    Firebase.setString("adam/bd","PRESENT"); // data to be stored in google firebase
    Serial.println(" Access Granted ");
    Serial.println(" YOUR RESPONSE HAS BEEN RECORDED ");
    delay(5000);
    Serial.println();
    statuss = 1;
    count=6;
  }
   else if (content.substring(1) == "09 F0 73 2E" && count==6) //change UID of the card that you want to give access
  {
    
    Firebase.setString("adam/be","PRESENT"); // data to be stored in google firebase
    Serial.println(" Access Granted ");
    Serial.println(" YOUR RESPONSE HAS BEEN RECORDED ");
    delay(5000);
    Serial.println();
    statuss = 1;
    count=7;
  }
   else if (content.substring(1) == "09 F0 73 2E" && count==7) //change UID of the card that you want to give access
  {
    
    Firebase.setString("adam/bf","PRESENT");  // data to be stored in google firebase
    Serial.println(" Access Granted ");
    Serial.println(" YOUR RESPONSE HAS BEEN RECORDED ");
    delay(5000);
    Serial.println();
    statuss = 1;
    count=8;
  }

  
 else if (content.substring(1) == "09 F0 73 2E" && count==8)
 {
    Serial.println("  ::::: PLEASE COME BACK TOMMORROW::: ");
    delay(3000);
  }

else   {
    Serial.println(" ::::: ACCESS DENIED::: ");
    delay(3000);
  }



delay(1000);
}

           
