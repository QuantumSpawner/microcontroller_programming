#include <iostream>
#include <string>

class Vehicle {
 public:
  Vehicle(const std::string name) : name_(name) {}

  virtual void start() {
    std::cout << "vehicle of name " << name_ << " started" << std::endl;
  }

  std::string name_;
};

class Car : public Vehicle {
 public:
  Car(const std::string name, const std::string brand)
      : Vehicle(name), brand_(brand) {}

  void start() override {
    std::cout << "car of name " << name_ << " with brand " << brand_
              << " started" << std::endl;
  }

  std::string brand_;
};

int main() {
  Vehicle vehicle("vehicle");
  Car car("car", "Toyota");

  Vehicle* v1 = &vehicle;
  Vehicle* v2 = &car;

  v1->start();
  v2->start();

  return 0;
}
