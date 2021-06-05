int sensorValue = 0;
int SerialValue = 0;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(11, OUTPUT); //red
  pinMode(10, OUTPUT); //green
  pinMode(9, OUTPUT); //yellow
  Serial.begin(9600);
}
void loop()
{
  sensorValue = analogRead(A0);
  SerialValue = (sensorValue-102)/2;
  Serial.println(SerialValue);
  
  if (SerialValue>70)
  {
    // ONLY RED GLOWS
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(9,LOW);
  }
  if (SerialValue>21 && SerialValue<70)
  {
    // ONLY YELLOW GLOWS
    // Your code//
    digitalWrite(11,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
  }
  if(SerialValue<20)
  {
    // ONLY GREEN GLOWS
// Your code//
    digitalWrite(11,LOW);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
  }
  delay(2); // Wait for 2 millisecond(s)
    }
