/* 
 char version[] = "ARD024 Light sensor 2019/01/29";
-------------
PIN SCHEDA v ARDUINO
1 >  GND
2 > VCC 5v 
3 > ANALOG_IN_PIN
https://chewett.co.uk/blog/389/light-intensity-sensor-module-5528-photo-resistor-arduino-review-code/
-------------
*/


#define ANALOG_IN_PIN 0
int sensorVal = 0;
 
char version[] = "ARD024 Light sensor 2019/01/29";

void setup(){
  Serial.begin(9600);
  Serial.println(version);
}
 
void loop() {
  sensorVal = analogRead(ANALOG_IN_PIN);
  Serial.println(sensorVal);
  delay(2000);
}
