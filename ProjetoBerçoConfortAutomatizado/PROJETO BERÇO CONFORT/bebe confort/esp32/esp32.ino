#include <DHT.h>
#include <DHT_U.h>
#include <ESP32Servo.h> 
#include "BluetoothSerial.h"

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run `make menuconfig` to and enable it
#endif

BluetoothSerial SerialBT;


#define DHTTYPE DHT11 // Define o tipo de sensor

Servo meuServo;

int sensorPin1 = 36; // nao esta senso utilizado
int sensorSomA = 34;
int sensorSomD = 32;
int sensorTemp = 25;
int sensorGas = 14; 
int led = 2;  
int ledSom = 4;  


bool buttonPressed = false;
int sensorValue1 = 0;  // nao esta senso utilizado
int valorSomA = 0;
int valorSomD = 0;
int sensorTemp1 = 0;
int sensorGas1 = 0;

DHT dht(sensorTemp, DHTTYPE);

void setup() {
  pinMode(sensorPin1, INPUT);  // nao esta senso utilizado
  pinMode(sensorSomA, INPUT);
  pinMode(sensorSomD, INPUT);
  pinMode(sensorTemp, INPUT);
  pinMode(sensorGas, INPUT);
  pinMode(led ,OUTPUT);
  pinMode(ledSom, OUTPUT);
 
  Serial.begin(115200);
  dht.begin();

  SerialBT.begin("MICROCONTROLADOR"); 
  Serial.println("O dispositivo já pode ser pareado!");
}

void loop() {

  buttonPressed = true;
  if (buttonPressed) {
    sensorValue1 = analogRead(sensorPin1);  // nao esta senso utilizado
    sensorTemp1 = analogRead(sensorTemp);
    sensorGas1 = analogRead(sensorGas);
    valorSomA = analogRead(sensorSomA);

    valorSomD = digitalRead(sensorSomD);
   
    // Converte os valores em percentual
    float percent1 = (sensorValue1 / 1023.0) * 5.0;  // nao esta senso utilizado

    float humidade = dht.readHumidity(); // LÃª a umidade relativa do ar
    float temperatura = dht.readTemperature(); // LÃª a temperatura em Celsius (por padrÃ£o)
   
    float percentualGas = map(sensorGas1,300,750,0,100);
   /*
    if (isnan(humidade) || isnan(temperatura)) {
    Serial.println("Erro ao ler o sensor de temperatura e umidade!");
    return;
   }*/
    if (valorSomA > 301)
    {
      digitalWrite(ledSom, HIGH); 
      balancarBerco();
    }
    delay(1000);
      digitalWrite(ledSom, LOW);

    // Exibe os valores na porta serial
    Serial.print("Sensor Som Analogico: ");
    Serial.print(valorSomA);
    Serial.print(" \t");

    Serial.print("Sensor Som Digital: ");
    Serial.print(valorSomD);
    Serial.print(" \t");

     Serial.print("Umidade: ");
     Serial.print(humidade);
     Serial.print(" %\t");
     Serial.print("Temperatura: ");
     Serial.print(temperatura);
     Serial.print(" °C\t");
 
    Serial.print(" Sensor Gas: ");
    Serial.print(percentualGas);
    Serial.println(" %");
   
    digitalWrite(led, HIGH); // Liga o LED para indicar a leitura
    delay(1000); // Aguarda 1 segundo
    digitalWrite(led, LOW); // Desliga o LED
    buttonPressed = false;
    delay(3500);
  }
}

void balancarBerco() {
  meuServo.attach(5);// essa funçao nao pode ficar no setup
  
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