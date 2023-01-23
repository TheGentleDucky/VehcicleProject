#ifndef CAR_H
#define CAR_H


#include <string>
#include "Vehicle.h"


class Car : public Vehicle{

private:
    string color;
    double licensePlate;

public:
    Car(int wheels, int yearMake, float weight, string color, double licensePlate);
    string getColor() const;
    void setColor(string color);

    double getLicensePlate() const;
    void setLicensePlate(double liscensePlate);

    void describeVehicle() const;

};
#endif // CAR_H
