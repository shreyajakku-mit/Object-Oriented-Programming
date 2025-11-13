#include <iostream>
#include <string.h>
using namespace std;
class Staff
{
public:
    string name, post;
    void accept();
};
void Staff ::accept()
{

    cout << "Name : ";
    getline(cin, name);
    cout << "Post : ";
    getline(cin, post);
}
int main()
{
    int i;
    string HOD = "HOD";
    Staff s[5];
    for (i = 0; i < 5; i++)
    {
        s[i].accept();
    }

    for (i = 0; i < 5; i++)
    {
        if (s[i].post == HOD)
        {
            cout << "\nHead of Department : \n"
                 << "Name : " << s[i].name << "\n"
                 << "Post : " << s[i].post << endl;
        }
    }
    return 0;
}