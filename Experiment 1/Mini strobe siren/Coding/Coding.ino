void setup()
{
pinMode(13, OUTPUT); //sets output pin for alarm and LED
pinMode(12, INPUT); //detects input from button
pinMode(8, OUTPUT); //controls ENABLE pin for H-Bridge motor controller
pinMode(5, OUTPUT); //controls output of Terminal 1 of DC Motor
pinMode(3, OUTPUT); //controls output of Terminal 2 of DC Motor
digitalWrite(8, HIGH); //sets ENABLE pin to ON
Serial.begin(9600); //Sets baud rate of serial communication
}
void loop()
{
int state = digitalRead(12); //updates STATE variable with value from pin 12 input
Serial.println(state); //prints out pin 12 value on Serial monitor

if (state!=HIGH) //checks if button is not pressed
{
 digitalWrite(13, LOW); //turns alarm and LED OFF
 digitalWrite(5, LOW); //dc terminal 1 is set to OFF
 digitalWrite(3, HIGH); //dc terminal 2 is set to ON
//this causes the motor to rotate CCW
}
else{
  
 digitalWrite(13, HIGH); //turns alarm and LED ON
 digitalWrite(5, HIGH); //dc terminal 1 is set to ON
 digitalWrite(3, LOW); //dc terminal 2 is set to OFF
//this causes the motor to rotate CW instead
};
}
