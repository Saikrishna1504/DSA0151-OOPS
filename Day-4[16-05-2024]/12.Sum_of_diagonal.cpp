#include <iostream>

int main() {
    const int size = 3;
    int matrix[size][size];

    std::cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            std::cout << "Enter element at position [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }

    int mainDiagonalSum = 0;
    for (int i = 0; i < size; ++i) {
        mainDiagonalSum += matrix[i][i];
    }

    int secondaryDiagonalSum = 0;
    for (int i = 0; i < size; ++i) {
        secondaryDiagonalSum += matrix[i][size - 1 - i];
    }

    std::cout << "Sum of the main diagonal: " << mainDiagonalSum << std::endl;
    std::cout << "Sum of the secondary diagonal: " << secondaryDiagonalSum << std::endl;

    return 0;
}
