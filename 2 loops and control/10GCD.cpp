//C++ Program to Find GCD

#include <iostream>

using namespace std;

int main(){
    
    int firstNum, secondNum, someHCF;
    cout << "Enter first and second numbers: ";
    cin >> firstNum >> secondNum;

    if (firstNum < secondNum){
        int temp = firstNum;
        firstNum = secondNum;
        secondNum = temp;
    }

    for (int i = 1 ; i < secondNum; i++){
        if (firstNum%i==0 && secondNum%i==0){
            someHCF = i;
        }
    }

    cout << "HCF is: " << someHCF;

    return 0;
}