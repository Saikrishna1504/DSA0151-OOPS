#include <iostream>

int main() {
    const int MAX_SIZE = 100;
    int arr1[MAX_SIZE], arr2[MAX_SIZE], result[MAX_SIZE];
    int size1, size2;

    std::cout << "Enter the size of array 1: ";
    std::cin >> size1;
    std::cout << "Enter the elements of array 1 in sorted order: ";
    for (int i = 0; i < size1; i++) {
        std::cin >> arr1[i];
    }

    std::cout << "Enter the size of array 2: ";
    std::cin >> size2;
    std::cout << "Enter the elements of array 2 in sorted order: ";
    for (int i = 0; i < size2; i++) {
        std::cin >> arr2[i];
    }

    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }
    while (i < size1) {
        result[k++] = arr1[i++];
    }
    while (j < size2) {
        result[k++] = arr2[j++];
    }

    std::cout << "Merged array: ";
    for (int i = 0; i < size1 + size2; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
