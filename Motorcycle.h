#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include <string>
#include "Vehicle.h"


class Motorcycle : public Vehicle{

private:
    string color;
    double licensePlate;

public:
    Motorcycle(int wheels, int yearMake, float weight, string color, double licensePlate);

    string getColor() const;
    void setColor(string color);

    double getLicensePlate() const;
    void setLicensePlate(double liscensePlate);

    void describeVehicle() const;

};
#endif // MOTORCYCLE_H




