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

#ifndef Template_h
  #define Template_h

  #include "Arduino.h"

    #ifdef DEBUG
    #define DEBUG_PRINTLN(x)  Serial.println(x)
    #define DEBUG_PRINT(x)  Serial.print(x)
    #else
    #define DEBUG_PRINTLN(x) //does nothing if debug not defined
    #define DEBUG_PRINT(x)
    #endif


  class NewClass
  {
    public:
    NewClass(int a, String b); 
    void doSomething();
    private:
    int _a;
    String _b;
  };

#endif

