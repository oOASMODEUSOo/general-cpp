#include <iostream>

using namespace std;

int main(){
    int somevar, somevar2, result; 
    
    cout << "Enter 2 integer values: ";
    cin >> somevar;
    cin >> somevar2;
    result = somevar2 + somevar;

    cout << "The sum is: " << result << endl;

    return 0;
}