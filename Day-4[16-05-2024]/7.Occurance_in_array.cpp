#include <iostream>

int main() {
    const int MAX_SIZE = 100;
    int array[MAX_SIZE];
    int size;

    std::cout << "Enter the size of the array (max " << MAX_SIZE << "): ";
    std::cin >> size;

    std::cout << "Enter " << size << " integers for the array: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> array[i];
    }

    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    int value;
    std::cout << "Enter the value to count occurrences of: ";
    std::cin >> value;

    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] == value) {
            count++;
        }
    }

    std::cout << "Number of occurrences of " << value << " in the array: " << count << std::endl;

    return 0;
}
