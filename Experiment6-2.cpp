#include <iostream>
using namespace std;

class Academic {
public:
    int marks;
    void setMarks(int m) { marks = m; }
};

class Sports {
public:
    int score;
    void setScore(int s) { score = s; }
};

class Result : public Academic, public Sports {
public:
    void displayResult() {
        int total = marks + score;
        cout << "Academic Marks: " << marks << endl;
        cout << "Sports Score: " << score << endl;
        cout << "Total = " << total << endl;
    }
};

int main() {
    Result r;
    r.setMarks(85);
    r.setScore(15);
    r.displayResult();
    return 0;
}
