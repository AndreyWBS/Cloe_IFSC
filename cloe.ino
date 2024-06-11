#include <Arduino.h>
#include "classes/Cloe_.h"
//#include <Adafruit_NeoPixel.h>

bool botao = false;
const int led_principal = 13;
int contador_teste = 0;
Cloe Cloe_;
void setup()
{
    Serial.begin(9600);
    pinMode(led_principal, OUTPUT);
    
}

void loop()
{

    Cloe_.comeco();
    if (!Cloe_.esperando_resposta())
    {
        if (Cloe_.verificar_resposta())
        {   
            Cloe_.mostrar_placar();
        }else
        {
            Cloe_.mostrar_placar();
            Cloe_.desliga();
        }
        
        
    }
    
    

    /*
    logica jogo

        perguntar sobre o material
        esperar resposta
        se true

    */
}