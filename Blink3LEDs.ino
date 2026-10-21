/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://docs.arduino.cc/hardware/

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/Blink/
*/

//global vars
const int led1 = 8;
const int led2 = 9;
const int led3 = 10;
const int button = 2;

// the setup function runs once when you press reset or power the board
void setup() {

  // set up 3 pins for LEDs
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

  //set up 1 pin for input switch
  pinMode(button, INPUT);
}

// the loop function runs over and over again forever
void loop() {

  if(digitalRead(button) == HIGH){

    digitalWrite(led1, HIGH);  // turn 8 on, 7 & 12 off
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      delay(1000);            // wait for a second

    if(digitalRead(button) == LOW){
       digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      return;
    }

      digitalWrite(led1, LOW);   // turn 8 off, 7 on (12 stays off)
      digitalWrite(led2, HIGH);
      delay(1000);            // wait for a second

    if(digitalRead(button) == LOW){
       digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
      return;
    }
      digitalWrite(led3, HIGH); // turn 12 on, 7 off (8 stays off)s
      digitalWrite(led2, LOW);  
      delay(1000);   

      if(digitalRead(button) == LOW){
       digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
      return;
    }
               
  } else {
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  
}
