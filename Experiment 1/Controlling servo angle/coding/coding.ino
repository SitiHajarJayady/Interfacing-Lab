#include <Servo.h> //import file
int ptMeter =A0; //defines potentiometer is attached at pin A0
int ptVal; //define ptVal
float servoVal;
Servo myServo;

void setup()
{
  myServo.attach(9); //set servo at pin 9
  Serial.begin(9600); //set baud rate of serial communication
}
void loop()
{
  ptVal = analogRead(ptMeter); //reads the value from pin A0 and stores in in val
  servoVal = ptVal * 0.1757;
  Serial.println(servoVal); //print value in servoVal
  myServo.write(servoVal); // received input from servoVal
}
