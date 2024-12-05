#include "vehicle.h"

#include <stdio.h>

static void __vehicle_start(struct vehicle* vehicle);

void vehicle_ctor(struct vehicle* vehicle, const char* name) {
  static const struct vehicle_vtbl vtbl = {
      .start = &__vehicle_start,
  };
  vehicle->vptr = &vtbl;

  vehicle->name = name;
}

static void __vehicle_start(struct vehicle* vehicle) {
  printf("vehicle of name %s started\n", vehicle->name);
}
