//C++ Program to Check Whether a character is Vowel or Consonant.

#include <iostream>

using namespace std;

int main(){
    
    char some;
    bool isUV, isLV;

    cin >> some;

    isUV = (some == 'A' || some == 'E' || some == 'I' || some == 'O' || some == 'U');
    isLV = (some == 'a' || some == 'e' || some == 'i' || some == 'o' || some == 'u');

    if (!isalpha(some)){
        cout << "kripya character value dale";
    }

    else if (isUV || isLV == 1)
    {
        cout << "hn bhai theke hai";
    }

    else{
        cout << "Na bhai nai hai ye";
    }
    

    return 0;
}