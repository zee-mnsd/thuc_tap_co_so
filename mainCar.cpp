#include <iostream>
#include "Car.h"
using namespace std;

int main() {
    Car *MyCar = new Car();
    MyCar->Brand = Tesla;
    MyCar->Model = A6;
    MyCar->Speed = High;

    cout << "The brand of my car is: " << MyCar->Brand << endl;
    cout << "The model of my car is: " << MyCar->Model << endl;
    cout << "The speed of my car is: " << MyCar->Speed << endl;
    MyCar->accelerate(60);
    delete MyCar;
    return 0;
}
