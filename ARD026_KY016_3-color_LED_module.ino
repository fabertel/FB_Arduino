
/*  KY016 3-color LED module
 *    char version[] = "ARD026 KY016 3-color LED module 2019/01/29";
*/

 char version[] = "ARD026 KY016 3-color LED module 2019/01/29";

//KY016 3-color LED module
int bluepin = 13; // select the pin for the blue LED
int greenpin = 12 ;// select the pin for the green LED
int redpin = 11; // select the pin for the red LED
int val;
void setup () {
  pinMode (redpin, OUTPUT);
  pinMode (bluepin, OUTPUT);
  pinMode (greenpin, OUTPUT);
  Serial.begin (9600);
  Serial.println(version);
}
void loop ()
{
  for (val = 255; val> 0; val --)
  {
    analogWrite (11, val);
    analogWrite (10, 255-val);
    analogWrite (9, 128-val);
    delay (10);
    Serial.println (val, DEC);
  }
  for (val = 0; val <255; val ++)
  {
    analogWrite (11, val);
    analogWrite (10, 255-val);
    analogWrite (9, 128-val);
    delay (10);
    Serial.println (val, DEC);
  }
}
