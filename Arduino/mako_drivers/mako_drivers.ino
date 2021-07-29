#include <LedControl.h>
#include "binary.h"
//#include <pt.h>  
#include <Servo.h>


//static struct pt pt1;

LedControl lc = LedControl(2,3,4,1);


Servo rightArmPinky;  
Servo rightArmIndex;

Servo leftArmThumb;

Servo rightArmElbow;
Servo leftArmElbow;

int rightArmElbowPos = 0;
int rightArmFingersPos = 0;
int leftArmFingersPos = 0;
int leftArmElbowPos = 0;


byte neutral0[8] = {
 B00000000,
 B00111100,
 B01111110,
 B01100110,
 B01100110,
 B01111110,
 B00111100,
 B00000000
}; 

byte neutral1[8] = {
 B00000000,
 B00111100,
 B00111110,
 B00100110,
 B00100110,
 B00111110,
 B00111100,
 B00000000
};

byte neutral2[8] = {
 B00000000,
 B00011100,
 B00011110,
 B00000110,
 B00000110,
 B00011110,
 B00011100,
 B00000000
};

byte neutral3[8] = {
 B00000000,
 B00001100,
 B00001110,
 B00000110,
 B00000110,
 B00001110,
 B00001100,
 B00000000
};

byte neutral4[8] = {
 B00000000,
 B00000100,
 B00000110,
 B00000110,
 B00000110,
 B00000110,
 B00000100,
 B00000000
};

byte blink0[8] = {
 B00000000,
 B00000000,
 B00000010,
 B00000010,
 B00000010,
 B00000010,
 B00000000,
 B00000000
};

byte happy0[8] = {
 B00000000,
 B00111100,
 B00111110,
 B00100110,
 B00100110,
 B00111110,
 B00111100,
 B00000000
};

byte happy1[8] = {
 B00000000,
 B00111100,
 B01111110,
 B01100110,
 B01100110,
 B01111110,
 B00111100,
 B00000000
};

byte happy2[8] = {
 B00000000,
 B00111100,
 B01111110,
 B11100110,
 B11100110,
 B01111110,
 B00111100,
 B00000000
};

byte sad0[8] = {
 B00000000,
 B00111000,
 B00111100,
 B00100100,
 B00100100,
 B00111100,
 B00111000,
 B00000000
};

byte sad1[8] = {
 B00000000,
 B00111000,
 B00111100,
 B00110100,
 B00110100,
 B00111100,
 B00111000,
 B00000000
};

byte angry0[8] = {
 B00000000,
 B00111000,
 B00111100,
 B00000100,
 B00000100,
 B00111100,
 B00111000,
 B00000000
};

byte angry1[8] = {
 B00000000,
 B00111000,
 B00111100,
 B01000100,
 B01000100,
 B00111100,
 B00111000,
 B00000000
};

byte fear0[8] = {
 B00000000,
 B00111100,
 B01111110,
 B11000011,
 B11000011,
 B01111110,
 B00111100,
 B00000000
};

byte fear1[8] = {
 B00000000,
 B00111100,
 B01000010,
 B11000011,
 B11000011,
 B01000010,
 B00111100,
 B00000000
};

enum State{
  Neutral,
  Happy,
  Sad,
  Angry,
  Fear,
  EMPTY
};

int _state = Neutral;


void openRightArmFingers(){
  for (rightArmFingersPos = 0; rightArmFingersPos <= 100; rightArmFingersPos += 1) { 
    rightArmPinky.write(rightArmFingersPos);
    rightArmIndex.write(rightArmFingersPos);                     
    delay(10);                       
  }

  Serial.write("Opened Right Arm Fingers\n");
  
}

void closeRightArmFingers(){
  for (rightArmFingersPos = 100; rightArmFingersPos >= 0; rightArmFingersPos -= 1) { 
    rightArmPinky.write(rightArmFingersPos);    
    rightArmIndex.write(rightArmFingersPos);                  
    delay(10);                       
  }
  Serial.write("Closed Right Arm Fingers\n");
}

void closeLeftArmFingers(){
  for (leftArmFingersPos = 0; leftArmFingersPos <= 180; leftArmFingersPos += 1) { 
    leftArmThumb.write(leftArmFingersPos);
    delay(10);                       
  }

  Serial.write("Closed Left Arm Fingers\n");
  
}

void openLeftArmFingers(){
  for (leftArmFingersPos = 180; leftArmFingersPos >= 0; leftArmFingersPos -= 1) { 
    leftArmThumb.write(leftArmFingersPos);    
    delay(10);                       
  }
  Serial.write("Opened Left Arm Fingers\n");
}


void lowerRightArmElbow(){
  for (rightArmElbowPos = 0; rightArmElbowPos <= 200; rightArmElbowPos += 1) { 
    rightArmElbow.write(rightArmElbowPos);
    delay(10);                       
  }

  Serial.write("Lowered Right Arm Elbow\n");
  
}

void raiseRightArmElbow(){
  for (rightArmElbowPos = 200; rightArmElbowPos >= 0; rightArmElbowPos -= 1) { 
    rightArmElbow.write(rightArmElbowPos);    
    delay(10);                       
  }
  Serial.write("Raised Right Arm Elbow\n");
}

void lowerLeftArmElbow(){
  for (leftArmElbowPos = 0; leftArmElbowPos <= 200; leftArmElbowPos += 1) { 
    leftArmElbow.write(leftArmElbowPos);
    delay(10);                       
  }

  Serial.write("Lowered Left Arm Elbow\n");
  
}

void raiseLeftArmElbow(){
  for (leftArmElbowPos = 200; leftArmElbowPos >= 0; leftArmElbowPos -= 1) { 
    leftArmElbow.write(leftArmElbowPos);    
    delay(10);                       
  }
  Serial.write("Raised Left Arm Elbow\n");
}

//static int serialRead(struct pt *pt, int interval) {
//  static unsigned long timestamp = 0;
//  PT_BEGIN(pt);
//  while(1) {
//    PT_WAIT_UNTIL(pt, millis() - timestamp > interval );
//    timestamp = millis();
//    int state = Serial.read();
//    if(state == 'A'){
//      _state = Neutral;
//    }
//    if(state == 'B'){
//      _state = Happy;
//    }
//    if(state == 'C'){
//      _state = Sad;
//    }
//    if(state == 'D'){
//      _state = Angry;
//    }
//    if(state == 'E'){
//      _state = Fear;
//    }
//  }
//  PT_END(pt);
//}

void drawNeutralFrame(int frame){
  switch(frame){
    case 0:
      lc.setRow(0,0,neutral0[0]);
      lc.setRow(0,1,neutral0[1]);
      lc.setRow(0,2,neutral0[2]);
      lc.setRow(0,3,neutral0[3]);
      lc.setRow(0,4,neutral0[4]);
      lc.setRow(0,5,neutral0[5]);
      lc.setRow(0,6,neutral0[6]);
      lc.setRow(0,7,neutral0[7]);
      lc.setRow(0,7,neutral0[7]);
      break;
    case 1:
      lc.setRow(0,0,neutral1[0]);
      lc.setRow(0,1,neutral1[1]);
      lc.setRow(0,2,neutral1[2]);
      lc.setRow(0,3,neutral1[3]);
      lc.setRow(0,4,neutral1[4]);
      lc.setRow(0,5,neutral1[5]);
      lc.setRow(0,6,neutral1[6]);
      lc.setRow(0,7,neutral1[7]);
      lc.setRow(0,7,neutral1[7]);
      break;
    case 2:
      lc.setRow(0,0,neutral2[0]);
      lc.setRow(0,1,neutral2[1]);
      lc.setRow(0,2,neutral2[2]);
      lc.setRow(0,3,neutral2[3]);
      lc.setRow(0,4,neutral2[4]);
      lc.setRow(0,5,neutral2[5]);
      lc.setRow(0,6,neutral2[6]);
      lc.setRow(0,7,neutral2[7]);
      lc.setRow(0,7,neutral2[7]);
      break;
    case 3:
      lc.setRow(0,0,neutral3[0]);
      lc.setRow(0,1,neutral3[1]);
      lc.setRow(0,2,neutral3[2]);
      lc.setRow(0,3,neutral3[3]);
      lc.setRow(0,4,neutral3[4]);
      lc.setRow(0,5,neutral3[5]);
      lc.setRow(0,6,neutral3[6]);
      lc.setRow(0,7,neutral3[7]);
      lc.setRow(0,7,neutral3[7]);
      break;
    case 4:
      lc.setRow(0,0,neutral4[0]);
      lc.setRow(0,1,neutral4[1]);
      lc.setRow(0,2,neutral4[2]);
      lc.setRow(0,3,neutral4[3]);
      lc.setRow(0,4,neutral4[4]);
      lc.setRow(0,5,neutral4[5]);
      lc.setRow(0,6,neutral4[6]);
      lc.setRow(0,7,neutral4[7]);
      lc.setRow(0,7,neutral4[7]);
      break;
    case 5:
      lc.setRow(0,0,blink0[0]);
      lc.setRow(0,1,blink0[1]);
      lc.setRow(0,2,blink0[2]);
      lc.setRow(0,3,blink0[3]);
      lc.setRow(0,4,blink0[4]);
      lc.setRow(0,5,blink0[5]);
      lc.setRow(0,6,blink0[6]);
      lc.setRow(0,7,blink0[7]);
      lc.setRow(0,7,blink0[7]);
      break;
  }
}

void drawNeutralFace(){
  for(int i = 0; i < 6 && _state == Neutral; i++){
    drawNeutralFrame(i);
    delay(55);
  }
  if(_state == Neutral) delay(250);

  
  for(int i = 5; i >= 0 && _state == Neutral; i--){
    drawNeutralFrame(i);
    delay(55);
  }
  if(_state == Neutral) delay(2000);

}

void drawHappyFrame(int frame){
  switch(frame){
    case 0:
      lc.setRow(0,0,happy0[0]);
      lc.setRow(0,1,happy0[1]);
      lc.setRow(0,2,happy0[2]);
      lc.setRow(0,3,happy0[3]);
      lc.setRow(0,4,happy0[4]);
      lc.setRow(0,5,happy0[5]);
      lc.setRow(0,6,happy0[6]);
      lc.setRow(0,7,happy0[7]);
      lc.setRow(0,7,happy0[7]);
      break;
    case 1:
      lc.setRow(0,0,happy1[0]);
      lc.setRow(0,1,happy1[1]);
      lc.setRow(0,2,happy1[2]);
      lc.setRow(0,3,happy1[3]);
      lc.setRow(0,4,happy1[4]);
      lc.setRow(0,5,happy1[5]);
      lc.setRow(0,6,happy1[6]);
      lc.setRow(0,7,happy1[7]);
      lc.setRow(0,7,happy1[7]);
      break;
    case 2:
      lc.setRow(0,0,happy2[0]);
      lc.setRow(0,1,happy2[1]);
      lc.setRow(0,2,happy2[2]);
      lc.setRow(0,3,happy2[3]);
      lc.setRow(0,4,happy2[4]);
      lc.setRow(0,5,happy2[5]);
      lc.setRow(0,6,happy2[6]);
      lc.setRow(0,7,happy2[7]);
      lc.setRow(0,7,happy2[7]);
      break;
  }
}

void drawHappyFace(){
  for(int i = 0; i < 3; i++){
    drawHappyFrame(i);
    delay(300);
  }
  _state = EMPTY;
}

void drawSadFrame(int frame){
  switch(frame){
    case 0:
      lc.setRow(0,0,sad0[0]);
      lc.setRow(0,1,sad0[1]);
      lc.setRow(0,2,sad0[2]);
      lc.setRow(0,3,sad0[3]);
      lc.setRow(0,4,sad0[4]);
      lc.setRow(0,5,sad0[5]);
      lc.setRow(0,6,sad0[6]);
      lc.setRow(0,7,sad0[7]);
      lc.setRow(0,7,sad0[7]);
      break;
    case 1:
      lc.setRow(0,0,sad1[0]);
      lc.setRow(0,1,sad1[1]);
      lc.setRow(0,2,sad1[2]);
      lc.setRow(0,3,sad1[3]);
      lc.setRow(0,4,sad1[4]);
      lc.setRow(0,5,sad1[5]);
      lc.setRow(0,6,sad1[6]);
      lc.setRow(0,7,sad1[7]);
      lc.setRow(0,7,sad1[7]);
      break;
  }
}

void drawSadFace(){
  for(int i = 0; i < 2; i++){
    drawSadFrame(i);
    delay(500);
  }
  _state = EMPTY;
}

void drawAngryFrame(int frame){
  switch(frame){
    case 0:
      lc.setRow(0,0,angry0[0]);
      lc.setRow(0,1,angry0[1]);
      lc.setRow(0,2,angry0[2]);
      lc.setRow(0,3,angry0[3]);
      lc.setRow(0,4,angry0[4]);
      lc.setRow(0,5,angry0[5]);
      lc.setRow(0,6,angry0[6]);
      lc.setRow(0,7,angry0[7]);
      lc.setRow(0,7,angry0[7]);
      break;
    case 1:
      lc.setRow(0,0,angry1[0]);
      lc.setRow(0,1,angry1[1]);
      lc.setRow(0,2,angry1[2]);
      lc.setRow(0,3,angry1[3]);
      lc.setRow(0,4,angry1[4]);
      lc.setRow(0,5,angry1[5]);
      lc.setRow(0,6,angry1[6]);
      lc.setRow(0,7,angry1[7]);
      lc.setRow(0,7,angry1[7]);
      break;
  }
}

void drawAngryFace(){
  for(int i = 0; i < 2; i++){
    drawAngryFrame(i);
    delay(300);
  }
  _state = EMPTY;
}

void drawFearFrame(int frame){
  switch(frame){
    case 0:
      lc.setRow(0,0,fear0[0]);
      lc.setRow(0,1,fear0[1]);
      lc.setRow(0,2,fear0[2]);
      lc.setRow(0,3,fear0[3]);
      lc.setRow(0,4,fear0[4]);
      lc.setRow(0,5,fear0[5]);
      lc.setRow(0,6,fear0[6]);
      lc.setRow(0,7,fear0[7]);
      lc.setRow(0,7,fear0[7]);
      break;
    case 1:
      lc.setRow(0,0,fear1[0]);
      lc.setRow(0,1,fear1[1]);
      lc.setRow(0,2,fear1[2]);
      lc.setRow(0,3,fear1[3]);
      lc.setRow(0,4,fear1[4]);
      lc.setRow(0,5,fear1[5]);
      lc.setRow(0,6,fear1[6]);
      lc.setRow(0,7,fear1[7]);
      lc.setRow(0,7,fear1[7]);
      break;
  }
}

void drawScaredFace(){
  for(int i = 0; i < 2; i++){
    drawFearFrame(i);
    delay(700);
  }
  _state = EMPTY;
}

void setup() {
  lc.shutdown(0,false);
  lc.setIntensity(0,0);
  lc.clearDisplay(0);

  rightArmElbow.attach(3);
  rightArmPinky.attach(4);  
  rightArmIndex.attach(5);
  leftArmElbow.attach(7);
  leftArmThumb.attach(8);

  Serial.begin(9600);
}

void loop(){
  //serialRead(&pt1, 0);
  int state = Serial.read();
  
  if(state == 'A'){
    _state = Neutral;
  }
  if(state == 'B'){
    _state = Happy;
  }
  if(state == 'C'){
    _state = Sad;
  }
  if(state == 'D'){
    _state = Angry;
  }
  if(state == 'E'){
    _state = Fear;
  }
  if(state == 'R'){
    openRightArmFingers();
  }
  if(state == 'T'){
    closeRightArmFingers();
  }
  if(state == 'Y'){
    openLeftArmFingers();
  }
  if(state == 'U'){
    closeLeftArmFingers();
  }
  if(state == 'F'){
    raiseRightArmElbow();
  }
  if(state == 'G'){
    lowerRightArmElbow();
  }
  if(state == 'H'){
    raiseLeftArmElbow();
  }
  if(state == 'J'){
    lowerLeftArmElbow();
  }

  switch(_state){
    case Neutral:
      drawNeutralFace();
      lc.clearDisplay(0);
      break;
    case Happy:
      drawHappyFace();
      break;
    case Sad:
      drawSadFace();
      break;
    case Angry:
      drawAngryFace();
      break;
    case Fear:
      drawScaredFace();
      break;
  }
}
