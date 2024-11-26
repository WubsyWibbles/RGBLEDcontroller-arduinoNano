// Written by WubsyWibbles for Printables.com project
// Created November 24, 2024

// pin definitions
// 14-16 are A0-A2 (analog)
int redReadPin = 14;
int greenReadPin = 15;
int blueReadPin = 16;
// 9-11 are D9-D11 (digital)
int redWritePin = 11;
int greenWritePin = 10;
int blueWritePin = 9;

// variables for each channel's birghtness
int redValue = 0;
int greenValue = 0;
int blueValue = 0;

void setup() {
  // set analog pins as inputs, digital as outputs
  pinMode(redReadPin, INPUT);
  pinMode(greenReadPin, INPUT);
  pinMode(blueReadPin, INPUT);
  pinMode(redWritePin, OUTPUT);
  pinMode(greenWritePin, OUTPUT);
  pinMode(blueWritePin, OUTPUT);
}

void loop() {
  // analogRead() returns a value from 0-1023 while
  // analogWrite() requires a value from 0-255
  // therefore each raw value will be divided by 4
  // before being written to the output pin
  redValue = (analogRead(redReadPin) / 4);
  analogWrite(redWritePin, redValue);
  greenValue = (analogRead(greenReadPin) / 4);
  analogWrite(greenWritePin, greenValue);
  blueValue = (analogRead(blueReadPin) / 4);
  analogWrite(blueWritePin, blueValue);
}
