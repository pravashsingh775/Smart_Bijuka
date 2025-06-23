/*
  Smart Bijuka – DigiKhet Protector
  Author: Pravash Singh
  Description: Smart scarecrow system using PIR sensor, DFPlayer, Servo motor, DC motor, and Blynk for real-time alerts.
  License: MIT
*/

#define BLYNK_TEMPLATE_ID "TMPL3-NMUlCAB"
#define BLYNK_TEMPLATE_NAME "Agriculture"
#define BLYNK_AUTH_TOKEN "QAw35H0SK8Oh2zf55O-E2RxeYd_XRE4-"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>
#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>

// WiFi credentials
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "vivo 1816";
char pass[] = "12345678";

// Pin configuration
#define PIR_PIN D5
#define SERVO_PIN D6
#define MOTOR_PIN D7

Servo myServo;
SoftwareSerial dfSerial(D2, D1); // TX, RX for DFPlayer
DFRobotDFPlayerMini dfPlayer;

bool motionDetected = false;

void setup() {
  Serial.begin(9600);
  dfSerial.begin(9600);

  pinMode(PIR_PIN, INPUT);
  pinMode(MOTOR_PIN, OUTPUT);
  digitalWrite(MOTOR_PIN, LOW);

  myServo.attach(SERVO_PIN);
  myServo.write(180); // Initial position

  Blynk.begin(auth, ssid, pass);

  if (!dfPlayer.begin(dfSerial)) {
    Serial.println("DFPlayer not detected!");
  } else {
    Serial.println("DFPlayer ready.");
    dfPlayer.volume(20); // Volume level (0–30)
  }
}

void loop() {
  Blynk.run();

  int pirState = digitalRead(PIR_PIN);

  if (pirState == HIGH && !motionDetected) {
    motionDetected = true;

    // Send alert to Blynk App
    Blynk.logEvent("motion", "Motion detected!");

    // Play sound through DFPlayer
    dfPlayer.play(1);  
    delay(1000);

    // Move servo arm
    myServo.write(0);
    delay(1000);

    // Activate DC motor
    digitalWrite(MOTOR_PIN, HIGH);
    delay(180000);  // 3 minutes (180 sec)
    digitalWrite(MOTOR_PIN, LOW);

    // Reset servo arm
    myServo.write(180);
    dfPlayer.stop(); 

    motionDetected = false;
  }
}
