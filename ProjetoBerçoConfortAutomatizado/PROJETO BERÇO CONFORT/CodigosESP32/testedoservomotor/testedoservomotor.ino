#include <ESP32Servo.h>
 
Servo meuServo;
int led = 2;
 
void setup()
{
  pinMode(led, OUTPUT);
}
void loop()
{
  meuServo.attach(5);// essa funçao nao pode ficar no setup
  digitalWrite(led, 1);
    for(int angulo=0; angulo<=180; angulo++) // Aumenta o angulo do servo ate chegar em 180 graus
    {
      meuServo.write(angulo);
      delay(10);
    }
    for(int angulo=180; angulo>=0; angulo--)// Diminui o angulo do servo
    {
      meuServo.write(angulo);
      delay(10);
    }
    digitalWrite(led, 0);
    delay(1000);
  
  meuServo.detach();
}