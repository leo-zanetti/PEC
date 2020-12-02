void hum()
{
  humi = dht.readHumidity();
  if (isnan(humi)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }
  Serial.print("Umidade: ");
  Serial.print(humi);
  Serial.println("%");
  delay(1000);
}
