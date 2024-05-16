#include <iostream>

int main() {
    const int rows = 3;
    const int cols = 3;

    int matrix1[rows][cols] = {{1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}};
    
    int matrix2[rows][cols] = {{9, 8, 7},
                                {6, 5, 4},
                                {3, 2, 1}};

    int result[rows][cols];

    // Add matrices element-wise
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display matrix 1
    std::cout << "Matrix 1:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Display matrix 2
    std::cout << "Matrix 2:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Display resultant matrix
    std::cout << "Resultant Matrix:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}


// or by taking input from the user instead of predefined values


#include <iostream>

int main() {
    const int rows = 3;
    const int cols = 3;

    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int result[rows][cols];

    // Input for matrix 1
    std::cout << "Enter elements of Matrix 1:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter element [" << i << "][" << j << "]: ";
            std::cin >> matrix1[i][j];
        }
    }

    // Input for matrix 2
    std::cout << "Enter elements of Matrix 2:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << "Enter element [" << i << "][" << j << "]: ";
            std::cin >> matrix2[i][j];
        }
    }

    // Add matrices element-wise
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display matrix 1
    std::cout << "Matrix 1:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Display matrix 2
    std::cout << "Matrix 2:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Display resultant matrix
    std::cout << "Resultant Matrix:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
