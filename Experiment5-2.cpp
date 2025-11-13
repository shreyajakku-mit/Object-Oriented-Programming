#include <iostream>
#include <string>
using namespace std;

class student {
    string name;
    double per;
public:
    student() {
        name = "Shreya Jakkulwar";
        per = 90.0;
    }
    void display() {
        cout << "Details" << endl;
        cout << "Name : " << name << endl;
        cout << "Percentage : " << per << "%" << endl;
    }
};

int main() {
    student s;
    s.display();
    return 0;
}
