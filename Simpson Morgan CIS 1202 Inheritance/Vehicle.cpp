#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(std::string manufacturer, int yearBuilt)
    : manufacturer(manufacturer), yearBuilt(yearBuilt) {}

std::string Vehicle::getManufacturer() const {
    return manufacturer;
}

int Vehicle::getYearBuilt() const {
    return yearBuilt;
}

void Vehicle::displayInfo() const {
    std::cout << "Manufacturer: " << manufacturer << ", Year Built: " << yearBuilt << std::endl;
}