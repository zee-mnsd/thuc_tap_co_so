#include <iostream>
#include "Car.h"
using namespace std;

void Car::accelerate(int speech) {
    if (speech < 20) cout << "My car is Low " << endl;
    else if (speech < 40) cout << "My car is Medium" << endl;
    else cout << "My car is High" << endl;
}