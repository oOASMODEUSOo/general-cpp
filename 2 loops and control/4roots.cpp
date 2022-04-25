//C++ Program to Find All Roots of a Quadratic Equation

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    
    int f,s,t,determinant;

    cout << "coefficient of x^2: "; cin >> f;
    cout << "coefficient of x: "; cin >> s;
    cout << "coefficient of contant: "; cin >> t;

    determinant = (s*2) - (4*f*t);

    if (determinant == 0){
        cout << "roots are real and coincide" << endl;
        int root = ((-s) + sqrt(determinant))/2*f;
        cout << "single root of the eqation is: " << root << endl;
    }

    else if (determinant > 0){
        cout << "roots are real and distinct" << endl;
        int root1 = ((-s) + sqrt(determinant))/2*f;
        int root2 = ((-s) - sqrt(determinant))/2*f;
        cout << "Root 1: " << root1 << " Root 2: " << root2; 
    }

    else if (determinant < 0){
        cout << "roots are imaginary" << endl;
    }

    return 0;

}