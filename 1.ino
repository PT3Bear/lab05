#include<Keypad.h>
const byte ROWS=4;
const byte COLS=4;
char keys[ROWS][COLS]={{'7','8','9','C'},{'4','5','6','D'},{'1','2','3','E'},{'0','A','B','F'}};
byte rowPins[ROWS]={11,10,9,8};
byte colPins[COLS]={15,14,13,12};
Keypad keypad = Keypad(makeKeymap(keys),rowPins,colPins,ROWS,COLS);
void setup() {
  Serial.begin(9600);

}

void loop() {
  char key =keypad.getKey();
  if(key!=NO_KEY){
      Serial.println(key);
  }

}
