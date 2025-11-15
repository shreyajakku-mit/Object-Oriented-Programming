#include <iostream> //input output stream
using namespace std;
int main()
{
    char ope; // variables for operators
    double a, b, c;
    cout << "Enter Opertaor (+ - * /): ";
    cin >> ope;
    cout << "Enter First Number : ";
    cin >> a;
    cout << "Enter Second Number : ";
    cin >> b;
    switch (ope) // switch logic for arithmetic operations
    {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b;
        break;
    case '/':
        if (b != 0) // since zero cannot be divided by any number
        {
            cout << a << " / " << b << " = " << a / b;
            break;
        }
        else
        {
            cout << "Number cannot be divided by zero";
            break;
        }
    default: // if any unkown opertor is used error will be diplayed
        cout << "Error !";
    }
    return 0;
}