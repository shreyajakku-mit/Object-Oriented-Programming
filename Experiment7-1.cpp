//EXPT 7.1
#include <iostream>
using namespace std;

class Area {
public:
    // function to calculate area of rectangle (lab)
    int findArea(int length, int breadth) {
        return length * breadth;
    }

    // function to calculate area of square (classroom)
    int findArea(int side) {
        return side * side;
    }
};

int main() {
    Area a;
    int l, b, s;

    cout << "Enter length and breadth of laboratory: ";
    cin >> l >> b;

    cout << "Enter side of classroom: ";
    cin >> s;

    cout << "\nArea of Laboratory = " << a.findArea(l, b) << endl;
    cout << "Area of Classroom = " << a.findArea(s) << endl;

    return 0;
}