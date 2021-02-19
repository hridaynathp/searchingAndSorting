/*
    Insertion sort with time complexity O(n^2)
*/
#include <iostream>

using namespace std;

// Logic to display array
void display(int *arr, int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

// Insertion sort logic
void insertionSort(int *arr, int size){
    for(int i=1; i<size; i++){
        int j = i;
        while((arr[j]<arr[j-1])&&(j!=0)){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

int main()
{
    int arr[] = {2,7,3,4,3,1};
    int size = sizeof(arr)/sizeof(int);
    display(arr, size);
    insertionSort(arr, size);
    display(arr, size);
    return 0;
}
