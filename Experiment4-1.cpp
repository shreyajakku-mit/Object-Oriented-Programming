#include <iostream>
using namespace std;

class Numbers {
    int num;
public:
    void setNum(int n) { num = n; }
    void swap(Numbers &obj) {  // takes number by reference
        int temp = num;
        num = obj.num;
        obj.num = temp;
    }
    void display() { cout << "Numbers: " << num << endl; }
};

int main() {
    Numbers n1, n2;
    n1.setNum(10);  // set n1 = 10
    n2.setNum(20);  // set n2 = 20
    cout << "Before swap:" << endl;
    n1.display();
    n2.display();
    n1.swap(n2);  // calls swap by reference
    cout << "After swap:" << endl;
    n1.display();
    n2.display();
    return 0;
}
