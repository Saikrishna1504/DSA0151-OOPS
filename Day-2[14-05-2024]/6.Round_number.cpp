#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num;

    cout << "Enter a floating-point number: ";
    cin >> num;

    int roundedDown = floor(num);
    int roundedUp = ceil(num);

    cout << "Original number: " << num << "\n";
    cout << "Rounded down: " << roundedDown << "\n";
    cout << "Rounded up: " << roundedUp << "\n";

    return 0;
}
