#include <iostream>
#include <string>
using namespace std;

class college {
public:
    string name, course;
    int roll;
    college() {
        name = "Shreya Jakkulwar";
        roll = 60;
        course = "Computer Engineering";
    }
    void display() {
        cout << "Details" << endl;
        cout << "Name : " << name << endl;
        cout << "Roll no : " << roll << endl;
        cout << "Course : " << course << endl;
    }
};

int main() {
    college c1;
    c1.display();
    return 0;
}
