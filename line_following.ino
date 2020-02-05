/*
Line Following
*/
/*-------definning Inputs------*/
#define S1 2      // left most sensor
#define S2 3      // left sensor sensor
#define S3 4      // right sensor
#define S4 5      // right most sensor
/*-------definning Outputs------*/
#define LM1 6       // left motor
#define LM2 7       // left motor
#define RM1 8       // right motor
#define RM2 9       // right motor

void setup() {
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  pinMode(S3, INPUT);
  pinMode(S4, INPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LM2, OUTPUT);
  pinMode(RM1, OUTPUT);
  pinMode(RM2, OUTPUT);    
}

void loop() {
    if(!(digitalRead(S1)) && (digitalRead(S2)) && (digitalRead(S3)) && !(digitalRead(S4)))     // Move Forward
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
  }
  
  if(!(digitalRead(S1)) && !(digitalRead(S2)) && (digitalRead(S3)) && (digitalRead(S4)))     // Turn Right
  {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, HIGH);
    digitalWrite(RM2, LOW);
  }
  
  if(!(digitalRead(S1)) && !(digitalRead(S2)) && (digitalRead(S3)) && (digitalRead(S4)))     // Turn Left
  {
    digitalWrite(LM1, HIGH);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
  }
  
  if(!(digitalRead(S1)) && !(digitalRead(S2)) && !(digitalRead(S3)) && !(digitalRead(S4)))     // Stop
  {
    digitalWrite(LM1, LOW);
    digitalWrite(LM2, LOW);
    digitalWrite(RM1, LOW);
    digitalWrite(RM2, LOW);
  }
}
