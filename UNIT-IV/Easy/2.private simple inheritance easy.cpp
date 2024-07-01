#include <iostream>
using namespace std;

// Base class A with a protected member variable
class A {
protected:
    int x;

public:
    // Constructor that initializes x with the given value
    A(int value) : x(value) {}
};

// Derived class B that inherits from class A
class B : private A {
public:
    // Constructor that calls the base class constructor
    B(int value) : A(value) {}

    // Function to display the value of x
    void showValue() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    B obj(10); // Create an object of class B with value 10
    obj.showValue(); // Call the function to display the value of x

    return 0; // Return 0 to indicate successful execution
}
