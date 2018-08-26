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

#ifndef LightGate_h
  #define LightGate_h

  #include "Arduino.h"

  #ifdef DEBUG
    #define DEBUG_PRINTLN(x)  Serial.println(x)
    #define DEBUG_PRINT(x)  Serial.print(x)
  #else
    #define DEBUG_PRINTLN(x) //does nothing if debug not defined
    #define DEBUG_PRINT(x)
  #endif
  
  #define FEATHER32u4 //replace with other options FEATHERnRF52
  
  //define the pin for checking the battery level
  #ifdef FEATHER32u4
    #define BATPIN A9
  #ifdef FEATHERnRF52
    #define BATPIN A7


  class Transmitter
  {
    public:
    Transmitter(int a, String b); 
    void doSomething();
    private:
    int _a;
    String _b;
  };

    class NewClass
  {
    public:
    NewClass(int a, String b); 
    void doSomething();
    private:
    int _a;
    String _b;
  };
  
  //some general functions
  float batteryLevel(){
    int raw = analogRead(VBATPIN);
    raw *= 2;    // double-100K resistor divider on the BAT pin so mult by 2
    float voltage *= 3.3/1024;  // Multiply by reference voltage (3.3V) and divide by range (1024)
    return voltage;
  }
#endif //#ifndef LightGate_h

