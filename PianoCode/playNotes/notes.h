#define CL_FREQ  261
#define D_FREQ  293
#define E_FREQ  329
#define F_FREQ  349
#define G_FREQ  392
#define A_FREQ  440
#define B_FREQ  493
#define CH_FREQ 523
#define toneDuration 500
#define pin 4

void playCL() {
  tone(pin,CL_FREQ,100);
}

void playD(){
  tone(pin,D_FREQ,100);
}

void playE() {
  tone(pin,E_FREQ,100);
}

void playF() {
  tone(pin,F_FREQ,100);
}

void playG() {
  tone(pin,G_FREQ,100);
}

void playA() {
  tone(pin,A_FREQ,100);
}

void playB() {
  tone(pin,B_FREQ,100);
}

void playCH() {
  tone(pin,CH_FREQ,100);
}
