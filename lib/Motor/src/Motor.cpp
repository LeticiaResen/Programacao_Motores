#include <Motor.hpp>

Motor::Motor(int velocidade, int angulo, bool posicao, int IN4, int IN2, int IN3, int IN1)  
{
    this->angulo = angulo;
    this->velocidade = velocidade;
    this->IN1 = IN1;
    this->IN2 = IN2;
    this->IN3 = IN3;
    this->IN4 = IN4;
    this->posicao = posicao;

    Stepper Motor_Construtor(angulo, IN4, IN2, IN3, IN1); //Cria um motor com a biblioteca Stepper
    Motor_Construtor.setSpeed(velocidade);

    this->Motor_de_passo = Motor_Construtor; //Cria uma classe de Motor_de_passo igual ao Motor_Construtor
};

void Motor::Tocar() //Toca de acordo com a posição
{

    posicao = GetPosicao();
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

//Getters e Setters

int Motor::GetVelocidade()
{
    return this->velocidade;
};

void Motor::SetVelocidade(const int _velocidade)
{
    this->velocidade = _velocidade;
};

bool Motor::GetPosicao()
{
    return this->posicao;
}

void Motor::SetPosicao(bool _posicao)
{
    this->posicao = _posicao;
}
