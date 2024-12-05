#include "car.h"

#include <stdio.h>

#include "container_of.h"

static void __car_start(struct vehicle* vehicle);

void car_ctor(struct car* car, const char* name, const char* brand) {
  static const struct vehicle_vtbl vtbl = {
      .start = &__car_start,
  };

  vehicle_ctor(&car->super, name);

  // override vehicle's vptr
  car->super.vptr = &vtbl;

  car->brand = brand;
}

static void __car_start(struct vehicle* vehicle) {
  struct car* car = container_of(vehicle, struct car, super);

  printf("car of name %s with brand %s started\n", car->super.name, car->brand);
}
