void envio()
{
  Pacote = String(ID) + "/" + String(humi) + "&" + String(temp);
  LoRa.beginPacket();
  LoRa.print(Pacote);
  LoRa.endPacket();

  //  Exibição dos dados no display OLED
  Heltec.display->clear();
  Heltec.display->drawString(0, 0, "Enviando pacotes...");
  Heltec.display->drawString(0, 20, "Umidade: " + String(humi) + " %");
  Heltec.display->drawString(0, 35, "Temperatura: " + String(temp) + " ºC");
  Heltec.display->drawString(0, 50, "ID: " + String(ID));
  Heltec.display->display();
  
  Serial.print("Enviando pacote: ");
  Serial.println(ID);
  
  ID++;
}
