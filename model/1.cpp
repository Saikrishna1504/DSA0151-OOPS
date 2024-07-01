#include <iostream>
using namespace std;
void callbyvalue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
void callbyreference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    cout << "Enter the value for a: ";
    cin >> a;
    cout << "Enter the value for b: ";
    cin >> b;
    cout << "original values:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    callbyvalue(a, b);
    cout << "The value after call by value:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    callbyreference(a, b);
    cout << "The value call by reference:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
