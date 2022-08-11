#ifndef MOTOR_H
#define MOTOR_H

#include <Stepper.h>

class Motor
{

public:
    void Velocidade(const int velocidade);
    void Tocar(bool posicao);
    Motor();
    Motor(int velocidade, int angulo, bool posicao, int IN1, int IN2, int IN3, int IN4);

    int velocidade;
    int angulo;
    int posicao;
    int IN1;
    int IN2;
    int IN3;
    int IN4;
    Stepper Motor_de_passo;
};

#endif