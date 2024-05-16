#include <iostream>

int main() {
    const int MAX_SIZE = 100; 
    int array[MAX_SIZE];
    int size;

    std::cout << "Enter the size of the array (maximum " << MAX_SIZE << "): ";
    std::cin >> size;

    if (size <= 0 || size > MAX_SIZE) {
        std::cout << "Invalid size entered. Exiting..." << std::endl;
        return 1;
    }

    std::cout << "Enter " << size << " elements of the array:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Element " << i + 1 << ": ";
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

    double average = static_cast<double>(sum) / size;
    std::cout << "Average of all elements in the array: " << average << std::endl;

    return 0;
}
