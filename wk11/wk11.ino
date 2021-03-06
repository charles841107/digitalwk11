/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/
int LED_PINT1=12;
int LED_PINT2=13;
int LED_PINT3=11;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_PINT1, OUTPUT);
  pinMode(LED_PINT2, OUTPUT);
  pinMode(LED_PINT3, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_PINT2, HIGH); 
  digitalWrite(LED_PINT1, LOW);
  digitalWrite(LED_PINT3, LOW);// turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
  digitalWrite(LED_PINT2, LOW); 
  digitalWrite(LED_PINT1, HIGH);
  digitalWrite(LED_PINT3, LOW);// turn the LED off by making the voltage LOW
  delay(500);      
  digitalWrite(LED_PINT2, LOW); 
  digitalWrite(LED_PINT1, LOW);
  digitalWrite(LED_PINT3, HIGH);// turn the LED off by making the voltage LOW
  delay(500);    
        
}
