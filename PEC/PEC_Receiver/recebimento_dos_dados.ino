void dados()
{
  Serial.print("Pacote recebido: ");
  
  //  Leitura do pacote
  while (LoRa.available()) {
    String LoRaData = LoRa.readString();
    
    //  Formato: readingID/umidade&temperatura
    //  Exemplo: 1/85&29
    Serial.print(LoRaData);

    // Separando as mensagens por ID para luminosidade e temperatura
    int pos1 = LoRaData.indexOf('/');
    int pos2 = LoRaData.indexOf('&');
    ID = LoRaData.substring(0, pos1);
    humi = LoRaData.substring(pos1 + 1, pos2);
    temp = LoRaData.substring(pos2 + 1, LoRaData.length());
  }
  
  // Intensidade do sinal
  rssi = LoRa.packetRssi();
  Serial.print(" with RSSI ");
  Serial.println(rssi);

  hum();
  tmp();
}
