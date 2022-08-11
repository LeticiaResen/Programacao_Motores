#include <Motor.hpp>

Motor::Motor(int velocidade, int angulo, bool posicao, int IN1, int IN2, int IN3, int IN4)
{
    this->angulo = angulo;
    this->velocidade = velocidade;
    this->IN1 = IN1;
    this->IN2 = IN2;
    this->IN3 = IN3;
    this->IN4 = IN4;
    this->posicao = posicao;

    Stepper Motor_Construtor(angulo, IN1, IN2, IN3, IN4);
    Motor_Construtor.setSpeed(velocidade);

    this->Motor_de_passo = Motor_Construtor;
};

void Motor::Tocar(bool posicao)
{
    if (posicao == false)
    {
        Motor_de_passo.step(100);
        posicao = true;
        this->posicao = posicao;
    }
    else
    {
        Motor_de_passo.step(-100);
        posicao = false;
        this->posicao = posicao;
    }
};

void Motor::Velocidade(const int velocidade)
{
    this->velocidade = velocidade;
};
