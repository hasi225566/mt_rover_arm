#include <Servo.h>
#define initialPos 50
#define finalPos 153
#define unitStep 3
Servo myservo;  


int pos = initialPos; 


byte msg; // for incoming serial data

void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  myservo.attach(9); // opens serial port, sets data rate to 9600 bps
}

void loop() {

  if(Serial.available()>0){
    msg=Serial.read();
    if(msg==0){
      analogWrite(13,255);
      move_forward();
      
    }
     if(msg==1){
      analogWrite(13,70);
      move_backward();
      // delay(1000);

    }
  }
  else{
    digitalWrite(13,0);
    Serial.println(pos);
  }

}