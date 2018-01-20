#include <Keyboard.h>

int inPin[5] = {2, 3, 4, 5, 6};
int readValues[5] = {0};
char buf[12]; // "-2147483648\0"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Keyboard.begin();
  for (int i = 0; i < sizeof(inPin)/sizeof(int); ++i) {
    pinMode(i, INPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < sizeof(inPin)/sizeof(int); ++i) {
    readValues[i] = digitalRead(inPin[i]);
    if( readValues[i] == HIGH) {
      Serial.println(inPin[i]);
      Keyboard.press('a');
      Keyboard.releaseAll();
    }
  }
    
}
