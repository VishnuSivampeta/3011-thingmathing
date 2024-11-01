#include "notes.h"
#include "buttons.h"
const int speakerPin = 4; // Pin connected to the speaker
const int toneFrequency = 440; // Frequency of the tone in Hertz (e.g., A4 note)
//const int toneDuration = 500;  // Duration of the tone in milliseconds
#define BUTTON_PIN_1 15
#define BUTTON_PIN_2 23
#define BUTTON_PIN_3 22
#define BUTTON_PIN_4 21
#define BUTTON_PIN_5 20
#define BUTTON_PIN_6 19
#define BUTTON_PIN_7 18
#define BUTTON_PIN_8 9
void setup() {
  initButtons();
  Serial.print("INIT DONE");
}

void loop() {
  // Play the tone on speakerPin at toneFrequency for toneDuration
  //tone(speakerPin, toneFrequency, toneDuration);
  
  // if (digitalRead(15) == HIGH) {
  //   playCL();
  //   Serial.print("CL");
  // } else
   if (digitalRead(23) == HIGH) {
    playD();
    Serial.print("CL");
  } else if (digitalRead(22) == HIGH) {
    playE();
    Serial.print("CL");
  } else if (digitalRead(21) == HIGH) {
    playF();
    Serial.print("CL");
  } else if (digitalRead(20) == HIGH) {
    playG();
    Serial.print("CL");
  } else if (digitalRead(19) == HIGH) {
    playA();
    Serial.print("CL");
  } else if (digitalRead(15) == HIGH) {
    playB();
    Serial.print("CL");
  // } else if (digitalRead(9) == HIGH) {
  //   playCH();
  //   Serial.print("CL");
  } else {
    noTone(4);
  }
  // Wait for a bit before playing again
   // 1 second delay
   //tone(4,1000,500);

}