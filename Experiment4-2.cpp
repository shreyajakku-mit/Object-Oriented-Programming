#include <iostream>
using namespace std;

class Number {
    int num;
public:
    void setNum(int n) { num = n; }
    void display() { cout << "Numbers: " << num << endl; }
    friend void swap(Number &n1, Number &n2);
};

void swap(Number &n1, Number &n2) {
    int temp = n1.num;
    n1.num = n2.num;
    n2.num = temp;
}

int main() {
    Number n1, n2;
    n1.setNum(10);
    n2.setNum(20);
    cout << "Before Swap:" << endl;
    n1.display();
    n2.display();
    swap(n1, n2);
    cout << "After Swap:" << endl;
    n1.display();
    n2.display();
    return 0;
}
