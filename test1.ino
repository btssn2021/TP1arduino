#include <Arduino.h>
enum {LR1=12,LR2=11,LR3=10,LR4=9};
void setup()
{
    pinMode(LR1,OUTPUT); //met la pin 12 en mode OUTPUT
    pinMode(LR2,OUTPUT);
    pinMode(LR3,OUTPUT);
    pinMode(LR4,OUTPUT);
}

void loop() {
    digitalWrite(LR1,HIGH); //Allume la led
    digitalWrite(LR2,HIGH); //Allume la led
    digitalWrite(LR3,HIGH); //Allume la led
    digitalWrite(LR4,HIGH); //Allume la led
    delay(1000);
    digitalWrite(LR1,LOW);  //eteint la led
    digitalWrite(LR2,LOW);
    digitalWrite(LR3,LOW);
    digitalWrite(LR4,LOW);
    delay(1000);

}
