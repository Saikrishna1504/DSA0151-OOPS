#include <iostream>

int main() {
    int num1, num2, num3;
    double average;

    std::cout << "Enter three integers: ";
    std::cin >> num1 >> num2 >> num3;

    average = (num1 + num2 + num3) / 3.0;

    std::cout << "The average is " << average;

    return 0;
}
