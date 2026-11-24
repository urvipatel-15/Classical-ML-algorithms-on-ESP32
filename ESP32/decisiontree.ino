#include <DHT.h>
#include "model_dt.h"  

#define DHTPIN 4
#define DHTTYPE DHT22
#define PIRPIN 13

DHT dht(DHTPIN, DHTTYPE);

const char* classNames[] = {"Normal & Empty", "Normal & Occupied", 
                             "Hot & Humid", "Cool & Dry"};

void setup() {
  Serial.begin(115200);
  pinMode(4, INPUT_PULLUP);
  pinMode(PIRPIN, INPUT);
  dht.begin();
  delay(2000);
  Serial.println("=== Decision Tree Live Sensor Test ===");
  Serial.println("Temp(C), Humidity(%), PIR, Predicted Class, Time(us)");
}

void loop() {
  float temp = dht.readTemperature();
  float hum  = dht.readHumidity();
  int   pir  = digitalRead(PIRPIN);

  if (isnan(temp) || isnan(hum)) {
    Serial.println("ERROR: Sensor read failed");
    delay(2000);
    return;
  }

  float input[3] = {temp, hum, (float)pir};
  float output[4];

  unsigned long t1 = micros();
  score_dt(input, output);        // change function name per model
  unsigned long elapsed = micros() - t1;

  int pred = 0;
  float max_val = output[0];
  for (int j = 1; j < 4; j++) {
    if (output[j] > max_val) {
      max_val = output[j];
      pred = j;
    }
  }

  Serial.printf("%.2f, %.2f, %d, %d (%s), %lu us\n",
    temp, hum, pir, pred, classNames[pred], elapsed);

  delay(2000);
}