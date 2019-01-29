
// Keyes SR1y relay blink sketch
 
#define RELAY_ON 1      // Define relay on pin state
#define RELAY_OFF 0     // Define relay off pin state
 
#define Relay  13       // Arduino pin where the relay connects
 
void setup()  
{
  digitalWrite(Relay, RELAY_OFF);      // initialise the relay to off
  pinMode(Relay, OUTPUT);   
  delay(5000); 
}
 
void loop()         // Turn the relay on and off in sequence
{
  digitalWrite(Relay, RELAY_ON);  // turn the relay on
  delay(5000);                  // wait
 
  digitalWrite(Relay, RELAY_OFF); // turn the relay off
  delay(5000);                  // wait
}
