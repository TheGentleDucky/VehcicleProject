#include "Motorcycle.h"
#include <string>
Motorcycle::Motorcycle(int wheels, int yearMake, float weight, string color, double licensePlate): Vehicle(wheels, yearMake, weight), color(color), licensePlate(licensePlate){}


string Motorcycle::getColor()const{
    return color;
}

void Motorcycle::setColor(string color){
    this->color = color;
}

double Motorcycle::getLicensePlate()const{
    return licensePlate;
}

void Motorcycle::setLicensePlate(double licensePlate){
    this->licensePlate = licensePlate;
}

void Motorcycle::describeVehicle() const{
    Vehicle::describeVehicle();
    std::cout << "motorcycle ";
    std::cout << "made in the year " << yearMake << ", weighing " << weight << "kilos." <<endl;
    std::cout << "It is " << color << " ,with the license plate " << licensePlate << "AB" <<endl;
}
