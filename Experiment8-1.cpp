#include <iostream>
#include <cstring>
using namespace std;

class AddString {
    char str[50];
public:
    void getString() {
        cout << "Enter string: ";
        cin >> str;
    }
    AddString operator + (AddString s) {
        AddString temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }
    void display() {
        cout << "Concatenated string: " << str << endl;
    }
};

int main() {
    AddString s1, s2, s3;
    s1.getString();
    s2.getString();
    s3 = s1 + s2;
    s3.display();
    return 0;
}
