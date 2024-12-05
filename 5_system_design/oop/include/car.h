#ifndef CAR_H
#define CAR_H

#include "vehicle.h"

struct car {
  struct vehicle super;

  const char *brand;
};

// constructor
void car_ctor(struct car *car, const char *name, const char *brand);

#endif  // CAR_H
