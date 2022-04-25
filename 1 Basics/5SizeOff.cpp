//C++ Program to Find Size of int, float, double and char in Your System

#include <iostream>

using namespace std;

int main(){
    
    int intval;
    float floatval;
    double doubleval;
    char charval;

    cout << sizeof(intval) << endl;
    cout << sizeof(floatval) << endl;
    cout << sizeof(doubleval) << endl;
    cout << sizeof(charval);

    return 0;
}