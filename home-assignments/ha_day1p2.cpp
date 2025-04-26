#include <iostream>
using namespace std;

// Fn for n^p
double power(double n, int p = 2) 
{
    double result = 1.0;
    for (int i = 0; i < p; ++i) 
    {
        result *= n;
    }
    return result;
}

int main() 
{
    double number;
    int exponent;
    char choice;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Do you want to enter an exponent? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') 
    {
        cout << "Enter the exponent: ";
        cin >> exponent;
        cout << number << " raised to the power " << exponent << " is " << power(number, exponent) << endl;
    } 
    else 
    {
        cout << number << " squared is " << power(number) << endl;
    }

    return 0;
}
