#include <Arduino.h> 
void setup() {
  Serial.begin(115200);
  // Print log
  Serial.println("setup");
}

float i=0;
void loop() {
  i+=0.1;

  // Print log
  Serial.print("loop");
  Serial.println(i);
  
  // Plot a sine
  Serial.print(">sin:");
  Serial.println(sin(i));

  // Plot a cos
  Serial.print(">cos:");
  Serial.println(cos(i));
    
  delay(50);
}