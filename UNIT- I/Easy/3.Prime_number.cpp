#include<iostream>
using namespace std;

int main() {
    int num, i, count = 0; 
    cout << "Enter the number: ";
    cin >> num;
    for(i = 2; i <= num / 2; i++) {
        if(num % i == 0) {
            count++;
            break;
        }
    }
    if(count == 0 && num > 1) { 
        cout << num << " is a prime number.\n"; 
    } else {
        cout << num << " is not a prime number.\n"; 
    }
    return 0;
}
