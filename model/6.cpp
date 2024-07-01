#include <iostream>

class NumberComparer {
public:
    int number1;
    int number2;

    // Method to read two integers
    void readNumbers() {
        std::cout << "Enter the first number: ";
        std::cin >> number1;
        std::cout << "Enter the second number: ";
        std::cin >> number2;
    }

    // Method to compare the two integers
    void compareNumbers() {
        if (number1 == number2) {
            std::cout << "The numbers are equal." << std::endl;
        } else {
            std::cout << "The numbers are not equal." << std::endl;
        }
    }
};

int main() {
    NumberComparer comparer;

    comparer.readNumbers();
    comparer.compareNumbers();

    return 0;
}
