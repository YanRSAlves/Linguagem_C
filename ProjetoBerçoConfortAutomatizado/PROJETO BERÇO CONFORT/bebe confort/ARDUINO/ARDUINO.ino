#include <DHT.h>
#include <DHT_U.h>
#include <Servo.h>
 
#define SERVO 9
#define DHTTYPE DHT11 // Define o tipo de sensor

Servo s; // Variável Servo
int pos; // Posição Servo

int sensorPin1 = A0; // nao esta senso utilizado
int sensorSomA = A4;
int sensorSomD = 3;
int sensorTemp = 10;
int sensorGas = A2;
int sensorGasD = 2; 
int led = 13;  
int ledSom = 6;  


bool buttonPressed = false;
int sensorValue1 = 0;  // nao esta senso utilizado
int valorSomA = 0;
int valorSomD = 0;
int sensorTemp1 = 0;
int sensorGas1 = 0;
int valorGasD = 0;

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

  s.attach(SERVO); //ASSOCIAÇÃO DO PINO DIGITAL AO OBJETO DO TIPO SERVO
  s.write(0); //INICIA O MOTOR NA POSIÇÃO 0º
}

void loop() {

  buttonPressed = true;
  if (buttonPressed) {
    sensorValue1 = analogRead(sensorPin1);  // nao esta senso utilizado
    sensorTemp1 = analogRead(sensorTemp);
    sensorGas1 = analogRead(sensorGas);
    valorSomA = analogRead(sensorSomA);

    valorSomD = digitalRead(sensorSomD);
    valorGasD = digitalRead(sensorGasD);

   
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
    if (digitalRead(sensorSomD) == HIGH){ //SE A LEITURA DO PINO FOR IGUAL A HIGH, FAZ
      digitalWrite(ledSom, HIGH); // Liga o LED para indicar a leitura
      balancarBerco(); //FUNÇÃO PRA BALANÇAR O BERÇO QUANDO DETECTA SOM
      delay(1000); // Aguarda 1 segundo
      digitalWrite(ledSom, LOW);
      delay(500);
    }

    Serial.print("Sensor Som Digital: ");
    Serial.print(valorSomD);
    Serial.print(" \t");
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
 
    Serial.print(" Sensor Gas Analogico: ");
    Serial.print(percentualGas);
    Serial.println(" %");

    Serial.print(" Sensor Gas Digital: ");
    Serial.print(valorGasD);
    Serial.println(" %");
   
    digitalWrite(led, HIGH); // Liga o LED para indicar a leitura
    delay(1000); // Aguarda 1 segundo
    digitalWrite(led, LOW); // Desliga o LED
    buttonPressed = false;
    delay(3500);
  }
}

int balancarBerco(){
for(pos = 0; pos < 180; pos++){ //PARA "pos" IGUAL A 0, ENQUANTO "pos" MENOR QUE 180, INCREMENTA "pos"
    s.write(pos); //ESCREVE O VALOR DA POSIÇÃO QUE O SERVO DEVE GIRAR
    delay(15); //INTERVALO DE 15 MILISSEGUNDOS
  }
  delay(1000); //INTERVALO DE 1 SEGUNDO
  for(pos = 180; pos >= 0; pos--){ //PARA "pos" IGUAL A 180, ENQUANTO "pos" MAIOR OU IGUAL QUE 0, DECREMENTA "pos"
    s.write(pos); //ESCREVE O VALOR DA POSIÇÃO QUE O SERVO DEVE GIRAR
    delay(15); //INTERVALO DE 15 MILISSEGUNDOS
  }
}
