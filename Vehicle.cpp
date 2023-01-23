#include "Vehicle.h"
#include <string>

Vehicle::Vehicle(int wheels, int yearMake, float weight): wheels(wheels), yearMake(yearMake), weight(weight){}
int Vehicle::getWheels() const{
    return wheels;
}

void Vehicle::setWheels(int wheels){
    this->wheels = wheels;
}

int Vehicle::getYearMake() const{
    return yearMake;
}

void Vehicle::setYearMake(int year){
    this->yearMake = year;
}


float Vehicle::getWeight() const{
    return weight;
}

void Vehicle::setWeight(float weight){
    this->weight = weight;
}
void Vehicle::describeVehicle() const{
    std::cout << "This is a ";
}

