#ifndef CLOE
#define CLOE

#include "Arduino.h"

#include "Tela.h"
#include "Som.h"
#include "Interatividades.h"

int contador_teste = 0;

class Cloe
{
public:
    Cloe();

public:
    void setbotaos(int botao_vermelho_, int botao_azul_, int botao_amarelo_, int botao_laranja_, int botao_marrom_)
    {
        m_botao_vermelho_ = botao_vermelho_;
        m_botao_azul_ = botao_azul_;
        m_botao_amarelo_ = botao_amarelo_;
        m_botao_laranja_ = botao_laranja_;
        m_botao_marrom_ = botao_marrom_;
    }

    bool esperando_resposta();

    bool verificar_resposta();

    void mostrar_placar();

    void desliga(){
        placar = 0;
    };

    void comeco()
    {
        som.iniciar();
        tela.iniciar();
    }

private:
    int m_botao_vermelho_;
    int m_botao_azul_;
    int m_botao_amarelo_;
    int m_botao_laranja_;
    int m_botao_marrom_;

    int placar;

    Som som;
    Tela tela;
};

#endif