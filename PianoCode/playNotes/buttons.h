// Define button pins
#define BUTTON_PIN_1 15
#define BUTTON_PIN_2 23
#define BUTTON_PIN_3 22
#define BUTTON_PIN_4 21
#define BUTTON_PIN_5 20
#define BUTTON_PIN_6 19
#define BUTTON_PIN_7 18
#define BUTTON_PIN_8 9

// Function to initialize all button pins
void initButtons() {
  pinMode(BUTTON_PIN_1, INPUT_PULLDOWN);
  pinMode(BUTTON_PIN_2, INPUT_PULLDOWN);
  pinMode(BUTTON_PIN_3, INPUT_PULLDOWN);
  pinMode(BUTTON_PIN_4, INPUT_PULLDOWN);
  pinMode(BUTTON_PIN_5, INPUT_PULLDOWN);
  pinMode(BUTTON_PIN_6, INPUT_PULLDOWN);
  pinMode(BUTTON_PIN_7, INPUT_PULLDOWN);
  pinMode(BUTTON_PIN_8, INPUT_PULLDOWN);
}

// Function to check if a specific button is pressed
bool isButtonPressed(int buttonPin) {
  return digitalRead(buttonPin) == HIGH; // Returns true if the button is pressed
}