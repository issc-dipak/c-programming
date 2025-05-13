#include <iostream>
using namespace std;

struct Point {
    int x = 0;
    int y = 0;

    Point(int x_val, int y_val) : x(x_val), y(y_val) {}

    void print() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p(10, 20);
    p.print();

    return 0;
}
