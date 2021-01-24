/*
Selection sort: time complexity O(n^2)
*/
#include <iostream>

using namespace std;

// Logic to display array
void display(int *arr, int len){
    for(int i =0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// Selection sort logic
void selectionSort(int *arr, int len){

    int temp;
    for(int i=0;i<len;i++){
        int iMin = i;
        for(int j=i+1;j<len;j++){
            if(arr[j]<arr[iMin]){
                iMin = j;
            }
        }
        temp = arr[i];
        arr[i] = arr [iMin];
        arr[iMin] = temp;
    }
}

int main()
{
    int arr[] = {4,1,2,5,3};
    int len = sizeof(arr)/sizeof(int);
    display(arr,len); // Display original unsorted array
    selectionSort(arr,len);
    display(arr,len); // Display sorted array
    return 0;
}
