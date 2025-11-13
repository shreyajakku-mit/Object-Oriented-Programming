#include <iostream> 
#include <string.h>
using namespace std;
class Student
{
    int roll_no;
    int cl;
    string name;

public:
    void accept();
    void display();
};
void Student::accept()
{
    cout << "Enter Student Name : ";
    getline(cin, name);
    cout << "Class : ";
    cin >> cl;
    cout << "Roll number : ";
    cin >> roll_no;
}

void Student::display()
{
    cout << "Entered Details :" << endl;
    cout << "Name : " << name << endl;
    cout << "Class : " << cl << endl;
    cout << "Roll no. : " << roll_no << endl;
}

int main()
{
    Student s1;
    s1.accept();
    s1.display();
    return 0;
}