#include <math.h>

#define N_CLASSES 4
#define N_FEATURES 3

// ---- Model Parameters ----
const float nb_theta[N_CLASSES][N_FEATURES] = {
  {31.0517, 57.1344, 0.0},
  {31.3829, 58.0642, 0.325},
  {35.10495, 80.7940, 0.09},
  {28.23315, 61.92535, 0.33}
};

const float nb_var[N_CLASSES][N_FEATURES] = {
  {0.0202832567, 0.1025527867, 1.467115e-07},
  {0.0928157367, 0.9881305067, 0.2193751467},
  {2.5378161442, 194.4788761, 0.0819001467},
  {0.3797297242, 19.48328202, 0.2211001467}
};

const float nb_prior[N_CLASSES] = {
  -1.38629436, -1.38629436, -1.38629436, -1.38629436
};

// ---- Log Gaussian ----
float log_gaussian(float x, float mean, float var) {
  return -0.5 * log(2 * 3.1415926 * var)
         - ((x - mean) * (x - mean)) / (2 * var);
}

// ---- Prediction ----
int nb_predict(float input[N_FEATURES]) {
  float best_score = -1e30;
  int best_class = 0;

  for (int c = 0; c < N_CLASSES; c++) {
    float score = nb_prior[c];

    for (int f = 0; f < N_FEATURES; f++) {
      score += log_gaussian(input[f], nb_theta[c][f], nb_var[c][f]);
    }

    if (score > best_score) {
      best_score = score;
      best_class = c;
    }
  }

  return best_class;
}

// ---- Arduino Setup ----
void setup() {
  Serial.begin(115200);
  delay(2000);
}

// ---- Loop ----
void loop() {

  // STATIC INPUT (for fair benchmarking)
  float input[3] = {30.5, 58.0, 1.0};

  unsigned long t_start = micros();

  int result = nb_predict(input);

  unsigned long t_end = micros();

  Serial.print("Class: ");
  Serial.print(result);
  Serial.print(" | Time: ");
  Serial.print(t_end - t_start);
  Serial.println(" us");

  delay(3000);
}