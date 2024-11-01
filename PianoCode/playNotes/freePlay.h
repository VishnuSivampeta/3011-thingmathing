#include "level1.h"

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
#define BUTTON_PIN_8 1



void freePlay() {
  // Play the tone on speakerPin at toneFrequency for toneDuration
  //tone(speakerPin, toneFrequency, toneDuration);
  //TODO: MAKE A BREAK WHEN RED CARD IS SCANNED
  if (digitalRead(15) == HIGH) {
    playCL();
  } else if (digitalRead(23) == HIGH) {
    playD();
  } else if (digitalRead(22) == HIGH) {
    playE();
  } else if (digitalRead(21) == HIGH) {
    playF();
  } else if (digitalRead(20) == HIGH) {
    playG();
  } else if (digitalRead(19) == HIGH) {
    playA();
  } else if (digitalRead(18) == HIGH) {
    playB();
  } else if (digitalRead(1) == HIGH) {
    playCH();
  } else {
    noTone(4);
  }
  // Wait for a bit before playing again
   // 1 second delay
   //tone(4,1000,500);

}