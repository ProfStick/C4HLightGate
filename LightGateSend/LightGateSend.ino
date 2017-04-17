/*
  LightGateSend

  Sends an unmodulated 38kHz IR signal using an IR LED attached to pin 3.
  Used for a simple beam brake light gate
  For higher radiant intensity try the TSAL6100

  The circuit:
  * TSAL6200 IR LED   pin 3
  * 
  * note: IRremote library only allows pin 3 for send


  Created 17 Apr 2017
  By Courses4Horses geoff.goldrick@gmail.com
  Modified day month year
  By author's name

  

*/
#include <IRremote.h>

IRsend irsend;             //create an instance of IRsend

void setup()
{
  irsend.enableIROut(38); //send signal at 38kHz
  irsend.mark(0);         //don't really understand what this does
}

void loop() {
}
