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

#ifndef C4HTimeGate_h
  #define C4HTimeGate_h

  #include "Arduino.h"

  #define BOARD feather_32u4 //replace with other options feather_nRF52

  #ifdef DEBUG
    #define DEBUG_PRINTLN(x)  Serial.println(x)
    #define DEBUG_PRINT(x)  Serial.print(x)
  #else
    #define DEBUG_PRINTLN(x) //does nothing if debug not defined
    #define DEBUG_PRINT(x)
  #endif
  
  //define the pin for checking the battery level on feathers
  #if BOARD == feather_32u4
    #define BATPIN A9
  #elif BOARD == feather_nRF52
    #define BATPIN A7
  #endif


  class Feather
  {
    public:
      Feather(); 
      int batteryLevel();
    private:
  };

  class Transmitter : public Feather
  {
    public:
      Transmitter(byte id);
      byte getID();
      void printBatteryLevel();
    private:
      byte _id;
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

#endif //#ifndef C4HTimeGate_h

