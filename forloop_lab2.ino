const int arduinoBoardLED = 13; // LED on pin 13
int count = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);               // Use Serial Monitor to debug
  pinMode(arduinoBoardLED, OUTPUT); // initialize the digital pin as an output.
  Serial.println("Running The Seup Function");
}

void loop() {
  for(int x = 0; x<=20; x++){
    if(x == 10){
      Serial.println("X is equal to 10");
    }
    else if(x > 10){
      Serial.println("X is greater than 10");
    }
    else{
      Serial.println("X is lesser than 10");
    }
    Serial.print("X is ");
    Serial.println(x);
    delay(300);
  }
  count++;
  Serial.print("Loop ");
  Serial.println(count);
  delay(500);
}
