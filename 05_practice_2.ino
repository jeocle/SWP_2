#define PIN_LED 7


void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while(!Serial){
    ;
  }
  digitalWrite(PIN_LED, 1);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_LED, 0);
  delay(1000);

  for(int i=1; i<11; i++){
    digitalWrite(PIN_LED, i%2);
    delay(100);
  }
  digitalWrite(PIN_LED, 1);

  while(1){}
}
