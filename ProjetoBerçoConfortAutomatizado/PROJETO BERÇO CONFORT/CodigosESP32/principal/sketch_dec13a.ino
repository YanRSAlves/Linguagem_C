#include <DHT.h>
#include <DHT_U.h>
 
#define DHTTYPE DHT11 // Define o tipo de sensor

int sensorPin1 = A0; // nao esta senso utilizado
int sensorSomA = A4;
int sensorSomD = 4;
int sensorTemp = 10;
int sensorGas = A2; 
int led = 13;  
int ledSom = 6;  


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
 
  Serial.begin(9600);
  dht.begin();
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
   
    if (isnan(humidade) || isnan(temperatura)) {
    Serial.println("Erro ao ler o sensor de temperatura e umidade!");
    return;
   }
    if (valorSomA > 301)
    {
      digitalWrite(ledSom, HIGH); 
    }
    delay(1000);
      digitalWrite(ledSom, LOW);

    // Exibe os valores na porta serial
    Serial.print("Sensor Som Analogico: ");
    Serial.print(valorSomA);
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