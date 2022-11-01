int x = 1;
void setup() {
  pinMode(5, INPUT_PULLUP);
}

void loop() {
 x = digitalRead(5);
if (x > 0) {digitalWrite(7, 0);}
else {digitalWrite(7, 1);}

}
