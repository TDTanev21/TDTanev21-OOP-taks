#include <iostream>
#include <cmath>

using namespace std;

class Point {
private:
    int x, y;

public:

    Point() : x(0), y(0) {}

    Point(int x_val, int y_val) : x(x_val), y(y_val) {}


    float distance() {
        return sqrt(x * x + y * y);
    }


    float distance(int x1, int y1) {
        return sqrt(pow(x1 - x, 2) + pow(y1 - y, 2));
    }
};

int main() {
    int x, y;

    cin >> x;
    cin >> y;

    Point p1 = Point(x, y);

    cout << "p1.distance() => " << p1.distance() << endl;
    cout << "p1.distance(2, 1) => " << p1.distance(2, 1) << endl;

}