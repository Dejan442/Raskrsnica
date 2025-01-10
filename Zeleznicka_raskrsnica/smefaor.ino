int LEDr=13;
int LEDy=12;
int LEDg=11;

void setup() {
  // put your setup code here, to run once:

  pinMode(LEDr, OUTPUT);
pinMode(LEDy, OUTPUT);
pinMode(LEDg, OUTPUT


digitalWrite(LEDr, HIGH);delay(10000);
digitalWrite(LEDr, LOW);
digitalWrite(LEDy, HIGH);delay(2000);
digitalWrite(LEDy, LOW);
digitalWrite(LEDg, HIGH);delay(10000);
digitalWrite(LEDg, LOW)

}

void loop() {
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
delay(1000);


digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
delay(1000);

digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
delay(1000);

digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
delay(1000);

digitalWrite(2,LOW);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
delay(1000);

digitalWrite(2,HIGH);
digitalWrite(3,LOW);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
delay(1000);
}
