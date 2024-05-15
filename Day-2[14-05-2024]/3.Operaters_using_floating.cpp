#include <iostream>
#include <cmath>  

int main() {
    double x, y;
    double sum, mul, div, sub, mod;
    
    std::cout << "Enter the first number: ";
    std::cin >> x;
    std::cout << "Enter the second number: ";
    std::cin >> y;
    
    sum = x + y;
    sub = x - y;
    mul = x * y;
    div = x / y;
    mod = std::fmod(x, y); 
    
    std::cout << "Sum is: " << sum << '\n';
    std::cout << "Sub is: " << sub << '\n';
    std::cout << "Mul is: " << mul << '\n';
    std::cout << "Div is: " << div << '\n';
    std::cout << "Mod is: " << mod << '\n';
    
    return 0;
}
