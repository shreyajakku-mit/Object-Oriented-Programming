#include <iostream>
using namespace std;

class Beta;
class Gamma;

class Alpha {
    int a;
public:
    Alpha(int x) { a = x; }
    friend void total(Alpha, Beta, Gamma);
};

class Beta {
    int b;
public:
    Beta(int y) { b = y; }
    friend void total(Alpha, Beta, Gamma);
};

class Gamma {
    int c;
public:
    Gamma(int z) { c = z; }
    friend void total(Alpha, Beta, Gamma);
};

void total(Alpha x, Beta y, Gamma z) {
    cout << "sum = " << x.a + y.b + z.c << endl;
}

int main() {
    Alpha a(10);
    Beta b(20);
    Gamma c(30);
    total(a, b, c);
    return 0;
}
