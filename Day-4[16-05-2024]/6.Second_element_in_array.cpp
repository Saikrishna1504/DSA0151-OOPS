#include <iostream>
#include <climits>

int main() {
    const int MAX_SIZE = 100;
    int array[MAX_SIZE];
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    std::cout << "Enter " << size << " integers for the array: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    int max = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < size; ++i) {
        if (array[i] > max) {
            secondMax = max;
            max = array[i];
        } else if (array[i] > secondMax && array[i] != max) {
            secondMax = array[i];
        }
    }

    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    if (secondMax != INT_MIN) {
        std::cout << "Second largest element in the array: " << secondMax << std::endl;
    } else {
        std::cout << "No second largest element found in the array." << std::endl;
    }

    return 0;
}
