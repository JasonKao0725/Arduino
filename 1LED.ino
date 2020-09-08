int ,JJ = 0;
void setup() {
pinMode (3,JJ)
}
void loop() {
  digitalWrite (3,JJ)
  delay (250)
JJ ^= 1;
