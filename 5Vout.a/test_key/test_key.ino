#include <Keyboard.h>

int inPin[6] = {2, 3, 4, 5, 6, 7};
int readValues[6] = {0};
char buf[12]; // "-2147483648\0"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int i = 0; i < sizeof(inPin)/sizeof(int); ++i) {
    pinMode(i, INPUT_PULLUP);
  }
  Keyboard.begin();
}

void loop() {
  int buttonValue1 = digitalRead(4);
  int buttonValue2 = digitalRead(3);
  int buttonValue3 = digitalRead(2);
  int buttonValue4 = digitalRead(5);
  int buttonValue5 = digitalRead(6);
  int buttonValue6 = digitalRead(7);

  if(buttonValue1 == LOW){Keyboard.press('A');}
  else{Keyboard.release('A');}
  if(buttonValue2 == LOW){Keyboard.press('B');}
  else{Keyboard.release('B');}
  if(buttonValue3 == LOW){Keyboard.press('C');}
  else{Keyboard.release('C');}
  if(buttonValue4 == LOW){Keyboard.press('D');}
  else{Keyboard.release('D');}
  if(buttonValue5 == LOW){Keyboard.press('E');}
  else{Keyboard.release('E');}
  if(buttonValue6 == LOW){Keyboard.press('F');}
  else{Keyboard.release('F');} 
    
}
