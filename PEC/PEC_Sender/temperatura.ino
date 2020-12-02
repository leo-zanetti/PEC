void tmp()
{
  temp = dht.readTemperature();
  if (isnan(temp)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }
  Serial.print("Temperatura: ");
  Serial.print(temp);
  Serial.println("*C");
  delay(1000);
}
