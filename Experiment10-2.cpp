#include <iostream>
#include <string>
using namespace std;

template <class T>
class Square {
    T x;
public:
    Square(T val) : x(val) { }
    T getSquare() { return x * x; }
};

template <>
class Square<string> {
    string x;
public:
    Square(string val) : x(val) { }
    string getSquare() { return x + x; }
};

int main() {
    Square<int> sq1(5);
    Square<string> sq2("Hello");
    cout << "Square of integers: " << sq1.getSquare() << endl;
    cout << "Square of string: " << sq2.getSquare() << endl;
    return 0;
}
