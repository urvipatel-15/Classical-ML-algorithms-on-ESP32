# Classical-ML-algorithms-on-ESP32
Specifically for the Paper A Comparative Study of Classical ML Classifiers on ESP32 Using DHT22 and PIR Sensors for Environmental State Classification

## 1. Project Overview

This repository contains the implementation and experimental resources for the research study *A Comparative Study of Classical ML Classifiers on ESP32 Using DHT22 and PIR Sensors for Environmental State Classification*.

The project evaluates four classical machine learning algorithms deployed on an ESP32 microcontroller to classify environmental conditions using temperature, humidity, and motion data.

The evaluated classifiers are:
- Decision Tree
- Random Forest
- K-Nearest Neighbors (KNN)
- Gaussian Naïve Bayes

The models are compared based on classification accuracy, inference latency, memory consumption, and estimated energy per inference.

## 2. Hardware Requirements

| Component | Description |
|---|---|
| Microcontroller | ESP32-WROOM-32 |
| Temperature and humidity sensor | DHT22 |
| Motion sensor | PIR |
| Development environment | Arduino IDE |

## 3. Environmental Classes

The system classifies sensor readings into four environmental states:

| Class | Description |
|---|---|
| Normal & Empty | Normal environmental conditions with no detected motion |
| Normal & Occupied | Normal environmental conditions with detected motion |
| Hot & Humid | Elevated temperature and humidity conditions |
| Cool & Dry | Relatively lower temperature and dry environmental conditions |

The input features consist of temperature, relative humidity, and PIR motion status.

## 4. Dataset

The experimental dataset contains 1,000 sensor readings, with 250 samples per class.

- Sampling interval: 2 seconds
- Input features: Temperature, humidity, and PIR status
- Train-test split: 80:20 using stratified sampling
- Cross-validation: Stratified 5-fold cross-validation
- Random state: 42

The dataset was collected using physical DHT22 and PIR sensors under controlled indoor conditions.

**Dataset file:** `dataset/` (add the actual dataset filename and location here).

## 5. Machine Learning Models

The following classifiers were trained and evaluated:

| Algorithm | Configuration |
|---|---|
| Decision Tree | Maximum depth: 5 |
| Random Forest | 10 estimators, maximum depth: 5 |
| KNN | k = 3, Euclidean distance, uniform weights |
| Gaussian Naïve Bayes | Default configuration |

## 6. Model Deployment

The trained models were converted into embedded C implementations for deployment on the ESP32.

- Decision Tree and Random Forest: m2cgen
- KNN: emlearn
- Gaussian Naïve Bayes: Manually implemented

The firmware reads sensor data, performs classification, and records inference execution time on the ESP32.

## 7. Experimental Results

| Classifier | Test Accuracy | Inference Latency |
|---|---:|---:|
| Decision Tree | 96.50% | 2 µs |
| Random Forest | 95.50% | 27 µs |
| Gaussian Naïve Bayes | 90.50% | 156 µs |
| KNN | 97.00% | 751 µs |

KNN achieved the highest test accuracy, while Decision Tree provided the lowest inference latency.

**Note:** Energy values reported in the paper are estimates based on an assumed ESP32 current consumption of 68 mA at 3.3 V. They are not direct energy measurements.

## 8. Software Requirements

- Python 3.13.18
- scikit-learn 1.6.1
- pandas 2.2.3
- NumPy 2.4.6
- Arduino IDE 2.3.11
- m2cgen 0.10.0
- emlearn 0.23.2

## 9. Reproducing the Experiments

1. Clone this repository.
2. Install the required Python dependencies.
3. Load the dataset and execute the model training and evaluation scripts.
5. Convert the trained models into embedded C implementations.
6. Open the ESP32 firmware in Arduino IDE.
7. Connect the DHT22 andConnect the DHT22 and PIR sensors to the configured GPIO pins.
8. Upload the firmware to the ESP32.
9. Open the Serial Monitor to observe predictions and inference timings.
