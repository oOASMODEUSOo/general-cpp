//C++ Program to Calculate Sum of Natural Numbers

#include <iostream>

using namespace std;

int main(){
    
    int upto;
    cout << "enter a positive number" << endl;
    cin >> upto;

    int sum = (upto*(upto-1))/2;
    cout << sum;

    return 0;
}
