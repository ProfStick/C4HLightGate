/**********************************************************************
  Library title

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

#include "Arduino.h"
#include "LightGate.h"

Transmitter::Transmitter(){
  //_id = id;
}

void Transmitter::batteryLevel(){
    int raw = analogRead(BATPIN);
    raw *= 2;    // double-100K resistor divider on the BAT pin so mult by 2
    float voltage = raw*3.3/1024;  // Multiply by reference voltage (3.3V) and divide by range (1024)
    Serial.println(voltage);  
}

/*
NewClass::NewClass(int a, String b){
  //copy a and b to private variables
  _a = a;
  _b = b;
  //do nothing with a and b
}

void NewClass::doSomething(){
  Serial.println(_a);
  Serial.println(_b);
  
}
*/
