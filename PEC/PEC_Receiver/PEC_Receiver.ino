
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
#include "puc.h"
#include <WiFi.h>
#include <WiFiManager.h>

//  Definição da frequência utilizada pelo dispositivo (915 MHz) e variáveis do rádio
#define BAND    915E6
String rssi = "RSSI --";

String humi;
String temp;
String ID;

//  Inicialização das bibliotecas necessárias
WiFiManager wifiManager;
WiFiClient client;

//  Parâmetros de Rede WiFi
const char* ssid = "";
const char* password = "";

//  Parâmetros da Plataforma Tago.io
String apiKey = "";
const char* server = "";

//  Configuração da rede WiFi
void setup_wifi()
{
  delay(10);
  Serial.println();
  Serial.print("Conectando à rede ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("WiFi conectado");
  Serial.println("Endereco de IP: ");
  Serial.println(WiFi.localIP());
}

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
  Serial.begin(115200);

  // Configura os parâmetros da rede WiFi
  setup_wifi();

  //  Inicialização do display OLED da placa
  Heltec.begin(true /*DisplayEnable Enable*/, true /*Heltec.Heltec.Heltec.LoRa Disable*/, true /*Serial Enable*/, true /*PABOOST Enable*/, BAND /*long BAND*/);
  Heltec.display->init();
  Heltec.display->flipScreenVertically();
  Heltec.display->setFont(ArialMT_Plain_10);
  logo();
  delay(1500);
  Heltec.display->clear();

  Heltec.display->drawString(0, 0, "LoRa inicializado!");
  Heltec.display->drawString(0, 20, "Esperando pelos pacotes");
  Heltec.display->display();
  delay(1000);

  LoRa.receive();
}

void loop()
{
  int packetSize = LoRa.parsePacket();
  if (packetSize)
  {
    dados();
  }
}
