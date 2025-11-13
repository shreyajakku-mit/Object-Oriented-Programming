#include <iostream>
using namespace std;
class Expt3
{
public:
    class Expt3_3
    {
    public:
        int a, b;
        void accept()
        {
            cout << "Enter value of a & b : ";
            cin >> a >> b;
        }
        void display()
        {
            cout << "Entered Values : " << a <<" "<< b;
        }
    };
};
int main()
{
    Expt3 ::Expt3_3 e1;
    e1.accept();
    e1.display();
    return 0;
}