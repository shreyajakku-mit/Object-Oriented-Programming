#include <iostream>
using namespace std;

class Result1 {
    float marks;
public:
    void readMarks() {
        cout << "Enter marks for Result1: ";
        cin >> marks;
    }
    float getMarks() { return marks; }
};

class Result2 {
    float marks;
public:
    void readMarks() {
        cout << "Enter marks for Result2: ";
        cin >> marks;
    }
    float getMarks() { return marks; }
};

int main() {
    Result1 r1;
    Result2 r2;
    r1.readMarks();
    r2.readMarks();
    float avg = (r1.getMarks() + r2.getMarks()) / 2;
    cout << "Average marks: " << avg << endl;
    return 0;
}
