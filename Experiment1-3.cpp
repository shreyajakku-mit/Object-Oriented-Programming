#include <iostream>
using namespace std;
class Time
{
    int H, M, S;

public:
    void accept();
    void display();
};
void Time::accept()
{
    cout << "\nEnter Time :";
    cin >> H >> M >> S;
}
void Time::display()
{
    int total;
    total = ((H * 3600) + (M * 60) + (S));
    cout << "\nTime in Seconds : " << total << endl;
}
int main()
{
    Time t1;
    t1.accept();
    t1.display();
    return 0;
}
