#include <Arduino.h>
const int PINDIGITAL=12;
void setup()
{
    pinMode(PINDIGITAL,OUTPUT); //met la pin 12 en mode OUTPUT

}

void loop() {
    digitalWrite(PINDIGITAL,HIGH); //Allume la led
    delay(1000);
    digitalWrite(PINDIGITAL,LOW);  //eteind la led
    delay(1000);

}
