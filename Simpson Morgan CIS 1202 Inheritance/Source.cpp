// Morgan Simpson
// April 22nd, 2024
// CIS 1202 M01

#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <iostream>

int main() {
    std::string manufacturer;
    int yearBuilt, numDoors, towingCapacity;

    std::cout << "Vehicle Program\n\n";

    // Vehicle
    std::cout << "Vehicle:\n";
    std::cout << "Enter the manufacturer: ";
    std::getline(std::cin >> std::ws, manufacturer); // Read entire line for manufacturer
    std::cout << "Enter the year built: ";
    std::cin >> yearBuilt;
    Vehicle vehicle(manufacturer, yearBuilt);

    std::cout << "Vehicle Information:\n";
    std::cout << "Manufacturer: " << vehicle.getManufacturer() << std::endl;
    std::cout << "Year Built: " << vehicle.getYearBuilt() << std::endl << std::endl;


    // Car
    std::cout << "Car:\n";
    std::cout << "Enter the manufacturer: ";
    std::getline(std::cin >> std::ws, manufacturer); // Read entire line for manufacturer
    std::cout << "Enter the year built: ";
    std::cin >> yearBuilt;
    std::cout << "Enter the number of doors: ";
    std::cin >> numDoors;
    Car car(manufacturer, yearBuilt, numDoors);

    std::cout << "Vehicle Information:\n";
    std::cout << "Manufacturer: " << car.getManufacturer() << std::endl;
    std::cout << "Year Built: " << car.getYearBuilt() << std::endl;
    std::cout << "Doors: " << car.getNumDoors() << std::endl << std::endl;

    // Truck
    std::cout << "Truck:\n";
    std::cout << "Enter the manufacturer: ";
    std::getline(std::cin >> std::ws, manufacturer); // Read entire line for manufacturer
    std::cout << "Enter the year built: ";
    std::cin >> yearBuilt;
    std::cout << "Enter the towing capacity: ";
    std::cin >> towingCapacity;
    Truck truck(manufacturer, yearBuilt, towingCapacity);

    std::cout << "Vehicle Information:\n";
    std::cout << "Manufacturer: " << truck.getManufacturer() << std::endl;
    std::cout << "Year Built: " << truck.getYearBuilt() << std::endl;
    std::cout << "Towing Capacity: " << truck.getTowingCapacity() << std::endl;

    return 0;
}