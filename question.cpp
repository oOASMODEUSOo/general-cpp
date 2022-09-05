#include <iostream> 
#include <vector>
#include <unordered_map>
using namespace std; 

int maximumFrequency(vector<int> &arr, int n)
{
    unordered_map<int, int> tracker;
    int maxF = 0, answer;
    for (int i = 0 ; i < arr.size() ; i++){
        tracker[arr[i]]++;
        maxF = max(tracker[arr[i]], maxF);
    }

    for (int j = 0 ; j < arr.size(); j++){
        if (maxF == tracker[arr[j]]){
            answer = maxF;
            break;
        }
    }
    return answer;
}

int main(){ 


    return 0;
}