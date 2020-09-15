int LED = 6;
void setup() {
  for (int i=2;i<6;i++)
  pinMode(i,OUTPUT);
}

void loop() {
  for (int i=5;i>1;i--)
    digitalWrite(i,HIGH);
  if (LED >= 2)
    digitalWrite(LED,LOW);
  else 
    LED = 6;
LED--;
delay (250);
}
