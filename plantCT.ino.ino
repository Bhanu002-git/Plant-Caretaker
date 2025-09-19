
const int sensors[] = {6, 5, 12, 13};
const int relays[]  = {3, 9, 10, 11};

void setup() {
  for (int i=0; i<4; ++i) {
    pinMode(sensors[i], INPUT);
    pinMode(relays[i], OUTPUT); 
    digitalWrite(relays[i], HIGH); // ensure relays OFF initially (active LOW)
  }  
} 

void loop() {
  for (int i=0; i<4; ++i) {
    int water = digitalRead(sensors[i]); // HIGH = wet, LOW = dry (typical FC-28 D0)
    if (water == LOW) {                 // soil is dry -> turn pump ON
      digitalWrite(relays[i], LOW);     // active LOW: LOW = relay ON
    } else {                            // soil wet -> turn pump OFF
      digitalWrite(relays[i], HIGH);    // HIGH = relay OFF
    }
    delay(400);
  }
} 


