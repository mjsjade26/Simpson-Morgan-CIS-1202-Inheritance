#include "Car.h"
#include <iostream>

Car::Car(std::string manufacturer, int yearBuilt, int numDoors)
    : Vehicle(manufacturer, yearBuilt), numDoors(numDoors) {}

int Car::getNumDoors() const {
    return numDoors;
}

void Car::displayInfo() const {
    Vehicle::displayInfo();
    std::cout << "Number of doors: " << numDoors << std::endl;
}