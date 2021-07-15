#include <Servo.h>

Servo rightArmPinky;  
Servo rightArmIndex;

Servo leftArmThumb;

Servo rightArmElbow;
Servo leftArmElbow;


int rightArmElbowPos = 0;
int rightArmFingersPos = 0;
int leftArmFingersPos = 0;
int leftArmElbowPos = 0;



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
    

void setup() {
  rightArmElbow.attach(3);
  rightArmPinky.attach(4);  
  rightArmIndex.attach(5);
  leftArmElbow.attach(7);
  leftArmThumb.attach(8);
//  rightArmPinky.write(100);
//  rightArmIndex.write(100);
  Serial.begin(9600);
  Serial.write("Serial begun\n");
}

void loop() {
  int state = Serial.read();
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
}
