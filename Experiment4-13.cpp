#include <iostream>
using namespace std;

class BankAccount;
class Audit {
public:
    void checkBalance(BankAccount);
};

class BankAccount {
    int balance;
public:
    BankAccount(int b) { balance = b; }
    friend void Audit::checkBalance(BankAccount);
};

void Audit::checkBalance(BankAccount b) {
    cout << "Balance = " << b.balance << endl;
}

int main() {
    BankAccount acc(5000);
    Audit audit;
    audit.checkBalance(acc);
    return 0;
}
