#include <iostream>

int main() {
    const int MAX_SIZE = 100; 
    int array[MAX_SIZE];
    int size;

    std::cout << "Enter the size of the array (up to " << MAX_SIZE << "): ";
    std::cin >> size;

    if (size > MAX_SIZE || size <= 0) {
        std::cout << "Invalid size. Exiting program." << std::endl;
        return 1;
    }

    std::cout << "Enter " << size << " elements for the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> array[i];
    }

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    int position;
    std::cout << "Enter the position of the element to delete (0 to " << size - 1 << "): ";
    std::cin >> position;

    if (position < 0 || position >= size) {
        std::cout << "Invalid position. Exiting program." << std::endl;
        return 1;
    }

    for (int i = position; i < size - 1; i++) {
        array[i] = array[i + 1];
    }
    size--;

    std::cout << "Array after deletion: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
