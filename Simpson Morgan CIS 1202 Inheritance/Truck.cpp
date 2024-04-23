#include "Truck.h"
#include <iostream>

Truck::Truck(std::string manufacturer, int yearBuilt, int towingCapacity)
    : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}

int Truck::getTowingCapacity() const {
    return towingCapacity;
}

void Truck::displayInfo() const {
    Vehicle::displayInfo();
    std::cout << "Towing capacity: " << towingCapacity << std::endl;
}