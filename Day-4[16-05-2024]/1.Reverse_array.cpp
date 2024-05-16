#include <iostream>
using namespace std;

int main() {
    int originalArr[] = {1, 2, 3, 4, 5};
    int size = sizeof(originalArr) / sizeof(originalArr[0]);

    int reversedArr[size];
    for (int i = 0; i < size; i++) {
        reversedArr[i] = originalArr[size - i - 1];
    }

    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << reversedArr[i] << " ";
    }
    cout << endl;

    return 0;
}



// or by taking the input from the user instead of predefined

#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int originalArr[size];

    cout << "Enter " << size << " elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> originalArr[i];
    }

    int reversedArr[size];
    for (int i = 0; i < size; i++) {
        reversedArr[i] = originalArr[size - i - 1];
    }

    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << reversedArr[i] << " ";
    }
    cout << endl;

    return 0;
}

