//C++ Program to Find Quotient and Remainder

#include <iostream>

using namespace std;

int main(){
    
    int number, divisor;

    cout << "Enter number: ";
    cin >> number;
    cin >> divisor;

    cout << "The quotient: " << number/divisor;
    cout << "The remainder: " << number%divisor;

    return 0;
}