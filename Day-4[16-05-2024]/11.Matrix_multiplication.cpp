#include <iostream>

int main() {
    const int rows1 = 3, cols1 = 3, rows2 = 3, cols2 = 2;

    int matrix1[rows1][cols1] = {{1, 2, 3},
                                  {4, 5, 6},
                                  {7, 8, 9}};
    
    int matrix2[rows2][cols2] = {{9, 8},
                                  {7, 6},
                                  {5, 4}};

    int result[rows1][cols2] = {};

    for (int i = 0; i < rows1; ++i)
        for (int j = 0; j < cols2; ++j)
            for (int k = 0; k < cols1; ++k)
                result[i][j] += matrix1[i][k] * matrix2[k][j];

    std::cout << "Matrix 1:\n";
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j)
            std::cout << matrix1[i][j] << " ";
        std::cout << "\n";
    }

    std::cout << "Matrix 2:\n";
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j)
            std::cout << matrix2[i][j] << " ";
        std::cout << "\n";
    }

    std::cout << "Resultant Matrix:\n";
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j)
            std::cout << result[i][j] << " ";
        std::cout << "\n";
    }

    return 0;
}


// or by taking matrix input from the users


#include <iostream>

int main() {
    int rows1, cols1, rows2, cols2;

    std::cout << "Enter the number of rows and columns for Matrix 1: ";
    std::cin >> rows1 >> cols1;

    std::cout << "Enter the number of rows and columns for Matrix 2: ";
    std::cin >> rows2 >> cols2;

    if (cols1 != rows2) {
        std::cout << "Matrix multiplication not possible. Number of columns in Matrix 1 must be equal to the number of rows in Matrix 2.\n";
        return 0;
    }

    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];

    std::cout << "Enter the values for Matrix 1:\n";
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            std::cout << "Enter value for element [" << i << "][" << j << "]: ";
            std::cin >> matrix1[i][j];
        }
    }

    std::cout << "Enter the values for Matrix 2:\n";
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            std::cout << "Enter value for element [" << i << "][" << j << "]: ";
            std::cin >> matrix2[i][j];
        }
    }

    int result[rows1][cols2] = {};

    for (int i = 0; i < rows1; ++i)
        for (int j = 0; j < cols2; ++j)
            for (int k = 0; k < cols1; ++k)
                result[i][j] += matrix1[i][k] * matrix2[k][j];

    std::cout << "Matrix 1:\n";
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j)
            std::cout << matrix1[i][j] << " ";
        std::cout << "\n";
    }

    std::cout << "Matrix 2:\n";
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j)
            std::cout << matrix2[i][j] << " ";
        std::cout << "\n";
    }

    std::cout << "Resultant Matrix:\n";
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j)
            std::cout << result[i][j] << " ";
        std::cout << "\n";
    }

    return 0;
}
