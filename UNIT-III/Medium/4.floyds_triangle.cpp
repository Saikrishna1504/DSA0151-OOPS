#include <iostream>
using namespace std;

class FloydsTriangle {
public:
    FloydsTriangle(int rows); 
    ~FloydsTriangle(); 

private:
    int numRows;
    void printTriangle(); 
};
FloydsTriangle::FloydsTriangle(int rows) : numRows(rows) {
    cout << "Floyd's Triangle Constructor called" << endl;
    printTriangle();
}
FloydsTriangle::~FloydsTriangle() {
    cout << "Floyd's Triangle Destructor called" << endl;
}
void FloydsTriangle::printTriangle() {
    int num = 1;
    for (int i = 1; i <= numRows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << num << " ";
            ++num;
        }
        cout << endl;
    }
}
int main() {
    int rows;
    cout << "Enter the number of rows for Floyd's Triangle: ";
    cin >> rows;
    FloydsTriangle triangle(rows);
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int main() {
    int row = 5;
    int count = 1; // Initializing count to 1.

    // The outer loop maintains the number of rows.
    for (int i = 1; i <= row; i++) {
        // The inner loop maintains the number of columns.
        for (int j = 1; j <= i; j++) {
            // To print the numbers
            cout << count << " ";

            // To keep increasing the count of numbers
            count += 1;
        }

        // To proceed to the next line.
        cout << "\n";
    }

    return 0;
}
