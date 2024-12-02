#define IRpin 11
#define ledPin 1

void setup() { 
  // put your setup code here, to run once: 
  pinMode(IRpin,INPUT); 
  pinMode(ledPin,OUTPUT); 
} 

int state = LOW;

void loop() { 
  // put your main code here, to run repeatedly:
  
  
  if(isFull()){ 
    state = HIGH;
  }
  else {
    state = LOW;
  }
  digitalWrite(ledPin, state); 
} 

bool isFull() {
  return digitalRead(IRpin) == 0;
}
