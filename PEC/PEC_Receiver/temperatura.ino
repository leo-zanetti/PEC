void tmp()
{
  //  Preparação do display para exibição dos dados recebidos
  Heltec.display->clear();
  Heltec.display->setTextAlignment(TEXT_ALIGN_LEFT);
  Heltec.display->setFont(ArialMT_Plain_10);
  Heltec.display->drawString(0 , 0 , "RSSI: " + rssi + "dB");
  Heltec.display->drawString(0 , 20 , "Pacote recebido!");
  Heltec.display->drawString(0 , 35 , "Temperatura = " + temp + " ºC");
  Heltec.display->drawString(0 , 50 , "Enviando para a Tago");
  Heltec.display->display();

  Serial.println(temp);

  //  Inicia um client TCP para o envio dos dados
  if (client.connect(server, 80))
  {

    Serial.print("CONNECTED AT TAGO\n");

    String postStr2 = "";
    String postData2 = "variable=temp&value=" + String(temp) + "\n";

    postStr2 = "POST /data HTTP/1.1\n";
    postStr2 += "Host: api.tago.io\n";
    postStr2 += "Device-Token: " + apiKey + "\n";
    postStr2 += "_ssl: false\n";
    postStr2 += "Content-Type: application/x-www-form-urlencoded\n";
    postStr2 += "Content-Length: " + String(postData2.length()) + "\n";
    postStr2 += "\n";
    postStr2 += postData2;

    client.print(postStr2);

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
