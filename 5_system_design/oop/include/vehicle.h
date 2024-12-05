#ifndef VEHICLE_H
#define VEHICLE_H

struct vehicle;

struct vehicle_vtbl {
  void (*start)(struct vehicle *);
};

struct vehicle {
  const struct vehicle_vtbl *vptr;

  const char *name;
};

// constructor
void vehicle_ctor(struct vehicle *vehicle, const char *name);

// virtual function

static inline void vehicle_start(struct vehicle *vehicle) {
  vehicle->vptr->start(vehicle);
}

#endif  // VEHICLE_H
