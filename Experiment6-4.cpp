#include <iostream>
using namespace std;

class Employee {
public:
    int empID;
    string name;
    void setEmployee(int id, string n) {
        empID = id;
        name = n;
    }
};

class Manager : public Employee {
public:
    string department;
    void setManager(string dept) { department = dept; }
    void display() {
        cout << "Managers ID: " << empID << endl;
        cout << "Department: " << department << endl;
        cout << "Name: " << name << endl;
    }
};

class Developer : public Employee {
public:
    string programming_language;
    void setDeveloper(string lang) { programming_language = lang; }
    void display() {
        cout << "Developers ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Language: " << programming_language << endl;
    }
};

int main() {
    Manager m;
    m.setEmployee(1, "Ravi");
    m.setManager("HR");
    m.display();

    Developer d;
    d.setEmployee(2, "Anita");
    d.setDeveloper("C++");
    d.display();
    return 0;
}
