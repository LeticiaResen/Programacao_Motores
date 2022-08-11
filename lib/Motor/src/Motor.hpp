#ifndef MOTOR_H
#define MOTOR_H

#include <Stepper.h>

class Motor
{

public:
    void SetVelocidade(const int velocidade);
    int GetVelocidade();
                                                 //Getter e Setters
    void SetPosicao(bool posicao);
    bool GetPosicao();

    void Tocar(); // Faz o motor tocar uma vez a corda
    Motor(int velocidade, int angulo, bool posicao, int IN4, int IN2, int IN3, int IN1); //Construtor

    
private:
    int velocidade;
    int angulo;
    bool posicao;
    int IN1;
    int IN2;
    int IN3;
    int IN4;
    Stepper Motor_de_passo;
};

#endif