#include <iostream>
#include <string>
using namespace std;
class Vehicle {
public:
    string make;
    string model;
    int year;
};


class Car : public Vehicle {
public:
    int seatingCapacity;
    string fuelType;
};


class Truck : public Vehicle {
public:
    double payloadCapacity;
    double towingCapacity;
};

int main() {
    Car myCar;
    myCar.make = "Toyota";
    myCar.model = "Camry";
    myCar.year = 2020;
    myCar.seatingCapacity = 5;
    myCar.fuelType = "Gasoline";

    Truck myTruck;
    myTruck.make = "Ford";
    myTruck.model = "F-150";
    myTruck.year = 2019;
    myTruck.payloadCapacity = 3270;
    myTruck.towingCapacity = 13000;

    cout << "Car: " << myCar.make << " " << myCar.model << " (" << myCar.year << ")\n";
    cout << "Seating Capacity: " << myCar.seatingCapacity << ", Fuel Type: " << myCar.fuelType << std::endl;

    cout << "Truck: " << myTruck.make << " " << myTruck.model << " (" << myTruck.year << ")\n";
    cout << "Payload Capacity: " << myTruck.payloadCapacity << " lbs, Towing Capacity: " << myTruck.towingCapacity << " lbs" << std::endl;

    return 0;
}
