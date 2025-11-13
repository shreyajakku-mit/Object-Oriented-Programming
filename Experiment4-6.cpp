#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA {
    int numA;
public:
    ClassA(int x) { numA = x; }
    friend int sum(ClassA, ClassB);
};

class ClassB {
    int numB;
public:
    ClassB(int y) { numB = y; }
    friend int sum(ClassA, ClassB);
};

int sum(ClassA a, ClassB b) {
    return a.numA + b.numB;
}

int main() {
    ClassA objA(5);
    ClassB objB(7);
    cout << "sum = " << sum(objA, objB) << endl;
    return 0;
}
