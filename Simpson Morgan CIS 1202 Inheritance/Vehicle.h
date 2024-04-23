#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
public:
    Vehicle(std::string manufacturer, int yearBuilt);
    std::string getManufacturer() const;
    int getYearBuilt() const;
    virtual void displayInfo() const;

private:
    std::string manufacturer;
    int yearBuilt;
};

#endif