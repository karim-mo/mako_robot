#include <pt.h>  
#include <Servo.h>


static struct pt pt1;

//motor 1
const int pwm1 = 10;
const int dir1 = 22;
//motor 2
const int pwm2 = 11;
const int dir2 = 24;
////motor 3
const int pwm3 = 12;
const int dir3 = 26;
//motor 4
const int pwm4 = 13;
const int dir4 = 28;

const int _speed = 20;
const int rotationSpeed = 40;


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

static int serialRead(struct pt *pt, int interval) {
  static unsigned long timestamp = 0;
  PT_BEGIN(pt);
  while(1) {
    PT_WAIT_UNTIL(pt, millis() - timestamp > interval );
    timestamp = millis();
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
  }
  PT_END(pt);
}

void MakoStop(){

  analogWrite(pwm1,0);
  analogWrite(pwm2,0);
  analogWrite(pwm3,0);
  analogWrite(pwm4,0);
  delay(10);
}
void MakoForward(){
  digitalWrite(dir1,HIGH);
  analogWrite(pwm1,_speed);
  digitalWrite(dir2,HIGH);
  analogWrite(pwm2,_speed);
  digitalWrite(dir3,LOW);
  analogWrite(pwm3,_speed);
  digitalWrite(dir4,LOW);
  analogWrite(pwm4,_speed);
  
}

void MakoBackward(){

  digitalWrite(dir1,LOW);
  analogWrite(pwm1,_speed);
  digitalWrite(dir2,LOW);
  analogWrite(pwm2,_speed);
  digitalWrite(dir3,HIGH);
  analogWrite(pwm3,_speed);
  digitalWrite(dir4,HIGH);
  analogWrite(pwm4,_speed);
}

void MakoRotateL(){
  digitalWrite(dir1,HIGH);
  analogWrite(pwm1,rotationSpeed);
  digitalWrite(dir2,HIGH);
  analogWrite(pwm2,rotationSpeed);
  digitalWrite(dir3,HIGH);
  analogWrite(pwm3,rotationSpeed);
  digitalWrite(dir4,HIGH);
  analogWrite(pwm4,rotationSpeed);
  
}

void MakoRotateR(){
  digitalWrite(dir1,LOW);
  analogWrite(pwm1,rotationSpeed);
  digitalWrite(dir2,LOW);
  analogWrite(pwm2,rotationSpeed);
  digitalWrite(dir3,LOW);
  analogWrite(pwm3,rotationSpeed);
  digitalWrite(dir4,LOW);
  analogWrite(pwm4,rotationSpeed);
}

void setup() {
  rightArmElbow.attach(3);
  rightArmPinky.attach(4);  
  rightArmIndex.attach(5);
  leftArmElbow.attach(7);
  leftArmThumb.attach(8);

  pinMode(pwm1,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(pwm2,OUTPUT);
  pinMode(dir2,OUTPUT);
  pinMode(pwm3,OUTPUT);
  pinMode(dir3,OUTPUT);
  pinMode(pwm4,OUTPUT);
  pinMode(dir4,OUTPUT);

  Serial.begin(9600);
}

void loop(){
  //serialRead(&pt1, 0);

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
  if(state == 'Z') // forward
  {
    MakoForward();
  }
  if(state == 'X') //backward
  {
    MakoBackward();
  }
  if(state == 'N') //RotateR
  {
    MakoRotateR();
  }
  if(state == 'V') //RotateL
  {
    MakoRotateL();
  }
  if(state == 'M') //Stop
  {
    MakoStop();
  }
}
