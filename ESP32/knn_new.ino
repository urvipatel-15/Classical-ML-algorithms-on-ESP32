#include <Arduino.h>
#include <math.h>
#include "model_knn.h" 

#define N_SAMPLES   800
#define N_FEATURES  3
#define K           3

// Test data
float test_data[][N_FEATURES] = {
  {36, 66, 0},
};

int ground_truth[] = {2, 1, 2, 3, 2, 2, 3, 2};

const char* class_names[] = {"Class0", "Class1", "Class2", "Class3"};

// ✅ Global arrays — avoids stack overflow on ESP32
static float g_distances[N_SAMPLES];
static int   g_nn_labels[N_SAMPLES];

float calc_distance(int index, float input[]) {
  float sum = 0.0f;
  for (int f = 0; f < N_FEATURES; f++) {
    float diff = input[f] - (float)model_knn_data[index * N_FEATURES + f];
    sum += diff * diff;
  }
  return sqrtf(sum);
}

int knn_predict(float input[]) {
  // Compute distances to all training samples
  for (int i = 0; i < N_SAMPLES; i++) {
    g_distances[i] = calc_distance(i, input);
    g_nn_labels[i] = (int)model_knn_labels[i];
  }

  // Partial selection sort — only K passes needed
  for (int i = 0; i < K; i++) {
    for (int j = i + 1; j < N_SAMPLES; j++) {
      if (g_distances[j] < g_distances[i]) {
        float td      = g_distances[i];
        g_distances[i] = g_distances[j];
        g_distances[j] = td;

        int tl        = g_nn_labels[i];
        g_nn_labels[i] = g_nn_labels[j];
        g_nn_labels[j] = tl;
      }
    }
  }

  // Vote among K nearest neighbours
  int votes[4] = {0, 0, 0, 0};
  for (int i = 0; i < K; i++) {
    int lbl = g_nn_labels[i];
    if (lbl >= 0 && lbl < 4) votes[lbl]++;
  }

  // Return class with most votes
  int best = 0;
  for (int i = 1; i < 4; i++) {
    if (votes[i] > votes[best]) best = i;
  }
  return best;
}

void setup() {
  Serial.begin(115200);
  delay(2000);

  Serial.println("=== KNN Inference Test ===\n");

  int correct = 0;
  unsigned long total_time = 0;

  for (int i = 0; i < 8; i++) {
    unsigned long t1 = micros();
    int pred = knn_predict(test_data[i]);
    unsigned long t2 = micros();

    unsigned long elapsed = t2 - t1;
    total_time += elapsed;

    bool ok = (pred == ground_truth[i]);
    if (ok) correct++;

    Serial.printf("Sample %d | Pred: %s | Actual: %s | %s | Time: %lu us\n",
      i + 1,
      class_names[pred],
      class_names[ground_truth[i]],
      ok ? "CORRECT" : "WRONG",
      elapsed);
  }

  Serial.println("\n==== SUMMARY ====");
  Serial.printf("Accuracy: %d%%\n", (correct * 100) / 8);
  Serial.printf("Avg Time: %lu us\n", total_time / 8);
}

void loop() {}
