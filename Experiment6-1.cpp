#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    void acceptPerson(string n, int a) {
        name = n;
        age = a;
    }
};

class student : public Person {
public:
    int rollNumber;
    void acceptStudent(string n, int a, int r) {
        acceptPerson(n, a);
        rollNumber = r;
    }
    void display() {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "RollNo : " << rollNumber << endl;
    }
};

int main() {
    student s;
    s.acceptStudent("Shreya", 19, 101);
    s.display();
    return 0;
}
