#include <iostream>
using namespace std;

class Rectangle {
    int l, b;
public:
    Rectangle() { l = 2; b = 3; }
    Rectangle(int a, int B) { l = a; b = B; }
    Rectangle(const Rectangle &r) { l = r.l; b = r.b; }
    int area() { return l * b; }
};

int main() {
    Rectangle r1;
    Rectangle r2(5, 7);
    Rectangle r3(r2);
    cout << r1.area() << endl;
    cout << r2.area() << endl;
    cout << r3.area() << endl;
    return 0;
}
