int jj = 0;
void setup() {
  for(int i =2;i<6;i++)
  pinMode (i,OUTPUT);
}
void loop() {
  for(int i =2;i<6;i++)
  digitalWrite (i,jj);
  delay (250);
  jj^=1;
}
