#include <iostream>
using namespace std;

template <class T>
class ArraySum {
    T arr[10];
    int size;
public:
    ArraySum(T a[], int s) {
        size = s;
        for (int i = 0; i < size; i++)
            arr[i] = a[i];
    }
    T getSum() {
        T sum = 0;
        for (int i = 0; i < size; i++)
            sum += arr[i];
        return sum;
    }
};

int main() {
    int iarr[10] = {1,2,3,4,5,6,7,8,9,10};
    float farr[10] = {1,2,2.3,3,4.4,5.5,6.6,7.7,8.8,9.9};
    double darr[10] = {1,2,3,4,5,6,7,8,9,10};
    ArraySum<int> a1(iarr, 10);
    ArraySum<float> a2(farr, 10);
    ArraySum<double> a3(darr, 10);
    cout << "Sum of int array: " << a1.getSum() << endl;
    cout << "Sum of float array: " << a2.getSum() << endl;
    cout << "Sum of double array: " << a3.getSum() << endl;
    return 0;
}
