#ifndef VEHICLE_H_INCLUDED
#define VEHICLE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Vehicle{

protected:
    int wheels;
    int yearMake;
    float weight;

public:
    Vehicle(int wheels, int yearMake, float weight);
    int getWheels() const;
    void setWheels(int wheels);

    int getYearMake() const;
    void setYearMake(int year);

    float getWeight() const;
    void setWeight(float weight);

    void describeVehicle() const;

};


#endif // VEHICLE_H

