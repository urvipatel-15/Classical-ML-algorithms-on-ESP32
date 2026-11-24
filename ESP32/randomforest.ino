#include "model_rf.h"

void setup() {
  Serial.begin(115200);
  delay(2000);
}

void loop() {

  // ---- Input (STATIC for benchmarking) ----
  double input[3] = {30.5, 58.0, 1.0};

  double output[4];

  // ---- Measure inference time ----
  unsigned long t_start = micros();

  score(input, output);   // your RF model

  unsigned long t_end = micros();

  // ---- Find predicted class (argmax) ----
  int predicted_class = 0;
  double max_val = output[0];

  for (int i = 1; i < 4; i++) {
    if (output[i] > max_val) {
      max_val = output[i];
      predicted_class = i;
    }
  }

  // ---- Print results ----
  Serial.print("Class: ");
  Serial.print(predicted_class);
  Serial.print(" | Time: ");
  Serial.print(t_end - t_start);
  Serial.println(" us");

  delay(3000);
}