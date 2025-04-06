#include <iostream>
using namespace std;

struct Car {
    string brand;
    int year;

    // Constructor
    Car(string b, int y) {
        brand = b;
        year = y;
    }

    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car myCar("Toyota", 2022);
    myCar.display();

    return 0;
}
