#include <iostream>
using namespace std;

template <class T>
class Calculator {
    T a, b;
public:
    Calculator(T x, T y) : a(x), b(y) { }
    T add() { return a + b; }
    T subtract() { return a - b; }
    T multiply() { return a * b; }
    double divide() { return (b != 0) ? (double)a / b : 0; }
};

int main() {
    Calculator<int> calc(10, 2);
    cout << "Add: " << calc.add() << endl;
    cout << "Subtract: " << calc.subtract() << endl;
    cout << "Multiply: " << calc.multiply() << endl;
    cout << "Divide: " << calc.divide() << endl;
    return 0;
}
