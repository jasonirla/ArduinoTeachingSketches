
/*
BUTTON (and BUTTONS)
Jeff Thompson | 2013 | www.jeffreythompson.org

Read a button, light up an LED!

Schematic, see:
www.arduino.cc/en/Tutorial/Button

CHALLENGE:
+ Can you add more buttons? How would you best wire them on the breadboard?
+ Can you make the LED go off after a certain amount of time has passed? Hint: while
  using 'delay' will work, you can also look into the 'millis' function...

*/

int buttonPin = 0;      // pins for button and LED
int ledPin = 13;
int buttonState = 0;    // store button's status - initialize to OFF

void setup() {
  pinMode(buttonPin, INPUT);    // set button to input
  pinMode(ledPin, OUTPUT);      // LED to output
}

void loop() {
  
  // read the state of the button into our variable
  buttonState = digitalRead(buttonPin);
  
  // test that state
  if (buttonState == HIGH) {      // if button is pressed...
    digitalWrite(ledPin, HIGH);   // turn on the LED
  }
  else {                          // if the button is not pressed...
    digitalWrite(ledPin, LOW);    // turn the LED off!
  }
}
