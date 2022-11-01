int x = 1;
void setup() {
  Serial.begin(9600);
  pinMode(5, INPUT_PULLUP);
}

void loop() {
 x = digitalRead(5);
if (x > 0) {Serial.println("NO");}
else {Serial.println("YES");}

}
