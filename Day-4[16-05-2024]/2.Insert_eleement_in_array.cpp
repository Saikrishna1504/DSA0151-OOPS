#include <iostream>

int main() {
    const int MAX_SIZE = 100; 
    int array[MAX_SIZE] = {1, 2, 3, 4, 5};
    int size = 5;

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    int element;
    std::cout << "Enter the element to insert: ";
    std::cin >> element;

    int position;
    std::cout << "Enter the position to insert at: ";
    std::cin >> position;

    for (int i = size - 1; i >= position; i--) {
        array[i + 1] = array[i];
    }
    array[position] = element;
    size++;

    std::cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
