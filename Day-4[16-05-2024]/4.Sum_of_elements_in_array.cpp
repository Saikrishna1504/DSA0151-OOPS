#include <iostream>

int main() {
    const int MAX_SIZE = 100;
    int array[MAX_SIZE];
    int size;

    std::cout << "Enter the size of the array (up to " << MAX_SIZE << "): ";
    std::cin >> size;

    if (size > MAX_SIZE || size <= 0) {
        std::cout << "Invalid size. Size should be between 1 and " << MAX_SIZE << "." << std::endl;
        return 1; // Return an error code
    }

    std::cout << "Enter " << size << " elements of the array:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Element " << i+1 << ": ";
        std::cin >> array[i];
    }

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    std::cout << "Sum of all elements in the array: " << sum << std::endl;

    return 0;
}
