const byte LED_Pin = 13; 
const byte BUZZER_Pin = 12;
const byte interruptPin2 = 2; 
const byte interruptPin3 = 3;
volatile byte LED_state = HIGH; 
volatile byte BUZZER_state = HIGH;
void setup()
{ 
  pinMode(LED_Pin, OUTPUT);
  pinMode(BUZZER_Pin, OUTPUT);
  digitalWrite(LED_Pin, LED_state); 
  digitalWrite(BUZZER_Pin, BUZZER_state);
  pinMode(interruptPin2, INPUT_PULLUP); 
  pinMode(interruptPin3, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin2), blink2, CHANGE); 
  attachInterrupt(digitalPinToInterrupt(interruptPin3), blink3, CHANGE);
  Serial.begin(9600); 
  Serial.println("Welcome");
}

void loop()
{ 
  digitalWrite(LED_Pin, LED_state);
  digitalWrite(BUZZER_Pin, BUZZER_state); 
  Serial.println("0");
}

void blink2()
{ 
  LED_state = !LED_state; 
  Serial.println("2");
}

void blink3()
{
  BUZZER_state= !BUZZER_state; 
  Serial.println("4");
}
