#include <iostream>
using namespace std;

// Virtual base class
class collegeStudent {
protected:
    int student_id;
    string college_code;
public:
    void getStudentData() {
        cout << "Enter Student ID: ";
        cin >> student_id;
        cout << "Enter College code: ";
        cin >> college_code;
    }
    void showStudentData() {
        cout << "Student ID: " << student_id << endl;
        cout << "College code: " << college_code << endl;
    }
};

class Test : virtual public collegeStudent {
protected:
    float percentage;
public:
    void getTestData() {
        cout << "Enter Percentage: ";
        cin >> percentage;
    }
    void showTestData() {
        cout << "Percentage: " << percentage << endl;
    }
};

class Sports : virtual public collegeStudent {
protected:
    char grade;
public:
    void getSportsData() {
        cout << "Enter Sports Grade (A/B/C): ";
        cin >> grade;
    }
    void showSportsData() {
        cout << "Sports Grade: " << grade << endl;
    }
};

class Result : public Test, public Sports {
public:
    void getData() {
        getStudentData();
        getTestData();
        getSportsData();
    }
    void showData() {
        showStudentData();
        showTestData();
        showSportsData();
    }
};

int main() {
    Result r;
    r.getData();
    r.showData();
    return 0;
}
