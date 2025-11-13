#include <iostream>
#include <string>
using namespace std;
class City
{
public:
    string cname;
    int popu;
    void accept();
};
void City ::accept()
{

    cout << "Name of City : ";
    cin >> cname;
    cout << "Population : ";
    cin >> popu;
}
int main()
{
    int i, max;
    string maxc;
    City c[5];
    for (i = 0; i < 5; i++)
    {
        c[i].accept();
    }
    max = c[0].popu;
    maxc = c[0].cname;
    for (i = 0; i < 5; i++)
    {
        if (c[i].popu > max)
        {
            max = c[i].popu;
            maxc = c[i].cname;
        }
    }
    cout << "\nCity with Highest Population : \n" << maxc << " : " << max << endl;

    return 0;
}