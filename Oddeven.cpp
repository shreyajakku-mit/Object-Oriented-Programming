#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a Number : ";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "Number is Even" << endl;
    }
    else
    {
        cout << "Number is odd" << endl;
    }
    return 0;
}