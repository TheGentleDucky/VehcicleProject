#ifndef TRUCK_H
#define TRUCK_H


#include <string>
#include "Vehicle.h"


class Truck : public Vehicle{

private:
    string color;
    double licensePlate;

public:
    Truck(int wheels, int yearMake, float weight, string color, double licensePlate);

    string getColor() const;
    void setColor(string color);

    double getLicensePlate() const;
    void setLicensePlate(double liscensePlate);

    void describeVehicle() const;


};
#endif // CAR_H
