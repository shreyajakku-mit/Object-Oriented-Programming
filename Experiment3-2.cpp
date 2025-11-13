#include <iostream>
using namespace std;
class Student
{
public:
    int roll_no, per;
    void accept();
    void display();
};
void Student ::accept()
{
    cout << "Roll.no : ";
    cin >> this->roll_no;
    cout << "Percentage : ";
    cin >> this->per;
}
void Student ::display()
{
    this->accept();
    cout << "Entered Details : " << endl;
    cout << "Roll.no : " << this->roll_no << endl;
    cout << "Percentage : " << this->per <<" %";
}
int main()
{
    Student s1;
    s1.display();
    return 0;
}