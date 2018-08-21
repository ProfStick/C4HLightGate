/*
  LightGate Send

  This sketch will create a 38kHz carrier from an IR LED
  Code adapted from tutorial at http://www.ladyada.net/learn/sensors/ir.html
  
  

  The circuit:
  * FEATHER 32u4
  * TSAL6200 IR LED   powered by 3.3V out
  * IR LED controlled by BC548B NPN transistor on pin 5
  * 1k resistor between pin3 and transistor base

  Created 17 Apr 2017
  By Courses4Horses geoff.goldrick@gmail.com
  Modified day month year
  By author's name

*/

const int IR_LED_PIN =  3;    // LED connected to digital pin 3

// 38 kHz is about 13 microseconds high and 13 microseconds low
// digitalWrite takes about 3 micros therefore delay time should be 10 micros
const long INTERVAL = 10; //interval in micros at which to change LEd state
unsigned long previousMicros = 0;
int ledState = LOW;   //used to change the LED





void setup() {
  pinMode(IR_LED_PIN, OUTPUT);      
  Serial.begin(9600);
}

void loop() {

  //check to see if it is time to change the LED
  unsigned long currentMicros = micros();

  if (currentMicros - previousMicros >= INTERVAL) {
    // save the last time you blinked the LED
    previousMicros = currentMicros;
    ledState = !ledState;

    // set the LED with the ledState of the variable:
    digitalWrite(IR_LED_PIN, ledState);
  }

  
     
     // so 26 microseconds altogether
     // checked with multimeter
}
 
