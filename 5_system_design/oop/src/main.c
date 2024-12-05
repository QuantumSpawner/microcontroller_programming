#include "car.h"
#include "vehicle.h"

int main() {
  struct vehicle vehicle;
  vehicle_ctor(&vehicle, "vehicle");

  struct car car;
  car_ctor(&car, "car", "Toyota");

  struct vehicle *v1 = &vehicle, *v2 = &car.super;

  vehicle_start(v1);
  vehicle_start(v2);

  return 0;
}
