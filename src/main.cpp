#include <Arduino.h>

void setup()
{
    Serial.begin(115200); 
}

float i = 0;
void loop()
{
    i += 0.1;

    Serial.print(sin(i));
    Serial.print("\t");
    Serial.println(cos(i));
    delay(50);
}