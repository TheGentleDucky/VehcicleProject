#include "Motorcycle.h"
#include "Car.h"
#include "Truck.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter the parameters for a vehicle: number of wheels and weight." <<endl;
    int wheels = 0;
    float weight = 0.0f;
    cin >> wheels;
    cin >> weight;

    if (wheels == 2 && weight <= 50){
        Motorcycle *m1 = new Motorcycle(wheels, 1985, weight, "black", 395032);
        m1->describeVehicle();
        delete m1;
    }

    else if (wheels == 4 && weight <= 150){
        Car *c1 = new Car(wheels, 2000, weight, "red", 0765);
        c1->describeVehicle();
        delete c1;
    }

    else if (wheels > 4 && weight >= 150){
        Truck *t1 = new Truck(wheels, 2001, weight, " blue", 18034);
        t1->describeVehicle ();
        delete t1;
    }
    else {
        cout << "These parameters are not possible. Maybe look for a repair shop?" << endl;
    }
    cout << endl;
    cout << "---------------" <<endl;

    return 0;
}
