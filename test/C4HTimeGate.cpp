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

//#include "Arduino.h"
#include "C4HTimeGate.h"

Feather::Feather(){
  //_id = id;
}

int Feather::batteryLevel(){
    int raw = analogRead(BATPIN);
    raw *= 2;    // double-100K resistor divider on the BAT pin so mult by 2
    float voltage = raw*3.3/1024;  // Multiply by reference voltage (3.3V) and divide by range (1024)
    Serial.println(voltage);
    voltage = int(voltage * 100); //save mem by converting to int
    return voltage;  
}


Transmitter::Transmitter(byte id){
  _id = id;
}

byte Transmitter::getID(){
  return _id;
}

void Transmitter::printBatteryLevel(){
  int lvl = batteryLevel();
  Serial.print("Transmitter ");
  Serial.print(_id);
  Serial.print(" voltage is ");
  Serial.println(lvl);
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
