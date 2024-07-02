#include <iostream>
#include <unordered_set>
using namespace std;

int getSumOfSquares(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

bool isHappy(int num) {
    unordered_set<int> seen;
    while (num != 1 && seen.find(num) == seen.end()) {
        seen.insert(num);
        num = getSumOfSquares(num);
    }
    return num == 1;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isHappy(num)) {
        cout << num << " is a happy number." << endl;
    } else {
        cout << num << " is not a happy number." << endl;
    }
    return 0;
}


#include <set>
using namespace std;

// Function to calculate the sum of the squares of the digits of a number
int numSquareSum(int n) {
    int num = 0; // Variable to store the sum of the squares of the digits
    while (n != 0) { // Loop through each digit of the number
        int digit = n % 10; // Get the last digit of the number
        num += digit * digit; // Add the square of the digit to the sum
        n /= 10; // Remove the last digit from the number
    }
    return num; // Return the sum of the squares of the digits
}

// Function to check if a number is a Happy Number
int isHappyNumber(int n) {
    set<int> st; // Set to store the numbers we have seen to detect cycles
    while (1) { // Infinite loop to keep checking the number
        n = numSquareSum(n); // Get the sum of the squares of the digits of n
        if (n == 1) // If n becomes 1, it is a Happy Number
            return true; // Return true indicating it is a Happy Number
        if (st.find(n) != st.end()) // If n is already in the set, a cycle is detected
            return false; // Return false indicating it is not a Happy Number
        st.insert(n); // Insert the current value of n into the set
    }
}
