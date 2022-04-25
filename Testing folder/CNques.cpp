// ques link: https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118817/offering/1381814

#include<iostream>

using namespace std;

class ComplexNumbers {
    // Complete this class
    public:
    int real, imaginary;

    ComplexNumbers(int real, int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }

    void print(){
        cout << real << " + i" << imaginary;
    }

    void plus( , ){
        
    }

};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        // c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}