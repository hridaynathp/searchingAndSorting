/*
    Binary search algorithm
    Algorithm must be in sorted state
    Time complexity = O(log(n))
*/
#include <iostream>

using namespace std;

bool binarySearch(int* arr, int len, int element){

    int low, high, mid;
    low = 0;
    high = len-1;
    mid = (low+high)/2;

    while(low<=high){
        if(arr[mid]==element)
            return true;

        if(element<arr[mid]){
            high = mid-1;
            mid = (low+high)/2;
        }
        else{
            low = mid+1;
            mid = (low+high)/2;
        }
    }
    return false;
}

int main()
{
    int arr[]={1,3,5,6,7,9};
    int sizeArr = sizeof(arr)/sizeof(int);

    // element to be search
    int num = 9;
    bool isFound = binarySearch(arr,sizeArr,num);

    if(isFound)
        cout<<"found!!"<<endl;
    else
        cout<<"NOT found!!"<<endl;

    return 0;
}
