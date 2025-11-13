#include <iostream>
using namespace std;

class Sum {
public:
    // function to add 5 float values using array
    float add(float arr[5]) {
        float total=0;
        for(int i = 0; i < 5; i++) {
            total += arr[i];
        }
        return total;
    }

    // function to add 10 integer values using array
    int add(int arr[10]) {
        int total=0;
        for(int i = 0; i < 10; i++) {
            total += arr[i];
        }
        return total;
    }
};

int main() {
    Sum s;
    float f[5];
    int i[10];

    cout << "Enter 5 float values: ";
    for(int j = 0; j < 5; j++) {
        cin >> f[j];
    }

    cout << "Sum of 5 float values = " << s.add(f) << endl;

    cout << "\nEnter 10 integer values: ";
    for(int j = 0; j < 10; j++) {
        cin >> i[j];
    }

    cout << "Sum of 10 integer values = " << s.add(i) << endl;

    return 0;
}