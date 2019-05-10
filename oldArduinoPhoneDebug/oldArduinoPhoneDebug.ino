    
#define PULSE_ACTIVE B00000100


bool hasDigit = false;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int activeState = PIND;
  activeState = PIND & PULSE_ACTIVE;
  
  Serial.print("PIND: ");
  Serial.println(PIND);
  Serial.print("activeState: ");
  Serial.println(activeState);
  
  while (activeState){
    Serial.println("dial running");
    activeState = PIND;
    activeState = PIND & PULSE_ACTIVE;
    Serial.print("PIND: ");
    Serial.println(PIND);
    Serial.print("activeState: ");
    Serial.println(activeState);
    hasDigit = true;
    delay(1000);
  }
  Serial.print("hasDigit: ");
  Serial.println(hasDigit);
  
  if(hasDigit){
    Serial.println("digit received");
    hasDigit = false;
  }
  delay(1000);
}
