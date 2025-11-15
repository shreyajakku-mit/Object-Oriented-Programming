#include <iostream>
using namespace std;

template <class T>
class Vector {
    T v[10];
    int size;
public:
    void create() {
        cout << "Enter size of vector: ";
        cin >> size;
        cout << "Enter elements: ";
        for (int i = 0; i < size; i++)
            cin >> v[i];
    }
    void modify(int index, T value) {
        if (index >= 0 && index < size)
            v[index] = value;
        else
            cout << "Invalid index" << endl;
    }
    void multiply(T scalar) {
        for (int i = 0; i < size; i++)
            v[i] *= scalar;
    }
    void display() {
        cout << "(";
        for (int i = 0; i < size; i++) {
            cout << v[i];
            if (i != size - 1) cout << ", ";
        }
        cout << ")" << endl;
    }
};

int main() {
    Vector<int> vec;
    vec.create();
    cout << "\nOriginal vector: ";
    vec.display();
    int index, newValue;
    cout << "Enter index to modify (starting from 0): ";
    cin >> index;
    cout << "Enter new value: ";
    cin >> newValue;
    vec.modify(index, newValue);
    cout << "\nVector after modification: ";
    vec.display();
    int scalar;
    cout << "Enter scalar value to multiply: ";
    cin >> scalar;
    vec.multiply(scalar);
    cout << "\nVector after multiplication: ";
    vec.display();
    return 0;
}
