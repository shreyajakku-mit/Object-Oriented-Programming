#include <iostream>
using namespace std;
class Account
{
public:
    double acc_no, bal;
    void accept();
};
void Account ::accept()
{

    cout << "Account Number : ";
    cin >> acc_no;
    cout << "Balance : ";
    cin >> bal;
}
int main()
{
    int i;
    Account a[10];
    for (i = 0; i < 10; i++)
    {
        a[i].accept();
    }

    for (i = 0; i < 10; i++)
    {
        if (a[i].bal >= 5000)
        {
            a[i].bal = ((a[i].bal * 10) / 100) + a[i].bal;
            cout << "\n10% Salary Incrementation\n"
                 << "Account Number : " << a[i].acc_no << "\n"
                 << "Balance : " << a[i].bal << endl;
        }
    }
    return 0;
}