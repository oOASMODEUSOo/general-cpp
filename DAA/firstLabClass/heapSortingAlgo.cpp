#include <iostream>

using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[], int N){
    for (int i = 0; i < N; i++)
        cout << arr[i] << '\n';
}

void heapify(int arr[], int N, int i){
    int largest = i;
    int leftChild = 2 * i + 1;
    int rightChild = 2 * i + 2;

    if (leftChild < N && arr[leftChild] > arr[largest])
        largest = leftChild;

    if (rightChild < N && arr[rightChild] > arr[largest])
        largest = rightChild;

    if (largest != i){
        swap(&arr[i], &arr[largest]);
        heapify(arr, N, largest);
    }

}

void heapSort(int arr[], int N)
{
    for (int i = N / 2 - 1; i >= 0; i--)  //bulding the max heap
        heapify(arr, N, i);

    for (int i = N - 1; i >= 0; i--){
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

int main(){

    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);
    cout << "Before" << '\n';
    printArray(arr, N);

    heapSort(arr, N);

    cout << "After" << '\n';
    printArray(arr, N);
    return 0;   
}