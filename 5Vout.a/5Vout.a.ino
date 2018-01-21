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
  // put your main code here, to run repeatedly:
  for (int i = 0; i < sizeof(inPin)/sizeof(int); ++i) {
    readValues[i] = digitalRead(inPin[i]);
    if( readValues[i] == LOW) {
      if(i == 2){
        Keyboard.press('a');
      }
      if(i == 1){
        Keyboard.press('b');
      }
      if(i == 0){
        Keyboard.press('c');
      }
      if(i == 3){
        Keyboard.press('d');
      }
      if(i == 4){
        Keyboard.press('e');
      }
      if(i == 5){
        Keyboard.press('f');
      }
      Keyboard.releaseAll();
    }
  }
    
}
