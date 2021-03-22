int led_red = 11;
int led_yellow = 12;
int led_green = 13;

void setup() {
  // put your setup code here, to run once:
pinMode(led_red,OUTPUT);
pinMode(led_yellow,OUTPUT);
pinMode(led_green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite( led_green, HIGH);
delay(5000);
digitalWrite(led_green, LOW);
digitalWrite(led_yellow, HIGH);
delay(500);
digitalWrite(led_yellow, LOW);
delay(500);
digitalWrite(led_yellow, HIGH);
delay(500);
digitalWrite(led_yellow, LOW);
delay(500);
digitalWrite(led_yellow, HIGH);
delay(500);
digitalWrite(led_yellow, LOW);
delay(500);
digitalWrite(led_yellow, HIGH);
delay(500);
digitalWrite(led_yellow, LOW);
delay(500);
digitalWrite(led_yellow, HIGH);
delay(500);
digitalWrite(led_yellow, LOW);
digitalWrite(led_red, HIGH);
delay(5000);
digitalWrite(led_red, LOW);
}
