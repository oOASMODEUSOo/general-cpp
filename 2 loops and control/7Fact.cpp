//C++ Program to Find Factorial

#include <iostream>

using namespace std;

int main(){
    
    int rannum;
    int fact = 1;
    cout << "Enter a number jiska factorial nikalna hai: ";
    cin >> rannum;

    for (int i = 1; i <= rannum; i++){
        fact*=i;
    }
    cout << "Factorial is: " << fact;
    return 0;
}