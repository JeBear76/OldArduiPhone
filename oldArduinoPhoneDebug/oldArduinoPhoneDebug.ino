    
#define PULSE_ACTIVE B00000100
#define PULSE_ACTIVE_INT 2

bool hasDigit = false;

void setup() {
  for(int i=0; i<7; i++){
    pinMode(i, INPUT);
  }
  Serial.begin(9600);
}

void loop() {
  int activeState = digitalRead(PULSE_ACTIVE_INT);
  Serial.print("PIN2: ");
  Serial.println(activeState);
  
//  int activeState = PIND;
//  activeState = PIND & PULSE_ACTIVE;
//  
//  Serial.print("PIND: ");
//  Serial.println(PIND);
//  Serial.print("activeState: ");
//  Serial.println(activeState);
  
  while (activeState){
    Serial.println("dial running");
//    activeState = PIND;
//    activeState = PIND & PULSE_ACTIVE;
//    Serial.print("PIND: ");
//    Serial.println(PIND);
//    Serial.print("activeState: ");
//    Serial.println(activeState);
    activeState = digitalRead(PULSE_ACTIVE_INT);
    Serial.print("PIN2: ");
    Serial.println(activeState);
    hasDigit = true;
  }
  Serial.print("hasDigit: ");
  Serial.println(hasDigit);
  
  if(hasDigit){
    Serial.println("digit received");
    hasDigit = false;
  }
}
