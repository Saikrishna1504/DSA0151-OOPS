#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the n value: ";
    cin >> n;
    
    int choice;
    cout << "Enter the choice (1 for inline, 0 for regular): ";
    cin >> choice;

    if (choice == 1) {
        int value = pow(n, 2); 
        cout << "Square of the number: " << value << endl;
    } else {
        int value = (n * n);
        cout << "Square of the number is: " << value << endl;
    }

    return 0;
}
