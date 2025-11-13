#include <iostream>
#include <string.h>
using namespace std;
class Book
{
public:
    string book_title, author_name;
    double price;
    void accept();
    void display();
};
void Book ::accept()
{
    cout << "Book Title : ";
    getline(cin, book_title);
    cout << "Author Name : ";
    getline(cin, author_name);
    cout << "Price :";
    cin >> price;
}
void Book ::display()
{
    cout << "Entered Details : " << endl;
    cout << "Book Title : " << book_title << endl;
    cout << "Author Name : " << author_name << endl;
    cout << "Price :" << price;
}
int main()
{
    Book b1;
    Book *p;
    p = &b1;
    p->accept();
    p->display();
    return 0;
}