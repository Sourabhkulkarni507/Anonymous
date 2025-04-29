//#include <ESP8266WiFi.h>
//#include <WiFiClient.h>
//#include <ESP8266WebServer.h>
//#include <Ticker.h>

/*const char* ssid = "YOUR_SSID";
const char* password = "YOUR_PASSWORD";

ESP8266WebServer server(80);
Ticker motorScheduler;


int motorPin = 9; // Use any PWM pin for servo motor
bool motorState = false;

void setup() {
  pinMode(motorPin, OUTPUT);

  Serial.begin(115200);
  delay(10);

  // Connect to Wi-Fi
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected.");

  // Start the server
  server.on("/", handleRoot);
  server.on("/on", handleMotorOn);
  server.on("/off", handleMotorOff);
  server.begin();
  Serial.println("Server started");

  // Set up motor scheduler
  motorScheduler.attach(60, checkSchedule); // Check every 60 seconds
}

void loop() {
  server.handleClient();
}

void handleRoot() {
  server.send(200, "text/plain", "Welcome to Motor Control");
}

void handleMotorOn() {
  digitalWrite(motorPin, HIGH);
  motorState = true;
  server.send(200, "text/plain", "Motor turned on");
}

void handleMotorOff() {
  digitalWrite(motorPin, LOW);
  motorState = false;
  server.send(200, "text/plain", "Motor turned off");
}

void checkSchedule() {
  // Implement your scheduling logic here
  // For example, you can check the current time and turn the motor on or off based on a schedule
  // This is a basic example
  int currentHour = hour();
  if (currentHour >= 9 && currentHour < 17) {
    if (!motorState) {
      digitalWrite(motorPin, HIGH);
      motorState = true;
    }
  } else {
    if (motorState) {
      digitalWrite(motorPin, LOW);
      motorState = false;
    }
  }
}
*/
#include<iostream>
using namespace std;
int main()
{
	int i;
	cout<<"\n\t HELLO world";
}
