/*
 Implementation of Bubble sort algorithm
 Time complexity : O(n2) (worst case) or O(n) (Best case)
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

// Implementation of Bubble Sort algorithm
void bubbleSort(int *arr, int size){
    for(int i=0; i<size-1; i++){
        bool flag = false;
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){ // Swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = true;
            }
        }
        // if flag is false then array is sorted
        // No need to execute loop further
        if(!flag)
            break;
    }
}

int main()
{
    cout << "Hello world!" << endl;
    int arr[]={2,7,3,4,5,1}; // Array to be sorted
    int size = sizeof(arr)/sizeof(int);
    display(arr,size);
    bubbleSort(arr,size);
    display(arr,size);
    return 0;
}
