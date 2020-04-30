#include <stdint.h>

#define FLOAT_SENSOR  2                     // float switch digital IO connection pin    
#define solenoid_1    7

void setup () 
{
  Serial.begin(115200);        
	pinMode(solenoid_1, OUTPUT);         
  pinMode(FLOAT_SENSOR, INPUT_PULLUP);      // initialize the float switch pin as a pullup input
}

void loop() 
{
  if(digitalRead(FLOAT_SENSOR) == LOW) 
  {
    delay (3000);                           // pause 3 seconds after receiving low signal
    Serial.print("Switch is Down");
    digitalWrite(solenoid_1, HIGH);         // open solenoid
  } 
 
  else 
  {
    Serial.print("Switch is Up");
    delay (180000);                         // delay X milliseconds for refill - example 3 minutes      
    digitalWrite(in1, LOW);                 // close solenoid
  }
}
