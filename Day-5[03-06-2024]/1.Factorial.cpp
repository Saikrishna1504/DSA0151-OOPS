#include <iostream>

unsigned long long factorial_recursive(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial_recursive(n - 1);
    }
}

int main() {
    int num = 5;
    std::cout << "The factorial of " << num << " is " << factorial_recursive(num) << std::endl;
    return 0;
}
