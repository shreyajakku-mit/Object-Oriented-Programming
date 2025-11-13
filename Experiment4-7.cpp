#include <iostream>
using namespace std;

class Number {
    int value;
public:
    Number(int v) { value = v; }
    void show() { cout << value << endl; }
    friend void swapNumbers(Number &, Number &);
};

void swapNumbers(Number &n1, Number &n2) {
    int temp = n1.value;
    n1.value = n2.value;
    n2.value = temp;
}

int main() {
    Number n1(10), n2(20);
    cout << "Before swap: ";
    n1.show(); n2.show();
    swapNumbers(n1, n2);
    cout << "After Swap: ";
    n1.show(); n2.show();
    return 0;
}
