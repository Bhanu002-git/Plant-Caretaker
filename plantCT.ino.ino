void setup() {
  // put your setup code here, to run once:
  int water; 
    pinMode(3,OUTPUT); 
    pinMode(11,OUTPUT); 
    pinMode(9,OUTPUT); 
    pinMode(10,OUTPUT);
     pinMode(6,INPUT); 
     pinMode(5,INPUT); 
     pinMode(12,INPUT);
     pinMode(13,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   int water = digitalRead(6);
    if(water == HIGH) { 
      digitalWrite(3,LOW); } 
      
      else { digitalWrite(3,HIGH); } 
      delay(400); 
      water = digitalRead(5); 
      if(water == HIGH) { 
        digitalWrite(9,LOW); } 
        else { digitalWrite(9,HIGH); } 
        delay(400); 
        water = digitalRead(12); 
        if(water == HIGH) { 
          digitalWrite(10,LOW); } 
          else { digitalWrite(10,HIGH); } 
          delay(400); 
          water = digitalRead(13); 
          if(water == HIGH) { 
            digitalWrite(11,LOW); } 
            else { digitalWrite(11,HIGH); } 
            delay(400); }

