#include <Arduino.h>
#include <TM1637Display.h>
#include <virtuabotixRTC.h> 

// RTC module declaration
virtuabotixRTC myRTC(A1, A2, A3); // Pins CLK, DAT, RST

// Variables to store values read from the RTC Module
int minutes;
int hours;
int ctr = 0;

// Define all the LED Pins
int LED_BLUE  = 12;
int LED_WHITE = 11;
int blinkCTR  = 0;     // Counter to check how many blinks are required

// Defining the TM1637 display pins
#define CLK 4
#define DIO 5
TM1637Display display(CLK, DIO); // Create an instance of the TM1637Display
bool blinkToggle = false;        // For toggling the Colons on and off
int  timeData    = 0;

// Connect the IR Sensor to D6 pin of Arduino
int IRSensor  = 6;
int IRtoggler = 0;
unsigned long timestamp; // This is to avoid multiple obstacle detection

// Attach the buttons to D2 and D3 of the Arduino
//const byte BUTTON_1 = 2;
//const byte BUTTON_2 = 3;

void setup() {
   //attachInterrupt(digitalPinToInterrupt(BUTTON_1), Button_1_Pressed, RISING);
   //attachInterrupt(digitalPinToInterrupt(BUTTON_2), Button_2_Pressed, RISING);
   display.setBrightness(7);               // Set the brigntness of the TM1637 display
   display.showNumberDecEx(0, 0x40, true); // Needed for the displaying a decimal number with decimal points or colon
   pinMode(LED_BLUE,  OUTPUT);             // LED pin OUTPUT
   pinMode(LED_WHITE, OUTPUT);             // LED pin OUTPUT
   pinMode(IRSensor,  INPUT);              // IR Sensor pin INPUT
   Serial.begin(9600);
   
   // Set the current date, and time in the following format:
   // seconds, minutes, hours, day of the week, day of the month, month, year
   //myRTC.setDS1302Time(00, 39, 21, 7, 20, 1, 2023);  
};


void loop() {
  myRTC.updateTime();       // This allows for the update of variables for time or accessing the individual elements
  minutes  = myRTC.minutes; // Get the current minutes from the RTC Module
  hours    = myRTC.hours;   // Get the current hours from the RTC Modules  
  timeData = hours * 100 + minutes;

  // Code block that blinks the colon of the TM1637 module
  if (ctr == 200) {
    if (blinkToggle) {
      display.showNumberDecEx(timeData, 0x40, true);
      blinkToggle = false;
    } else {
      display.showNumberDecEx(timeData, 0, true);
      blinkToggle = true;
    };
    ctr = 0;
  };ctr++;
  delay(5); 


  // Code block that turns on or off the Blue LED Cluster 
  //Serial.print("IRtoggler Before:");Serial.println(IRtoggler);
  int Sensordata = digitalRead(IRSensor); // Set the GPIO as Input
  //Serial.print("Sensor value:");Serial.println(digitalRead(Sensordata));
  if (Sensordata != 0) {
    if (millis() - timestamp>500) { // This is to avoid multiple obstacle detection
      timestamp = millis();
      if (IRtoggler == 0) {digitalWrite(LED_BLUE, HIGH);IRtoggler = 1;}
      else                {digitalWrite(LED_BLUE, LOW); IRtoggler = 0;}
    };
  };
  //Serial.print("IRtoggler After:");Serial.println(IRtoggler);


  // Flash the white LEDs if minutes = 0
  if ((int)minutes == 0) {
    if (blinkCTR==0  || blinkCTR==40 || blinkCTR==100 || blinkCTR==140 || blinkCTR==200 || blinkCTR==240 || blinkCTR==300 || blinkCTR==340)  
      digitalWrite(LED_WHITE, HIGH);
    if (blinkCTR==20 || blinkCTR==60 || blinkCTR==120 || blinkCTR==160 || blinkCTR==220 || blinkCTR==260 || blinkCTR==320 || blinkCTR==360)  
      digitalWrite(LED_WHITE, LOW);
    blinkCTR++;
  };
  if ((int)minutes == 1) blinkCTR = 0; // Reset blinkCTR for the next cycle of flashing
};


// Pressing this button puts the clock in setup mode
//void Button_1_Pressed(){};
// Pressing this button increments the values on the display
//void Button_2_Pressed(){};
