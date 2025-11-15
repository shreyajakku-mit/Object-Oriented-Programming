#include <iostream>
#include <string>
using namespace std;

class TLogin {
protected:
    string name, password;
public:
    virtual void accept() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Password: ";
        cin >> password;
    }
    virtual void display() {
        cout << "Name: " << name << "\nPassword: " << password << endl;
    }
};

class EmailLogin : public TLogin {
    string email;
public:
    void accept() {
        cout << "\nEmail Login\n";
        TLogin::accept();
        cout << "Enter Email ID: ";
        cin >> email;
    }
    void display() {
        cout << "\nEmail Details\n";
        cout << "Name: " << name << "\nEmail: " << email << endl;
    }
};

class MembershipLogin : public TLogin {
    string memberID;
public:
    void accept() {
        cout << "\nMembership Login\n";
        TLogin::accept();
        cout << "Enter Membership ID: ";
        cin >> memberID;
    }
    void display() {
        cout << "\nMembership Login Details\n";
        cout << "Name: " << name << "\nMembership ID: " << memberID << endl;
    }
};

int main() {
    TLogin *ptr;
    EmailLogin e;
    MembershipLogin m;
    ptr = &e;
    ptr->accept();
    ptr->display();
    ptr = &m;
    ptr->accept();
    ptr->display();
    return 0;
}
