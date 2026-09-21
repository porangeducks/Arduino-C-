const int trigPin = 11;
const int echoPin = 12;

// defines variables
long duration;
int distance;
int object_present = 0;

void setup() {
  // UltraSonoc Pins
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input

  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

  Serial.begin(9600); // Starts the serial communication
}

void loop() {
   while(distance > 50){
     // Clears the trigPin
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
    distance = duration * 0.034 / 2;

    Serial.println("Waiting to detect an object");
    delay(250);
  }
  while(distance < 50){
     // Clears the trigPin
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);

  // Sets the trigPin on HIGH state for 10 micro seconds
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

  // Reads the echoPin, returns the sound wave travel time in microseconds
    duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
    distance = duration * 0.034 / 2; 

    Serial.println("Object detected and present");
    if(distance > 50){
      Serial.println("Detected object is gone :( ");

    }
    delay(250);
  }
  }

  
  
  // --------------------------------------------------------
  // ADD Your Code Here - Detect a specific distance... like distance > 5 cm
  
  
  // --------------------------------------------------------
