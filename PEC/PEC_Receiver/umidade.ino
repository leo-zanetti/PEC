void hum()
{
  //  Preparação do display para exibição dos dados recebidos
  Heltec.display->clear();
  Heltec.display->setTextAlignment(TEXT_ALIGN_LEFT);
  Heltec.display->setFont(ArialMT_Plain_10);
  Heltec.display->drawString(0 , 0 , "RSSI: " + rssi + "dB");
  Heltec.display->drawString(0 , 20 , "Pacote recebido!");
  Heltec.display->drawString(0 , 35 , "Umidade = " + humi + " %");
  Heltec.display->drawString(0 , 50 , "Enviando para a Tago");
  Heltec.display->display();

  Serial.println(humi);

  //  Inicia um client TCP para o envio dos dados
  if (client.connect(server, 80))
  {

    Serial.print("CONNECTED AT TAGO\n");

    String postStr1 = "";
    String postData1 = "variable=humi&value=" + String(humi) + "\n";

    postStr1 = "POST /data HTTP/1.1\n";
    postStr1 += "Host: api.tago.io\n";
    postStr1 += "Device-Token: " + apiKey + "\n";
    postStr1 += "_ssl: false\n";
    postStr1 += "Content-Type: application/x-www-form-urlencoded\n";
    postStr1 += "Content-Length: " + String(postData1.length()) + "\n";
    postStr1 += "\n";
    postStr1 += postData1;

    client.print(postStr1);

    unsigned long timeout = millis();
    while (client.available() == 0)
    {
      if (millis() - timeout > 5000)
      {
        Serial.println(">>> Client Timeout !");
        client.stop();
        return;
      }
    }

    while (client.available()) {
      String line = client.readStringUntil('\r');
      Serial.print(line);
    }

    client.stop();
  }


}
