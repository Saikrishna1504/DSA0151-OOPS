#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    (num % 3 == 0) ? cout << num << " is divisible by 3." : cout << num << " is not divisible by 3.";

    return 0;
}
