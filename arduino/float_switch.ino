// float switch demo code
#include <stdint.h>

// the number of the float switch pin connection
#define FLOAT_SENSOR  2     

void setup() 
{
 Serial.begin(115200);
 // initialize the pushbutton pin as an input:
 pinMode(FLOAT_SENSOR, INPUT_PULLUP);
}

void loop() 
{
  if(digitalRead(FLOAT_SENSOR) == LOW) 
  {
    Serial.print("Switch is Down");
  } 
  
  else 
  {
    Serial.print("Switch is Up");
  }
}
