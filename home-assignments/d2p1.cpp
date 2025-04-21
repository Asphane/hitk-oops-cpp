#include <iostream>
using namespace std;

// Function to ensure smaller number comes first
void order(int &a, int &b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
}

int main() {
    int num1, num2;

    // Input two numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Display ordered numbers 
    cout << "Numbers in order(before): " << num1 << " " << num2 << endl;

    // Call order function
    order(num1, num2);

    // Display ordered numbers
    cout << "Numbers in order(after): " << num1 << " " << num2 << endl;

    return 0;
}
