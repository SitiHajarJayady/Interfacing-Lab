int ledPin = 9; //defines LED is attached at pin 9
int ptMeter =A0; //defines potentiometer is attached at pin A0
int ptVal;
long ledVal;

void setup()
{
  Serial.begin(9600); //set baud rate of serial communication
}
void loop()
{
  ptVal = analogRead(ptMeter); //reads the value from pin A0 and stores in in val
  ledVal = 0.2490 * ptVal; //convert potentionmeter range of 0-1024 to led 0-255
  //ptVal*255/1024 = ledVal
  //0.2485 is roughly 255/1024
  Serial.println(ledVal);
  analogWrite(ledPin, ledVal);
}
