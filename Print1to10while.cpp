#include <iostream>
using namespace std;

int main()
{
    int a[20], i;
    cout << "Print Numbers 1 to 10" << endl;
    i = 0;
    while (i < 10)
    {
        cout << "Number " << i << " : " << i + 1 << endl;
        i++;
    }
    return 0;
}