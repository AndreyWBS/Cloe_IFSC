#include <Arduino.h> 

bool botao = false;
const int led_principal = 13;
void setup()
{
    pinMode(led_principal, OUTPUT);
}

void loop()
{
    if (botao)
    {
        digitalWrite(led_principal, LOW);
        botao = false;
    }
    else
    {
        digitalWrite(led_principal, HIGH);
        botao = true;
    }
    delay(1000);
}