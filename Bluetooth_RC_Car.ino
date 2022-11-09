#define leftMotorForward 9
#define leftMotorBackward 10
#define rightMotorForward 12
#define rightMotorBackward 11

char direction;

void forwards(void){
  digitalWrite(leftMotorForward,HIGH);
  digitalWrite(leftMotorBackward,LOW);
  digitalWrite(rightMotorForward,HIGH);
  digitalWrite(rightMotorBackward,LOW);
}

void backwards(void){
  digitalWrite(leftMotorForward,LOW);
  digitalWrite(leftMotorBackward,HIGH);
  digitalWrite(rightMotorForward,LOW);
  digitalWrite(rightMotorBackward,HIGH);
}


void right(void){
  digitalWrite(leftMotorForward,LOW);
  digitalWrite(leftMotorBackward,HIGH);
  digitalWrite(rightMotorForward,HIGH);
  digitalWrite(rightMotorBackward,LOW);
}

void left(void){
  digitalWrite(leftMotorForward,HIGH);
  digitalWrite(leftMotorBackward,LOW);
  digitalWrite(rightMotorForward,LOW);
  digitalWrite(rightMotorBackward,HIGH);
}

void stop(void){
  digitalWrite(leftMotorForward,LOW);
  digitalWrite(leftMotorBackward,LOW);
  digitalWrite(rightMotorForward,LOW);
  digitalWrite(rightMotorBackward,LOW);
  }
  
void setup() {
  Serial.begin(9600);
  pinMode(leftMotorForward,OUTPUT);
  pinMode(leftMotorBackward,OUTPUT);
  pinMode(rightMotorForward,OUTPUT);
  pinMode(rightMotorBackward,OUTPUT);

}

void loop() {
  
  if(Serial.available()>0){
   direction=Serial.read();

    if(direction=='F'){
      forwards();
    }else if(direction=='B'){
      backwards();
    }else if(direction=='L'){
      left();
    }else if(direction=='R'){
      right();
    }else{
      stop();
    }
   }
  }
