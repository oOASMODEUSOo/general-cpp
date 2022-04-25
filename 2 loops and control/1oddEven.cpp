//C++ Program to Check Whether Number is Even or Odd

#include <iostream>

using namespace std;

int main(){
    
    int userval;

    cout << "enter an integer: " << endl;
    cin >> userval;

    if (userval%2 == 0){
        cout << "yeap it is even";
    }

    else if (userval%2 != 0 ){
        cout << "Nope this is odd";
    }

    else{
        cout << "Bruh you entered 0";
    }
    return 0;
}