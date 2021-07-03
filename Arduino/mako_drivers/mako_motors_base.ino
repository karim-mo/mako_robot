//motor 1
const int pwm1 = 3;
const int dir1 = 2;
//motor 2
const int pwm2 = 5;
const int dir2 = 4;
////motor 3
const int pwm3 = 6;
const int dir3 = 7;
//motor 4
const int pwm4 = 9;
const int dir4 = 8;




void setup() {
  pinMode(pwm1,OUTPUT);
  pinMode(dir1,OUTPUT);
  pinMode(pwm2,OUTPUT);
  pinMode(dir2,OUTPUT);
  pinMode(pwm3,OUTPUT);
  pinMode(dir3,OUTPUT);
  pinMode(pwm4,OUTPUT);
  pinMode(dir4,OUTPUT);
 
  
 
}

void loop() {
  digitalWrite(dir1,HIGH);
  analogWrite(pwm1,80);
  digitalWrite(dir2,HIGH);
  analogWrite(pwm2,80);
  
  
  //delay(3000);
 
}

void MakoStop(){

  analogWrite(pwm1,0);
  analogWrite(pwm2,0);
  analogWrite(pwm3,0);
  analogWrite(pwm4,0);
  
}
void MakoForward(){
  digitalWrite(dir1,HIGH);
  analogWrite(pwm1,80);
  digitalWrite(dir2,HIGH);
  analogWrite(pwm2,80);
  digitalWrite(dir3,LOW);
  analogWrite(pwm3,80);
  digitalWrite(dir4,LOW);
  analogWrite(pwm4,80);
  
}

void MakoBackward(){

  digitalWrite(dir1,LOW);
  analogWrite(pwm1,80);
  digitalWrite(dir2,LOW);
  analogWrite(pwm2,80);
  digitalWrite(dir3,HIGH);
  analogWrite(pwm3,80);
  digitalWrite(dir4,HIGH);
  analogWrite(pwm4,80);
}

void MakoRotateL(){
  digitalWrite(dir1,HIGH);
  analogWrite(pwm1,80);
  digitalWrite(dir2,HIGH);
  analogWrite(pwm2,80);
  digitalWrite(dir3,HIGH);
  analogWrite(pwm3,80);
  digitalWrite(dir4,HIGH);
  analogWrite(pwm4,80);
  
}

void MakoRotateR(){
  digitalWrite(dir1,LOW);
  analogWrite(pwm1,80);
  digitalWrite(dir2,LOW);
  analogWrite(pwm2,80);
  digitalWrite(dir3,LOW);
  analogWrite(pwm3,80);
  digitalWrite(dir4,LOW);
  analogWrite(pwm4,80);
  
}
