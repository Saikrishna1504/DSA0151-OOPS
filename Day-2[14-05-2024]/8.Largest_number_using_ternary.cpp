#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, max;
    
    cout << "Enter the first number: ";
    cin >> n1;
    
    cout << "Enter the second number: ";
    cin >> n2;
    
    cout << "Enter the third number: ";
    cin >> n3;
    
    max = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
    
    cout << "Largest number among " << n1 << ", " << n2 << ", and " << n3 << " is " << max << ".";
    
    return 0;
}
