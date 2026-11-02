#include <Arduino.h>
int switchState = 0;

int greenCarLight = 5;
int yellowCarLight = 6;
int redCarLight = 7;
int greenPedestrianLight = 3;
int redPedestrianLight = 4;
int buttonPin = 2;

void setup() {
  pinMode(greenCarLight, OUTPUT);
  pinMode(yellowCarLight, OUTPUT);
  pinMode(redCarLight, OUTPUT);
  pinMode(greenPedestrianLight, OUTPUT);
  pinMode(redPedestrianLight, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  switchState = digitalRead(2);
  if (switchState == LOW) {
    //zeleno za aute
    digitalWrite(greenCarLight, HIGH);
    digitalWrite(yellowCarLight, LOW);
    digitalWrite(redCarLight, LOW);
    digitalWrite(greenPedestrianLight, LOW);
    digitalWrite(redPedestrianLight, HIGH);
  }
  else {
    //pali se žuto za aute za stop
    digitalWrite(greenCarLight, LOW);
    digitalWrite(yellowCarLight, HIGH);
    digitalWrite(redCarLight, LOW);
    digitalWrite(greenPedestrianLight, LOW);
    digitalWrite(redPedestrianLight, HIGH);
    delay(5000);
    //pali se crveno za aute
    digitalWrite(greenCarLight, LOW);
    digitalWrite(yellowCarLight, LOW);
    digitalWrite(redCarLight, HIGH);
    digitalWrite(greenPedestrianLight, LOW);
    digitalWrite(redPedestrianLight, HIGH);
    delay(5000);
    //pali se zeleno za pješake
    digitalWrite(greenCarLight, LOW);
    digitalWrite(yellowCarLight, LOW);
    digitalWrite(redCarLight, HIGH);
    digitalWrite(greenPedestrianLight, HIGH);
    digitalWrite(redPedestrianLight, LOW);
    delay(5000);
    //pali se crveno za pješake
    digitalWrite(greenCarLight, LOW);
    digitalWrite(yellowCarLight, LOW);
    digitalWrite(redCarLight, HIGH);
    digitalWrite(greenPedestrianLight, LOW);
    digitalWrite(redPedestrianLight, HIGH);
    delay(3000);
    //gasi se žuto za aute za start
      digitalWrite(greenCarLight, LOW);
    digitalWrite(yellowCarLight, HIGH);
    digitalWrite(redCarLight, LOW);
    digitalWrite(greenPedestrianLight, LOW);
    digitalWrite(redPedestrianLight, HIGH);
    delay(2000); 
  }
}