#include <iostream>
using namespace std;

int main() {
    int number, sum = 0, digit;

    cout << "Enter a number: ";
    cin >> number;

    int originalNumber = number;

    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    cout << "Sum of digits of " << originalNumber << " = ";
    
    while (originalNumber != 0) {
        digit = originalNumber % 10;
        cout << digit;
        originalNumber /= 10;
        if (originalNumber != 0) {
            cout << " + ";
        }
    }

    cout << " = " << sum << endl;

    return 0;
}
