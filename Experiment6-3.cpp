#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand, model;
    void setVehicle(string b, string m) {
        brand = b;
        model = m;
    }
};

class Car : public Vehicle {
public:
    string type;
    void setCar(string t) { type = t; }
};

class ElectricCar : public Car {
public:
    int batteryCapacity;
    void setElectric(int bc) { batteryCapacity = bc; }
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Type: " << type << endl;
        cout << "Battery capacity: " << batteryCapacity << " kWh" << endl;
    }
};

int main() {
    ElectricCar e;
    e.setVehicle("Tesla", "Model S");
    e.setCar("Sedan");
    e.setElectric(100);
    e.display();
    return 0;
}
