#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
    void setPerson(string n, int a) { name = n; age = a; }
};

class Student : public Person {
public:
    int rollNo;
    void setStudent(int r) { rollNo = r; }
};

class Academics {
public:
    int marks;
    void setMarks(int m) { marks = m; }
};

class Sports {
public:
    int score;
    void setScore(int s) { score = s; }
};

class Result : public Student, public Academics, public Sports {
public:
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
        cout << "Total = " << (marks + score) << endl;
    }
};

int main() {
    Result r;
    r.setPerson("Shreya", 19);
    r.setStudent(101);
    r.setMarks(80);
    r.setScore(20);
    r.display();
    return 0;
}
