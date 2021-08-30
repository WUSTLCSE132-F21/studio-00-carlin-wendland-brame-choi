void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  Serial.println("STARTED");
}

void loop() {
  // put your main code here, to run repeatedly:
  int time = millis();
  digitalWrite(13, HIGH);
  Serial.print((double)time/1000);
  Serial.println(" sec have elapsed");
  delay(1000);
  digitalWrite(13, LOW);  
  Serial.print((double)time/1000);
  Serial.println(" sec have elapsed");
}
