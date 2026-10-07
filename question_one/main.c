#include <math.h>
#include <stdio.h>

float temperature;
float turbidity;

void collectSensorData() {

  printf("Temperature: ");
  scanf("%f", &temperature);
  printf("Turbidity: ");
  scanf("%f", &turbidity);
}

float calculateTemperatureDeviation(float temperature) {
  return fabs(temperature - 25);
}

float calculateTurbidityPenalty(float turbidity) { return turbidity / 2; }

float calculateIndex(float temperatureDeviation, float turbidityPenalty) {
  float index;

  index = 100 - (temperatureDeviation + turbidityPenalty);

  return index;
}

void displayIndex(float index) {
  if (index >= 80) {
    printf("Good\n");
  } else if (index >= 60) {
    printf("Warning\n");
  } else {
    printf("Critical\n");
  }
}

int main() {

  collectSensorData();
  float temperatureDeviation = calculateTemperatureDeviation(temperature);
  float turbidityPenalty = calculateTurbidityPenalty(turbidity);
  float index = calculateIndex(temperatureDeviation, turbidityPenalty);

  printf("========================================\n");
  printf("Temperature: %.2f\n", temperature);
  printf("Turbidity %.2f\n", turbidity);
  printf("Calculated Index: %.2f\n", index);
  printf("Water-quality status: ");
  displayIndex(index);
  printf("========================================\n");

  return 0;
}
