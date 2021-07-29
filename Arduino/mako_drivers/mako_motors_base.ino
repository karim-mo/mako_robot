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




void setup() {
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

void loop() {
  int x = Serial.read();
  if(x == 'Z') // forward
  {
  MakoForward();
  }
  if(x == 'X') //backward
  {
  MakoBackward();
  }
  if(x == 'C') //RotateR
  {
    MakoRotateR();
  }
  if(x == 'V') //RotateL
  {
    MakoRotateL();
  }
  if(x == 'B') //Stop
  {
    MakoStop();
  }

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
  analogWrite(pwm1,180);
  digitalWrite(dir2,HIGH);
  analogWrite(pwm2,180);
  digitalWrite(dir3,LOW);
  analogWrite(pwm3,180);
  digitalWrite(dir4,LOW);
  analogWrite(pwm4,180);
  
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
