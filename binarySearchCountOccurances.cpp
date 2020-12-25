#include <iostream>

using namespace std;

// Logic to display array
void display(int* arr, int len){
    cout<<"Given array is :"<<endl;
    for(int i=0; i<len; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl<<endl;
}

// Binary Search returns the index of first occurance 
// or last occurance of element to count the occurance of number
// boolean flag represents if we are searching for first occurance or last
int binarySearch(int* arr, int n, int x, bool flag){

    int low = 0;
    int high = n-1;
    int mid;
    int index = -1;

    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==x){
            index = mid; // Store the index of lowest/highest occurance
            if(flag==true) // Search for first occurance
                high = mid-1;
            else // Search for last occurance
                low = mid+1;
        }
        else if(x<arr[mid])
            high = mid-1;
        else
            low = mid+1;
    }
    return index;
}

int main()
{
    int arr[]={2,5,10,10,10,11,11};
    int len = sizeof(arr)/sizeof(int);
    display(arr, len);
    int x = 11;
    int firstOccurance = binarySearch(arr, len, x, true);
    int lastOccurance = binarySearch(arr, len, x, false);

    if(firstOccurance == -1)
        cout<<"element not found !!"<<endl;
    else{
        int occurances = lastOccurance - firstOccurance + 1;
        cout<< x << " repeated "<< occurances << " times."<<endl;
    }
    return 0;
}
