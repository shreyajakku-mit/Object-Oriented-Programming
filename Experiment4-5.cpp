#include <iostream>
using namespace std;

class Num2; // Forward declaration

class Num1 {
    int num;
public:
    void setNum(int n) { num = n; }
    friend int findGreatest(Num1, Num2);
};

class Num2 {
    int num;
public:
    void setNum(int n) { num = n; }
    friend int findGreatest(Num1, Num2);
};

int findGreatest(Num1 n1, Num2 n2) {
    if (n1.num > n2.num)
        return n1.num;
    else
        return n2.num;
}

int main() {
    Num1 n1;
    Num2 n2;
    n1.setNum(20);
    n2.setNum(10);
    cout << "Greatest numbers: " << findGreatest(n1, n2) << endl;
    return 0;
}
