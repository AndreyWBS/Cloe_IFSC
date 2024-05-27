#include <Arduino.h> 
#include "classes/Cloe_.h"

bool botao = false;
const int led_principal = 13;
int contador_teste = 0;


void setup()
{
    Serial.begin(9600);
    pinMode(led_principal, OUTPUT);

}

void loop()
{   
    Cloe Cloe_;
    Cloe_.comeco();
    delay(1000);
}