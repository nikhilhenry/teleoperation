#define BUTTON_PIN 26

void setup() {
  // pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
  pinMode(32,OUTPUT);
  pinMode(25,OUTPUT);
  Serial.begin(115200);
}

void loop() {
int var=digitalRead(26);
if(var==HIGH){
  digitalWrite(32,HIGH);
  digitalWrite(25,LOW);
}
else{
  digitalWrite(25,HIGH);
  digitalWrite(32,LOW);

}

}