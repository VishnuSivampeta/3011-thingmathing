#include "notes.h"
#include "buttons.h"
#include "muxLED.h"
#define BUTTON_PIN_1 15
#define BUTTON_PIN_2 23
#define BUTTON_PIN_3 22
#define BUTTON_PIN_4 21
#define BUTTON_PIN_5 20
#define BUTTON_PIN_6 19
#define BUTTON_PIN_7 18
#define BUTTON_PIN_8 9
#define SPEAKER_PIN 4


bool checkCL() {
  bool correctNote = false;
  bool redCard = false;
  //TODO: setup screen for question and light up correct LED
  out7();
  while (!correctNote) {
    if (redCard) {
      //TODO: check for red card, return if its detected
      //clear screen and turn off LED
      out0();
      return false;
    }
    if (isAnyButtonPressed()) {
      if (digitalRead(15) == HIGH) {
        playCL();
        correctNote = true;
      } else {
        noTone(4);
        //TODO: display "INCORRECT"
      }
    }

    if (correctNote) {
      //TODO:Turn LED light off and clear display
      out0();
      delay(1000);
      return true;
    }
  }
}

bool checkD() {
  bool correctNote = false;
  bool redCard = false;
  //TODO: setup screen for question and light up correct LED
  out5();
  while (!correctNote) {
    if (redCard) {
      //TODO: check for red card, return if its detected
      //clear screen and turn off LED
      out0();
      return false;
    }
    if (isAnyButtonPressed()) {
      if (digitalRead(23) == HIGH) {
        playD();
        correctNote = true;
      } else {
        noTone(4);
        //TODO: display "INCORRECT"
      }
    }

    if (correctNote) {
      //TODO:Turn LED light off and clear display
      out0();
      delay(1000);
      return true;
    }
  }
}

bool checkE() {
  bool correctNote = false;
  bool redCard = false;
  //TODO: setup screen for question and light up correct LED
  out3();
  while (!correctNote) {
    if (redCard) {
      //TODO: check for red card, return if its detected
      //clear screen and turn off LED
      out0();
      return false;
    }
    if (isAnyButtonPressed()) {
      if (digitalRead(22) == HIGH) {
        playE();
        correctNote = true;
      } else {
        noTone(4);
        //TODO: display "INCORRECT"
      }
    }

    if (correctNote) {
      //TODO:Turn LED light off and clear display
      out0();
      delay(1000);
      return true;
    }
  }
}

bool checkF() {
  bool correctNote = false;
  bool redCard = false;
  //TODO: setup screen for question and light up correct LED
  out1();
  while (!correctNote) {
    if (redCard) {
      //TODO: check for red card, return if its detected
      //clear screen and turn off LED
      out0();
      return false;
    }
    if (isAnyButtonPressed()) {
      if (digitalRead(21) == HIGH) {
        playF();
        correctNote = true;
      } else {
        noTone(4);
        //TODO: display "INCORRECT"
      }
    }

    if (correctNote) {
      //TODO:Turn LED light off and clear display
      out0();
      return true;
    }
  }
}

bool checkG() {
  bool correctNote = false;
  bool redCard = false;
  //TODO: setup screen for question and light up correct LED
  out15();
  while (!correctNote) {
    if (redCard) {
      //TODO: check for red card, return if its detected
      //clear screen and turn off LED
      out0();
      return false;
    }
    if (isAnyButtonPressed()) {
      if (digitalRead(20) == HIGH) {
        playG();
        correctNote = true;
      } else {
        noTone(4);
        //TODO: display "INCORRECT"
      }
    }

    if (correctNote) {
      //TODO:Turn LED light off and clear display
      out0();
      return true;
    }
  }
}

bool checkA() {
  bool correctNote = false;
  bool redCard = false;
  //TODO: setup screen for question and light up correct LED
  out9();
  while (!correctNote) {
    if (redCard) {
      //TODO: check for red card, return if its detected
      //clear screen and turn off LED
      out0();
      return false;
    }
    if (isAnyButtonPressed()) {
      if (digitalRead(19) == HIGH) {
        playA();
        correctNote = true;
      } else {
        noTone(4);
        //TODO: display "INCORRECT"
      }
    }

    if (correctNote) {
      //TODO:Turn LED light off and clear display
      out0();
      delay(1000);
      return true;
    }
  }
}

bool checkB() {
  bool correctNote = false;
  bool redCard = false;
  //TODO: setup screen for question and light up correct LED
  out13();
  while (!correctNote) {
    if (redCard) {
      //TODO: check for red card, return if its detected
      //clear screen and turn off LED
      out0();
      return false;
    }
    if (isAnyButtonPressed()) {
      if (digitalRead(18) == HIGH) {
        playB();
        correctNote = true;
      } else {
        noTone(4);
        //TODO: display "INCORRECT"
      }
    }

    if (correctNote) {
      //TODO:Turn LED light off and clear display
      out0();
      return true;
    }
  }
}

bool checkCH() {
  bool correctNote = false;
  bool redCard = false;
  //TODO: setup screen for question and light up correct LED
  out11();
  while (!correctNote) {
    if (redCard) {
      //TODO: check for red card, return if its detected
      //clear screen and turn off LED
      out0();
      return false;
    }
    if (isAnyButtonPressed()) {
      if (digitalRead(1) == HIGH) {
        playCH();
        correctNote = true;
      } else {
        noTone(4);
        //TODO: display "INCORRECT"
      }
    }

    if (correctNote) {
      //TODO:Turn LED light off and clear display
      out0();
      delay(1000);
      return true;
    }
  }
}
void levelOne() {
  //show note letter, staff, and light up key
  //check to see if they want to stop by scanning for a red card
  checkE();
  checkG();
  checkB();
  checkCL();
  checkD();
  checkCH();
  checkF();
  checkA();
}