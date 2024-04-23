#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
public:
    Car(std::string manufacturer, int yearBuilt, int numDoors);
    int getNumDoors() const;
    void displayInfo() const override;

private:
    int numDoors;
};

#endif