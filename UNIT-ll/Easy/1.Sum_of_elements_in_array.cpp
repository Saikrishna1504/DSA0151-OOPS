#include<iostream>
using namespace std;

int main() {
    int n, i, a[10], sum = 0;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the elements in array: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        if (a[i] > 0) {
            sum = sum + a[i];
        }
    }
    cout << "Sum of positive elements: " << sum;
    return 0;
}
