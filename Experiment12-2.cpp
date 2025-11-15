#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    int choice, value;
    do {
        cout << "\nQUEUE MENU\n1. Enqueue\n2. Dequeue\n3. Display Front\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.push(value);
                cout << "Enqueued " << value << " into queue.\n";
                break;
            case 2:
                if (!q.empty()) {
                    cout << "Dequeued " << q.front() << " from queue.\n";
                    q.pop();
                } else {
                    cout << "Queue is empty.\n";
                }
                break;
            case 3:
                if (!q.empty())
                    cout << "Front element: " << q.front() << endl;
                else
                    cout << "Queue is empty.\n";
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
