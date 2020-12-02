/*
*****************************************************************
|PRÁTICAS DE ENGENHARIA - C                                     |
|                                                               |
|PROJETO - AgroSense                                            |
|                                                               |
|Serviço de monitoramento de parâmetros do setor agropecuário   |
|                                                               |
|Isabela Marcondes do Amaral       RA: 17118902                 |
|Leonardo Zanetti Machado          RA: 17244971                 |
|Luiz Henrique Martani e Silva     RA: 17751702                 |
*****************************************************************
*/

//  Inclusão de todas as bibliotecas necessárias
#include "heltec.h"
#include "DHT.h"
#include "puc.h"

//  Definição da frequência utilizada pelo dispositivo (915 MHz)
#define BAND    915E6  

//  Definição do pino no qual será conectado o sensor de temperatura
#define DHTPIN 21
#define DHTTYPE DHT22

//  Inicialização das bibliotecas necessárias
DHT dht(DHTPIN, DHTTYPE);


//  Variáveis

float humi;
float temp;

int ID =0;
String Pacote = "";

void logo()
{
  //  Configuração do display OLED
  Heltec.display->clear();
  Heltec.display->drawXbm(0, 0, puc_width, puc_height, puc_bits);
  delay(2000);
  Heltec.display->display();
}

void setup()
{
  dht.begin();
  //  Inicialização do display OLED da placa
  Heltec.begin(true /*DisplayEnable Enable*/, true /*Heltec.Heltec.Heltec.LoRa Disable*/, true /*Serial Enable*/, true /*PABOOST Enable*/, BAND /*long BAND*/);
  Heltec.display->init();
  Heltec.display->flipScreenVertically();
  Heltec.display->setFont(ArialMT_Plain_10);
  logo();
  delay(1500);
  Heltec.display->clear();

  Heltec.display->drawString(0, 0, "LoRa inicializado!");
  Heltec.display->display();
  delay(1000);
  
  //  Inicialização do Monitor Serial
  Serial.begin(9600);
  delay(1000);  
}

void loop()
{
  //  Refresh do display OLED
  Heltec.display->clear();
  Heltec.display->setTextAlignment(TEXT_ALIGN_LEFT);
  Heltec.display->setFont(ArialMT_Plain_10);

  hum();
  tmp();
 
  //  Envio dos dados por RF
  envio();
  delay(2000);
  
  Heltec.display->display();
}
