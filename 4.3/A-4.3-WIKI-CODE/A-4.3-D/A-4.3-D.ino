#define D_PIN 38

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(D_PIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(D_PIN, HIGH);//拉高电平
  delay(500);
  digitalWrite(D_PIN, LOW);//拉低电平
  delay(500);
}
