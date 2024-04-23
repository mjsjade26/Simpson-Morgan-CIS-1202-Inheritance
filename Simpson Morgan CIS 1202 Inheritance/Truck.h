#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
public:
    Truck(std::string manufacturer, int yearBuilt, int towingCapacity);
    int getTowingCapacity() const;
    void displayInfo() const override;

private:
    int towingCapacity;
};

#endif