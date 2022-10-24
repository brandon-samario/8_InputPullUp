/*
  InputPullUp 
  Demonstrates the use of pinMode(INPUT_PULLUP). It reads a digital input on pin 2 and prints the results to the Serial Monitor
  Use serial begin to start serial monitoring, and use serial.print or serial.println to print value
  Use pinmode, set pin 2 as input pullup (pushbutton), and set pin 13 as output (LED)
*/

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600); // start serial connection
  pinMode(2, INPUT_PULLUP); // configure pin 2 as an input and enable the internal pull-up resistor (pushbutton)
  pinMode(13, OUTPUT); // setting pin 13 as output (LED)
}

// the loop function runs over and over again forever
void loop() {
  int PUSHBUTTON = digitalRead(2); //read the pushbutton value into a variable
  Serial.println(PUSHBUTTON); //print out the value of the pushbutton

  // setting state of pushbutton
  if (PUSHBUTTON == LOW) { 
    digitalWrite(13, LOW); // when pushbutton is not pressed LED off
  } else {
    digitalWrite(13, HIGH); // when pushbutton is pressed LED on
  }
}
