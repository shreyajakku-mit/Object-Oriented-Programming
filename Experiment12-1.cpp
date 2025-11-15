#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int choice, value;
    do {
        cout << "\nSTACK MENU\n1. Push\n2. Pop\n3. Display Top\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                cout << "Pushed " << value << " onto stack.\n";
                break;
            case 2:
                if (!s.empty()) {
                    cout << "Popped: " << s.top() << " from stack.\n";
                    s.pop();
                } else {
                    cout << "Stack is empty.\n";
                }
                break;
            case 3:
                if (!s.empty())
                    cout << "Top element: " << s.top() << endl;
                else
                    cout << "Stack is empty.\n";
                break;
            case 4:
                cout << "Exit\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 4);
    return 0;
}
