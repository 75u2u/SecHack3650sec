#include "DigiKeyboard.h"

#define KEY_DELETE 76//127
#define KEY_ESC 41//27
void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  digitalWrite(1, LOW);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.println("");
  DigiKeyboard.delay(1000);
  //DigiKeyboard.update();
  //DigiKeyboard.print(); // 
  //DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //DigiKeyboard.delay(500);
  //DigiKeyboard.sendKeyStroke(KEY_DELETE, MOD_ALT_LEFT | MOD_CONTROL_LEFT);
  DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT, KEY_ESC); // home
  DigiKeyboard.sendKeyStroke(KEY_B, MOD_SHIFT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(MOD_CONTROL_RIGHT, KEY_ESC); // menu
  DigiKeyboard.delay(500);
  //DigiKeyboard.print("aaa"); // googleアシスタント起動
  //DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //DigiKeyboard.delay(500);

  
  //DigiKeyboard.sendKeyStroke(KEY_DELETE, MOD_ALT_LEFT | MOD_CONTROL_LEFT);
  //DigiKeyboard.delay(500);
  
  while(1) {
    digitalWrite(1, HIGH);
    delay(500);
    digitalWrite(1, LOW);
    delay(500);
  }
}
