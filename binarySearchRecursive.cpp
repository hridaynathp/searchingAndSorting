/*
    Binary search using recursion
*/
#include <iostream>

using namespace std;

bool binarySearch(int* arr, int low, int high, int element){
    // Base condition
    if(low>high)
        return false;

    int mid = low+(high-low)/2;

    // Another base condition
    if(arr[mid]==element)
        return true;

    if(element<arr[mid])
        return binarySearch(arr,low,mid-1,element);
    else
        return binarySearch(arr,mid+1, high, element);
}

int main()
{
    cout << "Hello world!" << endl;

    int arr[]={1,2,3,5,7,9};

    int low, high, element;
    low=0;
    high=(sizeof(arr)/sizeof(int))-1;
    element = 4;
    bool found=binarySearch(arr,low,high,element);

    if(found)
        cout<<"found!!"<<endl;
    else
        cout<<"not found!!"<<endl;

    return 0;
}
