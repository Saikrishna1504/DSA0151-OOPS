#include <iostream>
using namespace std;

int main() 
{ 
    int x, y;

    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;

    x = x ^ y; 
    y = x ^ y; 
    x = x ^ y; 

    cout << "After Swapping: x = " << x << ", y = " << y; 
    return 0; 
}
