#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter Number of Rows : ";
    cin >> n;
    for (i = 1; i <= n; i++) // for number of rows
    {
        for (j = 1; j <= i; j++) // for number of columns (to obtian pattern)
        {
            cout << " " << j; // to print the value of 'j' after every ittretion
        }
        cout << "\n";
    }
    return 0;
}