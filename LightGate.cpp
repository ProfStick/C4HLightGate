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
#include "Template.h"

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

