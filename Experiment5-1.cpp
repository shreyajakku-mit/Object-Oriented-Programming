#include <iostream>
using namespace std;

class Sum {
    int n, total;
public:
    Sum(int num) {
        n = num;
        total = 0;
        for(int i = 1; i <= n; i++)
            total += i;
    }
    void display() {
        cout << "Sum of numbers from 1 to " << n << " = " << total << endl;
    }
};

int main() {
    int x;
    cout << "Enter the value of n: ";
    cin >> x;
    Sum s(x);
    s.display();
    return 0;
}
