#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r = 0, int i = 0) { real = r; imag = i; }
    void show() { cout << real << " + " << imag << "i\n"; }
    friend Complex add(Complex, Complex);
};

Complex add(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

int main() {
    Complex c1(2, 3), c2(4, 5), c3;
    c3 = add(c1, c2);
    cout << "Result : "; c3.show();
    return 0;
}
