#include <Keyboard.h>

int PIN_UP = 3;
int PIN_DOWN = 5;
int PIN_LEFT = 2;
int PIN_RIGHT = 4;
int PIN_A = 6;
int PIN_B = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(PIN_UP, INPUT_PULLUP);
  pinMode(PIN_DOWN, INPUT_PULLUP);
  pinMode(PIN_LEFT, INPUT_PULLUP);
  pinMode(PIN_RIGHT, INPUT_PULLUP);
  pinMode(PIN_A, INPUT_PULLUP);
  pinMode(PIN_B, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  int upVal = digitalRead(PIN_UP);
  int downVal = digitalRead(PIN_DOWN);
  int leftVal = digitalRead(PIN_LEFT);
  int rightVal = digitalRead(PIN_RIGHT);
  int aVal = digitalRead(PIN_A);
  int bVal = digitalRead(PIN_B);
delay(50);
  if(upVal == LOW){Keyboard.press('w');}
  else{Keyboard.release('w');}
  if(downVal == LOW){Keyboard.press('s');}
  else{Keyboard.release('s');}
  if(leftVal == LOW){Keyboard.press('a');}
  else{Keyboard.release('a');}
  if(rightVal == LOW){Keyboard.press('d');}
  else{Keyboard.release('d');}
  if(aVal == LOW){Keyboard.press(32);}
  else{Keyboard.release(32);}
  if(bVal == LOW){Keyboard.press(KEY_LEFT_CTRL);}
  else{Keyboard.release(KEY_LEFT_CTRL);} 

}
