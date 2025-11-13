#include <iostream>
#include <cmath>
using namespace std;

class Point {
    int x, y;
public:
    Point(int a, int b) { x = a; y = b; }
    friend float distance(Point, Point);
};

float distance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    Point p1(2, 3), p2(5, 7);
    cout << "Distance = " << distance(p1, p2);
    return 0;
}
