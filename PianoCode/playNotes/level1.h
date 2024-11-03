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


bool checkCL(int x) {
  bool correctNote = false;
  bool redCard = false;
  //TODO: setup screen for question and light up correct LED
  if (x == 0) {
    out7();
  }
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

bool checkD(int x) {
  bool correctNote = false;
  bool redCard = false;
  //TODO: setup screen for question and light up correct LED
  if (x == 0) {
    out5();
  }
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

bool checkE(int x) {
  bool correctNote = false;
  bool redCard = false;
  //TODO: setup screen for question and light up correct LED
  if (x == 0) {
    out3();
  }
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

bool checkF(int x) {
  bool correctNote = false;
  bool redCard = false;
  //TODO: setup screen for question and light up correct LED
  if (x == 0) {
    out1();
  }
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

bool checkG(int x) {
  bool correctNote = false;
  bool redCard = false;
  //TODO: setup screen for question and light up correct LED
  if (x == 0) {
    out7();
  }
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

bool checkA(int x) {
  bool correctNote = false;
  bool redCard = false;
  //TODO: setup screen for question and light up correct LED
  if (x == 0) {
    out9();
  }
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

bool checkB(int x) {
  bool correctNote = false;
  bool redCard = false;
  //TODO: setup screen for question and light up correct LED
  if (x == 0) {
    out13();
  }
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

bool checkCH(int x) {
  bool correctNote = false;
  bool redCard = false;
  //TODO: setup screen for question and light up correct LED
  if (x == 0) {
    out11();
  }
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
  checkE(0);
  checkG(0);
  checkB(0);
  checkCL(0);
  checkD(0);
  checkCH(0);
  checkF(0);
  checkA(0);
}

void levelTwo() {
  //show the letter and staff
  checkE(1);
  checkG(1);
  checkB(1);
  checkCL(1);
  checkD(1);
  checkCH(1);
  checkF(1);
  checkA(1);
}

void levelThree() {
  //show the letter and staff
  checkE(2);
  checkG(2);
  checkB(2);
  checkCL(2);
  checkD(2);
  checkCH(2);
  checkF(2);
  checkA(2);
}