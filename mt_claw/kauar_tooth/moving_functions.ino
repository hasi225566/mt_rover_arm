void move_forward() {
    pos += unitStep;
  if (pos >= initialPos && pos <= finalPos) {
  
    myservo.write(pos);
    Serial.println(pos);
    delay(10);
  }
}

void move_backward() {
   pos -= unitStep;
  if (pos >= initialPos && pos <= finalPos) {
   
    myservo.write(pos);
    Serial.println(pos);
    delay(10);
  }
}