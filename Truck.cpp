#include "Truck.h"
#include <string>
Truck::Truck(int wheels, int yearMake, float weight, string color, double licensePlate): Vehicle(wheels, yearMake, weight), color(color), licensePlate(licensePlate){}


string Truck::getColor()const{
    return color;
}

void Truck::setColor(string color){
    this->color = color;
}

double Truck::getLicensePlate()const{
    return licensePlate;
}

void Truck::setLicensePlate(double licensePlate){
    this->licensePlate = licensePlate;
}

void Truck::describeVehicle() const{
    Vehicle::describeVehicle();
    std::cout << "truck ";
    std::cout << "made in the year " << yearMake << ", weighing " << weight << "kilos." <<endl;
    std::cout << "It is " << color << " ,with the license plate " << licensePlate << "DMA." <<endl;
}
