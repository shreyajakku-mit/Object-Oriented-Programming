#include <iostream>
using namespace std;

class Number {
    int value;
public:
    // constructor
    Number(int v = 0) {
        value = v;
    }

    // function to display value
    void show() {
        cout<< value << endl;
    }

    // unary operator overloading
    void operator- () {
        value = -value;
    }
};

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    Number n(x);

    cout << "\nBefore negation: ";
    n.show();

    -n;  // applying overloaded unary operator

    cout << "After negation: ";
    n.show();

    return 0;
}