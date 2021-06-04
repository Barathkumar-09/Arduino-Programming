#define segA 3
#define segB 2
#define segC 8
#define segD 7
#define segE 6
#define segF 4
#define segG 5
#define segdp 9



int c=0;




void setup()
{
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
Serial.begin(9600);
 while(!Serial)
 {
 ;
 }
 Serial.println("Hello");
}
void loop()
{
 switch(c)
 {
 case 0:
 digitalWrite(segA,HIGH);
 digitalWrite(segB,HIGH);
 digitalWrite(segC,HIGH);
 digitalWrite(segD,HIGH);
 digitalWrite(segE,HIGH);
 digitalWrite(segF,HIGH);
 digitalWrite(segG,LOW);
 break;
 case 1:
 digitalWrite(segA,LOW);
 digitalWrite(segB,HIGH);
 digitalWrite(segC,HIGH);
 digitalWrite(segD,LOW);
 digitalWrite(segE,LOW);
 digitalWrite(segF,LOW);
 digitalWrite(segG,LOW);
 break;

 case 2:
 digitalWrite(segA,HIGH);
 digitalWrite(segB,HIGH);
 digitalWrite(segC,LOW);
 digitalWrite(segD,HIGH);
 digitalWrite(segE,HIGH);
 digitalWrite(segF,LOW);
 digitalWrite(segG,HIGH);
 break;
case 3:
 digitalWrite(segA,HIGH);
 digitalWrite(segB,HIGH);
 digitalWrite(segC,HIGH);
 digitalWrite(segD,HIGH);
 digitalWrite(segE,LOW);
 digitalWrite(segF,LOW);
 digitalWrite(segG,HIGH);
 break;

 case 4:
 digitalWrite(segA,LOW);
 digitalWrite(segB,HIGH);
 digitalWrite(segC,HIGH);
 digitalWrite(segD,LOW);
 digitalWrite(segE,LOW);
 digitalWrite(segF,HIGH);
 digitalWrite(segG,HIGH);
 break;

 case 5:
 digitalWrite(segA,HIGH);
 digitalWrite(segB,LOW);
 digitalWrite(segC,HIGH);
 digitalWrite(segD,HIGH);
 digitalWrite(segE,LOW);
 digitalWrite(segF,HIGH);
 digitalWrite(segG,HIGH);
 break;

 case 6:
 digitalWrite(segA,HIGH);
 digitalWrite(segB,LOW);
 digitalWrite(segC,HIGH);
 digitalWrite(segD,HIGH);
 digitalWrite(segE,HIGH);
 digitalWrite(segF,HIGH);
 digitalWrite(segG,HIGH);
 break;

 case 7:
 digitalWrite(segA,HIGH);
 digitalWrite(segB,HIGH);
 digitalWrite(segC,HIGH);
 digitalWrite(segD,LOW);
 digitalWrite(segE,LOW);
 digitalWrite(segF,LOW);
 digitalWrite(segG,LOW);
 break;

 case 8:
 digitalWrite(segA,HIGH);
 digitalWrite(segB,HIGH);
 digitalWrite(segC,HIGH);
 digitalWrite(segD,HIGH);
 digitalWrite(segE,HIGH);
 digitalWrite(segF,HIGH);
 digitalWrite(segG,HIGH);
 break;

 case 9:
 digitalWrite(segA,HIGH);
 digitalWrite(segB,HIGH);
 digitalWrite(segC,HIGH);
 digitalWrite(segD,HIGH);
 digitalWrite(segE,LOW);
 digitalWrite(segF,HIGH);
 digitalWrite(segG,HIGH);
 break;
 break;
 }
 while(!Serial.available());
 c = Serial.read()-48;
 Serial.println(c);
}