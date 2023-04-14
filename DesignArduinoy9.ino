#include <Servo.h>
Servo myservo;  // create servo object to control a servo
int enA = 3;
int in1 = 10;
int in2 = 9;
int enB = 6;
int in3 = 13;
int in4 = 12;
int prox1 = 4;
int prox2 = 7;


void setup() {
  // put your setup code here, to run once:
myservo.attach(11);
pinMode(prox1, INPUT);
pinMode(prox2, INPUT);
Serial.begin(9600); 
pinMode(solenoid, OUTPUT);
 pinMode(enA, OUTPUT);
 pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
   pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  
 
  
  // Turn off motors - Initial state
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  myservo.write(180);

}

void loop() {
Serial.println(digitalRead(prox1));
  
if(digitalRead(prox1) == 0){
 analogWrite(enA, 255);
digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
delay(3400);
 digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(enA, 0);
  delay(5000);
myservo.write(50);
delay(2000);
myservo.write(180);

  
}
if (digitalRead(prox2) == 0){
analogWrite(enB, 200);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(2000);
   digitalWrite(in4, LOW);
  digitalWrite(in3, LOW);
  analogWrite(enA, 0);
}
}
