#include <iostream>
using namespace std;

template <class T>
class Stack {
    T arr[5];
    int top;
public:
    Stack() { top = -1; }
    void push(T val) {
        if (top < 4)
            arr[++top] = val;
        else
            cout << "Stack overflow" << endl;
    }
    void pop() {
        if (top >= 0)
            cout << "Popped: " << arr[top--] << endl;
        else
            cout << "Stack underflow" << endl;
    }
    void display() {
        for (int i = 0; i <= top; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack<int> st;
    st.push(5);
    st.push(10);
    st.display();
    st.pop();
    st.display();
    return 0;
}
