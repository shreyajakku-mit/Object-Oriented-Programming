#include <iostream>
using namespace std;
int main()
{
    int i, j, s;
    for (i = 1; i <= 3; i++) //for number of rows
    {
        for (s = 0; s <= 3 - i; s++) //for number of spaces to form a pyramid
        {
            cout << " ";
        }
        for (j = 1; j <= i; j++) //for number of columns and to print *
        {
            cout << "* ";
        }
        cout << "\n"; //next line
    }
    return 0;//code executed successfully
}