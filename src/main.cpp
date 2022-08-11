#include <Arduino.h>
#include <Stepper.h>
#include <Motor.hpp>

Motor Motor_1(15, 2048, false, 12, 27, 14, 26); //Inicialização de um Motor na ordem: IN4, IN2, IN3, IN1;

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  Motor_1.Tocar();
}