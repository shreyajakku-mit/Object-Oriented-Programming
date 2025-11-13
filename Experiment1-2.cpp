#include <iostream>
#include <string.h>
using namespace std;
class Book
{
public:
    string book_name;
    double price;
    int no_of_pages;
    void accept();
    void display();
};
void Book ::accept()
{
    cout << "\nName of Book :";
    getline(cin, book_name);
    cout << "Price : ";
    cin >> price;
    cout << "Number of Pages : ";
    cin >> no_of_pages;
    cin.ignore();
}
void Book ::display()
{
    cout << "\nEntered Details :" << endl;
    cout << "Book :" << book_name << endl;
    cout << "Price : " << price << endl;
    cout << "Pages : " << no_of_pages <<"\n"<<endl;
}
int main()
{
    Book b1, b2;
    b1.accept();
    b2.accept();
    b1.display();
    b2.display();
    if (b1.price < b2.price)
    {
        cout << "\nBook with Higher price :" << "\n"
             << b2.book_name << "\n"
             << b2.price << endl;
    }
    else
    {
        cout << "Book with Higher price :" << "\n"
             << b1.book_name << "\n"
             << b1.price << endl;
    }
    return 0;
}