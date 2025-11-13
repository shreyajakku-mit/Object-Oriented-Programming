#include <iostream>
using namespace std;

class Numbers2;

class Numbers1 {
    int num;
public:
    void setNum(int n) { num = n; }
    void display() { cout << "Numbers1: " << num << endl; }
    friend void swap(Numbers1 &, Numbers2 &);
};

class Numbers2 {
    int num;
public:
    void setNum(int n) { num = n; }
    void display() { cout << "Numbers2: " << num << endl; }
    friend void swap(Numbers1 &, Numbers2 &);
};

void swap(Numbers1 &n1, Numbers2 &n2) {
    int temp = n1.num;
    n1.num = n2.num;
    n2.num = temp;
}

int main() {
    Numbers1 n1;
    Numbers2 n2;
    n1.setNum(10);
    n2.setNum(20);
    cout << "Before swap:" << endl;
    n1.display();
    n2.display();
    swap(n1, n2);
    cout << "After swap:" << endl;
    n1.display();
    n2.display();
    return 0;
}
