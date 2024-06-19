//pin 11 is a PWN pin
#define LED_PIN 11


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  //the second number has to be between 0-255

  analogWrite(LED_PIN, 200);
  delay(3000);
  //zero is brightness 0
  analogWrite(LED_PIN, 0);
    delay(3000);

  //255 is brigthness 100
    analogWrite(LED_PIN, 255);


}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.println("looping");

  // //making the led blink
  // digitalWrite(LED_PIN, LOW);
  // delay(1000);
  // digitalWrite(LED_PIN, HIGH);
  // delay(1000);

}
