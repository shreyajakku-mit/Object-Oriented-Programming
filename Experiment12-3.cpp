#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Item {
public:
    int code;
    string name;
    int qty;
    float cost;
    void getData() {
        cout << "\nEnter Item Code: ";
        cin >> code;
        cout << "Enter Item Name: ";
        cin >> name;
        cout << "Enter Quantity: ";
        cin >> qty;
        cout << "Enter Cost: ";
        cin >> cost;
    }
    void display() const {
        cout << code << "\t" << name << "\t" << qty << "\t" << cost << endl;
    }
};

// Sort by cost
bool compareByCost(const Item &a, const Item &b) {
    return a.cost < b.cost;
}

int main() {
    vector<Item> items;
    int n;
    cout << "Enter number of items: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        Item temp;
        temp.getData();
        items.push_back(temp);
    }
    cout << "\nDisplaying items...\n";
    for (int i = 0; i < n; i++)
        items[i].display();

    sort(items.begin(), items.end(), compareByCost);
    cout << "\nItems sorted by cost:\n";
    for (int i = 0; i < n; i++)
        items[i].display();

    int searchCode;
    cout << "\nEnter item code to search: ";
    cin >> searchCode;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (items[i].code == searchCode) {
            cout << "Item Found: ";
            items[i].display();
            found = true;
            break;
        }
    }
    if (!found) cout << "Item not found.\n";
    return 0;
}
