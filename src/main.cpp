#include <Arduino.h>
#include <Stepper.h>
#include <Motor.hpp>

Motor Motor_1(15, 2048, false, 12, 27, 14, 26);

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  Motor_1.Tocar(Motor_1.posicao);
  Serial.print(Motor_1.posicao);
}