/**********************************************************************
  Sketch title

  Describe what it does in layman's terms.  Refer to the components
  attached to the various pins.

  The circuit:
  * list the components attached to each input
  * list the components attached to each output

  Created day month year
  By Geoff Goldrick/Dr G/Courses4Horses
  Modified day month year
  By author's name
  license CC BY-SA 3.0 AU https://creativecommons.org/licenses/by-sa/3.0/au/
**********************************************************************/

// next the include statements
#include "C4HTimeGate.h"

//boolean for debugging purposes. Set to true for verbose output while debugging
bool debug = true;

//NewClass newClass(1,"Hello");
Transmitter trans1(1);

void setup() {
  Serial.begin(9600); //open the serial port for debugging
  if (debug) {
    Serial.println("Running in debug mode");
  }
  
  // put your setup code here, to run once:
  

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
}

//other functions after setup and loop
void doesNothin() {
  //do nothing 
}
