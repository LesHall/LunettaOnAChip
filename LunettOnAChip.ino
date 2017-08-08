// Lunetta on a Chip
// This version just blinks an LED + R on pin 13 (D10) of an ATtiny84 at 200ms rate.  
// .
// a design in honor of the late Stanley Lunetta
// suggested by Howard Moscovitz
//
// by Les Hall (with a lot of help from my friends!)
// started Tue Aug 8 2017
// 
// more to follow!
// 
// below is the original comment from the creators of the starting program (blink.ino).  
/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO 
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino model, check
  the Technical Specs of your board  at https://www.arduino.cc/en/Main/Products
  
  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
  
  modified 2 Sep 2016
  by Arturo Guadalupi
  
  modified 8 Sep 2016
  by Colby Newman
*/

#define LED_BUILT 0


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILT, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILT, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILT, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}
