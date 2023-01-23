#include "Car.h"
#include <string>
Car::Car(int wheels, int yearMake, float weight, string color, double licensePlate): Vehicle(wheels, yearMake, weight), color(color), licensePlate(licensePlate){}


string Car::getColor()const{
    return color;
}

void Car::setColor(string color){
    this->color = color;
}

double Car::getLicensePlate()const{
    return licensePlate;
}

void Car::setLicensePlate(double licensePlate){
    this->licensePlate = licensePlate;
}

void Car::describeVehicle() const{
    Vehicle::describeVehicle();
    std::cout << "car ";
    std::cout << "made in the year " << yearMake << ", weighing " << weight << "kilos." <<endl;
    std::cout << "It is " << color << " ,with the license plate " << licensePlate << "MAD" <<endl;

}
